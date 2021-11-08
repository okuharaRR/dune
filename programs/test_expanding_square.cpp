//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Mika Okuhara                                                     *
//***************************************************************************

#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

using namespace DUNE::IMC;
using namespace DUNE::Parsers;

static
void
usage(void)
{
  std::cerr << "== Usage == "
            << std::endl
            << std::endl
            << " test_expanding_square host port imcid"
            << std::endl
            << std::endl;
}

static void
sendMsg(IMC::Message& msg, UDPSocket& sock, Address& dest, int port)
{
  DUNE::Utils::ByteBuffer bb;
  msg.setTimeStamp();
  IMC::Packet::serialize(&msg, bb);
  sock.write((const uint8_t*)bb.getBuffer(), msg.getSerializationSize(), dest, port);
  msg.toText(std::cout);
}

int
main(int argc, char** argv)
{
  --argc; ++argv;
  bool calibrate = true, just_load = false, do_parse = true;

  if (argc < 3)
  {
    usage();
    return 1;
  }

  UDPSocket sock;
  Address dest(argv[0]);
  uint16_t port = atoi(argv[1]);
  uint16_t dimcid = atoi(argv[2]);

  IMC::PlanControl cmd;
  cmd.setDestination (dimcid);
  cmd.type = PlanControl::PC_REQUEST;
  cmd.op = IMC::PlanControl::PC_START;
  if (calibrate)
    cmd.flags = PlanControl::FLG_CALIBRATE;
  else
    cmd.flags = 0;
  cmd.request_id = 111;

  IMC::PlanSpecification mission_spec;

  IMC::ExpandingSquare man; // Replace Goto maneuver with the new one ExpandingSquare
  man.lat = Angles::radians(41.1843982);
  man.lon = Angles::radians(-8.70599224);
  man.z = 0;
  man.z_units = IMC::Z_DEPTH;
  man.speed = 1.2;
  man.speed_units = IMC::SUNITS_METERS_PS;
  man.width = 100;
  man.hstep = 10;
  // man.length = 100;
  // man.range = 10;
  // Fill the rest of the fields

  IMC::PlanManeuver pman;
  pman.maneuver_id = "m1";
  pman.data.set(man);

  mission_spec.maneuvers.push_back(pman);
  mission_spec.plan_id = "plan-test-expanding-square";
  mission_spec.start_man_id = pman.maneuver_id;

  cmd.arg.set(mission_spec);
  cmd.plan_id = mission_spec.plan_id;

  sendMsg(cmd, sock, dest, port);

  return 0;
}
