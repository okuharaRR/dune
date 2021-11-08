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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 6c31550b7da829e5708e710d202665be                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.183917174794);
    msg.setSource(21163U);
    msg.setSourceEntity(122U);
    msg.setDestination(30192U);
    msg.setDestinationEntity(118U);
    msg.state = 162U;
    msg.flags = 191U;
    msg.description.assign("BHYBDVITMAIQEXRXGBNRKOVOIVBKSTWJGWWRYCCVHXQTSCQLSMCCYZZNGHKCNWFSOZQJZBIUYUDDFHPXDLCUCLIEWXKNMROVKUKRTQYTYZPWNGXMZGIGZAFGDSIZTVZHJUKDSU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.55028448435);
    msg.setSource(45247U);
    msg.setSourceEntity(135U);
    msg.setDestination(13756U);
    msg.setDestinationEntity(149U);
    msg.state = 12U;
    msg.flags = 179U;
    msg.description.assign("GYCZGLFAMLIOSLSRTXBQKZPSGITADBXMTFAEOUFWNELWECINHZJTCGTMKJZLGPZUHNHANACXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.798258297903);
    msg.setSource(52265U);
    msg.setSourceEntity(168U);
    msg.setDestination(8832U);
    msg.setDestinationEntity(184U);
    msg.state = 8U;
    msg.flags = 220U;
    msg.description.assign("XIKEEMRKQFOLCRGNZWCNNGDSVOSCWYTLVMLVEJHLYHLOZHBCKWJKRPRNYLKQAYXUIVVFTUCVAPTBWICGSTMUCXDQSHILMSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.15816903718);
    msg.setSource(9465U);
    msg.setSourceEntity(140U);
    msg.setDestination(5418U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.805169376724);
    msg.setSource(13156U);
    msg.setSourceEntity(128U);
    msg.setDestination(34591U);
    msg.setDestinationEntity(246U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.767685888192);
    msg.setSource(56975U);
    msg.setSourceEntity(26U);
    msg.setDestination(4339U);
    msg.setDestinationEntity(4U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.338607990784);
    msg.setSource(54229U);
    msg.setSourceEntity(113U);
    msg.setDestination(25782U);
    msg.setDestinationEntity(0U);
    msg.id = 116U;
    msg.label.assign("BNDHTWVDFAAQDYLPLCUILQZDXXONNCMZRRVWCWBNJTEGFNTYYRXLHQKMRTYBAXJLBHFIGBKXDG");
    msg.component.assign("PMCNQYIFHFXSBMZRBESAYCRDXWVWRGLVGMRSGSRQQDIUHOQWSFDMUOSPBKYUTYKDTOPOEDKJQQUNCSXSFVXKIXMDRATVTUJLLLDSCIIOPGJLGHEYYLHKUZVCITTBAJPPHCGEHCZEKJFTKAWRMAMGNDWNIVUMDBKOIMMDLRTEZWNUIASFGYZVOKNHOJFBJWYALHCZQP");
    msg.act_time = 30951U;
    msg.deact_time = 37202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.302271454566);
    msg.setSource(1170U);
    msg.setSourceEntity(140U);
    msg.setDestination(60566U);
    msg.setDestinationEntity(84U);
    msg.id = 32U;
    msg.label.assign("CGYUNBHTFJQVBKVXSSPQCCGYXXODPRBJAWXGXSFRPDWCOGJHASBKSSWDEUFGXFLDAUOPSNCTMZTLDVRAHKBRLBIUIFVVGVPXZNSOGUMHELITMABQIATWIKEWWMKQVUJFINVNUBHHBZTDSLGSJRCQZGMZNMQBENGJOYEPMIKJZ");
    msg.component.assign("SGAEYVPBJRCXOZLXYMWPLPDEKAJQSMVUTUXTCNNRGXJRYDIENKINRLBCNBOLPPZZUN");
    msg.act_time = 33800U;
    msg.deact_time = 51055U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.607473853991);
    msg.setSource(45394U);
    msg.setSourceEntity(219U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(23U);
    msg.id = 40U;
    msg.label.assign("GQHMCOYMAENGZFICUZKPYTSWJMWQRABGOHCYJRRLDXU");
    msg.component.assign("CCBAWHVGRPZAYCGGWQWGDEEVVZPSTYANCIBDQOTMVMBLQUJEJVERFDSOFDSBQNKPVNNFFWHTHXJDFTRUGQKIWUHTDYHDZOBJTDKMXETDJMVINSLRUSNWOEZWUBMFCBEOFLKXIGUVIUIRYZZRKXHAXYLRPBAOHQKJRGNMKJIPASERTYGIAZFJFSLUZFCPKZQP");
    msg.act_time = 11266U;
    msg.deact_time = 6305U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.460578071262);
    msg.setSource(11254U);
    msg.setSourceEntity(58U);
    msg.setDestination(33374U);
    msg.setDestinationEntity(10U);
    msg.id = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.183412455686);
    msg.setSource(45957U);
    msg.setSourceEntity(56U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(128U);
    msg.id = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.99449670716);
    msg.setSource(39603U);
    msg.setSourceEntity(107U);
    msg.setDestination(60415U);
    msg.setDestinationEntity(131U);
    msg.id = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.985042561879);
    msg.setSource(48303U);
    msg.setSourceEntity(57U);
    msg.setDestination(48589U);
    msg.setDestinationEntity(240U);
    msg.op = 233U;
    msg.list.assign("LNBWNILMFKVYJQUEPCCBCUTLZSSZNBYXXNCVLPYHQLSJRMFQNNSOMASGWBZYMTKBXUZNEWCILXAUVEHGTMVDXIPYSGZOGWTCEKROAKIBQTRNNXOYSDZZDFGWKJWDPVYPZIOMGESFMJHXKJAWTRAYDAGUTPJLDMPXOWAOLIOKUHGSPDFAIOKLQEDMDIJB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.501022584732);
    msg.setSource(36210U);
    msg.setSourceEntity(176U);
    msg.setDestination(13370U);
    msg.setDestinationEntity(158U);
    msg.op = 194U;
    msg.list.assign("CNXBFNRRGTRYDJYSWCGOWGLRIJITNDTVAKPGGVLFUMCMBGPCVWUULAPYKARPIZHCTMQCXNKJELMQKHHLVVUQBFQYCTBZCLTISGWNGYBCFOREDEHVLILUKDSUMILSCYXRWUDIKZEDJKHNJOJOXUDSONHPAIEAHHEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.70777358808);
    msg.setSource(50369U);
    msg.setSourceEntity(212U);
    msg.setDestination(49569U);
    msg.setDestinationEntity(5U);
    msg.op = 183U;
    msg.list.assign("CBCTCATISBQENJBQVFZJOVMPJLEOXUKTCRMHFZMRAVNYROGAKNVFAUXRATDKJIZQDZVCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.315803525626);
    msg.setSource(40529U);
    msg.setSourceEntity(187U);
    msg.setDestination(2398U);
    msg.setDestinationEntity(171U);
    msg.value = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.553271062055);
    msg.setSource(58312U);
    msg.setSourceEntity(41U);
    msg.setDestination(26549U);
    msg.setDestinationEntity(142U);
    msg.value = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.880891932666);
    msg.setSource(43241U);
    msg.setSourceEntity(241U);
    msg.setDestination(64924U);
    msg.setDestinationEntity(83U);
    msg.value = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.568627377136);
    msg.setSource(9384U);
    msg.setSourceEntity(147U);
    msg.setDestination(15415U);
    msg.setDestinationEntity(0U);
    msg.consumer.assign("EHOJLABQVHPIMHRZMRFSCYHHBCINTBRPYLVJVWVVETFLRCULESEZSTHRZZSSOUE");
    msg.message_id = 48771U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.3796610546);
    msg.setSource(44723U);
    msg.setSourceEntity(107U);
    msg.setDestination(16631U);
    msg.setDestinationEntity(101U);
    msg.consumer.assign("NGGDLJMVAEYKDRTCQNJBCOQLZKKWRCLFPGVCQSRTJEMEVDJJBESNCNLSFLRDAWNIXTHWVAMFJRKDFPOUHCDWHINCSBOXIXZAYPDOWPEMSPTBAFOPYSQHVOZVIRJCAYIMZKQBSLQXUGJTZXGRZMIHYWIYOANWYPQWVHNOUT");
    msg.message_id = 53633U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.231248271936);
    msg.setSource(3297U);
    msg.setSourceEntity(27U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(16U);
    msg.consumer.assign("MZFNKUYQSRDOBMTNEGBTSSEMRXFMBBTWVRGVXYQAOFTDABVCJQGFPHCVYMLHHIRXFHNZHFSEKYKLOKXXLLANIVGGJWBCIWFAHKGNNOCAFZJJESSPIKUAOELZRPQHWOWXIVLTSIUJAAZDBMNSUUOHDQPEQLUMCITCXSTPQEKUZUBYPYJJDDDRQMZJHAXMWSCRJECGBYGZLVTXNRWKYYPFPXEUQKWTBWZKPEROQ");
    msg.message_id = 55694U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.538654538536);
    msg.setSource(1859U);
    msg.setSourceEntity(88U);
    msg.setDestination(25951U);
    msg.setDestinationEntity(163U);
    msg.type = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.846990394566);
    msg.setSource(31604U);
    msg.setSourceEntity(40U);
    msg.setDestination(26402U);
    msg.setDestinationEntity(48U);
    msg.type = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.787163272442);
    msg.setSource(49194U);
    msg.setSourceEntity(162U);
    msg.setDestination(6888U);
    msg.setDestinationEntity(69U);
    msg.type = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.148381049452);
    msg.setSource(60975U);
    msg.setSourceEntity(195U);
    msg.setDestination(22143U);
    msg.setDestinationEntity(132U);
    msg.op = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.532331043831);
    msg.setSource(24573U);
    msg.setSourceEntity(134U);
    msg.setDestination(53162U);
    msg.setDestinationEntity(181U);
    msg.op = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0261548605235);
    msg.setSource(1635U);
    msg.setSourceEntity(24U);
    msg.setDestination(31856U);
    msg.setDestinationEntity(249U);
    msg.op = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.112413301022);
    msg.setSource(6757U);
    msg.setSourceEntity(109U);
    msg.setDestination(33504U);
    msg.setDestinationEntity(98U);
    msg.total_steps = 189U;
    msg.step_number = 93U;
    msg.step.assign("NJFPUPPOFZJYQPNAKLBXETOMNNLHDQGMMSWLQIZEVKSQFYTOWLRIYUNYCPUGMXRA");
    msg.flags = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.489965751649);
    msg.setSource(3042U);
    msg.setSourceEntity(16U);
    msg.setDestination(20902U);
    msg.setDestinationEntity(22U);
    msg.total_steps = 22U;
    msg.step_number = 248U;
    msg.step.assign("CPSEBTXGBHBYMPRELTRUCDHVHDIAQNGYVDILQYBFWUXHJWMQDCUAKVQYOXINIGDXQBKBPKSKFDZLZKMZPFUFSXNZSJLPEFXARPCMTWHBCINYXSOECUDSTZAFKLDITRFZZLNKGXPXWUM");
    msg.flags = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.487175805997);
    msg.setSource(40413U);
    msg.setSourceEntity(65U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(190U);
    msg.total_steps = 190U;
    msg.step_number = 51U;
    msg.step.assign("ITXMWZPPZYIJHVGWRUNXADC");
    msg.flags = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.562941930346);
    msg.setSource(48608U);
    msg.setSourceEntity(233U);
    msg.setDestination(43916U);
    msg.setDestinationEntity(110U);
    msg.state = 68U;
    msg.error.assign("WLVZJAQMPZYTJMIXHPOMXUOFGNKWKLLBRDAJFPFEWWSFOMWYEJVRMBTSOBWTUIPKRWGKGZACNTXNDCZEHICQMOQIEGKYQVYVHZEANAXOXEZDHLJMQFDMZBQQOANYDKLLIXHDQPGCYRTVJNNTAUUVUZKRWKSGGQHEBLFSUIPCHPCNPOBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.0714824552517);
    msg.setSource(16009U);
    msg.setSourceEntity(35U);
    msg.setDestination(32709U);
    msg.setDestinationEntity(72U);
    msg.state = 148U;
    msg.error.assign("PXLCYBHZUBVOJGRVYPHVXPDTBRHLSKTTQNDWRBANABZUONUDQMESHPHTQJXRNYMMFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.0086620789212);
    msg.setSource(54839U);
    msg.setSourceEntity(32U);
    msg.setDestination(21418U);
    msg.setDestinationEntity(195U);
    msg.state = 18U;
    msg.error.assign("QLVCLTWAGJTNURGVHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.2608895783);
    msg.setSource(45262U);
    msg.setSourceEntity(131U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(196U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.580920782764);
    msg.setSource(26763U);
    msg.setSourceEntity(108U);
    msg.setDestination(41988U);
    msg.setDestinationEntity(150U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.167463225049);
    msg.setSource(10408U);
    msg.setSourceEntity(116U);
    msg.setDestination(59903U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.993181247163);
    msg.setSource(49794U);
    msg.setSourceEntity(206U);
    msg.setDestination(19254U);
    msg.setDestinationEntity(11U);
    msg.op = 11U;
    msg.speed_min = 0.0117066922452;
    msg.speed_max = 0.200210297748;
    msg.long_accel = 0.187797451085;
    msg.alt_max_msl = 0.7200508678;
    msg.dive_fraction_max = 0.281817783021;
    msg.climb_fraction_max = 0.632622920814;
    msg.bank_max = 0.593286436006;
    msg.p_max = 0.242007183807;
    msg.pitch_min = 0.523499936405;
    msg.pitch_max = 0.935616745657;
    msg.q_max = 0.90696040308;
    msg.g_min = 0.587903917022;
    msg.g_max = 0.496085894105;
    msg.g_lat_max = 0.2125038145;
    msg.rpm_min = 0.551666648758;
    msg.rpm_max = 0.775468512851;
    msg.rpm_rate_max = 0.0439827382079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.187798530288);
    msg.setSource(47181U);
    msg.setSourceEntity(110U);
    msg.setDestination(59729U);
    msg.setDestinationEntity(207U);
    msg.op = 40U;
    msg.speed_min = 0.383280820815;
    msg.speed_max = 0.213803675371;
    msg.long_accel = 0.166775916752;
    msg.alt_max_msl = 0.601807064855;
    msg.dive_fraction_max = 0.0506249169511;
    msg.climb_fraction_max = 0.510786327187;
    msg.bank_max = 0.699014935625;
    msg.p_max = 0.469782455057;
    msg.pitch_min = 0.919304079107;
    msg.pitch_max = 0.989228045428;
    msg.q_max = 0.244545091348;
    msg.g_min = 0.151784183852;
    msg.g_max = 0.903552943155;
    msg.g_lat_max = 0.557562219521;
    msg.rpm_min = 0.472887231348;
    msg.rpm_max = 0.701726478073;
    msg.rpm_rate_max = 0.0137128073115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.522092683683);
    msg.setSource(15372U);
    msg.setSourceEntity(141U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(239U);
    msg.op = 218U;
    msg.speed_min = 0.374880730234;
    msg.speed_max = 0.949695649324;
    msg.long_accel = 0.3349132233;
    msg.alt_max_msl = 0.235788723321;
    msg.dive_fraction_max = 0.160915736126;
    msg.climb_fraction_max = 0.384615975438;
    msg.bank_max = 0.890896410156;
    msg.p_max = 0.515138316583;
    msg.pitch_min = 0.513954181595;
    msg.pitch_max = 0.689422788241;
    msg.q_max = 0.36388087017;
    msg.g_min = 0.88124875452;
    msg.g_max = 0.824087927843;
    msg.g_lat_max = 0.819431126522;
    msg.rpm_min = 0.912811051799;
    msg.rpm_max = 0.274771767813;
    msg.rpm_rate_max = 0.576013405631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.0843032315009);
    msg.setSource(37731U);
    msg.setSourceEntity(62U);
    msg.setDestination(58606U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.853995295153);
    msg.setSource(52085U);
    msg.setSourceEntity(147U);
    msg.setDestination(4273U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.229505058313);
    msg.setSource(64065U);
    msg.setSourceEntity(37U);
    msg.setDestination(38103U);
    msg.setDestinationEntity(110U);
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KGKOQDYQUJASJWFZLPPFGHUVDDSGNTTTFMWRQGOWCYFPHRDAXHNAZCMZTGVMRIEWWGXJINQHDKIXTZILKWMOGXZXPTFFKVTUQCBHUOJEJUCBSCONLRACJBSBDAFFGNTDROJOBA");
    tmp_msg_0.attr_type = 235U;
    tmp_msg_0.min.assign("UASZKGDEQMLFLCANMULXPXYRWSORGLROPOHJDCHVJLVFIHDTURTYFEIYIMBZJFEKNZAGPYWAJTGGEMDFIENXILCVJAWOVHBLZHQNWHLADQZNKCPHRUHBPVVKSIYOOEBRAOXBDGP");
    tmp_msg_0.max.assign("DWTNNYFOYHSPLLQUZZRIZLFUBHXNWYTOJYPKGGSRLUVCWEXCACQSPEPAMSJFTAIXHHMVKANBPSNFGEOMTJPCWZCYWVSEXBXQRVAKBSMNEJEQDFUYUXIATBJNZXSHZQDMEOUEKRZDGQTTKTINOSJLDHWRCVODACYAVFGMXNLVJUKJUKDRVPPGWIOQKPCVEEOWMFQGY");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.390714762678);
    msg.setSource(41545U);
    msg.setSourceEntity(51U);
    msg.setDestination(11153U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.962558180096;
    msg.lon = 0.0439789456723;
    msg.height = 0.823733599695;
    msg.x = 0.29294619081;
    msg.y = 0.506550984936;
    msg.z = 0.372924569748;
    msg.phi = 0.306064119401;
    msg.theta = 0.671310243867;
    msg.psi = 0.500905431197;
    msg.u = 0.348649321316;
    msg.v = 0.335981671183;
    msg.w = 0.511538790619;
    msg.p = 0.51207809483;
    msg.q = 0.650166653124;
    msg.r = 0.0201257831784;
    msg.svx = 0.532671830931;
    msg.svy = 0.666998167185;
    msg.svz = 0.656138434982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.660698775941);
    msg.setSource(52072U);
    msg.setSourceEntity(187U);
    msg.setDestination(44221U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.77600380787;
    msg.lon = 0.142530176723;
    msg.height = 0.201736986193;
    msg.x = 0.0494585054131;
    msg.y = 0.00113417392765;
    msg.z = 0.321825356203;
    msg.phi = 0.564098076313;
    msg.theta = 0.416292968967;
    msg.psi = 0.952853335488;
    msg.u = 0.937943382145;
    msg.v = 0.943260832543;
    msg.w = 0.521045473678;
    msg.p = 0.99651767921;
    msg.q = 0.718751967579;
    msg.r = 0.976763246132;
    msg.svx = 0.983807629905;
    msg.svy = 0.25116748949;
    msg.svz = 0.984519681238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.0963949001407);
    msg.setSource(29852U);
    msg.setSourceEntity(97U);
    msg.setDestination(49821U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.613760201627;
    msg.lon = 0.626027661785;
    msg.height = 0.129707264752;
    msg.x = 0.709603861501;
    msg.y = 0.680674772536;
    msg.z = 0.803450920528;
    msg.phi = 0.307879253367;
    msg.theta = 0.749954679528;
    msg.psi = 0.175210342369;
    msg.u = 0.525205430128;
    msg.v = 0.446235561158;
    msg.w = 0.189427711643;
    msg.p = 0.784948906627;
    msg.q = 0.548579116122;
    msg.r = 0.658221770035;
    msg.svx = 0.330997081011;
    msg.svy = 0.0789287497216;
    msg.svz = 0.212922053474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.784540226961);
    msg.setSource(24992U);
    msg.setSourceEntity(34U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(46U);
    msg.op = 6U;
    msg.entities.assign("YEWUXVXHYCLHLKUVZEBQFTZCOZLBAKMAEDBVMSKYYAPRTSEEOHPVWZHKZIHCDWGMWFHTQIVDKUPQEPJYAJGUMFNILOUHUCJTFNBFETSGCFJNLQGXPJWNZRWSEOOIFFBKGYKGRJTIQYRIKSIAAEPEXARXXUHNLDRQPJJTDXMDJDSQOZOQVGAVICLBFMNDFUVYLXGNNCZGWBONZSDAMKVLLWYOYRSAGDXQMNWWUTBVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.151804057177);
    msg.setSource(39888U);
    msg.setSourceEntity(44U);
    msg.setDestination(18183U);
    msg.setDestinationEntity(65U);
    msg.op = 114U;
    msg.entities.assign("AMPLKSSKCKKEGDUOBTHSXLXZNTVPEFKBMCUPDECBCQWJLZFQMONZWXADXEFQYZFBHTQDYPDUKREUOUWMMACRXSTLDWNJEZQERXMKUPPYFIVQALVZYTOCGLAQJZTGGDSCDARWVZSIYGIHHLXIVFBYVVIMSATVYXXNTXARSWWLGHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.837741722321);
    msg.setSource(54241U);
    msg.setSourceEntity(197U);
    msg.setDestination(55206U);
    msg.setDestinationEntity(48U);
    msg.op = 6U;
    msg.entities.assign("VBWDTIJFYSSJCKQVZIOPEGIPNTXLZSBRLHKIJAXXJGIUWSVLFWSQBNDDJOYKUADHTAEDXFOREDUFYYAGZYNUPBLNXPCVCMZAVEZIMHBBJJHSEKWCPZGLDVRRSWAUOCCEIRTPZHGHKGFUIEQMNVYXGQOZPQMOLKMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.968929344882);
    msg.setSource(57663U);
    msg.setSourceEntity(221U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(26U);
    msg.type = 103U;
    msg.speed = 27487U;
    const char tmp_msg_0[] = {-3, 14, 83, -12, 63, -11, 57, 124, 17, -40, -69, -5, -90, 113, -34, -31, 106, -94, -60, -57, -12, -97, 64, -38, 77, -26, 60, 3, -104, -23, -66, 41, 96, -38, 29, -99, 116, -32, 103, -58, -78, 72, -97, -114, 100, -77, -89, 114, 113, -57, 10, -128, 64, 0, -76, -103, 121, -119, -5, 109, -103, -71, 32, 121, 84, 121, 38, -118, 83, 24, -95, -91, 80, -114, 8, -68, 30, -103, -119, 25, -122, -53, -95, 112, -70, -106, -64, -86, -3, -92, -101, -122, 45, -56, 86, -117, 125, -26, 66, -90, 56, -30, -5, 77, -23, 71, -118, 53, -35, -121, -113, 21, -27, 77, -31, 104, -86, -25, -90, -101, 9, 37, -9, -37, 81, 126, -77, 22, 47, -81, 0, -60, 8, -119, 105, -54};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.539652663601);
    msg.setSource(28316U);
    msg.setSourceEntity(103U);
    msg.setDestination(7088U);
    msg.setDestinationEntity(220U);
    msg.type = 99U;
    msg.speed = 46830U;
    const char tmp_msg_0[] = {-55, 47, 81, -88, 49, -116, -4, -107, 85, -96, 64, 107, -84, 7, -26, -93, 87, -24, -99, 46, 121, 118, 16, -20, 119, -70, -44, 64, -107, -87, -76, 118, 92, -40, 80, 107, -90, 112, -57, 78, -88, 85, 110, 32, 38, -66, 73, -7, -58, 60, -50, 101, -21, 3, 100, 42, 13, -31, -96, -121, -33, 115, 87, 28, 61, -110, -8, 125, 113, -12, 82, 4, -48, -74, -70, -123, 102, -58, 110, -15, -41, -2, 106, -84, -116, 87, 26, 92, -119, 36, 47, -53, 103, 58, -106, -54, 87, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.205038065907);
    msg.setSource(63431U);
    msg.setSourceEntity(43U);
    msg.setDestination(37061U);
    msg.setDestinationEntity(71U);
    msg.type = 128U;
    msg.speed = 36953U;
    const char tmp_msg_0[] = {83, 9, -33, -113, 0, -124, -36, 1, 59, -25, -80, 32, 119, -94, 46, 57, -45, 105, -17, -74, 122, 20, 61, 85, -68, -65, 40, -111, -44, 17, 3, -68, 18, -125, 60, -98, -66, -81, 2, 45, -123, 52, 119, 81, -93, -117, -68, -93, 106, 123, -96, 96, 14, 123, 2, -23, -21, -95, 100, 86, -125, -103, 76, 104, -47, -42, -36, 70, -107, 33, -47, 60, 119, 2, 43, -104, 36, 53, 102, -46, 6, -62, -83, -127, -42, 83, -1, -70, -79, -46, 31, -38, 34, -47, 89, -123, -74, -75, -93, -19, 63, 71, -115, 82, 64, -38, -103, -64, -38, -42, -112, -44, 97, -108, -50, -66, -58, -73, -19, -51, -29, 104, -127, 11, -4, 30, -75, 39, -3, -82, -120, 72, 57, 52, -94, 73, -48, -34, 110, -118, 55, -82, 17, 51, -4, 95, 71, 78, -48, 3, -102, -71, 121, 38, 107, 18, 82, 26, -25, 30, -71, -6, -32, 66, 80, 33, 60, -38, -125, 112, -90, 97, -67, 76, -88, -101, -21, 75, -88, 41, 117, -79, 28, -77, 103, -127, 49, 58, 37, 73, -5, -54, 43, 35, -124, 109, 15, 65, 33, -7};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.0267463657951);
    msg.setSource(1389U);
    msg.setSourceEntity(214U);
    msg.setDestination(44075U);
    msg.setDestinationEntity(14U);
    msg.op = 234U;
    msg.tas2acc_pgain = 0.971584083042;
    msg.bank2p_pgain = 0.585451304322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.779724087224);
    msg.setSource(5966U);
    msg.setSourceEntity(141U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(85U);
    msg.op = 126U;
    msg.tas2acc_pgain = 0.0789240733147;
    msg.bank2p_pgain = 0.571562886368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.372128083147);
    msg.setSource(19640U);
    msg.setSourceEntity(135U);
    msg.setDestination(32780U);
    msg.setDestinationEntity(199U);
    msg.op = 22U;
    msg.tas2acc_pgain = 0.969219343398;
    msg.bank2p_pgain = 0.367186631587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.0439781306786);
    msg.setSource(56532U);
    msg.setSourceEntity(83U);
    msg.setDestination(44333U);
    msg.setDestinationEntity(47U);
    msg.available = 2062068911U;
    msg.value = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.888882420887);
    msg.setSource(739U);
    msg.setSourceEntity(214U);
    msg.setDestination(47842U);
    msg.setDestinationEntity(237U);
    msg.available = 526036535U;
    msg.value = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.0810951510867);
    msg.setSource(41573U);
    msg.setSourceEntity(242U);
    msg.setDestination(41361U);
    msg.setDestinationEntity(216U);
    msg.available = 4117352582U;
    msg.value = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.899480978547);
    msg.setSource(20169U);
    msg.setSourceEntity(251U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(232U);
    msg.op = 122U;
    msg.snapshot.assign("LYDLXPFEIJTXSKACXLFWCZOKLHBXUCZIKVKNPSCGGDNAKGUIHNBDCLJYZSPUQZLJUTOGNUIPMIUWS");
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.589272814416;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.926996272009);
    msg.setSource(11809U);
    msg.setSourceEntity(84U);
    msg.setDestination(20039U);
    msg.setDestinationEntity(157U);
    msg.op = 12U;
    msg.snapshot.assign("LPDLNKZWAJKOYAXENRTRPOZQABQHYJBUKZWSPHZGIMCMONYPKPBKHARCJIQESBYNMIMTISRUXVHNQCMXGZDTHWGNTSFDPNLGABYDIPFHWXHJZUGHVMXQVWROLYONUWUIRGCBGCQASQGGSZUSWTIFEDRCAVITRYMVYJKLGEDXKEBFDLWTLYAOQWUKVATRQJZFJMXXZ");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.611602325912;
    tmp_msg_0.speed_units = 215U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.823436486688);
    msg.setSource(20281U);
    msg.setSourceEntity(73U);
    msg.setDestination(45813U);
    msg.setDestinationEntity(112U);
    msg.op = 171U;
    msg.snapshot.assign("RXFZBPTCBSEYSSASEZCAFHHWQZMLQVEDGVHPNXAEAFIBNMNRKFUYUNGTTDGLBEJNJKFUHSYVNZEYYTOPPRBKXOMWDHYTCQJJICWSIDDOPIBULXRBEZOVCCOAMXVJUFSWYWBIKLKNARFLSUGMNTIMOBOCVWMXGMRNAFLTKHFLMHDVCE");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 83U;
    tmp_msg_0.plan_id = 33165U;
    tmp_msg_0.wpt_id = 171U;
    tmp_msg_0.settings_chk = 55874U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.158195207084);
    msg.setSource(46633U);
    msg.setSourceEntity(183U);
    msg.setDestination(46647U);
    msg.setDestinationEntity(118U);
    msg.op = 175U;
    msg.name.assign("KSOCEYKVBURHXMMGNKXBRCWIGIFEGEKYCRWFWWFLBNJGCUUVIKDUVFZLWTNNLUZFXZPRMLEHWQRJEUAMCIGQXAKTBLZBUTVQYFAZVRAPBMSNNEXDMGPTCZKSOSTNSLZITNQHECATSQOALUJNPSUGRAFWHXCBSPSHOJPWTOHVDAOJAEYVGLHDKTXUYEJFYOYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.655734786245);
    msg.setSource(44723U);
    msg.setSourceEntity(18U);
    msg.setDestination(12060U);
    msg.setDestinationEntity(136U);
    msg.op = 22U;
    msg.name.assign("YHVRZMREKETASXCUYKOCMYLBSQZUVZIJGSXFWITGEAJBDTYINZQBPFZQVVSCUKCPQQNQOJTHODKLHYDDNZLRHTATDZVWVAWKQNUPMVIRLMOHCUUXZXNKATYINXFEEOGWREQIFHBHVJFDJGEUAGXPNBBDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.224073955345);
    msg.setSource(32120U);
    msg.setSourceEntity(142U);
    msg.setDestination(20308U);
    msg.setDestinationEntity(111U);
    msg.op = 221U;
    msg.name.assign("JAWAHEGXLLRGONWQZYGYKLSIWBBZPCEVKZUKVSDTBEVQWBQCPOYRZDJTEXVQRROLSNDCFJWDPAQCAYRFRNKEOIUDQJMFDYLHSOFSKMEZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.778732839582);
    msg.setSource(60625U);
    msg.setSourceEntity(192U);
    msg.setDestination(28844U);
    msg.setDestinationEntity(183U);
    msg.type = 79U;
    msg.htime = 0.893277698788;
    msg.context.assign("XHSQIWDMKQONALNDDVOIGPRKDRILBTBC");
    msg.text.assign("APDKQKROHAMFVEYIHRTCPERFJQAPRWREBTGJKNKOASPXTHRYHLOFPYHWCNMEOQYGNYYXEZZBNWWNNAULWMFOBLPVXCPWNWCXEFOSISSSZGTFIMZUWDUHFTGRZQJLYBJGTDNLJYQXSYUGPDIVAJBVFJDIQBOZKQCRMV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.876847939133);
    msg.setSource(17570U);
    msg.setSourceEntity(53U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(1U);
    msg.type = 53U;
    msg.htime = 0.625244123477;
    msg.context.assign("PKRDEPPYJJZFGQZCLCGPUYPRAFLAIOMIWNCEHLRHIWOAQUXYDYUNJNDHQTCOENQIDXYAMNNIDPXLRGMHLCYMSRWTVZPCKVVFVLYWTFBQUAQIKDOMHSCIJIUIFPSPQLBVBWZDPLOJSQFHGJUBUXVHYTJCVOZTHZSRXQKRAEBJHXEWETMBBZBUKEQV");
    msg.text.assign("VWUKHCAVINFQXROEPUFBGLUAKZYHDOWBCEJMGXTDIYMOCXQFWLEFPMSRULBGHZFKTUSENOKUJYDYZVLIKAXZYTNXCTFVERMIIZMUDSXAUYFGQCKPODKQNBJGWVPSFSZAPTUOKJLCABJPCOQJBVZYJEVXWFCIPIWEJZHFCRRHSKTUTDIMLBVMBXNDQEMTRRJNLPPMEGSEQIDOMGYTSSANLQGWRRWVYLRQWXKHCYVOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.838041548428);
    msg.setSource(877U);
    msg.setSourceEntity(250U);
    msg.setDestination(36333U);
    msg.setDestinationEntity(65U);
    msg.type = 122U;
    msg.htime = 0.393030318327;
    msg.context.assign("YIWUFCFHKIDUZLEAWJZLHCBSLAPJINBDEIODMRXOMXZNEJRVXGWRSSOEYKGATRYBLPTCTZCYOEYCNJPPKXQIJMWWUGZVSGTIUUKKHNNBTOFTPGQZVMMPXOFOYMKYDAEQSBJKWLDRGYXIAQUTVTIMARFEHCBWNUKUXQAGSJQBAZPQSPYNNYLTBXNVSHCZJ");
    msg.text.assign("SNLHIFADALEXVITHCOOPULWDPFYSEDTHKNQOIBGQVCOLDDWIJNLKSSVMACAMHOZMRBOQGGMPBISYAPHFRHIAPNZPZMUFWGANJVLDENB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.229236872852);
    msg.setSource(47495U);
    msg.setSourceEntity(16U);
    msg.setDestination(51261U);
    msg.setDestinationEntity(117U);
    msg.command = 118U;
    msg.htime = 0.93767774057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.678006620343);
    msg.setSource(63904U);
    msg.setSourceEntity(126U);
    msg.setDestination(41282U);
    msg.setDestinationEntity(227U);
    msg.command = 90U;
    msg.htime = 0.791648254893;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 25U;
    tmp_msg_0.htime = 0.17553685527;
    tmp_msg_0.context.assign("CUJXMADEPWYWUJWFUIJSDEOYJVPICRUUWDVHZAAAVXRMOJXMEATOBUNOIKMOGHHMHKXMDNDTIVPFQNQFVQHKFSERNBNZVBSBOBQLENFUPGZFOGYTARMZQGLQYXBTKKKMESLXSSYCKBPAJCKTXEDZCROBDGWQYWALXFAYGHYGYLRPIXFSM");
    tmp_msg_0.text.assign("TGEJJKGCSVZSLBMEDTUUCRSDMOKXWMCCGRSWIVSSVDVPAMXOBMKEXKCMGEKXFJYRILSHUZQUDYAAPFOZZVWMJIWBNGOQYRRFALZYDXHCBPQEVVLPRAUIKFGHJNWNYQIUCPTRYNDDNHQBZTLLIKATVXNEUQJOPMGYUUJWCR");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.315422237039);
    msg.setSource(30764U);
    msg.setSourceEntity(122U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(165U);
    msg.command = 210U;
    msg.htime = 0.041695449018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.44530209433);
    msg.setSource(9609U);
    msg.setSourceEntity(99U);
    msg.setDestination(43511U);
    msg.setDestinationEntity(94U);
    msg.op = 118U;
    msg.file.assign("KKOFCGRESQVTDVNWRMEPUBNBGXJVYAMQPMMTHDDDORJICGNJWIJWQZHIWULFSAZNZYZETGNKCBUEJFWZPRPIXSLZJHEHHAVIVLQXKXTCAOHFAKPEYLBZVBOAQRNGTLDUEIBEBIJUOTHDUAUCNDNWPGXAJSDPUXKOSQEYAGCTKVJYVIPRPKDLYFOFGHMRFZTVQWTWSXBMJKOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.638081622602);
    msg.setSource(53833U);
    msg.setSourceEntity(82U);
    msg.setDestination(38177U);
    msg.setDestinationEntity(36U);
    msg.op = 20U;
    msg.file.assign("KJRTPXMAXTSEYMLDTUIFWUADYRUUEOKOZCTINURFFJHXQAIDGBOFLJQIGFQTQBYEKZBSIXWGJHUOMSHFHIACPZYTMAEDERWATGVNJATRMCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.506273517656);
    msg.setSource(49038U);
    msg.setSourceEntity(66U);
    msg.setDestination(11313U);
    msg.setDestinationEntity(214U);
    msg.op = 66U;
    msg.file.assign("RCKZZCIKQTPNJLCLNZTHVBKFAQHRJODJWZUNOGRYJBEIFYXZSMEDRGHQPAYLTNPNXRBCOWKSEAKKQYSDJHOKHPIBUEPNEYIGIWULFMPLLMVEBVWVXSOHDVRFKZLUCBPEUHJZGFFBOMUSAILYEJGJUPTWVQRSMGRJOXLOXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.374732616933);
    msg.setSource(19902U);
    msg.setSourceEntity(232U);
    msg.setDestination(20668U);
    msg.setDestinationEntity(147U);
    msg.op = 224U;
    msg.clock = 0.835753811044;
    msg.tz = 13;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.798666369951);
    msg.setSource(35482U);
    msg.setSourceEntity(238U);
    msg.setDestination(25098U);
    msg.setDestinationEntity(8U);
    msg.op = 28U;
    msg.clock = 0.753778257482;
    msg.tz = 70;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.902003456796);
    msg.setSource(27755U);
    msg.setSourceEntity(213U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(233U);
    msg.op = 34U;
    msg.clock = 0.855546768833;
    msg.tz = 59;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.399313142686);
    msg.setSource(18887U);
    msg.setSourceEntity(85U);
    msg.setDestination(64860U);
    msg.setDestinationEntity(185U);
    msg.conductivity = 0.926780459174;
    msg.temperature = 0.872553766774;
    msg.depth = 0.652660197793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.33219134322);
    msg.setSource(45544U);
    msg.setSourceEntity(141U);
    msg.setDestination(26307U);
    msg.setDestinationEntity(14U);
    msg.conductivity = 0.288187000282;
    msg.temperature = 0.499908041301;
    msg.depth = 0.148196713783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.542099570735);
    msg.setSource(49291U);
    msg.setSourceEntity(213U);
    msg.setDestination(13148U);
    msg.setDestinationEntity(72U);
    msg.conductivity = 0.134203430804;
    msg.temperature = 0.213135582419;
    msg.depth = 0.912901264851;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.554899220008);
    msg.setSource(16766U);
    msg.setSourceEntity(223U);
    msg.setDestination(7238U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.5727299723;
    msg.roll = 30232U;
    msg.pitch = 7435U;
    msg.yaw = 27018U;
    msg.speed = 11785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.673089294477);
    msg.setSource(64591U);
    msg.setSourceEntity(110U);
    msg.setDestination(35852U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.704274730902;
    msg.roll = 47214U;
    msg.pitch = 34483U;
    msg.yaw = 60196U;
    msg.speed = 18214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.508714534542);
    msg.setSource(43381U);
    msg.setSourceEntity(108U);
    msg.setDestination(4340U);
    msg.setDestinationEntity(234U);
    msg.altitude = 0.210746200966;
    msg.roll = 4936U;
    msg.pitch = 20163U;
    msg.yaw = 62706U;
    msg.speed = 424;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.404980781726);
    msg.setSource(8625U);
    msg.setSourceEntity(6U);
    msg.setDestination(39837U);
    msg.setDestinationEntity(11U);
    msg.altitude = 0.178690459388;
    msg.width = 0.149935039133;
    msg.length = 0.417492830813;
    msg.bearing = 0.254639339117;
    msg.pxl = -22118;
    msg.encoding = 83U;
    const char tmp_msg_0[] = {8, -110, 29, 34, 51, 31, 125, -82, -14, -85, -35, -74, 91, 125, -13, -42, 27, 61, -110, 15, -80, 28, 116, -38, 41, -3, -10, 23, 106, 12, 46, -34, 100, -87, 88, -4, -62, 45, 62, -111, -82, -30, -37, -111, 116, -49, -8, -44, 38, 92, 75, 60, -16, 107, -125, 68, 85, -3, -36, 32, 87, 86, 3, 111, -107, -104, 7, 107, -26, 34, -83, 39, -52, -11, 52, -35, 41, -15, 58, 10, -39, 88, -37, 60, 86, -17, -64, -95, 23, 114, -63, -76, 4, -41, -51, -8, -104, 63, 57, -32, 14, 32, -79, 50, 22};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.0866491173167);
    msg.setSource(42973U);
    msg.setSourceEntity(197U);
    msg.setDestination(63207U);
    msg.setDestinationEntity(54U);
    msg.altitude = 0.742969743799;
    msg.width = 0.049905038097;
    msg.length = 0.885370717483;
    msg.bearing = 0.00354226850513;
    msg.pxl = -24510;
    msg.encoding = 17U;
    const char tmp_msg_0[] = {-32, 31, 21, 60, -32, 8, -30, -28, 100, -126, 117, 121, -47, 40, 69, 4, 49, 55, -86, -49, -91, -36, -25, 8, 5, 10, 117, 87, -90, -107, -122, 28, 25, 23, -15, -75, -37, -24, 13, -20, 13, 69, 104, 121, -90, 106, -70, 53, 13, 95, 89, 13, 6, -73, 62, -24, 89, 67, 23, 96, -21, -2, -102, 74, 18, 89, 54};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.464257886324);
    msg.setSource(16655U);
    msg.setSourceEntity(145U);
    msg.setDestination(21809U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.352265487706;
    msg.width = 0.902576784415;
    msg.length = 0.164737951994;
    msg.bearing = 0.62407847425;
    msg.pxl = -28631;
    msg.encoding = 227U;
    const char tmp_msg_0[] = {-39, -107, -24, 82, 51, 31, 55, 84, -57, -121, 96, -90, 10, 18, 73, 46, -104, -22, 30, 45, -81, 56, -37, -128, 103, 35, -100, 123, -97, -126, -41, -110, -121, -5, 117, 71, 118, -10, 22, -4, -26, -111, -38, -93, 120, -116, -53, -62, 62, 15, -85, 8, 92, -19, 33, -25, 106, -29, 108, -73, -111, 20, 73, -48, 14, 21, -39, -4, -33, -18, 16, -71, 62, -23, -9, -86, -112, -73, 47, 105, 89, 5, -112, 70, -117, -59, 25, -40, -91, 37, 4, 78, -20, -29, -12, -99, 12, 96, 93, 113, -86, -62, -58, -27, 120, 102, 99, -56, -96, 72, -59, -16, -65, 18, -72};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.230462199566);
    msg.setSource(4821U);
    msg.setSourceEntity(85U);
    msg.setDestination(5235U);
    msg.setDestinationEntity(49U);
    msg.text.assign("ITMRVLSXYQZASJHZANYXYUKDMENINRJWRWYINENCCMCBJQSOGCFLJEQHAUEVGNBC");
    msg.type = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.835584658924);
    msg.setSource(64347U);
    msg.setSourceEntity(19U);
    msg.setDestination(61733U);
    msg.setDestinationEntity(41U);
    msg.text.assign("QQQDFJFERLYGWOHWONCNTQMPJXVYIDXOVSQERFWBSRHXIFZVGSLLYWGPUSPVHFDJXZLOADQJLUOAFOJTUTCUPLECGIAJAVMZRBIULKMHKBDQJXKCDYWWKBOAFFKZGDNNNKGAYQTMOCUMESJEBYVTYBSLSEUGRTYXCWHPUEVVNYPSNEMSALPMMOWCZTQXLMZJNDNIICAGQWRIBUBTSRPKNDVHHKRZRXWAZBMD");
    msg.type = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.449074262223);
    msg.setSource(12811U);
    msg.setSourceEntity(131U);
    msg.setDestination(19330U);
    msg.setDestinationEntity(94U);
    msg.text.assign("VHTLUBYIJLXRBEOEBHOPNWRILUSDJADRMYHUSZZCJQGCQAFPAOFZAFUZUGVMPTJWGNFDNVKEPVWKIMBZDDCNZNQFDSIVBBGOSJXMPTXHBNRYPGHULBLVKGKSCKPJZQHELCWMRUMCGRKZFORKFTYMQOTIWPKPLFTEAFQTCDRXEGYJISXCCKIEEWBUJNEHJDXQGGNWLQNQZIJYYXMOASUXXQDBPDMXTVAIYHOTLZSOHYRFWWVMYOVERWTAKV");
    msg.type = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.0243578442929);
    msg.setSource(38825U);
    msg.setSourceEntity(125U);
    msg.setDestination(59446U);
    msg.setDestinationEntity(223U);
    msg.parameter = 166U;
    msg.numsamples = 248U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 9665U;
    tmp_msg_0.avg = 0.534946077407;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.202564496738;
    msg.lon = 0.987253948436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.247127182448);
    msg.setSource(64737U);
    msg.setSourceEntity(109U);
    msg.setDestination(47218U);
    msg.setDestinationEntity(172U);
    msg.parameter = 207U;
    msg.numsamples = 101U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 33001U;
    tmp_msg_0.avg = 0.321911730911;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.599099322271;
    msg.lon = 0.87447703922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.0525819227776);
    msg.setSource(14463U);
    msg.setSourceEntity(228U);
    msg.setDestination(48587U);
    msg.setDestinationEntity(104U);
    msg.parameter = 173U;
    msg.numsamples = 169U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 17256U;
    tmp_msg_0.avg = 0.413358439083;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.144572687237;
    msg.lon = 0.576154398487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.452061293091);
    msg.setSource(24610U);
    msg.setSourceEntity(127U);
    msg.setDestination(50210U);
    msg.setDestinationEntity(37U);
    msg.depth = 32137U;
    msg.avg = 0.267428941254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.65290163888);
    msg.setSource(29877U);
    msg.setSourceEntity(52U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(205U);
    msg.depth = 42915U;
    msg.avg = 0.924868237506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.334660163838);
    msg.setSource(5627U);
    msg.setSourceEntity(32U);
    msg.setDestination(6419U);
    msg.setDestinationEntity(168U);
    msg.depth = 44883U;
    msg.avg = 0.787555523921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.502147094629);
    msg.setSource(43203U);
    msg.setSourceEntity(170U);
    msg.setDestination(15064U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.86497821874);
    msg.setSource(12957U);
    msg.setSourceEntity(201U);
    msg.setDestination(31580U);
    msg.setDestinationEntity(211U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.165131164881);
    msg.setSource(62378U);
    msg.setSourceEntity(226U);
    msg.setDestination(18819U);
    msg.setDestinationEntity(151U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.300919632725);
    msg.setSource(50279U);
    msg.setSourceEntity(153U);
    msg.setDestination(3102U);
    msg.setDestinationEntity(231U);
    msg.sys_name.assign("LFHNFPRMAZDHPGIQEJEYHRYLIQVLSABXVTUZUYGCUZBWVQMYSGIHCKEOHMOJIEVKDSWNHISRZVSELOJDPQVJTYIFTCXNUJBUWEAKDPJTNSUAOPTMLWQXSABTIQKWYFCWFSHKKWDRUIYSDPXWDPTHQDEXAKHFFCQUFBKRDOGYXOUCAWONFEBLZNZNRLOMLL");
    msg.sys_type = 229U;
    msg.owner = 13299U;
    msg.lat = 0.497986088689;
    msg.lon = 0.327705597954;
    msg.height = 0.84694208022;
    msg.services.assign("YLXIZMYVNDXPEMAEUJUABUXBLNPWUBAQMHCOWMGIMSBKXAHFTMNWSTFISHHRQRROVYCJIKKKSOTTYPFWKKILWQABVNJNNPMHRIQFCUQESXFFOYADBTDDJDZLCTLVXGIZPTEOSOTZBCVQIOAPCRQGVUNFGJVUYGSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.784750935613);
    msg.setSource(38988U);
    msg.setSourceEntity(249U);
    msg.setDestination(64330U);
    msg.setDestinationEntity(194U);
    msg.sys_name.assign("XAYVCTWWPVJMGMCORPXALFOGBCVGAFFYZIYTJCEXWPNQGLIHSXMOELJBEZPGQFBTMMOC");
    msg.sys_type = 225U;
    msg.owner = 13676U;
    msg.lat = 0.725082800654;
    msg.lon = 0.327808822749;
    msg.height = 0.435679745686;
    msg.services.assign("IKDZGHXQBGMGNVWTIGPBEXGAZYOXRNPWWFVNODJFOHZJRIBOIEKOCUQJFCYSLKSSLFHUOHYNTTYWPRJIEYDTNYSRJEUJLGZGBSVSCDYCIEADSUPCFRLUXUJQLMIJJOIEBXTWXANZXQBQXFADHSBMPGIQDBHYZOAFXWDZRWDWSNNKMQXLAMHFZOCHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.127488453115);
    msg.setSource(10100U);
    msg.setSourceEntity(127U);
    msg.setDestination(31808U);
    msg.setDestinationEntity(93U);
    msg.sys_name.assign("JCFSRUIZCKLEQMPBMFHTMMWTZDICCKPYLXUCJTGTLHGXCDDHDWTZVEIFNDFKIFHJOAOHSFLXUWWGGIDBARFXCZHAZUEXNYUKAAPCOLYQYEDFKPJSDSKBJIOEVIOURRDMJNMQXSFKKQGZTGQMKMGICROHNTQIYGERFPPKWZYVBDZXZAAJLGPQBNV");
    msg.sys_type = 249U;
    msg.owner = 61846U;
    msg.lat = 0.773818334151;
    msg.lon = 0.427800618635;
    msg.height = 0.311853141588;
    msg.services.assign("ODFOBLZGLWPMUGCLFJUHXRNSPMNUSZQDRMOQQFJFXSRRHRHFWDKNTVTZITPUNUOMSOZBERQTHQVIDJSMLCWAMKTAYHVMCWDWLBDITVYQXQEVUFKOGKXVGZSEBNKYACDSLRAZWSVERAIZFYZEDVFPJTGTPAXAUJJGEYMBQJNFLAYLXTYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.805179709627);
    msg.setSource(47315U);
    msg.setSourceEntity(220U);
    msg.setDestination(13018U);
    msg.setDestinationEntity(131U);
    msg.service.assign("QWGUVIWIUXAMXYOKFMEJLCGYSIMBLWERJDKPOTCRNWLGDMIQDLEITRHUGFXDKAYVOCHHXRWZDZAZVCSQXZKLVYXQXRROIHKCEVSWRIPJUGGBZKHTHGZAJFIJDYPBKTTHBGRTESJZPFT");
    msg.service_type = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.908940837334);
    msg.setSource(59665U);
    msg.setSourceEntity(188U);
    msg.setDestination(49771U);
    msg.setDestinationEntity(161U);
    msg.service.assign("JBYBZGARFFRWYWANAPJFDOZOODAFTELKLFQQNNZXGUVBWNFJYNBKBKLDTTDPPXUSIBQIMDRGCQENRQWXLYPYVHUDJTLUCJYDMLEUGSHOHUSCXQMKMSWVXCBVRNZXJQIKPCRWCZOHKBATWVJPIQEMSEBAGSDAZZAHZGUKGH");
    msg.service_type = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.0918070061519);
    msg.setSource(52878U);
    msg.setSourceEntity(85U);
    msg.setDestination(40554U);
    msg.setDestinationEntity(203U);
    msg.service.assign("RMXNMVZOVZFDOYQLDHRKDJNOUCNHKHZHFAGFYKBWRQTATMYXTJ");
    msg.service_type = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0355766005116);
    msg.setSource(17661U);
    msg.setSourceEntity(135U);
    msg.setDestination(47273U);
    msg.setDestinationEntity(99U);
    msg.value = 0.185564203819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.468648315938);
    msg.setSource(47229U);
    msg.setSourceEntity(248U);
    msg.setDestination(18958U);
    msg.setDestinationEntity(247U);
    msg.value = 0.665460467884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0757777161688);
    msg.setSource(25940U);
    msg.setSourceEntity(211U);
    msg.setDestination(5633U);
    msg.setDestinationEntity(218U);
    msg.value = 0.774138485634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.76523391229);
    msg.setSource(13389U);
    msg.setSourceEntity(51U);
    msg.setDestination(2505U);
    msg.setDestinationEntity(54U);
    msg.value = 0.284518799661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.282777670882);
    msg.setSource(5949U);
    msg.setSourceEntity(217U);
    msg.setDestination(47491U);
    msg.setDestinationEntity(163U);
    msg.value = 0.779457380527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.776082155298);
    msg.setSource(62582U);
    msg.setSourceEntity(166U);
    msg.setDestination(8727U);
    msg.setDestinationEntity(253U);
    msg.value = 0.254911103819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.0950677614601);
    msg.setSource(46040U);
    msg.setSourceEntity(37U);
    msg.setDestination(31784U);
    msg.setDestinationEntity(182U);
    msg.value = 0.618266229176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.0178064541276);
    msg.setSource(41652U);
    msg.setSourceEntity(44U);
    msg.setDestination(23728U);
    msg.setDestinationEntity(186U);
    msg.value = 0.915888808933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.99807234826);
    msg.setSource(5866U);
    msg.setSourceEntity(119U);
    msg.setDestination(4975U);
    msg.setDestinationEntity(47U);
    msg.value = 0.637705868169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.0619086463791);
    msg.setSource(56147U);
    msg.setSourceEntity(123U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(10U);
    msg.number.assign("ETJMDNIOGENOIHFDUNKWXVTIDIFJWPLBEHAQGLSWHFRPVMSORTZNNUIIQPLFZCYHLVKAJZKFSBTAJKSKQXRFOJNDRCWYANHICABKQMDTKYZOZWAJUQXVLVWBTXUXK");
    msg.timeout = 33211U;
    msg.contents.assign("XGIXPDLAIUMZENWAVNSDZHDNXEKPEJGKGMKCRMPFKHWXJQMMADTNDUJGYWYRYOTIBLABGNCAFCSKYPYJLNSBZZGOOFQYAWFRTUNWCICJOAVEBVXTCJYQWJHMEINKJRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.0255380320092);
    msg.setSource(10844U);
    msg.setSourceEntity(141U);
    msg.setDestination(1217U);
    msg.setDestinationEntity(33U);
    msg.number.assign("LPCSAUXFUQNNQOIEIZCRSUIRAYHHCEGZTXHXBBVEGKFNDPRKCSJARAWLNJTDWOMXYTVPKKZZLJZQGFOMWUDHOQFKBRYHXJIPGQMDWTP");
    msg.timeout = 44259U;
    msg.contents.assign("GNGTDHULTIHJBHDEIPOSPBSBUPCCOXRQXPUIKAYCMYZYCMDZRFOFCOOEUDWPQRVFRKEGYJEIMWWLPJYQHDXUZITEBOCDMGHRCBPZSIHWQVQVNPLIKXTGASLLNEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.59525542487);
    msg.setSource(44657U);
    msg.setSourceEntity(72U);
    msg.setDestination(33636U);
    msg.setDestinationEntity(202U);
    msg.number.assign("KGVEWORZLNTOLZVPKLQELYTXQUMEHILNMSMRKJPVEJGQSSVJOXCRXDDCAMWGPWHBGVHFISAUTNJAYBSFTTFOVHHCABVIDITNFWIYMHCCLKPVQZXBTLBWDUPBPZGNDKWEGZBZGUFEHSUQZJGEBKGJGVXPNHZNRCCTAXUWXARIEYXFHRJIUJASMPNDWYUOAJFDKLRSIU");
    msg.timeout = 61945U;
    msg.contents.assign("IEBGBMILGSEVQDLNSMDXOARHDFIAAUMAIRPKHVJFZARIHMDPYIJTPXFSHOKSYYPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.0154493605424);
    msg.setSource(13032U);
    msg.setSourceEntity(41U);
    msg.setDestination(48158U);
    msg.setDestinationEntity(48U);
    msg.seq = 1339294980U;
    msg.destination.assign("PBDZNZFZZDDHZLSCAIDUUXZYULRYVXUQHFVGIEVNNSYOABYJVLMTENBPKWRKNPQOKWLQQXTWKCQWFZYJKFNLYGJXBTNYQCHSTEORKGIFABVVATTUJDRMLBAHDMCMVPPEGOUOPGFJS");
    msg.timeout = 6663U;
    const char tmp_msg_0[] = {55, -80, -109, 1, 124, 15, -49, 53, -42, 32, 101, -26, 46, 29, -10, 75, 83, 83, 82, 30, 77, 57, -44, 118, -81, -13, 18, -74, 42, -8, -12, 85, -19, 85, 58, -128, -41, -18, 30, 87, -124, -62, -20, 19, -97, -113, 75, -115, -112, -99, -84, -118, 18, -75, 119, -75, 20, 104, -4, -101, 54, -33, 0, 4, 93, 87, 5, 51, 114, 116, 118, -72, -125, -74, -76, -36, -59, -121, 41, 117, 71, 124, 30, 57, -77, 96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.356993835768);
    msg.setSource(15799U);
    msg.setSourceEntity(210U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(223U);
    msg.seq = 1480780631U;
    msg.destination.assign("FNACDFTAXCMARXSXICMGDSYOLGEBDQIQARSNXHGWVJHTSFONDPJZQABVRZEGCOVGQERC");
    msg.timeout = 19247U;
    const char tmp_msg_0[] = {-83, 31, 44, 2, 18, 54, 73, 116, -91, 11, 86, 7, 83, 26, 123, -4, 29, -58, -128, -108, 53, 116, 123, -43, 93, 0, -48, 82, -35, 117, -5, -91, 72, 77, -82, 116, 38, 97, 113, -5, 9, 48, -46, -27, 10, 31, -112, 95, 103, -53, 49, 87, 73, 31, -116, 24, 86, 97, 75, 116, -65, -65, 23, -95, -79, -124, -41, 124, 64, 90, -37, 78, -60, 98, -90, -30, 30, -51, 119, -107, -49, -104, -70, -13, -6, 100, 106, -99, 72, -13, -24, 1, -54, -86, 108, -110, -42, -19, -112, -121, 76, -6, -50, -26, 109, 4, 4, -36, -9, -57, -19, -27, 79, -81, -39, -44, -41, -127, -60, -99, 118, 49, -86, -96, 19, 74, 50, 112, -24, -80, 117, -120, -102, 29, 18, 64, -47, -123, 67, 90, -4, -3, -42, -88, 44, -64, -69, 28, -115, 30, -65, 42, 24, 5, -26, 16, -118, -5, -89, -22, 40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.948361504525);
    msg.setSource(40596U);
    msg.setSourceEntity(149U);
    msg.setDestination(37142U);
    msg.setDestinationEntity(44U);
    msg.seq = 345233438U;
    msg.destination.assign("JCMUGDKNOKWEEAMSBWQZWGBZIOPCKNYDYIVHUDASOZXCUHRAQVTMZKQHIFLLFYQSZMYCWQRUHYTJJCINYHRTVNRPUXZJRBFSRXIDBZXTXUJEEUQNPGCVOJRQBCVIFDFFMPXDOPHROTPEUCWHAIRZWALQSGYMPWTYZFFMVHAJKOBZME");
    msg.timeout = 24682U;
    const char tmp_msg_0[] = {-110, -84, 46, 69, -98, 71, -68, 116, -35, 38, 97, 11, -4, 73, -110, -98, -114, -69, 16, -35, -88, 88, 44, 77, 53, 120, -116, -2, 23, 32, -119, 9, 71, 80, 54, -22, 39, -19, -128, -10, -91, 38, -91, 111, -25, 84, -65, -34, -14, 36, -32, 76, 46, 8, -70, 117, -50, -89, -99, -18, -125, -111, -4, -115, 36, -14, -67, -36, -119, -70, 73, 5, -30, 110, -9, 62, -103, -118, 61, 73, -107, -36, -119, -122, -32, -8, 42, 26, -62, 78, -65, 5, 40, -89, 32, -112, -8, -85, 24, -36, -102, 50, -59, -20, 113, 19, -41, -12, -61, 76, 76, -104, -93, -46, -14, -13, 56, -80, 122, 93, 5, -126, -89, -32, -94, 115, 64, 13, -9, 34, -29, -126, -109, 62, 102, -78, -17, 105, 108, -36, 78, 72, -122, -68, 114, 26, -101, -41, 14, 119, 91, 114, -19, -118, 73, -54, 103, 58, -12, -16, -94, 98, 23, 72, -118, -96, -104, -2, -91, -124, 115, -110, -24, -36, 83, 51, 89, -18, 104, -15, -37, -10, -121, 46, 33, 3, 117, -90, -87, 58, -104, -63, -87, 77, -73, -26, 2, 113, 98, -119, -44, 18, -60, -5, 18, -106, 45, -14, 84, 117, -13, 92, -87, -75, -77, 119, -9, 77, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.6739895074);
    msg.setSource(2937U);
    msg.setSourceEntity(59U);
    msg.setDestination(23478U);
    msg.setDestinationEntity(164U);
    msg.source.assign("GOBTGHAZVYJCAPXVPSSDLHZNKNAVGPYDCKARPKXMJDBOJOJHUFOWYUUKPZQLWEDRWLRZPXKIQFHFHGGQMBPFSULWQEWBSFKDQKZEUBUJHUIYVVQPKAGDQWSZOCOEYMCIUWLNMECESBEXOCNBJZJCDGMUTZBMVAGNMRMEFZGIDRYKLYESAZMLWIRYANDTHVFRRPXXCWTBQ");
    const char tmp_msg_0[] = {111, 40, -5, -13, -92, 52, -99, 10, -127, -58, -56, 124, 126, 47, 36, -90, 107, -34, -22, -32, 18, 112, -97, -41, -72, -72, 28, -108, 84, 120, -27, 74, 91, 0, 46, 99, 68, -52, -27, -6, 117, -95, -22, -38, 36, -90, -97, 112, 32, -82, 72, -22, 29, 106, 25, 51, 6, 100, 114, 62, 121, -56, 61, -126, -45, -93, 56, -39, -1, 99, 124, 52, -121, 59, -31, 107, 20, 65, -65, 31, 81, 16, -87, -16, -33, 108, -2, -9, 82, 112, -83, -7, -40, 53, -57, -99, 71, 70, -55, -19, -65, -35, -3, 40, 43, -123, 2, 48, 79, -72, 52, -112, 125, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.0163539406782);
    msg.setSource(61804U);
    msg.setSourceEntity(164U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(192U);
    msg.source.assign("KNAQSQTMQVSGWJXFOYURXPBTURCLOOWEHLECIWIOLNLEMMBITXEYANWZDYOCBOLTHCUJNQJFZAYFOMXPCMVXZFEPYUKXEWMYZVNPLVFG");
    const char tmp_msg_0[] = {-105, 120, -107, 15, 99, 92, 80, 55, -101, 90, -60, -76, -5, 126, 120, -20, -40, -48, 33, 67, -95, 87, 83, -34, 118, 107, -70, -80, 11, -62, 17, 81, 77, -47, -97, -44, 62, -4, 94, -84, 13, -63, -70, 116, -91, -95, 67, 46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.721132174002);
    msg.setSource(822U);
    msg.setSourceEntity(129U);
    msg.setDestination(12001U);
    msg.setDestinationEntity(99U);
    msg.source.assign("XUYIOIEDABAV");
    const char tmp_msg_0[] = {46, 70, -113, -38, -36, 51, 75, -56, -112, -33, -102, 67, -26, 52, -13, 19, 55, 43, -74, -74, 85, -11, 115, -27, 62, -88, 49, -111, -96, -60, -101, -107, -80, 25, 103, 66, 29, -12, 126, -119, -81, -53, -114, 17, 110, -61, 82, 82, -80, -127, 122, -126, 6, -110, 11, 14, 83, -18, -22, -76, 29, 14, 72, 55, -110, -1, -117, -126, -46, 106, -46, -24, 37, 86, 17, -31, 58, 84, -79, -108, -110, -81, 49, 89, 56, -109, -91, -99, -112, -52, -68, -51, 51, -2, -23, -127, -96, 28, 100, -55, -27, -26, -82, 75, 31, 69, -38, 74, 46, 95, -30, -69, 114, -46, 98, -15, -74, 31, -28, -28, -126, 63, 30, -67, -42, -114, 77, 9, 121, -47, 14, 11, -22, 31, -61, 35, -54, 116, -15, -18, 89, -106, -70, -18, -44, 119, -71, -24, -86, -102, 33, 122, 45, 106, -67, -4, -11, -27, -113, -82, -97, -107, 98, -89, -3, -34, 94, 21, 58, 72, -18, 42, 10, -40, 17, -60, 100, 79, 46, -53, -9, -111, -111, 89, -106, -38, 104, 114, -85, -6, 121, 38, 14, 74, -68, 99, 28, 39, -6, 98, -97, 111, 75, -6, 70, 77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.207889145853);
    msg.setSource(63227U);
    msg.setSourceEntity(211U);
    msg.setDestination(42102U);
    msg.setDestinationEntity(9U);
    msg.seq = 2413187094U;
    msg.state = 105U;
    msg.error.assign("IQWYZZDNBVURMPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.599374255011);
    msg.setSource(53113U);
    msg.setSourceEntity(64U);
    msg.setDestination(41440U);
    msg.setDestinationEntity(203U);
    msg.seq = 794155288U;
    msg.state = 58U;
    msg.error.assign("FVDNUSSDVKTCYLHASQJACZZHAMVQYRXSTGUJZECVKQSXWTEMQAUEQNSRGGWGAILIUPFFRCRQPMBHPNDKWIOBZNIXEPETDAWHSUJXMVBWMPGOIQBLNAJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.559719380794);
    msg.setSource(7667U);
    msg.setSourceEntity(49U);
    msg.setDestination(52856U);
    msg.setDestinationEntity(76U);
    msg.seq = 39185860U;
    msg.state = 250U;
    msg.error.assign("OCYOYMQMDWHOIMXXWANRYACMIZBEDKOJEBTWPBKJTMHNKVNGQTGXEQAOTWSQKHSUSZNIRLZBRULTUHAVTIBJHIOCLRFCETDVYAAQBCVCPVPPIXUEYEURHPJSSKWQXARUFYBDGABPCGSQFWVIOQBUQLSFDTQVZSWXNMEKLLYOGTPGXKCHDVPGSLZZORZFJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.62494500496);
    msg.setSource(23504U);
    msg.setSourceEntity(169U);
    msg.setDestination(6507U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("BMWGUIISCZZPPAMHNJAKTXGBCDYKMCZBWZLNHQGYEXSQGTPRQJAXSGWGEKIIRDYYJTKRSKIOTYZDWZPOGANTMUIVL");
    msg.text.assign("HTPFNFEUVMJEIVGHHJUUPHFUVJNSOACYMJXDGQWBXVLGPLGZXDGAPLDAQKYXDRLVWNORVERPLWNKBTVAJGNLOZUTGHXVVPPLPDVRFRFXQOWITHYCCWBBOEXHZLEGBRUDQQQGUXZPWSQRRAMFEZJICIOLYKYYHYTOCAFIMZXIFQUZMKOZCJIKECHBLQCSSAZKSSFCABRMTKIZWKEHDEYMYNXTNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.418030733746);
    msg.setSource(35283U);
    msg.setSourceEntity(138U);
    msg.setDestination(39270U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("NLPVXBGUPTYHYKFXKAZJRDEXATBZCGCMEHYCZFLSQORSTDVCUSFOCFTVWVXJPJYHVEBZTUYQXZMTZKINYYFXDDRKROGQHPGHJLAANVQEUHNILJUIQHUHSRIMMEDGFSFDDNWBBQEKHIROOCQENLJZKMFG");
    msg.text.assign("FZIHTSOBUHAMCWMIMFKJIAUQZDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.691551696117);
    msg.setSource(20539U);
    msg.setSourceEntity(53U);
    msg.setDestination(36265U);
    msg.setDestinationEntity(121U);
    msg.origin.assign("EPBFKNTAORRHTYPVFPMSDREKJXOEJCPGHUVOXZHEBUIQGECUKFKHWKKOHBJNAIJMUDKJGYWZUEUEYAID");
    msg.text.assign("NHYYNKPOZGKOVBSJQZZLVLTKOWIITVYMQTXSNTUZUARIFVUJYLCXSLYKMILDFECNVWAXWONHEXNOKCLHQYQSWTBRDCMUCLCHSRZBSDAJBRFFKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.070546267117);
    msg.setSource(10909U);
    msg.setSourceEntity(131U);
    msg.setDestination(36768U);
    msg.setDestinationEntity(240U);
    msg.origin.assign("XYTJCGFSKXFTPEVWTVBWSZYUFGUTQCJKOVVJQYAXSNCHVDDIYHMTRNWXKHXDAKVIGCENWJHHWBJSKRDQIDDBCNAOPZPPROITXQYGVVJLYOWSFHFKTRAALEIXIYXHARGDVDULBFMBEJJJCRUZDPNULNAALZBLN");
    msg.htime = 0.758442364684;
    msg.lat = 0.882699332132;
    msg.lon = 0.977051956265;
    const char tmp_msg_0[] = {-125, -53, 88, 42, -21, -112, 61, -91, -39, -110, -128, 71, -91, 26, 107, -85, -35, -87, -66, -26, 33, -44, -44, 39, -64, 119, 68, -83, 84, 122, 41, 101, 85, 8, -3, -34, -52, 6, 119, 77, -97, -2, 31, -4, -51, -125, 102, 71, -24, 80, -98, -127, -86, 36, -110, -113, -109, 95, 124, 76, -116, -86, -112, -60, 67, 57, -101, -25, 118, -16, 62, 41, 96, 99, 5, -90, -116, -92, 85, -102, -110, 58, -4, -33, 21, 11, -12, -63, 110, 72, 38, 66, -121, 47, 17, 102, 82, -115, -51, 119, 47, 65, 54, -32, -100, 102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.242772147783);
    msg.setSource(63335U);
    msg.setSourceEntity(198U);
    msg.setDestination(8269U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("ZVZALRBYKKWOQRTPIRUYDNDOELQGQWXCAPCACSHTCMPIQEYBRYJSCV");
    msg.htime = 0.879032555627;
    msg.lat = 0.0119494453248;
    msg.lon = 0.639955968258;
    const char tmp_msg_0[] = {79, -49, -25, -23, -10, 40, -37, 125, -1, -93, 11, -48, 59, 96, 89, 45, -37, 36, 109, -46, 23, 17, -95, 37, 94, -119, 15, 46, -28, 117, 62, 5, -3, 58, 50, 23, 103, -5, 101, 12, 125, 71, 6, -28, 14, 1, 68, -19, 24, -19, 103, -107, 83};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.653278359093);
    msg.setSource(18505U);
    msg.setSourceEntity(112U);
    msg.setDestination(17961U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("GULXOZCGMUJKBDQJIFADPRSYYAMIVKXEJLJHDSPDOQHKWSZZNQFHZXHKRHSUIWZZPOEQAVPBUMXLMKYEYQMTTMSLTRRYPWQFRXOBBGNQZGGWKISSLFJGWWGSHLGWFGBONPCEJEOVKZYNKQCAQGVE");
    msg.htime = 0.0781697800726;
    msg.lat = 0.617354532812;
    msg.lon = 0.898292403223;
    const char tmp_msg_0[] = {-33, 16, -119, 101, 105, 105, -103, 106, -18, -74, -127, 22, -75, -52, -13, -70, -114, 69, 96, -55, -27, 115, 126, 102, 41, -45, -91, 72, 44, 108, -118, 13, 40, 104, 117, -65, -32, 82, -94, 47, 22, -127, -110, -126, 31, 120, -90, -114, -14, 90, 73, -120, 96, -12, -128, -40, 103, -43, -101, 45, -127, 95, 83, 89, -48, 28, 28, -9, -96, 122, 63, 64, 64, 72, 95, -114, -15, 125, -37, 116, 9, 96, -47, 12, 46, 54, 52, 109, 97, -78, 52, -73, -31, 86, -46, 28, -19, -9, 38, 59, -51, 4, 8, 106, -24, 110, 6, 19, 92, -16, -124, -51, 1, 100, -18, -89, 19, -15, -59, -88, -24, -45, -119, 111, -84, 74, -41, -102, -12, -20, 95, 53, -80, -66, 65, 123, -72, -79, -72, 20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.514751667209);
    msg.setSource(14582U);
    msg.setSourceEntity(201U);
    msg.setDestination(37344U);
    msg.setDestinationEntity(238U);
    msg.req_id = 39392U;
    msg.ttl = 53229U;
    msg.destination.assign("ZMFQORHBPRTXSINNCMHMOKBGETCXFCAYKRMEVCBVKSGOWIQHBOOQQJXHUYAIWQYVNZRBNJAHSZEBKXZJSEKOUZQFQZACCHEOGWXOZVGLJXDEBSFELWAJDFAHSGMFNGPNUJZQLKSVMIWTYUDPKRCECKYGVNCMVTSTYYTFRLYCFEAUBRXPPDUIUDZDHJVYTTULLVAWPFYNDRPRGSPWPOLUQDXAKFVMSDAKIQTIIWUMGJW");
    const char tmp_msg_0[] = {-47, -58, -44, 17, -115, 97, -49, 63, -18, -48, 111, 123, 76, -98, 88, -124, -58, -63, -103, 17, -53, -93, -71, -63, -63, 96, 25, -41, 101, -86, 49, 61, -28, 32, -13, 103, 54, 36, 15, 92, 42, 61, -30, 116, -100, -128, -23, -116, -52, 82, 52, -24, -119, 122, 38, -98, -33, 49, 78, -23, -55, -68, 42, -17, 50, 32, -17, 13, 102, 38, 81, -113, 15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.646536127803);
    msg.setSource(45470U);
    msg.setSourceEntity(155U);
    msg.setDestination(15927U);
    msg.setDestinationEntity(139U);
    msg.req_id = 25224U;
    msg.ttl = 9815U;
    msg.destination.assign("NGPXBUMGWUNWRIMAWSQQDEBEYOUQCZYFKULOZHAIOMFZCNBAIIVIEVHABKMNERYSXGKIIHNTIJBCCGMHZDBSLVXNYTTDDAGIWWCDSUHVSWMJPTQQTOLZGZFRXLPEGELDCPVAWTZMUCXOTKSLDTPFOFUIJEAKFZPKVPKSBWBWTUYEYXFKJBLUNZDHRYOVQYJXTCFMBGQZJKRRCJRNSLPOGFPQX");
    const char tmp_msg_0[] = {28, 27, -94, -23, -50, -81, -75, -16, 34, 94, 110, 72, -66, 106, -72, 117, 43, -75, 103, -92, 54, -40, 98, -50, 101, -49, -1, 100, 113, 27, -52, 49, -41, -17, -106, -128, 92, 17, 96, -54, 39, 0, -46, -39, -121, 88, 77, 41, -121, -60, -29, -119, -76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.450090782755);
    msg.setSource(62803U);
    msg.setSourceEntity(80U);
    msg.setDestination(44849U);
    msg.setDestinationEntity(122U);
    msg.req_id = 7501U;
    msg.ttl = 6624U;
    msg.destination.assign("VLAPEGSSQHMYAYDHDTKZTFSOUQDYSWYSQGLONVIDYJBTCQFMRKERORZNQKINBDMMWGIKAXKIVXSIEILWVBFHWTJOXDLAFMQWAGJPXEEUOVACZUPSRWPHDJPMPBSUHJCAOXJUKNXHYITBXMHPWC");
    const char tmp_msg_0[] = {-48, -3, 45, -48, 49, -36, 79, 3, 63, -123, 35, -36, -117, -94, -83, 125, 63, 85, -38, -39, 13, 36, -120, -31, 9, -79, -35, 107, -107, -1, -59, 73, -33, -66, -92, -39, -87, 8, 100, -127, -94, -96, -81, -83, 106, 33, 40, -8, 101, -107, 112, 79, -58, -56, -46, 124, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.0593178350875);
    msg.setSource(49536U);
    msg.setSourceEntity(217U);
    msg.setDestination(57822U);
    msg.setDestinationEntity(13U);
    msg.req_id = 37520U;
    msg.status = 57U;
    msg.text.assign("XNNBONNXJUCCSDZECNBALCDKLBZKTCQBIRDHZKTPVPYFVIJQPOLQWNZGIJUWPEIIXDFWQTXPSRYNDJTAQTWOMQLSWTOVGQPFCVHLJWEYILWCDGIRPOECKTGZASJMVAAEYSTOALXKBGMAFMFPLXJUEMSEADUQKLYOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.537203044395);
    msg.setSource(39735U);
    msg.setSourceEntity(165U);
    msg.setDestination(8505U);
    msg.setDestinationEntity(207U);
    msg.req_id = 51608U;
    msg.status = 7U;
    msg.text.assign("HCWJLZYDVMHDZPWNDARUZULEBCHNTGYJYNIOTLCTSSFFEUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.836621155732);
    msg.setSource(36102U);
    msg.setSourceEntity(228U);
    msg.setDestination(45111U);
    msg.setDestinationEntity(121U);
    msg.req_id = 53647U;
    msg.status = 65U;
    msg.text.assign("MVSVTPHPXTCKGCVSMLBQDYDANRPNEPJETDBVZYOZKFAFUFZDNIBIWANZYSRJWPAEDWEUWMEHHLWROUUUBQLNGLKGLWQDDRQFZSFQTIGFBTWJNCRANIICDVQBMOMIISJWJJKCLUZXZMIJYWSSNKAQZRBGPHGYLOHUPXWBGCSOVKIFXSPYLHOMFDZYMFEFEAVYOBNRJUQBUTKCXHXPANVVCHDATSVOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.457790925344);
    msg.setSource(22692U);
    msg.setSourceEntity(119U);
    msg.setDestination(1474U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("PHOKSEJSULFRIIMAMMOJWQEYIPXVAKSXHDYHPFM");
    msg.links = 4287262676U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.563903171469);
    msg.setSource(19340U);
    msg.setSourceEntity(84U);
    msg.setDestination(42595U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("DFHKZMMUKGFQUDHZGEDFLUTWLBJXXNCWSEOMCIFUXSTWUJRKGQHOABXEWVYSSVYUVPYPFXXTCMPLKQAYVOLCFZCNAFRTZDIDYVDJIZARHZBTWENRWENBFEOQJBSGHPSAVBMDVJBTHKCNWPXDGLHPYTQTESKAAVHBCLEJOZSSOFMGZQXNXLEVYIIMPUWOGYKTINRRKJJDUQMSDRCTGPFYIWPZOXO");
    msg.links = 211154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.324772292981);
    msg.setSource(42719U);
    msg.setSourceEntity(109U);
    msg.setDestination(7140U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("HUFBYFCJTUOFXXLXIFNICZNFTLLWLPIFZKUIULGHHSBJDKEGTZNHAZZLTRGSTRBMMCVQWQEZSQKVTABPYDONDBFYQZSHMVCRCPODUODEVBQMPVYVSWKXJZKMCJMUMAXNIWXHHGYVDDSPDGJINTXNANPELYATP");
    msg.links = 2821857460U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.749181490967);
    msg.setSource(2205U);
    msg.setSourceEntity(19U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(25U);
    msg.groupname.assign("CEAIBICORLSQVKTDSGRDZITFEEVELWZPSPYRSVGUNTBYMLIKPNBCSUFXBMHNEXGWMWQIIWDGJYGPPVWXSAGCBEOUXEAVXURL");
    msg.action = 88U;
    msg.grouplist.assign("VDMKWWXEAJQRDZKWLQIVWCXDIGCNBQLZPJXCQOPREHOKTEASUSBVVMDZHTFRJIOADGEODXCTAKGUPPSSKARFPWHWTVAFPMPPLZMRMRHUSYSLQVIWYVGNJSFHXDNSJRFPGLMIBQLVFBJTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.753248980332);
    msg.setSource(5813U);
    msg.setSourceEntity(161U);
    msg.setDestination(52139U);
    msg.setDestinationEntity(139U);
    msg.groupname.assign("JBKLUNPVYPJDAOPQCNARSTRCHEISHVZVZWHFXTZKQPAIXFHTCVRDIRUHUVQSCWLMXBWONZEEFWKIKGYNGFIWOFVSOBQXAMSTSCNCGRSUGDSYLDXTNHZRZKSRIDPUUBGAYRPZYOXHTMMCKVWXJYSWREXDFFGBEWLIELEFDJUCDTBYKIZIJB");
    msg.action = 44U;
    msg.grouplist.assign("FCYSDNBQFDFLRPSMGGIAYURTHMCEOETPOBXHULCVPNIVPGEOQNRHXZSWXBKNONNOFYJAQMTBWFRRNKJUJCOTWTAKNMYEDPVPJYQTHWIBSGLOCTWWQDLVALCDGEPWQXNGGRFPEQUJELJXBVDEJKCRFFUZSYBKSVKKHUALVIDJZXFEYMVHYISTZPWQZBUSAYXJXGHRRHIKDCAITLILIZZOZELTSAGJWMAHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.141797451389);
    msg.setSource(28357U);
    msg.setSourceEntity(157U);
    msg.setDestination(43338U);
    msg.setDestinationEntity(85U);
    msg.groupname.assign("KNOXALVHGOFYCBMWFKOASZVXWZLFSGBEPQIXBFOPMRKPHTXDVIBSEH");
    msg.action = 223U;
    msg.grouplist.assign("TZCEAALJJBFUPMTLCFPZOAHIEQVLDXMCHWNOEGTDPODFRYJCEUFRKCSP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.405663755566);
    msg.setSource(26183U);
    msg.setSourceEntity(91U);
    msg.setDestination(12115U);
    msg.setDestinationEntity(217U);
    msg.value = 0.00677213532338;
    msg.sys_src = 44454U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.312066025927);
    msg.setSource(60843U);
    msg.setSourceEntity(119U);
    msg.setDestination(30936U);
    msg.setDestinationEntity(68U);
    msg.value = 0.268182922681;
    msg.sys_src = 44513U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.371675368351);
    msg.setSource(34487U);
    msg.setSourceEntity(238U);
    msg.setDestination(62188U);
    msg.setDestinationEntity(93U);
    msg.value = 0.848693855969;
    msg.sys_src = 962U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.419397624765);
    msg.setSource(54853U);
    msg.setSourceEntity(224U);
    msg.setDestination(5843U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0748852322163;
    msg.units = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.503091661913);
    msg.setSource(20926U);
    msg.setSourceEntity(126U);
    msg.setDestination(55346U);
    msg.setDestinationEntity(18U);
    msg.value = 0.167648912778;
    msg.units = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.497242690131);
    msg.setSource(9101U);
    msg.setSourceEntity(24U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(117U);
    msg.value = 0.670614247134;
    msg.units = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.751321913723);
    msg.setSource(6876U);
    msg.setSourceEntity(234U);
    msg.setDestination(6857U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.760315189426;
    msg.base_lon = 0.681339227437;
    msg.base_time = 0.732742365691;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 20900U;
    tmp_msg_0.priority = -25;
    tmp_msg_0.x = -13427;
    tmp_msg_0.y = -666;
    tmp_msg_0.z = -12570;
    tmp_msg_0.t = -3499;
    IMC::UASimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 91U;
    tmp_tmp_msg_0_0.speed = 45119U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {119, -81, 23, 51, 31, -70, 18, 47, 34, -18, 48, 120, -60, -106, -11, -91, 85, 126, -39, -76, 45, -19, 79, 113, 104, 50, 87, -72, -39, 94, 51, 102, -103, 37, 126, 69, 114, -48, -12, 71, 100, 72, 38, -16, 47, 121, -4, 30, 53, -110, -46, -64, 67, 49, -17, -43, 53, -88, -46, 124, -66, 1, 73, -87, 32, 57, -33, -77, 79, -57, 113, 102, -118, 77, 62, 105, 108, 120, -72, -16, -15, 81, -3, -73, -120, -74, 18, 82, -124, 48, -95, -55, -55, -23, 73, -89, 82, -92, 110, 1, -90, 110, -79, 93, -100, 101, -92, 43, 115, -109, 36, -117, -52, -30, -116, 28, -24, -99, 68, 114, -58, -68, 58, 22, 75, -35, 12, -27, 73, -6, -29, -72, 55, 66, -69, -16, -75, 44, -57, 109, -72, 58, 21, -31, -70, 60, 85, 106, 71};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.615093867197);
    msg.setSource(26345U);
    msg.setSourceEntity(110U);
    msg.setDestination(7635U);
    msg.setDestinationEntity(92U);
    msg.base_lat = 0.331468971006;
    msg.base_lon = 0.975822755624;
    msg.base_time = 0.232031534017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.12458116641);
    msg.setSource(50527U);
    msg.setSourceEntity(168U);
    msg.setDestination(63974U);
    msg.setDestinationEntity(192U);
    msg.base_lat = 0.466302879869;
    msg.base_lon = 0.261776576363;
    msg.base_time = 0.628188119106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.394659055556);
    msg.setSource(63356U);
    msg.setSourceEntity(156U);
    msg.setDestination(1968U);
    msg.setDestinationEntity(148U);
    msg.base_lat = 0.663402925214;
    msg.base_lon = 0.624250450668;
    msg.base_time = 0.0353271819404;
    const char tmp_msg_0[] = {-21, -11, 69, 110, 16, -74, 79, 84, -11, 120, -100, -50, 54, 98, -29, -31, -98, -91, 101, 101, -40, 85, -60, 112, 38, -2, -108, -28, -20, -11, 22, -120, 21, -78, -114, -60, -59, -110, -48, 103, 36, 44, 70, -102, 72, -16, 73, -53, 18, -9, -17, 98, -87, -55, 54, 126, -61, -66, 88, 121, 25, 71, 12, 23, -125, 32, -113, 102, 122, 124, 99, 102, 71, 59, -23, -99, -112, 67, 77, 122, 76, 30, -105, -67, -28, -43, -4, 31, 67, -26, -62, -29, -84, -42, 35, 57, -106, 118, -22, 10, -69, 108, -82, -18, 28, -78, 8, 59, 88, -94, 102, -103, 50, -97, 18, 95, -117, 93, -54, 106, -7, -29, 124, -38, 23, -59, 63, -41, 37, 38, -42, -18, -48, 9, -7, 2, -95, -12, 24, 26, 12, 103, -96, 40, 68, 117, 42, -78, 3, 125, -72, 9, -108, -43, 63, 38, -47, -52, -100, 21, 27, -108, -33, -27, 32, 41, 69, -3, 28, 114, 97, 79, -9, -12, -99, 111, -24, 16, 71, -91, 46, -19, 33, 56, 27, 121, -31, -38, -78, -10, -40, -57, 52, 35, -63, -94, 88, 10, 39, 76, -13, 95, 67, 61, 109, -47, 118, -74, 40, 27, -9, 63, -27, -97, -108, 23, 77, -127, 122, -16, -24, 108, 51, -9, -27, 35, -94, -88, 94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.746673532105);
    msg.setSource(38289U);
    msg.setSourceEntity(191U);
    msg.setDestination(15919U);
    msg.setDestinationEntity(60U);
    msg.base_lat = 0.645915748769;
    msg.base_lon = 0.0913710294964;
    msg.base_time = 0.621289252317;
    const char tmp_msg_0[] = {75, 109, -119, -49, -13, -32, -110, -93, 63, 41, -37, 71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.483255720175);
    msg.setSource(44331U);
    msg.setSourceEntity(143U);
    msg.setDestination(45541U);
    msg.setDestinationEntity(54U);
    msg.base_lat = 0.989010114708;
    msg.base_lon = 0.389859422695;
    msg.base_time = 0.951651213325;
    const char tmp_msg_0[] = {77, 110, 22, -97, 48, 118, 0, -42, -33, -88, 95, 119, -72, 75, -85, 33, 95, -105, -4, -42, -107, -34, -70, 102, -102, 126, -64, -113, 56, -23, -112, 29, -92, -108, 89, 113, -70, 103, -81, 72, 121, 57, -49, -51, -33, 7, 41, -25, -105, 28, 19, -2, -41, -47, 28, -39, -48, 9, -95, 43, 53, 29, -31, -66, -55, -27, -7, 9, 50, -7, 94, 64, 106, -27, 109, 43, -98, 51, -14, -87, 90, -114, -31, 60, -23, 111, 25, 54, -16, 8, -16, -33, 110, 106, 88, 91, -75, 73, -13, -36, 66, -119, -122, 111, 3, 60, -10, 15, 0, -34, -107, -118, 18, 91, -125, 6, -82, -66, 19, -64, 119, -12, -55, 77, 35, 118, 40, -77, -107, -121, 123, -2, -49, 7, 28, -10, 33, 52, -108, 126, -98, 58, 72, 24, -105, -12, 67, 25, 106, -100, 89, 55, 99, -120, -93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.887148358019);
    msg.setSource(45864U);
    msg.setSourceEntity(114U);
    msg.setDestination(27315U);
    msg.setDestinationEntity(162U);
    msg.sys_id = 30503U;
    msg.priority = 78;
    msg.x = 20493;
    msg.y = 27791;
    msg.z = 25623;
    msg.t = -19793;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("IFCPDYFTWFAKQGYADOPCHENLJPSGPNDGPEGLHXUBARUWCHMKPGFZFSEVSOWZORZNEOVIRKASJXHGXOXSB");
    tmp_msg_0.sensor_class.assign("KAPJXUWFMTPKJORVZEBIEZQCQFVHSFRDZOFHGRBOVAYVQIRNUKDYXSWVLDSEUHPVXBKIOTULMNIXTOUYMFWFNHADOTPXDYWSJFHNCYBS");
    tmp_msg_0.lat = 0.224190946947;
    tmp_msg_0.lon = 0.384171146813;
    tmp_msg_0.alt = 0.95861869099;
    tmp_msg_0.heading = 0.822408179258;
    tmp_msg_0.data.assign("ACKZORBMVORKTUXGXPSVIWZLNYQBXHSREHTLGWYMOESZPQCHPKMAZGDHZJPJBPDUOGGTRMJHNKWGOLXALFOEFSAUCMDQOZKIYUBVMWJFJYVRNOWUHAKAYPWGRZMFYTQWGCIFPWDRAKSOZBHQCJEPIUIYTXFXYLVKFFSVETSAZSENZYNDCYGBQSUDHCNRXRAIMQNTMIMUEV");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.941318881002);
    msg.setSource(8858U);
    msg.setSourceEntity(189U);
    msg.setDestination(21583U);
    msg.setDestinationEntity(163U);
    msg.sys_id = 29980U;
    msg.priority = 17;
    msg.x = 18468;
    msg.y = 21795;
    msg.z = 14661;
    msg.t = 9972;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.659775341557;
    tmp_msg_0.lon = 0.692554105185;
    tmp_msg_0.z = 0.389510343579;
    tmp_msg_0.z_units = 31U;
    tmp_msg_0.speed = 0.970367325345;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.bearing = 0.463236437347;
    tmp_msg_0.cross_angle = 0.549548780483;
    tmp_msg_0.width = 0.0750835287167;
    tmp_msg_0.length = 0.898552517344;
    tmp_msg_0.coff = 80U;
    tmp_msg_0.angaperture = 0.58837285176;
    tmp_msg_0.range = 21693U;
    tmp_msg_0.overlap = 188U;
    tmp_msg_0.flags = 152U;
    tmp_msg_0.custom.assign("WYYTASSGSQWESDHIIJGRZFXHWCMONGBIGXMMWNMNQERHVKFTKNOSFUMQIMMWRSXXILCIOMRETXONDLCHAOJOQGPMJRVCRKTHFEJDHREWRYVDTCZBLPHYSEBAFIQKYQXLGXBHGQFLVJFIJKSZPJYOXZVZYADQUPPBUKGTBUPNZNUBPFTVMPPAVZAZJDWNSLVOCTGEQJDHYDQJKBXFPAOZLEKDAAEHCWUWUVNDRCAIEC");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.191197577369);
    msg.setSource(4314U);
    msg.setSourceEntity(220U);
    msg.setDestination(42659U);
    msg.setDestinationEntity(93U);
    msg.sys_id = 20089U;
    msg.priority = -116;
    msg.x = -24347;
    msg.y = -21694;
    msg.z = 9563;
    msg.t = -7961;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZRXJPFPSQYGQDZVWLSQYWUIRIVUGBLMHCHNGNWRPVFAHEJGOBMNWODETPZFARVKKYOWNOSALLYOKXTAAIUPFNQBOTRRQSEKKUJQCPTIXPRJFWVMGKGCKQFMXBOTVIFLABJZLVMSSSBRIZITYWHLCSRIZYFNQHJIQNNGCAHLYDCBPLXBWCKMJEU");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.923320641962);
    msg.setSource(62392U);
    msg.setSourceEntity(223U);
    msg.setDestination(31711U);
    msg.setDestinationEntity(237U);
    msg.req_id = 15394U;
    msg.type = 106U;
    msg.max_size = 61661U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.597632514104;
    tmp_msg_0.base_lon = 0.826918263956;
    tmp_msg_0.base_time = 0.813697114372;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 27146U;
    tmp_tmp_msg_0_0.priority = -42;
    tmp_tmp_msg_0_0.x = -16511;
    tmp_tmp_msg_0_0.y = 28329;
    tmp_tmp_msg_0_0.z = -8271;
    tmp_tmp_msg_0_0.t = 32055;
    IMC::CloseSession tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 570836585U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.815518486986);
    msg.setSource(47833U);
    msg.setSourceEntity(123U);
    msg.setDestination(5599U);
    msg.setDestinationEntity(5U);
    msg.req_id = 14383U;
    msg.type = 127U;
    msg.max_size = 55383U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.814554957992;
    tmp_msg_0.base_lon = 0.326305082878;
    tmp_msg_0.base_time = 0.677575343586;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.0271303426171);
    msg.setSource(33132U);
    msg.setSourceEntity(183U);
    msg.setDestination(17253U);
    msg.setDestinationEntity(124U);
    msg.req_id = 9671U;
    msg.type = 60U;
    msg.max_size = 4028U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.166419601434;
    tmp_msg_0.base_lon = 0.140237090162;
    tmp_msg_0.base_time = 0.80534218721;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 7731U;
    tmp_tmp_msg_0_0.priority = 39;
    tmp_tmp_msg_0_0.x = -18498;
    tmp_tmp_msg_0_0.y = -12747;
    tmp_tmp_msg_0_0.z = -23820;
    tmp_tmp_msg_0_0.t = -4567;
    IMC::PopEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("KXETRFYYSMRMERBBXJUFHCSELDPVYWNPSZYEPEQIOZKSJGPAORGIINTIPZHQLGLXVAVWZUQPTHJMEUUVETNHMMGLZIMZDVKNDFCKWZQPKADKMLJAOJFUVJLWRUJXHAPUFXQEQBAIDFVFYZQCNNFZKSTJENUSHWJYDANGAXCQWNBKXIXRFTGJDEWSXLPHYQVOGDRRBMALICORWLMXCAOKYYRGBSUGGOZTDFNDBCBHCWMPYKQT");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.727808365639);
    msg.setSource(3019U);
    msg.setSourceEntity(194U);
    msg.setDestination(6028U);
    msg.setDestinationEntity(199U);
    msg.original_source = 34891U;
    msg.destination = 54986U;
    msg.timeout = 0.141760707656;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.187919668062;
    tmp_msg_0.y = 0.790647439572;
    tmp_msg_0.z = 0.243110370775;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.298239250141);
    msg.setSource(56642U);
    msg.setSourceEntity(124U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(51U);
    msg.original_source = 33105U;
    msg.destination = 25824U;
    msg.timeout = 0.848399505906;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.id.assign("QYDSLVLNIRHCPGWKBHEPXFWCZSMVATWAMRFHQJHCXVGWXTGKPDHEPNSNNODGVCHUZRPDYYXYOLVLOQMQZWIJZMBWOAHOTAAKNQJXGZYNPHLMDURPWEWEYGPRDEJRSCTSGQTBISPOLJFUJUUOWDZASAIIKLBRWVOTNTOQKZOCMVXUBNZFLKFMXDMUGXZEKCFREZKRYJJMKKLFUQAXDE");
    IMC::GpsFix tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 40244U;
    tmp_tmp_msg_0_0.type = 115U;
    tmp_tmp_msg_0_0.utc_year = 42976U;
    tmp_tmp_msg_0_0.utc_month = 112U;
    tmp_tmp_msg_0_0.utc_day = 86U;
    tmp_tmp_msg_0_0.utc_time = 0.759174537477;
    tmp_tmp_msg_0_0.lat = 0.91808633226;
    tmp_tmp_msg_0_0.lon = 0.915887730063;
    tmp_tmp_msg_0_0.height = 0.440883935016;
    tmp_tmp_msg_0_0.satellites = 104U;
    tmp_tmp_msg_0_0.cog = 0.408252993271;
    tmp_tmp_msg_0_0.sog = 0.502083151479;
    tmp_tmp_msg_0_0.hdop = 0.294074127769;
    tmp_tmp_msg_0_0.vdop = 0.691199687795;
    tmp_tmp_msg_0_0.hacc = 0.679648222797;
    tmp_tmp_msg_0_0.vacc = 0.240598536629;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.761378989792);
    msg.setSource(49319U);
    msg.setSourceEntity(159U);
    msg.setDestination(57277U);
    msg.setDestinationEntity(7U);
    msg.original_source = 6255U;
    msg.destination = 52646U;
    msg.timeout = 0.961454321765;
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.610404310099;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.964699131455);
    msg.setSource(17872U);
    msg.setSourceEntity(121U);
    msg.setDestination(32616U);
    msg.setDestinationEntity(80U);
    msg.type = 49U;
    msg.comm_interface = 20222U;
    msg.model = 15784U;
    msg.list.assign("AYESNDBMAXORXRDRZCJEINTNLSPCBGKFHMBIGYNUHJPGSCWWGUJJIBBXSIEOYETHJLZBQGVQANHOYQNRFPRHMYHVBCWQUIOTOUOVLPNZEQDKXSTQJLWJYWSKMJRFRAXZDFLWTGEYSEDGXVZVPKSUAQRXDZCABULRTPZMTWQDKXEIDAMDWKUXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.753839615775);
    msg.setSource(55309U);
    msg.setSourceEntity(168U);
    msg.setDestination(58641U);
    msg.setDestinationEntity(219U);
    msg.type = 224U;
    msg.comm_interface = 6480U;
    msg.model = 36550U;
    msg.list.assign("LIOKRBJIHVCMUNNSOCNZUIXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.648149577599);
    msg.setSource(4443U);
    msg.setSourceEntity(119U);
    msg.setDestination(43197U);
    msg.setDestinationEntity(113U);
    msg.type = 45U;
    msg.comm_interface = 40788U;
    msg.model = 28468U;
    msg.list.assign("GYFYBPFDLGLBNXDQEDPRORTZWIBLHVOLJUZCRJQVPUKAGNOBQOEUIIWXAJDHEMZUJSELLNHOXQQEXYSPJWKYWOUIUJACFROHSBMPVYPWGMILSEIWDFAAFEUMFAVHKWLSXNLMHDUTQYRTUNKEQAVVZAGRWZIZGBXQNMVEJZFYYKVGRXYTCTQWDEHZBMKCNOLHRAMFPSTFSBTCKPKMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.751279528383);
    msg.setSource(52406U);
    msg.setSourceEntity(205U);
    msg.setDestination(12539U);
    msg.setDestinationEntity(85U);
    msg.type = 116U;
    msg.req_id = 2821829845U;
    msg.ttl = 49488U;
    msg.code = 24U;
    msg.destination.assign("ENQZCZYPWQPDOJHKJVMDOIRHWLFGAQCZUMMNPNBHIYRVSRDJFJXDWYBEKBMTTUUGSTAQLTJGZMBYBWDYI");
    msg.source.assign("AKQTHIDPFPCOBWQZOZPLKVLHMWLNHUMVNHYSMIVXWKZOEOOBMKDIWGTJUQBXIREDYFZJQYYQFGFCKXQJEVPRYBOZDNHLYFQGXIUUDUTNDESOHMGVSEPHCPCJGSLNUTMJMCYRMCFTIZGILVEYGUXWVDZKDCBAMRJIOQNJI");
    msg.acknowledge = 66U;
    msg.status = 209U;
    const char tmp_msg_0[] = {-67, 46, -51, 67, 126, 24, 97, 101, 98, -74, 58, -26, 79, 3, 35, -17, -120, -35, 88, 112, 126, 108, 88, 33, 61, 124, -11, 124, 45, -14, -112, -30, -79, 9, -108, -20, 70, -36, 4, -37, -7, -80, 115, -123, -123, -63, 25, 111, -24, 39, 53, 109, 18, 2, 122, 48, -122, -71, -29, -62, 4, 101, -11, 41, -42, -17, 10, 23, 9, -88, -113, 113, -62, 76, 76, 5, 112, -26, -25, -34, 69, 49, 12, -69, 91, -57, 11, -112, -42, -21, -123, 55, 90, 116, -28, 94, 46, 65, 3, -91, -105, 49, -93, 44, -107, -83, 58, 5, -4, 106, -103, -20, 40, -59, -33, -125, -19, 77, -84, -64, 107, -123, -36, 42, -60, -73, 18, 112, 106, -114, 25, 2, -52, -70, 56, -13, 120, 39, 63, -67, 82, 27, -93, -50, 70, -65, -38, 99, 121, 96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.02314522055);
    msg.setSource(13772U);
    msg.setSourceEntity(172U);
    msg.setDestination(39854U);
    msg.setDestinationEntity(207U);
    msg.type = 82U;
    msg.req_id = 2380742581U;
    msg.ttl = 59630U;
    msg.code = 128U;
    msg.destination.assign("PTWCQLZFMUAQOFSEAMLPHWEKDTAGCJDBCNDJSXMVORGLUNPICTRLJVNXKRYYDCPXFBEJCZRNUGVAEINPRQODKF");
    msg.source.assign("XDJXNRIEPJCVQVTQFIAHJLGALEETLEQONDZFBOOSPMMPXBVOACBWMZDSCKKMSGWMVJYUHJWTFFUPUCQEAJYTLSMUNPLCRRTOWYIXXZNIKSOAJBYZJTDLUTGVGDTFSMZCRLBGHVLVIYSEDBNIEQYLKYGZSBCARBZRCNKABVDYWPPPEJXZMXVJWDFXZSFGWHPH");
    msg.acknowledge = 62U;
    msg.status = 47U;
    const char tmp_msg_0[] = {22, -110, -88, -114, 16, -112, 62, -119, 87, 64, -11, 88, 69, 29, 92, 9, -28, -104, -32, -99, -92, -6, -41, -106, -44, -54, -67, -32, 13, -71, 102, 46, 26, 100, 36, -67, 6, 87, 117, -70, 16, 104, 51, -18, 8, 69, 116, 60, 9, -26, 125, -90, 32, -22, -95, -16, -79, -53, -21, 72, 0, 39, 5, -49, -97, -93, 61, -114, 72, 51, 58, 58, 13, -34, 15, -23, -2, -48, 33, 23, 110, 27, 46, -98, 52, -57, 3, 50, -107, -95, 1, 79, 123, 83, 73, 93, -96, -19, -44, -115, -121, -45, 33, 77, -60, 73, 110, 91, 9, -69, 48, 107, 16, 109, -44, -11, 0, -73, 89, 28, -128, -63, -24, -12, -51, -127, 5, 69, -9, 7, 67, -71, 87, -84, -45, 95, 51, -96, 105, -116, 72, -83, -112, -43, -81, -106, 76, 102, -36, 114, -82, 123, -11, -16, -92, 22, 118, -88, -25, -117, 30, 102, -102, -68, -7, -83, 20, -19, -97, -126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.615574098094);
    msg.setSource(54918U);
    msg.setSourceEntity(98U);
    msg.setDestination(43075U);
    msg.setDestinationEntity(39U);
    msg.type = 118U;
    msg.req_id = 2985816842U;
    msg.ttl = 33277U;
    msg.code = 242U;
    msg.destination.assign("ZDHVVNFTFFPKYXGBINHQCPJIVDQODNRJKRICPTDECJBAYOMPOSKQEFCPRZTCLMFJAEJAOCNMCBNAGQVYIDOKLGRWVTCSESSIWHMFVHARCIEXYMLPZEKJYGWKGGSLRUNKZJOYUSGNSRQRLSGEZHMQMLTWYXBXWGGPRSILPOJYFIQUJXUWZDFKTDEHTCABHMXHQWXTUNYKNHLOBYWWOX");
    msg.source.assign("YVOWFGCDWBZBBGUAGOJIIBMPQXSEMSMSTRZRGHQUGTBPKQLVLHIVPMMSTXBDRMAPLLNFWEFFENVOEFIJEXZSVEYKFLKFUBGCIWKKDTQXWCZKWJJEJPZSNDJRADTXHXTHGPGNQCWFYHSAAEDVAMITOEUVQYODLPLAUMABGKMYCAXBQYOZDZ");
    msg.acknowledge = 240U;
    msg.status = 225U;
    const char tmp_msg_0[] = {-38, 47, 71, 106, -93, 90, 25, 71, 89, 67, 113, -23, -33, -95, -41, 100, -15, -5, 94, -97, 46, -76, -42, -53, -33, -33, -71, -113, -95, 101, -72, 93, -56, 19, 11, 8, 119, -9, -72, 14, -122, 90, -107, -95, -62, -105, -52, 68, 33, -21, 56, -27, -53, 112, -47, -119, -25, -112, -105, 56, -35, -107, -71, -12, 25, -11, 41, 11, -64, 94, 70, 22, 90, 55, 71, 10, 38, 16, -109, 20, -21, 55, 44, -121, -6, 96, -115, 31, -96, 35, -22, 42, 119, 3, 86, 63, -29, 89, -34, -121, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.28353283732);
    msg.setSource(41951U);
    msg.setSourceEntity(66U);
    msg.setDestination(32803U);
    msg.setDestinationEntity(212U);
    msg.id = 244U;
    msg.range = 0.457990558964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.379928464312);
    msg.setSource(41884U);
    msg.setSourceEntity(248U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(199U);
    msg.id = 204U;
    msg.range = 0.0856432184197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.113470277544);
    msg.setSource(39060U);
    msg.setSourceEntity(249U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(246U);
    msg.id = 130U;
    msg.range = 0.523125263005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.815169491838);
    msg.setSource(6630U);
    msg.setSourceEntity(86U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(108U);
    msg.beacon.assign("CGQNEOHMWNPREOTNZSRQTXALLIVFWYYMAJHB");
    msg.lat = 0.758962502299;
    msg.lon = 0.445186506942;
    msg.depth = 0.710743482822;
    msg.query_channel = 150U;
    msg.reply_channel = 11U;
    msg.transponder_delay = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.178098646855);
    msg.setSource(24487U);
    msg.setSourceEntity(170U);
    msg.setDestination(59338U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("QIGEONLGMBWTTVZBJHACORKZTQYPAQGIWCZLWUGSGBFEZISUEFMHISNLHMBAZIROJOATDPHWMEEZFJVNVXFZBXSUJSGNZPCYYIHRKEMPNXQKLKBWCRRGVDHKPVYWKLJKMXESXPAUEJUVYSTQRMHJXHIAQCHUPYFDBORYFNIOIXDVEZRLMAFWDODSTVUTAXTCPPYLESRBGQMROBXTCVHQWBGZ");
    msg.lat = 0.0641799760977;
    msg.lon = 0.483943582662;
    msg.depth = 0.152009399446;
    msg.query_channel = 172U;
    msg.reply_channel = 2U;
    msg.transponder_delay = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.925707381947);
    msg.setSource(56560U);
    msg.setSourceEntity(173U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(55U);
    msg.beacon.assign("DMWVNIQZKFKMJTTOCSAYHLBLROILTEWLOJMAXFVQJTUWPGBQWTGCERRINRIGEYGGYWFAOHNRHKNPVWHQKPZSYEQYSWLATZFTGOYPAXMMXKHMRDLPWYDIUGBCRSBHSVNQHKRZCBECUKRYGVJKDEVIABLBZUNUCNJHBUSKSCMPDTEKQ");
    msg.lat = 0.107272238208;
    msg.lon = 0.41766412369;
    msg.depth = 0.123398948479;
    msg.query_channel = 129U;
    msg.reply_channel = 146U;
    msg.transponder_delay = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.316755175648);
    msg.setSource(33465U);
    msg.setSourceEntity(180U);
    msg.setDestination(48593U);
    msg.setDestinationEntity(77U);
    msg.op = 42U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IUMOOIDYSTDIDOZDZYXYFOJNVYPRQWKXJDLXQFHFJHPAGJCZTORIAMQONGTIVXVNCNUBKEMOXQZGQBGGKFHIVTKMUELLQOVOHBHD");
    tmp_msg_0.lat = 0.419844314771;
    tmp_msg_0.lon = 0.509231709534;
    tmp_msg_0.depth = 0.19063415735;
    tmp_msg_0.query_channel = 99U;
    tmp_msg_0.reply_channel = 233U;
    tmp_msg_0.transponder_delay = 82U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.092858877554);
    msg.setSource(33662U);
    msg.setSourceEntity(90U);
    msg.setDestination(22888U);
    msg.setDestinationEntity(251U);
    msg.op = 135U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TYYJUPCTYJDDHDBETVZLGGFLFZGPOJBHMEMVARRTLUZRERYUWJQITTM");
    tmp_msg_0.lat = 0.239735679219;
    tmp_msg_0.lon = 0.375482433073;
    tmp_msg_0.depth = 0.856878278162;
    tmp_msg_0.query_channel = 78U;
    tmp_msg_0.reply_channel = 178U;
    tmp_msg_0.transponder_delay = 251U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.895176225541);
    msg.setSource(52233U);
    msg.setSourceEntity(125U);
    msg.setDestination(4423U);
    msg.setDestinationEntity(59U);
    msg.op = 132U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JHUPBDYQXKSAGWBPGDSUNQVCHHMVTUCZHKPYUDTHJUIJROKBNSBPVROJIMGCRQZZLEYPXAGSLSMMVBBNKOHTKYERVJFWEIPKHGRMFVYCUPSJWEJLBWGYWYWQECIIIZQAKIKDXGMEWWYCRJKTSCCNHZADVFEYKPMTRUAFQGPRCOOONQIONZLUFODVZNVPXAFMXTXNZNTXQGXEJRFZLASUHAFOWHNLELOLBBIXDVMWTUDXFCMZLARGSFJST");
    tmp_msg_0.lat = 0.793713139807;
    tmp_msg_0.lon = 0.990351821392;
    tmp_msg_0.depth = 0.025076598991;
    tmp_msg_0.query_channel = 45U;
    tmp_msg_0.reply_channel = 110U;
    tmp_msg_0.transponder_delay = 236U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.128965966964);
    msg.setSource(59594U);
    msg.setSourceEntity(224U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(118U);
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.586595218357;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.978005416901);
    msg.setSource(22003U);
    msg.setSourceEntity(172U);
    msg.setDestination(56523U);
    msg.setDestinationEntity(249U);
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("SKUQBASAVUHTPGZXSGAABHIVYLLONWMLVYINTKQJFGTKMYRZQSLCFKBMVEZUTVTLABHLWPPCXLUFHCYFKJSJCMHXEQQPRIHKBNISYYDUTMKCAQEIDRXUUFCNIGJRVEGVXQKWRANLPFMRBJEJSOBMMCFOTREEWONOGTAYYGLHYJUDQDWVTFD");
    tmp_msg_0.message_id = 60767U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.24537090955);
    msg.setSource(55232U);
    msg.setSourceEntity(6U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(95U);
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.406279493151;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.307514135808);
    msg.setSource(49910U);
    msg.setSourceEntity(143U);
    msg.setDestination(20909U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.306001224359;
    msg.lon = 0.265759805843;
    msg.depth = 0.416380669489;
    msg.sentence.assign("CAOPQCLTWMDKUPMHNPWAIKQDSDNVPKEZVRTHTSBZSWIYSLBJRLJWBXTYNXLJCAQIXLYCFEUCVFZRUCKUJKWKZORZRSHTRMBXNRDQRIVUXHNLMLPKMTDHAVVSOGVPONJLTKKGHAMFIEIPJXGIFWDDG");
    msg.txtime = 0.00231365282714;
    msg.modem_type.assign("DWXXPEGRYARAZQGJEJTYDTJFMUILDABCZ");
    msg.sys_src.assign("JJWNOVAAKWFVGUFEYUFUINZHMYOKWDTHEYBRWHOQLQDZDV");
    msg.seq = 63629U;
    msg.sys_dst.assign("VIXPXTSXCEPOGAVSXKPXCVDGDOMZMVBFWRGOHUFYMESNFZMPCVLDHBMKQRPOQMLKAUWDYDRCQEILPJCQHTHRDOKYAYAYZWZYOVUWBSEWJANNFEAPLXVCKZGSTITQGINOGEMCGQROYQMYNZZFINQWUTFBJJHETUBRWHMHHLVXQYBIVKWWHALXGRJBAFJJNJUVTUACYXBOSJNFBUWTKKHSEXKSUBPPSNZKJSGIDGL");
    msg.flags = 74U;
    const char tmp_msg_0[] = {-121, -16, -19, -78, -93, -21, -77, 35, 110, 115, -121, 12, -94, -112, 107, 80, -5, 104, 28, -9, -66, 36, -111, -94, -89, -125, -49, 3, 84, 20, -109, -33, -65, 89, -26, -124, -45, -81, -102, -93, 46, 89, 67, -79, 55, -41, -15, -5, 81, -18, -30, -22, 24, 71, -28, -73, -86, -57, -116, -120, -67, 102, 31, -88, -37, 74, 1, 75, 61, -7, -126, -94, -100, -64, -79, 110, 47, -73, 54, -84, -60, -68, 12, 116, -43, -98, -42, 113, 77, 106, -109, -120, 107, -102, 82, 71, 110, 93, -125, -25, 123, 35, 37, -67, -105, -121, 87, 35, -77, -24, -73, -113, 49, -63, -112, 86, -47, 69, -118, -123, -65, -66, 117, 112, -2, 14, 116, 52};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.0296261740906);
    msg.setSource(30629U);
    msg.setSourceEntity(198U);
    msg.setDestination(50420U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.533323574639;
    msg.lon = 0.492667157284;
    msg.depth = 0.70857810993;
    msg.sentence.assign("QOFOIEWGHVDLHOGTUVUAZOBEJSAMNSVLBZDKKRVQWSHLCBVXWFSYBNGSYUWCHIRCGPQPKWJAHQBXLQPGTJPUAXYLKYWHPZAENHIMFDKKNGERUBDIJCQEGYNIEYQUGRNDTEKROGJHRRQTV");
    msg.txtime = 0.0628429609813;
    msg.modem_type.assign("HIZBPQTOMFWPSTDQHBXHHRBOEYWDJRYSISJMZMDZDNVALIOGMSKQXPLEZCAPFFNPVBFLTTQRSWDXDTXIJYAPGSSEVTFYAOUBIJQWCUVFUYXDFEGTERCOIO");
    msg.sys_src.assign("CMPKJRYDFMYSRODPLUPVPJGUYKNCGGUUZOGAFMBXEAYJYNBHTBEJBBEVODORLEVHQNVNXZSSTWCLNLLTINYEOCWEIADAOKNDFHCZYRDSPRXSTPOBPUZCJVEKUCEIELZMK");
    msg.seq = 18946U;
    msg.sys_dst.assign("FUESQBMDKWFUGHBJJSGLKKLGUZELXMZKAQHKOAUXMXQJEKNVXZNMBKCSFROLHDIWFCVRBFIUCLBNHHDTDFYVSXZIZWOHRSOYPLJXUWIZPJYGFAMRZWQ");
    msg.flags = 178U;
    const char tmp_msg_0[] = {104, -45, -103, -64, 65, -13, -41, -64, 38, 69, 15, -33, 66, -20, -116, -83, -106, 30, -123, 63, -110, -39, 77, 60, -74, -111, 62, -27, 71, -98, 13, -16, -126, 45, -94, 85, 75, 50, 94, 11, -57, 5, -89, 42, 61, 56, 59, 7, -81, -80, 124, -52, 101, -17, -43, -78, -24, 52, -100, -122, 101, 115, 49, -16, -98, -123, 121, 11, -68, 78, -96, 92, -33, -69, 110, -42, -99, 55, 121, 82, 70, -115, -26, 45, -98, 17, 100, -36, -22, -24, 0, -71, 33, -14, -96, -68, 122, -77, -4, -29, 106, -69, -63, 79, -46, -13, 111, -95, 106, -127, 122, 62, -93, -17, 52, -82, -61, -37, 14, 30, 34, 89, -79, -84, -22, 8, 34, 110, 76, 43, -63, 8, 120, -91, -2, -88, -22, 32, 13, -34, -101, 90, -85, -94, 8, -25, -96, -108, -128, 46, -53, -109, -93, 64, -4, 121, 73, -102, -15, -45, 90, 34, -73, 102, 55, -121, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.616208650609);
    msg.setSource(23003U);
    msg.setSourceEntity(114U);
    msg.setDestination(43876U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.999087179045;
    msg.lon = 0.578678904516;
    msg.depth = 0.943969462563;
    msg.sentence.assign("LUZJZYEECRNYTSHKMBBQJDQRXJTANCCOSFTDRDECQVLLVCQOUTJGCTRHQHDYFOYSMETMFMDIJUZYUNPDUCAJYVTOTRJCMIRYSEFUWWGTLGXBBHEROHJLVLGJPXGZPXDAWJDWNIAXTEMINZBKGSOGUPREGYMSFIVHQBCUKNZKPVHQWBGZXHSBDOXACSZUFPASPAOEBOWNRFMKLP");
    msg.txtime = 0.533232355566;
    msg.modem_type.assign("PBMNWJNFVWETICEYKTIIOOKVRJDZCNPWLRLUGUJTXSUUDMRMPYBTVVYKKV");
    msg.sys_src.assign("ZDQXHDHASFRVEZBLCEJPIJELIDUNBRKUHMVHDINEWQPZKMKXTLTDVGSYHDGDXOR");
    msg.seq = 31792U;
    msg.sys_dst.assign("ELTCBNDLAKZOBRCIOVCIUGWSEYUXHAHVLAJZZVF");
    msg.flags = 222U;
    const char tmp_msg_0[] = {52, -15, -103, -91, -90, 38, 57, 115, 81, 125, -64, -119, 68, 11, -86, -95, -58, 94, -81, 8, 23, -128, 60, 97, 72, -84, 55, 92, -60, 77, -114, 119, -2, -111, 100, -84, -8, -29, -15, -80, 25, 34, -39, 122, -65, 48, 125, -38, -34, -46, 64, 14, -11, 80, 20, -67, -60, -123, 122, -97, -42, -99, 102, -33, 59, 114, 2, 60, -78, 27, -58, 76, -32, 108, 41, 97, -60, -22, 20, -112, -36, 25, 48, 7, -24, 63, 3, -25, 66, -85, 83, -55, 9, -33, -18, -114, 126, -24, 39, -7, 33, -97, 33, -128, 8, -19, -87, -121, -53, 14, -67, -18, 18, -114, 48, 48, -7, -104, -65, 77, -17, 124, 46, -106, 87, 112, 23, -58, 80, -12, -52, 8, -72, -30, 97, -52, -110, 33, 6, -43, 45, -27, 85, 118, 91, -50, 19, 35, 36, -50, 36, 121, -114, -120, 100, 17, 5, -108, 94, -13, -112, 102, 100, -4, -16, 107, 5, -27, -21, -107, -108, -52, 21, 106, 98, 123, -101, -51, 68, 68, -105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.445207103427);
    msg.setSource(10804U);
    msg.setSourceEntity(173U);
    msg.setDestination(44449U);
    msg.setDestinationEntity(88U);
    msg.op = 7U;
    msg.system.assign("ZAGJXHBTBIJKBFXGNQREBGTZSCLORTTWCSGIMGALIDHOVUDQYEEBVBDQSVSZD");
    msg.range = 0.345578707872;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 45U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.221701541528);
    msg.setSource(49205U);
    msg.setSourceEntity(83U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(0U);
    msg.op = 172U;
    msg.system.assign("WBJGLTZUIFDVXZBDCGUSFKANMRERDCYBYKODLSPDWAAPVHNYZPDNQAUCNTRFUMZVHIQEVICEKXVNJPJRYBCCJVENUIIDIRTQNAMJGWHGZXSHXXSPKJBLTMGBTZOGZMYGAOWOLJATLRJBCMZCOROSUIKXXDYHGVGRPILFYRFSYWIPLOKFUFEPSSYKMQZEKXLFWMHBLJBNXAVQHTIOPUMTLZDONFTVWCKBQ");
    msg.range = 0.861157843717;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.995297616448;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0490028889803);
    msg.setSource(38116U);
    msg.setSourceEntity(154U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(135U);
    msg.op = 105U;
    msg.system.assign("AXQCSERRMXQEIHFBQCVKHNCBZIMKWADIYUOMCVNTXKLNMJGPUWVFQZRHLUHITHXMZXTKDFWCAOYLOUVDSHTQQUXRDDXRJYPCYQZRCKBWHRVEPJXGPMJVSNDHSPTEMXJIAEPB");
    msg.range = 0.945098233432;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 236U;
    tmp_msg_0.time_remain = 0.396949993998;
    tmp_msg_0.sched_time = 0.834381121168;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.78422212489);
    msg.setSource(32912U);
    msg.setSourceEntity(19U);
    msg.setDestination(4213U);
    msg.setDestinationEntity(141U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.642197652269);
    msg.setSource(39053U);
    msg.setSourceEntity(29U);
    msg.setDestination(52639U);
    msg.setDestinationEntity(76U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.704682211912);
    msg.setSource(20788U);
    msg.setSourceEntity(33U);
    msg.setDestination(21127U);
    msg.setDestinationEntity(52U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.412232003374);
    msg.setSource(54454U);
    msg.setSourceEntity(114U);
    msg.setDestination(30423U);
    msg.setDestinationEntity(24U);
    msg.list.assign("MVAFUCYOTZGFIBNTYNBAUYWFPKRHMLOEZHGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.589376764307);
    msg.setSource(10135U);
    msg.setSourceEntity(176U);
    msg.setDestination(42463U);
    msg.setDestinationEntity(230U);
    msg.list.assign("RGASXMDUOQGVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.0950351018346);
    msg.setSource(16088U);
    msg.setSourceEntity(38U);
    msg.setDestination(30875U);
    msg.setDestinationEntity(180U);
    msg.list.assign("XQRKSDSDTAWVUNNLYIZAEZXTSPTISVLWFJWSOLFQEECKHAGVPPOZZYVYAMUPOQRRQFOKCHONWNVRXDETXYPVXAVDEKBGZJHQIDGZBBQUCJXIUXLTHGNKWWYOMDGHJQBFMEFCTCUZUKNDZJMLCOTJPCIBDJKYNFFTQHLBFGIRTRHFSWPHNMVAVXAGMNRKSMNHUQEZDSGPTLCIEWYJBAVWJLGBBEKMPAJUKRMIFDUIWRXCIOSSBCYQPEHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.910269384652);
    msg.setSource(36316U);
    msg.setSourceEntity(207U);
    msg.setDestination(14648U);
    msg.setDestinationEntity(167U);
    msg.peer.assign("QRGZNYFFJFFGHYXVUITVPLPALORZHLIXTBMWYBTMRNPMGSNUJLDWTOFGPBURUVYXWHOANPHOYGEGSQHQVGVFUCNXACELBUPCXBCHOOHECBKHMFJYKSPKXJWVREQAEMNRBOKKE");
    msg.rssi = 0.15256838407;
    msg.integrity = 43463U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.298512865368);
    msg.setSource(61931U);
    msg.setSourceEntity(173U);
    msg.setDestination(14553U);
    msg.setDestinationEntity(158U);
    msg.peer.assign("IPVZBFXQDWLIGNNLBDJXSSFVTSLEWGQUYSHDEKDJXTZNXQJBRFRKINVUFETOCUNOPLVBRTFAKLTBRYBGUKJLRCMOFBMGHCABDPPQAIFJNNZMKPSEZZQTVAWQCIMZGXJNMDCJSZATMUZTKOWANHSERBJYMDCRIUCGOZYVAMDVXYWDGYHFWHGHSCSARTEQHLZRKPDQWCVKKYGIYWRXIXOTXUIJAO");
    msg.rssi = 0.27064934148;
    msg.integrity = 9248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.857541512102);
    msg.setSource(51817U);
    msg.setSourceEntity(248U);
    msg.setDestination(28930U);
    msg.setDestinationEntity(211U);
    msg.peer.assign("HODZEMPAUBOQCPFZMGHCMSSFJYWYWJDVPCAEKUHUQUYRNRSKCFBPNLZNTZMDSVDU");
    msg.rssi = 0.366868051523;
    msg.integrity = 21535U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.326619327774);
    msg.setSource(39477U);
    msg.setSourceEntity(205U);
    msg.setDestination(62523U);
    msg.setDestinationEntity(97U);
    msg.req_id = 45471U;
    msg.destination.assign("WGHKPUURPCPJVGAGWTKJVSTKFLFBEKHYXMZMEMVNSUDQKRUXLIISJQOMKUKQVIPSUUPSIVLHASGRBPFBGXDZWNWTANGDLSPYADTMJTCSVOOOUXXNLYHFTGTEJFYCITIMCDKXRKPBHEC");
    msg.timeout = 0.252967487628;
    msg.range = 0.695456260662;
    msg.type = 59U;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 39U;
    tmp_msg_0.snapshot.assign("NMYSLFHBWRSDQPIDKPLWUJIFLUQPFFFNUCNCSPVELUCQOYQMMLYIZFJRWCNOEHXIKLDOEPGKGYSB");
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 1181255648U;
    tmp_tmp_msg_0_0.start_lat = 0.879303288293;
    tmp_tmp_msg_0_0.start_lon = 0.474888270991;
    tmp_tmp_msg_0_0.start_z = 0.54281894856;
    tmp_tmp_msg_0_0.start_z_units = 177U;
    tmp_tmp_msg_0_0.end_lat = 0.935857084077;
    tmp_tmp_msg_0_0.end_lon = 0.162351618543;
    tmp_tmp_msg_0_0.end_z = 0.991042442127;
    tmp_tmp_msg_0_0.end_z_units = 60U;
    tmp_tmp_msg_0_0.speed = 0.216809071457;
    tmp_tmp_msg_0_0.speed_units = 172U;
    tmp_tmp_msg_0_0.lradius = 0.458493585608;
    tmp_tmp_msg_0_0.flags = 22U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.723332301634);
    msg.setSource(55796U);
    msg.setSourceEntity(137U);
    msg.setDestination(15729U);
    msg.setDestinationEntity(86U);
    msg.req_id = 37385U;
    msg.destination.assign("WSNRSECUEIQVSXWPYZY");
    msg.timeout = 0.390148186517;
    msg.range = 0.846429381558;
    msg.type = 2U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8420958128;
    tmp_msg_0.base_lon = 0.689853757441;
    tmp_msg_0.base_time = 0.518140332732;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.784593890316);
    msg.setSource(64283U);
    msg.setSourceEntity(54U);
    msg.setDestination(38839U);
    msg.setDestinationEntity(141U);
    msg.req_id = 14862U;
    msg.destination.assign("NEAYERIIKXSOUMTJTYFNIBYINHNSXLJFOSBXOVLIDOMZBSUPRKBDQZKZIHJXIEUVNTLLRLMPUYE");
    msg.timeout = 0.421314397345;
    msg.range = 0.0355222889896;
    msg.type = 139U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZHCOEBNWTTGASVJBVPUOMCPGLWPQVZVDSGTJGSKYKMLOLIMRFQZXCANERUSQTRULFYJQLJAUZHAVFDDUICKAUXOWQTXIYYHJZGENOHKNPWEUZUXYJGNSLFKW");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 12159U;
    tmp_tmp_msg_0_0.custom.assign("GINRPKFHBHTSUETZSLEHYTVQUWWBOUTIVVFPLIHJZOINBERXHYQMLKQWYZIDYCCHWYVRKTZFQAYOEVKIENDMVGGCCPMUCKQMZDTKAXZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AcousticOperation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 146U;
    tmp_tmp_msg_0_1.system.assign("KZTLIFBJNNGLQPLNVICOWVQEHIUCEHLXRTBAYULRSHALZCOKMIERYPCWDRBZVWLZDTPKCKDEFJZZCJXKPSRECHFUJWAOSZIDXBTPZGDUUIADWXDSPQVTLTVGSBAHJWMYIYYQXFFNFMDNLLNGFPMHXTJTQYDZBJVEBIFUUWKXHUMGANVRBOOOCEOKSRVSKGMYVHQKXIOOGYGGXFAQYMJENUONRPJWEDPACSCFMYPMBTSWN");
    tmp_tmp_msg_0_1.range = 0.848194422917;
    IMC::FormationEvaluation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 250U;
    tmp_tmp_tmp_msg_0_1_0.op = 126U;
    tmp_tmp_tmp_msg_0_1_0.err_mean = 0.0234954529998;
    tmp_tmp_tmp_msg_0_1_0.dist_min_abs = 0.220179997457;
    tmp_tmp_tmp_msg_0_1_0.dist_min_mean = 0.0107168749295;
    tmp_tmp_tmp_msg_0_1_0.roll_rate_mean = 0.83840820967;
    tmp_tmp_tmp_msg_0_1_0.time = 0.759697715235;
    IMC::FormationControlParams tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.action = 54U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon_gain = 0.113359056192;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat_gain = 0.843789178086;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.bond_thick = 0.0668480464218;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lead_gain = 0.61603944775;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.deconfl_gain = 0.0804957155789;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.accel_switch_gain = 0.047705468687;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.safe_dist = 0.557453191353;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.deconflict_offset = 0.886127305855;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.accel_safe_margin = 0.837794910691;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.accel_lim_x = 0.714092529966;
    tmp_tmp_tmp_msg_0_1_0.controlparams.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.msg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.239577993302);
    msg.setSource(13764U);
    msg.setSourceEntity(50U);
    msg.setDestination(36375U);
    msg.setDestinationEntity(142U);
    msg.req_id = 33670U;
    msg.type = 249U;
    msg.status = 238U;
    msg.info.assign("FWQAMHFAPGFAVMOGWVWEHRREULTZKNLCZITDXGKELHNLAINYSWBCLKFKKASCJICOSLXHJZYSGGRQSODTTOWUFDQPCFMUDYOZRFIFVCVOBXHXWUXNZEQWXXESMKSTXRXBUPIHVVJONIOMUJMUXBBENFUEAOCBJBKSAMDRKQLIQY");
    msg.range = 0.713234302735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.0616144733901);
    msg.setSource(5979U);
    msg.setSourceEntity(32U);
    msg.setDestination(47352U);
    msg.setDestinationEntity(149U);
    msg.req_id = 48368U;
    msg.type = 118U;
    msg.status = 235U;
    msg.info.assign("FMXHTRJCEPNCAWXMWDXHUNUJRBERRGOUSQFMRTBKDKQUVLIETJLBSCEYOQYFKXBLHZCXGQIDYDDWLLVKZJVRNNNGEYACNEXIIFRGGTILQASOFZIIKKGSIVSXVUVPXUANMWD");
    msg.range = 0.499391059671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.752331296818);
    msg.setSource(28060U);
    msg.setSourceEntity(77U);
    msg.setDestination(47590U);
    msg.setDestinationEntity(118U);
    msg.req_id = 5959U;
    msg.type = 178U;
    msg.status = 138U;
    msg.info.assign("BZAZXBPQFWTYLJMGJCUPTOLEGUQACLNRPDPYSBRUGZMSHEODSYXXZXDZEAVNNDTYNPRRLNDWVIWBGRMKUHCHSFCQGFTBVWIELTHHXQXMCVWMELZCIISKQFAIRZGKJBVRVEDPKFVYTOUYCVKEAAUHJSIKMEAOHJTXKXIHZAYXDEOTNGPNWGJOMOFJLCUBCHVSSNYGVAUBDXMRJNGQWFSZOQKHQRFLQCIFNDOEOKAPKJMRSTLJIYWQPBFYUW");
    msg.range = 0.0652357111623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.214613680107);
    msg.setSource(25099U);
    msg.setSourceEntity(45U);
    msg.setDestination(54399U);
    msg.setDestinationEntity(200U);
    msg.value = 26891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.96466528979);
    msg.setSource(1556U);
    msg.setSourceEntity(65U);
    msg.setDestination(18612U);
    msg.setDestinationEntity(241U);
    msg.value = 22209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.051030747369);
    msg.setSource(7543U);
    msg.setSourceEntity(135U);
    msg.setDestination(27652U);
    msg.setDestinationEntity(78U);
    msg.value = -32445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.358053852099);
    msg.setSource(24374U);
    msg.setSourceEntity(39U);
    msg.setDestination(34400U);
    msg.setDestinationEntity(157U);
    msg.value = 0.805371591199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.693278738877);
    msg.setSource(26951U);
    msg.setSourceEntity(251U);
    msg.setDestination(28802U);
    msg.setDestinationEntity(148U);
    msg.value = 0.912380087703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.160427661465);
    msg.setSource(37905U);
    msg.setSourceEntity(190U);
    msg.setDestination(5079U);
    msg.setDestinationEntity(71U);
    msg.value = 0.837761417095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.85569439853);
    msg.setSource(36405U);
    msg.setSourceEntity(225U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(157U);
    msg.value = 0.707322199793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.61117873765);
    msg.setSource(35075U);
    msg.setSourceEntity(5U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(45U);
    msg.value = 0.79702332523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.566301138703);
    msg.setSource(10509U);
    msg.setSourceEntity(82U);
    msg.setDestination(33911U);
    msg.setDestinationEntity(236U);
    msg.value = 0.600314949783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.570775067259);
    msg.setSource(8474U);
    msg.setSourceEntity(193U);
    msg.setDestination(45073U);
    msg.setDestinationEntity(107U);
    msg.validity = 65473U;
    msg.type = 212U;
    msg.utc_year = 10030U;
    msg.utc_month = 104U;
    msg.utc_day = 64U;
    msg.utc_time = 0.839764999567;
    msg.lat = 0.328916044905;
    msg.lon = 0.651242745295;
    msg.height = 0.787562468928;
    msg.satellites = 49U;
    msg.cog = 0.498079427276;
    msg.sog = 0.445878695711;
    msg.hdop = 0.639895348776;
    msg.vdop = 0.0065507990791;
    msg.hacc = 0.944561309722;
    msg.vacc = 0.904847168359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.224676723839);
    msg.setSource(48761U);
    msg.setSourceEntity(188U);
    msg.setDestination(37877U);
    msg.setDestinationEntity(92U);
    msg.validity = 23983U;
    msg.type = 39U;
    msg.utc_year = 37083U;
    msg.utc_month = 185U;
    msg.utc_day = 9U;
    msg.utc_time = 0.408997133061;
    msg.lat = 0.0850287935315;
    msg.lon = 0.183440990025;
    msg.height = 0.291346621205;
    msg.satellites = 56U;
    msg.cog = 0.198026617127;
    msg.sog = 0.457796226058;
    msg.hdop = 0.16709205772;
    msg.vdop = 0.776280435185;
    msg.hacc = 0.209555417646;
    msg.vacc = 0.828644123343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.111476569382);
    msg.setSource(41137U);
    msg.setSourceEntity(15U);
    msg.setDestination(20213U);
    msg.setDestinationEntity(184U);
    msg.validity = 35291U;
    msg.type = 19U;
    msg.utc_year = 48551U;
    msg.utc_month = 64U;
    msg.utc_day = 37U;
    msg.utc_time = 0.0861298305194;
    msg.lat = 0.770639027555;
    msg.lon = 0.750999680351;
    msg.height = 0.404141858107;
    msg.satellites = 52U;
    msg.cog = 0.488104881105;
    msg.sog = 0.907103508988;
    msg.hdop = 0.613743179457;
    msg.vdop = 0.554283799503;
    msg.hacc = 0.643070456925;
    msg.vacc = 0.369537752887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.166970235839);
    msg.setSource(29895U);
    msg.setSourceEntity(1U);
    msg.setDestination(29744U);
    msg.setDestinationEntity(215U);
    msg.time = 0.144888801426;
    msg.phi = 0.0518431445805;
    msg.theta = 0.0887645894299;
    msg.psi = 0.672380047982;
    msg.psi_magnetic = 0.723612371131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.468042970214);
    msg.setSource(15101U);
    msg.setSourceEntity(218U);
    msg.setDestination(19301U);
    msg.setDestinationEntity(182U);
    msg.time = 0.412145334393;
    msg.phi = 0.316249949822;
    msg.theta = 0.64701665803;
    msg.psi = 0.402991418167;
    msg.psi_magnetic = 0.211985895404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.129588290175);
    msg.setSource(44257U);
    msg.setSourceEntity(186U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(87U);
    msg.time = 0.556867469434;
    msg.phi = 0.291279805792;
    msg.theta = 0.181710497681;
    msg.psi = 0.780116316937;
    msg.psi_magnetic = 0.209681949027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.46634952799);
    msg.setSource(34555U);
    msg.setSourceEntity(194U);
    msg.setDestination(2293U);
    msg.setDestinationEntity(21U);
    msg.time = 0.808696831981;
    msg.x = 0.955168492789;
    msg.y = 0.727075599307;
    msg.z = 0.613860369915;
    msg.timestep = 0.186807042726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.322730817115);
    msg.setSource(27317U);
    msg.setSourceEntity(152U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(97U);
    msg.time = 0.63888168926;
    msg.x = 0.316591417661;
    msg.y = 0.642087522581;
    msg.z = 0.831977108445;
    msg.timestep = 0.801599886918;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.589884546592);
    msg.setSource(4074U);
    msg.setSourceEntity(85U);
    msg.setDestination(36678U);
    msg.setDestinationEntity(166U);
    msg.time = 0.309058622541;
    msg.x = 0.607711789513;
    msg.y = 0.268446876255;
    msg.z = 0.293266884292;
    msg.timestep = 0.794635912933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.0164216959187);
    msg.setSource(44035U);
    msg.setSourceEntity(253U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(238U);
    msg.time = 0.559658681132;
    msg.x = 0.745054339666;
    msg.y = 0.752456153619;
    msg.z = 0.921680311459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.741591157304);
    msg.setSource(44706U);
    msg.setSourceEntity(60U);
    msg.setDestination(9477U);
    msg.setDestinationEntity(43U);
    msg.time = 0.0216530180023;
    msg.x = 0.073098685963;
    msg.y = 0.825669617677;
    msg.z = 0.575499477218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.622368823862);
    msg.setSource(30031U);
    msg.setSourceEntity(127U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(190U);
    msg.time = 0.837565901282;
    msg.x = 0.81468853037;
    msg.y = 0.641871540715;
    msg.z = 0.181161631547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.56084904042);
    msg.setSource(11115U);
    msg.setSourceEntity(59U);
    msg.setDestination(21983U);
    msg.setDestinationEntity(229U);
    msg.time = 0.497086569088;
    msg.x = 0.435731068691;
    msg.y = 0.405399504274;
    msg.z = 0.924297243965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.096272509246);
    msg.setSource(6105U);
    msg.setSourceEntity(26U);
    msg.setDestination(54774U);
    msg.setDestinationEntity(20U);
    msg.time = 0.699368811208;
    msg.x = 0.317654048533;
    msg.y = 0.287422666065;
    msg.z = 0.694649124382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.553101616291);
    msg.setSource(12075U);
    msg.setSourceEntity(229U);
    msg.setDestination(18930U);
    msg.setDestinationEntity(161U);
    msg.time = 0.023026869588;
    msg.x = 0.627731761712;
    msg.y = 0.903210435956;
    msg.z = 0.147248651337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.5834736563);
    msg.setSource(16170U);
    msg.setSourceEntity(103U);
    msg.setDestination(22739U);
    msg.setDestinationEntity(225U);
    msg.time = 0.947551233621;
    msg.x = 0.439902435015;
    msg.y = 0.058432709171;
    msg.z = 0.223983275994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.158300741613);
    msg.setSource(24204U);
    msg.setSourceEntity(4U);
    msg.setDestination(63994U);
    msg.setDestinationEntity(155U);
    msg.time = 0.129163543917;
    msg.x = 0.314400193643;
    msg.y = 0.403349865901;
    msg.z = 0.741192615895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.637306707101);
    msg.setSource(28702U);
    msg.setSourceEntity(157U);
    msg.setDestination(56081U);
    msg.setDestinationEntity(216U);
    msg.time = 0.56848581977;
    msg.x = 0.820696140966;
    msg.y = 0.294420766001;
    msg.z = 0.832188332684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.279208305949);
    msg.setSource(727U);
    msg.setSourceEntity(42U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(3U);
    msg.validity = 21U;
    msg.x = 0.576771672095;
    msg.y = 0.350155703185;
    msg.z = 0.38733348098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.868068911212);
    msg.setSource(366U);
    msg.setSourceEntity(168U);
    msg.setDestination(21643U);
    msg.setDestinationEntity(149U);
    msg.validity = 106U;
    msg.x = 0.257113220553;
    msg.y = 0.99679448759;
    msg.z = 0.00328345408458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.852581725612);
    msg.setSource(2376U);
    msg.setSourceEntity(113U);
    msg.setDestination(39380U);
    msg.setDestinationEntity(145U);
    msg.validity = 51U;
    msg.x = 0.00627709300826;
    msg.y = 0.400794978954;
    msg.z = 0.0556780124643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.952954879272);
    msg.setSource(5853U);
    msg.setSourceEntity(189U);
    msg.setDestination(15537U);
    msg.setDestinationEntity(187U);
    msg.validity = 106U;
    msg.x = 0.226141361408;
    msg.y = 0.84349990925;
    msg.z = 0.968014137567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.719341882995);
    msg.setSource(40884U);
    msg.setSourceEntity(33U);
    msg.setDestination(10158U);
    msg.setDestinationEntity(245U);
    msg.validity = 82U;
    msg.x = 0.159163301144;
    msg.y = 0.108574179804;
    msg.z = 0.0205070657692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.238742751197);
    msg.setSource(49499U);
    msg.setSourceEntity(137U);
    msg.setDestination(43074U);
    msg.setDestinationEntity(51U);
    msg.validity = 198U;
    msg.x = 0.126649763102;
    msg.y = 0.803818871614;
    msg.z = 0.567024065784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.1079617106);
    msg.setSource(7035U);
    msg.setSourceEntity(121U);
    msg.setDestination(6446U);
    msg.setDestinationEntity(130U);
    msg.time = 0.905106156655;
    msg.x = 0.527321655278;
    msg.y = 0.490286926729;
    msg.z = 0.717969585104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.152319608262);
    msg.setSource(37139U);
    msg.setSourceEntity(48U);
    msg.setDestination(9496U);
    msg.setDestinationEntity(47U);
    msg.time = 0.581150366879;
    msg.x = 0.0839671585086;
    msg.y = 0.240622982882;
    msg.z = 0.248529179856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.5489426119);
    msg.setSource(23673U);
    msg.setSourceEntity(235U);
    msg.setDestination(13628U);
    msg.setDestinationEntity(161U);
    msg.time = 0.36047784111;
    msg.x = 0.0306176520959;
    msg.y = 0.604935570586;
    msg.z = 0.323497383545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.634338731843);
    msg.setSource(10412U);
    msg.setSourceEntity(214U);
    msg.setDestination(40413U);
    msg.setDestinationEntity(174U);
    msg.validity = 224U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.562288578755;
    tmp_msg_0.beam_height = 0.598643086598;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.536582651803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0522730942167);
    msg.setSource(42840U);
    msg.setSourceEntity(34U);
    msg.setDestination(57811U);
    msg.setDestinationEntity(1U);
    msg.validity = 97U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.659493544456;
    tmp_msg_0.y = 0.799634378031;
    tmp_msg_0.z = 0.0719269558857;
    tmp_msg_0.phi = 0.899181875627;
    tmp_msg_0.theta = 0.302728163043;
    tmp_msg_0.psi = 0.238016699171;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.37501036726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.453099145497);
    msg.setSource(50465U);
    msg.setSourceEntity(207U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(57U);
    msg.validity = 34U;
    msg.value = 0.017653347655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.773591695518);
    msg.setSource(18963U);
    msg.setSourceEntity(125U);
    msg.setDestination(33416U);
    msg.setDestinationEntity(82U);
    msg.value = 0.541587732436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.716700004224);
    msg.setSource(44507U);
    msg.setSourceEntity(76U);
    msg.setDestination(7158U);
    msg.setDestinationEntity(218U);
    msg.value = 0.565332610915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.476872976202);
    msg.setSource(46269U);
    msg.setSourceEntity(89U);
    msg.setDestination(26643U);
    msg.setDestinationEntity(49U);
    msg.value = 0.35909119657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.344459489616);
    msg.setSource(46055U);
    msg.setSourceEntity(182U);
    msg.setDestination(25186U);
    msg.setDestinationEntity(117U);
    msg.value = 0.803968505646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.559515839552);
    msg.setSource(64194U);
    msg.setSourceEntity(99U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(200U);
    msg.value = 0.243555578157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.782426382556);
    msg.setSource(62198U);
    msg.setSourceEntity(165U);
    msg.setDestination(9370U);
    msg.setDestinationEntity(203U);
    msg.value = 0.113771203879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.541737528969);
    msg.setSource(55427U);
    msg.setSourceEntity(93U);
    msg.setDestination(31124U);
    msg.setDestinationEntity(87U);
    msg.value = 0.351361251316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.0180411483669);
    msg.setSource(51270U);
    msg.setSourceEntity(36U);
    msg.setDestination(61499U);
    msg.setDestinationEntity(202U);
    msg.value = 0.337481596647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.228898165161);
    msg.setSource(35547U);
    msg.setSourceEntity(141U);
    msg.setDestination(3107U);
    msg.setDestinationEntity(76U);
    msg.value = 0.293820289059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.54947739261);
    msg.setSource(3701U);
    msg.setSourceEntity(205U);
    msg.setDestination(38771U);
    msg.setDestinationEntity(109U);
    msg.value = 0.935050875467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.514172169431);
    msg.setSource(9805U);
    msg.setSourceEntity(175U);
    msg.setDestination(43064U);
    msg.setDestinationEntity(94U);
    msg.value = 0.416385117643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.11530552562);
    msg.setSource(19002U);
    msg.setSourceEntity(205U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(191U);
    msg.value = 0.850097220034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.154887759128);
    msg.setSource(8202U);
    msg.setSourceEntity(104U);
    msg.setDestination(804U);
    msg.setDestinationEntity(243U);
    msg.value = 0.855161368651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.559479182338);
    msg.setSource(2975U);
    msg.setSourceEntity(214U);
    msg.setDestination(31210U);
    msg.setDestinationEntity(188U);
    msg.value = 0.285337073404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.0580400815104);
    msg.setSource(5891U);
    msg.setSourceEntity(152U);
    msg.setDestination(33841U);
    msg.setDestinationEntity(40U);
    msg.value = 0.18495310932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.551403125129);
    msg.setSource(51018U);
    msg.setSourceEntity(117U);
    msg.setDestination(10835U);
    msg.setDestinationEntity(249U);
    msg.value = 0.49350968823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.960915921765);
    msg.setSource(40479U);
    msg.setSourceEntity(94U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(52U);
    msg.value = 0.537930119865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.232108957374);
    msg.setSource(47191U);
    msg.setSourceEntity(38U);
    msg.setDestination(41828U);
    msg.setDestinationEntity(136U);
    msg.value = 0.554791626894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.986378349352);
    msg.setSource(28175U);
    msg.setSourceEntity(154U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(197U);
    msg.value = 0.281670199658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.341717461914);
    msg.setSource(46920U);
    msg.setSourceEntity(198U);
    msg.setDestination(3028U);
    msg.setDestinationEntity(52U);
    msg.value = 0.419698119684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.649595433022);
    msg.setSource(14392U);
    msg.setSourceEntity(144U);
    msg.setDestination(17620U);
    msg.setDestinationEntity(28U);
    msg.value = 0.370261332911;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.0931525171299);
    msg.setSource(63979U);
    msg.setSourceEntity(42U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(167U);
    msg.value = 0.765620647961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.942966601072);
    msg.setSource(36365U);
    msg.setSourceEntity(202U);
    msg.setDestination(397U);
    msg.setDestinationEntity(143U);
    msg.value = 0.446689993134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.869913200244);
    msg.setSource(63685U);
    msg.setSourceEntity(152U);
    msg.setDestination(28813U);
    msg.setDestinationEntity(14U);
    msg.value = 0.721092424999;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.556368628082);
    msg.setSource(58664U);
    msg.setSourceEntity(102U);
    msg.setDestination(21847U);
    msg.setDestinationEntity(40U);
    msg.direction = 0.401994951041;
    msg.speed = 0.982942101012;
    msg.turbulence = 0.0478393016403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.262998451377);
    msg.setSource(62278U);
    msg.setSourceEntity(176U);
    msg.setDestination(51631U);
    msg.setDestinationEntity(3U);
    msg.direction = 0.942752825599;
    msg.speed = 0.727750361584;
    msg.turbulence = 0.505862774832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.813867643654);
    msg.setSource(39594U);
    msg.setSourceEntity(44U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(145U);
    msg.direction = 0.20386095553;
    msg.speed = 0.104400623802;
    msg.turbulence = 0.101836890478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.442468372763);
    msg.setSource(46053U);
    msg.setSourceEntity(198U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(232U);
    msg.value = 0.445840995642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.265400465679);
    msg.setSource(2098U);
    msg.setSourceEntity(198U);
    msg.setDestination(12828U);
    msg.setDestinationEntity(166U);
    msg.value = 0.373647671839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.853053095514);
    msg.setSource(50474U);
    msg.setSourceEntity(156U);
    msg.setDestination(60659U);
    msg.setDestinationEntity(208U);
    msg.value = 0.137751749921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.313208738583);
    msg.setSource(15838U);
    msg.setSourceEntity(225U);
    msg.setDestination(54436U);
    msg.setDestinationEntity(3U);
    msg.value.assign("RQMKWCKYGLBAPBKJWHKZFDUGIIMFJTBNMYYSHEUKMVFNSKNTGSWJTGTRKLETRWXEDJFCIBLWVDRPZFESAZPQCUXWEMUVYCNUZMDUGOBRXPYYBEQJCHHAPDYDNBLVNBMIQBCORXMUJHJGRYIAZZNLCBICSKNRXHWOSAOIOEJFEEYLADTELQVGXUNWWQZDIPPAXVDPRTSHUQZFKMTHFPIOXYOOLCAH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.39714347505);
    msg.setSource(16711U);
    msg.setSourceEntity(78U);
    msg.setDestination(54254U);
    msg.setDestinationEntity(129U);
    msg.value.assign("LGDSZLBQCYUBCYIBIXMDEJWCFYRROREQMCJTWGBQVBKWRVLSFJIRYOXKYVRZLAIWXMTVNPJACPEQATFULZEVHNOJRERQNMNTUUOHGKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.33590607942);
    msg.setSource(3393U);
    msg.setSourceEntity(224U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(129U);
    msg.value.assign("HVHBJNHDAJQWKRJRMHWZIPSTSUOFWAFLOGYIZPZQTTIGJSMRNOIXXFYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.897292020124);
    msg.setSource(11467U);
    msg.setSourceEntity(192U);
    msg.setDestination(28974U);
    msg.setDestinationEntity(254U);
    const char tmp_msg_0[] = {26, 7, 123, 113, 45, 58, -20, 92, 86, -107, -26, -91, 83, -14, 15, -82, -8, 90, 123, -71, -53, 3, 19, 17, -44, -12, 69, -79, 48, 100, -89, 67, 91, -45, -12, -125, 122, -93, -32, 79, 8, -94, -48, -120, -48, 18, -2, -92, -12, -23, -2, -114, 22, 99, 11, -16, 9, -27, 22, -3, 75, 10, 56, -102, 102, 26, 45, 126, 78, -46, 1, -101, 114, -33, 48, 34, -59, -111, 106, 78, -38, 108, 78, 14, 39, 112, 9, -45, -10, 113, 70, 96, -3, -31, 78, -72, -26, -54, 111, -31, -95, 35, 62, 62, -57, 50, -116, 8, -112, -24, 38, 46, 26, 111, 35, 36, 108, 55, -41, -81, 12, 59, 13, 119, -43, -1, 102, -106, 26, -61, 42, -63, 125, 83, -5, 62, 36, 72, 49, -55, -24, -118, -119, -59, -3, -45, -126, 27, 88, 70, 8, 18, 121, 24, 5, 103, -73, 7, 21, -103, -67, -41, 57, 43, 111, -55, 35, -94, -77, -69, 56, -76, 27, 87, -115, -39, -110, -5, -26, 34, -94, -44, 101, -7, -33, 60, 76, 26, -61, 74, 14, -72, 89, -81};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.128656586186);
    msg.setSource(58430U);
    msg.setSourceEntity(225U);
    msg.setDestination(48569U);
    msg.setDestinationEntity(253U);
    const char tmp_msg_0[] = {-88, 8, 0, 114, 102, 17, -11, 113, -107, -88, 15, -57, -47, 81, -87, -68, 86, -72, -128, -21, -2, -10, 74, -53, -101, 71, -69, 97, -102, -71, 125, 66, 120, -10, 89, 88, -47, 56, 1, -112, -44, 6, 26, 75, -7, 22, 32, -9, 99, -107, -88, -124, -111, -111, -122, 35, 48, -97, 98, 125, 81, -46, 43, 37, 5, 75, -12, 119, -111, 12, 30, -29, 118, 70, 59, 44, 80, 11, 95, -122, -17, -6, 22, -80, -67, -68, -56, -18, 57, -3, 39, -82, -86, -63, 63, 86, -126, -37, 9, -106, 59, 1, -29, 102, 108, -52, 33, -73, -72, 50, -116, 2, -16, -107, 83, 109, 16, 119, -60, -46, -49, -122, 59, -40, -126, 102, 21, -35, -36, 120, 52, 13, 42, -14, -6, -7, 39, -2, -89, 67, -69, -62, 103, 52, 69, -125, -17, -119, 33, -56, 126, 65, 78, 93, 100, -66, -17, -113, 80, -116, 109, 41, -68, 20, -48, 28, -113, 6, -8, 58, -10, 81, -11, -2, -7, 109, 93, -70, 53, -52, -76, 48, -97, 118, 7, 5, -91, 12, 72, 64, 5, 110, 104, -73, -2, 54, 74, -57, 121, -62, -71, 68, 91, -97, 98, -41, 97, 87, -61, 77, 18, 29, 91, 104, -54, 108, -106, -89, 107, 36, -52, -57, -39};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.108121029322);
    msg.setSource(40195U);
    msg.setSourceEntity(24U);
    msg.setDestination(3998U);
    msg.setDestinationEntity(242U);
    const char tmp_msg_0[] = {124, -78, -51, -26, -3, 36, 59, -31, 100, -89, -67, -67, -126, 42, 1, -113, 90, 81, 87, -114, -55, -116, 11, 91, -116, -8, -34, 37, -18, 99, 23, -76, -105, -65, -4, 37, 92, -88, 70, -23, 78, -108, 23, -75, -119, -40, -43, 116, 112, -44, -101, 108, -49, 63, 26, 97, 76, 30, 32, -101, 7, -67, -114, 53, 14, 12, 40, 8, 14, -120, 20, -6, 109, -18, -44, -4, 15, -63, 69, 97, -25, 52, 14, -15, -87, -28, 48, -51, -80, -30, -5, -109, -12, -75, -24, -80, 95, 80, 28, 96, -121, -127, -13, 80, -7, -69, 93, 89, 59};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.645829440429);
    msg.setSource(27994U);
    msg.setSourceEntity(22U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(185U);
    msg.value = 0.127357924314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.586695071706);
    msg.setSource(22246U);
    msg.setSourceEntity(195U);
    msg.setDestination(38642U);
    msg.setDestinationEntity(219U);
    msg.value = 0.22635533164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.745863378005);
    msg.setSource(44834U);
    msg.setSourceEntity(245U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(69U);
    msg.value = 0.608377898326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.468403681809);
    msg.setSource(26761U);
    msg.setSourceEntity(10U);
    msg.setDestination(10485U);
    msg.setDestinationEntity(114U);
    msg.type = 244U;
    msg.frequency = 1617686732U;
    msg.min_range = 36397U;
    msg.max_range = 26676U;
    msg.bits_per_point = 243U;
    msg.scale_factor = 0.944042990967;
    const char tmp_msg_0[] = {119, 94, 3, 124, -76, 12, 82, -52, 45, -57, 0, -33, -10, -88, 38, -82, 36, -119, 84, -10, -50, 106, -112, 109, -38, 79, 79, 50, 25, 82, -112, -121, -101, 77, 75, 114, -87, 102, 31, 29, -63, 93, 79, 72, -102, 20, 104, -13, -77, 72, -118, -56, -60, -79, -1, 105, 37, -13, -120, -97, -100, 86, 82, 84, -21, -127, -120, -55, -86, -4, 91, 69, 91, -58, 88, -110, 17, 16, -26, 94, -121, 86, 119, -21, 60, 38, 102, -74, 88, -48, 27, -20, -128, 8, 64, 25, -45, 54, 12, -46, 42, 58, -60, -108, 111, -55, 10, -116, -84, 122, 69, 76, 74, -64, -30, -115, 62, -10, 11, -82, -121, 6, -61, -69, -57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.674864004815);
    msg.setSource(16419U);
    msg.setSourceEntity(225U);
    msg.setDestination(47767U);
    msg.setDestinationEntity(188U);
    msg.type = 51U;
    msg.frequency = 579413087U;
    msg.min_range = 3248U;
    msg.max_range = 62188U;
    msg.bits_per_point = 238U;
    msg.scale_factor = 0.507673456557;
    const char tmp_msg_0[] = {8, 96, 117, 64, 65, 26, 4, 60, 22, 106, -84, -84, 120, -16, 58, 19, -93, 27, 58, 1, -128, -9, 68, -49, -93, -47, -94, 0, 90, 118, 36, 12, 4, 101, 27, -33, -73, 48, 5, -123, 88, 61, 42, -48, -109, 114, -111, 20, 36, -88, -125, -36, 30, -14, 53, 120, -80, 100, -48, -113, 93, -101, 96, -31, 120, -58, 12, 55, -101, -25, -121, -97, -94, 53, -94, 58, -74, 64, -128, 54, 63, 33, 25, -58, -59, 114, -100, 115, -10, -112, -18, -47, 105, -11, 23, -98, -42, 66, -3, -112, 69, -100, -123, 53, -88, 98, -68, -91, 35, -4, 0, 34, 19, 102, -83, -101, -105, -77, -82, -98, -66, -22, 20, -88, 16, -101, -25, 38, 46, -22, -27, 120, -13, 8, -85, -81, -126, 41, 37, 29, 52, 79, -104, 116, 43, 5, -68, -8, -117, -107, 97, -66, -77, -45, -61, 88, -71, -6, -97, 94, 80, -33, 109, 83, 99, -120, -105, 112, -80, 90, -15, 21, 24, 50, 15, -97, 33};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.878422874961);
    msg.setSource(39680U);
    msg.setSourceEntity(153U);
    msg.setDestination(21770U);
    msg.setDestinationEntity(242U);
    msg.type = 183U;
    msg.frequency = 2142604687U;
    msg.min_range = 37262U;
    msg.max_range = 20120U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.1394233784;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.538090123247;
    tmp_msg_0.beam_height = 0.01033814297;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {3, 122, 85, 23, -6, 79, 98, -45, -118, -100, -113, -57, -46, 55, 37, 20, 60, 104, 87, 36, -60, -10, 99, -23, 60, 108, 10, -93, 93, 75, 63, 98, 9, -47, -58, -73, 83, -98, -114, -116, 24, -25, -125, -2, -124, -52, -118, 27, 113, 97, -91, 50, 107, 97, -90, 18, 60, 81, -95, -53, -74, 101, 124, 21, 20, 53, -120, -19, -75, -91, 57, 64, -84, -52, 57, 18, -79, 47, -19};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.545589751764);
    msg.setSource(52762U);
    msg.setSourceEntity(105U);
    msg.setDestination(51135U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.933293125431);
    msg.setSource(19952U);
    msg.setSourceEntity(14U);
    msg.setDestination(10545U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.411185197236);
    msg.setSource(51293U);
    msg.setSourceEntity(91U);
    msg.setDestination(26275U);
    msg.setDestinationEntity(19U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.840081113612);
    msg.setSource(63665U);
    msg.setSourceEntity(165U);
    msg.setDestination(48148U);
    msg.setDestinationEntity(185U);
    msg.op = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.0714211184832);
    msg.setSource(42988U);
    msg.setSourceEntity(85U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(19U);
    msg.op = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.872296761901);
    msg.setSource(37924U);
    msg.setSourceEntity(6U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(170U);
    msg.op = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.433771488958);
    msg.setSource(59067U);
    msg.setSourceEntity(16U);
    msg.setDestination(40709U);
    msg.setDestinationEntity(25U);
    msg.value = 0.909698815511;
    msg.confidence = 0.790345388175;
    msg.opmodes.assign("EAMBSHIKMOJDMFDDYEJHPYGERJQWYLROLBVPCUIUCSSORCZFGZHTONTASNRUOQDISXGNVMRUJCFROXRURXLANPLNKVMRISQTMUPKSGAXJQLZPPAMTWGWALPOGYEFDPTMFKJTVFMHEWJGXNKXQDYVPLFULZFRUBETGEIQQBJJXYAWJHTWVDHTHXKXZVKBZEZFNWDKOSBDCLNICCIFXNVZBTQUQWIEUNOGSIVYHBZEYABWHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.174208031268);
    msg.setSource(10715U);
    msg.setSourceEntity(172U);
    msg.setDestination(43613U);
    msg.setDestinationEntity(102U);
    msg.value = 0.648432173983;
    msg.confidence = 0.515926059341;
    msg.opmodes.assign("NITVXHSLLXZICEWWOUAYTXIPLUXPUWULQCGCYEBYIDSMKMBEIJBJFTDIAOGNBTTMMHXUZQSBXBIKVQMHEKQVFZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.534720082419);
    msg.setSource(53680U);
    msg.setSourceEntity(109U);
    msg.setDestination(38364U);
    msg.setDestinationEntity(70U);
    msg.value = 0.012337140051;
    msg.confidence = 0.908480883636;
    msg.opmodes.assign("FBGICWYVMDZGJZDXGOPCWSZJRRTXYQBTCGCUMXRMUKSMPHQVLBFRQXDNQGBOXHMRQIKFZHMMAIWSABGNDONKKOWYWVCJLTTZOSLLDPXXVEZRLLNFRTVEHYGUDVJYMYUWKYJTPRYJQEGUJQFSITUSTVJAZOVUGIHCLCHSFVNLNXKQZUFQEJKEGUEYAIRMWYLNLBNCSBPOAIFOSCINBWKIPUJPHBSDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.00182030171086);
    msg.setSource(39219U);
    msg.setSourceEntity(219U);
    msg.setDestination(2528U);
    msg.setDestinationEntity(73U);
    msg.itow = 3978782346U;
    msg.lat = 0.794478040209;
    msg.lon = 0.816961327409;
    msg.height_ell = 0.522798215716;
    msg.height_sea = 0.299289739405;
    msg.hacc = 0.662826752649;
    msg.vacc = 0.00145805284516;
    msg.vel_n = 0.131432185471;
    msg.vel_e = 0.0755496113134;
    msg.vel_d = 0.198388835269;
    msg.speed = 0.594729686167;
    msg.gspeed = 0.781398602253;
    msg.heading = 0.131054936494;
    msg.sacc = 0.728688966262;
    msg.cacc = 0.194858559908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.693795893222);
    msg.setSource(16846U);
    msg.setSourceEntity(135U);
    msg.setDestination(60787U);
    msg.setDestinationEntity(242U);
    msg.itow = 2474071339U;
    msg.lat = 0.731722531302;
    msg.lon = 0.365720184157;
    msg.height_ell = 0.484774248857;
    msg.height_sea = 0.218325785612;
    msg.hacc = 0.510924382416;
    msg.vacc = 0.88466137279;
    msg.vel_n = 0.0568502295929;
    msg.vel_e = 0.776897928795;
    msg.vel_d = 0.507754584195;
    msg.speed = 0.768261698634;
    msg.gspeed = 0.997241690779;
    msg.heading = 0.267416870829;
    msg.sacc = 0.567005196727;
    msg.cacc = 0.276857182394;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.540648024084);
    msg.setSource(14414U);
    msg.setSourceEntity(93U);
    msg.setDestination(15811U);
    msg.setDestinationEntity(85U);
    msg.itow = 512065114U;
    msg.lat = 0.00272985124679;
    msg.lon = 0.395457787081;
    msg.height_ell = 0.680849120488;
    msg.height_sea = 0.88406147009;
    msg.hacc = 0.397895483192;
    msg.vacc = 0.0403008769466;
    msg.vel_n = 0.86842152924;
    msg.vel_e = 0.932112507227;
    msg.vel_d = 0.513187420612;
    msg.speed = 0.776157331752;
    msg.gspeed = 0.73761979699;
    msg.heading = 0.0199873158649;
    msg.sacc = 0.299947339264;
    msg.cacc = 0.261852913718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.510244053062);
    msg.setSource(45126U);
    msg.setSourceEntity(228U);
    msg.setDestination(47571U);
    msg.setDestinationEntity(157U);
    msg.id = 151U;
    msg.value = 0.582767763893;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.581989338648);
    msg.setSource(11035U);
    msg.setSourceEntity(57U);
    msg.setDestination(21206U);
    msg.setDestinationEntity(245U);
    msg.id = 149U;
    msg.value = 0.865244895691;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.524979181975);
    msg.setSource(10922U);
    msg.setSourceEntity(26U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(145U);
    msg.id = 158U;
    msg.value = 0.0202791874809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.334450969596);
    msg.setSource(60749U);
    msg.setSourceEntity(100U);
    msg.setDestination(56734U);
    msg.setDestinationEntity(240U);
    msg.x = 0.899662697189;
    msg.y = 0.0164165727934;
    msg.z = 0.0957521409101;
    msg.phi = 0.471132026137;
    msg.theta = 0.375236210998;
    msg.psi = 0.0701562461794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.965626604078);
    msg.setSource(37615U);
    msg.setSourceEntity(177U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(199U);
    msg.x = 0.870368972915;
    msg.y = 0.787408346533;
    msg.z = 0.0213895520805;
    msg.phi = 0.543702672512;
    msg.theta = 0.156224666511;
    msg.psi = 0.385064436457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.950715468703);
    msg.setSource(49794U);
    msg.setSourceEntity(178U);
    msg.setDestination(50749U);
    msg.setDestinationEntity(140U);
    msg.x = 0.546882023175;
    msg.y = 0.420561388721;
    msg.z = 0.361757449563;
    msg.phi = 0.244499154504;
    msg.theta = 0.205616802222;
    msg.psi = 0.724688133025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.126764669992);
    msg.setSource(42958U);
    msg.setSourceEntity(185U);
    msg.setDestination(33926U);
    msg.setDestinationEntity(61U);
    msg.beam_width = 0.997341768147;
    msg.beam_height = 0.677005288062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.055532612796);
    msg.setSource(15864U);
    msg.setSourceEntity(211U);
    msg.setDestination(61936U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.768133571439;
    msg.beam_height = 0.804203806897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.244071322495);
    msg.setSource(43090U);
    msg.setSourceEntity(206U);
    msg.setDestination(64922U);
    msg.setDestinationEntity(149U);
    msg.beam_width = 0.869207104374;
    msg.beam_height = 0.0196684434914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.827192270536);
    msg.setSource(16272U);
    msg.setSourceEntity(69U);
    msg.setDestination(37052U);
    msg.setDestinationEntity(11U);
    msg.sane = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.30709489283);
    msg.setSource(31302U);
    msg.setSourceEntity(137U);
    msg.setDestination(63733U);
    msg.setDestinationEntity(198U);
    msg.sane = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.535844957105);
    msg.setSource(18598U);
    msg.setSourceEntity(155U);
    msg.setDestination(33026U);
    msg.setDestinationEntity(183U);
    msg.sane = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.508268053862);
    msg.setSource(53468U);
    msg.setSourceEntity(127U);
    msg.setDestination(33606U);
    msg.setDestinationEntity(223U);
    msg.value = 0.147860212071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.611855680108);
    msg.setSource(62877U);
    msg.setSourceEntity(180U);
    msg.setDestination(32023U);
    msg.setDestinationEntity(207U);
    msg.value = 0.144825193332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.580634878794);
    msg.setSource(18853U);
    msg.setSourceEntity(88U);
    msg.setDestination(11445U);
    msg.setDestinationEntity(9U);
    msg.value = 0.667312928915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.0188107033828);
    msg.setSource(47093U);
    msg.setSourceEntity(14U);
    msg.setDestination(17610U);
    msg.setDestinationEntity(190U);
    msg.value = 0.105915130708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.28739047456);
    msg.setSource(13448U);
    msg.setSourceEntity(48U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(163U);
    msg.value = 0.280803648602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.062273663526);
    msg.setSource(47190U);
    msg.setSourceEntity(47U);
    msg.setDestination(18905U);
    msg.setDestinationEntity(175U);
    msg.value = 0.616599378565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.220150822665);
    msg.setSource(47819U);
    msg.setSourceEntity(168U);
    msg.setDestination(23724U);
    msg.setDestinationEntity(95U);
    msg.value = 0.619127514797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.839934175342);
    msg.setSource(56720U);
    msg.setSourceEntity(231U);
    msg.setDestination(29895U);
    msg.setDestinationEntity(33U);
    msg.value = 0.209592019215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.240376477866);
    msg.setSource(51714U);
    msg.setSourceEntity(113U);
    msg.setDestination(16612U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0832708752934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.775671310366);
    msg.setSource(21783U);
    msg.setSourceEntity(107U);
    msg.setDestination(33432U);
    msg.setDestinationEntity(99U);
    msg.value = 0.0376013734942;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.383777279412);
    msg.setSource(15278U);
    msg.setSourceEntity(216U);
    msg.setDestination(20136U);
    msg.setDestinationEntity(38U);
    msg.value = 0.54967398675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.401327398404);
    msg.setSource(48913U);
    msg.setSourceEntity(192U);
    msg.setDestination(60543U);
    msg.setDestinationEntity(131U);
    msg.value = 0.170275994644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.82864931914);
    msg.setSource(56308U);
    msg.setSourceEntity(100U);
    msg.setDestination(34081U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0475069834877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.498283072521);
    msg.setSource(705U);
    msg.setSourceEntity(102U);
    msg.setDestination(48621U);
    msg.setDestinationEntity(201U);
    msg.value = 0.374463833714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.417086634627);
    msg.setSource(2136U);
    msg.setSourceEntity(57U);
    msg.setDestination(15260U);
    msg.setDestinationEntity(26U);
    msg.value = 0.940155495719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.139510556232);
    msg.setSource(14680U);
    msg.setSourceEntity(166U);
    msg.setDestination(30490U);
    msg.setDestinationEntity(185U);
    msg.value = 0.736843781516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.530788090986);
    msg.setSource(62219U);
    msg.setSourceEntity(217U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(215U);
    msg.value = 0.547486796241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.582773924975);
    msg.setSource(60307U);
    msg.setSourceEntity(97U);
    msg.setDestination(28985U);
    msg.setDestinationEntity(21U);
    msg.value = 0.857571007223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.298032609728);
    msg.setSource(44867U);
    msg.setSourceEntity(153U);
    msg.setDestination(62128U);
    msg.setDestinationEntity(150U);
    msg.value = 0.676885100534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.634522663002);
    msg.setSource(30740U);
    msg.setSourceEntity(154U);
    msg.setDestination(26199U);
    msg.setDestinationEntity(223U);
    msg.value = 0.0140268131238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.614227509871);
    msg.setSource(23869U);
    msg.setSourceEntity(106U);
    msg.setDestination(12664U);
    msg.setDestinationEntity(169U);
    msg.value = 0.988918739814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.603142390923);
    msg.setSource(30498U);
    msg.setSourceEntity(45U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(173U);
    msg.value = 0.548797588813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.706870726833);
    msg.setSource(27858U);
    msg.setSourceEntity(114U);
    msg.setDestination(45196U);
    msg.setDestinationEntity(10U);
    msg.value = 0.936852802358;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.631448071059);
    msg.setSource(33735U);
    msg.setSourceEntity(128U);
    msg.setDestination(43434U);
    msg.setDestinationEntity(192U);
    msg.value = 0.497586407164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.667269899597);
    msg.setSource(1583U);
    msg.setSourceEntity(13U);
    msg.setDestination(7999U);
    msg.setDestinationEntity(213U);
    msg.validity = 3060U;
    msg.type = 210U;
    msg.tow = 2303219566U;
    msg.base_lat = 0.403217007907;
    msg.base_lon = 0.586944326593;
    msg.base_height = 0.415991941209;
    msg.n = 0.936510729199;
    msg.e = 0.82795135913;
    msg.d = 0.632734415889;
    msg.v_n = 0.956229547127;
    msg.v_e = 0.4228366021;
    msg.v_d = 0.430493444625;
    msg.satellites = 131U;
    msg.iar_hyp = 41976U;
    msg.iar_ratio = 0.846125565946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.288649680432);
    msg.setSource(22820U);
    msg.setSourceEntity(248U);
    msg.setDestination(60726U);
    msg.setDestinationEntity(85U);
    msg.validity = 63832U;
    msg.type = 24U;
    msg.tow = 1429356234U;
    msg.base_lat = 0.492798072295;
    msg.base_lon = 0.358835232947;
    msg.base_height = 0.225032033386;
    msg.n = 0.669022284099;
    msg.e = 0.699390326601;
    msg.d = 0.828887293569;
    msg.v_n = 0.905782210639;
    msg.v_e = 0.31768556419;
    msg.v_d = 0.711771935613;
    msg.satellites = 145U;
    msg.iar_hyp = 3364U;
    msg.iar_ratio = 0.534200757915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.688019254141);
    msg.setSource(3284U);
    msg.setSourceEntity(115U);
    msg.setDestination(3025U);
    msg.setDestinationEntity(74U);
    msg.validity = 35775U;
    msg.type = 165U;
    msg.tow = 1411728397U;
    msg.base_lat = 0.147604785304;
    msg.base_lon = 0.861222276761;
    msg.base_height = 0.999679153958;
    msg.n = 0.732050236922;
    msg.e = 0.27358348722;
    msg.d = 0.237169979591;
    msg.v_n = 0.399960581471;
    msg.v_e = 0.125250071313;
    msg.v_d = 0.849606667005;
    msg.satellites = 99U;
    msg.iar_hyp = 59438U;
    msg.iar_ratio = 0.605731416242;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.0767815053472);
    msg.setSource(47928U);
    msg.setSourceEntity(61U);
    msg.setDestination(1145U);
    msg.setDestinationEntity(95U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.762689677462;
    tmp_msg_0.lon = 0.408197536507;
    tmp_msg_0.height = 0.528765523249;
    tmp_msg_0.x = 0.0726526952106;
    tmp_msg_0.y = 0.522699603346;
    tmp_msg_0.z = 0.674905786928;
    tmp_msg_0.phi = 0.999975302989;
    tmp_msg_0.theta = 0.613492929648;
    tmp_msg_0.psi = 0.860118255673;
    tmp_msg_0.u = 0.949958179863;
    tmp_msg_0.v = 0.0465077063064;
    tmp_msg_0.w = 0.665572474642;
    tmp_msg_0.vx = 0.992860846281;
    tmp_msg_0.vy = 0.555873434602;
    tmp_msg_0.vz = 0.619071475153;
    tmp_msg_0.p = 0.063119922461;
    tmp_msg_0.q = 0.0433160644531;
    tmp_msg_0.r = 0.776034188312;
    tmp_msg_0.depth = 0.296841792508;
    tmp_msg_0.alt = 0.30923191158;
    msg.state.set(tmp_msg_0);
    msg.type = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.249227470227);
    msg.setSource(36410U);
    msg.setSourceEntity(49U);
    msg.setDestination(25251U);
    msg.setDestinationEntity(34U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0955394934609;
    tmp_msg_0.lon = 0.992699165704;
    tmp_msg_0.height = 0.195672766438;
    tmp_msg_0.x = 0.603383331707;
    tmp_msg_0.y = 0.990116207679;
    tmp_msg_0.z = 0.512242970513;
    tmp_msg_0.phi = 0.349984726002;
    tmp_msg_0.theta = 0.469698447216;
    tmp_msg_0.psi = 0.218215847419;
    tmp_msg_0.u = 0.238324367378;
    tmp_msg_0.v = 0.280361655822;
    tmp_msg_0.w = 0.86759859498;
    tmp_msg_0.vx = 0.581943368715;
    tmp_msg_0.vy = 0.710345959566;
    tmp_msg_0.vz = 0.164400386365;
    tmp_msg_0.p = 0.437016953295;
    tmp_msg_0.q = 0.719648279406;
    tmp_msg_0.r = 0.620191062853;
    tmp_msg_0.depth = 0.172277969823;
    tmp_msg_0.alt = 0.359983218053;
    msg.state.set(tmp_msg_0);
    msg.type = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.706474269217);
    msg.setSource(29896U);
    msg.setSourceEntity(26U);
    msg.setDestination(26461U);
    msg.setDestinationEntity(186U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.166014311205;
    tmp_msg_0.lon = 0.0338996446711;
    tmp_msg_0.height = 0.132417743174;
    tmp_msg_0.x = 0.0858574544472;
    tmp_msg_0.y = 0.0508301392641;
    tmp_msg_0.z = 0.40037037975;
    tmp_msg_0.phi = 0.197507508268;
    tmp_msg_0.theta = 0.21123402707;
    tmp_msg_0.psi = 0.264696476026;
    tmp_msg_0.u = 0.599455195069;
    tmp_msg_0.v = 0.930305328762;
    tmp_msg_0.w = 0.143898642991;
    tmp_msg_0.vx = 0.887736355542;
    tmp_msg_0.vy = 0.548034180363;
    tmp_msg_0.vz = 0.35908484434;
    tmp_msg_0.p = 0.0196842404508;
    tmp_msg_0.q = 0.311152033134;
    tmp_msg_0.r = 0.00557931338642;
    tmp_msg_0.depth = 0.552058097898;
    tmp_msg_0.alt = 0.357689001485;
    msg.state.set(tmp_msg_0);
    msg.type = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.786153516905);
    msg.setSource(30U);
    msg.setSourceEntity(210U);
    msg.setDestination(60841U);
    msg.setDestinationEntity(2U);
    msg.value = 0.164639275047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.791632052141);
    msg.setSource(4307U);
    msg.setSourceEntity(36U);
    msg.setDestination(24158U);
    msg.setDestinationEntity(60U);
    msg.value = 0.673048832018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.678764024376);
    msg.setSource(23524U);
    msg.setSourceEntity(132U);
    msg.setDestination(5090U);
    msg.setDestinationEntity(136U);
    msg.value = 0.538251470194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.362142251508);
    msg.setSource(14838U);
    msg.setSourceEntity(161U);
    msg.setDestination(34043U);
    msg.setDestinationEntity(74U);
    msg.value = 0.353914056597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.523458898584);
    msg.setSource(8743U);
    msg.setSourceEntity(180U);
    msg.setDestination(9300U);
    msg.setDestinationEntity(179U);
    msg.value = 0.199481686668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.0859589881448);
    msg.setSource(42595U);
    msg.setSourceEntity(187U);
    msg.setDestination(37922U);
    msg.setDestinationEntity(205U);
    msg.value = 0.103661235008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.628518153675);
    msg.setSource(49565U);
    msg.setSourceEntity(54U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(147U);
    msg.value = 0.153794989733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.405547740173);
    msg.setSource(32246U);
    msg.setSourceEntity(56U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(171U);
    msg.value = 0.560867007413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.460874958239);
    msg.setSource(4856U);
    msg.setSourceEntity(122U);
    msg.setDestination(50845U);
    msg.setDestinationEntity(233U);
    msg.value = 0.405845856574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.52788781711);
    msg.setSource(42735U);
    msg.setSourceEntity(4U);
    msg.setDestination(55682U);
    msg.setDestinationEntity(244U);
    msg.value = 0.911930346912;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.154446681967);
    msg.setSource(27352U);
    msg.setSourceEntity(211U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(97U);
    msg.value = 0.153190676133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.67174416694);
    msg.setSource(26014U);
    msg.setSourceEntity(235U);
    msg.setDestination(59605U);
    msg.setDestinationEntity(19U);
    msg.value = 0.123670275904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.423594580426);
    msg.setSource(20273U);
    msg.setSourceEntity(24U);
    msg.setDestination(64226U);
    msg.setDestinationEntity(186U);
    msg.value = 0.133340735226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.89920980581);
    msg.setSource(4371U);
    msg.setSourceEntity(99U);
    msg.setDestination(62812U);
    msg.setDestinationEntity(183U);
    msg.value = 0.748927128852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.326856235357);
    msg.setSource(29930U);
    msg.setSourceEntity(77U);
    msg.setDestination(28739U);
    msg.setDestinationEntity(60U);
    msg.value = 0.944741804387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.372626914554);
    msg.setSource(7054U);
    msg.setSourceEntity(164U);
    msg.setDestination(52272U);
    msg.setDestinationEntity(101U);
    msg.id = 111U;
    msg.zoom = 17U;
    msg.action = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.0363606360403);
    msg.setSource(32949U);
    msg.setSourceEntity(88U);
    msg.setDestination(40316U);
    msg.setDestinationEntity(29U);
    msg.id = 178U;
    msg.zoom = 75U;
    msg.action = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.784581979267);
    msg.setSource(6789U);
    msg.setSourceEntity(237U);
    msg.setDestination(38817U);
    msg.setDestinationEntity(31U);
    msg.id = 62U;
    msg.zoom = 242U;
    msg.action = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.893203981669);
    msg.setSource(2157U);
    msg.setSourceEntity(28U);
    msg.setDestination(60462U);
    msg.setDestinationEntity(154U);
    msg.id = 165U;
    msg.value = 0.432964093823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.525149147342);
    msg.setSource(26130U);
    msg.setSourceEntity(216U);
    msg.setDestination(37095U);
    msg.setDestinationEntity(50U);
    msg.id = 117U;
    msg.value = 0.789257601501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.729835994973);
    msg.setSource(44538U);
    msg.setSourceEntity(96U);
    msg.setDestination(9423U);
    msg.setDestinationEntity(34U);
    msg.id = 68U;
    msg.value = 0.639116044576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.888339884991);
    msg.setSource(40595U);
    msg.setSourceEntity(120U);
    msg.setDestination(56716U);
    msg.setDestinationEntity(237U);
    msg.id = 124U;
    msg.value = 0.334172378168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.602644331047);
    msg.setSource(30013U);
    msg.setSourceEntity(251U);
    msg.setDestination(10245U);
    msg.setDestinationEntity(131U);
    msg.id = 6U;
    msg.value = 0.998656741672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.41197406429);
    msg.setSource(21180U);
    msg.setSourceEntity(41U);
    msg.setDestination(32492U);
    msg.setDestinationEntity(79U);
    msg.id = 111U;
    msg.value = 0.319188866183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.108375382458);
    msg.setSource(34793U);
    msg.setSourceEntity(137U);
    msg.setDestination(28745U);
    msg.setDestinationEntity(147U);
    msg.id = 155U;
    msg.angle = 0.834401859686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.060889321075);
    msg.setSource(48107U);
    msg.setSourceEntity(70U);
    msg.setDestination(21479U);
    msg.setDestinationEntity(171U);
    msg.id = 201U;
    msg.angle = 0.00923539087515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.596815448946);
    msg.setSource(48389U);
    msg.setSourceEntity(148U);
    msg.setDestination(55568U);
    msg.setDestinationEntity(233U);
    msg.id = 54U;
    msg.angle = 0.600486659399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.970002725472);
    msg.setSource(25626U);
    msg.setSourceEntity(9U);
    msg.setDestination(57009U);
    msg.setDestinationEntity(90U);
    msg.op = 47U;
    msg.actions.assign("HWBOIBMRNJTKNOERHBWRYLFUJYTPTJXCIXPLFLQMIASUAVXJCYZQWIYNFGNFEIQXERFZXEHZDNITQMTEGOTDKANCJCKTDQPIBAVWSFVMWZDPCPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.186759756778);
    msg.setSource(59313U);
    msg.setSourceEntity(197U);
    msg.setDestination(4333U);
    msg.setDestinationEntity(30U);
    msg.op = 174U;
    msg.actions.assign("JUDRLQJFXVBDXSFGQDAYMAWCEQKSAMOPCRQOQYGFVLPTETHATZYNWJCNONAPORUSDLQHCOZPZBGLOWEKJWEXDDSIGJNBBZTUEXEZIPRWTBFXWTCJVJNNVMCHOVUIUQHBPLQCLNIJAZGWMOMKUVYFVRVQFULRKJHFIGLRKSUGGRBBYHACFKRZASUODX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.90635798855);
    msg.setSource(32204U);
    msg.setSourceEntity(1U);
    msg.setDestination(18568U);
    msg.setDestinationEntity(109U);
    msg.op = 74U;
    msg.actions.assign("BFDBTHECLAQIDTPBJCSPJQEUJLUNIIGIRYSGYNQFZRSTMAPHIXMBJKZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.9886107954);
    msg.setSource(59105U);
    msg.setSourceEntity(10U);
    msg.setDestination(53739U);
    msg.setDestinationEntity(145U);
    msg.actions.assign("QQNFRWJLRATVCYQXMPHLLPMNMKMQXIGKBXERXYILSIWPICSRGIVCPTLSVBZZNBPMKXLIMGNXBZJEKWFBLTMUZGFHEATUEJKTVSHKGPNOWDUGHDKMRJPXRNWYHUWCZSZDCYDCTGFDALAEBUAZYPABIZTIJHCVYDOLFFQOEOLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.109158861703);
    msg.setSource(54200U);
    msg.setSourceEntity(177U);
    msg.setDestination(58993U);
    msg.setDestinationEntity(102U);
    msg.actions.assign("XFSSSRZBAEOTFDZTLOQJAKFXERSYMKCTMVHDFNHCHUMILWLWNUUWALBEOFPFNKSGKCMBUIPBKORYZBPDXDEAPUNOFVKPEWVFPJVQVTGDTVZWDREKSGAJBQVCAJCIGGUNCLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.00754954990013);
    msg.setSource(29493U);
    msg.setSourceEntity(181U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(96U);
    msg.actions.assign("RSFAJNDEQIQZIWOZFAYBOOHQUGYCSLYQLKUPZYGFAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.0417171012063);
    msg.setSource(22631U);
    msg.setSourceEntity(34U);
    msg.setDestination(58033U);
    msg.setDestinationEntity(41U);
    msg.button = 204U;
    msg.value = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.949553353869);
    msg.setSource(13991U);
    msg.setSourceEntity(66U);
    msg.setDestination(5613U);
    msg.setDestinationEntity(35U);
    msg.button = 117U;
    msg.value = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.985133728855);
    msg.setSource(16337U);
    msg.setSourceEntity(141U);
    msg.setDestination(2756U);
    msg.setDestinationEntity(156U);
    msg.button = 45U;
    msg.value = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.232312132856);
    msg.setSource(54431U);
    msg.setSourceEntity(34U);
    msg.setDestination(40751U);
    msg.setDestinationEntity(103U);
    msg.op = 84U;
    msg.text.assign("TDIJAAOBIOKYFEATEFAZBWMVIBWSFGCRKLXFVLLJWPHEDPXGQCLCCBWGNSQXLMFYOCXRSMQKAADNQZIMSIKUHQNNVKJYAMSPQPUJZPGHNADRXHTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.752495912951);
    msg.setSource(3660U);
    msg.setSourceEntity(20U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(133U);
    msg.op = 119U;
    msg.text.assign("VWHFSUQEJGNAAQNJIVHPPAOAQQCPTVNVIUTKWQBROXNOMBVJNJURGMIXJBEYZRRTXCWMLXXMCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.734581762935);
    msg.setSource(10432U);
    msg.setSourceEntity(4U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(250U);
    msg.op = 79U;
    msg.text.assign("NXUXVTMIYFEXDDPZFMKNTRRQMDKIAPRRYPJTIZZUJRAHALXBQVHGSPUABJBGLPNOGKADOOSVKDQZQYXCIOJPGGNZEPHXAFUGIKFWYDTYLUWGOYIUXFJGAPNVFEIBKEBNKHLCHOBADMWJGPCNRBWTUXSSTCRZQKHAJLNSVEWOZLOMLDJMBTVWJJCVLMYRQHTIREUNCOSDQVCRIFUBNVZWYMFVEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.974490183921);
    msg.setSource(56450U);
    msg.setSourceEntity(152U);
    msg.setDestination(40322U);
    msg.setDestinationEntity(101U);
    msg.op = 238U;
    msg.time_remain = 0.536090372223;
    msg.sched_time = 0.349874124911;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.555527306907);
    msg.setSource(31689U);
    msg.setSourceEntity(235U);
    msg.setDestination(23801U);
    msg.setDestinationEntity(208U);
    msg.op = 233U;
    msg.time_remain = 0.97356370341;
    msg.sched_time = 0.24253496128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.258435314255);
    msg.setSource(30316U);
    msg.setSourceEntity(223U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(238U);
    msg.op = 243U;
    msg.time_remain = 0.251272752099;
    msg.sched_time = 0.334745167526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.873420585818);
    msg.setSource(52400U);
    msg.setSourceEntity(228U);
    msg.setDestination(48988U);
    msg.setDestinationEntity(18U);
    msg.name.assign("EDXSYEGBKOWWUHWRVQICBJXZXIOHAWTFGARVHOIQOVTELCYIVUTNTTFZCZZZTCIGSYHYCDWIUNFDDNHDGRDJCXUSIRBDRLZMKNZPGGBZEBHCLKJUQECJPJERFUHEYVRQFABSLQSUQYECDNLAWPOBOUZQGPXJBGOYTHKQORWVXJOLTUDGDFMPSXQXOYM");
    msg.op = 152U;
    msg.sched_time = 0.771095239684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.237324395218);
    msg.setSource(15761U);
    msg.setSourceEntity(174U);
    msg.setDestination(13666U);
    msg.setDestinationEntity(73U);
    msg.name.assign("VNVFNVMALXXBXOCPZKCIECMBHAICTPXPPHHUAELYTVFSSBQTGPSMQGOEQAUVIOLNXIOGKIJNJHVZRWNPZTIWPCMJYVPFHDDCZXIYZDKGFKDRYUNAUTSGZCGVJDNELMGRIKBMOYDAWMRRLJUBEWRIGLSWODTVOZGFNZLBLXOSKUAFSGAETYKUBFQZMZEURHTPQUCJJKDYRNULJN");
    msg.op = 11U;
    msg.sched_time = 0.930705358745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.629755220142);
    msg.setSource(37874U);
    msg.setSourceEntity(95U);
    msg.setDestination(35984U);
    msg.setDestinationEntity(80U);
    msg.name.assign("JWMBALHTQFWKYEWWCTPNYVJFMUQZEJFIIBWELDZYAOUEPGCWZK");
    msg.op = 0U;
    msg.sched_time = 0.739908955631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.618325121999);
    msg.setSource(11754U);
    msg.setSourceEntity(86U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(254U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.544032172435);
    msg.setSource(908U);
    msg.setSourceEntity(73U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.122503634715);
    msg.setSource(58014U);
    msg.setSourceEntity(161U);
    msg.setDestination(20232U);
    msg.setDestinationEntity(217U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.0888199487265);
    msg.setSource(22445U);
    msg.setSourceEntity(195U);
    msg.setDestination(59609U);
    msg.setDestinationEntity(220U);
    msg.name.assign("EVAASQJWAUGYSPOPKPKSPRREZTIDGOOVINYEAYYHGKBLLNCVQZMYUUFCHLZDAVDZNJCDWSGRIEKBXPVUNKCFXJHLOFSGJSJNVAQNMPDBLLWRQVAMQFCPCLWCHVIFVJKXJZUFKUGHEKAUIDPMGHFRREDAQFUCBLDSRXIBBTBTZWFZOAXJOBWNYQMHNVOMOTT");
    msg.state = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.378899492281);
    msg.setSource(51738U);
    msg.setSourceEntity(31U);
    msg.setDestination(16977U);
    msg.setDestinationEntity(75U);
    msg.name.assign("XBTVMZIIIAKERXXHSYQVAPSCYRHBECJOLLKPTOCUUVYLFBCTGJPQHWZOZYATLUBQKHNGXINFCHBK");
    msg.state = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.425699298083);
    msg.setSource(42850U);
    msg.setSourceEntity(95U);
    msg.setDestination(18606U);
    msg.setDestinationEntity(8U);
    msg.name.assign("EOONSGMNZFOEKGXLVSGSSLKNROUYWXYAOZHIAAACXHQOPWTZZSAIZMUBQADKQXXVKDRVPHFRSCUFWEJNKBSCYMLGU");
    msg.state = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.074995107183);
    msg.setSource(13437U);
    msg.setSourceEntity(203U);
    msg.setDestination(46009U);
    msg.setDestinationEntity(52U);
    msg.name.assign("GUWOACXNRDMOVTAXWNVBYRXKGNSVSZCTIKOHDFLJZYVKXGMCRLPXPITZHBCRMSKMRWALQSWQQPLGBXISWPQOVOKULFJEEYALZMLCEJKDEGNKJNLXWESYJQMPBFABGIAQZEDQUPTMQBSINVUINMJTCDUDRPRAZHGPVCEEBEJVHHYFGJNFX");
    msg.value = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.537029613472);
    msg.setSource(3857U);
    msg.setSourceEntity(59U);
    msg.setDestination(30992U);
    msg.setDestinationEntity(28U);
    msg.name.assign("PKVMQTUMHRAVYENVYTITEWSDEPKNOIQXKCMKQHWNWLYDIJPRKNACTVZBYDGIRUVSHZMWYEJLIWXYHTIINQHZUTGDCFBOUQJJHWWEWKHOCQXKGFPLUUMEOBYFFJASGJVFYAOQGQNBRSHOITZM");
    msg.value = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.493395962873);
    msg.setSource(35486U);
    msg.setSourceEntity(241U);
    msg.setDestination(1196U);
    msg.setDestinationEntity(197U);
    msg.name.assign("CQYPWNHTWOESKPUUOUSZNERLAPDTXGRBMBLQMCOOJKLQIXDNPRFKIQZEWJJIEIDRAFDPERVNUBBRHYRCSTPVODAXKZGQVSAYIWXFQHKFKBCEMUUYJDITTOPWDAWAXBFODVOXLFQNNYHKGQTIVCFWCYLVVRCAKQTWZHMHJSHNDZIGZRUCELOTLKCNRSGYJXPMBXB");
    msg.value = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.811964898765);
    msg.setSource(18112U);
    msg.setSourceEntity(74U);
    msg.setDestination(14021U);
    msg.setDestinationEntity(14U);
    msg.name.assign("BORXNYYNAZAYTYKWVLZDAVLEJLBTLOEBWDUYZSJPVLRFQNGDVYOEWHMRVCFCEQUBOFPMEUZKDVCTKJHQSLJPCBLACDEXYEMRGABSFMJPTOATZRHWDTIMCDWHXEXKMFHKKSOZHTLJYGGMQJINOUVBTNFNRBCKDMEISSSFTCJZIRFSVNHPKHGGZXLPUGQRIIDUIYCIKWQTUGQAMRIZRXWBOPFHIWUSUNXUMVDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.264975883788);
    msg.setSource(12801U);
    msg.setSourceEntity(82U);
    msg.setDestination(44492U);
    msg.setDestinationEntity(231U);
    msg.name.assign("JQIPCLLSTWJWWTUJPOAPGMHXYHCXGZYDXZDPTIGSJIEICHROTLXVPQZAXXAMEQSPACWGBFONRJOUYEOJDLIFUNKISOQYJHAAYVFWMTKPCWYRKNBBNTFQUVLDLOSFHOZMRQCVDVTFGNGKKPFFANKUWEIUGJFEMIEUZPQRLSLDSXGZNBSYUCRLXCWPIHCYFEMVNORHBJVKBYCAVBBWSXDOEIZWQTNMHSZMNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.3537921999);
    msg.setSource(32515U);
    msg.setSourceEntity(72U);
    msg.setDestination(4800U);
    msg.setDestinationEntity(169U);
    msg.name.assign("RNWNLYUHRWKJAFESMQNDICPAUNIPVBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.207504405692);
    msg.setSource(60676U);
    msg.setSourceEntity(194U);
    msg.setDestination(54831U);
    msg.setDestinationEntity(124U);
    msg.name.assign("JYVXXWWSTQURRWXIBGBITOLHELDSLPNUFVYPCLGYNQRYLAHCUNKMETQIDOXXRAAPKZSFQZUQPBIQIMJBDVWGFBEVGGYDTSAZLREBUIWNRNBFGAPAZAHUTJMMPFMWNLMIBNXEQZVHHRI");
    msg.value = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.963598271948);
    msg.setSource(59212U);
    msg.setSourceEntity(89U);
    msg.setDestination(5212U);
    msg.setDestinationEntity(104U);
    msg.name.assign("HHUNPMAJHZDTIGEZKFPMSULZKHVVDMWSRCNVFADHPZISBXIEXPXMWYHFLXXORMCQHUYNQEFABELOALZKSIOIFCHAPNURDGQFSOORCFWJZXPZMYSEQEDSFATSOZQTSNJVMHKTVLKUYXUWQVAJMGYVDPEBATQEJIGXGGBKGXRGBTILRAOWOIWENRRKBQYPBXNOCJLDDJBKCZLGYFAIUYUJLDOVCUGWVKYETMBWRTUBQQLCPJYIMHZPRK");
    msg.value = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.745935010356);
    msg.setSource(5277U);
    msg.setSourceEntity(191U);
    msg.setDestination(25284U);
    msg.setDestinationEntity(221U);
    msg.name.assign("YGJPFAFXTBUBWLNVGMSQZZWDRSTPJNUCGUNNTXEVCDIVEOOYYDLVMOYLVBYRCSSLHOBXKQQEPWWIBRRJHBMJEAXCUANNDFGUKLNCGKKHJAIGKRRQFTLMFPAZPIXECDOZONCPSQILLDWOUIJCSSBRVZEYZXFVXXTHHEMQWHTGOQJYBLVIMFEMYWGJMKYJMK");
    msg.value = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.323146410579);
    msg.setSource(62445U);
    msg.setSourceEntity(51U);
    msg.setDestination(20619U);
    msg.setDestinationEntity(168U);
    msg.id = 55U;
    msg.period = 1195757619U;
    msg.duty_cycle = 1442957804U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.897794707691);
    msg.setSource(24025U);
    msg.setSourceEntity(184U);
    msg.setDestination(49035U);
    msg.setDestinationEntity(16U);
    msg.id = 17U;
    msg.period = 1155107791U;
    msg.duty_cycle = 2702612054U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.423927338316);
    msg.setSource(4504U);
    msg.setSourceEntity(84U);
    msg.setDestination(33001U);
    msg.setDestinationEntity(229U);
    msg.id = 207U;
    msg.period = 2423316360U;
    msg.duty_cycle = 2070539365U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.776167123477);
    msg.setSource(47379U);
    msg.setSourceEntity(119U);
    msg.setDestination(37332U);
    msg.setDestinationEntity(217U);
    msg.id = 186U;
    msg.period = 3057852512U;
    msg.duty_cycle = 1804700539U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.930016524252);
    msg.setSource(44366U);
    msg.setSourceEntity(74U);
    msg.setDestination(40725U);
    msg.setDestinationEntity(59U);
    msg.id = 82U;
    msg.period = 4191951761U;
    msg.duty_cycle = 2955884253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.244098703715);
    msg.setSource(27551U);
    msg.setSourceEntity(140U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(216U);
    msg.id = 116U;
    msg.period = 1117632978U;
    msg.duty_cycle = 2331288633U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.57365118146);
    msg.setSource(14981U);
    msg.setSourceEntity(131U);
    msg.setDestination(33535U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.332353972896;
    msg.lon = 0.829853223386;
    msg.height = 0.307732258879;
    msg.x = 0.975624634825;
    msg.y = 0.71711683216;
    msg.z = 0.345551744866;
    msg.phi = 0.159177919455;
    msg.theta = 0.904045270873;
    msg.psi = 0.337785573671;
    msg.u = 0.0537175988507;
    msg.v = 0.601042748586;
    msg.w = 0.625105278539;
    msg.vx = 0.258657208701;
    msg.vy = 0.740324650924;
    msg.vz = 0.846076997957;
    msg.p = 0.387954724826;
    msg.q = 0.361060140764;
    msg.r = 0.839861700224;
    msg.depth = 0.423092830395;
    msg.alt = 0.0511669611007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.536693524116);
    msg.setSource(33160U);
    msg.setSourceEntity(65U);
    msg.setDestination(12471U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.643044806024;
    msg.lon = 0.05357879524;
    msg.height = 0.759498273487;
    msg.x = 0.372506704188;
    msg.y = 0.531242403363;
    msg.z = 0.850153206751;
    msg.phi = 0.938873020216;
    msg.theta = 0.547868894382;
    msg.psi = 0.404250560141;
    msg.u = 0.802385008305;
    msg.v = 0.448696771907;
    msg.w = 0.528802226205;
    msg.vx = 0.384230558753;
    msg.vy = 0.245431117145;
    msg.vz = 0.373165287216;
    msg.p = 0.661757937119;
    msg.q = 0.131264985242;
    msg.r = 0.835997680966;
    msg.depth = 0.94265288159;
    msg.alt = 0.959755966876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.196576205341);
    msg.setSource(39422U);
    msg.setSourceEntity(35U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.107261463114;
    msg.lon = 0.563371527503;
    msg.height = 0.616076614395;
    msg.x = 0.374565500756;
    msg.y = 0.668523457392;
    msg.z = 0.00685199137917;
    msg.phi = 0.606196178891;
    msg.theta = 0.17040725791;
    msg.psi = 0.351622229569;
    msg.u = 0.107292686286;
    msg.v = 0.172550578166;
    msg.w = 0.208408159106;
    msg.vx = 0.793967790685;
    msg.vy = 0.830236380696;
    msg.vz = 0.183638670463;
    msg.p = 0.635592489464;
    msg.q = 0.0959601285477;
    msg.r = 0.842525186267;
    msg.depth = 0.954889381742;
    msg.alt = 0.51251788018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.42753481076);
    msg.setSource(20986U);
    msg.setSourceEntity(75U);
    msg.setDestination(9797U);
    msg.setDestinationEntity(206U);
    msg.x = 0.0301286917284;
    msg.y = 0.397561842033;
    msg.z = 0.229628573223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.892236328859);
    msg.setSource(24420U);
    msg.setSourceEntity(174U);
    msg.setDestination(15652U);
    msg.setDestinationEntity(216U);
    msg.x = 0.675629073891;
    msg.y = 0.0927340009833;
    msg.z = 0.556954193025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.100091612677);
    msg.setSource(49870U);
    msg.setSourceEntity(66U);
    msg.setDestination(56684U);
    msg.setDestinationEntity(158U);
    msg.x = 0.347840441012;
    msg.y = 0.0664694315488;
    msg.z = 0.223198906403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.0822488640695);
    msg.setSource(17900U);
    msg.setSourceEntity(32U);
    msg.setDestination(61870U);
    msg.setDestinationEntity(191U);
    msg.value = 0.963050238632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.119491711991);
    msg.setSource(47536U);
    msg.setSourceEntity(230U);
    msg.setDestination(56146U);
    msg.setDestinationEntity(54U);
    msg.value = 0.718105909314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.531887207073);
    msg.setSource(29610U);
    msg.setSourceEntity(152U);
    msg.setDestination(26201U);
    msg.setDestinationEntity(130U);
    msg.value = 0.875156461923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.459721499914);
    msg.setSource(1705U);
    msg.setSourceEntity(53U);
    msg.setDestination(28195U);
    msg.setDestinationEntity(168U);
    msg.value = 0.725907261493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.513514656644);
    msg.setSource(3001U);
    msg.setSourceEntity(69U);
    msg.setDestination(30049U);
    msg.setDestinationEntity(233U);
    msg.value = 0.896296693709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.73332064078);
    msg.setSource(61283U);
    msg.setSourceEntity(240U);
    msg.setDestination(57318U);
    msg.setDestinationEntity(88U);
    msg.value = 0.537096551595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.614128540325);
    msg.setSource(25249U);
    msg.setSourceEntity(87U);
    msg.setDestination(19664U);
    msg.setDestinationEntity(163U);
    msg.x = 0.503594329766;
    msg.y = 0.0443058441058;
    msg.z = 0.804589228292;
    msg.phi = 0.135316495614;
    msg.theta = 0.781721550624;
    msg.psi = 0.739945497004;
    msg.p = 0.336940037254;
    msg.q = 0.725048514275;
    msg.r = 0.795515812206;
    msg.u = 0.371171768744;
    msg.v = 0.947002587813;
    msg.w = 0.891243660315;
    msg.bias_psi = 0.742519062965;
    msg.bias_r = 0.33591689693;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.334447144598);
    msg.setSource(13629U);
    msg.setSourceEntity(152U);
    msg.setDestination(28046U);
    msg.setDestinationEntity(196U);
    msg.x = 0.236663433716;
    msg.y = 0.309294708735;
    msg.z = 0.744231793046;
    msg.phi = 0.75686941941;
    msg.theta = 0.136451397888;
    msg.psi = 0.231738625241;
    msg.p = 0.789607439436;
    msg.q = 0.884482992853;
    msg.r = 0.0375319795924;
    msg.u = 0.435629756528;
    msg.v = 0.770364764454;
    msg.w = 0.182232601241;
    msg.bias_psi = 0.610223021698;
    msg.bias_r = 0.674080968823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.884279357996);
    msg.setSource(34923U);
    msg.setSourceEntity(178U);
    msg.setDestination(45134U);
    msg.setDestinationEntity(128U);
    msg.x = 0.352857885752;
    msg.y = 0.904691297023;
    msg.z = 0.848420479334;
    msg.phi = 0.60458845728;
    msg.theta = 0.873034798659;
    msg.psi = 0.0694141183749;
    msg.p = 0.680309437274;
    msg.q = 0.366712327369;
    msg.r = 0.20007609005;
    msg.u = 0.554093084151;
    msg.v = 0.957715622723;
    msg.w = 0.286066903789;
    msg.bias_psi = 0.415311629938;
    msg.bias_r = 0.70834243285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.737018873702);
    msg.setSource(8361U);
    msg.setSourceEntity(139U);
    msg.setDestination(13891U);
    msg.setDestinationEntity(105U);
    msg.bias_psi = 0.606403268948;
    msg.bias_r = 0.168009838777;
    msg.cog = 0.755917180727;
    msg.cyaw = 0.273519334876;
    msg.lbl_rej_level = 0.29795096493;
    msg.gps_rej_level = 0.332952389644;
    msg.custom_x = 0.842576529565;
    msg.custom_y = 0.421444787947;
    msg.custom_z = 0.0175961418449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.292152156608);
    msg.setSource(23739U);
    msg.setSourceEntity(82U);
    msg.setDestination(57216U);
    msg.setDestinationEntity(164U);
    msg.bias_psi = 0.167590953329;
    msg.bias_r = 0.967422117347;
    msg.cog = 0.328101266648;
    msg.cyaw = 0.408382113717;
    msg.lbl_rej_level = 0.74251319835;
    msg.gps_rej_level = 0.703933544801;
    msg.custom_x = 0.65077029761;
    msg.custom_y = 0.0610337012504;
    msg.custom_z = 0.725434962696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.738439596639);
    msg.setSource(2847U);
    msg.setSourceEntity(194U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(41U);
    msg.bias_psi = 0.19860732344;
    msg.bias_r = 0.204673164544;
    msg.cog = 0.377504931469;
    msg.cyaw = 0.786002235356;
    msg.lbl_rej_level = 0.727460901043;
    msg.gps_rej_level = 0.146549229144;
    msg.custom_x = 0.55006220484;
    msg.custom_y = 0.343663584719;
    msg.custom_z = 0.517078806738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.845121862895);
    msg.setSource(26013U);
    msg.setSourceEntity(28U);
    msg.setDestination(34340U);
    msg.setDestinationEntity(112U);
    msg.utc_time = 0.322801303794;
    msg.reason = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.368936941127);
    msg.setSource(26098U);
    msg.setSourceEntity(38U);
    msg.setDestination(43229U);
    msg.setDestinationEntity(89U);
    msg.utc_time = 0.0411394328411;
    msg.reason = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.0308448788907);
    msg.setSource(42316U);
    msg.setSourceEntity(206U);
    msg.setDestination(5018U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.688909855416;
    msg.reason = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.681944892689);
    msg.setSource(48751U);
    msg.setSourceEntity(250U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(134U);
    msg.id = 249U;
    msg.range = 0.311938749351;
    msg.acceptance = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.338717526725);
    msg.setSource(59738U);
    msg.setSourceEntity(177U);
    msg.setDestination(7008U);
    msg.setDestinationEntity(100U);
    msg.id = 158U;
    msg.range = 0.643287576691;
    msg.acceptance = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.1579511044);
    msg.setSource(44813U);
    msg.setSourceEntity(181U);
    msg.setDestination(30071U);
    msg.setDestinationEntity(73U);
    msg.id = 22U;
    msg.range = 0.706220182255;
    msg.acceptance = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.575108089679);
    msg.setSource(1032U);
    msg.setSourceEntity(201U);
    msg.setDestination(46052U);
    msg.setDestinationEntity(179U);
    msg.type = 116U;
    msg.reason = 201U;
    msg.value = 0.562942289043;
    msg.timestep = 0.806099480902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.279197575617);
    msg.setSource(34232U);
    msg.setSourceEntity(230U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(167U);
    msg.type = 161U;
    msg.reason = 215U;
    msg.value = 0.557049234002;
    msg.timestep = 0.452061703065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.350407649359);
    msg.setSource(12097U);
    msg.setSourceEntity(72U);
    msg.setDestination(28976U);
    msg.setDestinationEntity(131U);
    msg.type = 71U;
    msg.reason = 191U;
    msg.value = 0.279434232305;
    msg.timestep = 0.983455917547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.385126363374);
    msg.setSource(61256U);
    msg.setSourceEntity(73U);
    msg.setDestination(41525U);
    msg.setDestinationEntity(171U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AWZAMZEIAUQLZXKXNJQTBFRERMURBTUGWWXZDDXOJDBPWCKDDDGRKQTKEONFQRGMXLCKFNVKUSDXVQWTVVIAJLHMOGBGCVZPSLFNSEGGQYVTTFCOIUDSEQFFMMGLZNOT");
    tmp_msg_0.lat = 0.845049919519;
    tmp_msg_0.lon = 0.652050158609;
    tmp_msg_0.depth = 0.567499034377;
    tmp_msg_0.query_channel = 187U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 87U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.397502634023;
    msg.y = 0.388035722986;
    msg.var_x = 0.629060526399;
    msg.var_y = 0.221066621144;
    msg.distance = 0.390163472602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.417034762385);
    msg.setSource(31179U);
    msg.setSourceEntity(11U);
    msg.setDestination(46918U);
    msg.setDestinationEntity(253U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HPFVYUNKYAEROXYMXAGBOWEMVNLZBUDGFSOHPJNRZCLHDMNRPDXOTBIVBDZUZBPIXNPSTFUWDGKFFWUEDTSZYSSWONMDCZWIMKIEFXATJCELPRQCOKJXTHFQGPTGBXRDJOPLNOHAOXWSBAFBKQKAQMCYGAJWZKVVKTVLEDAKUMZJHCSGRDVQRCQLIIU");
    tmp_msg_0.lat = 0.138511973484;
    tmp_msg_0.lon = 0.494820538339;
    tmp_msg_0.depth = 0.386466897646;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 11U;
    tmp_msg_0.transponder_delay = 52U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0189539333418;
    msg.y = 0.306963390634;
    msg.var_x = 0.415073925334;
    msg.var_y = 0.407072928356;
    msg.distance = 0.730991655556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.720158617275);
    msg.setSource(36129U);
    msg.setSourceEntity(101U);
    msg.setDestination(22009U);
    msg.setDestinationEntity(186U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CBYBILDBGYMIGNKGEFPLSVSXOMAQSASIGZIQCUKRXUAIWDOWZUJDYLTQBTRVJQXNFDNRZXDWMXNSOULLQRVHUTEPRHSAEOIEBKJVQBJEKTHAOYPVBPQMVTOWMWHFLMAUSBZZURKQLSIRMCCGQOGDBEYJJHAHFIKFDKEPZZKYXFWINZYTTOLSZRXHIAGKMSGCAPCTEUHJXNHVKLFPANPRJWDUXEEHFNMQPJCOFGVJCCWDTVN");
    tmp_msg_0.lat = 0.619344244412;
    tmp_msg_0.lon = 0.81831586705;
    tmp_msg_0.depth = 0.275792432752;
    tmp_msg_0.query_channel = 228U;
    tmp_msg_0.reply_channel = 64U;
    tmp_msg_0.transponder_delay = 163U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.38940683353;
    msg.y = 0.0330107105106;
    msg.var_x = 0.0505310557211;
    msg.var_y = 0.147642882282;
    msg.distance = 0.407943748561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.257666448424);
    msg.setSource(1233U);
    msg.setSourceEntity(192U);
    msg.setDestination(49452U);
    msg.setDestinationEntity(31U);
    msg.state = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.318105810857);
    msg.setSource(18938U);
    msg.setSourceEntity(220U);
    msg.setDestination(46666U);
    msg.setDestinationEntity(79U);
    msg.state = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.456239968909);
    msg.setSource(1841U);
    msg.setSourceEntity(125U);
    msg.setDestination(36218U);
    msg.setDestinationEntity(11U);
    msg.state = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.226868688613);
    msg.setSource(7052U);
    msg.setSourceEntity(141U);
    msg.setDestination(56487U);
    msg.setDestinationEntity(29U);
    msg.x = 0.319551548484;
    msg.y = 0.62322029486;
    msg.z = 0.423400391549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.508321435803);
    msg.setSource(22542U);
    msg.setSourceEntity(235U);
    msg.setDestination(5155U);
    msg.setDestinationEntity(161U);
    msg.x = 0.661455068789;
    msg.y = 0.278549693675;
    msg.z = 0.672026044793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.86411449697);
    msg.setSource(30578U);
    msg.setSourceEntity(113U);
    msg.setDestination(16269U);
    msg.setDestinationEntity(67U);
    msg.x = 0.507202996246;
    msg.y = 0.799033509518;
    msg.z = 0.0446005264206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.0472269545587);
    msg.setSource(11703U);
    msg.setSourceEntity(152U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(254U);
    msg.va = 0.0687436095515;
    msg.aoa = 0.251821745252;
    msg.ssa = 0.397671314049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.89546028607);
    msg.setSource(9771U);
    msg.setSourceEntity(76U);
    msg.setDestination(36577U);
    msg.setDestinationEntity(59U);
    msg.va = 0.417086239139;
    msg.aoa = 0.0523934586921;
    msg.ssa = 0.733805609746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.0590499168035);
    msg.setSource(58U);
    msg.setSourceEntity(240U);
    msg.setDestination(52150U);
    msg.setDestinationEntity(85U);
    msg.va = 0.866561210693;
    msg.aoa = 0.641052109336;
    msg.ssa = 0.184681293128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.460052576803);
    msg.setSource(25740U);
    msg.setSourceEntity(84U);
    msg.setDestination(28420U);
    msg.setDestinationEntity(41U);
    msg.value = 0.302668268844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.163865011217);
    msg.setSource(27515U);
    msg.setSourceEntity(169U);
    msg.setDestination(55610U);
    msg.setDestinationEntity(224U);
    msg.value = 0.757835803017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.659232494205);
    msg.setSource(57619U);
    msg.setSourceEntity(169U);
    msg.setDestination(56262U);
    msg.setDestinationEntity(204U);
    msg.value = 0.409483017828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.48429613793);
    msg.setSource(54448U);
    msg.setSourceEntity(191U);
    msg.setDestination(34652U);
    msg.setDestinationEntity(184U);
    msg.value = 0.848951466119;
    msg.z_units = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.430086113195);
    msg.setSource(39516U);
    msg.setSourceEntity(28U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(11U);
    msg.value = 0.679928116888;
    msg.z_units = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.462583831695);
    msg.setSource(14509U);
    msg.setSourceEntity(220U);
    msg.setDestination(43901U);
    msg.setDestinationEntity(49U);
    msg.value = 0.688457217834;
    msg.z_units = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.519390113267);
    msg.setSource(53760U);
    msg.setSourceEntity(178U);
    msg.setDestination(41861U);
    msg.setDestinationEntity(156U);
    msg.value = 0.540814819918;
    msg.speed_units = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.837778183375);
    msg.setSource(27802U);
    msg.setSourceEntity(77U);
    msg.setDestination(14832U);
    msg.setDestinationEntity(190U);
    msg.value = 0.400516217005;
    msg.speed_units = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.561936346237);
    msg.setSource(63697U);
    msg.setSourceEntity(161U);
    msg.setDestination(26488U);
    msg.setDestinationEntity(189U);
    msg.value = 0.942296942106;
    msg.speed_units = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.287840544916);
    msg.setSource(30489U);
    msg.setSourceEntity(155U);
    msg.setDestination(16329U);
    msg.setDestinationEntity(227U);
    msg.value = 0.334722038329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.602423094675);
    msg.setSource(9643U);
    msg.setSourceEntity(81U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(165U);
    msg.value = 0.3475597719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.866013727975);
    msg.setSource(20568U);
    msg.setSourceEntity(165U);
    msg.setDestination(31515U);
    msg.setDestinationEntity(249U);
    msg.value = 0.889477339825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.0342133970288);
    msg.setSource(33451U);
    msg.setSourceEntity(61U);
    msg.setDestination(394U);
    msg.setDestinationEntity(109U);
    msg.value = 0.165284308562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.241032310013);
    msg.setSource(4042U);
    msg.setSourceEntity(127U);
    msg.setDestination(38125U);
    msg.setDestinationEntity(148U);
    msg.value = 0.654289478967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.513521375568);
    msg.setSource(36766U);
    msg.setSourceEntity(96U);
    msg.setDestination(12667U);
    msg.setDestinationEntity(133U);
    msg.value = 0.915261660777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.849899154226);
    msg.setSource(33406U);
    msg.setSourceEntity(157U);
    msg.setDestination(135U);
    msg.setDestinationEntity(205U);
    msg.value = 0.406828442558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.611513740221);
    msg.setSource(62476U);
    msg.setSourceEntity(253U);
    msg.setDestination(43649U);
    msg.setDestinationEntity(218U);
    msg.value = 0.259557856131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.888162198746);
    msg.setSource(16106U);
    msg.setSourceEntity(209U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(197U);
    msg.value = 0.508168778818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.364463545079);
    msg.setSource(18246U);
    msg.setSourceEntity(137U);
    msg.setDestination(44182U);
    msg.setDestinationEntity(224U);
    msg.path_ref = 52299387U;
    msg.start_lat = 0.877238013388;
    msg.start_lon = 0.0298454355448;
    msg.start_z = 0.358807124971;
    msg.start_z_units = 55U;
    msg.end_lat = 0.819334668492;
    msg.end_lon = 0.306227279921;
    msg.end_z = 0.569965753082;
    msg.end_z_units = 19U;
    msg.speed = 0.883089958146;
    msg.speed_units = 150U;
    msg.lradius = 0.742008482415;
    msg.flags = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.235256871465);
    msg.setSource(52429U);
    msg.setSourceEntity(72U);
    msg.setDestination(53976U);
    msg.setDestinationEntity(178U);
    msg.path_ref = 3094166499U;
    msg.start_lat = 0.48835553241;
    msg.start_lon = 0.960693169578;
    msg.start_z = 0.247413473808;
    msg.start_z_units = 103U;
    msg.end_lat = 0.544690589769;
    msg.end_lon = 9.09869922352e-05;
    msg.end_z = 0.998503534425;
    msg.end_z_units = 145U;
    msg.speed = 0.616963943257;
    msg.speed_units = 21U;
    msg.lradius = 0.408974113408;
    msg.flags = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.965623403956);
    msg.setSource(5126U);
    msg.setSourceEntity(146U);
    msg.setDestination(47008U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 2594281262U;
    msg.start_lat = 0.157814585185;
    msg.start_lon = 0.820779525463;
    msg.start_z = 0.73063084554;
    msg.start_z_units = 181U;
    msg.end_lat = 0.563595077506;
    msg.end_lon = 0.0122998815377;
    msg.end_z = 0.356130717814;
    msg.end_z_units = 35U;
    msg.speed = 0.166940752784;
    msg.speed_units = 121U;
    msg.lradius = 0.724710033692;
    msg.flags = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.390476388139);
    msg.setSource(23230U);
    msg.setSourceEntity(123U);
    msg.setDestination(39922U);
    msg.setDestinationEntity(83U);
    msg.x = 0.320704489594;
    msg.y = 0.502805805563;
    msg.z = 0.286796414422;
    msg.k = 0.177938335071;
    msg.m = 0.20408035911;
    msg.n = 0.365495103669;
    msg.flags = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.446857169022);
    msg.setSource(14847U);
    msg.setSourceEntity(131U);
    msg.setDestination(23901U);
    msg.setDestinationEntity(174U);
    msg.x = 0.570973841682;
    msg.y = 0.389042661173;
    msg.z = 0.74736327984;
    msg.k = 0.205908573628;
    msg.m = 0.665146595085;
    msg.n = 0.579325892002;
    msg.flags = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.989450996942);
    msg.setSource(30298U);
    msg.setSourceEntity(13U);
    msg.setDestination(22842U);
    msg.setDestinationEntity(12U);
    msg.x = 0.301634563055;
    msg.y = 0.356619531207;
    msg.z = 0.112099208971;
    msg.k = 0.00410817805637;
    msg.m = 0.890801313845;
    msg.n = 0.0138021514534;
    msg.flags = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.00738316326871);
    msg.setSource(51112U);
    msg.setSourceEntity(82U);
    msg.setDestination(10695U);
    msg.setDestinationEntity(22U);
    msg.value = 0.337614246181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.589988783533);
    msg.setSource(30219U);
    msg.setSourceEntity(150U);
    msg.setDestination(41887U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0671963071081;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.968306632249);
    msg.setSource(51375U);
    msg.setSourceEntity(164U);
    msg.setDestination(47260U);
    msg.setDestinationEntity(226U);
    msg.value = 0.0478319060556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.250955616526);
    msg.setSource(53665U);
    msg.setSourceEntity(210U);
    msg.setDestination(56264U);
    msg.setDestinationEntity(118U);
    msg.u = 0.458791684772;
    msg.v = 0.268216887991;
    msg.w = 0.833572583757;
    msg.p = 0.00721465648803;
    msg.q = 0.693697330271;
    msg.r = 0.46277396969;
    msg.flags = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.484022657526);
    msg.setSource(23596U);
    msg.setSourceEntity(57U);
    msg.setDestination(17380U);
    msg.setDestinationEntity(15U);
    msg.u = 0.102054626988;
    msg.v = 0.399506102177;
    msg.w = 0.5272373059;
    msg.p = 0.0807428150154;
    msg.q = 0.262295839169;
    msg.r = 0.621364016581;
    msg.flags = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.377682574622);
    msg.setSource(53111U);
    msg.setSourceEntity(2U);
    msg.setDestination(50282U);
    msg.setDestinationEntity(143U);
    msg.u = 0.992961121028;
    msg.v = 0.727280040226;
    msg.w = 0.943542884863;
    msg.p = 0.542841937419;
    msg.q = 0.895294094859;
    msg.r = 0.585205290832;
    msg.flags = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.626477142945);
    msg.setSource(18119U);
    msg.setSourceEntity(207U);
    msg.setDestination(53223U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 4252051546U;
    msg.start_lat = 0.351993464363;
    msg.start_lon = 0.195620172801;
    msg.start_z = 0.967997720523;
    msg.start_z_units = 207U;
    msg.end_lat = 0.210310922654;
    msg.end_lon = 0.897393572759;
    msg.end_z = 0.294076854013;
    msg.end_z_units = 66U;
    msg.lradius = 0.115686739376;
    msg.flags = 125U;
    msg.x = 0.668922119188;
    msg.y = 0.505472633067;
    msg.z = 0.943308569164;
    msg.vx = 0.831232455877;
    msg.vy = 0.116252153347;
    msg.vz = 0.269326141301;
    msg.course_error = 0.566836660928;
    msg.eta = 31756U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.0747342206291);
    msg.setSource(39501U);
    msg.setSourceEntity(66U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 3402362279U;
    msg.start_lat = 0.748758959427;
    msg.start_lon = 0.827487311039;
    msg.start_z = 0.802623050978;
    msg.start_z_units = 218U;
    msg.end_lat = 0.135892304184;
    msg.end_lon = 0.941558738442;
    msg.end_z = 0.899317756851;
    msg.end_z_units = 189U;
    msg.lradius = 0.235201077981;
    msg.flags = 15U;
    msg.x = 0.0554128582774;
    msg.y = 0.804318943616;
    msg.z = 0.137303592546;
    msg.vx = 0.302156165538;
    msg.vy = 0.535866846555;
    msg.vz = 0.402944830519;
    msg.course_error = 0.871475945378;
    msg.eta = 1036U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.512166457463);
    msg.setSource(2669U);
    msg.setSourceEntity(162U);
    msg.setDestination(36851U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 1980126129U;
    msg.start_lat = 0.827975274168;
    msg.start_lon = 0.670340396424;
    msg.start_z = 0.381343497885;
    msg.start_z_units = 20U;
    msg.end_lat = 0.373063414961;
    msg.end_lon = 0.600266213344;
    msg.end_z = 0.781897457478;
    msg.end_z_units = 132U;
    msg.lradius = 0.0370656209428;
    msg.flags = 190U;
    msg.x = 0.8253090796;
    msg.y = 0.469281023546;
    msg.z = 0.681497397828;
    msg.vx = 0.897549392018;
    msg.vy = 0.0588029614698;
    msg.vz = 0.850426909548;
    msg.course_error = 0.346640705602;
    msg.eta = 28942U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.727927885124);
    msg.setSource(61416U);
    msg.setSourceEntity(144U);
    msg.setDestination(65326U);
    msg.setDestinationEntity(108U);
    msg.k = 0.235568292581;
    msg.m = 0.831597284208;
    msg.n = 0.588587631308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.417165058702);
    msg.setSource(40178U);
    msg.setSourceEntity(178U);
    msg.setDestination(60588U);
    msg.setDestinationEntity(90U);
    msg.k = 0.897655027695;
    msg.m = 0.304851044341;
    msg.n = 0.639192516077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.862507546658);
    msg.setSource(21229U);
    msg.setSourceEntity(127U);
    msg.setDestination(40691U);
    msg.setDestinationEntity(130U);
    msg.k = 0.969259653129;
    msg.m = 0.0385253850821;
    msg.n = 0.727063381607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.864830140646);
    msg.setSource(51469U);
    msg.setSourceEntity(38U);
    msg.setDestination(46000U);
    msg.setDestinationEntity(70U);
    msg.p = 0.953151254351;
    msg.i = 0.506612442389;
    msg.d = 0.0852412206366;
    msg.a = 0.681988858283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.845579336986);
    msg.setSource(30533U);
    msg.setSourceEntity(229U);
    msg.setDestination(33972U);
    msg.setDestinationEntity(121U);
    msg.p = 0.491862636548;
    msg.i = 0.071748686434;
    msg.d = 0.32768162546;
    msg.a = 0.271260179222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.139681401271);
    msg.setSource(48683U);
    msg.setSourceEntity(36U);
    msg.setDestination(45777U);
    msg.setDestinationEntity(34U);
    msg.p = 0.847977322721;
    msg.i = 0.24880230989;
    msg.d = 0.528244551621;
    msg.a = 0.394850973584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.144882356822);
    msg.setSource(28255U);
    msg.setSourceEntity(199U);
    msg.setDestination(42112U);
    msg.setDestinationEntity(173U);
    msg.op = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0216810220377);
    msg.setSource(18400U);
    msg.setSourceEntity(162U);
    msg.setDestination(4726U);
    msg.setDestinationEntity(96U);
    msg.op = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.399809503614);
    msg.setSource(36276U);
    msg.setSourceEntity(29U);
    msg.setDestination(42521U);
    msg.setDestinationEntity(53U);
    msg.op = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.583928096093);
    msg.setSource(61433U);
    msg.setSourceEntity(121U);
    msg.setDestination(49958U);
    msg.setDestinationEntity(233U);
    msg.x = 0.161774184625;
    msg.y = 0.335505519493;
    msg.z = 0.582071405734;
    msg.vx = 0.321559524978;
    msg.vy = 0.856610525862;
    msg.vz = 0.087017870273;
    msg.ax = 0.683120953674;
    msg.ay = 0.660698699416;
    msg.az = 0.76265600669;
    msg.flags = 23897U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.399128640526);
    msg.setSource(51804U);
    msg.setSourceEntity(111U);
    msg.setDestination(47720U);
    msg.setDestinationEntity(179U);
    msg.x = 0.770580285663;
    msg.y = 0.428371015237;
    msg.z = 0.39180701036;
    msg.vx = 0.274600948501;
    msg.vy = 0.637731808937;
    msg.vz = 0.241663950252;
    msg.ax = 0.524996976692;
    msg.ay = 0.100612547594;
    msg.az = 0.601449559587;
    msg.flags = 5345U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.777873448974);
    msg.setSource(11607U);
    msg.setSourceEntity(25U);
    msg.setDestination(7633U);
    msg.setDestinationEntity(59U);
    msg.x = 0.475936710452;
    msg.y = 0.885916485949;
    msg.z = 0.667913671577;
    msg.vx = 0.122374925469;
    msg.vy = 0.126256594384;
    msg.vz = 0.81961749097;
    msg.ax = 0.246166779514;
    msg.ay = 0.343383723411;
    msg.az = 0.847219759232;
    msg.flags = 20439U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.16330526364);
    msg.setSource(45654U);
    msg.setSourceEntity(143U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(15U);
    msg.value = 0.83938984491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.0572490573137);
    msg.setSource(41702U);
    msg.setSourceEntity(79U);
    msg.setDestination(32696U);
    msg.setDestinationEntity(0U);
    msg.value = 0.995988304942;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.806640990327);
    msg.setSource(63592U);
    msg.setSourceEntity(229U);
    msg.setDestination(49692U);
    msg.setDestinationEntity(50U);
    msg.value = 0.840146882496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.838341798171);
    msg.setSource(17604U);
    msg.setSourceEntity(240U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(200U);
    msg.timeout = 55768U;
    msg.lat = 0.576147413481;
    msg.lon = 0.658974162362;
    msg.z = 0.879228762436;
    msg.z_units = 254U;
    msg.speed = 0.671490042903;
    msg.speed_units = 152U;
    msg.roll = 0.692556451462;
    msg.pitch = 0.723614325546;
    msg.yaw = 0.393993277343;
    msg.custom.assign("FLBMAOLBOPLNZTNDYJGPERYNGLEUDJMJCNXOZYVUIIJKNUIGZXQYDEPQJKHVUUKQASVRHTSAGWJGZTTWPXJGDSEYMYGXPHADYRXQESUUYUKWSEAFLHQMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.782411671582);
    msg.setSource(63344U);
    msg.setSourceEntity(193U);
    msg.setDestination(41460U);
    msg.setDestinationEntity(158U);
    msg.timeout = 65274U;
    msg.lat = 0.375149501226;
    msg.lon = 0.0658976893753;
    msg.z = 0.815682133895;
    msg.z_units = 20U;
    msg.speed = 0.7361639178;
    msg.speed_units = 97U;
    msg.roll = 0.700270456901;
    msg.pitch = 0.463882447513;
    msg.yaw = 0.181841267417;
    msg.custom.assign("TVWKLZOIMLFESHWQQZNDINQLMPBNSIJMPTQMJHVUVEYWHXHYJSDYJLDESPQKUFCPTTEHUUKGDILTASVOBOZDBGYJGGMERIBAQKLORXDWYXJRJIPAPIMBBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.861734097093);
    msg.setSource(60583U);
    msg.setSourceEntity(186U);
    msg.setDestination(7651U);
    msg.setDestinationEntity(106U);
    msg.timeout = 36719U;
    msg.lat = 0.686246349396;
    msg.lon = 0.202488895811;
    msg.z = 0.207403542651;
    msg.z_units = 101U;
    msg.speed = 0.362014018332;
    msg.speed_units = 58U;
    msg.roll = 0.987547819421;
    msg.pitch = 0.495429762772;
    msg.yaw = 0.647686346344;
    msg.custom.assign("FHYDNQZNUINBMCZRVFXENXEYSNBBEBHALPSDKJWIHMSDPYGDXGGSOJZVZJRABPXRZBBQWVPULTINPTLVRXNYIFCOPVULITMYMEGKZFNXNTUHWSMEBRWLIQDLIOKKHAIVOBEULWVZHAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.810973772495);
    msg.setSource(58796U);
    msg.setSourceEntity(167U);
    msg.setDestination(35455U);
    msg.setDestinationEntity(251U);
    msg.timeout = 58300U;
    msg.lat = 0.69840961296;
    msg.lon = 0.00685038750213;
    msg.z = 0.0504142831943;
    msg.z_units = 215U;
    msg.speed = 0.619157452657;
    msg.speed_units = 245U;
    msg.duration = 59760U;
    msg.radius = 0.735283207584;
    msg.flags = 95U;
    msg.custom.assign("DPXBFMONDBFYKERGSGRETXJAZGQKUVSJXOUAZLEXZXHGASXCWQHISLSQMQMQKJBLGDVVOQYGEZLCVZMNDNYGLYVAQXDYTMWBBFETPCIBNOZRCJMCLDEOKSSJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.166606528061);
    msg.setSource(55619U);
    msg.setSourceEntity(80U);
    msg.setDestination(59088U);
    msg.setDestinationEntity(78U);
    msg.timeout = 1996U;
    msg.lat = 0.271374819885;
    msg.lon = 0.246700223575;
    msg.z = 0.211248791309;
    msg.z_units = 124U;
    msg.speed = 0.381287703509;
    msg.speed_units = 196U;
    msg.duration = 30160U;
    msg.radius = 0.690732830252;
    msg.flags = 253U;
    msg.custom.assign("EIMCIVWPAHZGGBJSMLVRNGMKIPSUKCPBLXQTZYVHZPBORCLKFFOTDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.668313934036);
    msg.setSource(56691U);
    msg.setSourceEntity(40U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(133U);
    msg.timeout = 43907U;
    msg.lat = 0.316434233232;
    msg.lon = 0.551738994796;
    msg.z = 0.093162842015;
    msg.z_units = 3U;
    msg.speed = 0.242380225534;
    msg.speed_units = 8U;
    msg.duration = 65251U;
    msg.radius = 0.0122753502332;
    msg.flags = 198U;
    msg.custom.assign("VLPQBGHEDVIACBSHXUXEJGMZYOUADMUMMUPQXOYRASRTLYARGMBKVHJZOBCCRHEJFDLTPZUCNVNVWKFAJWXRJLWKJWAITDNGFBEMYIEVHOFTIDBIEPMGWLFVSZXQAKLGIOOASFBCQHXYDNDNBQNTUSHZVLPNPIKGQQJLGREBNFGVNMSLCYWRMCUHJFTTMDBYUIDWZXFACSPUTJPYOZXSKZOZQYDLUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.551584228764);
    msg.setSource(26140U);
    msg.setSourceEntity(143U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(198U);
    msg.custom.assign("KZYITEUIPLLFMIAJXAHOTUKQOYCIWDPNZKWIWBBKHHZJNZQBYSMLQYPLEQZIGPSCBEVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.481232104346);
    msg.setSource(53129U);
    msg.setSourceEntity(115U);
    msg.setDestination(11648U);
    msg.setDestinationEntity(50U);
    msg.custom.assign("UFZXBFBKYBBOJHCBIQJMZTRYNZZYVTHVPRWKPFUFXJKWKEGREHZDGJWGJXKNVMHYYZNTMZESNOXVPGYLOGPVUCELTCHDABVRDGESIHOTRXTDSVDEFFPWQLJHAZWSIJFEYCJCFPOHURPRAIGQAIOAXLISLCUEQAMKRNYBSKQRMBTFOCEKGIJMDOSHMWXQWMNUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.769454596177);
    msg.setSource(53774U);
    msg.setSourceEntity(172U);
    msg.setDestination(65121U);
    msg.setDestinationEntity(123U);
    msg.custom.assign("ZICAVVLWHBHZPSGCJRWXSDDDFQDMAKHBFTBVXKWZFLIEBAAZINGIQWQVWROUNWVWSVXSAHUNFDIRYMNNFPAWSNDCOMNZQYUQOOSJIPGZXXXZSPBYFUEOHUFTJMHXLUYJKEQKDBLGAWAJTCLLPWPRMYKTGGTFKJIOLQSEYHQVOVBSRCCKTDNQGJGLERFKHUBPCZXMKMCNPKHSRRARCAFUIIVYGEEIEZCBTOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.583221789459);
    msg.setSource(15006U);
    msg.setSourceEntity(208U);
    msg.setDestination(36470U);
    msg.setDestinationEntity(31U);
    msg.timeout = 26444U;
    msg.lat = 0.0872087193769;
    msg.lon = 0.54600239245;
    msg.z = 0.631637489097;
    msg.z_units = 160U;
    msg.duration = 13346U;
    msg.speed = 0.311275082022;
    msg.speed_units = 44U;
    msg.type = 2U;
    msg.radius = 0.279102940102;
    msg.length = 0.233600819047;
    msg.bearing = 0.577074854023;
    msg.direction = 63U;
    msg.custom.assign("YHBCMFTZICHIVNFDCINLZZIPQTUNGQDKHHPMRCEPGEDTNSBAGVQCRKUJRAOJTPBNZWYSAXDTRLYYTPIXBXPFFBPPXCFQSDPMMIIDHMEJYBKUGOEOKULQZLELUVTDVQZEXBWWJXYXBVFNAMCKWOGIROWMKNASKCGZVYPDRQJRCUKZUNFBOURSJWAWJKLHNASHFYDVVXLEYMUKFIVVOHHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.596164637606);
    msg.setSource(37226U);
    msg.setSourceEntity(202U);
    msg.setDestination(16074U);
    msg.setDestinationEntity(137U);
    msg.timeout = 15467U;
    msg.lat = 0.417630286123;
    msg.lon = 0.687530156242;
    msg.z = 0.523869187414;
    msg.z_units = 86U;
    msg.duration = 55550U;
    msg.speed = 0.25542677106;
    msg.speed_units = 166U;
    msg.type = 182U;
    msg.radius = 0.276994585768;
    msg.length = 0.182184789163;
    msg.bearing = 0.672846075301;
    msg.direction = 146U;
    msg.custom.assign("QXCZZAMWWSHLFRVYNJAEIFZQKOTAKMMATECACXNXYHLZOUUYOGARQKEGEANZETYGSYIPDPSAUHBYMJGKIZIKBHBYHUEZGDJKKPLBQGGYUJKPFITBADXNDVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.556938467161);
    msg.setSource(52170U);
    msg.setSourceEntity(234U);
    msg.setDestination(55902U);
    msg.setDestinationEntity(62U);
    msg.timeout = 12520U;
    msg.lat = 0.342997300383;
    msg.lon = 0.124855626312;
    msg.z = 0.0356745724101;
    msg.z_units = 226U;
    msg.duration = 14523U;
    msg.speed = 0.060282040388;
    msg.speed_units = 231U;
    msg.type = 88U;
    msg.radius = 0.665009946506;
    msg.length = 0.640655168591;
    msg.bearing = 0.417298207311;
    msg.direction = 7U;
    msg.custom.assign("ZZNPFSZYUGWZMTQZNASCXKVWYNSVOKFBAKMOPMIJADDTGCTJRCGWRWSACVZTCHXIOBITGPYPBSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.41995842007);
    msg.setSource(39861U);
    msg.setSourceEntity(33U);
    msg.setDestination(26814U);
    msg.setDestinationEntity(168U);
    msg.duration = 19320U;
    msg.custom.assign("VIUTLRLMCIFGPCNFAESPJXOURMHCEGGVCVYJYNCZHZQOALTHYDPHYQHVKYMIKDESIDSZDYXQBIGQLUNVMBIXBIOUOWLTMVQFKOTZTAUFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.741778339042);
    msg.setSource(9400U);
    msg.setSourceEntity(113U);
    msg.setDestination(59044U);
    msg.setDestinationEntity(141U);
    msg.duration = 48801U;
    msg.custom.assign("NDAAKVDRXIIZSNFPBEMDKFDZLCZWUDSCKAWHJIPBGHBLCFAQOYMLGEYSFCKOTMADIRPQFNFVLZBJFZGICXYFKQAEMJUVDTTDMRYKJPSUJLJNSQNICVWWYGNIMMPWBLTBWOREZDYPCQQXXRXQAGUHVWLYOTGSTXRHONRGBVKTJAOGUCNVECEIUHJKDPUZJRCLOJUKAHZYTNQTHGFSMIOWXEBIBSAREZMUBGOTLWKHFXHYYZXPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.282790233633);
    msg.setSource(8504U);
    msg.setSourceEntity(217U);
    msg.setDestination(52912U);
    msg.setDestinationEntity(19U);
    msg.duration = 65092U;
    msg.custom.assign("NFEPCHRMMEHETQAERWCLELJSZJCMJYXAVIKSFUWHNBABVOUCPKDFAPXIMQDMRXALRTGLLWVJEQXNHHMBSZAZUBCOZRIDNYVTMRVYXSMUPWMUNWYNOFVQXXTYKGWIFWGQVUTZGQGOBNEJBQLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.402938345698);
    msg.setSource(45914U);
    msg.setSourceEntity(188U);
    msg.setDestination(51923U);
    msg.setDestinationEntity(223U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.313702828374;
    msg.control.set(tmp_msg_0);
    msg.duration = 46147U;
    msg.custom.assign("LQPNXIPVMBZSPCPIGKSFRXGUGVZBDMVFODVVFTWJXJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.446925638883);
    msg.setSource(18796U);
    msg.setSourceEntity(115U);
    msg.setDestination(40703U);
    msg.setDestinationEntity(210U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.940826246214;
    msg.control.set(tmp_msg_0);
    msg.duration = 9772U;
    msg.custom.assign("LIWCENMZRYSCQHFJNVYSWDVYGFSRHIFTPBCXVSLEDXQVAZDEFBWPTZCAWOGQKETXXUZLFWBWLDYIUVEPNGGLYMJTJPORUGKASOIVSOURVQXYOGUOBSPFNMKKCUZIDADIRKAWZSJXUWTMAEONSNPNQUMLOBIANMGPJGCVNTBAHJULEKJCHBYYBKXEGXTDAZHVLTECLRKIDQJGWYCWMOLNMFFFDZHXOXJBRZDMQQKBHZEHTTRKVCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.00816518015557);
    msg.setSource(55341U);
    msg.setSourceEntity(211U);
    msg.setDestination(39273U);
    msg.setDestinationEntity(192U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.574198204709;
    tmp_msg_0.speed_units = 163U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54296U;
    msg.custom.assign("PTJWXIAGOZHFEZTTZMTCYBDIBSZRFPIDZPUMBARNILZNEXEUOUYMKOUIWDXVFAQPHLTGARKFJOOISUVYNVPWSAQEWJUUJVQHGXFHBBZQORZDOIUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.965363584406);
    msg.setSource(63239U);
    msg.setSourceEntity(195U);
    msg.setDestination(39004U);
    msg.setDestinationEntity(6U);
    msg.timeout = 13306U;
    msg.lat = 0.429293876869;
    msg.lon = 0.377574579107;
    msg.z = 0.962808815318;
    msg.z_units = 10U;
    msg.speed = 0.917651071792;
    msg.speed_units = 150U;
    msg.bearing = 0.161912917793;
    msg.cross_angle = 0.345635585375;
    msg.width = 0.659484627211;
    msg.length = 0.883632465994;
    msg.hstep = 0.0108606677723;
    msg.coff = 125U;
    msg.alternation = 108U;
    msg.flags = 213U;
    msg.custom.assign("RDMVAKWLLGUCFOOTKVCZUEEZUNLNEMUGOJXGEHXKJRQDHHZCSESNFTOVSIAGFEFNYCGXMPRXGBYRWFBYGIEIDSPWULCCAQQOMOIIKPAJFWQMJEDNAYWMHHHGPXCFONTWSJXAWGYVWOSUDFRTUUSLJDLBSCQXGJBURPNZCJQOTIMLQCKXLTNZETWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.840258010672);
    msg.setSource(24284U);
    msg.setSourceEntity(252U);
    msg.setDestination(18004U);
    msg.setDestinationEntity(106U);
    msg.timeout = 44430U;
    msg.lat = 0.793866111562;
    msg.lon = 0.158352429847;
    msg.z = 0.00486247778578;
    msg.z_units = 177U;
    msg.speed = 0.836496628459;
    msg.speed_units = 184U;
    msg.bearing = 0.703788407555;
    msg.cross_angle = 0.249908351721;
    msg.width = 0.301863212086;
    msg.length = 0.127880764407;
    msg.hstep = 0.793758677984;
    msg.coff = 62U;
    msg.alternation = 153U;
    msg.flags = 22U;
    msg.custom.assign("YFDIZYRTWLVQNJXMHHNTXFJRDVQPQGJJEWVNZMMDOCQVKBAHSXSEJSDDUWNXRVPKHKGSAYZDKCUETSZAJBTHBGBPFGFIUKLEIHBRUIQOIJUAFOAAYSOFYASFVEFMKOMXEGCNHMWIGAXBGLXYRCPLMLNZOLXZLYKIGPUOYRITLZADJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.882673346254);
    msg.setSource(48462U);
    msg.setSourceEntity(124U);
    msg.setDestination(22176U);
    msg.setDestinationEntity(164U);
    msg.timeout = 48185U;
    msg.lat = 0.346153774036;
    msg.lon = 0.93426162743;
    msg.z = 0.607773153639;
    msg.z_units = 89U;
    msg.speed = 0.133739900819;
    msg.speed_units = 143U;
    msg.bearing = 0.264511607346;
    msg.cross_angle = 0.516875075558;
    msg.width = 0.547788965312;
    msg.length = 0.0249086129819;
    msg.hstep = 0.671702506414;
    msg.coff = 75U;
    msg.alternation = 163U;
    msg.flags = 142U;
    msg.custom.assign("CYWZQVDDRVOFTVSLRHNMBJRGULWMTGIZSVTSSCPXJWITBDYHRSTSKBZPECXFGRTLADBUUBERUTGWKADGCHXVGXPRTLSXVHLVABEMWFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.406513333687);
    msg.setSource(40409U);
    msg.setSourceEntity(14U);
    msg.setDestination(61644U);
    msg.setDestinationEntity(13U);
    msg.timeout = 21767U;
    msg.lat = 0.357093386825;
    msg.lon = 0.814710972167;
    msg.z = 0.685018597669;
    msg.z_units = 151U;
    msg.speed = 0.964436256693;
    msg.speed_units = 75U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.995271726331;
    tmp_msg_0.y = 0.10599615893;
    tmp_msg_0.z = 0.741242775295;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WZPKZQDARGGXDNOKZEQPPIWWVLXUISKFUIMZONVGVGIYSKATEVNOWWYHNMVMRRNCJSTLYWYLHSPINJOKBBPOOXQZLJFULNWTTYTUUCSQHRFCOAMJBQUBETLTKUNXNLPCTXXFGAZWNALQYLISCDJIFVZIQVTJOJTLIFKXMREAQGPRBYXHHUSBSKBDFSEFASPAMAQGVCPWGWGBCMDHDEHYCHCQRFDDJHKEUJJIDMRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.601039671098);
    msg.setSource(33442U);
    msg.setSourceEntity(203U);
    msg.setDestination(61909U);
    msg.setDestinationEntity(71U);
    msg.timeout = 48779U;
    msg.lat = 0.805982207724;
    msg.lon = 0.737619455913;
    msg.z = 0.0139384734412;
    msg.z_units = 170U;
    msg.speed = 0.821189351705;
    msg.speed_units = 21U;
    msg.custom.assign("ZQLDEKRLQZFDMOOZHTPCQXGZMJPQAYRSSEMACNLDBRHBVBIRRMYIPTKUEWIUBEYNIVVPLKXNUBOLECFOIFKIFJGJTKBXXGMUADCOJJMFSJVSHTEONEAGHOHZPCUQQLVFSRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.691526136194);
    msg.setSource(23378U);
    msg.setSourceEntity(5U);
    msg.setDestination(36659U);
    msg.setDestinationEntity(42U);
    msg.timeout = 52158U;
    msg.lat = 0.219914327334;
    msg.lon = 0.0490712553674;
    msg.z = 0.749076042442;
    msg.z_units = 182U;
    msg.speed = 0.525041680833;
    msg.speed_units = 85U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.481469444591;
    tmp_msg_0.y = 0.290100770017;
    tmp_msg_0.z = 0.720928820696;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JPJQPDEDUMVTPRNWPNTFWYSYCKYUNQSCJAORUXLFTSUGXICCTDGXPUTAUBXHCSCUHLMWNERPIKPPBPLOZRVRTOZSKVDEKNYFGGGHABEAYIQZOWCBOXBMRDAKKWSVJVAFDIELQMQVGIXHQZHLYIOBHYMOADSKDDTNOFMRYRGWGTIMEEEXPAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.476844315804);
    msg.setSource(19903U);
    msg.setSourceEntity(80U);
    msg.setDestination(26751U);
    msg.setDestinationEntity(62U);
    msg.x = 0.0435686526195;
    msg.y = 0.919529692701;
    msg.z = 0.280829907391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.955370099355);
    msg.setSource(43538U);
    msg.setSourceEntity(207U);
    msg.setDestination(54303U);
    msg.setDestinationEntity(72U);
    msg.x = 0.917931672523;
    msg.y = 0.00289826904367;
    msg.z = 0.508651347322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.210921609975);
    msg.setSource(10557U);
    msg.setSourceEntity(12U);
    msg.setDestination(36021U);
    msg.setDestinationEntity(104U);
    msg.x = 0.665660106322;
    msg.y = 0.564047307209;
    msg.z = 0.795373433613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.423081701835);
    msg.setSource(18251U);
    msg.setSourceEntity(242U);
    msg.setDestination(34437U);
    msg.setDestinationEntity(117U);
    msg.timeout = 59401U;
    msg.lat = 0.215094364334;
    msg.lon = 0.276350867599;
    msg.z = 0.245629308913;
    msg.z_units = 17U;
    msg.amplitude = 0.948583261689;
    msg.pitch = 0.73283578574;
    msg.speed = 0.779720002198;
    msg.speed_units = 82U;
    msg.custom.assign("PPFSYRIDEDINGMVNBTFAZVYFASEYZWGWJWOPYXMRFSAVMMQOBILWYKAEFUFROZHZAQWCQFVTOHTKHKGZOUNXGWMKMJLFNPQGLMEKJBKVDHIECHDZYZUJIBTXVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.466856043815);
    msg.setSource(34502U);
    msg.setSourceEntity(202U);
    msg.setDestination(29469U);
    msg.setDestinationEntity(67U);
    msg.timeout = 50366U;
    msg.lat = 0.281818574224;
    msg.lon = 0.253314697935;
    msg.z = 0.969592124394;
    msg.z_units = 170U;
    msg.amplitude = 0.814587986758;
    msg.pitch = 0.952038557122;
    msg.speed = 0.859931747217;
    msg.speed_units = 58U;
    msg.custom.assign("HALAKMDWHISKGGXGJIVUVBVGWODZVYRDPMGSQXMSPQPRTBAXUSYESZVOCUWAYCMYBOKFELOCNUJARIMFPFWUGTHYXXBLTUHOLIGTDHNXSEIHDDNVJCQNXPZKRUCRPMMOBTLHIBBYKIDUPOOHFZCWFTFZXWYLQKRDNYQNXAVSKQIAZEAJWEUJYLVHJDSMLWNTQYFTPZZWASBZKPHLFFALEJXVRBQQGEMRNJSEOPTRKEEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.326879751837);
    msg.setSource(32303U);
    msg.setSourceEntity(112U);
    msg.setDestination(9444U);
    msg.setDestinationEntity(7U);
    msg.timeout = 56402U;
    msg.lat = 0.258105797373;
    msg.lon = 0.525968531117;
    msg.z = 0.57314184237;
    msg.z_units = 125U;
    msg.amplitude = 0.658832865845;
    msg.pitch = 0.625402278326;
    msg.speed = 0.915440791742;
    msg.speed_units = 19U;
    msg.custom.assign("CPDWWHMZQSYUVUTJBVHZABJXHRLMGUOFKCDOCKFMZKBOSAIJXZIFVTZKNTOBRAPNPZXXGDVVEBOMYXPGBUIQQZUIRFPOKASQDCTVTMANLIEWAJMPLRLWNRYOABYNWOQGLIRZTNSKPOFYWFCWYNJNDNKGKEMKVHHPGGCSLFEUIUSSFVYRQBHJEQZYQPWTKCLTCIMCUIEFVMXTSDONLWMUGXGEJQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0108579981092);
    msg.setSource(32811U);
    msg.setSourceEntity(10U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(4U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.51902194859);
    msg.setSource(34909U);
    msg.setSourceEntity(96U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(224U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.654101621387);
    msg.setSource(41787U);
    msg.setSourceEntity(126U);
    msg.setDestination(9009U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.926289913582);
    msg.setSource(14296U);
    msg.setSourceEntity(32U);
    msg.setDestination(41978U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.870457199493;
    msg.lon = 0.262375593093;
    msg.z = 0.860478167185;
    msg.z_units = 29U;
    msg.radius = 0.262222728879;
    msg.duration = 30135U;
    msg.speed = 0.0848081999694;
    msg.speed_units = 190U;
    msg.custom.assign("IASHRIABXVEVZLGJIBOVPDLSCREIGTKWVYGYXHAGNXBEXAJBOLQMQNMUUPLVCNJMBNDOWUCPMQQMRUQOFHJRLWSPXKYGQXJHZPSFEIFCDXKKFZYNNNMISHSGBRARQNSMCHKSFWGBEZAGNFTWPVVEKBEGVDMFJCZZOYLPQAKAULBJRMJGIZHWKSWWYDTHTWUTUJZOVTTTMNPHRCIQLHDQFOXIZRFDYPBXYDOLOIEKUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.759588549772);
    msg.setSource(652U);
    msg.setSourceEntity(9U);
    msg.setDestination(8209U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.410166359217;
    msg.lon = 0.325418907085;
    msg.z = 0.111437394289;
    msg.z_units = 162U;
    msg.radius = 0.251984154889;
    msg.duration = 33375U;
    msg.speed = 0.366447227991;
    msg.speed_units = 115U;
    msg.custom.assign("NUMDIIBZGYEIVDIDMFDFZUFRHWMBABHQHMVIJPDPAMPPVCJGPSMUOIDGGCXYVOUIGRCTXRNELHZRQYVYCBZSNTKGORPQMSLJHHYBSRMXNVCJNAYPTNUPOFAJJJRXFUKQVBSKEZJUZOXRRTTUGEQESCUGEOTDYZSRVCAOXFZWWKETNWICTWNSLDTXPGYSHJXQHDEOMFKZWPUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.077332923563);
    msg.setSource(7465U);
    msg.setSourceEntity(172U);
    msg.setDestination(23118U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.510147641589;
    msg.lon = 0.307540288924;
    msg.z = 0.378304448591;
    msg.z_units = 200U;
    msg.radius = 0.779846449775;
    msg.duration = 39108U;
    msg.speed = 0.626408319806;
    msg.speed_units = 240U;
    msg.custom.assign("BKVQNTVIRGECXBEJPTFGXAZEKIBHPVZMHLSUMYDZYOAZBULFPDJQCEHLEBRKNWDVLSCHJQEOHIXQUWVTYICRFCZRGODCXCSHRVFGDUDXBSVFTATZBJHHINLPOKPUMOEVOBDUUNOLSFYFZFEAONCLKIZXRCQKANMEGPQFPNYOKPCSOAXDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.427021898012);
    msg.setSource(48379U);
    msg.setSourceEntity(89U);
    msg.setDestination(15083U);
    msg.setDestinationEntity(179U);
    msg.timeout = 58111U;
    msg.flags = 158U;
    msg.lat = 0.561055251077;
    msg.lon = 0.809849984878;
    msg.start_z = 0.0646755639159;
    msg.start_z_units = 156U;
    msg.end_z = 0.538722060547;
    msg.end_z_units = 113U;
    msg.radius = 0.461696623196;
    msg.speed = 0.441121145798;
    msg.speed_units = 156U;
    msg.custom.assign("TNXHKYPXYYDDWKGENSIBAJWBLPHMCFDRORGHIOMVLYVFAMWZBBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.557148866157);
    msg.setSource(7973U);
    msg.setSourceEntity(236U);
    msg.setDestination(56766U);
    msg.setDestinationEntity(148U);
    msg.timeout = 56281U;
    msg.flags = 12U;
    msg.lat = 0.392529668396;
    msg.lon = 0.0459999986794;
    msg.start_z = 0.577949212907;
    msg.start_z_units = 62U;
    msg.end_z = 0.573297544586;
    msg.end_z_units = 205U;
    msg.radius = 0.110284436534;
    msg.speed = 0.467806446024;
    msg.speed_units = 95U;
    msg.custom.assign("QKXJUCLVLRWMQQFZFWCNPHPGXSJWDOMIYAOMYDZYVKYDEZUDYSSPWCFMNLBKSYDDZJBEKRMWHITNZNHCZFTLTRIYBRFAJSUBIBNBUJWIQGBZRXOOUVNWWEDMFZVJSJMBGAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.853069409036);
    msg.setSource(52602U);
    msg.setSourceEntity(172U);
    msg.setDestination(22742U);
    msg.setDestinationEntity(17U);
    msg.timeout = 17477U;
    msg.flags = 100U;
    msg.lat = 0.665044550155;
    msg.lon = 0.596787381701;
    msg.start_z = 0.326345453185;
    msg.start_z_units = 98U;
    msg.end_z = 0.512311024208;
    msg.end_z_units = 26U;
    msg.radius = 0.524814538009;
    msg.speed = 0.627009318716;
    msg.speed_units = 169U;
    msg.custom.assign("ARAUKCGWKHLFOYDOANFIVRJNQFBNRSOHQYOFDKZBGLCULXEIXDNKTDYRMRPTEGTGMCAHDKILZNOUQLVHAKVPEYJQBXZTGFHEIGCFVWXHSOPVDZMDTWYYSCMIXLJSOQJFUYRWIZUXJJHVZSWYNEDLIWZSNRVXFIOHTBWLGVZEMSHAPNMQXAJQTJMURHZTOGDLUEQFANAWEWSSPKRTRPSQKYMOGDCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.137332406067);
    msg.setSource(24660U);
    msg.setSourceEntity(110U);
    msg.setDestination(3086U);
    msg.setDestinationEntity(102U);
    msg.timeout = 21203U;
    msg.lat = 0.421744699257;
    msg.lon = 0.434101393193;
    msg.z = 0.789255432356;
    msg.z_units = 169U;
    msg.speed = 0.573068457232;
    msg.speed_units = 205U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.681823814056;
    tmp_msg_0.y = 0.771748673519;
    tmp_msg_0.z = 0.457142856701;
    tmp_msg_0.t = 0.0238875806311;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LBZSFGHADJEQOTEDACGCATWNIVCKPYENIOOZRWUVSXVYVXUSAZMPLANIVYTCJXXFTAZFLCZPTPMAAZUYMIKVIGJWGCWDULTUULBQOGPHHDUIRYJPKECMRCQJNTMXMVUXCBVOLKMTHSIYDEGXCDNXFORMNHBQPGTWPHYKGJFJFNRJUOOQSHFIOLBBFPRTXIKLSVERJMWAIYPLMHK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.393597715559);
    msg.setSource(12394U);
    msg.setSourceEntity(226U);
    msg.setDestination(30984U);
    msg.setDestinationEntity(49U);
    msg.timeout = 15056U;
    msg.lat = 0.74643698489;
    msg.lon = 0.141444222261;
    msg.z = 0.252728643463;
    msg.z_units = 12U;
    msg.speed = 0.246793208136;
    msg.speed_units = 80U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.874865084037;
    tmp_msg_0.y = 0.0828106651829;
    tmp_msg_0.z = 0.0179259831654;
    tmp_msg_0.t = 0.531503534553;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RQTFJMOMGYTPCNRPLSDELQTTHLNJWCOHHEYINOFRUZVSEUQRAYUDAMGTIUKKZWOLIXVKLBIJJPZHMOROUQXOFSVSTCFPFXRNCUXMHAQZVEWGLPSRTCVVBXLGKSAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.7804261849);
    msg.setSource(9639U);
    msg.setSourceEntity(1U);
    msg.setDestination(53561U);
    msg.setDestinationEntity(243U);
    msg.timeout = 6230U;
    msg.lat = 0.798478370318;
    msg.lon = 0.387834228866;
    msg.z = 0.187922501814;
    msg.z_units = 78U;
    msg.speed = 0.570020643364;
    msg.speed_units = 222U;
    msg.custom.assign("XCYAJUDZXYPTLTNPVJHUCWPGYUDSAGLLRWVYTUIHGMQMQEEVWOCQTXWNTMQLMOJTEHDTFDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.954262353724);
    msg.setSource(28635U);
    msg.setSourceEntity(123U);
    msg.setDestination(57274U);
    msg.setDestinationEntity(183U);
    msg.x = 0.953023373912;
    msg.y = 0.936736853067;
    msg.z = 0.20168484749;
    msg.t = 0.510944479231;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.312584839001);
    msg.setSource(5082U);
    msg.setSourceEntity(228U);
    msg.setDestination(6969U);
    msg.setDestinationEntity(195U);
    msg.x = 0.875061731632;
    msg.y = 0.866409435304;
    msg.z = 0.0834745850057;
    msg.t = 0.709211721972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.662292366144);
    msg.setSource(25400U);
    msg.setSourceEntity(253U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(240U);
    msg.x = 0.463405652681;
    msg.y = 0.82304586594;
    msg.z = 0.65210426815;
    msg.t = 0.662609430561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.371224327392);
    msg.setSource(63792U);
    msg.setSourceEntity(214U);
    msg.setDestination(29474U);
    msg.setDestinationEntity(95U);
    msg.timeout = 6304U;
    msg.name.assign("SDHSHNCIFFMJKFPTVNQCJGCRWGEKBRHJJCCMQHIFFRFMXZUXYWATUGPRLXPWZVPGXWH");
    msg.custom.assign("RIHHUXDHWCTAETZWLCQZESRYJSSKIBWDPZOSWJSZQJOLJPUGABZIWUYMEOAXGLXCUEZJRCDHUNELRABOFQVFNIMESFRRQUVOSAPABKDPTYRMGTBGOTCDTJLSHMIWQLVNBDQFONHWKTRNFFBIEKEPVUYUUIBXSIPRVYRZJQOCGKMNXCPDVCUFTKANIAPPNAWQEXVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.321933488888);
    msg.setSource(45918U);
    msg.setSourceEntity(68U);
    msg.setDestination(54890U);
    msg.setDestinationEntity(215U);
    msg.timeout = 55754U;
    msg.name.assign("CXNQICTMQTWLXNLTJPLMDIHJBOZXNFTNTLOAAYARMUJFPTWDOXNSNCBIVLZVBSRRMQYILTXOKAIUESQWWHGRJMBFXZSRFWKEJYGPMZOSVVNHFLDDVRIGAETGPBKXZKUAFDUHVYMQBKZOFS");
    msg.custom.assign("EGIZWDOYMLELOBJLBENNADGJJMAESIDGUPTTKHHHAUHUWBPFIGNCVSVCBZLQJAKZLRQXFEUIBSDOADSIIPZXTMBYPAPMSRDJNEGZZBMQZIFGRYHXNAXOGSTFLFKVWXHTEPCZTYKUVBSUWTFDLASOQMK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.0644173609048);
    msg.setSource(54274U);
    msg.setSourceEntity(71U);
    msg.setDestination(61264U);
    msg.setDestinationEntity(119U);
    msg.timeout = 59140U;
    msg.name.assign("DMHCRZSRFRJCBIXRUEYVMHKIPEQBTYJLUOVNKMTOBTFUVYPFNWEBCDRCGOMVRBCWXQKIWWZPZANYGLBDUYHZHBCMECIQEFSNEXZSEMVPQAGDVKHOAUNKGLARONHZSQLKYIIMEGWDAHLRSECGTFJZPTYBZFYQTLGVPDNGODWQFLYUXUXABXLMJOZWLJKQKFJPGGMWQIXQBTASDVAKTHZMPOUJUNOXIFVSITEXSUKSVPWRHJJCT");
    msg.custom.assign("KPIUSLQAZVNXDBMBBAUVOJKEJLFNRUBAWTJEDBUKIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.189443130052);
    msg.setSource(53996U);
    msg.setSourceEntity(101U);
    msg.setDestination(47594U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.253258717915;
    msg.lon = 0.525107889717;
    msg.z = 0.604019854442;
    msg.z_units = 254U;
    msg.speed = 0.210698823876;
    msg.speed_units = 216U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30223U;
    tmp_msg_0.off_x = 0.0506988893883;
    tmp_msg_0.off_y = 0.0624577580866;
    tmp_msg_0.off_z = 0.10834026103;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.561268065372;
    msg.custom.assign("YVQLFUYJLUNXKIUWAJZVYLHXXHOPDSWMCCHASZUKHWCNFYKDCHZCFZYEFDEHTWIQIXUWEAITOFCPYJQULTGWXERVPEBNDVOGTMARVXKKQPZTIWDTAGCMVGHONBJQZDXAPFEIEBRVRMKQJSNSGNMPCKGZDRHNANZOQQSIFDYBTFRISBMYSNHRXVECRRUGKPLQISFLGCOUYBHFUOPGYNTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.178056370187);
    msg.setSource(25520U);
    msg.setSourceEntity(121U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.980528518588;
    msg.lon = 0.0661689478067;
    msg.z = 0.0713047954371;
    msg.z_units = 131U;
    msg.speed = 0.229465187818;
    msg.speed_units = 90U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.780951842455;
    tmp_msg_0.y = 0.313352655117;
    tmp_msg_0.z = 0.0943978013511;
    tmp_msg_0.t = 0.549263945616;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 12424U;
    tmp_msg_1.off_x = 0.659010376933;
    tmp_msg_1.off_y = 0.567536580344;
    tmp_msg_1.off_z = 0.346939176776;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.244957655997;
    msg.custom.assign("VLUDHRFHOLVIANXZYXINIQOBZPLQUTTPXLMDOGESMZFNOFEYIMVMXBNHHHNPHDXCNBOSQJOKPKRJAWMZUVWMYGGEMQTBLZTIRDHQCSQWETJKZSCDTBKFEAGEBCEBLTBULYYKBIRJXWKHWWDKCTLIHSZVEJNQFSJXCFAVNRDDRWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.346573616775);
    msg.setSource(56300U);
    msg.setSourceEntity(102U);
    msg.setDestination(16198U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.0160549064767;
    msg.lon = 0.268999968574;
    msg.z = 0.924699623925;
    msg.z_units = 69U;
    msg.speed = 0.240311865597;
    msg.speed_units = 58U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.80338272631;
    tmp_msg_0.y = 0.494735328703;
    tmp_msg_0.z = 0.296840616186;
    tmp_msg_0.t = 0.623051327307;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.964684509988;
    msg.custom.assign("AJQDXYKHBWKXYYXWLLUENBYOIRICEJSWHPMOUQNPZBRREWOBXYOFWIIJBMHTAYCRKTSLEGAZOGMIZWFVTDHDXKDPSQTPVUUVKRDUTCIKUIGGSFTZALSSVMZKWOQJTLHEEAXKJBSFSYMZIGAZLZOHPVUGVFNYCMDFWNBXFQLNUTNDRFHPDQIWJNOSFAMJERPTZNQVJECTHVXGHARJNQVJRNOGYDCBWCAYEGRUBHCQOE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.457372440347);
    msg.setSource(57772U);
    msg.setSourceEntity(178U);
    msg.setDestination(43264U);
    msg.setDestinationEntity(124U);
    msg.vid = 62551U;
    msg.off_x = 0.448594956876;
    msg.off_y = 0.877077735054;
    msg.off_z = 0.399087540411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.316485394585);
    msg.setSource(60505U);
    msg.setSourceEntity(107U);
    msg.setDestination(63161U);
    msg.setDestinationEntity(150U);
    msg.vid = 33748U;
    msg.off_x = 0.370819365524;
    msg.off_y = 0.718987816132;
    msg.off_z = 0.227563838469;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.416338458216);
    msg.setSource(30081U);
    msg.setSourceEntity(72U);
    msg.setDestination(46908U);
    msg.setDestinationEntity(23U);
    msg.vid = 44342U;
    msg.off_x = 0.173770274167;
    msg.off_y = 0.76420614829;
    msg.off_z = 0.437844463065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.883711266629);
    msg.setSource(21037U);
    msg.setSourceEntity(160U);
    msg.setDestination(20389U);
    msg.setDestinationEntity(126U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.428801731094);
    msg.setSource(25712U);
    msg.setSourceEntity(54U);
    msg.setDestination(8895U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.545845076853);
    msg.setSource(27054U);
    msg.setSourceEntity(125U);
    msg.setDestination(23468U);
    msg.setDestinationEntity(128U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.189082002432);
    msg.setSource(52215U);
    msg.setSourceEntity(125U);
    msg.setDestination(17784U);
    msg.setDestinationEntity(181U);
    msg.mid = 7176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.38568690475);
    msg.setSource(24249U);
    msg.setSourceEntity(245U);
    msg.setDestination(34050U);
    msg.setDestinationEntity(188U);
    msg.mid = 45995U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.94918495404);
    msg.setSource(58730U);
    msg.setSourceEntity(241U);
    msg.setDestination(11405U);
    msg.setDestinationEntity(38U);
    msg.mid = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.746775357341);
    msg.setSource(60145U);
    msg.setSourceEntity(240U);
    msg.setDestination(44293U);
    msg.setDestinationEntity(75U);
    msg.state = 237U;
    msg.eta = 52114U;
    msg.info.assign("HXPLEYYDPTQBTYMCEMNKDZUZXGTHJDEIUMZIEKAEFBIXFHGZTXQCOLYUIOJWJISZNFKGOAOVNURZNSIKDXCNDVGAPOVMLRAGVWGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.0461449999273);
    msg.setSource(973U);
    msg.setSourceEntity(65U);
    msg.setDestination(63748U);
    msg.setDestinationEntity(247U);
    msg.state = 66U;
    msg.eta = 62098U;
    msg.info.assign("NTWBKWVPFRMMGNIPYEYFWTJTUEKCSADVRUKYNBOXDPHCIBHIJPCOBDJZXGDGZNQMMOHFQCUTUSYZCGOWLXOBIPKAFZKKEXVUCQULQVXRONZKCCSVTDZWIVZAGIJQSLSGZEWJJFNHEOABXRWIESDHVIYUFJMXRDLTRNTBFXLNKLYYQQBGZDMZBMAIYJOWPNVMRWLUIOPHRHHPGAMADEQXHMEEVPQAPFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.0239059820686);
    msg.setSource(29428U);
    msg.setSourceEntity(51U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(167U);
    msg.state = 162U;
    msg.eta = 20591U;
    msg.info.assign("YMUMGRITPASFIFGELWPRKAJBYIAMCRUPWBRILCERUIKTOIWENHFJVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.290423423417);
    msg.setSource(60009U);
    msg.setSourceEntity(150U);
    msg.setDestination(59557U);
    msg.setDestinationEntity(238U);
    msg.system = 33665U;
    msg.duration = 42668U;
    msg.speed = 0.832591217795;
    msg.speed_units = 189U;
    msg.x = 0.785731548677;
    msg.y = 0.0212251689847;
    msg.z = 0.302407531689;
    msg.z_units = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.710359009418);
    msg.setSource(65185U);
    msg.setSourceEntity(74U);
    msg.setDestination(28914U);
    msg.setDestinationEntity(25U);
    msg.system = 3885U;
    msg.duration = 53316U;
    msg.speed = 0.734256018121;
    msg.speed_units = 209U;
    msg.x = 0.912095093419;
    msg.y = 0.94546120714;
    msg.z = 0.0936414199569;
    msg.z_units = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.701275648155);
    msg.setSource(3671U);
    msg.setSourceEntity(161U);
    msg.setDestination(27806U);
    msg.setDestinationEntity(53U);
    msg.system = 49404U;
    msg.duration = 35519U;
    msg.speed = 0.513588122256;
    msg.speed_units = 8U;
    msg.x = 0.278569473846;
    msg.y = 0.995209054297;
    msg.z = 0.569710114915;
    msg.z_units = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.0633917422323);
    msg.setSource(1808U);
    msg.setSourceEntity(192U);
    msg.setDestination(24265U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.497947489477;
    msg.lon = 0.150356635176;
    msg.speed = 0.959521715851;
    msg.speed_units = 254U;
    msg.duration = 22836U;
    msg.sys_a = 53930U;
    msg.sys_b = 3450U;
    msg.move_threshold = 0.700286013107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.539828160214);
    msg.setSource(59798U);
    msg.setSourceEntity(73U);
    msg.setDestination(22293U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.497038824445;
    msg.lon = 0.17513333329;
    msg.speed = 0.809394199225;
    msg.speed_units = 192U;
    msg.duration = 55497U;
    msg.sys_a = 19875U;
    msg.sys_b = 27128U;
    msg.move_threshold = 0.398437171247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.151788013648);
    msg.setSource(55205U);
    msg.setSourceEntity(35U);
    msg.setDestination(9285U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.983378337404;
    msg.lon = 0.694235510123;
    msg.speed = 0.0507344240105;
    msg.speed_units = 252U;
    msg.duration = 18526U;
    msg.sys_a = 12803U;
    msg.sys_b = 1301U;
    msg.move_threshold = 0.0850617173485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.961570209426);
    msg.setSource(2094U);
    msg.setSourceEntity(33U);
    msg.setDestination(44428U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.0403294675491;
    msg.lon = 0.182061152648;
    msg.z = 0.084979401664;
    msg.z_units = 202U;
    msg.speed = 0.746680441343;
    msg.speed_units = 124U;
    msg.custom.assign("QNLMAOCXHDZKQIHBETGGRWJYNOAXOLGVZLAWDAEVLLGQWZJJPCRENMHTPUSYMPEBYCUQAEWNWZYOVEUAGODVSHZFLNDIPMQYQAUIFVOFOVWPNZKXNKXKCAMCJGAKJBXTPQQCZUJFRSVTZSNB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.19248587552);
    msg.setSource(36038U);
    msg.setSourceEntity(132U);
    msg.setDestination(20816U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.782987074705;
    msg.lon = 0.267803634016;
    msg.z = 0.0286408075521;
    msg.z_units = 97U;
    msg.speed = 0.484186913325;
    msg.speed_units = 197U;
    msg.custom.assign("ZDQTKTLWERBPKHPGHIABVSDTHFMDLBYMCKMYCLTEQFAYSCWIPIEZPJJWGXRHXGRDCPHUDBLFOAEJCRXNSHIAOPUJVEUBSGEOPMINVEAXWHMJFDYLHCNSMQHBTKDRWBFAVXVUEKVPBWUONXLQTNMJOBQUBJKVJYRFUJYODDCQFIFWCNPGZXIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.052331955566);
    msg.setSource(65470U);
    msg.setSourceEntity(145U);
    msg.setDestination(41058U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.397644583468;
    msg.lon = 0.954884959125;
    msg.z = 0.258407995262;
    msg.z_units = 102U;
    msg.speed = 0.462483327159;
    msg.speed_units = 229U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.876420446061;
    tmp_msg_0.lon = 0.997522433704;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OJNOLTYWZUVPCSTUUGGZXCVTDVKQNUWPOYSAALSCEDQXMCWBCPPXWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.0443849721378);
    msg.setSource(59976U);
    msg.setSourceEntity(106U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.158608665205;
    msg.lon = 0.504130620895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.483332415978);
    msg.setSource(9236U);
    msg.setSourceEntity(166U);
    msg.setDestination(23363U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.0107919451569;
    msg.lon = 0.332262000144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.73127616523);
    msg.setSource(21844U);
    msg.setSourceEntity(111U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.81958675395;
    msg.lon = 0.241772555938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.303073915098);
    msg.setSource(53586U);
    msg.setSourceEntity(250U);
    msg.setDestination(12806U);
    msg.setDestinationEntity(224U);
    msg.timeout = 13153U;
    msg.lat = 0.623999592086;
    msg.lon = 0.00909672334939;
    msg.z = 0.105289724035;
    msg.z_units = 208U;
    msg.pitch = 0.0345534820915;
    msg.amplitude = 0.370648825401;
    msg.duration = 16851U;
    msg.speed = 0.474639320635;
    msg.speed_units = 170U;
    msg.radius = 0.022346919019;
    msg.direction = 164U;
    msg.custom.assign("HXDMVPSMNAOIXHDCSVBNKOQOATTWVTJZZJSREARUILHIEHJJQOTUSJAAITUJYXGQQJCDSCRFWZHZFFQTAJBPSRRTKDRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.452551974435);
    msg.setSource(7308U);
    msg.setSourceEntity(219U);
    msg.setDestination(22296U);
    msg.setDestinationEntity(173U);
    msg.timeout = 2759U;
    msg.lat = 0.518748838914;
    msg.lon = 0.305323862944;
    msg.z = 0.743146869375;
    msg.z_units = 63U;
    msg.pitch = 0.140445088357;
    msg.amplitude = 0.127634747025;
    msg.duration = 28225U;
    msg.speed = 0.350994973766;
    msg.speed_units = 39U;
    msg.radius = 0.689261319704;
    msg.direction = 86U;
    msg.custom.assign("QKKXUDZLAGRRSQBOIJFCRCMJMDXIAMTHHDLPPSEYMPZUMLVNOJYHZTBXZBEQNBJPWXYDOLEOWWJRTKNCSULYMBOTVDSLAFCKJPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.437203182093);
    msg.setSource(11169U);
    msg.setSourceEntity(204U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(30U);
    msg.timeout = 26409U;
    msg.lat = 0.593394031212;
    msg.lon = 0.497116447588;
    msg.z = 0.318635396521;
    msg.z_units = 251U;
    msg.pitch = 0.990090299359;
    msg.amplitude = 0.743866129476;
    msg.duration = 21542U;
    msg.speed = 0.780918177889;
    msg.speed_units = 10U;
    msg.radius = 0.619502039218;
    msg.direction = 0U;
    msg.custom.assign("YFJSBTTCIALSRPLJUEOOELVVOUQEGRLWPRJPZRQUUHXKRQKYNBYHTIZZGPZCKXBXMUZDRGWHYDANVCDWLWRIWGDRBGWARLPIQFEQXGCODXHCBUMTCIXMSFYTGMUAYKZWDXYMNUKSTNMQYBSPBPEVJST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.0999200839121);
    msg.setSource(30143U);
    msg.setSourceEntity(109U);
    msg.setDestination(58073U);
    msg.setDestinationEntity(226U);
    msg.formation_name.assign("FRFRIASGCMDUZKLVEHZGBQVIOKOVVYMASPEUUUKFWVOBNBTCVVCGEFSIAJMJWDODNTTMHMYCTFRQLVZBSDJDAYPWPILZHQTLXZKQAHFNONKVLLEXLJTPNGMQYWDXDXWTXZOJHOYAKHZROJQUNCTRHSFBNNKSZIAAFUIRGKEVQRAFIHGKUQZHYNQUSYCXTPPMJISCEWCBAPN");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28409U;
    tmp_msg_0.off_x = 0.645560059013;
    tmp_msg_0.off_y = 0.409986611341;
    tmp_msg_0.off_z = 0.92631662608;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SFSIVPTVDCUZLJTRCVEXKPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.372348250643);
    msg.setSource(2667U);
    msg.setSourceEntity(194U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(94U);
    msg.formation_name.assign("YWQXFKWQCUCZPGSUZTYZTLEPAMLSKTAJFTYVOUCNTPCLGCPUHENJLZQXUGTRAXKJESCNGIXUDHBBZVOSQRJCBRQXKKWOYQXAPWGGEZIRDPBWMOIGTORHJZMPPVCKEJFREVCADMIMXHYLC");
    msg.reference_frame = 71U;
    msg.custom.assign("OFUBWZTFHSROXTHGUDAFURRATFCKFJCVNBISVHEARUAWDUYJKUPCVLOXQZYYXXNFNYOJRRLLPONVSYHXGWGWJWZSMMQQBDVCDWEVXEAVCWWWIIOJYEJLKXXV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.868047300788);
    msg.setSource(38040U);
    msg.setSourceEntity(211U);
    msg.setDestination(38390U);
    msg.setDestinationEntity(216U);
    msg.formation_name.assign("KDBXQSGTMJOEDKAGZPZLKHOSXCTLNZQQSRRWASCJURQLYYQZNJPZRUTCAYJFRFPC");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43391U;
    tmp_msg_0.off_x = 0.367592672395;
    tmp_msg_0.off_y = 0.666265327724;
    tmp_msg_0.off_z = 0.288678308382;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QSXHMPHXFAUOADPACJBFPZLNRZQOZSJZSWIFIKNNUHKWFJPGKKVLNDAWVMEAPILVCQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.498154245569);
    msg.setSource(63614U);
    msg.setSourceEntity(44U);
    msg.setDestination(49992U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("VMTVYMKGMLAPGTCHXGPBSEGBGIEMEKIKJRDZRAMEJMYVLTXBSOLHAYARCVBZQJJUDUPQYBFAWANNGWTIVQXHKJREVPTDCIXFOCRYCPWXKKGEOMST");
    msg.formation_name.assign("ZNEWVFKGZMARPBENGNQVTAVGZNOCYLKTYKNEOFDNWVRCWOVXTBWEXGDGASRVTQZIUGEUXVWJZITSPMYPKOJZBLIDJNUWDKJSHKYDPLWPWLU");
    msg.plan_id.assign("HEJSUWSRRVXDUXIRTEIKTBFVQUROHSUNFKEATNNHYARNKSVQLGSEACVWAIWYZKEZOWLMYMSVMKDQOZYSJVNEIFIPDNZAZLXWQQGTVLCYXXDHZCORITRABQGCMXCYBGJXMCMPNUQDPUDPFBSZFVWBGSROPBDGMAUROZFYCSKATALFBLEOPKHLCXBRIYDEHVXKBHGKAUPOFWLFMHJTZTJXIPIOHWUGWUQZJKB");
    msg.description.assign("ICLYWKHTADHDYWOOGQFSFBMAXECHGUBHLXJJITVXPZPWNRXPCGRCTFAROZQAGQBOJOYRYKMAKQFSVYMZJUZJBLORGDVXGLSZIHAPANDPZKQNEMUUZQUQVIXYJILIKLPASTVZCNCTLESBUPSODRCDUKQREGNPHOVIUYJEETKOMSKJYWGVSXTHXVHF");
    msg.leader_speed = 0.173270101253;
    msg.leader_bank_lim = 0.193717104768;
    msg.pos_sim_err_lim = 0.720643156987;
    msg.pos_sim_err_wrn = 0.179006015638;
    msg.pos_sim_err_timeout = 50493U;
    msg.converg_max = 0.294354129879;
    msg.converg_timeout = 17198U;
    msg.comms_timeout = 13656U;
    msg.turb_lim = 0.779833904093;
    msg.custom.assign("RPFVXPFEXKYVHABYLENUZOJVHBVYFVGAFWIYCCDLIBEGRCWARGJETQZBUDITWLFMJXJCFOTLOJBFSYJHNMQGYDHWMKPUSTOPRUYTKANWGTKOQALRKFAUNEDQOTPQMOWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.802432682477);
    msg.setSource(4106U);
    msg.setSourceEntity(120U);
    msg.setDestination(23345U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("NUZIWNOFHBEPVM");
    msg.formation_name.assign("CJBIVMPFJNCVQGHYXGEFMSSOWZNPQLHWDJHHOJNOQLISECKYYTRLRMJZWKGUQTBFZXGAWNOVFDCABVZELTVEKUBALIVYIJGYNAUFREMSSEDZQMYXSGURQICVCVULKNKFWOBAKGZHLZRDYKHQPAEIRUTIAVHDJLBLUNJTEDOFJWEBRSBQQSGYAONWIRBFXMWCMTCTPXKHTPHNXWMFTRBXTMACZJZXWAKEPP");
    msg.plan_id.assign("ZFDEBGPQFQAOUAPKRCYMXUQDQGSGGFZIBBATDWSNRHOGXSKHKGWADJKCHNPHCVOSELHTTNKUIZJVYXFJLPCCIBOIYMS");
    msg.description.assign("MURYZBHXHXIEBDUPOEWCWANDHZWFOYR");
    msg.leader_speed = 0.173218734417;
    msg.leader_bank_lim = 0.479384445029;
    msg.pos_sim_err_lim = 0.28182725769;
    msg.pos_sim_err_wrn = 0.826956725103;
    msg.pos_sim_err_timeout = 50003U;
    msg.converg_max = 0.215515391836;
    msg.converg_timeout = 17608U;
    msg.comms_timeout = 26648U;
    msg.turb_lim = 0.140477753659;
    msg.custom.assign("XJITNOICPPMBOUAOEQCMTREAGLWDYWBQNPBTABYXKHQJTTLWCNFYIDMKSWKSVUXANRBUOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.916578097441);
    msg.setSource(50447U);
    msg.setSourceEntity(61U);
    msg.setDestination(47801U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("ENBMETFRURQIUKMGAWKAXOEBHGQMSWZRCUQOMOWHLLYGTZARAZEWUOMETRIFPPAYDSUSGPCFYPYOANDRDMMCJMQQGPEZVBQPFKFVTPQFZNCUNCCMSHUAPXXSLEKXSJFBHTOHXDKZN");
    msg.formation_name.assign("UTULOZHPOBGTZUSNXJBDGFUWLKTKFEMSBSKVSYOHJGHKNBZMDYADMSHHBKZYXSWQNQANSICLQVOTIQBBUGDIENRXWJNZLSEYFZKIRPWAYXREFADAZECAFVGCGBWPXZMQEJKPUCLEKJTXZFVDFPATHAOERWEMIUQKWVTJCNFJRUTWGYQLGXIRDIMRLOLLCOOYPLDCJKDFPMSRMJBAOANYE");
    msg.plan_id.assign("ICBZHCKEIICSUNSEQJFLXTRDOOJKHCKQYITWISJYSWGLSEQWMDPNVGGJDGUVYCLSBHVLZUNQKOJQCTHBLXKKETIMPGWLUTTHQKFZAOEJWWTJMUVPVBMZNERMYGLUMNRXEPMUQAYDCPYYLHACLAHNXIBBI");
    msg.description.assign("OVTEEXAWGOAMDERUYZGMYUGUBKJNFFENUDHEDJPPWFYUOXYUHMVZTBBONVXTIYJJIKFXTXGWLYAMWGLIHXCBPNZJYLSERAPWRDQCSGJQOVBQAVFCWFSCAKVBDLREZTRDOPMUOKZRZNTQHJDXNQYPWYHPGBFAMLKNJSOGLCOXHFJCTLELS");
    msg.leader_speed = 0.79320874821;
    msg.leader_bank_lim = 0.737663207248;
    msg.pos_sim_err_lim = 0.742918267654;
    msg.pos_sim_err_wrn = 0.2778772449;
    msg.pos_sim_err_timeout = 2931U;
    msg.converg_max = 0.664994129808;
    msg.converg_timeout = 29527U;
    msg.comms_timeout = 6493U;
    msg.turb_lim = 0.0807687355172;
    msg.custom.assign("ARWBETEELZQICHNHMZTVMRFDPQUWTCRQCLSJIKLYKZDCNVMYOLBQLRKJIFOGEYHZBQFULAURKRSDTXJBAYDEXHCOPIYSOODXLFWRFLSOUBMFKJVQMNNYKYXBJWODTPJFFQJTTXMXGCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.347857530601);
    msg.setSource(61056U);
    msg.setSourceEntity(193U);
    msg.setDestination(51417U);
    msg.setDestinationEntity(161U);
    msg.control_src = 34595U;
    msg.control_ent = 132U;
    msg.timeout = 0.839860588345;
    msg.loiter_radius = 0.473234754722;
    msg.altitude_interval = 0.876448353013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.330359566771);
    msg.setSource(16290U);
    msg.setSourceEntity(102U);
    msg.setDestination(65329U);
    msg.setDestinationEntity(103U);
    msg.control_src = 28135U;
    msg.control_ent = 102U;
    msg.timeout = 0.28784257527;
    msg.loiter_radius = 0.37962728798;
    msg.altitude_interval = 0.87346543247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.478054278201);
    msg.setSource(55118U);
    msg.setSourceEntity(252U);
    msg.setDestination(16437U);
    msg.setDestinationEntity(193U);
    msg.control_src = 18383U;
    msg.control_ent = 21U;
    msg.timeout = 0.486066807006;
    msg.loiter_radius = 0.4764851885;
    msg.altitude_interval = 0.68626635343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.743649067335);
    msg.setSource(20583U);
    msg.setSourceEntity(130U);
    msg.setDestination(30201U);
    msg.setDestinationEntity(250U);
    msg.flags = 42U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.651672405821;
    tmp_msg_0.speed_units = 160U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.348686616276;
    tmp_msg_1.z_units = 20U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.509601763822;
    msg.lon = 0.915574873701;
    msg.radius = 0.4544361314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.318128027631);
    msg.setSource(6590U);
    msg.setSourceEntity(163U);
    msg.setDestination(48760U);
    msg.setDestinationEntity(165U);
    msg.flags = 141U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.17078839019;
    tmp_msg_0.speed_units = 18U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.105828784271;
    tmp_msg_1.z_units = 127U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.142045404272;
    msg.lon = 0.0123000365938;
    msg.radius = 0.804490958443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.459610814133);
    msg.setSource(36504U);
    msg.setSourceEntity(31U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(3U);
    msg.flags = 127U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.519539987462;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.076458975128;
    tmp_msg_1.z_units = 144U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0421334463715;
    msg.lon = 0.227716406647;
    msg.radius = 0.701974911116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.887312219475);
    msg.setSource(20493U);
    msg.setSourceEntity(120U);
    msg.setDestination(29732U);
    msg.setDestinationEntity(196U);
    msg.control_src = 24470U;
    msg.control_ent = 4U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 80U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.378557080763;
    tmp_tmp_msg_0_0.speed_units = 46U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.38068638136;
    tmp_tmp_msg_0_1.z_units = 201U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0719015808596;
    tmp_msg_0.lon = 0.497224092837;
    tmp_msg_0.radius = 0.357692717116;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.257290468121);
    msg.setSource(4957U);
    msg.setSourceEntity(60U);
    msg.setDestination(58847U);
    msg.setDestinationEntity(18U);
    msg.control_src = 33252U;
    msg.control_ent = 45U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 106U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.434594971823;
    tmp_tmp_msg_0_0.speed_units = 81U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.442813664403;
    tmp_tmp_msg_0_1.z_units = 122U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.155344175207;
    tmp_msg_0.lon = 0.997905861119;
    tmp_msg_0.radius = 0.303421695735;
    msg.reference.set(tmp_msg_0);
    msg.state = 127U;
    msg.proximity = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.885554170182);
    msg.setSource(22131U);
    msg.setSourceEntity(92U);
    msg.setDestination(18033U);
    msg.setDestinationEntity(23U);
    msg.control_src = 17974U;
    msg.control_ent = 73U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0439442548438;
    tmp_tmp_msg_0_0.speed_units = 165U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.57936442163;
    tmp_tmp_msg_0_1.z_units = 198U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.301508410412;
    tmp_msg_0.lon = 0.321959351827;
    tmp_msg_0.radius = 0.398502635752;
    msg.reference.set(tmp_msg_0);
    msg.state = 213U;
    msg.proximity = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.849707234013);
    msg.setSource(43140U);
    msg.setSourceEntity(84U);
    msg.setDestination(25461U);
    msg.setDestinationEntity(121U);
    msg.ax_cmd = 0.260775347817;
    msg.ay_cmd = 0.364732242578;
    msg.az_cmd = 0.965873389907;
    msg.ax_des = 0.892854009807;
    msg.ay_des = 0.612052659781;
    msg.az_des = 0.60171242635;
    msg.virt_err_x = 0.22540208558;
    msg.virt_err_y = 0.740668269801;
    msg.virt_err_z = 0.869172663617;
    msg.surf_fdbk_x = 0.913166255269;
    msg.surf_fdbk_y = 0.402193592773;
    msg.surf_fdbk_z = 0.578333871358;
    msg.surf_unkn_x = 0.800240189739;
    msg.surf_unkn_y = 0.27508587935;
    msg.surf_unkn_z = 0.866988370466;
    msg.ss_x = 0.190947371177;
    msg.ss_y = 0.279373731333;
    msg.ss_z = 0.484112333116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.530874328012);
    msg.setSource(20547U);
    msg.setSourceEntity(243U);
    msg.setDestination(13745U);
    msg.setDestinationEntity(19U);
    msg.ax_cmd = 0.496067599857;
    msg.ay_cmd = 0.72695010529;
    msg.az_cmd = 0.125189813371;
    msg.ax_des = 0.628247041364;
    msg.ay_des = 0.0196307845838;
    msg.az_des = 0.0554269688059;
    msg.virt_err_x = 0.981566950351;
    msg.virt_err_y = 0.807935916812;
    msg.virt_err_z = 0.86291682121;
    msg.surf_fdbk_x = 0.535383930572;
    msg.surf_fdbk_y = 0.092471789987;
    msg.surf_fdbk_z = 0.950514365195;
    msg.surf_unkn_x = 0.342432191602;
    msg.surf_unkn_y = 0.496138092611;
    msg.surf_unkn_z = 0.358783023512;
    msg.ss_x = 0.523800325097;
    msg.ss_y = 0.858335407693;
    msg.ss_z = 0.146743062826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.0158712998719);
    msg.setSource(25085U);
    msg.setSourceEntity(73U);
    msg.setDestination(16575U);
    msg.setDestinationEntity(102U);
    msg.ax_cmd = 0.0864897488847;
    msg.ay_cmd = 0.846486431105;
    msg.az_cmd = 0.065489471527;
    msg.ax_des = 0.7289717699;
    msg.ay_des = 0.887597866127;
    msg.az_des = 0.672564532877;
    msg.virt_err_x = 0.980985725293;
    msg.virt_err_y = 0.681147723746;
    msg.virt_err_z = 0.323450840117;
    msg.surf_fdbk_x = 0.140445151585;
    msg.surf_fdbk_y = 0.441024684294;
    msg.surf_fdbk_z = 0.229600101857;
    msg.surf_unkn_x = 0.314020871902;
    msg.surf_unkn_y = 0.297399508612;
    msg.surf_unkn_z = 0.387155927097;
    msg.ss_x = 0.626279770306;
    msg.ss_y = 0.298134211003;
    msg.ss_z = 0.351338997496;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LFMRIDVIEDFBAMEOCLNXXVNXGETHKZHJMVJMGYESABAXVCTAKDHSHKDFDEBMIWRMXLCBTPLUITYQPOC");
    tmp_msg_0.dist = 0.865299273092;
    tmp_msg_0.err = 0.345608304707;
    tmp_msg_0.ctrl_imp = 0.0453853830954;
    tmp_msg_0.rel_dir_x = 0.0879696783857;
    tmp_msg_0.rel_dir_y = 0.345090774314;
    tmp_msg_0.rel_dir_z = 0.538569499502;
    tmp_msg_0.err_x = 0.606378984164;
    tmp_msg_0.err_y = 0.398882839214;
    tmp_msg_0.err_z = 0.788423089203;
    tmp_msg_0.rf_err_x = 0.333432601351;
    tmp_msg_0.rf_err_y = 0.550253025611;
    tmp_msg_0.rf_err_z = 0.367800868782;
    tmp_msg_0.rf_err_vx = 0.407850330378;
    tmp_msg_0.rf_err_vy = 0.457019992088;
    tmp_msg_0.rf_err_vz = 0.772971361595;
    tmp_msg_0.ss_x = 0.152954804582;
    tmp_msg_0.ss_y = 0.765356287068;
    tmp_msg_0.ss_z = 0.0134285997901;
    tmp_msg_0.virt_err_x = 0.616433496483;
    tmp_msg_0.virt_err_y = 0.634609802919;
    tmp_msg_0.virt_err_z = 0.782486697477;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.366460809026);
    msg.setSource(28949U);
    msg.setSourceEntity(193U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(187U);
    msg.s_id.assign("JTQSRCQZCQRSZLHWCUD");
    msg.dist = 0.744584371893;
    msg.err = 0.611739088701;
    msg.ctrl_imp = 0.018808641175;
    msg.rel_dir_x = 0.62321261213;
    msg.rel_dir_y = 0.126861303523;
    msg.rel_dir_z = 0.0330193205823;
    msg.err_x = 0.0113880166601;
    msg.err_y = 0.593125762099;
    msg.err_z = 0.972882362063;
    msg.rf_err_x = 0.0988208879694;
    msg.rf_err_y = 0.112350449835;
    msg.rf_err_z = 0.219105038164;
    msg.rf_err_vx = 0.349815844033;
    msg.rf_err_vy = 0.597754446134;
    msg.rf_err_vz = 0.583031507138;
    msg.ss_x = 0.64299819809;
    msg.ss_y = 0.622858446842;
    msg.ss_z = 0.873127454194;
    msg.virt_err_x = 0.658868600775;
    msg.virt_err_y = 0.0150823955516;
    msg.virt_err_z = 0.368818198727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.695291343657);
    msg.setSource(12481U);
    msg.setSourceEntity(95U);
    msg.setDestination(38432U);
    msg.setDestinationEntity(107U);
    msg.s_id.assign("BMSEZDDUFPHGEGPEJYDCRPWLKZNWKALIQQSPJQZMVAVSETLNXBURDLHOTMVJYJSYCHIFGXRPXW");
    msg.dist = 0.142087492218;
    msg.err = 0.58058496696;
    msg.ctrl_imp = 0.520219766579;
    msg.rel_dir_x = 0.5223374517;
    msg.rel_dir_y = 0.670125727779;
    msg.rel_dir_z = 0.210694163953;
    msg.err_x = 0.4224841056;
    msg.err_y = 0.793460032264;
    msg.err_z = 0.111277897093;
    msg.rf_err_x = 0.94770342534;
    msg.rf_err_y = 0.202492907388;
    msg.rf_err_z = 0.428857059037;
    msg.rf_err_vx = 0.0220491777264;
    msg.rf_err_vy = 0.820209886655;
    msg.rf_err_vz = 0.00922482347299;
    msg.ss_x = 0.659842058443;
    msg.ss_y = 0.177572773262;
    msg.ss_z = 0.802175834965;
    msg.virt_err_x = 0.548852334329;
    msg.virt_err_y = 0.397558745437;
    msg.virt_err_z = 0.54712386187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.029888723049);
    msg.setSource(21875U);
    msg.setSourceEntity(47U);
    msg.setDestination(63170U);
    msg.setDestinationEntity(95U);
    msg.s_id.assign("BRZJINDCGWHMZGFQLCXDFJXGKDDGGVYTWSRBUFZYEJFMBXCJCQMRWGDJOPYSYYYRAQENSSKRCYNDQATKNCZMLHJTBEHZJTEFWQDLHJFIAUIOCHANKIGRSIMPNYIYKYHMWADOFOTKOEJVVUAHAVVHXFPXIVMSKBWNMXDBUEOTCENWWBXEPXBLDRNLRPZOLVZBPBCKCZLWUFSNRQAGZVTSOKIPQMLGSSJXUOTTQVOA");
    msg.dist = 0.984196447898;
    msg.err = 0.152549602212;
    msg.ctrl_imp = 0.706628126479;
    msg.rel_dir_x = 0.285704522406;
    msg.rel_dir_y = 0.2780835967;
    msg.rel_dir_z = 0.427420583059;
    msg.err_x = 0.110834511843;
    msg.err_y = 0.191231180709;
    msg.err_z = 0.91034493508;
    msg.rf_err_x = 0.609616151931;
    msg.rf_err_y = 0.536551281759;
    msg.rf_err_z = 0.822881536632;
    msg.rf_err_vx = 0.025820885303;
    msg.rf_err_vy = 0.143478044457;
    msg.rf_err_vz = 0.230540334717;
    msg.ss_x = 0.726261531903;
    msg.ss_y = 0.749596600009;
    msg.ss_z = 0.0900845911292;
    msg.virt_err_x = 0.439850941985;
    msg.virt_err_y = 0.913724535372;
    msg.virt_err_z = 0.181399141891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.388452795985);
    msg.setSource(938U);
    msg.setSourceEntity(100U);
    msg.setDestination(23437U);
    msg.setDestinationEntity(210U);
    msg.timeout = 29022U;
    msg.rpm = 0.831949875398;
    msg.direction = 101U;
    msg.custom.assign("LMUTGBCPHVXXSXOEFXYLGDUTGVFKUYDGIUJGZRTPPHAAZAKTDMDNJUNDVILEIQTZOPJRMGBCCYVXAPGBTGIVLWKSTSQZRPMZHEXPWMCOJATDTXZZQYNKIMVMNQSFFOYXDKNIWWQURK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.8490045348);
    msg.setSource(10600U);
    msg.setSourceEntity(194U);
    msg.setDestination(65297U);
    msg.setDestinationEntity(189U);
    msg.timeout = 38505U;
    msg.rpm = 0.496320829766;
    msg.direction = 6U;
    msg.custom.assign("POHQXXESVZKRNEAMRXJQCMIIEJNALBJZCQUYMHUDUEIWGTYAAXDYCIEQVMJEXOFHWIJMWWGBVLPBNYJOSLDPTKPCTTZFDZLRQOVBJOPDFQUFPWYKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.17381240433);
    msg.setSource(37635U);
    msg.setSourceEntity(140U);
    msg.setDestination(65272U);
    msg.setDestinationEntity(121U);
    msg.timeout = 37826U;
    msg.rpm = 0.328458072935;
    msg.direction = 15U;
    msg.custom.assign("TULBBJLNGRBEUNUCCQTBOAKGQUROEMTWXAFBFVRMZNUZNMAVLGBRPHXAAHMZCPZAUMXSRTRUODZEPLKZTPDVYQUCEMXSANYTOGLYJLKWYVNHTKQMJIGBKTWGHSRYKSDEDQXBHEVSAHLEJFHSBVNTVFWHVPHDJDDDJOIQZFWIFIHCGIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.963838941496);
    msg.setSource(29508U);
    msg.setSourceEntity(18U);
    msg.setDestination(4678U);
    msg.setDestinationEntity(21U);
    msg.formation_name.assign("AEKGXMNIUULUYECTYZIGNOONIBTEXMDVGVUQCOIRFJQPSDPJONKKLBAWHLNSOHNBDCGYHPMZCUTKTFHVZRQRAWIFZDYCEAFWRMSIFXVQKIRVNZLWYUVFFJDENTFWSADSMGRUJBWQBRTAPXPSLMYJGASUMJVUPRQQCHBGQLZCQSGPKZFRXOZIGZEBWEKNXHPMCBQXWHOLIIXJJEBOMY");
    msg.type = 8U;
    msg.op = 8U;
    msg.group_name.assign("NAKRKPXZPLKEAOZBIHALZGODVTXRSLVLOEIWNEDOGICXHNFLEQZSIGBFINBWEMYIDPOSTSUFGDJUNEYEXQLNZVLOJDRKHMZEABWJYDBMYCCQSAINWXYRSGTRKICCWZHXYMPYCOEMU");
    msg.plan_id.assign("KGZIKBPUTMLBYUNXWQSSHJJAQDOICKSZKOWNKNHFOYHTAQJFTTDVPSVEPYPHOZTRBEMHHPNJMVXXGZRLCWGIVEHEDMURLOPIRIQCCKMXYYWDVVDWZBYSPDIEHSZFPMYMYRWWIJNCDYHCMBESXKSYJDAZRMWQZULCSWCBAHXQTGERADUAZQRJEONGSPICAGEJBNLGLLKNJRFAZFJKGOXOVXMUFFIBQTDPVGUIFTWNBRFCGXO");
    msg.description.assign("ZJYZCLTHCHHQWSQLAVTXXVPIWBXSDATWVRBMEULRSZMZNAKPNUUSABLPWJJOSLCQUCLKFFOUGWCCKCUIFSPYXPQNPMHTHZCRDBIFOHMJBXUNEVVFTLMBOEUXXPKNFQXMIEEXFMERAGNOHLGOWFENRAEYDPIROFDUMGYOYVPKGUDEKZKTJPAQGGAGZNLIDRWCRJJDDNCKOITHSFDBAIBYQOIWSYBVQZYKGYVJKHR");
    msg.reference_frame = 36U;
    msg.leader_bank_lim = 0.0902677217969;
    msg.leader_speed_min = 0.585602340434;
    msg.leader_speed_max = 0.564287132599;
    msg.leader_alt_min = 0.427538484319;
    msg.leader_alt_max = 0.347821414603;
    msg.pos_sim_err_lim = 0.900335401102;
    msg.pos_sim_err_wrn = 0.626069428968;
    msg.pos_sim_err_timeout = 31271U;
    msg.converg_max = 0.688496958093;
    msg.converg_timeout = 14709U;
    msg.comms_timeout = 46513U;
    msg.turb_lim = 0.765344984682;
    msg.custom.assign("VNFONEBRULWCCRQSCMUOKYMAWHQVPJWYNEFLTOZPJEOKSFGZZYSGXURTGYPNXFEJAITUZYEUHYSTRHNODICCLIOSZEKRTWIPWEQPDUDMMDZDGMPRDKZMNFVQTXRYHNGAMGLHVKDLZNVXCKYDAAKNWFKICTSTMRR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.923281107636);
    msg.setSource(30530U);
    msg.setSourceEntity(82U);
    msg.setDestination(42121U);
    msg.setDestinationEntity(121U);
    msg.formation_name.assign("LKEWEOVNQVPTCWACCUGKUQXDYGPILIVXXYBILLSTDLLGRQZEYBFOLPMZDKOIYSTXVCUUSJMMZWDPUZKHETXFBJMBZAVRJMAIASFOUHUNMHNJFBAODHHIGTOKHPRHITRYQXBLFCVNSENBJRQNOOMVVMPFKTEUIRDAECNSFEWXFRXQDPQYHXANNJUSUJYPQZSHJFCTPGLZXCEGLBABEFSMKHJIBIYTJWDQRYCAWQWZGCDGGVAVZNWSRRWOZDKM");
    msg.type = 82U;
    msg.op = 44U;
    msg.group_name.assign("LTAYISDWTEQWSYYGRHHLVCJAGBOAOTRPXKYUUWINJBNZLOADKFWMAMKUZPIFDOFZBIOEGUXLTCDMHVFRSEQJMGBEEGRYSPIUPSCKLUHJMUBJBMHXGGVFEEWFWVDUTQYRBGLZIRDBARDXPOTVTKFNMINEJMLHXNOCZTTDHNVSYIXNLMYJHQWMVVPEFAQWKKGWSSYVXXZRIFKZJODZKCUZQCCB");
    msg.plan_id.assign("BEJKEHJDKCYXMUKKQSM");
    msg.description.assign("VRRWAFQDOVHJNIHKWLRUFGIOCICBNSPKTUOLSKICZJLNXVDBLOOMBTMCTHJHGGSEXMFPMHRKHIUHIPGWJEQFWWSYBYOTPWSNTIBYMNXYBHZWRFLJQZNMYQEQEOQEORVVGNAQWMXWVDDSZTFPHEFCBGHMAATRYKUUTPRCLGKQZAJ");
    msg.reference_frame = 211U;
    msg.leader_bank_lim = 0.638221744148;
    msg.leader_speed_min = 0.0729528179982;
    msg.leader_speed_max = 0.990422266544;
    msg.leader_alt_min = 0.52877827553;
    msg.leader_alt_max = 0.372432154097;
    msg.pos_sim_err_lim = 0.214521305329;
    msg.pos_sim_err_wrn = 0.171075819104;
    msg.pos_sim_err_timeout = 57877U;
    msg.converg_max = 0.341160041929;
    msg.converg_timeout = 23908U;
    msg.comms_timeout = 28243U;
    msg.turb_lim = 0.353795557627;
    msg.custom.assign("XGGREENSIIRGZDZQLCNENGNCGCPXQIKNUIQUVYYVCBQHSOWRHMUJPXPPPHQYZEGPFOSMDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.116407559113);
    msg.setSource(55106U);
    msg.setSourceEntity(58U);
    msg.setDestination(29252U);
    msg.setDestinationEntity(206U);
    msg.formation_name.assign("YBNICHMPJTXECLGGWSFKTVSSMUBNPPAYCBONKLPROAZGROBJEDUDHYNQZVFKBABRLKHDWMGXXPFOTKHWZOQTXLCEWUMRELPJHEIAP");
    msg.type = 89U;
    msg.op = 111U;
    msg.group_name.assign("KZGTEWYQAGPNNSYFVNMKMZFFTYEKJUOPXCWRTUQEBFOTBZPOXUGJPIYKSSHMQEZMIUPZYCCDBRVLBOTINOWGTIAWJUDZQCLXWIBHVYNEGSVRAOHWYFJJDVAWUARTZCPCKYOVLEMKIUNKAYVJMRQNFCGBHEGNRXZQHNLDUZVFWDLLCXRALBRSDVKWSTHVHINXHABMRLBAGSRXOHOTQMSQJQPSYUCJEEPFIO");
    msg.plan_id.assign("FJWBVJVHZDQLKVUJIMREKUQJDG");
    msg.description.assign("WJJTMCMKNWBRUSCXRB");
    msg.reference_frame = 202U;
    msg.leader_bank_lim = 0.924425081572;
    msg.leader_speed_min = 0.310306424855;
    msg.leader_speed_max = 0.562812379976;
    msg.leader_alt_min = 0.550614059586;
    msg.leader_alt_max = 0.260969911088;
    msg.pos_sim_err_lim = 0.983725970276;
    msg.pos_sim_err_wrn = 0.285459249443;
    msg.pos_sim_err_timeout = 53455U;
    msg.converg_max = 0.0787141102366;
    msg.converg_timeout = 25296U;
    msg.comms_timeout = 35557U;
    msg.turb_lim = 0.58804517813;
    msg.custom.assign("QEMXBRJLFCTBUZXKZJCIBGERVTKDXSDIMQAXINYYERHATQCZXEYUTXFKAHOLLMPFDPRWCGWDMCMHDQCDXEWNYSSBAVLJEYNCTOJHSPKTVHXZSOZUQCLGDPVBQFVISFROUVIOGUXQZWUFZRMTUMNTSLNZNOINIZARJDYOGLAYUNABBOMLGOFKPBMLAEIKTTXEKJGNVWPJPCFUFKJEHWSJYSMWCQVHVWDWAVGQYKEPHWHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.507067575248);
    msg.setSource(9912U);
    msg.setSourceEntity(68U);
    msg.setDestination(4802U);
    msg.setDestinationEntity(67U);
    msg.timeout = 4382U;
    msg.lat = 0.897280934339;
    msg.lon = 0.483643807193;
    msg.z = 0.847285110741;
    msg.z_units = 78U;
    msg.speed = 0.207183657277;
    msg.speed_units = 249U;
    msg.custom.assign("HRUHPOGSGZEUVUNMMJQBISXFBPQYPLKCISTOCGTJJBGFTDLFRAYAGSCUZREMKVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.0204245257552);
    msg.setSource(8010U);
    msg.setSourceEntity(175U);
    msg.setDestination(21721U);
    msg.setDestinationEntity(89U);
    msg.timeout = 46248U;
    msg.lat = 0.615208997343;
    msg.lon = 0.377928309777;
    msg.z = 0.368290363387;
    msg.z_units = 100U;
    msg.speed = 0.717394480278;
    msg.speed_units = 109U;
    msg.custom.assign("EAJHKVAONYLUOJJXSOCDHBROVGWJENNLHZEQDWYWSSTIBUVFYAKZXXEKTHMURUFHCFGNJSHVMXUMCPQRBGPXTZPCBWOFZMILZYDNISUAUQDCSMHTAICAFBQRKMYCJXDHTGSFFIRARDWQUBZCYXJLPBDILPTJWQNSPKHQEKLAPQODWRWQSEOJZOWNWHDACGXUJKZVIOMEYRYIYKGKTGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.807488973523);
    msg.setSource(57314U);
    msg.setSourceEntity(12U);
    msg.setDestination(14245U);
    msg.setDestinationEntity(253U);
    msg.timeout = 60379U;
    msg.lat = 0.600627035227;
    msg.lon = 0.290542597774;
    msg.z = 0.804274906877;
    msg.z_units = 73U;
    msg.speed = 0.76240769042;
    msg.speed_units = 245U;
    msg.custom.assign("NBIUOXHHQNTYOWUJQSHOGBZQMFIRTYDZJRCZVZHWKRNUGJQPWEUDLREKJASPDTWNYCDUBMPBQOLHKHYBYXSPPOPINNLOSXDAGMFEGIVBJAOCLJLVVZMEQSRIXFXAJCUTGDSKXYEKVLGZGPXDAZLZEUSDVVZBKECTCOTIWRMCNENWOUFCJQNGCEKJEAFHFMSMOBGVVHXWMRRDWIFKQFVAUIBATBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.104344578863);
    msg.setSource(40180U);
    msg.setSourceEntity(123U);
    msg.setDestination(13030U);
    msg.setDestinationEntity(5U);
    msg.timeout = 31158U;
    msg.lat = 0.457578186225;
    msg.lon = 0.287401762943;
    msg.z = 0.263730243487;
    msg.z_units = 77U;
    msg.speed = 0.332185317636;
    msg.speed_units = 196U;
    msg.custom.assign("ILWHBWTOINQHIDFMUUQSNRIHRHUXYQMDNXVGDSFPLAMRRAHMXSTTEBRRNFEMKCNPWTOIVCJOAWSQGDKAYCCYSOCXMQYGHPZYDUIZBLPRJWEPTCRCHFMNDODSLUGOFJOIALWVEPQVUEPUBZBVQQZFHTEMXGKIBBAHKGZQOSCVWYGNHIYIZNXEMUZLNVWGKKKTTUBPYRMVJFLABTFCPOSZPJKLDAWZXYVEJLTAEKYBJNXXFFAWZKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.257463898612);
    msg.setSource(3620U);
    msg.setSourceEntity(178U);
    msg.setDestination(14996U);
    msg.setDestinationEntity(222U);
    msg.timeout = 52286U;
    msg.lat = 0.406122857923;
    msg.lon = 0.478583988305;
    msg.z = 0.584530877523;
    msg.z_units = 112U;
    msg.speed = 0.543206665728;
    msg.speed_units = 233U;
    msg.custom.assign("WEMDJUVAHCSKBXGBRQEJSNYYCGAMLQFARWPNJYPCFQVMDVDLIMVSLBICTDWMMWEBPEOYHSIFFIPWBFAZJFYPAKDDOUMTPTICXVBGJTZOFXHWAHXROZMNLTPPNJJVRENHVEOUULFLDPGSKJRFUHGQJZAZQQRNAWSZBINIDACGOUGTQQCCERBNXUXQBQOKBVFLWHYNTYDPOLIERIZVGWUJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.393811675701);
    msg.setSource(40364U);
    msg.setSourceEntity(139U);
    msg.setDestination(11514U);
    msg.setDestinationEntity(144U);
    msg.timeout = 46042U;
    msg.lat = 0.681595831822;
    msg.lon = 0.53513420583;
    msg.z = 0.763348996751;
    msg.z_units = 129U;
    msg.speed = 0.330310597073;
    msg.speed_units = 77U;
    msg.custom.assign("WPVCGJKSQCQBXLQVHOBYVAOXMMIDCMQRXOFZNIXZFLRQDNNLPAHEGQJBESBSBRUKOQZWNFHKWQVNHRYIOYRNOFHTUUTXTKYLUVGQIWCABJJHEHIAVVEJMZDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.7449225302);
    msg.setSource(46563U);
    msg.setSourceEntity(179U);
    msg.setDestination(10131U);
    msg.setDestinationEntity(68U);
    msg.arrival_time = 0.209053997233;
    msg.lat = 0.589646563215;
    msg.lon = 0.217231170222;
    msg.z = 0.561296791636;
    msg.z_units = 23U;
    msg.travel_z = 0.628184856721;
    msg.travel_z_units = 100U;
    msg.delayed = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.993384166093);
    msg.setSource(30882U);
    msg.setSourceEntity(223U);
    msg.setDestination(15147U);
    msg.setDestinationEntity(78U);
    msg.arrival_time = 0.787979234182;
    msg.lat = 0.77502522679;
    msg.lon = 0.0906188909158;
    msg.z = 0.69014554364;
    msg.z_units = 145U;
    msg.travel_z = 0.448245472692;
    msg.travel_z_units = 79U;
    msg.delayed = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.831507987021);
    msg.setSource(18757U);
    msg.setSourceEntity(81U);
    msg.setDestination(25659U);
    msg.setDestinationEntity(230U);
    msg.arrival_time = 0.304327311819;
    msg.lat = 0.377173524775;
    msg.lon = 0.360235754717;
    msg.z = 0.60384092166;
    msg.z_units = 79U;
    msg.travel_z = 0.422829408981;
    msg.travel_z_units = 117U;
    msg.delayed = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.379291540385);
    msg.setSource(37136U);
    msg.setSourceEntity(23U);
    msg.setDestination(42121U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.831550326955;
    msg.lon = 0.538570690082;
    msg.z = 0.441659218112;
    msg.z_units = 151U;
    msg.speed = 0.0211741150505;
    msg.speed_units = 2U;
    msg.bearing = 0.752191211897;
    msg.cross_angle = 0.874124809622;
    msg.width = 0.493286452412;
    msg.length = 0.636629784465;
    msg.coff = 102U;
    msg.angaperture = 0.121606927859;
    msg.range = 26026U;
    msg.overlap = 135U;
    msg.flags = 147U;
    msg.custom.assign("GWVOYYDIPTIUAPVHQBFRNPRVVRBFQABFJXSKPBBAQDRHOYENVBRLLOMXAPZVOFITUSWWOEUKASUADENFHXOGLLSDFKKWWWUCMMAJUVILDIEYKIEPRTCKHYINNJDMTYDJHPZFSGJGWXOSGZLQZOBQPSGANSZDZMQMMHYXEQEZRXMRCYUUITEJYPTZKJRSJXCTTQKLFWYNBCACMQDKHEELZJNXGAWVGTKCWFXBUDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.619307446507);
    msg.setSource(8940U);
    msg.setSourceEntity(198U);
    msg.setDestination(2160U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.278112897832;
    msg.lon = 0.963104347567;
    msg.z = 0.96747868676;
    msg.z_units = 61U;
    msg.speed = 0.710214192066;
    msg.speed_units = 224U;
    msg.bearing = 0.666103629514;
    msg.cross_angle = 0.542765355271;
    msg.width = 0.292692079713;
    msg.length = 0.214335634384;
    msg.coff = 54U;
    msg.angaperture = 0.663542532021;
    msg.range = 5658U;
    msg.overlap = 92U;
    msg.flags = 162U;
    msg.custom.assign("ZYHNDQPVBQYJTCYNVNWZGOCDVZSYXMGCNTOAEFDJAUAOAMNROMCMBSXOKQJVMYIOUVZXIFRPCWWBWKGMHMQDITJJLQEYLFLEPBSEKXKEDIBFRJHCDTFGPIFMKHJQRQQSPCUWTAOTLGYCHGKHARLVZEZPPNDGDDMSFBFXEBNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.244653344964);
    msg.setSource(28040U);
    msg.setSourceEntity(39U);
    msg.setDestination(15474U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.642913718609;
    msg.lon = 0.664142405519;
    msg.z = 0.559961202197;
    msg.z_units = 158U;
    msg.speed = 0.453731008245;
    msg.speed_units = 86U;
    msg.bearing = 0.118966975765;
    msg.cross_angle = 0.00245793673465;
    msg.width = 0.775706393902;
    msg.length = 0.946377547457;
    msg.coff = 106U;
    msg.angaperture = 0.229067783968;
    msg.range = 38562U;
    msg.overlap = 144U;
    msg.flags = 254U;
    msg.custom.assign("JAPENXDGOWVVBYAYQZOFISPNETZLHTCVUDEJSPCMLRKULPAYCWOHJWILSABMWUPZDGDRHLKYCRABOBCRCSQKWDWJEEYVGTFSTLJMMOQTPGUTEQJXWQZAKEEULUEFDKPUIHBVUNDSFGHTMGXGYYSXGWSHINX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.978323545219);
    msg.setSource(43482U);
    msg.setSourceEntity(143U);
    msg.setDestination(43469U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.512850051566;
    msg.lon = 0.59668928235;
    msg.z = 0.421363720752;
    msg.z_units = 198U;
    msg.speed = 0.308597499018;
    msg.speed_units = 73U;
    msg.bearing = 0.218123082397;
    msg.cross_angle = 0.849445454502;
    msg.width = 0.281161652844;
    msg.length = 0.213315534396;
    msg.coff = 151U;
    msg.angaperture = 0.595833514798;
    msg.range = 60579U;
    msg.overlap = 179U;
    msg.flags = 89U;
    msg.custom.assign("ZWLEDLKEYRCCFUCV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.572363008893);
    msg.setSource(21177U);
    msg.setSourceEntity(162U);
    msg.setDestination(57773U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.988976588821;
    msg.lon = 0.250701792483;
    msg.z = 0.392934187355;
    msg.z_units = 199U;
    msg.speed = 0.14860697687;
    msg.speed_units = 112U;
    msg.bearing = 0.924569902053;
    msg.cross_angle = 0.345620285208;
    msg.width = 0.602417479282;
    msg.length = 0.329196687441;
    msg.coff = 238U;
    msg.angaperture = 0.392291947879;
    msg.range = 64411U;
    msg.overlap = 192U;
    msg.flags = 201U;
    msg.custom.assign("ACXNJDEBVRYZCBFBOJSBCKTXNKDHXKHYYFMFSAXKUIEECWNLASBPEBDRYCVQEAKVROOIIJMJRSHMFIAMTAGPNQYSZPMYOVQYLAHKIJQTCNMNGUTVDIEWNLRZWJQLOJBQLHEDHUUCJERTEMTRDODVWFGSXUXIVNYGQAHXQUZVUHROKDCFUZGNJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.7960675963);
    msg.setSource(4943U);
    msg.setSourceEntity(112U);
    msg.setDestination(4058U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.364489296304;
    msg.lon = 0.38798276083;
    msg.z = 0.89595095408;
    msg.z_units = 197U;
    msg.speed = 0.433079391738;
    msg.speed_units = 251U;
    msg.bearing = 0.803833399293;
    msg.cross_angle = 0.874907464251;
    msg.width = 0.677701126255;
    msg.length = 0.704920752637;
    msg.coff = 172U;
    msg.angaperture = 0.75319458165;
    msg.range = 41786U;
    msg.overlap = 102U;
    msg.flags = 142U;
    msg.custom.assign("BKMAZOLKFZJHPBPCHLRSAGYJXLSHMTGVYYSLVGHQKODRNKSYQRAYQFEKCYUXFVGXNVGBJZFHWEWMNYQHZPSGGZOCHDDWDJPBWXUVCNRIOCXIFJCAAQQDXJQTINHOCKBENTMNGVAMEWBBMUVFAEFCMOESLQTITEJRIHDBTCRUUDTZINGITDJRSZHZZXP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.733987095258);
    msg.setSource(31238U);
    msg.setSourceEntity(123U);
    msg.setDestination(30462U);
    msg.setDestinationEntity(224U);
    msg.timeout = 20388U;
    msg.lat = 0.68189786137;
    msg.lon = 0.435371726029;
    msg.z = 0.420274606812;
    msg.z_units = 248U;
    msg.speed = 0.56496738992;
    msg.speed_units = 194U;
    msg.syringe0 = 221U;
    msg.syringe1 = 70U;
    msg.syringe2 = 191U;
    msg.custom.assign("JSTNJBLKWNZAQFMVFJONSBSOQPPGXBKCLBXYOTYRIYCDALEJZDIKJMNIOTUEDOHACXBRZHMIPBXZBBPAEVXQWPAHJQIKTWPFZULGFGTGSFNRHYRYPIZGTRZZZQUVXEVVSKOAELVUCVOPYEDMLHIWPERSUVDWCKSMJTEMUSXGDJRWOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.6136835814);
    msg.setSource(23118U);
    msg.setSourceEntity(91U);
    msg.setDestination(35756U);
    msg.setDestinationEntity(181U);
    msg.timeout = 3110U;
    msg.lat = 0.472239059679;
    msg.lon = 0.698492464343;
    msg.z = 0.849283895644;
    msg.z_units = 87U;
    msg.speed = 0.791319920586;
    msg.speed_units = 10U;
    msg.syringe0 = 159U;
    msg.syringe1 = 241U;
    msg.syringe2 = 113U;
    msg.custom.assign("NIXNIQFZMGRVBZPALKVAYXCCZPVDNJLHJFVXIVVAGGTTYIQREOUYNXVNNWKBKLJUEPKVJPNSBPXHMYDHMXOCDBWFAJSSYOTLAHFEBEZCZICRHEHQODATDRXBOHAGFYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.49269020322);
    msg.setSource(21753U);
    msg.setSourceEntity(249U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(174U);
    msg.timeout = 2721U;
    msg.lat = 0.951766959174;
    msg.lon = 0.492038261239;
    msg.z = 0.793504428629;
    msg.z_units = 21U;
    msg.speed = 0.406469101006;
    msg.speed_units = 128U;
    msg.syringe0 = 196U;
    msg.syringe1 = 131U;
    msg.syringe2 = 76U;
    msg.custom.assign("UNAXWYFVNFMYSCTCQARVKGNWEEKHEAXJZTNUAMDBQKZSRTBFXQYHDLTMBBMBPGLXCPMEIJLOANGROQJYTELTCFLCIERDVHHUXJRKZQULUMXSOPYZWIVYEPFZACGTLKCWDVXOLNRAVVRNPHLHYIWUYXZESGHNWCAQZNOVKEHWCDYTURYJOBDIADRBQUQIOIGFPJI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.872326598569);
    msg.setSource(1238U);
    msg.setSourceEntity(77U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(122U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.495119240093);
    msg.setSource(61376U);
    msg.setSourceEntity(196U);
    msg.setDestination(59190U);
    msg.setDestinationEntity(142U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.394707215973);
    msg.setSource(7632U);
    msg.setSourceEntity(123U);
    msg.setDestination(5590U);
    msg.setDestinationEntity(215U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.00265779275365);
    msg.setSource(6392U);
    msg.setSourceEntity(182U);
    msg.setDestination(59351U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.253516189638;
    msg.lon = 0.912549451948;
    msg.z = 0.713751907904;
    msg.z_units = 175U;
    msg.speed = 0.474778197546;
    msg.speed_units = 37U;
    msg.takeoff_pitch = 0.760119819977;
    msg.custom.assign("QMFQRSKXHEXPNLGHDAEPGLVXCKEDYKMJYVLHZWYBQZLTMPMCJUANRJTOFFIMINBUUJCKPOCDYYOZFGPKFNUXEDVOCBSJJHSZUVHVRGQJTXXRHBBESIGJIAFYTWVJYZSWXDILOKXKOWRSID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.605465630874);
    msg.setSource(18566U);
    msg.setSourceEntity(18U);
    msg.setDestination(47622U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.870779317504;
    msg.lon = 0.294230771347;
    msg.z = 0.797520818414;
    msg.z_units = 148U;
    msg.speed = 0.214553666634;
    msg.speed_units = 252U;
    msg.takeoff_pitch = 0.945248678361;
    msg.custom.assign("SZKBPGVNRWBODNNHJWEBDQOPULASUNASGJVDKTYYCTLFHGAFUEGWYTWLRJTJHKKOQMNQLMFZXQXKLTISXKFGCQJEDRSPDYORGRBLVSOOCAYAICWGCDXUOMCVAFXRECLESBMRRSVUAYYUVEIJCLFYXPQVPRQZZZBXTATEXIMQDIUGUTJHMCQIGSULPJSWMOMZVOHKNDEPVBFBPIRWWHENWHIWHVZONMTNKIJPFXQYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.828810287456);
    msg.setSource(44259U);
    msg.setSourceEntity(193U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.14293889645;
    msg.lon = 0.48400343811;
    msg.z = 0.411683717886;
    msg.z_units = 213U;
    msg.speed = 0.221496328895;
    msg.speed_units = 162U;
    msg.takeoff_pitch = 0.0303832757054;
    msg.custom.assign("XALONBSBOLKQCJCWGZUIHNIMXXFFWANYTMOXOFTSERRNRRZVLDVDZCTJKBLUWEMDWVAJQJLAEXAGMNUATZMJGTGZCHPAFCDT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.636159410299);
    msg.setSource(14227U);
    msg.setSourceEntity(216U);
    msg.setDestination(54890U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.82857369866;
    msg.lon = 0.275628631823;
    msg.z = 0.341328694771;
    msg.z_units = 117U;
    msg.speed = 0.0732892341729;
    msg.speed_units = 12U;
    msg.abort_z = 0.447628862008;
    msg.bearing = 0.407139079335;
    msg.glide_slope = 56U;
    msg.glide_slope_alt = 0.0549524922702;
    msg.custom.assign("UMKHGEGMDYLREDDMAGSUYFAFSFPFQXUZOJHSBJTPMTPUCFZGJJCDTJYBISAJWNDTVHQZEXOORKMDZYJCARIBWHRWXJIGOLYVDYVQQXAKRNBVSNQCLOLWHYSNVGOHBRUUINABEECLDSNEMCMSVPPBPZLGANGIMFTYRILWRKKNWUHJDCFNVANAUGCBMPTKTJZZOVCBGAXETHKZLIQKYETIPHQRVOCPZKXUUXOEQTIIRLWSZDXLWWVOQXBSFYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.0473024006282);
    msg.setSource(29097U);
    msg.setSourceEntity(102U);
    msg.setDestination(53871U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.146674722388;
    msg.lon = 0.88234931729;
    msg.z = 0.962596573451;
    msg.z_units = 15U;
    msg.speed = 0.419956523125;
    msg.speed_units = 58U;
    msg.abort_z = 0.221465442407;
    msg.bearing = 0.59248186816;
    msg.glide_slope = 112U;
    msg.glide_slope_alt = 0.805069655558;
    msg.custom.assign("IAZPPHDWYTTIWNVHIGAKOTSULEMQKURPHNLQUELINJNMOVYZVLYJAMJSKBAOMGWFYFNWEFYXSJVFTPITXGPOCJYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.583776682406);
    msg.setSource(42687U);
    msg.setSourceEntity(203U);
    msg.setDestination(58225U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.526357727386;
    msg.lon = 0.549551705092;
    msg.z = 0.411704273557;
    msg.z_units = 220U;
    msg.speed = 0.0328542920684;
    msg.speed_units = 42U;
    msg.abort_z = 0.140199903135;
    msg.bearing = 0.790890662533;
    msg.glide_slope = 18U;
    msg.glide_slope_alt = 0.857833088708;
    msg.custom.assign("GARXQSYOOGYILWHOEGVDVVOHRBXPOFLVOPURTZBQCIBJPIVQPDUHEKMRLCNQUWDPYJBKAWROAECLQDWXAGTUQJFWXHJJTQAFHYWKCOSUQITENDJIIWIAAMUPFJQAYXEYSBJLLGSXBQFFFFWNNNKPEMKXIPMDGSZREDTZYTPVRRHCKFMSOXJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.171246023413);
    msg.setSource(56764U);
    msg.setSourceEntity(8U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.771234748567;
    msg.lon = 0.698663117691;
    msg.speed = 0.0928732664537;
    msg.speed_units = 2U;
    msg.limits = 117U;
    msg.max_depth = 0.507145268592;
    msg.min_alt = 0.138713605345;
    msg.time_limit = 0.515325091526;
    msg.controller.assign("RUHPGTPAKSVRCVDFRISTJNMDUGMQAQIFODCVQBMKTCOANMKCFJRJKHCFYNMAIJUGBHYLSLRNOBYKZGJICYDHFWETFJZGAUISIJAAOMYCLASEWXQZLOFTIIBWVQHGPDMDPHWCKTKYBAYRLVOWBPPOLQBEFWKOODXHUDZECZWVSWGPPVXEESNXEGBRYKXVLNFXUUMQEQJMXPNQPUHZHVNGBDRSSUZBMJWLTZUEIAY");
    msg.custom.assign("QMPHFFHNVCKSJQILXXWEGDYTMXSLALANMTDFAXVWGKTARCUTUOBRNQUUXIMPLPGCKSXRDNJPNYHZGFGVLZZSTTBKVWRFYWDSCANLIECYVPEFBCCEBDSITFOUJBTTHYEXWAXRKOTMJJWPQEMZEPEBUYLPSNDROOOSHKCWYYHVHZRQZCVDRJJGIY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.0325944368598);
    msg.setSource(35245U);
    msg.setSourceEntity(167U);
    msg.setDestination(10882U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.0854192516228;
    msg.lon = 0.873519930526;
    msg.speed = 0.441827606193;
    msg.speed_units = 200U;
    msg.limits = 188U;
    msg.max_depth = 0.211133608658;
    msg.min_alt = 0.950934595922;
    msg.time_limit = 0.634788462289;
    msg.controller.assign("BROEUOSNOCQTIQSRZCTSMUWUYYXYMHBJKKXRDCLLFZYJZJBFNJFMPYFFDTGPHMVJOVFWLEBAXDPNXVAZZMEYEPRVYCAEVATALHGHBSJSCWNOCEKBTPQWSVMRSGWNPCIKKXFGJPPQUYXAOMPUIWJOCOZLZRGNETXQOSEEKTUPBLRDKJVDCHELVA");
    msg.custom.assign("MPFAYBBFFTXUKGQOHWAMMIJAZOEFWWCNZTHQBBPRYOMLHMOYDRGAQUQJFGEXVJMVCBVZPTAIHDEEPNLWSUWUBLWLKUJVKCIDFZHQBNJUUXSDNRKXQDJHVWGXRHUGEQQJYPZZSRDTODHVGEAPLSENOXWRCJISZAFKVZVRNEPTFOXDINRQKLPUSKRSGCNZWBVHXLIGISUGYATYBWXMSPEFIMEYZONDJRHNXTOATMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.475675811034);
    msg.setSource(61001U);
    msg.setSourceEntity(108U);
    msg.setDestination(18791U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.642653641649;
    msg.lon = 0.972517397483;
    msg.speed = 0.0442832563787;
    msg.speed_units = 122U;
    msg.limits = 62U;
    msg.max_depth = 0.104838554498;
    msg.min_alt = 0.885386944991;
    msg.time_limit = 0.241044465484;
    msg.controller.assign("XMXAUNTKWARKMAJXXFGWTBCLBWCWNIHHUGJHLWBLNXOCYBFGHINCSQYNTLJAPZPUVRPDFTVRSZJYBDXIYWXGWGGQDEINRVKVIRHYCPFKMAMMJNTSOQCOLXZHFSQEHIKIIJALQMZDVEJGZUOMEPQTTKHWTSRDRUJBPBUARSYZKHIGWNKWLBSFQNJUMVAOQDRCPUEYSRBLCYVMOKKLP");
    msg.custom.assign("REFAVYWHQQDPOZLNCOJCJRRTAUQGIRVYPDNYSPIVBMBNBDKCAMIKVHMZGTBYZMVFMPLATOFSDLRGIBPKPKWGMXAXOVQWWWJKXWXBDJWUHIYKANPMFKRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.265145159282);
    msg.setSource(8069U);
    msg.setSourceEntity(231U);
    msg.setDestination(42161U);
    msg.setDestinationEntity(151U);
    msg.target.assign("FJMFRMHWPWAZZBJCXUPPLQTICKGHMBVCUCYLWYNZVOSRUDDIKKMKERKZRPLGFQCYDBWVFMBLUHQZQSXMASPCCUOOZQLPBLKFGTFOWWNPHPMYTGAMIUSVSHCWKJZGOIDNETVJOSWVXMNRATCYQJLVDIGNDYHRMNRRHEGZEWHUTXYIPWFYQDQKXHXYEUJSNSSUAIGOYGFBEJJTXDLVKAOOXEBABIXDJZP");
    msg.max_speed = 0.0678020336659;
    msg.speed_units = 45U;
    msg.lat = 0.719250138655;
    msg.lon = 0.715672402953;
    msg.z = 0.30966786331;
    msg.z_units = 154U;
    msg.custom.assign("DGCZANXWOBFKCOMYBLNDBVUGRYVQXCRUJDEAPAADZELMXHWAAOOUMZFCTVRQJPDYRLSJJIJBQGTRNKEIFCUBEQELHRVCUHGYWXCJTIPTHVANSRDKOAYVSUTQVRLFEKBKNGSYGJLTHUNXBNWSHMRLLOBYIDZPQSFKPDMIYATPCQPITVLWTEOVGESMMPRMUSBXZYNPSAJUQZHEJOIUGGFXCWWZNYXIFKXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.555258201848);
    msg.setSource(12563U);
    msg.setSourceEntity(154U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(221U);
    msg.target.assign("GDJJSHMTETAZIDDDRQABQYNRRJPUUOOIPFGTGNFLBUWIIPSVMWPZSTKYOWUNFEJMXMWNYGYUQBEHHMZIQHVAZWJFOXWBDPNKRALOCEMISALFXOHLELCEPUXIRFVKKSVQHSBGFTFVVBUGDNXCWZFJOEJZPBXUIPTBZEYVDMGBNSQOLCHXMDXJJIKVCQRHDKUALAZGSTRGKAKFHTWMYEXSQNO");
    msg.max_speed = 0.95196680912;
    msg.speed_units = 200U;
    msg.lat = 0.572169902173;
    msg.lon = 0.390759533744;
    msg.z = 0.739814498342;
    msg.z_units = 183U;
    msg.custom.assign("OAAEFTLGARJUCQGJBXDMHCLZZWESEWCMRHYYWGVLUICXJHYHJQXYCUASGSRQVCLDGWYVDSIMGQCSIURLDUDTABKKYZIXWTQEOXDBUANUJXVJDHTKCIFPDFVFFZEQWMROKGNPOMFGBDZPXLKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.521962831645);
    msg.setSource(1990U);
    msg.setSourceEntity(192U);
    msg.setDestination(37589U);
    msg.setDestinationEntity(56U);
    msg.target.assign("COFKACXVZHVSZJKIJR");
    msg.max_speed = 0.356573926133;
    msg.speed_units = 29U;
    msg.lat = 0.305933885513;
    msg.lon = 0.0516301127134;
    msg.z = 0.0488486783416;
    msg.z_units = 181U;
    msg.custom.assign("IGPEUXLKREEIGQOLMHTEFGWXJOVJHFTWHGUYOMRUZJQDENFHBKQOCWUBXXXNQSPPYKOPQVGDJRNVUDCJMZNEJHGRLVNAANMKWFNSXRABZOKMVIJCVOIRVXEYLYKSPUSMZCSRFOJITMUUQONYLGTZBZXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.291557330261);
    msg.setSource(18596U);
    msg.setSourceEntity(87U);
    msg.setDestination(50749U);
    msg.setDestinationEntity(149U);
    msg.timeout = 14340U;
    msg.lat = 0.681772090851;
    msg.lon = 0.0356375296602;
    msg.speed = 0.478447046736;
    msg.speed_units = 3U;
    msg.custom.assign("BWYLVOKFHRAUFGDPSKFJVFFMMKXBSYQJZATRHGUGJJWTKZSUJNNTIIDVFRGCERHBMQPPOJZWOPKRJXTFEOWDDCCAGECDLSZUXRMCMBUIYGPSAAGFAIXDBTCTEZTKZRXCJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.184991760228);
    msg.setSource(47926U);
    msg.setSourceEntity(135U);
    msg.setDestination(44939U);
    msg.setDestinationEntity(189U);
    msg.timeout = 21929U;
    msg.lat = 0.893064655107;
    msg.lon = 0.94024509299;
    msg.speed = 0.0674306832323;
    msg.speed_units = 157U;
    msg.custom.assign("XONWTNXTGJJDZSGKDZGMSYPCFHFJHMKITVEDIQAQCCFFANKOMQMVQSPWVUYBLWTVIBVEJPKPMBGQSFVQVVEIXDBLFBNELKJHKHBRLWWGJDWGACAUZNARPHZRXYNUTJDWZIABOJIAPKSISUMFOTELMWQXPCQNROZRCMWCNJCNYUBBCZEUIQYXEWLISIUMONTHOPRTZGYYTMTYHYSOXCLYXKAGFHKXEHGXPEBQHVFFASKRSRDADELRUULOUVOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.351187307815);
    msg.setSource(45357U);
    msg.setSourceEntity(216U);
    msg.setDestination(50907U);
    msg.setDestinationEntity(187U);
    msg.timeout = 6616U;
    msg.lat = 0.80965286246;
    msg.lon = 0.00818453541783;
    msg.speed = 0.123623099015;
    msg.speed_units = 101U;
    msg.custom.assign("GLPHRCVSQPBVDDLXEWHWEJMGBZJIUYUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.428661206966);
    msg.setSource(54024U);
    msg.setSourceEntity(49U);
    msg.setDestination(51095U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.6692449257;
    msg.lon = 0.132064957203;
    msg.z = 0.895329336005;
    msg.z_units = 117U;
    msg.radius = 0.978921775334;
    msg.duration = 61591U;
    msg.speed = 0.916120861546;
    msg.speed_units = 248U;
    msg.popup_period = 20598U;
    msg.popup_duration = 19499U;
    msg.flags = 98U;
    msg.custom.assign("VVYWESRFROHOYCVSNOMXMPKZCJUYQWRZWPLJWSUNIVFXLJKZJKHCKQAHFOAZISGJNTRCGDHMSUYLDEVXWQBOSUIDMDDPHOYGZWOTUTYMUGHTEOHIZEHSWPMEPZNRBQKXXTWQFDDILTTATOSLJACUKESQGBBXEISRLVAFMVWKBLJXGPJDZEGNQMDEAXRIHCIABVAEPKRMKYJQFMFRNBFWLQUIZVPXVLGHFCLYYCDQIAZXYNG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.957852605839);
    msg.setSource(18256U);
    msg.setSourceEntity(107U);
    msg.setDestination(8102U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.408413274131;
    msg.lon = 0.43653377095;
    msg.z = 0.0577439732695;
    msg.z_units = 195U;
    msg.radius = 0.400513577587;
    msg.duration = 26470U;
    msg.speed = 0.129396237097;
    msg.speed_units = 254U;
    msg.popup_period = 52149U;
    msg.popup_duration = 64940U;
    msg.flags = 29U;
    msg.custom.assign("HGYAKOGUDXPPAWNBGSFYJRKBMANZHMRMLCCSOPYRCTOYGCFTCSZQOKVDHTYHVQETZDNIVSACSNDHIWFBLXMECZIRXTFWUYXVMUMEFWUFRGHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.251092353259);
    msg.setSource(10881U);
    msg.setSourceEntity(211U);
    msg.setDestination(39154U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.338900507154;
    msg.lon = 0.63849315993;
    msg.z = 0.239004851774;
    msg.z_units = 236U;
    msg.radius = 0.920107608944;
    msg.duration = 14139U;
    msg.speed = 0.982244778818;
    msg.speed_units = 129U;
    msg.popup_period = 44458U;
    msg.popup_duration = 32877U;
    msg.flags = 73U;
    msg.custom.assign("QDWFDQFYYTIPIYNRIMEMTDPLILAHEFGWJOPXNLEOUICYYKXDUBZRFBSHTAAXGQLBHTZLUXURSBESAGLOXONZXHNHCWBJLIJPURPREFNCBKTGWHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.712587169765);
    msg.setSource(13027U);
    msg.setSourceEntity(230U);
    msg.setDestination(48109U);
    msg.setDestinationEntity(178U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.00544687673692);
    msg.setSource(4U);
    msg.setSourceEntity(67U);
    msg.setDestination(63407U);
    msg.setDestinationEntity(183U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.170941704127);
    msg.setSource(59064U);
    msg.setSourceEntity(172U);
    msg.setDestination(23705U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.868260595097);
    msg.setSource(32162U);
    msg.setSourceEntity(40U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(73U);
    msg.timeout = 18688U;
    msg.lat = 0.234698620784;
    msg.lon = 0.438891214596;
    msg.z = 0.997923958731;
    msg.z_units = 228U;
    msg.speed = 0.317832622113;
    msg.speed_units = 214U;
    msg.bearing = 0.629598366175;
    msg.width = 0.386008240954;
    msg.direction = 236U;
    msg.custom.assign("FGQQLXEKEBHFDHMTIMSOLPUHTXNNVQXEXSBEKIYFWWYRKSLSJGZWKAVIFXSNXLTVIZVPDMATIXTWNIRHHEXYRYBOJTNBIDYWBHQHICWDPQTOLMPVRYRGMDELRRNDFDUAVUWMMBSMBATPGGNZJVXUKLUOELAXUZQOJZNKWDGJFJCCCFGNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.147877516871);
    msg.setSource(34361U);
    msg.setSourceEntity(146U);
    msg.setDestination(46874U);
    msg.setDestinationEntity(94U);
    msg.timeout = 22604U;
    msg.lat = 0.816043126731;
    msg.lon = 0.443185983113;
    msg.z = 0.426302678673;
    msg.z_units = 68U;
    msg.speed = 0.235114383946;
    msg.speed_units = 140U;
    msg.bearing = 0.869131644625;
    msg.width = 0.389860170454;
    msg.direction = 233U;
    msg.custom.assign("UUFUXEZLWTCSBRTIUUXTTCMLDMGACVLOWXCMDNMBCBHQPKZHHQIFFIJRWMNZXWEALMIKSXUAJAPDEZXMHTHDJVDPFWUTGZHQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.282121778045);
    msg.setSource(30065U);
    msg.setSourceEntity(17U);
    msg.setDestination(28174U);
    msg.setDestinationEntity(223U);
    msg.timeout = 38228U;
    msg.lat = 0.502448132063;
    msg.lon = 0.548691633125;
    msg.z = 0.920816166244;
    msg.z_units = 75U;
    msg.speed = 0.179799019345;
    msg.speed_units = 6U;
    msg.bearing = 0.430816494515;
    msg.width = 0.521136105891;
    msg.direction = 96U;
    msg.custom.assign("IWUGOTECIVCDEPIIHYRFWBRJKLBDWPKRCUJZWJIQAMJVARPRAJZECUPXVNUZAUKJHLCNGGCZBUNVETGOWLNZDYAUMBOBTGGNYXXRKYFOGVTQPHLGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.571859807694);
    msg.setSource(14225U);
    msg.setSourceEntity(75U);
    msg.setDestination(37540U);
    msg.setDestinationEntity(51U);
    msg.op_mode = 181U;
    msg.error_count = 55U;
    msg.error_ents.assign("FYMLOEHCOGRMPCBNYVKCAOWISHSWDMMCATJAZWOEQIUPFRUXIWBWFFMWJSOVNSOPGNCZTYQQEMHPYNPJHIRFNXOAHXZDFVHDDETBAZPCBUWPFFHUUCQYHOSXITMDUGXKKOHLUQKGZKSJFKGMQYDVRAQDBIABYLTVZNIVANFLESTNAQAGX");
    msg.maneuver_type = 55172U;
    msg.maneuver_stime = 0.00722374666281;
    msg.maneuver_eta = 56198U;
    msg.control_loops = 1028826732U;
    msg.flags = 50U;
    msg.last_error.assign("DXLNKUCFAUCIPJZRAQNUZRAIGVJKSYYQLVVYSWMVBMPBXDPJTLHUHOWIQPFCQJBGUWLIHYCTRKEBNRZZCVUBFMYXRRMEAHLPOAMLDHOIVPDHZD");
    msg.last_error_time = 0.0439301563173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.724737291254);
    msg.setSource(44999U);
    msg.setSourceEntity(206U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(228U);
    msg.op_mode = 50U;
    msg.error_count = 169U;
    msg.error_ents.assign("TUTHYQNRIMIXONRLZFRVHFJYWAACXLXCIAFEVMTIYTSSRVTKQIYMKQJDZDPFYJOEZBXCGXMALBKSPSWGTKFHJPPJUQFIMEVTBVKFXGUBTTUMOODUHZGSYTPUEGCZREGNDVQWIDWFIVELKGCYOGPAZAHAHYMERXUIOJQWOLXHAXMZZLWRECUNXORKJFVZQCMDCUSOSBGBQIHD");
    msg.maneuver_type = 32337U;
    msg.maneuver_stime = 0.710557741515;
    msg.maneuver_eta = 64519U;
    msg.control_loops = 289080234U;
    msg.flags = 47U;
    msg.last_error.assign("EJZXSVIFFYORUGBYIBSJRITYFMRSLWHLDCFFQIFJTMZQWPWNJBPZBYPMLCUQQKUMGCTKETRYQNXAVHSZFJHZPCWBBOHZKGUSGSWOEHEPWVULIIRMRXCFZEIGVEMXSXLLCQDBQBIMZDQYIDJPAND");
    msg.last_error_time = 0.110223976806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.394866589035);
    msg.setSource(18014U);
    msg.setSourceEntity(17U);
    msg.setDestination(28568U);
    msg.setDestinationEntity(181U);
    msg.op_mode = 122U;
    msg.error_count = 220U;
    msg.error_ents.assign("BXBRKIIFIGQDBYAZCPPTZEOAFZPQPFVMIXLEJLBZRLCWYVYAXLHWKIKJDWGBSKGWPDIMLYFYRUAMKJJUMVTGBDMTZUOSHZPDTRMJSONQOGLARUNXUOYWOUNUGRAYSDGASVCXKEKVXPFQBHIBTMVPKGQOHYABSRXSFCLGQCCTYB");
    msg.maneuver_type = 59784U;
    msg.maneuver_stime = 0.190825357829;
    msg.maneuver_eta = 15567U;
    msg.control_loops = 3541487236U;
    msg.flags = 14U;
    msg.last_error.assign("GSGUVXPESYXTZRYVTUBAXJHWYCZYJUKCIFLRMAXZUQKDMWKHLVMQFOQAQNINGHOSSTEUSEVFORFUWYIEHHNZVMMZHKNIBYTDMNOWAULVBWFBEFBLT");
    msg.last_error_time = 0.0105306442961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.283017806668);
    msg.setSource(61982U);
    msg.setSourceEntity(228U);
    msg.setDestination(1468U);
    msg.setDestinationEntity(81U);
    msg.type = 24U;
    msg.request_id = 48682U;
    msg.command = 213U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.334265255578;
    tmp_msg_0.lon = 0.326184543275;
    tmp_msg_0.z = 0.37834405694;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.radius = 0.401090897887;
    tmp_msg_0.duration = 50889U;
    tmp_msg_0.speed = 0.0329505011349;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.custom.assign("OECMOHUAQXZMWXECQRYPPDUWNKWUBAOPSCOCAFMTKRWVMSCRFHWDTAZHYQHVCBGCVFEBVDJQZPEMOGYAJWTTYMMEHFYETRVRJIOLXKIEMJJHUDNSSMOWKXRHZCIGDGR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23669U;
    msg.info.assign("LIYYHTSXOHKVAAMJGQAMPUEHUIUCJDQWBCHVJIYNJZMPSNLVOICGIRHYWHXGUQNFOXRXYIMNVGBSRGIMTJWSMZKQAGOWZAZIFPSEPSDAXBPXNYAVOWELPWEZKNSCCLCDRYNMBLXUFJREQIDKFBDPAQTTZCXEGNYTVHEXDOPZVLTDKFCDFGQTTLRJGGEFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.18287344983);
    msg.setSource(49569U);
    msg.setSourceEntity(126U);
    msg.setDestination(22541U);
    msg.setDestinationEntity(31U);
    msg.type = 186U;
    msg.request_id = 22578U;
    msg.command = 248U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("HPKJEPSMOVYZYTUNKGQBGBSJQDDBPLOJSMZAIBKYQYGCYZEIVZXJTCHSFZQNFGYHXLHFGUPWOHAKYZQLZGMJLXFFWATTKLRHRSRBENGFRVVONKLWBNXVUOHCCESWBOINBCHWMTIQFIXLZUNSYTETJQOXRUAMREPDTAQBWPZDVH");
    tmp_msg_0.max_speed = 0.459971929973;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.lat = 0.480834797672;
    tmp_msg_0.lon = 0.00370420524012;
    tmp_msg_0.z = 0.566026222365;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.custom.assign("DWJKGHTJRBNHNIDPDECBSSJIAYMTSNKURWMEK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63087U;
    msg.info.assign("SAOKRZGTXBWZUOUFNSIBNTQTMCRSXEDZAGDFDHUQFEEUWIVARPZWTTBHPWLEEPYICYRQQJTML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.563537327603);
    msg.setSource(6267U);
    msg.setSourceEntity(189U);
    msg.setDestination(14483U);
    msg.setDestinationEntity(148U);
    msg.type = 145U;
    msg.request_id = 9130U;
    msg.command = 158U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 25125U;
    tmp_msg_0.lat = 0.569118467611;
    tmp_msg_0.lon = 0.934580036555;
    tmp_msg_0.z = 0.721773495888;
    tmp_msg_0.z_units = 116U;
    tmp_msg_0.pitch = 0.286368312498;
    tmp_msg_0.amplitude = 0.0781858628159;
    tmp_msg_0.duration = 26616U;
    tmp_msg_0.speed = 0.531905682978;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.radius = 0.348014181133;
    tmp_msg_0.direction = 134U;
    tmp_msg_0.custom.assign("HYEYDGPYBQPKRSFYJLZACVCNJEHPOCOKVURGRAWBHHLZIZZLSWDKPPYADMMHFRPMXIVICEXDRJITDXZRBMBTXZBKGOKMWEARNQEWXSNCGNSCLQOMNUFFMOITUHDIVKKLAOVQWECVERVVFLTYLKRYXYCGBYZZBEACMUTILUWUCMDOUFHXQFIYXBTEIQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27830U;
    msg.info.assign("RVLMEPAYAHBPXMXZNJHGSDJKUFTBEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.641701693341);
    msg.setSource(47992U);
    msg.setSourceEntity(176U);
    msg.setDestination(12928U);
    msg.setDestinationEntity(62U);
    msg.command = 151U;
    msg.entities.assign("UOEEHOWYRXZOIRRDLTNBKMHNGPCODNFDWMVIPDNXFHKYGXTDQIBANNFHTPPVXAQVZLMMNQQJIOYCKHBKOWBPUUAONXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.984970003185);
    msg.setSource(64648U);
    msg.setSourceEntity(126U);
    msg.setDestination(21190U);
    msg.setDestinationEntity(124U);
    msg.command = 181U;
    msg.entities.assign("JQETSLQSKUJZGGGNUZVGMFNIHIDPDZULEWJZTXEAOLWYVFOWUAFYJIKLACPKCLOJGHYQMHDFOOTBTXQMGERPOUXPYDNQVKVNMLJVIWGZSVRNKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.780505737377);
    msg.setSource(44307U);
    msg.setSourceEntity(156U);
    msg.setDestination(44259U);
    msg.setDestinationEntity(239U);
    msg.command = 103U;
    msg.entities.assign("MAJJEUFEZBMCDOQLPTKGXBKWTITDMGKMPQLGVVWASR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.773646739462);
    msg.setSource(21396U);
    msg.setSourceEntity(225U);
    msg.setDestination(43995U);
    msg.setDestinationEntity(135U);
    msg.mcount = 34U;
    msg.mnames.assign("TKQIQLSLVUEESXSFUFNFQTBKYVIQBDDXDSPYBOULAYIKFIZVWCPWXXCWAVENOSXNGGPULBEOCTMTXJAJWUPMSHMHRPLJFHNRAIDPYJIQEPAEMZIXHROAFKTDZOFQBGIAXWZGLVMKJJFOHVKIBTZLGTVCUCLQTTQCCKSWJJMLNWCRDTGOCOQMHNNNZKUJXVY");
    msg.ecount = 181U;
    msg.enames.assign("VYEDOKXNBDJCSQXWIPHBHRLZKYXCQHTEKOGFXDYONUFTUBDIWYCKYWTZYTZFGLJWIOKIAQAFCSNJBSPREUEZTYLNMNAPMMADTLFBGBXUIVOPMZPSOJOIN");
    msg.ccount = 79U;
    msg.cnames.assign("HORLMAUKMDNIWPYPTKYWUG");
    msg.last_error.assign("PNZJMXZSAHMHDMZBDNBFYXESKBVDWTBUPZDKRZVVXVMFZRFGTQHXHIUNXILYHCQOULBQGRHWTOJU");
    msg.last_error_time = 0.113895232859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.756506950976);
    msg.setSource(8195U);
    msg.setSourceEntity(209U);
    msg.setDestination(27273U);
    msg.setDestinationEntity(193U);
    msg.mcount = 208U;
    msg.mnames.assign("WFFUOTFRZLHLZLTLQNOJYRPNFGEWUCGLDZYGGIRVINVOYCXUNMHBDELMXOGZYCJTUBGXULVMIRKCLKMSHSETZECSJKYFBPAWDUHUNBMRXZRABVWYQVGBIPXJLKNQPCRRPEDMXKKWPRODJXYQGOAWITWJVPDYXFMZEEAHOBMEAVJPTZWVQTCDSJHDMSASLAAPNVXNJZUPGHSDISRZTYKCVIKAYNCAKNQQOCTIQF");
    msg.ecount = 155U;
    msg.enames.assign("NKCFTNMHYVNKODPDQHLTYUVMRGUNGLHDUVXYNOZRNMVJCIVWTBWGRLEUKNGRIUCLGIUTKQEYRAWZHTNGQCBKICZPIUJGJ");
    msg.ccount = 235U;
    msg.cnames.assign("JMPCWOVSOIYLUDEPJVHHFJAUAKSOVZIPOKWHLFXQZQLYFKOVKDDEPCXKGSAGZKWEDUOQGIXRLSOFZZNILXHRUGNGCFQGTXWURBYWBLXLIGQCHXJFJOWEMTABCKBHYNYFCIPQFKJXTKBPPELRRRPWTRNOXVBTIMBNFEMBOLKJJEDHYRYGRTST");
    msg.last_error.assign("IQLCVJTHFHCNWEZVSOVNSBJLLACHAERKVSDGHUBUQUSDMIEGZ");
    msg.last_error_time = 0.884578441867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.790309531307);
    msg.setSource(12553U);
    msg.setSourceEntity(197U);
    msg.setDestination(63385U);
    msg.setDestinationEntity(204U);
    msg.mcount = 175U;
    msg.mnames.assign("HPZHJNXNGATTXPWUXNLSSDHPVOSLIEK");
    msg.ecount = 248U;
    msg.enames.assign("ZASWYYHHYSXMGZLVNEJBPVKPCUBNEFFSGEQGTGBXYUJDXMITGRKOFIPVGDSEXEFUUEXYQPMHPUJWNBUSCUDXEQAWRPRQIAWCEAUIVNZMEUZRQVDFQZWKZKQHZTITXTVAMLYBKBRNBXILLWKOZKDLEWLODTAWGN");
    msg.ccount = 225U;
    msg.cnames.assign("THIEVZXWGRFJUQUAVFAEQGLXZTPNJPVXYFQPSOBTVVKBHBFSFZSJHLOQHYUSDXKEDRDIQYKUNFGOZEMFZASXNIIOPUWOTBNXBCTJEPGMAZLHDACJGOUVCHTEHCEYXNPNBDWMLSK");
    msg.last_error.assign("SWJNDYKFVWFMELXOIWIZRYAOQIAJZOCLANLYIYMVAOBSMNTZXIUPULPBUBOUEVKKJHWDTYHCGAHJIGJWWQYZHXZKVFOTFCBXSDTSYFCUDQJQCXXPRQVPXTANVYVVTIGMECEDQLQZIRSOZSO");
    msg.last_error_time = 0.480106855319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.287484557476);
    msg.setSource(49879U);
    msg.setSourceEntity(121U);
    msg.setDestination(2702U);
    msg.setDestinationEntity(152U);
    msg.mask = 218U;
    msg.max_depth = 0.694017077326;
    msg.min_altitude = 0.18630561637;
    msg.max_altitude = 0.684062401695;
    msg.min_speed = 0.78300937503;
    msg.max_speed = 0.910800612566;
    msg.max_vrate = 0.82604733027;
    msg.lat = 0.232275758051;
    msg.lon = 0.676558589115;
    msg.orientation = 0.10643634384;
    msg.width = 0.231273264118;
    msg.length = 0.550245261995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.505806605587);
    msg.setSource(43791U);
    msg.setSourceEntity(124U);
    msg.setDestination(37390U);
    msg.setDestinationEntity(242U);
    msg.mask = 166U;
    msg.max_depth = 0.868521152273;
    msg.min_altitude = 0.870947573292;
    msg.max_altitude = 0.127461453903;
    msg.min_speed = 0.150544064328;
    msg.max_speed = 0.944875806307;
    msg.max_vrate = 0.238960068804;
    msg.lat = 0.0212931828256;
    msg.lon = 0.335274620375;
    msg.orientation = 0.100380713733;
    msg.width = 0.223951447153;
    msg.length = 0.325419146846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.570993855935);
    msg.setSource(32192U);
    msg.setSourceEntity(41U);
    msg.setDestination(14825U);
    msg.setDestinationEntity(143U);
    msg.mask = 65U;
    msg.max_depth = 0.696094309186;
    msg.min_altitude = 0.791853156407;
    msg.max_altitude = 0.387011658277;
    msg.min_speed = 0.327873411495;
    msg.max_speed = 0.447179275715;
    msg.max_vrate = 0.891315087987;
    msg.lat = 0.46157642609;
    msg.lon = 0.50347110134;
    msg.orientation = 0.81541462542;
    msg.width = 0.806330400906;
    msg.length = 0.0714703726221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.401786342075);
    msg.setSource(16197U);
    msg.setSourceEntity(71U);
    msg.setDestination(41918U);
    msg.setDestinationEntity(117U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.660104640002);
    msg.setSource(62690U);
    msg.setSourceEntity(223U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(47U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.37022259331);
    msg.setSource(59657U);
    msg.setSourceEntity(131U);
    msg.setDestination(7005U);
    msg.setDestinationEntity(30U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.153993700514);
    msg.setSource(29744U);
    msg.setSourceEntity(123U);
    msg.setDestination(9488U);
    msg.setDestinationEntity(204U);
    msg.duration = 41461U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.584650179521);
    msg.setSource(62736U);
    msg.setSourceEntity(76U);
    msg.setDestination(6983U);
    msg.setDestinationEntity(86U);
    msg.duration = 11094U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.724551757844);
    msg.setSource(2213U);
    msg.setSourceEntity(31U);
    msg.setDestination(22689U);
    msg.setDestinationEntity(193U);
    msg.duration = 13777U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.722518608775);
    msg.setSource(49134U);
    msg.setSourceEntity(147U);
    msg.setDestination(59987U);
    msg.setDestinationEntity(102U);
    msg.enable = 56U;
    msg.mask = 265924069U;
    msg.scope_ref = 2799802005U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.960173190023);
    msg.setSource(31512U);
    msg.setSourceEntity(201U);
    msg.setDestination(28026U);
    msg.setDestinationEntity(203U);
    msg.enable = 153U;
    msg.mask = 391741802U;
    msg.scope_ref = 4006738897U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.984286448764);
    msg.setSource(9751U);
    msg.setSourceEntity(229U);
    msg.setDestination(55359U);
    msg.setDestinationEntity(212U);
    msg.enable = 110U;
    msg.mask = 3687753473U;
    msg.scope_ref = 3759373435U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.603262779793);
    msg.setSource(32552U);
    msg.setSourceEntity(188U);
    msg.setDestination(29724U);
    msg.setDestinationEntity(181U);
    msg.medium = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.564180761975);
    msg.setSource(27005U);
    msg.setSourceEntity(57U);
    msg.setDestination(45590U);
    msg.setDestinationEntity(160U);
    msg.medium = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.026843942972);
    msg.setSource(22881U);
    msg.setSourceEntity(159U);
    msg.setDestination(24622U);
    msg.setDestinationEntity(189U);
    msg.medium = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.793001868372);
    msg.setSource(36296U);
    msg.setSourceEntity(240U);
    msg.setDestination(14800U);
    msg.setDestinationEntity(239U);
    msg.value = 0.748005410283;
    msg.type = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.104352799766);
    msg.setSource(33394U);
    msg.setSourceEntity(70U);
    msg.setDestination(42436U);
    msg.setDestinationEntity(222U);
    msg.value = 0.584617188296;
    msg.type = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.298371796375);
    msg.setSource(45668U);
    msg.setSourceEntity(104U);
    msg.setDestination(10586U);
    msg.setDestinationEntity(246U);
    msg.value = 0.903664603804;
    msg.type = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.581583851317);
    msg.setSource(17848U);
    msg.setSourceEntity(91U);
    msg.setDestination(23011U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.962325821823;
    msg.converg = 0.0981437661928;
    msg.turbulence = 0.851026699076;
    msg.possimmon = 19U;
    msg.commmon = 16U;
    msg.convergmon = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.0962055818266);
    msg.setSource(9678U);
    msg.setSourceEntity(91U);
    msg.setDestination(52679U);
    msg.setDestinationEntity(144U);
    msg.possimerr = 0.0635703968447;
    msg.converg = 0.919521344541;
    msg.turbulence = 0.53347340238;
    msg.possimmon = 188U;
    msg.commmon = 62U;
    msg.convergmon = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.0802742211788);
    msg.setSource(30306U);
    msg.setSourceEntity(133U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(171U);
    msg.possimerr = 0.588411301112;
    msg.converg = 0.847781644774;
    msg.turbulence = 0.637679776085;
    msg.possimmon = 189U;
    msg.commmon = 250U;
    msg.convergmon = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.603808974937);
    msg.setSource(49799U);
    msg.setSourceEntity(7U);
    msg.setDestination(53306U);
    msg.setDestinationEntity(48U);
    msg.autonomy = 183U;
    msg.mode.assign("IAFYZDNQCJUYFSVFSZIQSHPGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.568175861116);
    msg.setSource(59134U);
    msg.setSourceEntity(179U);
    msg.setDestination(45393U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 151U;
    msg.mode.assign("RDGRQITDBWRSTHUQOJDWBKLEZWNOAEGGUCAMCFEQAQEJAEUBTTBPDFSGMWFVQOEBOTZDOLIPYUIGSLDYBADYBFHLZTJGYHHVHVYJKCRKJLORXEFHDUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.0864469921805);
    msg.setSource(30454U);
    msg.setSourceEntity(144U);
    msg.setDestination(41161U);
    msg.setDestinationEntity(186U);
    msg.autonomy = 64U;
    msg.mode.assign("HDCOYWMJHOPQOQHAURNJOVLKJTRPCCJBPPEZXYGSQIZWMSPZJNEUOXLEZEYMUFBBKIYZVHWJXRSLLCKDLMMKQTISEFWKCYJCYXCDNWUBQOGWEIYXILBADFSVBVKAKEFGQLOTNIRASUANTUBPNCHHOMDSRQBOQTXUHHHIFXMKRDHEVNNDFDTJPSDVTPNIXTOFGLWFUVDAZRVZXQJVMYUGTJLXGMKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.968330373411);
    msg.setSource(55642U);
    msg.setSourceEntity(184U);
    msg.setDestination(43146U);
    msg.setDestinationEntity(250U);
    msg.type = 210U;
    msg.op = 171U;
    msg.possimerr = 0.760299692612;
    msg.converg = 0.263580380252;
    msg.turbulence = 0.0506531756142;
    msg.possimmon = 138U;
    msg.commmon = 147U;
    msg.convergmon = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.911482446839);
    msg.setSource(48154U);
    msg.setSourceEntity(228U);
    msg.setDestination(21138U);
    msg.setDestinationEntity(57U);
    msg.type = 2U;
    msg.op = 80U;
    msg.possimerr = 0.713543100736;
    msg.converg = 0.796488086021;
    msg.turbulence = 0.248540743995;
    msg.possimmon = 175U;
    msg.commmon = 88U;
    msg.convergmon = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.488864028068);
    msg.setSource(13579U);
    msg.setSourceEntity(136U);
    msg.setDestination(7639U);
    msg.setDestinationEntity(172U);
    msg.type = 41U;
    msg.op = 31U;
    msg.possimerr = 0.583546101207;
    msg.converg = 0.094881789385;
    msg.turbulence = 0.257893319222;
    msg.possimmon = 170U;
    msg.commmon = 213U;
    msg.convergmon = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.0428840308471);
    msg.setSource(36566U);
    msg.setSourceEntity(19U);
    msg.setDestination(53481U);
    msg.setDestinationEntity(162U);
    msg.op = 132U;
    msg.comm_interface = 171U;
    msg.period = 4408U;
    msg.sys_dst.assign("OZVITEGKZGOTJYOMGCRGBRZFSUYIWFQMJYPFWXFDAZXQDXZTSWHYFQXQKVKKFENZXMPWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.760685978896);
    msg.setSource(49952U);
    msg.setSourceEntity(71U);
    msg.setDestination(37469U);
    msg.setDestinationEntity(140U);
    msg.op = 173U;
    msg.comm_interface = 166U;
    msg.period = 19871U;
    msg.sys_dst.assign("OAFCIGQXECMMKGYVRCQQNUUOWDNCADSPDMOLMEEDIIQFLYORKMZZZAKLFOXLNGENSSOUPJREUZLBVDZWZLORARQPKTQCVSHHTQYXEMGYILHTEPYGIMTMWHLNFGITPKOKPYVAWVVQHJSNBGJWKBRCSWGPJDKIBSHTJIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.208738074475);
    msg.setSource(44811U);
    msg.setSourceEntity(144U);
    msg.setDestination(24291U);
    msg.setDestinationEntity(175U);
    msg.op = 30U;
    msg.comm_interface = 244U;
    msg.period = 56475U;
    msg.sys_dst.assign("JOOZXMXFSLTCEOVVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.964566685174);
    msg.setSource(39126U);
    msg.setSourceEntity(133U);
    msg.setDestination(13110U);
    msg.setDestinationEntity(165U);
    msg.stime = 3461518467U;
    msg.latitude = 0.395886252209;
    msg.longitude = 0.566558441855;
    msg.altitude = 3623U;
    msg.depth = 22671U;
    msg.heading = 31279U;
    msg.speed = 3786;
    msg.fuel = 84;
    msg.exec_state = 46;
    msg.plan_checksum = 28647U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.651987343696);
    msg.setSource(62661U);
    msg.setSourceEntity(143U);
    msg.setDestination(26781U);
    msg.setDestinationEntity(72U);
    msg.stime = 1455924482U;
    msg.latitude = 0.621963520088;
    msg.longitude = 0.444076191384;
    msg.altitude = 41905U;
    msg.depth = 14106U;
    msg.heading = 14658U;
    msg.speed = -3493;
    msg.fuel = -63;
    msg.exec_state = 13;
    msg.plan_checksum = 2073U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.310348901505);
    msg.setSource(21162U);
    msg.setSourceEntity(69U);
    msg.setDestination(62953U);
    msg.setDestinationEntity(172U);
    msg.stime = 4114535081U;
    msg.latitude = 0.531171082794;
    msg.longitude = 0.39124036521;
    msg.altitude = 28648U;
    msg.depth = 60779U;
    msg.heading = 39578U;
    msg.speed = -26274;
    msg.fuel = 115;
    msg.exec_state = -3;
    msg.plan_checksum = 60148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.154131770772);
    msg.setSource(33067U);
    msg.setSourceEntity(11U);
    msg.setDestination(62557U);
    msg.setDestinationEntity(117U);
    msg.req_id = 29123U;
    msg.comm_mean = 45U;
    msg.destination.assign("NETBWJMHKNXJREGAQTGJIYKILVANLZYDPTXFNCFGXELPAXOQILKSQJFWRVKWADSHGKVXQBLZLWDYNVMWKFBUQASOBDGEJAFIZFJFTCXXYWNOCMROBEUOCOCKIZMTJYXSKDPJMHZLXHWYPVDSDPACMWTEQZOGSPOZZRNBBOAFOHUCJYGVKGZHWQTRKWAEMNTQQTXPSPQAUIYYBDGS");
    msg.deadline = 0.964517424436;
    msg.range = 0.29558968145;
    msg.data_mode = 108U;
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 149U;
    tmp_msg_0.file.assign("DOVLZTXHHFCKETPROGIBNUQOMXTFRYNBWSGVWJCIRCHVPXBJKJOESMUCGDXJWKDHJTOYVVVOUADOZWPDRNIWSZAPFBIQZQNINEESBSKLLFQTHXIYNMAIEMXRAOVXBQETCGMPZTZVJBLKTMCHVUJPAFD");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MOCSXDTWUIBHEBKLNUJDNRBMFELAJNZZFGSVYRHAIYEDYOHQWEEUCTBQNPJDLLFFGCXVCYMUGKYMPOIGJKXGKHNAXEVSJMOHKUSFNWFGNPITIWTVBUCOWIOYOKSPKLWCDQQTCCAFVQETWIYPANYHWJXAZLLGMQRTIGXTESXXZLJCDBVSPNRJZOGLRZLSRFYSDMPDZKYMVBIOUQVREPZAIRXSADDAHBPKBOXVJUZUHWTQMERHPT");
    const char tmp_msg_1[] = {-77, 19, 99, 94, -76, 39, 54, 81, -69, 95, 51, 35, 57, 81, -76, -45, 56, -69, 10, -31, -23, -3, -95, -114, 67, -35, 48, -93, -23, -108, 107, 83, 99, 44, 28, -54, -23, 26, 16, 70, 105, 95, -47, -12, -83, 40, -72, -25, 70, -110, 9, -8, -98, -104, -65, 67, -113, -28, 5, 67, 72, 90, 104, 87, -100, 87, 55, 21, -24, 105, 69, -5, -27, -40, 54, 31, 103, 5, 122, -65, 47, -48, 27, 71, -72, 26, -3, 22, -16, 6, 1, -120, 72, 47, 124, -12, 25, -60, 62, 119, 109, 118, -85, 65, -22, -71, 75, 73, -68, -73, -17, 115};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.700912097779);
    msg.setSource(23341U);
    msg.setSourceEntity(188U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(207U);
    msg.req_id = 42327U;
    msg.comm_mean = 229U;
    msg.destination.assign("WCWCLXFFEMRZDIHHEDQLPJXCELNZPFFJINRPYMRZYWMKVNXILBLTKYBISNRBBQKYKBFJXUFOOCWWUTTCVMQPOSNEJPBFVBHDMUCVTIGKPYZCZODRPIAYXWTISNEJAGJQJBWPLZNGQMEZGCEIOYHEOUSYTAFMSQUH");
    msg.deadline = 0.373310649502;
    msg.range = 0.90963439974;
    msg.data_mode = 43U;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 80U;
    tmp_msg_0.status = 83U;
    tmp_msg_0.info.assign("SRWMGTYOWWBNIWHQJHDRLBDUGRSDJMPTLRKANNOSDIAHGYCWYVANXIPMXGJKDO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TZKBBTWRXLUAFPNUWLVKTOZVCRSREBEFYQCVZAWCPQXJESVHNTOFPXBNVUCYLSLOIBNXDYIJOUHMFD");
    const char tmp_msg_1[] = {3, -2, -82, -95, 16, 35, 16, -88, 77, 17, -95, 34, -116, -69, 66, 75, -88, 85, -104, -120, 4, 63, 54, -91, 108, 94, 66, 44, -13, -16, -82, 75, 102, 92, 107, -112, -108, -69, 86, 10, 115, 53};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.748937051913);
    msg.setSource(62530U);
    msg.setSourceEntity(52U);
    msg.setDestination(29610U);
    msg.setDestinationEntity(237U);
    msg.req_id = 26796U;
    msg.comm_mean = 133U;
    msg.destination.assign("EUXRWHDAOFKPVUBSXRWVBJEABYODABCVPECRFSMDICHJPXJNQWHPNQXCNHIEKWARJVDZSAFSIIZLFYBGPTVPMJANGEOQIFMNRQADFGLNBGHOVKLELOYOYWLGQZEQMLKYSCCPDKUUB");
    msg.deadline = 0.112284548913;
    msg.range = 0.207349845416;
    msg.data_mode = 196U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.736525338782;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JKVEKZCQMSFZOQULPYNPRNCUSAIIENFBSNWHMIRTSWJCYMPYGMMONODDKWIQVYIMEGRAPCOLASIRBHZBZQGTLHNWSXNBJJZEWRRGBOLYXUBNCXAVXQCVTIKUWMINDLHGRQKFGXVLJSQPJULETDDWBZYGAHTXSUZVBAFZQSFETWWBJADPZLOTEAPOERPFCB");
    const char tmp_msg_1[] = {18, 73, 104, 76, 114, -2, 118, 113, 14, 117, -48, 9, -29, 119, 27, 31, -21, 5, -119, -85, 9, 107, 43, 49, -80, 85, 1, 30, 13, 35, -73, -104, -75, 43, -106, -75, 18, -106, -25, -83, -109, -85, 97, -9, -105, -59, -126, -121, -43, 12, 111, -104, 10, -32, -44, 106, 70, -47, 103, 106, 10, -81, 76, 45, -72, -22, -66, -109, -48, -56, 28, -20, -9, 91, -99, 96, 96, 21, -11, -27, 119, 100, 40, -67, -59, 48, -59, -105, 126, -6, -51, 39, -110, -18, -121, -74, -106, -118, -25, 32, -22, 66, 102, 6, -24, 31, -27, 40, 27, 43, -71, -107, -47, 120, -35, 39, 38, 41, 65, -22, -79, -40, 23, -8, 49, 38, -98, 89, -90, -30, -59, 36, 49, 33, 44, 117, -85, 9, 78, -82, 101, -101, 83, 107, 35, -9, -113, -50, -67, 78, 16, 35, -76, -112, -3, -1, 76, -120};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.900116579836);
    msg.setSource(60491U);
    msg.setSourceEntity(73U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(247U);
    msg.req_id = 30087U;
    msg.status = 208U;
    msg.range = 0.46547144362;
    msg.info.assign("XQQCNSBJBEIOKHBDWYFMXFLYCUBNDZZIXSAULAEAEVQPMZWGAWKOVGWFCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.695373485148);
    msg.setSource(64100U);
    msg.setSourceEntity(122U);
    msg.setDestination(35962U);
    msg.setDestinationEntity(99U);
    msg.req_id = 32849U;
    msg.status = 52U;
    msg.range = 0.405673020983;
    msg.info.assign("KZYSMEGOFPKBJVCDPMWCECVPBUOCUYSNABHGHMLHZRMOICWARTSAMURTSXJJYQRZTTLRAGMQNZJFLZFHRBSPGVSLXEBOHWKEOAVEOIKQVKFYUUBONUNUKMGBIGLNPYJADJTRMQRENEJGLVKAIQHYQIDZWCSGOAJXPZTYIQXSODOXPUBWFWFCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.222913169544);
    msg.setSource(34186U);
    msg.setSourceEntity(122U);
    msg.setDestination(60700U);
    msg.setDestinationEntity(0U);
    msg.req_id = 2778U;
    msg.status = 86U;
    msg.range = 0.346092290734;
    msg.info.assign("YXLWHNVYKQQVOVRZVFMXAMRIUITKYOOHQHPWCIOUSUBEQNFJMIBXXDSJMFJRISYGWXBLQICGAPYGXEDKMPHTASJAWWUCTPYZULRDRZJNJTUGKXFNHNATPGKLFMIKTRZBERTNDRADKOEILTOJPDEEPVJGZBACQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.0806016628169);
    msg.setSource(15459U);
    msg.setSourceEntity(124U);
    msg.setDestination(40893U);
    msg.setDestinationEntity(246U);
    msg.req_id = 6639U;
    msg.destination.assign("VOMODHQZPNHJQITFMTBKAMVNGSELYGTUVPBUIANBGLXLWCEASKJK");
    msg.timeout = 0.0989348683997;
    msg.sms_text.assign("KHFQXBYOGMMNPGCFVEWMKWJDESXFKXYHSZIAPCSBCGHBGHTEDKTCXTRKPURIPEXVBNJUPOZEASHIVRWEIZOKDBMXWCEGKMIDQUTQBHWNIALOCLBAIVCYTHYXQFQABECMDIVGSYAWUZALZRZYJZYKNJPJGNSYJIWLCXRHHQNBMGUFIBGNVAFFUTUDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.0785355643425);
    msg.setSource(64194U);
    msg.setSourceEntity(122U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(226U);
    msg.req_id = 17927U;
    msg.destination.assign("CJBACUZVJLESCFWCLXSRDPUMTLGBDIAAOLNQIDXONKERKVERDYSBGTHUCBLFLDZPCUMUCMAWVPNPSVTYQDHIMIUBBWJJZIXYXGQPOLXGXXYHOBNHHJEFQDOQQRZJY");
    msg.timeout = 0.115659336031;
    msg.sms_text.assign("MXRYSJKLOWSOZGXIMVUFHWDSCYPECFWDRQHZOAZSMWFPJTRTXUZHTMRJUXIIPNISHYYDPRLIFATJENBEDNWWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.203256356846);
    msg.setSource(16103U);
    msg.setSourceEntity(190U);
    msg.setDestination(21602U);
    msg.setDestinationEntity(9U);
    msg.req_id = 36198U;
    msg.destination.assign("QZPZERDQWAMNMTTXBPGATNCVIYMWZBJHJLUTMCFQQOHXEGAOCJOHRPGFOPEDNFXURIUOWDUHDWRVBQMMIUPCBGLDFESHVSPDYZBLEYZDWHQKMXYFHXWZLGGIUJSKQCSMMCNFOQFKLBZEOCWWOVGLDWLAQJOAECFKVLTVXCGHNNTUSTBYINRQAKAWYYMJSBGVLDXRDINEKHVL");
    msg.timeout = 0.495665961565;
    msg.sms_text.assign("ZRESNDNYAOBJKWAXYFWWUOE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.478752810567);
    msg.setSource(21202U);
    msg.setSourceEntity(171U);
    msg.setDestination(20099U);
    msg.setDestinationEntity(63U);
    msg.req_id = 10037U;
    msg.status = 233U;
    msg.info.assign("NULAJKUASCHMDCNEZKLLWXDALRIQFRBDXOFGXEWEFOVJVTNAKUQSYGUYXQGPPIKYIMWEWFJONEBYHTHKVISUOHPIDFJDYUOSBWQLBXFOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.566305501835);
    msg.setSource(9677U);
    msg.setSourceEntity(13U);
    msg.setDestination(25573U);
    msg.setDestinationEntity(195U);
    msg.req_id = 40973U;
    msg.status = 57U;
    msg.info.assign("CYEDQWKRIPTOPREMBIEHWYZGDUOXQOXJDMPFGRQDYQLOSELCEBVQRZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.244985210106);
    msg.setSource(9155U);
    msg.setSourceEntity(20U);
    msg.setDestination(53318U);
    msg.setDestinationEntity(201U);
    msg.req_id = 26511U;
    msg.status = 205U;
    msg.info.assign("TPOIJNTMGQIOFWIIDFVWYMRKZDDDCUQYQIONSHXLLHITIGGFEVQONPQQJBRUARAHOYWQLWPWGMJVXFUORDLYJIRXFNHKZSKOYLXKLFBGJFESWCVPEMZCYDATKYTYMPNZGTAFCVRHCFKCXJUPBBCUKVWKMIPEJUUWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.145563896212);
    msg.setSource(9017U);
    msg.setSourceEntity(135U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(170U);
    msg.state = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.843875409535);
    msg.setSource(36796U);
    msg.setSourceEntity(222U);
    msg.setDestination(15517U);
    msg.setDestinationEntity(208U);
    msg.state = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.0418460722604);
    msg.setSource(29180U);
    msg.setSourceEntity(186U);
    msg.setDestination(6903U);
    msg.setDestinationEntity(210U);
    msg.state = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.717498607441);
    msg.setSource(9883U);
    msg.setSourceEntity(238U);
    msg.setDestination(56071U);
    msg.setDestinationEntity(64U);
    msg.state = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.503113564376);
    msg.setSource(32906U);
    msg.setSourceEntity(57U);
    msg.setDestination(20201U);
    msg.setDestinationEntity(77U);
    msg.state = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.372951111629);
    msg.setSource(28937U);
    msg.setSourceEntity(200U);
    msg.setDestination(13528U);
    msg.setDestinationEntity(13U);
    msg.state = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.549948682672);
    msg.setSource(24806U);
    msg.setSourceEntity(158U);
    msg.setDestination(16734U);
    msg.setDestinationEntity(35U);
    msg.req_id = 49909U;
    msg.destination.assign("MDVHHENIQTNFHYZJAWNICRQLGFHNXZZQHRQGCZDBMNKORPRXKLVBFNYEUELNOHOCUGBEJHZCAAWDPMGDPSPPYKDQPYHSAULXJDXPELBITKIQYWOGPJFRMBQBTVTTFGBEKJOOLRHCLKIOGXU");
    msg.timeout = 0.809646329205;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 25U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.793508334563);
    msg.setSource(57581U);
    msg.setSourceEntity(22U);
    msg.setDestination(34650U);
    msg.setDestinationEntity(172U);
    msg.req_id = 15630U;
    msg.destination.assign("MAEHESWWBNCQNGITAYQLBYWYXKGQSGVNPDRVEUNGFNRBXBHOEZSWNRRGCKXPAOFHTRTYOERFQBZZFBQQUGLMTIPPPLWFDVCWFCYDDFWRYKNJVXPLOQRDNIJFALLZAJXESHJEKHSOIGYPMZTDZZLNHUYTMWVEWUTHAKWGTINIFQHJYMTIIAACUJDKBKLMMSVLOOJ");
    msg.timeout = 0.75434545165;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 21243U;
    tmp_msg_0.status = 173U;
    tmp_msg_0.info.assign("WJVAAUSGALQVEBUWUXIZPACFEYKEZFYHXRROOLLZMBWWMIXJOSQRPLRGXFFEKJORIGIBRNBORXOJUNZVFTQQSJXDZKTLVETYBBTLDODZIPXQCWATA");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.196068062509);
    msg.setSource(58888U);
    msg.setSourceEntity(122U);
    msg.setDestination(47380U);
    msg.setDestinationEntity(36U);
    msg.req_id = 25945U;
    msg.destination.assign("FLWZCKNOQNEFKMCUIGJNIUHWNZJCTFLNKJQGDLATSYLLXAWBZSRHKUCERJDSMXGYIXSNBMIIFHAUEHSDHBRMNNJDSFWEEMKZTXREBZQMIYAZYGQPUCODFDNHYHKWJWRITEEOAOUFSCIBBEGSWPRFQCXTOFDKGGNMSPTDOBH");
    msg.timeout = 0.979310948158;
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 105U;
    tmp_msg_0.comm_interface = 14393U;
    tmp_msg_0.model = 1782U;
    tmp_msg_0.list.assign("YASMPVCOBDQWSHPBXCAUXYAJTYNKAOJEXZKOLFZIIJYYNSBGKYTHCBXHGNAURPSGJBOY");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.00806895624499);
    msg.setSource(50161U);
    msg.setSourceEntity(252U);
    msg.setDestination(18393U);
    msg.setDestinationEntity(187U);
    msg.req_id = 31462U;
    msg.status = 176U;
    msg.info.assign("KXYDFTAENIXCBKABYGWUSPZJILJQNGTVDALODYSYHWOPBVNQBCUTUTAPCGUWGRNMBAQBURGELQSXGPNJSVYVAGNMFOMAPKRKRLQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.692650558037);
    msg.setSource(15744U);
    msg.setSourceEntity(56U);
    msg.setDestination(41211U);
    msg.setDestinationEntity(217U);
    msg.req_id = 38238U;
    msg.status = 120U;
    msg.info.assign("RCCOGWEROSUGXPTZOOFDCGCDEGRQJINEODHAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.36364803601);
    msg.setSource(6650U);
    msg.setSourceEntity(160U);
    msg.setDestination(8039U);
    msg.setDestinationEntity(165U);
    msg.req_id = 57672U;
    msg.status = 79U;
    msg.info.assign("KGAPZJPFKMEMVTESUWQDKXBHQXEVERLVGOTHNYBXIBZCZJGMMLGKNPIRSEDXVHCXSJOOALBEXHPLWBDOEWXYXQDNNCOMGHXNDKTFGICSFVWCLYMYQWLQQVSJFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.0869327051326);
    msg.setSource(2858U);
    msg.setSourceEntity(249U);
    msg.setDestination(44090U);
    msg.setDestinationEntity(201U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.614175738952);
    msg.setSource(44707U);
    msg.setSourceEntity(64U);
    msg.setDestination(63462U);
    msg.setDestinationEntity(155U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.964091759938);
    msg.setSource(3206U);
    msg.setSourceEntity(219U);
    msg.setDestination(62511U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.245672454455);
    msg.setSource(11792U);
    msg.setSourceEntity(241U);
    msg.setDestination(32130U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("FMXVPVEZJILTAHWMTBDDLGQJKORXATKTXUHICFNIZQVMBLYACQYKGWEJLGLFISEMDBOBWBOFUWLDLGUOSODECFTEZHISGSZSRZNUWGAYSHWNJNFYJCRETHKCXPPKMBXPCHVSEKUVNVZQGNHYXBFNTUPOIDUQGCZHRZPWXAAYQVGHDUQPGEMDWVEOAJLWTNAWFFIRDMKJXOMMDMJYKSTQISZRZCPQBYOCAUNYBRERRYF");
    msg.description.assign("QMDJHZWJTVCSJZZRBNVFGCIFQWQ");
    msg.vnamespace.assign("IQZNGSILLNOINGBDNEUGQRKEJBGNXRSSKCZYDXEZI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WBDHNWNKWUVKLGSHMITTEZCWMAISHOEQXSMFFRNCUGSIOPDYSKYBJMSQHNGTOETTWVZMYXTKBFQPPHVQJMACPHYKVCUXRNDZXDREECFLLUPJNHCDTJKDGWLQSFIYRLZPNYPFMAUPEVVOIGHZGTGZDUBLAQCVOZXJCABLMUXIRBFUXWNFSIQQBUOLVV");
    tmp_msg_0.value.assign("AQMURUFWDQUMWATZIIOWYGDLOEJDMKEZSPZNKBCZFNGPQUUSQKYHSXTVOACLLQUDZNZUOSNBEIGOBF");
    tmp_msg_0.type = 124U;
    tmp_msg_0.access = 137U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LVSZSUYQLQUZWWFNJRWTBJIFJXGTAOFKWOMWBGMXHHUACPBXJTDHGDDLENVWEFBEMRIYORPQDNOIIVEAJHVSMIVRGNCNFOXGAWRQPDITSFLHZYKCPKRLGJXMPHEHCNALDGMGEYTEFZVUYTQGMKHYMNLQCGEBABJSNRYUXTEUTKSBYVQBIMSYURNAVZATLRNPQZFPKPXDIODL");
    IMC::FormationState tmp_msg_1;
    tmp_msg_1.type = 115U;
    tmp_msg_1.op = 222U;
    tmp_msg_1.possimerr = 0.184554984265;
    tmp_msg_1.converg = 0.269852191063;
    tmp_msg_1.turbulence = 0.664351413157;
    tmp_msg_1.possimmon = 93U;
    tmp_msg_1.commmon = 81U;
    tmp_msg_1.convergmon = 24U;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.576027921141);
    msg.setSource(38460U);
    msg.setSourceEntity(205U);
    msg.setDestination(11272U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("MQTQSEFLRTJTDZAIHKYKILEXJQFFVUQFKESDTBYZPLXUHDFKLVTWZMQFIXOJLBCQMPGEPIARJSBQFDFNDIHDPPAWRBWNRBKNCKYEACEMJOCGZXWIUSPPHDCPLCCIJUAUUSHGHOUJDWIWVSCMLRLVNGOMERIWAYHGWUVCELPAVHAYBBATGOZXWGYNNAVKKDFUGXKIZMRKSJEXM");
    msg.description.assign("HZRFLKVWWFIZBYGOXNFSUXHCKRJGVSBRPSACOTKLYAXUQNQZKZTJNXMIXADTXOKYVTEYXZCGNLDWKEWWVUVYYHLEGHKIMBVHLQSJCBOPGGDKGAZLJJRUESRGKMIAOFFUCHQYFTJMJXPAHQMWXNQEDYEWFRAEDTBWHBYNMBJPJEDZBEANVUZQOXJQIUSSLQHBPGMUCCCTVPKYMIONGNDTUOZDD");
    msg.vnamespace.assign("HUWTDMGXQRJUXNFEBBLUJSYYPOKZPPZTYVZWNDYXBLGYPEWDUTRCQUBPHRLAOWRKMKFINZERVNUTRMDHRWAOXPFLQKEVCKFOJTDZYNAHIBUHCUHQZHWSZLGCXKCESKQCTSXWKGDTVMIQEGICJIGMYSVVIAUAONAXJBJZHMCYQOLCBPGNBAOISRTMLESQXGTFDDVFNUMWWJIDOHZFKYOGIAFSVPXOPEFKDJLPIMCGXQFNZVAA");
    msg.start_man_id.assign("ISBHMKOTKXNRZFKSEQZFYAJIOPQNGIZYNNXMKOWRFZGARAEJNFLIUIVDAVKCNWBSGQQSOKBPOHGRVETPWXCYWVTJMNFADKQHEYYDDJULTWYFDACEJZXGVCNBCELCJHGBBXCFVIGCPCWPTFKLBZMUOOMISXUHSSLAROWJEXIJHBR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TIZWRVSGOBSTDGUVVPHIQMLJFYHIQZJUPFEJOKVAEXUMWQLKSRTEYWKGLCVEFP");
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0269034874298;
    tmp_tmp_msg_0_0.lon = 0.0358186030271;
    tmp_tmp_msg_0_0.z = 0.506207428825;
    tmp_tmp_msg_0_0.z_units = 201U;
    tmp_tmp_msg_0_0.speed = 0.0197449520825;
    tmp_tmp_msg_0_0.speed_units = 161U;
    tmp_tmp_msg_0_0.abort_z = 0.602773239616;
    tmp_tmp_msg_0_0.bearing = 0.379178511037;
    tmp_tmp_msg_0_0.glide_slope = 216U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.55763784497;
    tmp_tmp_msg_0_0.custom.assign("HCLWYPFPRUXHEUOXWCZASTVJIELKBPKLROHTVAWSCVVBKJKPYQFNWBGFHRAXFRAHXEYIFQWQBYACJQFVSLYNKLHCGCOY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RXFCHYPEFOGISMJFIMYLKLOGRESPCOJQDKILUCRZMAOWVELQYPATPDIFVWTLXBSHUGFRXGJJKHIQJKDEOBYTXZKWCNBJVJFLAMXOZKGSV");
    tmp_msg_1.dest_man.assign("ANGXLPHWETEJNUDZKKZBMMBGQWHXZQBJQPPSSVXRAL");
    tmp_msg_1.conditions.assign("IDOHOQYRLFGEHBWDHXDPQFKHUJTQRZEOYCZRGDLVSMJKNRMWSVPJQWIZSYSUTLXFAPXRLEDPKQIXKISIYLCOQIYYTBCNBYHFMZVEDQAGOTXOCVSLUTTJNKKUTRIEMUPBEXCRRCFGZQJOIMMSLTSCVNFGPPFKGEWMGKSWUHRXPWHUZJZZNUBBAYXWNNEJLQGEJ");
    IMC::LblConfig tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 121U;
    IMC::LblBeacon tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.beacon.assign("IZLTMBBGHKBFXMCVSPGAKAESUNFUKWYDSZHGLTDURNSXWGZYOEVXZPKIRNQMRNBGIDETIDBNJPVMMWYJCMROJHPYQJRLYZZYQESJOIMWKZIBXLJPHKEAKLB");
    tmp_tmp_tmp_msg_1_0_0.lat = 0.664849440388;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.916036491013;
    tmp_tmp_tmp_msg_1_0_0.depth = 0.718915697682;
    tmp_tmp_tmp_msg_1_0_0.query_channel = 241U;
    tmp_tmp_tmp_msg_1_0_0.reply_channel = 198U;
    tmp_tmp_tmp_msg_1_0_0.transponder_delay = 66U;
    tmp_tmp_msg_1_0.beacons.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.365648884963);
    msg.setSource(62500U);
    msg.setSourceEntity(187U);
    msg.setDestination(44400U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("YNNMLPYNGWXEDPXLPDMEZKGOQVCUAJMPQENWPFTAFKYTPZQCZBXYXCTTCUNAHUVKKVHRQVMXLQDGJOPDMLKSXRTOLSFDSUTOMZFYFSKIKORZYIGWCJUIYICSSTIUBAHAUCVNZKIBUEJWYATIHFOQDWNGREDHNECIBMGEEBLVORLHPJWJCXVWCGQQSFIARLBMSQUXGALZMIXEHAZRRURKWJOB");
    msg.description.assign("GAWPPINYTSDYYQXGLAFCUZVXHJNBIPPIDJHUQUCQDLNZHIKQBRXJIWSPTEJNBFCGPKH");
    msg.vnamespace.assign("SAQULXHOPUAMMXQSPDSTILZPORKTTZVLYDOWUGQDRUILEKADLGSPBKABXXDIKCFZSNOQINGCEZMOQLBUHJIJRWRKDFIPTVVQICPRFMWWKBFSUDGSHHVWRXLEXNJMJZTSNUJEZFMJZUCFWVYAXXDEWYNOTYHJYBDVPMKMVRGUQNLSGHXUPAEYRECYYQW");
    msg.start_man_id.assign("GBZHFVOWILBACUXFUHIAILNLZCLKMXMMEVKEESLLNBMBRKHPTQSYOTKJDGZXOCIVCHGJJLUAEGIVTCQMKPJZMCDYOCRIDZNTWXYHQLVAKWRGYNYSHHRICYJRFJGPFSUYAXTSRSQCRWPQNTNHEEXXZFZTEGTKWBGMAVAWHQNSFDMRZKYWPNKITPJYUUUKQXIJJUDMNXOBVVSROWEDEXWOQIPACGBTDOSMP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VTTAROSVTXVLYPCFYSRAYLYEKGTBDJYYAHCOFARJKEGJHSNGDFSTUTIWQUAHQHRZQXOAHWWTUXDMQDSDSCISNSAWBETD");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("JQIWCNQXGRZUIZPRBYJHMOOIHJQUNIVVUINHLNFFRYPZQECPDOLYRKBZMVQJEZVMKIAQLVNZMJSHJATCIXFJGGRNTDXMNSHSJREXWMLTWFBRSMWHATDBSGOWCEGWCPKLXGCSPVSFZYLZQIFUCQUZDYIHAYSTWXCKHCEFVBBDUPPWYXKTBL");
    tmp_tmp_msg_0_0.formation_name.assign("KGXOWBUHYDPIRWWVTPLCZYQCUAUVOZAFCMGVGQYUWMRSOSLAKIAKBRKAIUDJVLWDRDKIHYYRBIENEYFGNPBLKJVHTKNMIRZTFEOOEASBTNGELXZDPJXFAQBBGSEOOWYMOJPIMSZTSFVRGXW");
    tmp_tmp_msg_0_0.plan_id.assign("STAGZINVOLWXBPACKJYAUAZVGDZHPFCWWSRJVLHPYXXEBXKIKEMDEAPEICMZJXIMUUOCEYNOQKSTCZJXFMSIISEQNFAHXORAHRFZLHVVFOUBHFMLNAZQDCBPBQBIYSKYTTNGGPYRDSRDYDFCXYZBILRHMOHKUTVEOFTFUREXK");
    tmp_tmp_msg_0_0.description.assign("VMUDLXTWRMYKNQNBHQRJJKZWIRVIPPMSRWJYXSVZMOBQAGYHAUVZFHQDBUFYLGSDLGSXVMXXBQLRCSTKDGWOQMXJXTZWWGKNKSYRZBYNSEWQAAFGCSVELYCUAKLETUDLPRZNCPASOHOPNJRABUMNOKIEZEKGODIMQPAEMKPTYXOKCAJOFC");
    tmp_tmp_msg_0_0.leader_speed = 0.933256837227;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.553506157588;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.367022529388;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.703144983607;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 60126U;
    tmp_tmp_msg_0_0.converg_max = 0.612712513873;
    tmp_tmp_msg_0_0.converg_timeout = 34247U;
    tmp_tmp_msg_0_0.comms_timeout = 22479U;
    tmp_tmp_msg_0_0.turb_lim = 0.19741932308;
    tmp_tmp_msg_0_0.custom.assign("XFZWBREYDUHTAETEUWDVXTHTUCAAKYQPWIOLZLOSYYOSLMKRECJCKNRRZAQQWBLGZOSCNPFDPZNXBIJXVHHWGGVJVQYPBUKEXXNFDQWXKZZXQSGHOJMFHGQVRB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.355145948072;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WNCOZMMXZFEWZMBSHFAPPKQEBINXPVVEPQYJXQGFNOICKIDLLDZFYKWOVC");
    tmp_msg_1.dest_man.assign("DLGDJWJMFFZCGEAQXDPJMYNDOMAOBLYQNWYIYZAQFSPSHQGUMLNVNRQLXDVYWFBZZMEIPCTWWHOIVBBZRNVITCBMWSHTCDRGNFQGDSAPLZOCFDZRGDXJUMI");
    tmp_msg_1.conditions.assign("OHVDHFXAKBPREBEDFBTUVSJGTGVEKWVLCDNHPZVXUUOWZKLVCPPIBGJAMYINKQQUTRHXJQKTMUAMYNJFOELMZNSSBFXOGBRNQZQLRHNMAMVRYCYPOBMHOSPKPYXJACRSXWEQNWBAEHLJYOIIZNMYQZSZHIMWORNJGAULCDDJYBMROFGGZFWEIOSVEDHVDAQYCKCQRKYUITNWLEUDSICXCFFJDADKTXXGCSTBJWXZFWKZQFE");
    msg.transitions.push_back(tmp_msg_1);
    IMC::SmsRx tmp_msg_2;
    tmp_msg_2.source.assign("BREYSJLJCKJPTFMLBDLQJOPEKGXATVXZFVWGVOFZOYBDLMZEBTEGLMAPQQAYNAGQSTIWTGBACUJKMNDVXMGCKDACPSCRNQWJPPODXAXVZIAHKECTUEUVLSQEJKLHRNYZQOQNWBYNJWETYOCPSPU");
    const char tmp_tmp_msg_2_0[] = {-48, 112, -18, 99, -84, 60, 62, -114, -51, 18, -65, 119, 107, -83, -72, 26, 109, -99, 116, -77, -35, -101, 1, 40, 5, -101, 29, -26, 113, 108, 29, 12, -103, 125, 110, 63, -68, -36, 122, -103, 75, -49, -10, 18, 64, 63, 3, 80, 11, 114, 25, -109, 52, 79, 20, -54, 31, 68, 46, 101, -50, 99, -77, 92, -95, -65, 92, 74, -114, -95, 26, 111, -66, 11, 16, -5, 7, -68, 13, 75, 97, 125, 103, -115, -2, 17, -29, 84, 107, 43, -65, 62, 77, 75, -105, 81, -77, 81, -92, 31, -100, -92, -32, -67, -25, -20, -61, 33, 92, -6, 119, 76, -124, 2, 79, 106, 83, -21, 24, -56, 101, 18, -126, 120, 21, -45, -37, 53, 49, 114, 100, 90, 43, -109, -114, -73, 120, 8, -111, -116, -58, 94, 34, 100, 101, -80, 98, -98, -6, -51, 93, 17, -63, 23, -59, -30, 67, -127, 124, 22, -48, -38, 89, -43, -79, -45, -119, 100, 53, -100, 107, 76, -11, -98, 117, 47, -57, -109, -48, 58, 104, -105, 122, -9, -106, -21, -39, -64, -120, 121, -1, 7, -112, -111, -42, 11, 13, 7, -108, 3, 99, -127, 82, 56, 57, -97, 108, -105, -28, 84, 101, -33, 49, 101, -111, -88, 48, 74, 40, 27, 44, 124, 60, -121, 20, 72, -71, -101};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.505057933979);
    msg.setSource(15035U);
    msg.setSourceEntity(247U);
    msg.setDestination(7045U);
    msg.setDestinationEntity(4U);
    msg.maneuver_id.assign("WSMTMSHUGU");
    IMC::ExpandingSquare tmp_msg_0;
    tmp_msg_0.lat = 0.611678748634;
    tmp_msg_0.lon = 0.968874675091;
    tmp_msg_0.z = 0.313726794709;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.621223275187;
    tmp_msg_0.speed_units = 177U;
    tmp_msg_0.bearing = 0.598028978824;
    tmp_msg_0.cross_angle = 0.594805586283;
    tmp_msg_0.width = 0.217009553885;
    tmp_msg_0.length = 0.00342739199203;
    tmp_msg_0.coff = 114U;
    tmp_msg_0.angaperture = 0.228844816927;
    tmp_msg_0.range = 6062U;
    tmp_msg_0.overlap = 24U;
    tmp_msg_0.flags = 18U;
    tmp_msg_0.custom.assign("LTEUVCTCLLNIIYNHGA");
    msg.data.set(tmp_msg_0);
    IMC::Loiter tmp_msg_1;
    tmp_msg_1.timeout = 14588U;
    tmp_msg_1.lat = 0.226472344015;
    tmp_msg_1.lon = 0.832840204483;
    tmp_msg_1.z = 0.030051034215;
    tmp_msg_1.z_units = 58U;
    tmp_msg_1.duration = 25425U;
    tmp_msg_1.speed = 0.995018806571;
    tmp_msg_1.speed_units = 118U;
    tmp_msg_1.type = 129U;
    tmp_msg_1.radius = 0.00329738760805;
    tmp_msg_1.length = 0.635751344057;
    tmp_msg_1.bearing = 0.571801035706;
    tmp_msg_1.direction = 173U;
    tmp_msg_1.custom.assign("LNEVLBFQYDTDFFCBJYGZIKPWSCHPRTJWNMMJOJLDGMQHFBKCHOTPUAQZPQIAPDXJZSPUVZRFKNGWDSOEYBLRFHSTNKZWDYUIVMWY");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.234734870739);
    msg.setSource(57615U);
    msg.setSourceEntity(35U);
    msg.setDestination(6370U);
    msg.setDestinationEntity(21U);
    msg.maneuver_id.assign("ZQGUCRWEVWYJHKXEIORPZREFOMSGBIJCVLSICJJPDAJPULRFMGBPFNAVKDCXGVKAMKUYMBMZMNBFKYFFSEIKYEPWJDPBMMPUFAACJQZXRJATYTEGYHTHUABWVNIDEUXUVHVRZ");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.673788972649;
    tmp_msg_0.lon = 0.0355203479381;
    tmp_msg_0.speed = 0.178810526852;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.duration = 37963U;
    tmp_msg_0.sys_a = 12660U;
    tmp_msg_0.sys_b = 12791U;
    tmp_msg_0.move_threshold = 0.618006413356;
    msg.data.set(tmp_msg_0);
    IMC::AirSaturation tmp_msg_1;
    tmp_msg_1.value = 0.116863267359;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.854302139382);
    msg.setSource(38398U);
    msg.setSourceEntity(172U);
    msg.setDestination(2327U);
    msg.setDestinationEntity(23U);
    msg.maneuver_id.assign("WNRYTHVSUIMWGVKTZHSDEXYXANVUEFIQXAIGTGLDWFZXZTEIQEAYWCBONSKADFZWRAVYSQCYSMDSTGNOYBWQVSZXHNGM");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 19185U;
    tmp_msg_0.lat = 0.786694282135;
    tmp_msg_0.lon = 0.894772786307;
    tmp_msg_0.z = 0.335962536301;
    tmp_msg_0.z_units = 250U;
    tmp_msg_0.amplitude = 0.0860194590623;
    tmp_msg_0.pitch = 0.186617290675;
    tmp_msg_0.speed = 0.695200115312;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.custom.assign("OXPBSITHCAZDTLPUIFREEURCCBGPEQJHVFJOZPDSUZWVQIRPWKMMQBEGJWSLYUVJGKDAVZXFMOPEGZXZ");
    msg.data.set(tmp_msg_0);
    IMC::MsgList tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.300084119271);
    msg.setSource(39512U);
    msg.setSourceEntity(86U);
    msg.setDestination(33746U);
    msg.setDestinationEntity(230U);
    msg.source_man.assign("YCNZSRFIIZRRCAFUAZTEPGXXOBEYMORCHPUPNBNLTIGHMRGWIPRVJQBOKQLXCXHOVUHIMWTFLLSAASOMVCMKNKUAGHZCJJMTPKAHKYWBPUIQDEOXJDTFAVJFLHKYSCZQYWTVYLTXWENRRSQGGBZUAWXXEYLVLPGOBFQUDETOZZMYMQFFZDIHVKRPJPWTUQYHVIDSSQYQODVXJTAIGCBFFNSCWKUCEV");
    msg.dest_man.assign("IWOEUUAZNCTOWYWDGESSULZVAJVPRXKXBKLHEIVEKRDHEKNVRJWCUYCUBJJWSGKWYTXINRUIORFRQEMACXTDBIGYVHAGDAFQPHQMZAINUWGPDRTMYDZMCOWNJTSPYBLJZHUZOEZROLNHMABYLTUACKXPFGVYHHJFNXVFCFUEVKMERDQSWXSSXANGLOTOPQPJZFMHZXQSIDODLPVFBBIEJBLLIQMBQGMCIKMQWX");
    msg.conditions.assign("QDYFVMAFRRAUVANFMILHTSGSPXWHXKROURQWWDDGIBCVXHRXMTUAABVEUQXKYSDHGOIRYDJQXJKCWZLCMBOFTICVOZNELHSUGNACPOCCLEEJQJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.204562513232);
    msg.setSource(15737U);
    msg.setSourceEntity(43U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("IYIOKEOGFOXNIVFRMYNWNRHQVUHYTRINCEUODLASZIWCDYJEBFYQIHMTEOADAKOIXPHOGUBQAPKJCDLGWHUNGLDJSQYDJSKXZJGVAGNCCMKYVKESRDZXPPGMOXVLULLTHBYXWTEYZVPPUWJRTDVKKNRVISNFRMXPTMFOIMASSBK");
    msg.dest_man.assign("SKTUYZFULTLNUWLWKZWGGYWBHFKCSTFRPEQEPKHNSDFXSFQPWYIIHJFSQYAMPEUGIESDOBIRZZDRSQDMDIQMZTJYRRLLCTUCFVHGPWBHABXBZBDTICTNXHDQROUSIEMXHIXVUZYDIGCMJABPAKOQZQXGJLUSSHCRBRTCJVTNAWKVVQANTKNGEMORHIYJQVDGACLPFLBGMCPBUORPOGWVJDVNKYOYFVJOWMEMEXAYEK");
    msg.conditions.assign("ARTGBREYMXXVLWUHIIFEQTYRPAQKCMYKGEBJFJDUKNXQVBLMZZNJQKCSZNGFAAHVNCJQSIUBQVITDCJDGPHSGOMQITGMDCKAMKDZUVFDMYBUOZJLHXFXSAWFEAFRGOXGLHERCJKZMWZNX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.918723851349);
    msg.setSource(26193U);
    msg.setSourceEntity(180U);
    msg.setDestination(40462U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("YGFQFOPCSAUINBZILVNRHZDOVEHILHJXDKVFGEYFQPPHGLTRRKFZOTBQEIMUPADBDCETYMSYGUSJZXHJBGXTQXLWSCNRBSQTSKRPAAWPCNYRUCXDHCKLCCOXOEFPTIBUDQLACNUPKAYZHLYAKWAMGMXVWOWDKQVXGOKWPJTFMSMEIVAJBJELRTYGEUJYVLZSBBMMUNSGOVGJWREZWNYCBFHZAZPVNTUIKNJO");
    msg.dest_man.assign("EJVJWVCMZNFQSMZOICHEWSJWRVORBUHYIUAPBDSQAZRJMWDLJMZINWJSNEHTUILWOXNKUMIAYECUADQQSPBJPBPCPLOECVKEHALNDGPAJKGYVEHIXGEYPTQXSSLYVPXQSLMDKHDBURFJTGELLHEKOWRRNSKKAJPATZXTIBOXXKFDRKRVIQFMSOGHFGMQGCVTNTAFBCN");
    msg.conditions.assign("CKRXHLEWAMYBYKRROYJZWNCNPGEEHVWAIIUGQQTQIETGYQFDRYDMXHAUXCAPSLPKSHFUUOIDJHDGNWJSCUVPRFBPFYEKBXNNAUTZRPAJUHJGBHPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.193322128608);
    msg.setSource(27242U);
    msg.setSourceEntity(204U);
    msg.setDestination(4356U);
    msg.setDestinationEntity(12U);
    msg.command = 76U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UCNOTPKUMJWFKTMEIELHBYNHQCMXZLZAYPJYPJEFATBTWDEPPDVECQGWSVIYQQWMGXXZSAAQBPLMODEFTXJNSTKBNBVUXRGEDSKWAYUHHKYKWZUWMIBXEFOXJIGOZXHVATHQDJGP");
    tmp_msg_0.description.assign("LZZVSXRAJIYRNIYDJHSEPASJOXOGWAPMHBWIMBZKTKGTUFRVYGEYJOTJVJUFQMSTXUWXAFPQUWVRUEGV");
    tmp_msg_0.vnamespace.assign("OOTFCCQRWPDPGBDRVLIPETUHRQZOSNUIVUDZPKSANDPCBDSAOWMLLGW");
    tmp_msg_0.start_man_id.assign("MFJWCTYPLJKUYEYHSTTXKBTOHJGLGZKEGNRZWHGBGJNQMKOOGPIJLOBZYQFUYZMPGIYRCCZFXEIVWQFNDKQOEEJKJBQQDXRCCIWPHHTAFMLRDXHTTXOSQV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AHKIFYIVCMPWSKCDRVFQZPYDJPCXKWJEORXNGQBXGMBWEZAGKXSQEGGZYLSAIXLOGIRGAYNOHWUIAYSYQDUERGVFBSLNXFBAIKLKNRHOSFSHTXTHPFJRJUMSDLBTXOPOWWKGJWXEUWYVZANKDUMZECHTEAPYNJEMRAMBO");
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 27262U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.846303106792;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.658861130417;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0767881319167;
    tmp_tmp_tmp_msg_0_0_0.z_units = 7U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0427240166074;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 196U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FHXOWCCZFNGXPVEJNYHMAQBUKUKNDFLCWDTBEMVJCZGVJUYISWCQSEVHLUQLVDPHABEXDKQLQROWOIUQTHIIWOUBNSZWPLHCPTILZZJSOAYZDLAOIVBNEZTDYYRJDRGAQUFYKGLYFADTWBKBOPSMYLRPROJFDIQMSXNOGAXTM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.228026909374;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.808067574006;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BDJZOEMWHHOBLFEIXAXSCYFREALPYCERSXVEYRMTDFYILCKBVURYHOGJOSZMENFBPKEHNQUBXWYAVVSNBYPHHUGULBKJWKFNPXRRGWLCXRUWJUICNAAIVRNLFZHSIZSROUDSFZQXAINKVCNGSKRTTGQ");
    tmp_tmp_msg_0_1.dest_man.assign("FJFPJBZXECBUTSOGJMGHYHULLDZUXQJOKBKTNIJIVISXLRXAOIGIZQKSFNHAQYWMQFOBZEHROEBAMUEUTNPFZJYWQVZSKRUVLLGDHETHHJULXXINPCCFRBEDZJYGYPHGWMTAAVNIC");
    tmp_tmp_msg_0_1.conditions.assign("ZGXYLQGKFVJUYULTRKAIADYBMVGSVMYPEVDWWFDQQSQAAJZFACSHLWCEMEZXBXNEHBSWPYXPMUJXODQW");
    IMC::RegisterManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.mid = 37668U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PowerChannelControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("QGTKADKBZHPIOCIJBGDOPCLTEWDIMUVIIRGGQNQWBPZWOKWTRZVYMBKALZLEAVSUMJQUUOAJNKOHNBRDVNODTLPXIIDGGLEYYHNFZRJPHYMQYRNDNYSJPSUWDFGHVSTGAMKTTTCCQEJVCHRWCMWYFHQJKJBBPMEZJCOIUDAABYQULFEECGXLUWIGMMZ");
    tmp_tmp_msg_0_2.op = 35U;
    tmp_tmp_msg_0_2.sched_time = 0.113366342608;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.791247110697);
    msg.setSource(31690U);
    msg.setSourceEntity(221U);
    msg.setDestination(26309U);
    msg.setDestinationEntity(107U);
    msg.command = 82U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZINPINBHFLCWGTBHRULYDBKTYKXCXILDUZIFYENJEDAJYPMAKFFBWQQGAJTTHSJCITDLQGYSDHRMXPHRYWFEZSOZBMORPDEUZQJPKVSEBPFOPQYQQOQWCFRRMCQPOZSRODZMLABKGTJJEUVXSGVYVSOCNIDIAVTCVXTJMAWPZMDASBAGUNOGISNNMTOXIMGEAXWCYQGZRZEKXMVRFVXTINULHKNJSLFEHCNHULWC");
    tmp_msg_0.description.assign("CQBTZDIGZRDWPTUCRXATIKWGZYSVMYWXQNKGTJYFOENLOSBCHDMLJPJJVDVOHZSPGDDLGBBNBKXDXXCLIVFUUCQSHBJAMJTHHTFWPBUYHSMERGZROKAATFQUIZAIAZRFLVWSFFTOSCBSBKWAEOOYQPCKYHRUJSYFVHAC");
    tmp_msg_0.vnamespace.assign("RWEBLPILSMZUCLDNLBUKYDFHTWUBVDIQSGQRTZENRHAZNSTLQGPXWGORNMOGTFIESPQSYJISKGYOCUXSBHPOSVEMDJQGPQVVTALVFHDHTXROCKPEKLVAAFOPXWIYANKCKGIWSGLPYUXUJJQHEFZGXNYWBVHFYAFYXMHDZWMKVNCHIBEJKWRS");
    tmp_msg_0.start_man_id.assign("ASSUKPVUCVQCGCTZONSTQTRFXQNDJUISJDOBAXLBKWHILPNKEYMZMMBHJEFNMPERYIIURACKOSPZRLHGHOASRUCAADBQZWKXWPRGTRSYBOVYWKXDHKKNXJBOAVJQACBPZVFZOEYHGXDWDMQEXONSGUXXWLALNSNKWMCLXNPGYBZDPJOHBSHCBATUZFIFIRDEEWQLCUYTQWYFGTEJU");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YJUONPEZRGZVQMTAUCJQVDXIILZSFDQBPWRWBJFLXTZLOWDGYHNTLMDMKEIWXGZRRDSOXXNHRQTEHBBFKYCXPVYXBAEWKZOYCEJWFASPYSLZEPZBAIFGJPWFBMYCCTRCOABUQKENC");
    tmp_tmp_msg_0_0.dest_man.assign("ONZDFMSJCXZOCBGBERPV");
    tmp_tmp_msg_0_0.conditions.assign("FTKYWPHMVLQKDFORHMZMGONGRZNVPWWZIAUJGWBOVTAIYUSIZKGDUQZDYOAHAFNLPYNNRKJTEEFJHUSXEHGVGVXWDHBEDKKGRALPYVNJBBTIHRJHFZOPCTFQMMOGYRIKFDFA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SetImageCoords tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.camid = 27U;
    tmp_tmp_msg_0_1.x = 46278U;
    tmp_tmp_msg_0_1.y = 28393U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.853797095565);
    msg.setSource(45227U);
    msg.setSourceEntity(172U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(178U);
    msg.command = 64U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IEFSWUIIFXNNUINAOEOUCBQHVFGVUKQXDVZEDBVACBKXVBCEAJQSNJNTGNFULMBOVYOAQWZYPSPRKCCPHHWGQQKBODJEMCMCMNDHGYEOAHRLJTZTKUQTLFZLLSRNFTPUNJLPHHOJITAWTKFVUREHWM");
    tmp_msg_0.description.assign("PFQEGYLGLQUMOXRNDUWSEILZUFJPBOHWQHFQACSPOMTMQRBJSAGBTCVATTBSRCLSYBFXBDXWNITYHSJSO");
    tmp_msg_0.vnamespace.assign("DFMFKQIZWEHVLLGQWHNBDXGUIFBGPDZWYPVXHTUNMKCAUPBDQZECIIIXUDQIBKWMYAMSTRGYPKZKSJJWXNATLXJZCSEXYHSNMGVZ");
    tmp_msg_0.start_man_id.assign("BYBAXLDIZVVCXOEHBUHFNCMBLNSWGKQJRC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JFUKSPHFBJMMDBEZCLCDQBUHOBKFDURZRPJDFXNQSQCCSJYONHLQGOWTUCYBATONSLURNDBRTLAGNCNGXKKMHFKIFYZUUXKIJXEOUPPPYVRLLHMHIKWGWIWOEEHQ");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.arrival_time = 0.402680803523;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.424001664903;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.509944041664;
    tmp_tmp_tmp_msg_0_0_0.z = 0.790500584249;
    tmp_tmp_tmp_msg_0_0_0.z_units = 77U;
    tmp_tmp_tmp_msg_0_0_0.travel_z = 0.83974819442;
    tmp_tmp_tmp_msg_0_0_0.travel_z_units = 190U;
    tmp_tmp_tmp_msg_0_0_0.delayed = 237U;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::UamRxRange tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.seq = 12360U;
    tmp_tmp_tmp_msg_0_0_1.sys.assign("JVABLNDKPMJRTNHIRWUZBMMLQHUQFCYLRFHUTNVYVWOKLTKBTTVYTIWUHYUAOANQRQZXDFQOOYFSFJHGJTBEIWRJYCEFZPLIVBLXPBKWXWMZJOADODGPMIPDFZVSGOCXBGRIXQKKTCHSGXYSSYRAUFGVOCGJLCHIBFPMAOLMDQKW");
    tmp_tmp_tmp_msg_0_0_1.value = 0.365478257059;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JEAJWBGZPVJFHCQKQPBFYGWTLVLQKFAGOHNXBMXPJNDSFMPQVDCBIKEBQUSYHAWATHHGOLKZDXCCSURULYAGEKEKLEXILGGBTYVTMHUYOCATCQNSITNJRJVMBWOZFMMPHIWYBBZUYLTLIESADNPRWSVKRG");
    tmp_tmp_msg_0_1.dest_man.assign("PORTYJUWXPZRBJFPJSXAIIESHWAYZEZOSKFONCFFBDOXQ");
    tmp_tmp_msg_0_1.conditions.assign("TOEQBXBDPQBUOAAOHRVURWRWEEECTVKMJFOTGTRNZHCZRVJQM");
    IMC::GpsFix tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.validity = 10437U;
    tmp_tmp_tmp_msg_0_1_0.type = 32U;
    tmp_tmp_tmp_msg_0_1_0.utc_year = 2365U;
    tmp_tmp_tmp_msg_0_1_0.utc_month = 66U;
    tmp_tmp_tmp_msg_0_1_0.utc_day = 175U;
    tmp_tmp_tmp_msg_0_1_0.utc_time = 0.947794095931;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.401546588101;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.820305911189;
    tmp_tmp_tmp_msg_0_1_0.height = 0.126854243516;
    tmp_tmp_tmp_msg_0_1_0.satellites = 101U;
    tmp_tmp_tmp_msg_0_1_0.cog = 0.0418488090441;
    tmp_tmp_tmp_msg_0_1_0.sog = 0.586235914924;
    tmp_tmp_tmp_msg_0_1_0.hdop = 0.444836150264;
    tmp_tmp_tmp_msg_0_1_0.vdop = 0.018372772847;
    tmp_tmp_tmp_msg_0_1_0.hacc = 0.593612670675;
    tmp_tmp_tmp_msg_0_1_0.vacc = 0.667737014387;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LblBeacon tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.beacon.assign("RAJEEIECBVFPLGWOQBZWOFPGGEZLGIAGEWNVLBOTMKAGHPIFKBDUORNZOIJVFZFRSQDBTAMZRMMBNISJBCLWRJXOUYYQPSXOQUIUGZOFQFIYZLDRURYTHTAHNYPTZTIOYYHNFYGCADQLBVCPWVNQQFJJBMQXVJJIXRAZKYUMNENPKSKGDSJKRM");
    tmp_tmp_msg_0_2.lat = 0.705535581936;
    tmp_tmp_msg_0_2.lon = 0.70284279192;
    tmp_tmp_msg_0_2.depth = 0.855192390576;
    tmp_tmp_msg_0_2.query_channel = 217U;
    tmp_tmp_msg_0_2.reply_channel = 166U;
    tmp_tmp_msg_0_2.transponder_delay = 191U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.419470634668);
    msg.setSource(5935U);
    msg.setSourceEntity(147U);
    msg.setDestination(34328U);
    msg.setDestinationEntity(10U);
    msg.state = 164U;
    msg.plan_id.assign("SBWRJAQDZFVNELLJJGYHMRDNZSODUHZAAEQYJTRPHTOCGHKCPKBQMYTDMSWOPZQBNORLBWXSHTVXEDXNMEPFQBTVSGIDLBTQUZPCWIBKWZQUETXHFGJUKVHVORSIFCCPJUSJKJFBIHTCUFILYIDMROXIMEYJCSNNKQGHPOMYQLZICXKFSUUYNBMGAOLRAITWNLEAZ");
    msg.comm_level = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.840058012534);
    msg.setSource(63153U);
    msg.setSourceEntity(160U);
    msg.setDestination(48139U);
    msg.setDestinationEntity(123U);
    msg.state = 246U;
    msg.plan_id.assign("CLSQHMEDEHISCAVMSEXVL");
    msg.comm_level = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.72539652935);
    msg.setSource(8898U);
    msg.setSourceEntity(156U);
    msg.setDestination(61774U);
    msg.setDestinationEntity(79U);
    msg.state = 38U;
    msg.plan_id.assign("LFRNMVQOWTXHOPZVHSISPVSNTDGRJEQEOGDJXLEZTFQIYTK");
    msg.comm_level = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.985100488203);
    msg.setSource(54883U);
    msg.setSourceEntity(212U);
    msg.setDestination(22040U);
    msg.setDestinationEntity(22U);
    msg.type = 176U;
    msg.op = 1U;
    msg.request_id = 29093U;
    msg.plan_id.assign("OHTALMHOMACXKKIDYXWCA");
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 52595U;
    tmp_msg_0.status = 15U;
    tmp_msg_0.range = 0.325471464383;
    tmp_msg_0.info.assign("NLULIUVJDMQYVJVSQXHSNQHYUBMMYNFRTFBKKHNEDCXNLWCWVOSYBOYNDVFNKEIJXOKJGDSPSNUBLEBWEXPCOSRWZECEQOBHRPRQRWRFDFAWQGTLTWIXSQPAPIFDJSGOZQIWZIPYYWZULVGTJZMGMXABSPNCKRYEJIPMKRFDFTUXPEJWZBVXYUETCHSAMCLUTIQCQOGJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DHJKQIDNOVMIFAGOZTITKWPMOTOMAUGKAVJWEVUPTAAXRWUMAWTYHGOSLULTJI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.538376809874);
    msg.setSource(27408U);
    msg.setSourceEntity(45U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(43U);
    msg.type = 8U;
    msg.op = 250U;
    msg.request_id = 7398U;
    msg.plan_id.assign("BPMSWAKERGCZPNMKIHIXIPFVWZSZLFHRCUVWYVYFVCISTRROQGOTNLNFYPVHGJKTHHKHMYFQYDAVTLUNIWXTIM");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("KTWAVZPDBKSWQVNGWWIGIVFRPNPLVJARCMKCJMIDLTYJDXJTIFBHYYMUUDVOEQZFQFOSGREZFUBUNBJDPBZGLUMUVSPFZRTNOSRQIHQLRQWXHGHHOIRCAGUZS");
    tmp_msg_0.htime = 0.259144325802;
    tmp_msg_0.lat = 0.189469830459;
    tmp_msg_0.lon = 0.363420049768;
    const char tmp_tmp_msg_0_0[] = {116, -30, -49, 98, -125, 13, -119, -32, 26, -38, -115, 56, -24, -97, -32, 103, 7, 113, -127, -74, -78, -46, -78, 122, -71, 38, 111, -7, -77, -31, -125, 73, 81, -33, 115, -86, -58, 74, 119, 46, 112, -27, 93, 106, -58, 40, -34, -9, 86, -52, -93, -31, -30, -94, -91, 42, -95, 124, 105, 69, 49, 75, -74, -80, -100, -56, 83, 119, 55, 63, 53, 106, 92, -68, -6, -99, 14, 39, -55, 110, 33, 58, 51, -30, 17, -92, -83, 113, 60, -115, 88, 91, -79, -103, 4, -94, -98, -101, 16, -96, -21, 8, 48, -123, 125, 112, -33, 122, 49, -104, -106, -112, -110, -111, 110, -31, -47, -4, -80, 31, 71, -111, 64, 82, 98, -41, 79, 2, -89, 52, -25, -78, -90, 85, 120, 12, -32, 106, 36, -119, -42, 67, 82, -84, -7, 50, -65, -91, 111, 72, 115, 68, 121, 38, -84, 88, -104, 74, 53, -14, 45, 113, -122, 118, 57, 19, -38, 99, -89, -29, 55, -95, -112, -72, -119, -119, 24, -70, -42, -13, 44, -41, 101, 64, 69, 79, 46, -87, 57, 20, 89, 76, -109, -125, 73, -64, -101, -102, 96, -40, 117, 78, -24, 20, 48, -3, -124, 19, -67, 103, -34, -108, 102, -94, -87, -91, -61, 114, -21, 30, 36, -12, -127, 22, 58, 123, 95, 88, -73, 48, -102, -123, -90, -47, -112, 8, 15, 62, -69, -98, 12};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VELKOTSNVQXHLOTWXLVEMYDGJPWJJCBQYUBTKPQMCNGBDQTEGWRZAJOZFQCPKLWZXNPCOUYGTOBJHZXDWYLYZCAIGKBAXYRITZKYJOMRNNSQPLIOFSMNDJAMNHZSMWHCFAFDUTJIAJMIDRPUGRBQEAIOFSAKEXNDLSIMIRXBFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.246655181564);
    msg.setSource(44950U);
    msg.setSourceEntity(104U);
    msg.setDestination(61557U);
    msg.setDestinationEntity(21U);
    msg.type = 254U;
    msg.op = 235U;
    msg.request_id = 8137U;
    msg.plan_id.assign("PGPTWOHRNQYFHAXBITOVKOLASDZIJYSNKUDEKSCVKVDKMMIGTMRIZIDSUYGCTXOPLRPXFKWJDXLUGFXZJOOQXVQISZEOFTDJYHALNBEBIIQPTHFUNMURLGELWMIJFSLVUHGWUYQPZNVOJPQPNWSREBKOGXMSKMWJPVHCFELHYUCQCARLCBAOBIG");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.303459466546;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DUZHIGJQDAIRATVVXZHGCJVFVPQRGTRLTEOMEDUGAFBBBTHZBWSRGSTULIVEDALPPUHMFKWWHKHCDFJVTOKQEKWJYNGOJHWFPCQYBTWXOSLHUYQXEXXDTTMMKGROXJPCHNDIBFWVYSEUTNMSVFVNIJGAGULQYBZOKOMQJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.598951061765);
    msg.setSource(45315U);
    msg.setSourceEntity(171U);
    msg.setDestination(57888U);
    msg.setDestinationEntity(60U);
    msg.plan_count = 65460U;
    msg.plan_size = 3674675000U;
    msg.change_time = 0.898573435314;
    msg.change_sid = 29576U;
    msg.change_sname.assign("MUJVUDTYRACZGL");
    const char tmp_msg_0[] = {67, -63, 67, -91, 118, -104, 83, 124, 100, 39, 50, -111, 33, -115, 124, -81, -120, -29, -72, -116, 49, 10, 73, -83, -102, 59, -122, -14, 46, 33, 31, 14, -10, -78, 34, 65, -112, 17, 46, -34, 59, -29, 76, 110, -123, -49, -104, 87, -7, -16, 26, 47, -111, 55, 55, -85, -9, -54, 89, 73, 108, -8, 82, 70, -38, 125, 8, 91, 16, 33, 56, 82, 75, 2, -83, -8, 38, -16, -71, 60, -11, 110, -104, 36, -114, -101, 27, 110, -124, -68, 17, -16, 5, 123, -67, 16, 48, 112, 71, 56, -122, 31, 44, -44, -7, -69, 12, 68, -42, -58, -88, -15, 65, -15, 96, -17, -78, -119, 70, 71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RRVCXGDGBTUVEBDLQRWPEVJQRKP");
    tmp_msg_1.plan_size = 31162U;
    tmp_msg_1.change_time = 0.0954846544982;
    tmp_msg_1.change_sid = 8357U;
    tmp_msg_1.change_sname.assign("NKLFOGFJNYBHBIKQXGRZSNBZSVBKDHJAPORMLTGWCKGUHENRMJLIIUJYYCEGUWSBAEWXVVYLKUZXUXAFVPXNIRTZBEPLWJNCAIXSOSFZGNMLEAHCPMBWQIGUHXLCCKTVJMFNYSFMOJUVZSONDSAJRPHDRYIVFMPPFGCWACFHHYEYIVRKQYTDXKLQDQOOIUQJXQAPBZ");
    const char tmp_tmp_msg_1_0[] = {97, 108, -38, 124, -84, 87, 86, 85, -65, 34, -29, -99, -67, 31, -17, 89, -58, 93, -59, -109, -33, 121, 20, 74, -26, 117, 5, -110, 124, 109, 97, -89, -114, -81, 10, 32, -109, 118, -20, 34, -9, 0, 39, -95, 54, 43, -116, 5, 21, -95, -73, 124, 89, -5, 0, -43, -53, -71, -44, -24, -111, -75, -80, -36, 56, 4, 7, 121, -17, -73, 55, -18, 105, 92, 21, -25, 70, 14, 8, 12, -79, 17, 83, 102, 75, -44, -20, 122, -38, -96, -77, -83, 107, -46, 124, -87, 70, 3, 122, -90, -118, -41, -78, -48, -35, 123, 73, -104, -96, 5, -128, 30, 106, 99, -48, 100, 9, -72, -39, -57, -105, 10, 82, 21, -15, 98, -58, -29, -90, 110, -83, 58, -66, -91, 6, 126, -92, 46, -110, -66, -91, 28, 2, -42, 49, -103, -53, -103, -128, -50, -120, -105, -106, 56, 45, -23, 32, 60, -120, 110, 41, 90, 60, 94, -79, -98, -49, 54, 126, -18, -44, 92, 14, 69, 35, -79, 67, -68, -114, 55, 102, -57, -66, 113, -100, 91, 25, 69, 24, 32, 98, 123, 106, -82, -118, -18, 112, -62, -66};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.368604328381);
    msg.setSource(6623U);
    msg.setSourceEntity(38U);
    msg.setDestination(65008U);
    msg.setDestinationEntity(169U);
    msg.plan_count = 42158U;
    msg.plan_size = 611692686U;
    msg.change_time = 0.728719308137;
    msg.change_sid = 53479U;
    msg.change_sname.assign("FZSYVIVKZHLWBBNYBRSPKYYMAHWPAVZBAXWVOBCXJOURUMEQCFSNMPSXJRHHYMKESEILMBMBACUINGTRIUPHFHJCOLOVMFOODBJSF");
    const char tmp_msg_0[] = {-101, -28, -72, 95, -20, 19, -119, -124, 11, -32, 16, -121, 91, 9, 124, 4, -99, -116, 23, 85, -58, 87, -122, 105, 54, -92, 53, -82, -74, 17, -75, -15, -120, 29, 5, 12, -82, -53, 113, 106, -22, -55, -83, -112, 111, 20, -109, 19, 39, 44, 125, 63, 22, -92, 59, 90, -73, -44, 111, -50, -34, -42, 57, -96, -41, -93, 54, 85, -90, -59, -81, 11, 53, -7, 118, 91, -64, 18, -99, 105, 79, -124, -22, -123, 45, 11, -86, -66, -6, -78, -96, 55, -94, 49, 14, -114, 23, 108, 31, 30, 36, 18, 66, -113, -60, -124, 110, 76, 28, -3, 96, 41, -5, 50, -37, -17, 89, -51, -35, 43, 24, -72, -20, 51, -47, 104, 58, -75, -2, -73, 81, -66, -102, -2, -100, 109, -76, 103, 89, 76, 119, 23, -53, -89, -17, -113, -84, -86, -115, 49, -62, -113, 83, 58, 89, -59, -26, 121, -93, 60, -16, 89, -58, 117, -26, 63, -37, -5, -88, 54, 6, 23, -87, -45, -6, -105, -5, -4, 57, -120, 16, 52, 30, 118, -127, 6, -118, 100, -63, 102, 92, -63, 125, 44, 24, 85, -3, 95, 104, -70, 22, -77, 22, 58, -16, -40, -9, 103, 100, -80, -14, -21, 46, 77, 55, -45, 15, -69, 98, 44, 6, -6, -47, 44, 122, -83, 8, -63, -111, 48, 106, -76, -43, -59, -118, -67, 71, -118, 85, -119, -77, -97, 110, -55, -73, 11, -70, -91, -23, -117};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.977309895032);
    msg.setSource(57396U);
    msg.setSourceEntity(48U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(100U);
    msg.plan_count = 5998U;
    msg.plan_size = 3795577608U;
    msg.change_time = 0.0522166413742;
    msg.change_sid = 41123U;
    msg.change_sname.assign("YEVCTBMVMDUNXGHHKVDPEPALYHWHNXCYECJBGKQCCYLYLXDNLWWSPKIACESTZKDDZCWDXMHFSFTPOHFWDYKUSZYXBQKJBJJISTRTMUQOTLKRBBUTBADXAZANUKGRAVONWM");
    const char tmp_msg_0[] = {112, 101, 30, -88, -33, 29, 92, 28, -96, 69, -34, -15, 115, 7, -65, 88, -69, 113, -74, 82, -57, -74, -33, -2, 79, 3, -33, 77, 49, 114, 108, 22, 13, -39, -45, 14, -64, 31, -14, -126, 36, -70, 12, -83, 125, 47, 100, -33, -52, 8, 20, 106, 46, -1, 49, -14, -103, 71, 14, -122, 36, -75, 19, 112, -113, -31, -64, -121, 76, -38, 100, -111, -10, 43, 4, 83, -9, 57, -95, 108, 3, 77, 22, -75, -42, -6, -112, 28, -94, 50};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.128528137427);
    msg.setSource(9182U);
    msg.setSourceEntity(183U);
    msg.setDestination(57155U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("WAVAFENMTYEDFNFRORHNSVBETYHBINQRVOKRPGUFIFZDXISTNVNBXUXYTKQQACHEMCUYCYORAMVZAZHLFMDJHWQSPZUXPDSDRPFZBAIEXLFHSKXGDWDHWNGWCOYOHADTTKKQAOOJLORMHGGWUCVBPPYUISZDSYHCWTCMKIFGJXZZRRVUNOJMIMAXUYPP");
    msg.plan_size = 46606U;
    msg.change_time = 0.382321775629;
    msg.change_sid = 60539U;
    msg.change_sname.assign("GBXDPVSYXYLPZOWITENFYMLVCIQXFUJUYPHDZQEDETHUXRYGPESEBLEQJOQZYKHWWFFLECKMMIHQHJJVDTCFCTGCIBTXUUWOZFNSCTBA");
    const char tmp_msg_0[] = {-15, -76, -106, 18, -24, -119, 126, 62, 3, -92, 102, 100, 67, 126, 47, -11, -85, 119, 43, -118, 125, 76, 81, 60, 9, -38, -54, 30, -61, -52, -68, -34, 20, -21, -84, -50, -102, -77, -23, 97, -41, -11, 95, 32, 1, -64, -94, 75, -57, 34, 109, 110, 93, 25, 39, -48, -101, 108, 37, -109, -17, 114, 38, 116, 22, -77, 9, 84, -6, 105, 45, -41, 100, 102, -113, 99, -80, 21, 116, -72, 101, -124, -62, -106, 11, 2, 93, 2, -95, -95, 30, 75, -112, -43, 54, 104, -30, 61, -29, 71, 16, -71, -100, 59, 93, -49, -52, -99, 89, 19, 59, 91, 103, -27, -44, -122, 69, -19, -110, -2, 100, 34, 68, 50, 62, -20, -75, 116, 0, -75};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.0421808155197);
    msg.setSource(34698U);
    msg.setSourceEntity(248U);
    msg.setDestination(36751U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("REMKXAZCSZMVJQIPQJCTOTYFLIGLMPQZZASIARUSYWGXPYRCKTEUWDBPYQUWZFPWNJEJUMDAKCPDZKCETFKGVJKNTSQCDGQGAEHOLNTGFFAIDAPKNT");
    msg.plan_size = 2818U;
    msg.change_time = 0.171554520664;
    msg.change_sid = 33023U;
    msg.change_sname.assign("BDRXLQJWULZCXRPWFGEQFFTMOEINGBTHDGXIZFDZWZRNFWIPURVWHBOXGINKRTUONICEHMIFUNPLCMPTSAPALHEYZHNUPATUIZRUWGHVVFVGYLSJBDYKKPCYQNJVCYXQOYLSMGZDCQWFAJQWSHLMPEQMBDSKLSEXTCPYWNHDRATLUENATYSQODZREKAKMLCMHQCVSVXJQYXJEBBPOVVUDOFGISRZFOJMEGMKBNZSKOJICJUYAHTBDXKGAWTBX");
    const char tmp_msg_0[] = {63, -19, 100, -64, -42, 50, 60, -108, 103, -31, 83, 45, -101, 47, -55, 100, -123, 26, -91, 7, -35, -5, -23, -47, -81, -98, 61, -118, 102, -7, -85, -3, 23, 63, 22, -97, -56, 117, -42, -68, 112, 59, -59, -110, 12, -121, 59, -90, -41, -7, -47, -67, -46, 75, 68, 23, -83, -6, 121, -52, 119, -14, 79, -46, 23, -13, -77, 94, 77, -1, -52, 87, -64, -89, 50, -55, 55, -62, 81, -78, -94, -46, 48, 59, 84, 93, 57, 84, -9, -97, 14, 39, 48, 112, -120, 9, -8, -34, 110, 2, -54, -115, -56, 64, 76, 48, 64, -127, 76, -14, 107, 48, -87, 115, 67, -21, 32, -23, -15, -126, 109, 17, -100, -50, 75, 42, 93, -21, -35, -77, 45, -19, 90, -20, -53, -109, -41, 5, 21, -9, -35, -110, -15, 58, -1, -96, -99, 61, 0, 29, 9, 81, 99, 70, -60, -20, -103, 98, 118, 8, 27, 61, 95, 112, 105, 69, 116, -68, 6, 78, 17, -115, -69, 96, 75, -51, 57, -29, -122, -65, 66, 68, -11, 41, 124, -24, 28, 20, 16, 64, 104, 7, -118, 110, -113, 86, -68, 58, 71, 61, -80, 1, 103, 59, 34, 86, 117, 70, 23, -70, -9, 59, 92, 0, -85, 59, 88, -23, 102, 109, -47, 119, -32, 44, -11, 36, 78, -65, 118, -62, -52, -94, -33, -53, -69, 81, 124, 26, 55, -97, 2, 55, -5, 74, -65, -60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.0586456670547);
    msg.setSource(928U);
    msg.setSourceEntity(129U);
    msg.setDestination(48876U);
    msg.setDestinationEntity(97U);
    msg.plan_id.assign("ZXJJDFSUFQOCGVNVJOOOAEHQPBZTOQXZVRJIOPXTOIAMLZQHTAEBWEWUEQTRTRNNXAQKVDCCHPIKDYWDQLCKHAGXNNGAAKYELPBZIHXJULQH");
    msg.plan_size = 7300U;
    msg.change_time = 0.380977890619;
    msg.change_sid = 23993U;
    msg.change_sname.assign("OTZGTIFVLYMDPBNDAMFPQCZSEAGTWYRWIBCXUMTLJRCFYRXBHNPESSRNHJYOEXGXVDHKQEGPYFILOYJVUAISMUTBVDZHOCUANTRPWUBFMNKHQWQCLUVPEGWTXIXMFSSOWIKAH");
    const char tmp_msg_0[] = {48, -35, -114, 120, 126, 116, 94, 73, -65, -21, 11, 89, -57, -128, -123, 15, -41, 68, 93, -17, 13, -95, 31, -128, -20, 44, 100, 99, -28, -112, -35, 104, -12, -102, 108, -59, 114, -107, 55, -29, -20, -106, -90, -120, 40, 97, 49, -47, 23, -41, 39, 110, 7, 23, -15, 104, 16, -17, -2, -11, -126, -104, 33, 100, 83, -97, -97, -14, -28, 99, 20, -77, -123, -69, 5, -23, 96, 2, -61, 119, 96, -120, 36, -115, 40, -108, 97, 4, -106, -126, -48, 41, -36, -92, 43, -40, -9, -65, -47, 23, -35, -117, 103, -8, 29, -128, 38, -36, -124, 26, 15, -34, -45, 109, -2, -21, 110, -37, -33, -56, -12, 80, 97, -15, 34, -23, 79, 125, -35, 87, -14, -95, 106, 0, -24, -80, -96, -99, -108, -128, 7, 4, 69, 19, 57, 32, 45, 39, -15, 10, -41, 0, -101, -36, 52, 121, -90, 112, -11, 84, 116, 90, -47, -44, -65, 59, -119, -24, -104, -117, 82, 32, -83, -128, 87, -92, -57, 45, 78, -56, -25, 28, 95, 56, -94, -91, -45, 126, 84, 100, -111, 1, -7, 107, 14, -57, 87, -116, -103, 10, 61, -126, -3, 90, -62, -85, 83, -102, 107, -101, -100, 52, 5, -12, -89, -32, 63, -77, 46, -113, -126, 7, 80, -61, 9, -89, -42, -57, -13, 56, 52, -49, 33, -119, -67, 59, 72, 59, 52, 122, 124, -64, 5, -54, -5};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.292184377982);
    msg.setSource(64175U);
    msg.setSourceEntity(67U);
    msg.setDestination(53219U);
    msg.setDestinationEntity(194U);
    msg.type = 112U;
    msg.op = 186U;
    msg.request_id = 39167U;
    msg.plan_id.assign("EDOPTCQCHJNBHNMYIUAZKAJWKZXXGMTRBMQPUSFIAFMVMETOGHKAEQIPNLVNXXEQSSYPDXOMZCYZIBGRDTXFCTPS");
    msg.flags = 65508U;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 166U;
    tmp_msg_0.x = 12221U;
    tmp_msg_0.y = 22771U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JNRMQXUYPTJNEYXXPCWBGPQIPREEJYDPAMEVGHPSDDAANRVLINPELIIAHKXULQFOOJDQCTSFSIZEVBCQZSNHCMHFHDZWXLWABBBSTYRHJHMAGCFYLZIDBOQRULQMDDGOFMMZWYUVJORIZVTRBOFAUJFWNGTVBNKXZVTWKUCTJENLPRTTHQHSYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.355406217706);
    msg.setSource(11934U);
    msg.setSourceEntity(249U);
    msg.setDestination(44900U);
    msg.setDestinationEntity(26U);
    msg.type = 220U;
    msg.op = 250U;
    msg.request_id = 5617U;
    msg.plan_id.assign("XSTPXXSSZCOOLTBYUSVFMPFXMGQUNNKPGPOBQEEQGWEAMYDNEDGJOTBDPHFAJHJCWIURIAWDRVRUWSUSLEPGVAUCAZYMDNQRYLNCHTDMSTGKHVH");
    msg.flags = 64858U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.773535039128;
    tmp_msg_0.sys_src = 58249U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EIZCSIUXWYGEDSPZEVQPFHLSTHBZEDCGZPVCCUJNWHJYCUTKKRBNTUSJQRRHAARMERLIONXATFQZDWAINAITZRBIGGJKYNOCKWYKHJQIGCFUTTOAVDKLEGFXMWBJXNOWTYZRLYGOUUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.102252331761);
    msg.setSource(58298U);
    msg.setSourceEntity(116U);
    msg.setDestination(32098U);
    msg.setDestinationEntity(220U);
    msg.type = 162U;
    msg.op = 230U;
    msg.request_id = 12252U;
    msg.plan_id.assign("OQTAVZIDUNOLPPTUBTNZIHEGTFEEMHATNNOWJSIRREPKFCDRABYRTZIWKKFSYQSGWGXACSXQAQCIMRKDFJOGNDZIZKLFHPKQNECGPKTZ");
    msg.flags = 63991U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 45900U;
    tmp_msg_0.lat = 0.81071792998;
    tmp_msg_0.lon = 0.599089229854;
    tmp_msg_0.z = 0.931058205029;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.928105707249;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.duration = 17178U;
    tmp_msg_0.radius = 0.958403710816;
    tmp_msg_0.flags = 91U;
    tmp_msg_0.custom.assign("TFXULRGNOIKDQRLYDSYHJPEOYEZWDYMTCEPKEUDTMXSBJNURGMHJLUTFRIQSVMUSTFGVMOCEIQZNXVKGTABAYJKOKCJZAIGWOVRHMEAARFUXHUPJYPUZMJYRLTDOEFLCYZKGZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QREMVPXGAKWUAHVKJXVQPDVCOPITMTBOMXHAOEAEDEYYSWEFVYDCJIGLFKRHPFMTGDUKAQKSFNQBCOPNYUZAFKZUTINRZLNMNIHCHUULILRZJBMFJHOOEDDKZEWONLGIEUDPIBRMWXEGBUSSZZYVXSHRNWAUWAHCRRGFVCTCVQYIBLCDQKFYVLQLLOHXP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.202467419448);
    msg.setSource(45834U);
    msg.setSourceEntity(174U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(120U);
    msg.state = 142U;
    msg.plan_id.assign("DVJZPRQOSILHNJHKJBOUMOQPMJWOLSRBEVGUNHZNCAEQDOTJIVNYTJGTGZH");
    msg.plan_eta = -1370810022;
    msg.plan_progress = 0.619706179381;
    msg.man_id.assign("WAOWAGAHXKAJUYINZFCMCBYDEOIOMHSEDDTPBMFCSSJKFPETJZKXNOVFJRFGIWZSNDVVYLQXYKGIBPGSNRUHDEZAEJWHBWPAJWYJBAIEUHKLLLRDHTUOYCWRQZFNZQONGVPEQLMQGOMTMJEH");
    msg.man_type = 46058U;
    msg.man_eta = 166427066;
    msg.last_outcome = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.385018343545);
    msg.setSource(7974U);
    msg.setSourceEntity(179U);
    msg.setDestination(29549U);
    msg.setDestinationEntity(148U);
    msg.state = 237U;
    msg.plan_id.assign("TTEDGSGXPIILFBPQZUOQJQQWJXYERAXMKHYXJPRIXDQLJHQRFCDAFJVUYEHZTDZOKSVZBSIWWGOVNWQXFGQSRMUSAIUNLORXZVMOOPBNVSKNTUWAVFNNRCHKWSEZUHFWWTSJHEILXULBGCMFPGZYBNCULPBCTMMNAKKYCAWKCVFREEHTLYUVHJGJHS");
    msg.plan_eta = -547171467;
    msg.plan_progress = 0.438376208456;
    msg.man_id.assign("EJFWDOSLYOCSREAVDXIQVZWXDMSZHUBOQRSRYWHWFDLREJUOBWKYOPZABSEXJMROGCZQURPDDQTLFRTUXHWZXGUGCWRLFIFMIGEANACDKYVLQYLEKMNUHVZJCAGP");
    msg.man_type = 23120U;
    msg.man_eta = -1440515570;
    msg.last_outcome = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.979139505433);
    msg.setSource(14458U);
    msg.setSourceEntity(212U);
    msg.setDestination(41135U);
    msg.setDestinationEntity(213U);
    msg.state = 133U;
    msg.plan_id.assign("ZPGIWXUYVFRYYMBGKGTLPNJRHTRFQNLLSDQAACTJFNZDMDMGAYMSFDESFRIVPKYVZTVMBUCUHCPLADZWNPVSICUYMXRDKWJRZNJHAZXVJOZLCEZQRJNDOSPXKGQFPBSQNHGXONCIMXHVLOIGACOZLOKTBSEUAWWHXRXGHTRDYPUQKXWKJKBAWTQPSMYJQJOWISRMBWKBITGSCFAUFYQCEIYWUFOEAXLGMIENEBQVTUJHEKD");
    msg.plan_eta = 628002018;
    msg.plan_progress = 0.5239339172;
    msg.man_id.assign("QKONTMTIFEPBKDGOKQLVKEXOCVSSESYWQZCSJTPQONGGLXWWBXBIEVRM");
    msg.man_type = 17304U;
    msg.man_eta = 594148775;
    msg.last_outcome = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.921102470875);
    msg.setSource(13077U);
    msg.setSourceEntity(167U);
    msg.setDestination(41252U);
    msg.setDestinationEntity(117U);
    msg.name.assign("AFINFPEMZRSCMPSCEHLUVXETXOQKYXLCVTZQUCIDJWGGQFCHEUWUTCJEWGMPZXVRYYKIULBIAYGKSDWXSNLDAGGFKKVIFUOPROJEOMPIGWNHNK");
    msg.value.assign("SHBOSIQORIUVHMTGACDPVZVBNVFXIRMKGZZHKEDLGPGYLQUSPFNGHGCDRARBWDCJONSASOXSYWCNVZIURUTTIZEEEVNJBVJVQTPQDDIXOHCMFRLSPPTUBEANMUOHJOKDYAJKKQGTZCMYYEXJGWAZKPLPLMFFENBCINLABHFZTRDACLEIYFOBLXQWZJQWWBUXFMMXHLRRFLFMYQXOGUGNXAWZKKYEJYANBVEDYPUSSRUXTWQWOCKTHSMIHVTQ");
    msg.type = 39U;
    msg.access = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.464746137479);
    msg.setSource(44910U);
    msg.setSourceEntity(142U);
    msg.setDestination(41442U);
    msg.setDestinationEntity(107U);
    msg.name.assign("YYUUIXTXUBAEJQRRATIEGWBQBSMFWLLFLHQSZFGHKNVTHOIACIIIPSWGFLJXDUVACWTDHBCTREECGOXNZAQZGRKMBRXWVADUPNSMONDBZLTYKCBSPZUJTTPQSJJMMPXPPDDYYGCPOZZFDETFEOMMVQJNFEXJMYUUUFLSIEALSBNWKHNHSXFWJVWIZAINOHQGQXSKKVCICVYYOYFHVVUYDKWRBLLABJKQKOKQMRJXCORLNNTD");
    msg.value.assign("FBFDZRHGECDBGYMIRYZBDCUHANVGXBIPJWWSTAOFEKXXDJOIKPDCXFZHULYYRYYZMZFVEOURVIJTAPWQTEMSNCXPMAQNRMNNIPOVGOK");
    msg.type = 175U;
    msg.access = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.253979695306);
    msg.setSource(244U);
    msg.setSourceEntity(82U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(163U);
    msg.name.assign("MWMPQXVUOTBMTEGSRGRSZKFREZWRSJUHSXCTBFSBIMFQNXQDHNYWUXLEGZDHWSFXFTLPFALNVBCNXWZI");
    msg.value.assign("SQNHNRQBDTMKPHVSITTYZCUQENRFRXYFJENTAFIYAPCYXMKRQYZXVZBPIAVHWUZOEPFWWNVHDMVKZOCVTAANOUMRPINBFDGDLYJUDQCBJCLSLKHMKGOAZNTCELZMJPGXKVTLPUOAZGYWBNCGJYRRLUZHVEMPXSAWTFAWUODEMBDJCIBLIVYCOUOPPQBUOKVAESFLEEFYJSGJMLSWDRLUJDHQIXKMGXRQXXOJXBIWHTQEZRHCGKITW");
    msg.type = 143U;
    msg.access = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.352233204163);
    msg.setSource(54570U);
    msg.setSourceEntity(45U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(135U);
    msg.cmd = 125U;
    msg.op = 74U;
    msg.plan_id.assign("CBCWQXYZCLDUSHETAPFGYYFHEFUJYUTYFVFJWUSHWJLCDTGESCPVYRNKSPMQKGQDNQ");
    msg.params.assign("RQTIIPSUBBDJUYEXJKUESETTFJGQZPDCNMJCPEWLFGHZJSSYOXMNSVEGEHXGEOHYFXHLULLAEKOYWTOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.350671550023);
    msg.setSource(55410U);
    msg.setSourceEntity(192U);
    msg.setDestination(45953U);
    msg.setDestinationEntity(228U);
    msg.cmd = 202U;
    msg.op = 46U;
    msg.plan_id.assign("NEIBGPIQZOVSJKHZDHYHLJFMMUEDLLKCUYNVSDEDEPYJFUSEZNQVJDCMWGMMLGNTOYWTVSSISEOWNAMBZIBJBNRQIZTNWLIOUZTOCGZQKYPVHJCACUUAGRDKHCHFLIXBKFMMBJXBFGAFPDJTJKXUPAGODTEUEAVFWUOSDRKWIAPFYAXDSKRHETYPYVSTQNIPBQLLOC");
    msg.params.assign("MXNNRCZSFQCNXPWUFYSMWFQVUHHZAFZBLYAEXZBHSIKLEDTBVTOUQTLZKPUKEFQZSJWAOAORJXLLPEZIJFVJPEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.600562440198);
    msg.setSource(34095U);
    msg.setSourceEntity(170U);
    msg.setDestination(26655U);
    msg.setDestinationEntity(77U);
    msg.cmd = 173U;
    msg.op = 50U;
    msg.plan_id.assign("ICJRMYOFGIXIHMDQWCNGAKRAFMADGAYICEYOUY");
    msg.params.assign("MLIPKIUHICOMOFPZDQDUVJKZEMZLVUJVKUUOAMQYZBPXCDHZEFDHBNGTODXIGHYBJBXNFWVONTOFMYNRRJRJYMUUOSLDVDAXAJAWZKRGYHHUCPKFGACNTPWWHYGZLQPWLLFKBEGNISAYMSWEQIUXUKPTRJXTSAWKGZLXSIXMBQRPNQYHVLBZFCXIESOADSYKOSGEPTRYJVIVACVQBERICSTKDCLWTPHRGNOFWEQMANENWCMZLFRSBVXTTQJQF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.400851663109);
    msg.setSource(61433U);
    msg.setSourceEntity(56U);
    msg.setDestination(31843U);
    msg.setDestinationEntity(164U);
    msg.group_name.assign("XCXXIOGEENSDQHUMD");
    msg.op = 212U;
    msg.lat = 0.446037629342;
    msg.lon = 0.763661701694;
    msg.height = 0.976000149364;
    msg.x = 0.705899370361;
    msg.y = 0.150974929222;
    msg.z = 0.238852453133;
    msg.phi = 0.80572468197;
    msg.theta = 0.701952362966;
    msg.psi = 0.987170621147;
    msg.vx = 0.483917265038;
    msg.vy = 0.911929140503;
    msg.vz = 0.181905067954;
    msg.p = 0.289376284699;
    msg.q = 0.195246146724;
    msg.r = 0.392186540155;
    msg.svx = 0.324983799793;
    msg.svy = 0.272193120841;
    msg.svz = 0.244800927093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.516965033018);
    msg.setSource(45615U);
    msg.setSourceEntity(93U);
    msg.setDestination(21693U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("QRJZNCBRFDADNLKRHJQSWUYPHWFMGWFXJVDWUQHKBRCFAQIAOEGTMEGZLUPWHMVNSIMIXAQJPVDMGBHYPELVRSSYIEOVXZLISQLMDGCAKMQVDEXTPPEMDJVBYCECCXYDNAHFWRZSMUWHUBDZAJKKQZOTPKCYUHOOKOAZSTCXWZMNTXSNTPJTGUBTIOKRJLGULGPKNXNXUOOTLTZYNVVFSIEKHWQBX");
    msg.op = 253U;
    msg.lat = 0.0301906403527;
    msg.lon = 0.65485389942;
    msg.height = 0.968942095912;
    msg.x = 0.84561833124;
    msg.y = 0.992694351157;
    msg.z = 0.742649368274;
    msg.phi = 0.0410373495749;
    msg.theta = 0.778138386902;
    msg.psi = 0.746270065204;
    msg.vx = 0.142513932252;
    msg.vy = 0.729785879708;
    msg.vz = 0.437811163905;
    msg.p = 0.91904857632;
    msg.q = 0.733647477884;
    msg.r = 0.335415790704;
    msg.svx = 0.643036300023;
    msg.svy = 0.782743916285;
    msg.svz = 0.223154487988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.188309277004);
    msg.setSource(18818U);
    msg.setSourceEntity(174U);
    msg.setDestination(12875U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("BSZNVCTZKHGLFWGVSYTDMBCWYAMGWJDIPSGMWEQXUUUXLZRLWTKRKOJHGXECWYOSPEJRHCUSZJSVOPKPYT");
    msg.op = 209U;
    msg.lat = 0.538520717763;
    msg.lon = 0.260305806468;
    msg.height = 0.759487267992;
    msg.x = 0.558697954505;
    msg.y = 0.545211736523;
    msg.z = 0.240553873528;
    msg.phi = 0.147157382946;
    msg.theta = 0.942062615569;
    msg.psi = 0.783633110682;
    msg.vx = 0.535810753464;
    msg.vy = 0.931269167587;
    msg.vz = 0.829993594424;
    msg.p = 0.638583349444;
    msg.q = 0.37501864221;
    msg.r = 0.985924856529;
    msg.svx = 0.79298379608;
    msg.svy = 0.497659531655;
    msg.svz = 0.917451852675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.46184486121);
    msg.setSource(16530U);
    msg.setSourceEntity(200U);
    msg.setDestination(64597U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("AUMRQIWVJTYTNRKEDTFLWDJSVTFOBZPJQIYPOBZEBDQILQGLFSWFHGYCZKEKABHUSGEUELWYEKJJPEVGVNTOABSYWEZXQPVOZUDZGCKWXXQFCPEXNLDUIITPTNBSLJAAUZYRBSOQGVKTDNOOICJNXPMZQNWNMNWEVPYM");
    msg.type = 253U;
    msg.properties = 221U;
    msg.durations.assign("TVFSRGHRRDYGUILKCUTRPHEPWQ");
    msg.distances.assign("EHTNEDJRFFCPXFLACOWHMFRYVEUBLIXMUIJRJAKPBUAQJPKELICVAWSFUGBKNZOYEGZUWIGLEVMJXOVCUSSBSVDEZWMTWOXDHQYRLFPXUBXBACSOKHQRQOPXBDKZLQYDNYVAHHJVICRIHTSSGKHAZRFNZABIATVXJECQIPUYWJTBZPGDGINXQMTUOWFKNULWFGSPRKHDJQWLIC");
    msg.actions.assign("GXXQNNWSVZJTYHKKCIRUSCJOMBAIKNEGOIXQOAGMFIYPNLPRCUWDTCUSLBRWZAFSFXFDZGLALPVBOMPPHYXVZWCSJARZRHTEQXJFEUZWPKRHCRGVBAYVNWJMJRSEWSHR");
    msg.fuel.assign("TAWDBYFEAYUWVTZWVYIDRIAHDANFXGKEILBSIQIHOLMQZHSMZRNGCRIJUTJMEGCFJPTBXPSOMNZHYGRTJKYCGRUFOUNETWDWJXXHEBTMKOHFWKZSMSPRVNUJAGIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.313210495365);
    msg.setSource(33389U);
    msg.setSourceEntity(57U);
    msg.setDestination(28169U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("UIOHCOCCZPCYNBTJYZDVEXNNZKFPFEBAQERFVDOYQZSDOEUVMNEPPIJBAENDKHIGAUSWBIYVHOOCLFHZBUCAHNLHQNHRYAVKUISCUWLALJRWPTDMRGWGXTPQFPLPTBDTPEWASXCVXUDBYQINHIBWNQAJHRMVMTZQFTWKEWUYZOETJXIGWTGDOSKGCGFJLOCUMRXKLYHKFQXWBJMRJXRKRIMKELGXZGRFSFVDBGZZJTPSUQ");
    msg.type = 231U;
    msg.properties = 128U;
    msg.durations.assign("INAJNRXCCOTJHUQSHWQSGPLKWJZEZBFPZRTKMLHKO");
    msg.distances.assign("VREMZKSPWBOIJLUEMFJRWXTYCETMOYAJTBLDANQOBIZZYZUTKAUKIVCWWNWEVYNGLOHTDLIUIBMUPVJKQCGVSRKGWHSLHUJXFUQEYVGTWYKADPCFXMSRYHRMQWJKSVCKNZXIBXPCZFDGGVUDWUFRBLJGELQCGJPRPXPQOKAQAFXVEMIDONNYRZAAHDPIGOMSBNELSIDPPGNADNFYBKIERFCOZXHHZXRLTHMHQQBWJTSCEHVYDFC");
    msg.actions.assign("FHGBLKUWFNYILQQFDT");
    msg.fuel.assign("LIEJBKXWIZPSGADJQAYTGULUPNIODXRYJLAVSTDOWMTRSUOHTOIFXGPBNZTYMGCQFOFNHVVNQYEAVKVUJMESYVJENRBYICJMAAHXWJHZXBUICDHTGMUMOPRMIBNSVPSXDWDQCORWAZFMILOFLZHZGJBPVNHXXQDKUZQFXCPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.82525582311);
    msg.setSource(4385U);
    msg.setSourceEntity(221U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("EMUHMVBTBKJSUAEUDLGHJSNBNQNFFPNDVFAOGBTIVKFSNFNDPPGRCJRSATZPQUAHJWRZTCCYEXTIUAXOVDNARCIHFPXBSXHUWMWXWDOPEOLYZGQZVJCWDMIEKEOTYRVIRVRQORQZWAGIOSCY");
    msg.type = 205U;
    msg.properties = 66U;
    msg.durations.assign("ZSYZOEIBGGKQYULIBHJFRXXGNMRGSFTOLMSIUCBJQZIPUXFDFQNHAOINDJOEGDQWVNMDUQRYLBXYVKKWFTCNEJMQVWBJVRYSQGEMJTCHWAZIWPHSOWYCMDAVREYKRINDTTLBJDAFLUEKAGOHWOIJCTPOKVXEXELANAGHMBOXDGSLVXMPZABWUQDRNHKBYFNZINDEPCMGFPQWXPZSCPJRYEHBKQCURLVRATAUHLTZ");
    msg.distances.assign("WIRHWXNYVMBSOJHKXAEH");
    msg.actions.assign("TRZPNCRYSTJJVSVUKVCZOMNTDOOQEFSNRLILEERBQQHVUKPHKJPEUWIZOMQVAOCKIGZEMCOABARDUVMQYRBSDDPUXQLBEDWOFWZFHXBDYAJBNSWDXMYWPUHKLKGKGNYKPFCPOYJTZDSIQIUXDWHCABSLMGZGEGCQYGBVJTKZTKGPZJEXFBFHYFUMOQCNFIVIWYJRXHCTNZMRUWNQYEXIASTLLPXPBMVMNH");
    msg.fuel.assign("VIWFHBCRGTKKFNSLSDPKSAZHGMJTTTIGZQXODWRZFFBJAXKOQKUICATREDOUFANQHBJWLKNUUCXZFCXJYBGWOQIHWAYXLJMWDJSXHIEQPRYNGBQPPESFEELVSGIZBJZQVUFTSZQVBJHVBREBEPGUNTIRYOUTOXFCZDQVHILPCVQPAUGANLZYLXOAVNWNRGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.529155211028);
    msg.setSource(10489U);
    msg.setSourceEntity(120U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.669430155051;
    msg.lon = 0.707606554464;
    msg.depth = 0.626515156932;
    msg.roll = 0.911595864949;
    msg.pitch = 0.343508464327;
    msg.yaw = 0.714552845087;
    msg.rcp_time = 0.676778712071;
    msg.sid.assign("YYTXRKQUMPOEWWUQNDZVMALTSRIPMTOBWUVUZVDAZNEYZNSDCKGJWFDHGT");
    msg.s_type = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.531554680137);
    msg.setSource(58588U);
    msg.setSourceEntity(201U);
    msg.setDestination(57918U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.182023923341;
    msg.lon = 0.739398324217;
    msg.depth = 0.865355057916;
    msg.roll = 0.663160451792;
    msg.pitch = 0.434727461799;
    msg.yaw = 0.389287138936;
    msg.rcp_time = 0.944889365077;
    msg.sid.assign("JVQKFUTUZNODSCLGFIHSPLFORCTCFKAHYXKKBBWKMIAMUAMDQPEGGDOEFRJHOYTHVRURPRWREBTMRZQDXYYTOJJGSDBOTJMZJTPSLWPQEQZECOVIVMFANVXVBKWXBNBQDDQMCHWEZJJKCYWQZECTYUIPZONGVHTHENIWM");
    msg.s_type = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.498770603975);
    msg.setSource(61851U);
    msg.setSourceEntity(44U);
    msg.setDestination(36592U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.848909378499;
    msg.lon = 0.138380712573;
    msg.depth = 0.234204804776;
    msg.roll = 0.545326372287;
    msg.pitch = 0.882265121745;
    msg.yaw = 0.123282461224;
    msg.rcp_time = 0.786792065138;
    msg.sid.assign("CANIZMVMJVAVGPCEIZSTSBBQGEGOPMUJDJCATAJ");
    msg.s_type = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.581276269796);
    msg.setSource(31372U);
    msg.setSourceEntity(96U);
    msg.setDestination(27211U);
    msg.setDestinationEntity(183U);
    msg.id.assign("IHFGTOLVOOHRKDIMVZVEOYEXNBXYJPKKAFIJTLSQYOHJFORRNNHSUPDKUCPKMRDOBQXBEEAOPSJLZNZWIGIDUACMKFVGDVRCIPPYJPDBWWTWMKFBOVYXDVHYPMRQCZIVXDCZJJFETGWULBREMIQYBLHMCIYRKZU");
    msg.sensor_class.assign("LOHOXKWDLKGDAOXUEWTOTNEJTFRCGBZGMFYSZAXUPKFRWJIXIQVBJNWNTAGRTPEVYHBOBGPIXWVSFDSPEKHECXZLYLUVQWVNYSRIIXRYYZPUFTEURMZZJFOIUINDTDTLIQOJUCEKSCAGVNWYBKKCLJEQMHTAVYHFAHQZVMPECOKDAQOJBXHOKHKBLLHN");
    msg.lat = 0.386051644112;
    msg.lon = 0.775844233547;
    msg.alt = 0.383444519176;
    msg.heading = 0.949378818927;
    msg.data.assign("EMQLAQIZINOCCLLQAKFEKSIYCPANENYCVNIWUBAOWDLXMGKMVQMNRXICVTUPFYHAOZOLHATGCESWRREAXSMUJGWRISAYHYFXDJGFDTZDTXKILXLZBAULOBPFMJZTUBNSZDHRTCDJERQEKDNVIHPQCCLZPWMPGWKRDVVQZMXWJWOHBGOPPDWSZWKBYHFGFYESTEXBFXESIGUUORJJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.523496673068);
    msg.setSource(43403U);
    msg.setSourceEntity(251U);
    msg.setDestination(22652U);
    msg.setDestinationEntity(234U);
    msg.id.assign("INILJIOBSBUJQYQXAUAKKRNMSLDCQUCUTXCYWINNRMBVYIPIXGUIKGHAVWTFQOEO");
    msg.sensor_class.assign("CQFYMZEIKOGZRICMIWDEOYNFWJUORELWNUAWVFIPAGCLQXNKIKXNMUWVRTSRRQGEWVAYHWAGLPNFCDOFHMAELRZAVL");
    msg.lat = 0.810901899935;
    msg.lon = 0.804207066377;
    msg.alt = 0.473381959794;
    msg.heading = 0.755726916709;
    msg.data.assign("QITIANXZYAWUPQGLECFAOVHCOMJGGDLINKBITXSFZVRHYBRLAGMJNFDWYAPBZYJAPQLANJJEHRQUBAPVKMEZMUXNPLGKUSMWVFCZNHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.621916281995);
    msg.setSource(48167U);
    msg.setSourceEntity(161U);
    msg.setDestination(38344U);
    msg.setDestinationEntity(233U);
    msg.id.assign("KUEBCYAGCLYYDUPWWGDSTVYZVIQDFLWJQXVMCZUORXELLFKAXPVTJSTMSGCEXTANEQKESJMHRSMYUKQMUAFLRR");
    msg.sensor_class.assign("XHCLPNOHXCYSQEGUZXINMJDITKJIZXKTMEPURZNOBASRGISPRALUIZQFOEPLUNDDRNDLRYAGKCLXFDSTSPIBKCSHPRWAGMPMEQKVCEARNAAYYMFIHKDVHQEJESBLRHVAMJBMMTQWTWRVTJZW");
    msg.lat = 0.126537764468;
    msg.lon = 0.618513286839;
    msg.alt = 0.339250457033;
    msg.heading = 0.203443075511;
    msg.data.assign("KOXCAGIQRMNVUPLACMFSVUWTCPQHCKBTDXDBOMCJULNNTWCIKXISHZDLVGEGOYUHDBUPANPTEXZSJVDROYJAJRYSFVEYZWXIQRIEUGZRHMKPRYZSJNSDKRSEZMJKTUEHJXNTFWVZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.952806183443);
    msg.setSource(8450U);
    msg.setSourceEntity(93U);
    msg.setDestination(18511U);
    msg.setDestinationEntity(21U);
    msg.id.assign("XZWFNRRCCZPOIYRHLLNUXSUOOJXMILVJZOXYFYIFRCMTDDQIJBULDQFYCGFAUGRMDLYRUQMHYCUDJDNABJAOOTNGZAVLSGGJKCNENFCGGLVSTVOMHCKWHKENAPKRXBSBQKQQFTKQEVNSUVHGOMWTWEHAAEBKSWDBPWDJTWZBXREZDJRSKFLNXQAHSWQZNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.937402398101);
    msg.setSource(59207U);
    msg.setSourceEntity(88U);
    msg.setDestination(15713U);
    msg.setDestinationEntity(147U);
    msg.id.assign("XQFRLGJJPEPNYYFNGJEARTEMFEAIPHVQWTELIGBYLTDSAJKMVOXMHZKEAQVUNAZODJHHBCQDAISKITWDMFYMMZCGDZGDNARBCQPOPOEIYGSOZWWXGWMQXVWFSOAULQKYZUXDTRGZRJMDUILOPTUCKLOWBJHBTBVVCIYCFNWBHKHUSQDVXGSRLEMEYUKFKKPJZXONBPRYSRWFSNVXIFZNUGHHCKPIVDSCLUWZCQST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.68019054822);
    msg.setSource(10768U);
    msg.setSourceEntity(214U);
    msg.setDestination(41031U);
    msg.setDestinationEntity(41U);
    msg.id.assign("JRILBNHWDLXRQHTIZDZAIKCGNFYYEXOTYBOBAIFEWZZMNGKXDTSAJBMTLNEWDCHYWAQJDJICJVURFPLTGDSJHPTNGMHWNKZLUEYOMYKUEUOLVPRTVYGBAQYQWAJNIAOUTSPJJSINXBMCEGVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.61606477517);
    msg.setSource(8698U);
    msg.setSourceEntity(243U);
    msg.setDestination(39495U);
    msg.setDestinationEntity(49U);
    msg.id.assign("NNOIWRLRQTUSMRLYKYBUXOUNTRZOUYOVTEVMZBKPQSKLQJGTDADTADYGLPIQTKKGFWEEXHBGUAZWJGXEPBCSWDZDITGPZRASUOCIXDBYZEIGIAKFGRVFBWWHWTCLCPOSOCNRBUWXFOAHENMFZFZQJFEPYHBLQEAJBGQMPESSIVDLJVPWVWIZRLBIPVLMSVVDCHTMAUJXSESMDLXVJYYIQUMNHKYCAHJM");
    msg.feature_type = 123U;
    msg.rgb_red = 159U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 126U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.231254435029;
    tmp_msg_0.lon = 0.268213636306;
    tmp_msg_0.alt = 0.641509419125;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.433108225949);
    msg.setSource(15247U);
    msg.setSourceEntity(111U);
    msg.setDestination(10799U);
    msg.setDestinationEntity(77U);
    msg.id.assign("KZIEIKSJIUUXLBZWPLMYMECWHRXRWPPAYDBEOVVQEGHRVMELTZWQRNRXIPFHMOHDXBFGJJLDIS");
    msg.feature_type = 224U;
    msg.rgb_red = 190U;
    msg.rgb_green = 209U;
    msg.rgb_blue = 214U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.330697783909;
    tmp_msg_0.lon = 0.427947346974;
    tmp_msg_0.alt = 0.218709156659;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.480625710192);
    msg.setSource(6U);
    msg.setSourceEntity(77U);
    msg.setDestination(20286U);
    msg.setDestinationEntity(48U);
    msg.id.assign("OYLUWQGVFADHKEJFPYVSQBSCRFBDHCRE");
    msg.feature_type = 125U;
    msg.rgb_red = 183U;
    msg.rgb_green = 75U;
    msg.rgb_blue = 49U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.50458108092;
    tmp_msg_0.lon = 0.751861760594;
    tmp_msg_0.alt = 0.478958243427;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.0312983546396);
    msg.setSource(38128U);
    msg.setSourceEntity(164U);
    msg.setDestination(14842U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.870718667665;
    msg.lon = 0.0797204536861;
    msg.alt = 0.791099391618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.129922013513);
    msg.setSource(2967U);
    msg.setSourceEntity(116U);
    msg.setDestination(9851U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.229994752224;
    msg.lon = 0.00353492422082;
    msg.alt = 0.773121548681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.983043212546);
    msg.setSource(54327U);
    msg.setSourceEntity(225U);
    msg.setDestination(37997U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.399708409683;
    msg.lon = 0.819120237222;
    msg.alt = 0.0337547432855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.71022101277);
    msg.setSource(44787U);
    msg.setSourceEntity(224U);
    msg.setDestination(54341U);
    msg.setDestinationEntity(165U);
    msg.type = 202U;
    msg.id.assign("SSWXMNHORUIRYJIMBQTKZPOZRAPZDRNKRCLHNQVIELHAVTEBJFJDBDMDYPFLXIM");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 71U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.771321256111);
    msg.setSource(37560U);
    msg.setSourceEntity(249U);
    msg.setDestination(56690U);
    msg.setDestinationEntity(53U);
    msg.type = 149U;
    msg.id.assign("NRGHCFGDHIEVEKQLIMYYJSBYEMJUNGQXTWVNLOIASYAJOEQXMZOEXSVPQFTGNJJTMFYVXQATUXWMTMDR");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.0755535426305;
    tmp_msg_0.converg = 0.168295304117;
    tmp_msg_0.turbulence = 0.722184355426;
    tmp_msg_0.possimmon = 163U;
    tmp_msg_0.commmon = 149U;
    tmp_msg_0.convergmon = 9U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.66143408471);
    msg.setSource(25025U);
    msg.setSourceEntity(194U);
    msg.setDestination(32737U);
    msg.setDestinationEntity(94U);
    msg.type = 215U;
    msg.id.assign("WIDINMGUPYUULIXAEDVLFOEQCCJKROIXYYTEAPCOTWCDLTHTMBNFSORKBQKJXQLSNDHTADYVOBGVEAZIDGVNWSHPBIZFQLDNASEXJIMXIAKWGDJMTZIZMBMZOCRJPNZVGBLMKDLSQWTNXCQEQUYWUEPPRJAXGSKJFEUKMI");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 148U;
    tmp_msg_0.label.assign("FIGUUCMBNRQTHJDWVKOOVMCMWVHZZILFHNXKZQLCDRFMNTXNTKYPGHAODDMMVUFAGBVLDSNCFCLNBWUKTUBWYYYEXEYUIZONPIVJGYRBOLOOAARGAGSPARILBERMPXOOEXXERSSQTXCWHCFPMYVQQKQAELJHLXDFWAIXDRQETJMCDLNEKCCRJKIAKSMYLDIPZIQBTGQRZHTVXJKBJZUWONUJIHSYZGVK");
    tmp_msg_0.component.assign("VXAFKSIRNBWRBNBZKHXEKNMOCYQBDOGKTDCYTHBQWCBXPOANVILERNMICRZAOBTXMSWPOJQGPUMRLAMSYCHKFDLLZEPHIYVOWMQSELRYGNHDQNTWRECFADUTQZEDACWDXWFOEIIPVCMFEZGFUSTUGSPZVTKIVGBOHPFIF");
    tmp_msg_0.act_time = 9737U;
    tmp_msg_0.deact_time = 54117U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.768063280642);
    msg.setSource(8125U);
    msg.setSourceEntity(31U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("FOVLQCAEHWZJMAULTQINMJBOERVRNCDYIPPBSHSMSTPHONRXHENTIKSZUJMCJCKYWJUZDFZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MBEJATIOQOHCFJESRKFEDNLVWNDSKDXQCXMGQKZXJQNKXFWITXCQRDJMNUYVLXCHDENRQYYEGMUWEMRBDCMFJYUOYYUCEWDARKGIBTLKVTKZGAFTSLHAIYNIFUNXXGOPEVYTD");
    tmp_msg_0.sys_type = 250U;
    tmp_msg_0.owner = 50512U;
    tmp_msg_0.lat = 0.688050467015;
    tmp_msg_0.lon = 0.180811024678;
    tmp_msg_0.height = 0.807679916972;
    tmp_msg_0.services.assign("ZKCPCPWQSMCOIIQMMCQZIWOPBXXUYNSBYAZQGPWEULGUDUVTXPADRFXDECASGQOLMTKGMIUHVQSWKIVVINIDFNDJBFGRAGCLYUQTYKAEDWQABPOSXUGZYOSTTNJHRHPZHFEOVPKICLYMFEVXBFDONAJTRHRVHGTQJHWEDYMCDLBTRAEZRE");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.862474291087);
    msg.setSource(1562U);
    msg.setSourceEntity(127U);
    msg.setDestination(40112U);
    msg.setDestinationEntity(34U);
    msg.localname.assign("GLEUKNSTUREULMNZMQRSBATWOJDXAXCVFILCGNMOTXGCRDBPOHWQLSYVLHXQNIPPEXDZIBQNQQDZVHIWLYKSWNSAOPZTUVKHCKPQZQJMZDRFHWLRWZMQYJFEFEFAJHOTECMJZCGAUVOPBGSBXHPTHTIYOKDWSVJFYAGGYANYUJBOHEIERTFXYKTNOIDYABLJJWSDDBZMNWIMIJSFCPUCHERVMCPOQFNKRY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.206943313537);
    msg.setSource(64458U);
    msg.setSourceEntity(13U);
    msg.setDestination(42664U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("OUFBSMWZRHEUSLQQHURQZPKBTQLQYOPBJDKLKNKCKLXOVJIMEJXSPIWCGAUUTF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GPYZGAAFBAFYKQLAPBFSVECKTTXXHKRXGJRKEGYFQUSOOHXSGSIPDLRRDFPMIBWKFHLSSQYNDVHCQGKDUWYHEJEUKLTAPRWVIELCJRXDFAYYOAMIVLMWIGPPNVJPRNEMGZTUWNTSGXCNPBHQZVMWZGULJZOTQDIOMKRVVBWEQFNFWHRPKJMVZMSZJTXEYODQJRWTNQFBAU");
    tmp_msg_0.sys_type = 210U;
    tmp_msg_0.owner = 44165U;
    tmp_msg_0.lat = 0.100538862732;
    tmp_msg_0.lon = 0.276398758144;
    tmp_msg_0.height = 0.991332081019;
    tmp_msg_0.services.assign("PNMDQSGQRSV");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.613635874142);
    msg.setSource(24205U);
    msg.setSourceEntity(214U);
    msg.setDestination(52536U);
    msg.setDestinationEntity(248U);
    msg.timeline.assign("BNRBMRBCRWFBRJPKCBZQVXIWVDKNNZHUTFWEYDHQFDOYOVAVSCGTTYUOSCMSUJTJJXESDHVOVFYGPGGJILKRVBOWFPXMQNUWQEYKNASDEMLBTFACALJHWFKPWKDHYBMNZMUZNIWNXEHIJPZYDSQV");
    msg.predicate.assign("GXBERUWUIDQQPMFMMQZBIX");
    msg.attributes.assign("NMHVKDUAVJLWJGINRXQONXIDHUOLUUKPDPHSJMSEZYTVSIZQWPCBAQUSKXXCOGQBKRAZHWAIDMJCTKDAQEDMEFNMFEHWIZTVYWZYGDPXTCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.230592769263);
    msg.setSource(392U);
    msg.setSourceEntity(148U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("WQBGJEOLZMCOPXANCELJELQTMIZBPDFAURQHZZLHHODCFEREUMBTYVKHSSNEEARDYWKXGZIBJZPRMAAENUVDDNCARFOUGFACEZJSGDLITYRGNWXJWOSSXKFDSOYIMEHPNOAJWXQLPUWPUSYOMTSVJYKSNVPWBNNYGQMXLQZCVKITBWTGIPVPJCGHTMW");
    msg.predicate.assign("JGWTGOIIIEOBRJBPWJBGMHDMJEBEPKSIWWETAFFTUTYRGSQRSAVKLSDPFRLYLCKDCKJDWFVVNYLKSHNMNLEPLVZFQTCHMYGNNSZYQMOXQJHZNQSBUXUPUQXEAHOCQZBNMGXKPDX");
    msg.attributes.assign("JXWSKJMISUTZGYHDVLIMFQRBLXTJRHZNFFECOSXXJIYEANDFDKEJUBZJMCAHWEPXLOCEKTWKREAZNCITLVEUQSZUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.618784952599);
    msg.setSource(58649U);
    msg.setSourceEntity(142U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("QJYRBJBELWOMKSCANJGLOKKKN");
    msg.predicate.assign("VRUFOWHJHSBNCAXYPEUNRUIBNFXTOELDVYFFKPUZOWCMNXFLLLROCDHVYDDKOQZRSVYIICQGNEXPZGNLQVJMTOPZBTCQPFSMYQXHTKJQMKMLOUGOCBWWRFVUAVLYETGITQIEPOAEYMABBYVRMSGARNAAIJDCXDTTW");
    msg.attributes.assign("WBUIHUTPQIDBMFREOVTURLAIYANOXJGHGQKUUDEVRSNGWTRXLVFWEWTLTMHGFPXOGMWWHFBDZPZHOMDPNBFCUCCQVRFCKNZRUAJKXJOYJVYSGRPSUIKWMZZPALKOXJIZNJCNHDXDINBKEEVMGVIDLCCYTIFQIQOKTAMYGEQQJKYSYFXJDCJPBTVLXSAOUYNVUZXQFLPEFSSLTRJVYYPSMWAEXACHHTALQRHWBKDSWBPOGGEHNZAQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.423176331319);
    msg.setSource(41221U);
    msg.setSourceEntity(89U);
    msg.setDestination(13420U);
    msg.setDestinationEntity(22U);
    msg.command = 109U;
    msg.goal_id.assign("QXKMEKGAPJ");
    msg.goal_xml.assign("GMEGRKGSLFVUBHVJQTQSXETOFCKETLNHVIZPDBOURDHWLZJIXWWFAKHEVKPLLNBBZWVQRCFTZOURMPFANARIFCCMJURAMSUJHEGQGTSBQJCTXCAKDEJNAOWXKFMKKPOIBSAWFNJOWVIOFZGXRVYJJZSXHIPGQUELMPPHRXTNVHYGXODMXTSZSLUWXSYBSVEBYAFUQDZDLAPDAJUMYVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.0660710759334);
    msg.setSource(33279U);
    msg.setSourceEntity(170U);
    msg.setDestination(1533U);
    msg.setDestinationEntity(41U);
    msg.command = 41U;
    msg.goal_id.assign("IPPNZPMLKYHMDGMARCXZBQUWZDFBBNOZOKXXTRNVSYHTIJMXLYHTIWTKEDKEKGZCHNRJZLSGSGEBANAMBMLJQBOFRZYOQBUJYCLTCKMLRYBJSCQUJYDPEIXAEWFXKVFWAVZVRHQYDQQUGEGXITFEVDXTCPUIPWOAKWVZYLIUGUHJERAGDPANTKTQFPPPEKCEOR");
    msg.goal_xml.assign("EVPMJVOYVMXCZJNYDHEFZRQGZONGEMKRIGZBKULCFWSPMCZBTTXIHELLGJUWCMBQOJSEYLEXLQOENPJKSVVOZNFASOHDQCAENENJMHLTTQWCTMXUFTAQHYTVPYHLVFDWFIBGIXXYUUDNIIPBQWRAZAPRDBTXQJHLNUGCUJOSGNTDWIVXZJSGFGRATKZFOPKFNCAWIRDLBHAYGOISXUMXPBDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.760403091187);
    msg.setSource(37305U);
    msg.setSourceEntity(231U);
    msg.setDestination(65522U);
    msg.setDestinationEntity(174U);
    msg.command = 206U;
    msg.goal_id.assign("BPFMGGIPMQRHAWTYUFYPLHPYJTAFMXELWXHVJQBCUMKVNYWWMOLWYHTYUYJCHVUSRSIZUCBLBIQNUIFZBSRJARSIFBLCGJDBOEDPDJVXJJFYCVZTAJVEPGLDFKLXXUKACOFONHOZKNYSOBSCNNKQQXRAQZNQATCIVTGOQNEMRQKTUHXMMXLEESDWGREURHKKAPGAVVMAWT");
    msg.goal_xml.assign("EDYFDFTKMVVXPJLJBNPWQRLGCARSNQRYJGTNASYMWYMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.959386150107);
    msg.setSource(64116U);
    msg.setSourceEntity(137U);
    msg.setDestination(23546U);
    msg.setDestinationEntity(243U);
    msg.op = 150U;
    msg.goal_id.assign("RCTJUADHJFPCYSTASMZPAAMLLQSDCRPUHMNPQRHPNDZWKVMTIJPNBBHLJYVYUBQQLERVGYANGSGHBUXZKYJOKGAFXFLXAOOOW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ADWGVNOGNAJBZWSBLGVUKVWVOEZPXUTFOMGJZYERZYLJVRBPHEZITKRMDODHBGDASRACNBEBYWISPGTOCZCRJKGMCXPYRETJVJWBCSXJJXQXYCNOWMPLBTQDOECIYWHIRNRA");
    tmp_msg_0.predicate.assign("DMZDLTPMUHHCJIRMPNHJOJTHLYSHCGVGOMYFQVCYDCRAWKSGCYDIGKXNSKFOZIWUOYDJNOBVDASHYVUFUIKHPHWMBXILLKMJBQFUTBUEDBGBDQXEEFWBRVAPWXLPRUKRLGUCWRSQKRMYNVPZWZOUEOSJONMZKANEXLCTIKFEALYNGAIVZZPRFERUXDIQTZEOJAFTQGRMFA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IKYWQPNZZKHJGJQAEDARETKVWGZSDMDYFORNRGWHWEUXMRPFHHGOJIQKSNFIGNUFCT");
    tmp_tmp_msg_0_0.attr_type = 198U;
    tmp_tmp_msg_0_0.min.assign("CYDPJXKMFWQEXFABZPUOAYUYYVNKTMGTIIAMJECLSZSPYTFCLENFMBWLDVUZAXOZGOWHSNPMPFPKEBRSQJEQROVEWOIPIVIGVCHBIAIVFORQTRNBLKDAYDHOWFPGKDOTFWQKUYCMHUIVGHGPTNVVEPHALSLLUGXHQTXHXWHFTSCGDKIAJGBBJNERZTBJRLQORURZYUMMZNGBSKXT");
    tmp_tmp_msg_0_0.max.assign("KYDFGTJBIWBPGASCYRQNHCPXDHZNZPNCUUFAGVKQLA");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.44405086166);
    msg.setSource(35622U);
    msg.setSourceEntity(243U);
    msg.setDestination(44937U);
    msg.setDestinationEntity(119U);
    msg.op = 42U;
    msg.goal_id.assign("NONQRQEBRXIVJYDIMPSBJULLMKZPFUPXTKXUSDKSWEIPGJXVCTCJVTOBUWAHUCGODWIGAWHLWKCFOBXKQRBSDIEMURXNURICTZNQIQSTALMQKXYMZVMEAGGTQYLMJUTQKCHRN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KWZSGKKBZPZYVXVJMSRZSIHNRYJSPLYRBGFCOMBOENPCECXNLHHOGTTCFFUIULCZOQVHAWDHHVKZTTUHHSJYJBMJNAIOUGESAZYQDLGWQJDEBRUXEQRTJKT");
    tmp_msg_0.predicate.assign("CKYVKUMFTTABUKKIBSRKLQESWDTFATNWKTBZRWJBJARWZDJIBJWSUNOJZYBNMQOOFJANPCKAEZYTQLCUEOXSYGQPRDHGGVHCPRCINLGTTFXQQUEJVDLCPNEHUYIFSGSOPQJDNABVFUEXPYCOZCAHXUHZNOFPVXGDJOGWDPXMNWGDFCKJYRIHUSLHUZTSLXAVRYVPBEDMTIERLBYLIMEXRKXRGWMQLF");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.660523511905);
    msg.setSource(2762U);
    msg.setSourceEntity(109U);
    msg.setDestination(23969U);
    msg.setDestinationEntity(225U);
    msg.op = 67U;
    msg.goal_id.assign("CUDVBCGZBWXNLAZGTPYWOZMVQXUBBWQVLENHFEDTQFKELTIDEUBUOCCPSRSTKJGQZXVBEMCWJRKNSYGERGXUSUEVDHIORFGVOJEDNTSPFCKMSQRTPDEVNDTNADPNXWTBMCHHQACAORLSEPINJAQNRQUIBXQMKXHKTNZJDAFHRIKJLKLMGLYYYAYZSVKRZRFJOIHHBVTOQYZIYLVXPHMJOWLSMXKCUYWUGYDFJOP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AZPMGOTPQPNISCESCWYHCXYIYWQIXUZHMOPZYNSMLTCICGRDFEIOJWOEOBVNLMIYUIJIRPASAYNQFVYBLDSCMLKVZXNNRMSJCZKUTVOBNQFJMBMYFLGVJURPGTRWHWGPDVUTTDKSDWQTUAPTIISXMGDNAUHKREXKVJLJKEFGRKMJZUKRHWXRPVWPNEABXCLZOCGSYJDZ");
    tmp_msg_0.predicate.assign("TPFAKMHIRINNTJAIQUZBXZYPZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZDPXKQYVTPEXBUWEIWMBHLQWWXFVPTBSTOOOOGXHLSMIPSZKBGQKFQNVYGDHIKZCBIFWKGSFOXRSAZCHMQMEHMPMYRFZTHJVLZRHASXQWZUECNGZFCUAJIVHRUBUMBQWQUGYYBOLVPIDTCUIKQWZELDPCNSXJBAPCMSCNUKYJFEHAYJKPNGWBNAUVH");
    tmp_tmp_msg_0_0.attr_type = 157U;
    tmp_tmp_msg_0_0.min.assign("DSSMETUPWIDMRKHYQNIORVJCLHZNCHRPMLHFEEOYLJNEECDQXPWIMCRMCQFRZVCXKPKLTXBMYIJRSCYBAPAGLDJWBDSTOLTODWFNUONMAMEJQTJSPUAIPRIYUKKIWGUBXFBZPAHGVHTTGAN");
    tmp_tmp_msg_0_0.max.assign("POZUCPDGTBTBMYJYQOJBUFHOXYHNGSNVMGWSP");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.768436601628);
    msg.setSource(34309U);
    msg.setSourceEntity(51U);
    msg.setDestination(43092U);
    msg.setDestinationEntity(166U);
    msg.name.assign("AQASWBLPGLJIXDNZJYWNMRSPDZHCDBJIEBDCFYPEUZVVQPQGODUAGMXJWSAGTHRTZMHXFVFQSKDCEZSKMBLSWVRQRKUNYOQIOCJUTQBHHFXJTBRRTYKAMLJ");
    msg.attr_type = 35U;
    msg.min.assign("PZPMHUJHKATQIHBGIRLRWODDOQBLTFPOESOYYQQTIXYYEVEZVHFZELMGFFCLXR");
    msg.max.assign("MZHAWAOZFUHGBQJLTFEQKDWXCRGBVSZADVUFJCUNKWQRIKTYDGQQMMOIODMYTYPSWLZFJXYLLONLBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.919290626156);
    msg.setSource(60134U);
    msg.setSourceEntity(85U);
    msg.setDestination(22641U);
    msg.setDestinationEntity(22U);
    msg.name.assign("VJRATUSCMNEPAPYGJTEZRTPMKOCLGSNLZDFNUQYYEJBQMIEYKKLSNWCIVXJAEQQRRUSZIHVALBCUVULPXFJJOOYGWKWIJXUSJWGWHARDHMDSXBRGGTQLBSEOGNPHMOEBAOHQWCAHKM");
    msg.attr_type = 26U;
    msg.min.assign("XYBKWCSJIUALPRVNBJDXOMGTLFCGAWCFKSABHZSPENNRDFEJYFHYOMLQCONAQIENVFSRHMYTBKFSTJUFVIKKDCZDNCRWNIIMZOGSNURAEZAUXETWJWNDXTOKFGYRZJXQQVVUDTJOBAXSWGZHCUEOLGHPZXGNGIYDWMPQPWHSBTBJRBGTPSBUHVYKJKXEKPDLDIAYCQLHVMMOUFWGFBOUIVCZZTVLMMOLPEAQQIPAL");
    msg.max.assign("TWTJKHFFRFXUFZFJEAEIFSIZCJAXYNNEXSXRBAPRRMKDAZOGMCFCAUHIRCVBOQTPRTWQLLGBTENKKXVIKHHJBBDBULKETAHNNKCBXNPKZSSEELPIFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.803264916037);
    msg.setSource(55320U);
    msg.setSourceEntity(148U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(87U);
    msg.name.assign("BSUQZPNMOKKZBPDISKLEASSRAUVFNVXBOALZAGJBRSUDEXMRIJOQVNLQSTYSNIJMVXCLXXMIDQLAQTBFZWJXNFZHEAWYTZOMBHNITSWDGOHJUFYQOXUYMJYKMATHQYIICKDBGJCPERHDOVHYVLQPUYIPPKYRLFGCEAWBZNGPHOZMVGYWKKGWUVZHGHKLLXKNVGBFCNWFCIROTWFIDNJDE");
    msg.attr_type = 168U;
    msg.min.assign("OSLYVGXVLOFJWNAZCTKKOGJEZUFUXVKMPTEKNHNNLQDEWWCTQWYWNCACPGFQSHNHAJQVJHTOJZPFGGMFARMOOQPQARDZBIZNKKWOICUYRKRKPLUCJEIWRXTLJVOTVMAMLTMWLOFQJDAHIXXDNYGWVZZBCZFBESLELGVRGBD");
    msg.max.assign("KRDOMEGIJJKJJIPWTWXVWECUMXZTZRQJVXFNUNIYDJVBYFVWROAFFPCDDGWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.635490219396);
    msg.setSource(8601U);
    msg.setSourceEntity(102U);
    msg.setDestination(12814U);
    msg.setDestinationEntity(224U);
    msg.timeline.assign("DVDZUNDCKGMPAWMHSGQTLQVOKJSWCNFUYFYRSOZXMGEMBTDQAKOHMGEWTYUIALQPAKYXFMGKAPGIXFGGZNHCDXYLHLCBYJBYPSDIXPHONBPOUZKNXSWDTTIZJIEGSHDJSPRNUNWZKEEQKQJUHUVQCZWEKANNUTUJPKRDAMJRCOSXTLCBDARIVBFTYLIUZOOAWRLVMIIS");
    msg.predicate.assign("VAFKMZLZUXPYCFWQZTSVNVIAFRSESFGJKVEAFJOQAQLTUCMZUSVYXEJJDQBEIYOFSPHTWCRHEIEDPZSVSWAQEGNMEBHNNGGYDLDUUWFQMTFDJNDDAGHXMKOZCQMYDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.125595376334);
    msg.setSource(42528U);
    msg.setSourceEntity(106U);
    msg.setDestination(42004U);
    msg.setDestinationEntity(213U);
    msg.timeline.assign("DHTNKGCJHXNZFCSBWTCHQPZHCCZLKXETCWEDMLZZQPUSVEGMYABTFKUGFXMBNJVATAHGCUDJVIQSSXUIRMOFVA");
    msg.predicate.assign("DSQTQCUVNDDTJRPOHIGTIWLGSDIGNHSEYDUNVXHGCMBEKJCOAETZRYUXIRHMKCAYFQVFHUYLVKSQVBSVXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.537646946375);
    msg.setSource(38813U);
    msg.setSourceEntity(44U);
    msg.setDestination(57730U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("SLLJDNKHHXSGSDYSATWWMUPKYHFHFBJEMGIIXRMOWCUQXUPRDSOZUVGITTOHDZUPZIHRDEYYRQCATBCCNQUVBJ");
    msg.predicate.assign("FNWHZFNMBBYYTXLZWAFNHEJVXCCELYCDSPXTTEWOIUSJDSZZLBGCOFNGDVNMKIYMNGLXQGTCEYTTMOUVPRKNQDYGHEFJCVSUSTPJPDVHUAEYMFHSOBQIKODRPKBGQAAJCZKKIRXQREVPFVDFZRACLTGHQZRSHKBELGCKXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.719550829312);
    msg.setSource(24941U);
    msg.setSourceEntity(42U);
    msg.setDestination(38235U);
    msg.setDestinationEntity(67U);
    msg.reactor.assign("HMTMAMSWGNOIXVRXTCRB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NJNCHEKRZIDPWMYRRUGQLKOMIWAYOGHYVVRYBTSSMBKNAFWOKSZXWIQLYOQVZSKQRECJXTFJXPNGCJIBOHFIPDAIYOXUPFGBNBTJIRAWB");
    tmp_msg_0.predicate.assign("QFNILYUJBOUENOFTNSYUKOAPYIWICUAMDMYSMRVWNPTEERCBL");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.483512650824);
    msg.setSource(52835U);
    msg.setSourceEntity(165U);
    msg.setDestination(13543U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("SRGQDWOCUMFAFHSHIQZMAYFTNDAOELMNZPWBDPKBKXDSTDLTHZFZDYBLKHFGHQRQIGZREJSPOAUOBONHLYIEGCVTSXYPUXORQFFBWAEXFKHVCYUVSMGXIJAECTWPQDLKUCDUNCEHWSXUFKBOZJOEVOCTTINNWJUXEKOWJSDYZESAUZPNTPYBMXLR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SZLTTEAHXYNDOHWWWRXMTXIQGEUYBDUXTNLICGTXPMOCVUYKIUPADQVQDEHAWVUPRQKAPYCZVAMKWQCJZLCQIGRNBEKJHFGCLSYEQNXBVMAOWXJFBLQQWSSEJOLYOBEYYUIGWPHPNAFGGDOTZNFCMDTTRAUHVJIRMMIZXCKWVOHWFDGEQPNCABRGRJAPBMSFCOGRLIKESLYB");
    tmp_msg_0.predicate.assign("ALZNEHBXWPMGTJOSUYSMYGXRASTUZXYNRIPGKDOKZARQUDQUZTKSBMMDGCSHXQCPCCXOQLPRKMUFQFFHHPXQHZLVYETQPWRDKIDGGTNBMBPRB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CVTZKDAUNQKPVTJ");
    tmp_tmp_msg_0_0.attr_type = 237U;
    tmp_tmp_msg_0_0.min.assign("HOEBWRZAOOIUVUFGXQNEYDQFTPLXSUEMHBPSLMQLIUEGPRUMNCRQSVTISXMJJZMMTQDBFPAXDUBLXVUZXOXQVIFORHMPVOKSCFIQCCJKMNLMGWNKDEWDTJSYLEDELQNBEXTBNREAEYGXZWYMOJSQYRQNRFCOWIKGKBIPPHTCHPIPPHVRYSAYYZFAAUCCZVY");
    tmp_tmp_msg_0_0.max.assign("HLUPVCSVQGZDTMOQQDZWIDVJLHURXIQCBGYPHLNTIFSOOFYZFVSGLDXTJBJCHSKVKNTPMYOUILKYDNFUEDRJYFUHWSHPXOATBRAVMDAABQRWCZYRBMXSTRXTIVLNWVKNDYJMDSRBLAIZOALIHWROCKCGYWAEJQBVRHQIHEZFCNWZ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.537466557102);
    msg.setSource(50313U);
    msg.setSourceEntity(248U);
    msg.setDestination(40106U);
    msg.setDestinationEntity(147U);
    msg.reactor.assign("SJBAZJMPWFWYIERXNRXROUEQYLGQEVUPNIJJXQSOVXIKNYAFLDHHKYCIIDKHHFASSAPYBTONQKNFJKPPMRYYPLBUDQMJVLZNGGUATQPRGXRDANQTDBOCZPCMGWIGEMFZHUVTPCBUUEVSLLOJLVKAGDHKNCTIRESTTSOCMOXSBPITZEXWWUZFEZDSVDAJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.441330090991);
    msg.setSource(56217U);
    msg.setSourceEntity(52U);
    msg.setDestination(12290U);
    msg.setDestinationEntity(25U);
    msg.topic.assign("KBOTWWNBZBJHCTSETRLVJYWMIHRNQRNXJFCTKELCZONTRZWEPSICYKOQHKPZULRMQVYLSMBXIUBJIPRNZVLWVQHKUZVUWPRDNAVCDUOFUNOOJZYGHCECQOHYXBGYUYMDQBSULGNFXOJAIDGTDFIMPFPVQGQLCHYOBEAZHADDAHSQXFQZPNFKWSSFSIVC");
    msg.data.assign("JDIMGDIXTNGZRAVJOVJIRIUNCWLYRTEAGCVDWVYTWDOEXQQZCXJEUOQFKMGMXDDYBTTQYJCSUMUSOBWBXCMNFHUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.921355493073);
    msg.setSource(51455U);
    msg.setSourceEntity(166U);
    msg.setDestination(13316U);
    msg.setDestinationEntity(111U);
    msg.topic.assign("YQQTKSBIBTGRXMHNDWHAQUHNOXFBXFPJDWYZPVVZJZGFEDXZHVNBY");
    msg.data.assign("QSOSTZXNZOJUUUCGRLMIKWFIHOPBRTFJOFUDYVLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.175470266022);
    msg.setSource(48488U);
    msg.setSourceEntity(235U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(122U);
    msg.topic.assign("DQBFLMBPWGLCAUZMJPPNKGVJYWDNKLOZBXFCOEHZOPTCXUKZJMXAJOJZYNOSYMQIFRWVKUDVPULQASSWZBESGWTOGEXUBGYVNJKQDSPFFTTHTVNXMSHTIMPHHIKUZZUKFBKNKRLRUJGLNJCQZRAWYVWLBRWJSOLXMVCQSWBOBSSMID");
    msg.data.assign("FBDJVUZYVDZZYWOUVSCMMWEWIETWPXVQLUPEEZAAFGJQLWVUAYQNRUJUCWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.0108280546987);
    msg.setSource(64801U);
    msg.setSourceEntity(47U);
    msg.setDestination(48115U);
    msg.setDestinationEntity(104U);
    msg.frameid = 201U;
    const char tmp_msg_0[] = {69, 103, -119, 82, 43, -42, -2, 105, 20, 121, 91, -33, -106, 78, 46, -124, 22, 59, 3, -61, 28, -84, 75, 87, -52, -82, 109, 101, 41, 35, 81, -45, 25, 35, 68, -63, 12, 88, -117, 112, -112, -58, 58, 14, 55, -59, 2, 24, -67, 62, 12, -12, 110, -104, -64, 2, -126, -108, 22, -108, -29, -21, -78, 4, -103, -120, -124, 73, -13, 64, 20, -88, -76, 13, 77, -59, 28, -82, -81, -119, -42, -76, 35, 119, -11, -10, 90, -77, 2, -102, 86, 68, 119, 84, 39, -108, -52, -114, 57, 105, 34, 51, -110, -68, -125, -29, 26, -90, -19, 77, -51, 19, 45, -2, -81, -93, 122, -78, 125, 112, -117, -30, 115, 7, 122, 16, -121, 29, 69, -65, -30, 62, 24, -80, 71, 65, -75, 4, 115, -94, 5, 6, -2, -57, -22, -11, 42, -80, 68, -109, -25, -6, -60, 72, 55, 106, -100, -97, 7, 20, -94, -48, -40, 9, 125, -83, 44, -61, -126, -107, 104, -7, -43, -105, 97, -67, -88, 67, 124, 51, -71, -88, -117, 42, 118, 94, 75, -84, 122, -74, 24, 107, 120, 47, -116, 96, -66, -8, 28, -104, -52, -22, -34, -92, 107, -99, -65, 5, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.561982120352);
    msg.setSource(60294U);
    msg.setSourceEntity(210U);
    msg.setDestination(731U);
    msg.setDestinationEntity(51U);
    msg.frameid = 72U;
    const char tmp_msg_0[] = {-15, -18, -39, -27, -5, 21, 7, -84, -12, -18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.845464921648);
    msg.setSource(22802U);
    msg.setSourceEntity(107U);
    msg.setDestination(19931U);
    msg.setDestinationEntity(199U);
    msg.frameid = 223U;
    const char tmp_msg_0[] = {-91, 7, 1, 3, -110, 40, -83, 51, -76, -9, -64, 38, 75, 18, -103, -6, -2, -48, 104, -109, -56, -128, -35, -51, -59, -1, 73, -33, 26, 92, -123, 68, -52, 53, 43, 67, -79, 20, 95, -54, -112, 27, 51, -40, -78, -123, -93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.573679926559);
    msg.setSource(11144U);
    msg.setSourceEntity(54U);
    msg.setDestination(36495U);
    msg.setDestinationEntity(32U);
    msg.fps = 50U;
    msg.quality = 42U;
    msg.reps = 223U;
    msg.tsize = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.76821918222);
    msg.setSource(34020U);
    msg.setSourceEntity(115U);
    msg.setDestination(53189U);
    msg.setDestinationEntity(87U);
    msg.fps = 251U;
    msg.quality = 160U;
    msg.reps = 186U;
    msg.tsize = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.0651232726546);
    msg.setSource(11573U);
    msg.setSourceEntity(232U);
    msg.setDestination(55582U);
    msg.setDestinationEntity(239U);
    msg.fps = 3U;
    msg.quality = 236U;
    msg.reps = 183U;
    msg.tsize = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.137474013614);
    msg.setSource(63760U);
    msg.setSourceEntity(96U);
    msg.setDestination(8839U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.0245976503829;
    msg.lon = 0.877233733852;
    msg.depth = 149U;
    msg.speed = 0.045686830731;
    msg.psi = 0.600527595938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.308663205185);
    msg.setSource(4761U);
    msg.setSourceEntity(204U);
    msg.setDestination(56393U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.305237864515;
    msg.lon = 0.719193786783;
    msg.depth = 4U;
    msg.speed = 0.541724411959;
    msg.psi = 0.262479186689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.0438840512578);
    msg.setSource(39936U);
    msg.setSourceEntity(172U);
    msg.setDestination(44298U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.380413056445;
    msg.lon = 0.166016664496;
    msg.depth = 132U;
    msg.speed = 0.681214836028;
    msg.psi = 0.930207772086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.91768349351);
    msg.setSource(15375U);
    msg.setSourceEntity(162U);
    msg.setDestination(8176U);
    msg.setDestinationEntity(84U);
    msg.label.assign("XQQWADOANTIMLCMNNLKEHTPGYAXLRYIZFUPDYZSNWYDEVNGLAZMMKGRQBYFSJAZUQXBCNJFIBPLKQTJQEDODRZNMTFCEGOIPE");
    msg.lat = 0.0243263285682;
    msg.lon = 0.742344234914;
    msg.z = 0.308730818786;
    msg.z_units = 107U;
    msg.cog = 0.982924993454;
    msg.sog = 0.183756204617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.521036947795);
    msg.setSource(37455U);
    msg.setSourceEntity(240U);
    msg.setDestination(63624U);
    msg.setDestinationEntity(188U);
    msg.label.assign("OULJBIEFEKZTWITNDFDGFRYBZNGRYSOXVFTUNQGMFDIJGJIPHZVKBMUYAKNQIFHGCCQHMHSFQUSPMRPTFCUGQEPYYHPXLSSDBHZJUHAVWGPJOBQYKTSTTGARLGNWPNKOAYXXJATCXHXICZIBZYO");
    msg.lat = 0.593752858661;
    msg.lon = 0.212231164519;
    msg.z = 0.701517307835;
    msg.z_units = 249U;
    msg.cog = 0.127917880066;
    msg.sog = 0.25980618008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.10826581622);
    msg.setSource(14409U);
    msg.setSourceEntity(178U);
    msg.setDestination(45879U);
    msg.setDestinationEntity(109U);
    msg.label.assign("GOHSNAFLJKMMQRCYHKUWOAZHXVZICPFADYSDTYESCRYODPODEAGSJEGDNQJBVPWEJPKQHHTVK");
    msg.lat = 0.158534297109;
    msg.lon = 0.470760856257;
    msg.z = 0.177987140695;
    msg.z_units = 52U;
    msg.cog = 0.330982008656;
    msg.sog = 0.937765715465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.961808301583);
    msg.setSource(48778U);
    msg.setSourceEntity(74U);
    msg.setDestination(35382U);
    msg.setDestinationEntity(224U);
    msg.name.assign("FJJAVSGJBLOBQUHZHKBMYSZKKBAVARMLYSIEUXTINSVJWEMVJFDPNDEZTUKCQMOUTFFTRMDLPJTHSCQDLZYVBUQLUPQIGREEVXDXKBQNDEKRITUHRZCZXHLGAONCOXGXZIBAPFLEVQUGPRAPBFOHYWMXNDAYRSPWQWBOSUIONMSXWPPLDOKJGDOTLSG");
    msg.value.assign("IDGQKDPAQXGBWZJKNVHVFZKLAJJXFNKXDCGCKXJISORHQVFZZVOPXTOLZGBTFEWNMNKMRWYVRNLMPUKHMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.671921980177);
    msg.setSource(28340U);
    msg.setSourceEntity(220U);
    msg.setDestination(60794U);
    msg.setDestinationEntity(75U);
    msg.name.assign("PFXUANTIKMPCNLGXCPUYVPALTGEOIXJMKDPKBXBRGEBROJSZZTUWD");
    msg.value.assign("RHQQCYDEXXSNKURWDKVPITJABLQEDJMPPZRBUKFZRMQCQOPVHLTQDSVRREHFUCWDOHGKMYRHECBLVXBNHWUISAVWPKZXZRVDCGDDLAEKLHEIASEBIETWYEHUGMUPJOTAMGACJDZJFYHXJZLWOLICZAUXGTOGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.0526106655816);
    msg.setSource(42917U);
    msg.setSourceEntity(105U);
    msg.setDestination(12851U);
    msg.setDestinationEntity(51U);
    msg.name.assign("YRXBRNRQWSKFDYVJVRNWSXOZYFAYLBWEXHBDDBGAIRBGMEZONOILPFCSGHQCKLZDAYWXGEQBPOJHCMGJOUMHVBSGUOQLHMJKICKFPZWN");
    msg.value.assign("MIMAPCTXZRHGALKRBGUJDNCAIULYGFXUZNATWEHDPTKWYMOVXOVVWRDVGV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.108177676925);
    msg.setSource(11421U);
    msg.setSourceEntity(142U);
    msg.setDestination(8520U);
    msg.setDestinationEntity(103U);
    msg.name.assign("EJCTEUQQIHMMENIMNNJNSLBOOCIUQJDZGAIXJSVZGYSDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.228101021613);
    msg.setSource(63014U);
    msg.setSourceEntity(216U);
    msg.setDestination(14616U);
    msg.setDestinationEntity(136U);
    msg.name.assign("XCCUTGKBOGDFIMBTZQPSWBUHJEWJSQACUHVGZPYFWOCRXKTJPZBECULHLIVSYFTYFOJAHFTILVRVHMBMWEIMXSFZRWTFOOFNMMUSUCDDGUMXXJAODNZNJWXQMEBSAYHUFVDJGLVQDNKISJZAYEKCERJCCGVLVYABMTZSPTXZIWXRIZGK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TUBXAJCOIKRMQAOHVGKUOFWPCWWRUDFRXPPWZEYUWJYSYBPVCDZTKINXNETSUGILZNUURQGGQJGFLVDHTOQZNFUSXYDXSWELFCCLBVMBSIDBJVILGPSIXXDMRUKWMYNKMJYHHPIGNPHQFRMAHESTMNLIOTNREHUGLWBVQKOZDWSYQECYVKJMOZMGRQNIRSD");
    tmp_msg_0.value.assign("ILSXDWGOSGWOADBYYVTGNKQKVCJHXCFZQNCAKFZHFGBDDGCHPZWVJSAHGKEPGTLQNAIFBUESRROMJXAYMCQTHNILTMKTEEKMKQALXRPZLIRBJMUXEGUFTVXCUWJNWXBDFSCVJRHSPFPNAIDDQPQPBQIORVJIVLZGFPGOZYAYEYSHTLMBNUAZIWENDOHAKMINUJJULQSKYONRYMCEWFQW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.402299981272);
    msg.setSource(34747U);
    msg.setSourceEntity(54U);
    msg.setDestination(11031U);
    msg.setDestinationEntity(88U);
    msg.name.assign("QFFRWNSAFHATURRQFJJPKVLGPWTMYVKJEENADZUUOIQXMFJBDYIVXAMYSXPKCNVMZTIIZAGVHCQNJQCSAOOELDUOBVOJXJKPTUYXWNSLAHWZNJWRRKHFYYIRHCSFLZPBMIVZKEVDTGLFBIPYZTRAELDEQRUYHNABSSSKECCLQSBGIQTXNDPPGLOUGODMURGHBWTMUEYBXEXDEKQCZVWGPZTSRBJLVHONH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.441309922148);
    msg.setSource(56048U);
    msg.setSourceEntity(243U);
    msg.setDestination(794U);
    msg.setDestinationEntity(18U);
    msg.name.assign("ZMTBWYDRMRVSKAITTHTFTLGEMIFQYBGAJTCMTNXSAEZTSZYQUDCIEEFUCQBMOWVYGZNXXXVNRFSBHPVCOSLPDDAOIBEJOJTKLGYIHKYDJPRKUAVMECARRUPFQQHSNBLIHIPWXXVQWVGCFOH");
    msg.visibility.assign("AAFEHLPECHMLHJNWSHVKQTCWKJKSQEEESVIWBGOUYJDRZGDHUPGLEXPMXPGKOTQNTKUVMVXZNOJKLAAAIPGPRYGYJATWTCFWJQOBSVFUKLYTKUAPDQDFUXJZIUTYNBLAQESTTMXSAPJWFYVVWGZREXNXNZLSIMNUZRBOWYZJR");
    msg.scope.assign("ZOFKTDDHZQCLWORWKESRTNOMOOUSLNKABZCJBXKIVDJGUBCDUQEYHSLAPGRACIYSZUPGIVOQAGOWTNUQPSAJVNFKWBTJJIZAFHHJYTKLCSVQRYCNXIDQTMQSBESGAZYBDVRLFHQEJYLVNHZMRCKSVDWPIPXNOPPKDYGMFWHMOCGXPRHJBXWWEGVFXBNRSEBTDUAFEIMJROGIKMWQYZFBWKTMXJUUAZXVAYEMLEZLUIFYTR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0966025492512);
    msg.setSource(35347U);
    msg.setSourceEntity(50U);
    msg.setDestination(60065U);
    msg.setDestinationEntity(98U);
    msg.name.assign("OAVICAAUSTWKTISQESFQTKUCXONGLIGSVWKHKQLHXOJBXRFVSOPQUYDLGDVZMHTPXP");
    msg.visibility.assign("CHBCLQIKDIWGXZFYQVXMHNZTWYANYMCFOPNRSQDRNZUEVDNTVLXUWQCMOK");
    msg.scope.assign("UODGBKYSEGZOEHGOZJYGHPLBR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0153954991876);
    msg.setSource(27418U);
    msg.setSourceEntity(46U);
    msg.setDestination(8064U);
    msg.setDestinationEntity(123U);
    msg.name.assign("CHKVYEMUAYHGUOSFHDZNNYGOFVXWFILYLZEIMPKCUNTVHMARBVPTOODAKYOIPXXWPUPTSZOLLVWSELCLZIGAIZXEAFMFDPQAJQADBSNNKBOHNWSQHPJXTEOMFOLMMJBXCGWBNBZEPJHYCDVJESVUJEHRJXCPRNYGAYBYRTLUDSWDZSTHDEIQGMZGQMIVWTXNBVQWLYUM");
    msg.visibility.assign("ESAJEWIRPBVDZXSALCNHNFZXOLPYTJTLNWMURGRCSTSCPPGKODNQOMOENAGRTBWUZDUWLIGKLAWGGQXGEZMYRSSHNHWTIPBVUVYSRTZNQXRPNFJTSCQEMHEDYQQOKRWJVLBHDJHFFMBYOELQMMHMVJEKUKFNLPFWOGKYHXSPVAZBGCCTDIGCSDRDILUIJQZTOC");
    msg.scope.assign("JRVJRYLSTTKTXWVPTXIPFAHGJSOMKHYUONBLJPIDGHSHQASFYXEGCNUTNMWIRDQKUQBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.0943663719662);
    msg.setSource(52257U);
    msg.setSourceEntity(188U);
    msg.setDestination(26988U);
    msg.setDestinationEntity(94U);
    msg.name.assign("ELTWAHUFAKYHAGBADYLLERWKZEMGUBNKNVVUMFAYXHAHSIGIIASHDAHQVRQPPCUBEOTHTJWLVIEGUSQKOYCSXPITJDSXZXCSLNNHJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TPGZQEKTLCVHHFSBZBDONXJJFYFLVXLTPWVPMSXJYYHKQVREXACIXTOJNUSJHBOIVXCNSWQJVRBINEDNTXGYRNQCTKGXDVZANTZQZIVABLLEIODGVHDPKAPEUFRSDRAUJHYHGTOJAHPICOQRZUGKBOWEQAGCMAWOMTNMMUMQBVUDURGGBQIFMYLHOMPWYSDURFQRCKKIEGMDSWML");
    tmp_msg_0.value.assign("ALOHRMVKKQYBZNNUEOBPIAJODOMQGSLLXTFNRDQTPRAZMJPTWSTYLBSXWJPZRESDFGZRNGUCLVLPOMCFEMAECIMWHJWKILOAJVDJYRUUFNOWNHCCYEOKTCVFPDREPGCSVYHQTXIUZSEDXIKHXZQPRCNLHGXMGVYJUWJFTWRABSZBFCPAQAIWHIIVLQDXKUGKOBVYJBBZJFWPSKVUXAUXOSNDEGH");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.69369505085);
    msg.setSource(19917U);
    msg.setSourceEntity(82U);
    msg.setDestination(25460U);
    msg.setDestinationEntity(159U);
    msg.name.assign("MEQXVZOURUFSRTURWCJLEKDCLPQIMFHGGMFCFOVJOTRTXSBWHXPTXRBWYIXZPFEPIAHNYBYSLADBJXYVOLLGQDKYDUQWIOFACKRXQBZMSFPTVCUAWCMGKAMGUNULIVPVQVJASUVUVHSAFUBEJXZLHODZQZCEIVNSRHZDGKILNZDKYCWRFQEHEGJZDLWDDTGEHJASC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.746755452709);
    msg.setSource(54751U);
    msg.setSourceEntity(75U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(4U);
    msg.name.assign("MEGPBGKVWPRZXDLOSJINTFZMWZCDHMETNSAXEZWBXUREUIWDLOYRAICYHDPDPLKUKQTWGJXSFUQAXQBCIULBSZFFZJLSIPCLMHSRNTFZJHNUXQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.441009594416);
    msg.setSource(60897U);
    msg.setSourceEntity(78U);
    msg.setDestination(23055U);
    msg.setDestinationEntity(37U);
    msg.name.assign("FYKKGGNKXSMXPIAFUWJTHEAGLUKYRIMUEEGRGZGKQXWMRSSADZNHPTFZHNCOQQJULPOJQNLKDKPELEZDRQWWVVMYOEJXHBVVSIUYMBDSHMPMTRRDBBSQFVALUCCGYORIPCFKBTZUQSNRTNELJHJWVYALSCRVQWDFGOZAIHDWBPNKXTAOLTLZEHDQCIHYIFUPAMVMWZTGNCUSXPVWFFTNJZDFAVAKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.608487147499);
    msg.setSource(32986U);
    msg.setSourceEntity(40U);
    msg.setDestination(41319U);
    msg.setDestinationEntity(152U);
    msg.name.assign("NTZAEIDMRRZNAGFCILVZNELIITFOUMWMLQWABXYEPVOJCXASRZVPYJXJMPUUVKJCYXGBXTPMPQQDWGFHLSDGMIRINCTQGCHFEORJJMZVTEKQQKXYAPWZOIAKBHRKMEGUTNWTRHNPBJBPSQFGVORHYFOBQDYRYFWQWBOKHOUKDCSRMLXCGWTEHEAXZEVACLNIUWDDHBBOHUNKKDLDCVVWZFYHQZSJFKIAETGNOULYSFJSAIXLGTBJVSNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.227289659528);
    msg.setSource(36924U);
    msg.setSourceEntity(207U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(117U);
    msg.name.assign("HSWOPSPMMKRYYEHBBAYZYWIPFVZEJHQNMROKEHADVGSTKSUAPNIQPPICKVNGQTVNACFIEHMZXUNWDKSQGWMYERMMGFXLCZOTRHBQTWAGDFNBOOBWMXTOZFIUQCIBGOTQKJSRKBZEIZCUPJUEVFBDDVUFDAZSMYFLQDLUTNNHKDSQLYUWJCOQIRAJXRFREZJEFCHIBXKOUUAWAMJJDZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.252885717082);
    msg.setSource(42514U);
    msg.setSourceEntity(167U);
    msg.setDestination(24092U);
    msg.setDestinationEntity(90U);
    msg.timeout = 1946835060U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.4932526249);
    msg.setSource(30841U);
    msg.setSourceEntity(84U);
    msg.setDestination(1829U);
    msg.setDestinationEntity(238U);
    msg.timeout = 2527421200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.0552465626052);
    msg.setSource(62167U);
    msg.setSourceEntity(123U);
    msg.setDestination(35191U);
    msg.setDestinationEntity(135U);
    msg.timeout = 815676494U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.269178117274);
    msg.setSource(50556U);
    msg.setSourceEntity(21U);
    msg.setDestination(32417U);
    msg.setDestinationEntity(205U);
    msg.sessid = 3084924039U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.663844610228);
    msg.setSource(36804U);
    msg.setSourceEntity(122U);
    msg.setDestination(40454U);
    msg.setDestinationEntity(199U);
    msg.sessid = 2116882938U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.893156879997);
    msg.setSource(5821U);
    msg.setSourceEntity(9U);
    msg.setDestination(34820U);
    msg.setDestinationEntity(200U);
    msg.sessid = 1515675258U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.755528738364);
    msg.setSource(8533U);
    msg.setSourceEntity(66U);
    msg.setDestination(45921U);
    msg.setDestinationEntity(14U);
    msg.sessid = 1334992612U;
    msg.messages.assign("JEOCTEWRSKKFDTHUSLBXZAOZVMWFQOYKZIJLKVNFJLIHROCDBUBLIWYPWNYCAWVEFNJNHCPDUKDHVFIXGFDLQQWSWZNFNMMVTAPZXHYAJSQGGOXWHNCYZINQTLOUDXXIPHKPVZMZRCCAUURDPUZVPNATBBMUGFGKIXGRKKTMJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.345414578338);
    msg.setSource(7654U);
    msg.setSourceEntity(183U);
    msg.setDestination(35000U);
    msg.setDestinationEntity(21U);
    msg.sessid = 3370976052U;
    msg.messages.assign("RHNORKXJCWNTLGXBPUYCTNJOZTDTQDKKKIQSGGQVSJCSUZVRZXVAJPEMVTDOCUBHJRUCTVZNAZMSAUDIYBWHUIJPKLNFEGSIEGXYCVJPWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.157291952271);
    msg.setSource(9933U);
    msg.setSourceEntity(153U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(189U);
    msg.sessid = 1118720746U;
    msg.messages.assign("TLGTGZNFWMSEVOCKEQLNZDBZMZAEDYTCNQYMTJOFUZVEPVVKUBKFBAMDNELRYASTBXSBMQIXCJHGKHWVYWHEWLUUYROVQJTFPIMFBDALZOWJSNTPXIGHAVMOMYGYZFNXNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.847621144169);
    msg.setSource(64447U);
    msg.setSourceEntity(133U);
    msg.setDestination(38388U);
    msg.setDestinationEntity(237U);
    msg.sessid = 6633605U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.12967624507);
    msg.setSource(20891U);
    msg.setSourceEntity(128U);
    msg.setDestination(34519U);
    msg.setDestinationEntity(251U);
    msg.sessid = 3935056260U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.00999076133534);
    msg.setSource(44216U);
    msg.setSourceEntity(158U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(122U);
    msg.sessid = 2829019863U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.768839575471);
    msg.setSource(20640U);
    msg.setSourceEntity(117U);
    msg.setDestination(54194U);
    msg.setDestinationEntity(178U);
    msg.sessid = 3530812652U;
    msg.status = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.291827546864);
    msg.setSource(26354U);
    msg.setSourceEntity(241U);
    msg.setDestination(60458U);
    msg.setDestinationEntity(28U);
    msg.sessid = 1431187746U;
    msg.status = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.314095859877);
    msg.setSource(25315U);
    msg.setSourceEntity(243U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(45U);
    msg.sessid = 1184213031U;
    msg.status = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.00404321741929);
    msg.setSource(4204U);
    msg.setSourceEntity(73U);
    msg.setDestination(48209U);
    msg.setDestinationEntity(157U);
    msg.name.assign("DMCMYTHPPSFAZJTYITIQRIUXQNNFVUVKSXZGKWASDSZDEAVNGLRQHHNNRCBKGJCGOKVQCCLYDATIMVXAOFEYGXMAGVFKHNQWJGLEXMPQFBXKBMXDTLEEFPZBHBJKHPCMLMEOSWPAIDZHAPJIVPJZUMUZHTZZTUOLVYWJJMGHWRKFWDBOFUUYYIGBJKYXIDNLURQOYBDZONRWSEQCWRUTWKVESYIECASFGELCOBPOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.885345971103);
    msg.setSource(47412U);
    msg.setSourceEntity(132U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(162U);
    msg.name.assign("XKFJRLSFKDPMLQMGXEZNZZAHYVQADVUQNLEKGUTGLISYORSCENIADBIABLHRUWOFYEDNWDVZFITYMGSYUMCFGFZQTJDNLHBFBBFRZSJOMJBCCKWMUUNKVBGWGHHTQRZYPKFXQURYVGQHCETIRPWWZXGRTEKBLOGSLAPLVBRTYXCPHCVEOCOMQWPOCCTJHQPSIODAKBUSJXXNOSAVPZAXIEMEYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.738079108836);
    msg.setSource(48700U);
    msg.setSourceEntity(177U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(101U);
    msg.name.assign("UUJZIQPBCEQVABHVNQCPWOABOBBVICFJWXHPNEYPTRBKGHPGTARFPSNLTLZLLREMJDURKUUCOKNZAMZRVBXORFZXMUDLDGTVEKSYNVCCNSVUYYKYSZGXJPBDCXTUJIWHTUHJPEZWEBOSJIXFQPCMLHAFWNDQTGVSIBLUAXYRASYFMVESFYWXTKTEZIQGEHNKRMXQGFWLRHDQPIKNONCEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.604784575255);
    msg.setSource(48533U);
    msg.setSourceEntity(241U);
    msg.setDestination(34126U);
    msg.setDestinationEntity(157U);
    msg.name.assign("MWVNIAXRXHDDKQJAZQBFXLZKHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.986801658215);
    msg.setSource(10603U);
    msg.setSourceEntity(250U);
    msg.setDestination(49014U);
    msg.setDestinationEntity(97U);
    msg.name.assign("XWPPSIBFVTSXCW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0457587036324);
    msg.setSource(57563U);
    msg.setSourceEntity(4U);
    msg.setDestination(26597U);
    msg.setDestinationEntity(214U);
    msg.name.assign("OTCJRDSJPMISFZXRXOAWAWAMHKKLHTPVTOJTRAYHRCHSMUTETBYPIEHUFCEPVENKSZGAXLMBAKHGKGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.801068646917);
    msg.setSource(19575U);
    msg.setSourceEntity(241U);
    msg.setDestination(38491U);
    msg.setDestinationEntity(9U);
    msg.type = 13U;
    msg.error.assign("YHDDHYCVQUYOUFBTZSNHWIJCDWJGVHUXIREBDVRGNHFTOQAYUIGFFHEBKKGMLQMXVCPXLEKXJSSQYZSTPPQSP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.561320102768);
    msg.setSource(42254U);
    msg.setSourceEntity(149U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(120U);
    msg.type = 67U;
    msg.error.assign("WXZELGFPVIVJUTJSKTTVCARTFWWXLXHQCSCOUEHFLEKVAVDMNPJQAGYLVWNJASVEMATMQBFQWRZZPHJPGJOBIHDLTDMWHTBRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.264126285457);
    msg.setSource(34731U);
    msg.setSourceEntity(68U);
    msg.setDestination(37603U);
    msg.setDestinationEntity(75U);
    msg.type = 205U;
    msg.error.assign("KSFRREDUBVFJXARZNZLGPAEHPKRFXMJECIJIYLKAYQRYHAMWKVPHXSVALZIQVSTOFFUBGEOBAEUMPOPVGVWHTIBVAMHGTURRABACKKQGCLJPLOFKWBPJJYBOZQEFQGFZMXJTELCHUQXHNXRXOKKZIUOROICNCGJEFJFIQGNMDVWWCCDSNCEZUITYZHNMMBSGQYNDYNTWMUNIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.746613436225);
    msg.setSource(36511U);
    msg.setSourceEntity(96U);
    msg.setDestination(36972U);
    msg.setDestinationEntity(139U);
    msg.seq = 57530U;
    msg.sys_dst.assign("PXIKFOSDFOQBKDWIRXSZHHTXVTWAMFPNYVXMXNJVSKWQSWYZINZKEGDHXBGTAUJGILEOF");
    msg.flags = 20U;
    const char tmp_msg_0[] = {-49, -36, 8, -40, -97, 123, 107, 95, 87, -33, 119, -112, -18, 88, 95, -113, -9, 1, -61, 118, 60, -87, -47, 13, -88, -102, 28, -49, 77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.430840935052);
    msg.setSource(6118U);
    msg.setSourceEntity(139U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(100U);
    msg.seq = 25066U;
    msg.sys_dst.assign("CUGDWCQUMERXLKTZBYYEFBTQHXSDRTJPINUYZQPEFXHSRKXDRQSGBUBNJNKWWEFCITVEKKXJLVPUTLCRKMEMYPQXTYNFQUGDJAJRVSTFPGVJROWDXPLEITTVOUGGZKBZC");
    msg.flags = 153U;
    const char tmp_msg_0[] = {-63, 62, -6, -76, 66, 75, -41, -119, -39, -22, -63, -78, -31, 16, 104, -13, -109, -120, 6, 7, -58, 25, 41, 69, 102, 38, 2, 109, -45, -119, 1, -41, -105, -108, -88, 6, 48, 83, 116, 36, -4, 114, 36, -11, -24, -66, 52, 87, -68, 23, -71, -124, -90, 77, -18, 4, -97, -101, 14, 109, -69, 78, 97, 70, -102, -28, 22, -112, 55, 123, -84, -15, -82, -67, 93, 69, 13, 113, 88, 29, 69, 46, -60, -12, -34, -2, 38, -28, 52, -121, 82, 47, -76, 24, 101, 78, -31, -21, -124, 95, 124, 72, 59, 19, -31, -106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.511317392305);
    msg.setSource(16006U);
    msg.setSourceEntity(76U);
    msg.setDestination(32860U);
    msg.setDestinationEntity(78U);
    msg.seq = 21111U;
    msg.sys_dst.assign("DYBDKFQDOPKNNAZSYVAJCWHEBIGATZKURSZDRLKQDEMNJCRXPXGIHJUFVJFWUYMXFPGYYHLIGRZNKB");
    msg.flags = 165U;
    const char tmp_msg_0[] = {-70, 29, -104, -100, 32, 64, -124, 34, -66, -8, 36, 0, 70, 97, 90, -26, 50, 98, -119, -37, 2, -68, -13, -115, 13, 28, 9, 16, 46, -29, 47, 46, -64, -38, -128, 73, 45, -95, 48, -15, 87, 69, -128, 102, 56, 54, 50, -34, 77, -108, 1, -78, 50, 117, 71, -99, -62, -49, -8, 92, 50, -45, -116, -103, -59, -5, -5, 48, -71, 69, 106, -66, 100, -86, -108, 13, -19, -91, 9, -10, 27, -35, 48, -92, 55, -50, -96, 124, 105, 44, -17, -70, 76, -97, -11, -23, 29, -115, 98, -27, -61, -56, -5, -108, -55, 68, -69, -48, 115, 58, -48, 18, 125, -32, -115, -96, -101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.669825845372);
    msg.setSource(40870U);
    msg.setSourceEntity(206U);
    msg.setDestination(8826U);
    msg.setDestinationEntity(89U);
    msg.sys_src.assign("AIQDGSZJLELYDDZTUSZOQBZKNW");
    msg.sys_dst.assign("VJDZBUTVLIULYLETOUOGIXYFPBJQNVTHAWLPKEEZQHQMWXIFRODWQWWCJLZZGEUIXBFBOGVZCEANNSVAWRXJMXYKVHFFFHZCUYIJDFVMS");
    msg.flags = 221U;
    const char tmp_msg_0[] = {100, -27, -25, -127, 77, -37, 0, 96, 21, 107, -77, -61, 22, 11, -65, 107, -24, 111, -112, -37, 94, 3, -21, 57, 61, 53, 118, -38, -118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.881626847068);
    msg.setSource(6923U);
    msg.setSourceEntity(112U);
    msg.setDestination(37192U);
    msg.setDestinationEntity(23U);
    msg.sys_src.assign("KTJZBUPYBXJBLSYUHRPFBKDVMPAOQDS");
    msg.sys_dst.assign("HVUZEUWQPOHGDLYBUHWPBXWEPQKDRSPGICFIZEOIWTGFRAXNVKCHONMZPOCXEUDBQIOVSJJQCFAIJAFRZKGNDZNSGNPMFTQYIKAYBXRTOTZYTOUWTXKNLMLVWRQCNWREFHAVCNOGMRXETIWZEMHVGCUDVYMAKQVTYDVLNXZFSZBSGGSCXLENKUDYUKJBPBFJHW");
    msg.flags = 81U;
    const char tmp_msg_0[] = {35, -2, 113, -58, -24, 8, 81, 76, 34, 37, 59, 13, -93, 8, 38, 82, -109, -11, -60, -80, 37, 84, 113, 18, -84, -73, 49, 71, 29, 110, -83, 28, 12, -123, 101, 126, -73, 48, 83, 50, 113, 40, 115, 14, -56, -89, -113, 2, 81, 103, 125, -10, -88, -59, -126, -82, 58, 52, -44, 65, 2, -106, -47, -57, -121, 15, -103, 79, -52, 58, 8, 49, -109, 1, -99, 4, -90, -58, 6, 63, -12, 25, 126, 28, -29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.354988720699);
    msg.setSource(17875U);
    msg.setSourceEntity(95U);
    msg.setDestination(57706U);
    msg.setDestinationEntity(223U);
    msg.sys_src.assign("OTFXXCHYQWQGELSRPZCIAAPSUBFCMBHPWGEWJXZXCNWFMJCROUVEZZOBTBJCKTMPTNNSBMIWXUAKJYPLNMNZOBFVZSDQUYNRRERQXRHSMQMHQOWDVNGZATKHZCKWQMFAVTGMUDLLCPFHDJDYFSGGJKXLDCCZOHRGGQLBMDTAIWODEIYLVFAGFBJIGKIEYANPPKHTDVSUHLAYSPSXE");
    msg.sys_dst.assign("VYDAHGDRSEUXV");
    msg.flags = 226U;
    const char tmp_msg_0[] = {-116, -15, 83, 115, 28, 17, 120, -97, 57, -45, 78, -104, 61, -103, 52, 114, -31, -29, -45, -57, 121, -85, -83, 72, 71, 91, -126, 53, 109, -42, 117, -75, -124, -81, -67, -85, -43, 10, -107, 11, 16, -62, 80, -27, 53, -67, -99, 33, -96, -96, 49, -104, -8, -115, 53, -1, 105, -76, -52, 35, 49, -22, 48, 121, 51, 66, 44, 125, 45, 66, 75, 122, 78, -80, 89, -67, 87, 5, 42, -4, 60, -32, -26, -106, 86, 33, 24, -81, 91, 91, -72, 66, 102, -76, 123, 92, -95, 18, 38, 77, -48, -124, 124, -23, -58, 77, 19, 6, 44, -27, -45, 53, 67, 99, 53, 65, 115, -17, 66, -12, -110, 48, -115, 87, -74, -115, -61, 60, 40, 61, 86, -100, 125, -81, 107, -35, 12, -101, 45, -16, -112, 39, -20, -77, 45, -13, 37, 24, 21, 20, -4, -86, 65, 68, -124, -53, 92, 3, 4, -42, -71, 11, 124, -92, -1, 75, 88, -40, 52, -31, 124, -25, -14, -77, 50, 67, 43, -113, -127, 14};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.522613615704);
    msg.setSource(804U);
    msg.setSourceEntity(171U);
    msg.setDestination(26331U);
    msg.setDestinationEntity(79U);
    msg.seq = 42591U;
    msg.value = 105U;
    msg.error.assign("AVCMDHBNSBMABOJOUBIVOTFQOTHZHGIRJUAMXSAEFDEMJELMVRZZFRNSBYTHNSTFKVUEHUPIINATUIPWBMIVUHPPCVESQDZJGJNZQELLRVQUNXCSVMXWYRBAGMKFRPDQYRIXYOGDRYLGXWLGXKSIBJZEYWNLLOJJTQDNNQDZBVOZDCTLKCTNLKXMWFPYXCGVKGWYHFEQAARUIAOKXOJCKFTMQKLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.981765900676);
    msg.setSource(64426U);
    msg.setSourceEntity(207U);
    msg.setDestination(29359U);
    msg.setDestinationEntity(75U);
    msg.seq = 40757U;
    msg.value = 5U;
    msg.error.assign("OMRQBRHPFHSAFWRLAEQDHSYZSNFOEMWYOBEWXPTJQKMTSQLXDGAQVDVCIOPYBBEXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.680300539074);
    msg.setSource(32786U);
    msg.setSourceEntity(92U);
    msg.setDestination(17644U);
    msg.setDestinationEntity(102U);
    msg.seq = 57336U;
    msg.value = 66U;
    msg.error.assign("NXBVGVOJZWSFRLOFZXEKYWROECXZWBZCFADWYVVBOSNHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.403670691528);
    msg.setSource(24689U);
    msg.setSourceEntity(254U);
    msg.setDestination(32122U);
    msg.setDestinationEntity(233U);
    msg.seq = 3388U;
    msg.sys.assign("QCTEXXJMZMPXEGQVICBVVUWUMNYAQSFSZVYLQIVMLHRLKPTKDIXJKOUFWYQIJIMGFCSEMQCEUQNIMSKNENDGJVDJPCWCBYJWUZNORBZVFRBWZUTXLOOIGRQWYAWPKLDOJUDLUHISQPEZFITGXWYAFGXKROSLTOGZPLBBACPSFSTBNLVSBTNZNYQMGOHZWNHYEXDRJAHKWDXTABGUHKTOVJIJAOAYSMDATZVYEP");
    msg.value = 0.354044603357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.567607802953);
    msg.setSource(26425U);
    msg.setSourceEntity(66U);
    msg.setDestination(15055U);
    msg.setDestinationEntity(184U);
    msg.seq = 31289U;
    msg.sys.assign("BVYPRWDSCJUWDIYUIKNRCHMQTJTHGXWWMLOKTULWGDOBPPNCYNKRFSINTFNPYZPBKSTHUAYKULKGKB");
    msg.value = 0.223965040831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.544195361514);
    msg.setSource(21760U);
    msg.setSourceEntity(107U);
    msg.setDestination(37629U);
    msg.setDestinationEntity(233U);
    msg.seq = 33911U;
    msg.sys.assign("FZROVSMAOTQXVHJXLGUMKANZOFIYDAFUWMWRHUP");
    msg.value = 0.762697300771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.785089126329);
    msg.setSource(64688U);
    msg.setSourceEntity(93U);
    msg.setDestination(23884U);
    msg.setDestinationEntity(65U);
    msg.seq = 20000U;
    msg.sys_dst.assign("UEVFTKWWZFFIMJFCOIARCMOTJDXTABMRKPNUERWGOGSJHVAQUDVDVBPCLYQHQWNKSOMPNQZJHUIPUHTKDQFHMOHADGHYBXJYTAKIKAHMUGHGJONLOECVFYWSVBZVBDTRCNNWQFUPZZTOZAEKNXIOVNXZWBIGYRCSGSSPRLDQLJBZMMOYLCQGLJEVRTPTZEFSELCMSJKVDADHSKRMNXBXERWBZDU");
    msg.timeout = 0.847641859709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.298217205191);
    msg.setSource(5674U);
    msg.setSourceEntity(37U);
    msg.setDestination(61998U);
    msg.setDestinationEntity(137U);
    msg.seq = 27623U;
    msg.sys_dst.assign("BLWWRMMYJRMNITHAMXRPXANZAXVOTVFWQNVEYCHKQSDHYALNFJEYTNHJSNDUYSGCATEPZINZAAWULYUAGBHZUEZXIWJDOQFGXCJOOGOECBVVSDCHMFHZWFDUZJOJKQCVMBSAXRYOCYPIDGKWDTTNTOLDBOOMKPSLEDBK");
    msg.timeout = 0.264171423253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.297442566627);
    msg.setSource(62587U);
    msg.setSourceEntity(224U);
    msg.setDestination(5204U);
    msg.setDestinationEntity(154U);
    msg.seq = 10046U;
    msg.sys_dst.assign("DDZXPGPEIIEJGFAGUJIVQJUVKRCIOJYWXYNBKJYQBTWEHMIANVIKSDMFSXTLUHDOVUMNZXBPVVZMGNHWHGNQKYSNOAASPZGHPXBTHFSCBDFJQKYIVROPVXPVYROARKEDCAEAODLUDHSZLQWMTWTYBTOPXAURHBTVHJFWPMSUZNFCWCXENUBUQCLKGLPOZYRETCHFYGKGLEIRJMU");
    msg.timeout = 0.34711831759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.209629844332);
    msg.setSource(36990U);
    msg.setSourceEntity(49U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(245U);
    msg.action = 113U;
    msg.longain = 0.795264120586;
    msg.latgain = 0.693031490505;
    msg.bondthick = 2926140203U;
    msg.leadgain = 0.943504501556;
    msg.deconflgain = 0.355298923804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.607699398127);
    msg.setSource(37015U);
    msg.setSourceEntity(115U);
    msg.setDestination(51634U);
    msg.setDestinationEntity(54U);
    msg.action = 77U;
    msg.longain = 0.763535238465;
    msg.latgain = 0.463597325415;
    msg.bondthick = 3239926315U;
    msg.leadgain = 0.824653417043;
    msg.deconflgain = 0.521341794683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.470410481537);
    msg.setSource(59872U);
    msg.setSourceEntity(218U);
    msg.setDestination(16258U);
    msg.setDestinationEntity(27U);
    msg.action = 55U;
    msg.longain = 0.397430106544;
    msg.latgain = 0.323080843328;
    msg.bondthick = 378283266U;
    msg.leadgain = 0.273916996102;
    msg.deconflgain = 0.308744773493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.203833124418);
    msg.setSource(20070U);
    msg.setSourceEntity(110U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.896148069608;
    msg.dist_min_abs = 0.629680941197;
    msg.dist_min_mean = 0.948096369166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.0108972750556);
    msg.setSource(39586U);
    msg.setSourceEntity(88U);
    msg.setDestination(44241U);
    msg.setDestinationEntity(78U);
    msg.err_mean = 0.749040294681;
    msg.dist_min_abs = 0.383719085696;
    msg.dist_min_mean = 0.406174331831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.224204974449);
    msg.setSource(7674U);
    msg.setSourceEntity(121U);
    msg.setDestination(26711U);
    msg.setDestinationEntity(46U);
    msg.err_mean = 0.77499515813;
    msg.dist_min_abs = 0.062301895625;
    msg.dist_min_mean = 0.415056536784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.470192040023);
    msg.setSource(51749U);
    msg.setSourceEntity(242U);
    msg.setDestination(5606U);
    msg.setDestinationEntity(224U);
    msg.action = 38U;
    msg.lon_gain = 0.506719769706;
    msg.lat_gain = 0.899595025247;
    msg.bond_thick = 0.512608269003;
    msg.lead_gain = 0.0872073099805;
    msg.deconfl_gain = 0.44407509299;
    msg.accel_switch_gain = 0.0550592909993;
    msg.safe_dist = 0.765594138164;
    msg.deconflict_offset = 0.472728675714;
    msg.accel_safe_margin = 0.146120584554;
    msg.accel_lim_x = 0.374285689606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.100600140057);
    msg.setSource(17138U);
    msg.setSourceEntity(20U);
    msg.setDestination(49228U);
    msg.setDestinationEntity(162U);
    msg.action = 253U;
    msg.lon_gain = 0.524938342593;
    msg.lat_gain = 0.864799127355;
    msg.bond_thick = 0.103085256283;
    msg.lead_gain = 0.221107918599;
    msg.deconfl_gain = 0.486847751907;
    msg.accel_switch_gain = 0.507087215528;
    msg.safe_dist = 0.408199611657;
    msg.deconflict_offset = 0.240157576279;
    msg.accel_safe_margin = 0.157748223716;
    msg.accel_lim_x = 0.524360856441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.8522826244);
    msg.setSource(9302U);
    msg.setSourceEntity(96U);
    msg.setDestination(10471U);
    msg.setDestinationEntity(221U);
    msg.action = 190U;
    msg.lon_gain = 0.608526055805;
    msg.lat_gain = 0.592589198749;
    msg.bond_thick = 0.916730212414;
    msg.lead_gain = 0.983400115928;
    msg.deconfl_gain = 0.00832418276485;
    msg.accel_switch_gain = 0.989269002645;
    msg.safe_dist = 0.416509596948;
    msg.deconflict_offset = 0.991520517269;
    msg.accel_safe_margin = 0.80139085643;
    msg.accel_lim_x = 0.961890278832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.546093530423);
    msg.setSource(50140U);
    msg.setSourceEntity(8U);
    msg.setDestination(16647U);
    msg.setDestinationEntity(186U);
    msg.type = 231U;
    msg.op = 135U;
    msg.err_mean = 0.202529276139;
    msg.dist_min_abs = 0.377007082389;
    msg.dist_min_mean = 0.803809457749;
    msg.roll_rate_mean = 0.969844615237;
    msg.time = 0.542495261522;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 254U;
    tmp_msg_0.lon_gain = 0.016715403869;
    tmp_msg_0.lat_gain = 0.994445368633;
    tmp_msg_0.bond_thick = 0.772355577416;
    tmp_msg_0.lead_gain = 0.274635515231;
    tmp_msg_0.deconfl_gain = 0.112190843196;
    tmp_msg_0.accel_switch_gain = 0.669990333166;
    tmp_msg_0.safe_dist = 0.0538740971912;
    tmp_msg_0.deconflict_offset = 0.547470216703;
    tmp_msg_0.accel_safe_margin = 0.0153510392474;
    tmp_msg_0.accel_lim_x = 0.786618035195;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.690728642709);
    msg.setSource(36825U);
    msg.setSourceEntity(238U);
    msg.setDestination(58672U);
    msg.setDestinationEntity(124U);
    msg.type = 242U;
    msg.op = 250U;
    msg.err_mean = 0.499146387237;
    msg.dist_min_abs = 0.860609750275;
    msg.dist_min_mean = 0.518486973298;
    msg.roll_rate_mean = 0.115721674757;
    msg.time = 0.188835068867;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 152U;
    tmp_msg_0.lon_gain = 0.6904106689;
    tmp_msg_0.lat_gain = 0.721433461458;
    tmp_msg_0.bond_thick = 0.285680097584;
    tmp_msg_0.lead_gain = 0.728027818329;
    tmp_msg_0.deconfl_gain = 0.237226861057;
    tmp_msg_0.accel_switch_gain = 0.0178316243078;
    tmp_msg_0.safe_dist = 0.275822452657;
    tmp_msg_0.deconflict_offset = 0.12681521193;
    tmp_msg_0.accel_safe_margin = 0.931305054674;
    tmp_msg_0.accel_lim_x = 0.23123325219;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.763189003823);
    msg.setSource(39524U);
    msg.setSourceEntity(181U);
    msg.setDestination(9046U);
    msg.setDestinationEntity(83U);
    msg.type = 39U;
    msg.op = 112U;
    msg.err_mean = 0.790758530312;
    msg.dist_min_abs = 0.508971251416;
    msg.dist_min_mean = 0.853670544714;
    msg.roll_rate_mean = 0.606219700156;
    msg.time = 0.554053509079;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 116U;
    tmp_msg_0.lon_gain = 0.240081925657;
    tmp_msg_0.lat_gain = 0.839582278914;
    tmp_msg_0.bond_thick = 0.835950039198;
    tmp_msg_0.lead_gain = 0.44407631885;
    tmp_msg_0.deconfl_gain = 0.339484911791;
    tmp_msg_0.accel_switch_gain = 0.710366886178;
    tmp_msg_0.safe_dist = 0.00569727297814;
    tmp_msg_0.deconflict_offset = 0.940393121322;
    tmp_msg_0.accel_safe_margin = 0.911353577878;
    tmp_msg_0.accel_lim_x = 0.562173056784;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.928006085349);
    msg.setSource(43778U);
    msg.setSourceEntity(224U);
    msg.setDestination(53984U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.654299536778;
    msg.lon = 0.196269750379;
    msg.eta = 848294612U;
    msg.duration = 9602U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.577679642223);
    msg.setSource(40168U);
    msg.setSourceEntity(1U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.346950253458;
    msg.lon = 0.757989309169;
    msg.eta = 2251340025U;
    msg.duration = 34067U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.590254261774);
    msg.setSource(55280U);
    msg.setSourceEntity(137U);
    msg.setDestination(16440U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.493533424281;
    msg.lon = 0.560853972012;
    msg.eta = 2556777225U;
    msg.duration = 35410U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.795214423634);
    msg.setSource(26386U);
    msg.setSourceEntity(231U);
    msg.setDestination(7077U);
    msg.setDestinationEntity(3U);
    msg.plan_id = 53018U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.365345923821);
    msg.setSource(47218U);
    msg.setSourceEntity(40U);
    msg.setDestination(47314U);
    msg.setDestinationEntity(176U);
    msg.plan_id = 59264U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.690371628296;
    tmp_msg_0.lon = 0.656643371343;
    tmp_msg_0.eta = 346032828U;
    tmp_msg_0.duration = 39379U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.656315575021);
    msg.setSource(18649U);
    msg.setSourceEntity(92U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(103U);
    msg.plan_id = 27174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.0846763853064);
    msg.setSource(27250U);
    msg.setSourceEntity(214U);
    msg.setDestination(58117U);
    msg.setDestinationEntity(0U);
    msg.type = 180U;
    msg.command = 146U;
    msg.settings.assign("UCLJGPYIXPPSEWRIASJPGSKMONXQGYGQWDAVRQUKXLCVHCMWPVXFNFOCBIMXQAXUMSYVJTWDFTWGAOIZHDVZIEHDEFUZRXIBEKYWPCZKJUAFTTURNSCEWDOLQVQYRNTAHVYEZHGDMULXBKUOOZRVULHDYBBWXBKHPOPFZAXIOLNKLJVZGBDONTSKUHLJDRGEEMKKSWNCCZZQNYPFHJYMFCQIJFWMSATTOCJTIBHJEELRBQTYFGSL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45568U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0990461137275;
    tmp_tmp_msg_0_0.lon = 0.74380032014;
    tmp_tmp_msg_0_0.eta = 1000534195U;
    tmp_tmp_msg_0_0.duration = 12247U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JHESVHLPTOFCOZAVTWCCJHKSWBYDYJVDMMEFEGXJSTMIQBJRSGPOONQDPHDGVJHEPGIKUOWZGFJZYDAPVXYNCZARTSATNKLCQWKWTCUBGRLQQQBXUXTHUIXAEFRDLGUJINYBNRPRZXCWMZOABUPOIGEASEOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.355541555183);
    msg.setSource(39462U);
    msg.setSourceEntity(136U);
    msg.setDestination(24737U);
    msg.setDestinationEntity(186U);
    msg.type = 198U;
    msg.command = 147U;
    msg.settings.assign("JPOIANQVIBYUQADANHTIUSTXFRXGUIYUYVRFNGCZRNLRSNBMGHAGDKVMBXMLUHGEZEODWEYXCIRQXTJJFVLTLQTELJTWPEGMVZSPOALSJBBJJMZWZWTWYLBFOXZVHALNKKICYPADLNYKYTHKGBMFVIFMQWNKHERQHBZXHUAIGVWH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19892U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.26728482773;
    tmp_tmp_msg_0_0.lon = 0.114989433434;
    tmp_tmp_msg_0_0.eta = 4036086640U;
    tmp_tmp_msg_0_0.duration = 58332U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CUWRLNALWPZAFEIIJCYKODTQURJZPMQGZCURFUGWBETZWUSQBOLPZYMTXHZKJAQOUDXAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.117346890237);
    msg.setSource(26723U);
    msg.setSourceEntity(24U);
    msg.setDestination(29721U);
    msg.setDestinationEntity(252U);
    msg.type = 208U;
    msg.command = 5U;
    msg.settings.assign("XHQDSCFDPBLONMHBDQFLOXZJLNGALWFKXWHYNC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48911U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.840267284047;
    tmp_tmp_msg_0_0.lon = 0.592144944571;
    tmp_tmp_msg_0_0.eta = 4262412322U;
    tmp_tmp_msg_0_0.duration = 16341U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UMGMQBSMIPWLLUKPKUGEWHBUACHSIYCPYMMTNCKVORVRGFZTDNTYJPVCIUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.536298528851);
    msg.setSource(49735U);
    msg.setSourceEntity(242U);
    msg.setDestination(11230U);
    msg.setDestinationEntity(1U);
    msg.state = 110U;
    msg.plan_id = 60141U;
    msg.wpt_id = 126U;
    msg.settings_chk = 38427U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.291656990658);
    msg.setSource(10324U);
    msg.setSourceEntity(248U);
    msg.setDestination(4828U);
    msg.setDestinationEntity(13U);
    msg.state = 84U;
    msg.plan_id = 35863U;
    msg.wpt_id = 244U;
    msg.settings_chk = 25082U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.572338502569);
    msg.setSource(59783U);
    msg.setSourceEntity(30U);
    msg.setDestination(13779U);
    msg.setDestinationEntity(128U);
    msg.state = 53U;
    msg.plan_id = 11152U;
    msg.wpt_id = 55U;
    msg.settings_chk = 63827U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.26407117307);
    msg.setSource(10462U);
    msg.setSourceEntity(149U);
    msg.setDestination(12670U);
    msg.setDestinationEntity(132U);
    msg.uid = 202U;
    msg.frag_number = 87U;
    msg.num_frags = 45U;
    const char tmp_msg_0[] = {110, 86, 115, 33, 98, 33, -10, 124, -123, -127, 67, 23, 125, 98, -8, -84, 88, -111, -81, -110, -63, 34, -77, -7, -48, -69, 8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.621075923897);
    msg.setSource(53986U);
    msg.setSourceEntity(118U);
    msg.setDestination(5450U);
    msg.setDestinationEntity(239U);
    msg.uid = 53U;
    msg.frag_number = 181U;
    msg.num_frags = 15U;
    const char tmp_msg_0[] = {49, 76, 114, -111, 52, -69, -31, -46, 81, 69, 67, -48, -100, 64, 50, -33, 90, -61, -51, -85, 111, -78, -110, 41, 26, -27, -26, 31, 20, 12, 11, -7, 95, 48, -73, -97, -105, 126, -53, 105, -102, -34, 48, 84, 4, -15, -4, -117, -87, -110, -21, -101, -97, 13, 15, -122, 114, 0, 12, -113, -103, 11, -120, 70, 103, -34, -10, 50, -23, -8, -95, -14, 26, 74, 22, -90, -83, 48, 1, -89, 121, 15, 101, -23, -81, 9, -37, -46, 79, 80, -93, -44, -31, 43, -107, -109, -56, 90, -110, 96, 82, 100, -63, -122, -5, 96, -5, -48, 94, -28, 10, -107, -92, -125, 90, -104, 102, -104, 60, -55, -128, 36, -35, -91, 90, -43, -116, -68, -99, -11, -48, 125, -88, -80, 27, 97, -16, 105, -70, 72, 116, 29, -93, 28, 74, -22, 44, 101, 67, 45, 79, 24, 79, -105, 47, -112, 93, 57, 64, 30, 118, -119, -19, -103, -91, 8, -110, 38, -23, 34, 111, -66, -11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.639994590948);
    msg.setSource(1114U);
    msg.setSourceEntity(29U);
    msg.setDestination(55370U);
    msg.setDestinationEntity(193U);
    msg.uid = 135U;
    msg.frag_number = 233U;
    msg.num_frags = 189U;
    const char tmp_msg_0[] = {3, 75, -125, -121, -42, -83, 31, -47, -126, 12, -68, -60, -27, -62, 20, -20, 106, 124, 16, -118, 72, -40, 40, -116, 50, 52, 79, 72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.664781733365);
    msg.setSource(10527U);
    msg.setSourceEntity(47U);
    msg.setDestination(64179U);
    msg.setDestinationEntity(51U);
    msg.content_type.assign("KTGKEFUKRGHOGZQYAVLHKZDQJMHWEGNTKDBOCWKKATNGIUAKWXLKQYDJILSVYZIBHSODCIPZGLSLZBFARFSOFWNPRVMIXYFISYIZUVDNBNQAVDSGMPAUXTDYBTCHJSBCRGCTXXHLUEOURMBTBUPWPOCVINJZKNFPABCTWMQWQRXBMDEFRJREUL");
    const char tmp_msg_0[] = {-28, -41, 51, 120, -68, -36, -71, 115, -58, -71, -41, 48, 63, -10, 22, -126, 2, 98, 119, 26, -74, 90, -15, -84, -96, 40, -115, 90, 108, 34, 37, 19, 116, 66, 116, -120, 83, 9, -76, -14, -60, 14, 2, -3, -71, 95, -55, 35, 119, -104, -65, -102, 104, -36, 58, 118, -64, -56, -110, -71, -90, -102, 34, 115, -112, 109, -27, -68, 83, -98, -10, -35, -119, 112, -62, 1, -50, -2, -114, -95, -45, 76, -109};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.890276226516);
    msg.setSource(51815U);
    msg.setSourceEntity(24U);
    msg.setDestination(50411U);
    msg.setDestinationEntity(43U);
    msg.content_type.assign("FKPIAAVLPMCAFZNFBFXRDEFVNWBVHKKFMCROTOVL");
    const char tmp_msg_0[] = {-43, 8, 64, 77, -55, -63, -116, 107, -108, 64, -87, 30, -28, 65, 8, -35, -40, -114, 77, 115, 94, -5, 102, 125, -65, -56, 18, -24, -39, -116, -56, -14, -97, -2, 58, 115, -57, -75, -107, -33, -27, -126, 110, -63, 118, -104, 25, -91, 49, 98, -79, -96, 77, -10, 55, 64, -95, 75, -38, -38, -91, -31, -9, -123, 100, 106, -27, -62, 124, -103, -91, 18, 106, -125, 121, 64, 117, -118, 46, 112, -87, -24, -103, -96, 113, -100, -27, 124, -115, 13, -4, -125, -36, -26, 14, 64, 118, 85, -123, 109, 120, -71, -21, -26, -51, -61, 4, 4, -27, -101, -127, -103, 70, -39, -61, -48, 14};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.63506651204);
    msg.setSource(59172U);
    msg.setSourceEntity(57U);
    msg.setDestination(37998U);
    msg.setDestinationEntity(141U);
    msg.content_type.assign("QRPJPABHTRFRYTUWYMPPD");
    const char tmp_msg_0[] = {-36, -94, -107, 123, 98, -49, -73, -18, -92, 68, 62, -123, 67, 126, 33, 36, 8, -119, -71, 36, 43, 125, -41, 42, -90, 71, -44, -43, 52, 10, 23, -9, 104, -76, -121, -39, -53, -81, 100, -29, -31, 79, -67, 109, 32, 104, -31, 51, 71, -71, 83, 79, -126, 7, 117, -50, 66, -38, 107, 68, -89, 13, -81, 111, -14, -110, -44, 41, 113, 65, 87, 0, 27, 70, -42, 66, -21, -106, 48, 28, -90, 36, 13, -83, 59, -85, 77, -7, -45, 52, 81, 93, -108, -74, 91, 81, 69, 105, -34, -107, 73, -13, -12, -43, 74, 41, -69, -110, 125, 109, -84, -117, 4, 36, -79, 92, -50, 105, 17, -65, 106, -40, 116, -54, 115, 4, 8, 16, 15, 34, -34, -49, 41, -62, -31, 76, 83, -49, -39, -111, -73, 114, 57, -72, 60, 84, 40, 96, -106, 108, -95, -55, 42, -69, -94, -115, -101, -34, -51, -47, -81, 26, -112, -115, 62, -85, 51, 62, 114, 36, -83, -66, -6, 3, 95, -79, -68, -27, -92, -127, 110};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.0835927860302);
    msg.setSource(39444U);
    msg.setSourceEntity(44U);
    msg.setDestination(37665U);
    msg.setDestinationEntity(252U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.776735870407);
    msg.setSource(24751U);
    msg.setSourceEntity(152U);
    msg.setDestination(39684U);
    msg.setDestinationEntity(230U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.820746954947);
    msg.setSource(26492U);
    msg.setSourceEntity(103U);
    msg.setDestination(54063U);
    msg.setDestinationEntity(185U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.426446439897);
    msg.setSource(21022U);
    msg.setSourceEntity(252U);
    msg.setDestination(34050U);
    msg.setDestinationEntity(77U);
    msg.target = 11452U;
    msg.bearing = 0.74058384693;
    msg.elevation = 0.802477300192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.100199595016);
    msg.setSource(52162U);
    msg.setSourceEntity(187U);
    msg.setDestination(1356U);
    msg.setDestinationEntity(222U);
    msg.target = 13221U;
    msg.bearing = 0.532789624982;
    msg.elevation = 0.407998760056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.0489629142764);
    msg.setSource(26136U);
    msg.setSourceEntity(184U);
    msg.setDestination(13827U);
    msg.setDestinationEntity(56U);
    msg.target = 9939U;
    msg.bearing = 0.640782400584;
    msg.elevation = 0.870258988427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.978173078323);
    msg.setSource(38331U);
    msg.setSourceEntity(107U);
    msg.setDestination(59142U);
    msg.setDestinationEntity(82U);
    msg.target = 57908U;
    msg.x = 0.636632663977;
    msg.y = 0.395863613495;
    msg.z = 0.958454722879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.579873236464);
    msg.setSource(16269U);
    msg.setSourceEntity(162U);
    msg.setDestination(52232U);
    msg.setDestinationEntity(68U);
    msg.target = 46904U;
    msg.x = 0.427195082787;
    msg.y = 0.736894344478;
    msg.z = 0.588095745482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.215817886297);
    msg.setSource(48894U);
    msg.setSourceEntity(179U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(174U);
    msg.target = 18351U;
    msg.x = 0.639365435235;
    msg.y = 0.101061890246;
    msg.z = 0.245419114045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.624580841234);
    msg.setSource(27510U);
    msg.setSourceEntity(240U);
    msg.setDestination(18933U);
    msg.setDestinationEntity(210U);
    msg.target = 62005U;
    msg.lat = 0.617249285898;
    msg.lon = 0.841702890352;
    msg.z_units = 178U;
    msg.z = 0.160310087636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.790187680032);
    msg.setSource(16663U);
    msg.setSourceEntity(115U);
    msg.setDestination(30255U);
    msg.setDestinationEntity(94U);
    msg.target = 9191U;
    msg.lat = 0.908385901173;
    msg.lon = 0.218777445925;
    msg.z_units = 200U;
    msg.z = 0.200773523798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.0852874331345);
    msg.setSource(20476U);
    msg.setSourceEntity(99U);
    msg.setDestination(23828U);
    msg.setDestinationEntity(196U);
    msg.target = 940U;
    msg.lat = 0.160714827178;
    msg.lon = 0.921329841938;
    msg.z_units = 93U;
    msg.z = 0.216601003673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.602090023493);
    msg.setSource(16108U);
    msg.setSourceEntity(224U);
    msg.setDestination(15335U);
    msg.setDestinationEntity(231U);
    msg.locale.assign("WOWREGACGPUGHPHVFPKLAOGXGOWTWZAFXGSB");
    const char tmp_msg_0[] = {-107, -74, 3, 63, -119, -95, 19, 75, 9, -51, 18, -26, -6, 32, -45, 15, -10, 65, 53, 125, -74, -77, -48, -68, -122, 62, 49, -123, 77, 84, 55, 98, -93, 54, 41, 43, -86, -125, -53};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.40275520197);
    msg.setSource(13894U);
    msg.setSourceEntity(78U);
    msg.setDestination(12237U);
    msg.setDestinationEntity(226U);
    msg.locale.assign("HZNILJJNYJEBKLUIDGHFC");
    const char tmp_msg_0[] = {-65, 58, -100, -54, -116, 79, 119, -7, -83, -108, -77, 117, -103, 5, 111, 4, 5, -73, -86, 123, -114, 42, 17, -61, 1, 89, 23, 120, -25, -123, -35, -89, -58, -9, 55, -113, -45, 90, 61, -14, -52, 61, 25, 101, 109, 50, 89, -102, -62, -65, 95, -115, 97, -116, -97, 40, -76, -88, -126, -6, 113, 18, 64, -74, -55, 30, 0, 92, 103, -47, 24, 23, 61, -40, -112, 27, -30, 44, 55, 57, -42, 5, 93, -43, 4, -21, 61, -87, 82, -80, 29, -58, -49, 36, 114, 22, -37, 18, -21, -4, -69, -93, -27, -84, 75, 79, 116, 38, -19, -36, 72, 66, -54, 8, -66, 107, 48, 65, -9, -78, -38, 14, -32, 67, -48, -26, -35, 125, -16, -77, -64, 9, -104, -100, -82, -25, -67, -44, -20, 103, 34, -13, 21, -36, -50, 48, -12, 105, 106, -7, -99, 119, 95, 30, 115, 5, 81, -105, -82, 86, 85, 33, -18, 111, 87, 9, 55, 5, 82, 2, -92, 113, -92, -124, 115, -40, 87, -6, 99, 115, 69, 110, 66, 56, 104, 52, 33, 15, -23, 64, 120, 95, -4, 102, 13, -40, 29, 113, -5, 108, 93, 100, 95, 60, 33, -19, 112, -6, 60, -107, 108};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.167034502068);
    msg.setSource(50940U);
    msg.setSourceEntity(171U);
    msg.setDestination(50151U);
    msg.setDestinationEntity(4U);
    msg.locale.assign("HTRARMZGGZOBOZNSMISTEPPTJPHUSWJBFXMNMOIVTKMWQYXSVGPVWBLEYEBUMRTWKZKLWCZUADNVKNXGEZVTQVWDREJNBAFQDXSXGCFPQDRKLXBOAOICSWOYHRSIMTLYQYIACHCZYOHIFRTXCNBBNYLZKKHUJQEPKAXWUNZIYURVOUDMACHCIFJZFWSUL");
    const char tmp_msg_0[] = {43, -63, -40, -93, -97, 34, 21, -109, 46, -94, -94, 34, -14, -65, -49, 123, 64, -38, 22, -31, -118, -112, -86, -39, -124, -46, 69, -76, -73, -128, -91, -44, 126, -72, -15, 0, 61, -92, 75, 92, -4, 42, 1, -83, 65, 49, 3, 108, -37, -84, 80, 67, -17, -6, 57, 105, 103, 21, -13, -31, -81, -18, -42, -11, -101, -69, -44, -109, -16, 100, -82, 8, -1, 10, 61, -81, -44, -6, -7, -32, -110, -32, 19, 51, -61, -80, -3, -18, 103, 91, -91, 40, -126, 86, -46, -114, -108, 54, 105, 109, -5, 123, -67, 40, -1, 4, 35, -49, -90, -42, 113, 41, -117, 89, 115, 114, -93, 72, -95, -62, -114, 17, -22, 118, 105, 45, -109, 16, 99, 28, -112, -66, -43, 24, -24, -112, -120, -123, 77, -61, 41, -19, -72, -4, 61, 21, 114, -76, 35, 43, 119, 27, -16, 48, 32, -45, -37, 89, -100, -77, -26, -13, -105, 55, 16, -4, -18, 66, 84, 46, 62, -92, 14, -117, 86, 2, 83, 32, -94, -83, 32, 81, -109, 101, 20, -120, 59, 77, 76, -47, 3, -99, -95, 17, -128, -67, 84, -42, -6, 106, -98, -76, -87, 106, 51, -41, -126, -99, 45, -114, 106};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.254138025966);
    msg.setSource(2337U);
    msg.setSourceEntity(28U);
    msg.setDestination(39367U);
    msg.setDestinationEntity(208U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.862269627528);
    msg.setSource(53250U);
    msg.setSourceEntity(197U);
    msg.setDestination(64948U);
    msg.setDestinationEntity(184U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.631684626532);
    msg.setSource(32631U);
    msg.setSourceEntity(61U);
    msg.setDestination(46827U);
    msg.setDestinationEntity(219U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.705567073649);
    msg.setSource(36612U);
    msg.setSourceEntity(173U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(190U);
    msg.camid = 204U;
    msg.x = 4991U;
    msg.y = 59738U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.213963280824);
    msg.setSource(7289U);
    msg.setSourceEntity(73U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(117U);
    msg.camid = 161U;
    msg.x = 55885U;
    msg.y = 28478U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.808099302917);
    msg.setSource(55195U);
    msg.setSourceEntity(158U);
    msg.setDestination(19062U);
    msg.setDestinationEntity(215U);
    msg.camid = 111U;
    msg.x = 28112U;
    msg.y = 14783U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.336770159297);
    msg.setSource(21356U);
    msg.setSourceEntity(16U);
    msg.setDestination(58252U);
    msg.setDestinationEntity(1U);
    msg.camid = 230U;
    msg.x = 41474U;
    msg.y = 40781U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.156941212026);
    msg.setSource(10480U);
    msg.setSourceEntity(202U);
    msg.setDestination(8780U);
    msg.setDestinationEntity(123U);
    msg.camid = 230U;
    msg.x = 10877U;
    msg.y = 39683U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.294235317023);
    msg.setSource(51840U);
    msg.setSourceEntity(36U);
    msg.setDestination(2647U);
    msg.setDestinationEntity(202U);
    msg.camid = 249U;
    msg.x = 65254U;
    msg.y = 33012U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.758566300429);
    msg.setSource(10363U);
    msg.setSourceEntity(26U);
    msg.setDestination(28999U);
    msg.setDestinationEntity(246U);
    msg.tracking = 66U;
    msg.lat = 0.0395137689725;
    msg.lon = 0.187991733554;
    msg.x = 0.712363704314;
    msg.y = 0.597105945023;
    msg.z = 0.821955312358;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.663166928379);
    msg.setSource(65462U);
    msg.setSourceEntity(13U);
    msg.setDestination(31873U);
    msg.setDestinationEntity(171U);
    msg.tracking = 158U;
    msg.lat = 0.999269610498;
    msg.lon = 0.815029642543;
    msg.x = 0.708027218084;
    msg.y = 0.0681680854961;
    msg.z = 0.037689076996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.665127522425);
    msg.setSource(23304U);
    msg.setSourceEntity(72U);
    msg.setDestination(13511U);
    msg.setDestinationEntity(67U);
    msg.tracking = 225U;
    msg.lat = 0.419055491638;
    msg.lon = 0.151304320092;
    msg.x = 0.356617273915;
    msg.y = 0.156422704309;
    msg.z = 0.245518920186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.352884434518);
    msg.setSource(12400U);
    msg.setSourceEntity(138U);
    msg.setDestination(52038U);
    msg.setDestinationEntity(142U);
    msg.target.assign("NRDTGZGAWSUVAFVLYNJEKFLYHREHZCPSIKPNOYDDZXURNTVGYEOAAVLSMLFFJGHJQAOUGQCTCIDYSMFOUGYQMLYPBRTBNSMBIXFDKBNVQRWHXTKNBKWP");
    msg.lbearing = 0.271699926722;
    msg.lelevation = 0.847222955525;
    msg.bearing = 0.728789576554;
    msg.elevation = 0.25484775657;
    msg.phi = 0.362054388186;
    msg.theta = 0.47290811909;
    msg.psi = 0.309357545627;
    msg.accuracy = 0.802544259782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.864378769696);
    msg.setSource(60627U);
    msg.setSourceEntity(207U);
    msg.setDestination(31004U);
    msg.setDestinationEntity(46U);
    msg.target.assign("TDKHVGLMOHNLLNNMTK");
    msg.lbearing = 0.519916360509;
    msg.lelevation = 0.210061669944;
    msg.bearing = 0.497790147153;
    msg.elevation = 0.542841262391;
    msg.phi = 0.184086426128;
    msg.theta = 0.372706468196;
    msg.psi = 0.264530878531;
    msg.accuracy = 0.698195171081;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.55909992415);
    msg.setSource(8172U);
    msg.setSourceEntity(125U);
    msg.setDestination(41413U);
    msg.setDestinationEntity(84U);
    msg.target.assign("SNCRSUZBWXBR");
    msg.lbearing = 0.128464663091;
    msg.lelevation = 0.627392715045;
    msg.bearing = 0.750325638811;
    msg.elevation = 0.182503957912;
    msg.phi = 0.245875324565;
    msg.theta = 0.798016610648;
    msg.psi = 0.830547207662;
    msg.accuracy = 0.699643364939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.380283305322);
    msg.setSource(59255U);
    msg.setSourceEntity(231U);
    msg.setDestination(10960U);
    msg.setDestinationEntity(213U);
    msg.target.assign("NUNBZHNFPXMFLNBMGGHKXXVKCPYQHEFVJCYCPASQGIESEADRNTUHDBDDXNPBRZABFYCVOQIIVJXHLTRIGTEFMQLWEEFQUCJSUIW");
    msg.x = 0.77847033112;
    msg.y = 0.02633632946;
    msg.z = 0.386693334285;
    msg.n = 0.602317477676;
    msg.e = 0.20202039267;
    msg.d = 0.304617116957;
    msg.phi = 0.327814762386;
    msg.theta = 0.311100707749;
    msg.psi = 0.811499622159;
    msg.accuracy = 0.416070996185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.995426504091);
    msg.setSource(18267U);
    msg.setSourceEntity(217U);
    msg.setDestination(29185U);
    msg.setDestinationEntity(114U);
    msg.target.assign("PAGRUUSJCHRLUTJGDMXDNDIDBTY");
    msg.x = 0.317702552944;
    msg.y = 0.223410094488;
    msg.z = 0.679436505371;
    msg.n = 0.788245444211;
    msg.e = 0.988016841941;
    msg.d = 0.561970583634;
    msg.phi = 0.650402388608;
    msg.theta = 0.613734037573;
    msg.psi = 0.507209644882;
    msg.accuracy = 0.807082270547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.367683048736);
    msg.setSource(33024U);
    msg.setSourceEntity(144U);
    msg.setDestination(12321U);
    msg.setDestinationEntity(5U);
    msg.target.assign("WHOFKMTDNSMSIWQCECREKEMBMPKTYWQNMRB");
    msg.x = 0.261040912104;
    msg.y = 0.825555814146;
    msg.z = 0.495907261607;
    msg.n = 0.695893026427;
    msg.e = 0.783632986497;
    msg.d = 0.787681736652;
    msg.phi = 0.888463543974;
    msg.theta = 0.968808356946;
    msg.psi = 0.209888228492;
    msg.accuracy = 0.43110011506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.799092184794);
    msg.setSource(18011U);
    msg.setSourceEntity(14U);
    msg.setDestination(25934U);
    msg.setDestinationEntity(69U);
    msg.target.assign("NWSSPEAXMZOMNEHYLYIQZZQOPKBWVFGYZWANVQHIFYYAXCJISCLVUDVUBOHSYGKGCTNGYAJAULFFNUKGPQIISIMTASBFDLOHGPPTUDFNSEXGMTICIELTWJSFIDRJCEILMRZPVQWRCAEOSBOKWONARGRXHZHMQLXBWKUKDRYGAX");
    msg.lat = 0.613201146647;
    msg.lon = 0.336843267717;
    msg.z_units = 73U;
    msg.z = 0.635630911843;
    msg.accuracy = 0.664752710451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.130617148873);
    msg.setSource(59158U);
    msg.setSourceEntity(131U);
    msg.setDestination(37440U);
    msg.setDestinationEntity(245U);
    msg.target.assign("SLLOUEWWDKPADBOYJVKUJSYOJTRPUEXICTSTIQTPXBMNVQHKHJMQNMXIPJYMHCPMEVFPAWRDFMGQZCWUSVGRRXSCFCGGPAIWOMKQFVQHLVNIPCUTLYWSKKHRJEGMHEBFTQXLVZWDUOBNGDHLDGZBROUAHAUGFOYXBQKJYNYCIUL");
    msg.lat = 0.679335491201;
    msg.lon = 0.325821423997;
    msg.z_units = 143U;
    msg.z = 0.80849655062;
    msg.accuracy = 0.439120400294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.468207267609);
    msg.setSource(22814U);
    msg.setSourceEntity(35U);
    msg.setDestination(34982U);
    msg.setDestinationEntity(170U);
    msg.target.assign("WTRAWJXSUMUKGOZBZIEBLFFWWJMJIPRQAFJVRPTBJDAXHYJLGZNSIFVSRCGHAMHSVVHWPBITGUDVQLCPKEARDKQJUJS");
    msg.lat = 0.137560122946;
    msg.lon = 0.108471588443;
    msg.z_units = 15U;
    msg.z = 0.0290895727537;
    msg.accuracy = 0.981919237216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.628396180566);
    msg.setSource(34268U);
    msg.setSourceEntity(121U);
    msg.setDestination(17371U);
    msg.setDestinationEntity(68U);
    msg.name.assign("AQDNJVNBCDXMHXGBZHTPODCMQIJSMTLHQDFUYMRUIERJOBQUSISLQWZTMYGLSUJBDAGLREGQJDWTCKYZFYPETNZRFFPNZ");
    msg.lat = 0.197835211196;
    msg.lon = 0.920057808721;
    msg.z = 0.356460527147;
    msg.z_units = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.977884225499);
    msg.setSource(1502U);
    msg.setSourceEntity(78U);
    msg.setDestination(62779U);
    msg.setDestinationEntity(201U);
    msg.name.assign("XMNWKAVICLPCGGG");
    msg.lat = 0.656241485576;
    msg.lon = 0.903134973703;
    msg.z = 0.944840499634;
    msg.z_units = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.388592885427);
    msg.setSource(61002U);
    msg.setSourceEntity(133U);
    msg.setDestination(59479U);
    msg.setDestinationEntity(95U);
    msg.name.assign("FBGVDTKHPMIWJSNEXHTQYCBJQCODYGGRKOEYKUPLZWTBRJMAWICHYFMULBJIFTJSQLFYHLTC");
    msg.lat = 0.196415532516;
    msg.lon = 0.957085710768;
    msg.z = 0.238542678172;
    msg.z_units = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.0432838279483);
    msg.setSource(58669U);
    msg.setSourceEntity(139U);
    msg.setDestination(25787U);
    msg.setDestinationEntity(93U);
    msg.op = 14U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JTQNXCFVOQLDHZVGDRFMDHBYIXXYDGUKAXWRLSUFEJCZIGIEENEFDKNBPIWWCHPGWKNLEUWPLQTNRSZNLTUYFHSYPRVJEZFZBHIWMYAPAIBRGFGTHULYVXWVLTQDTNKTJQMHODPMIVABYJXAORGAKRPOCSBKZGKMIQGXMDLCUJCQPFSXKHNZEWZIMTTYBUYKRVCLOWESECIUBVJMMVNOWZYUUAJRMBQDFTBOJDCJZXFSPGKHQ");
    tmp_msg_0.lat = 0.953241098559;
    tmp_msg_0.lon = 0.734694705939;
    tmp_msg_0.z = 0.450014130502;
    tmp_msg_0.z_units = 145U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.400118133419);
    msg.setSource(44134U);
    msg.setSourceEntity(80U);
    msg.setDestination(11278U);
    msg.setDestinationEntity(47U);
    msg.op = 111U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CULRIINZGOPSGUAFPZAKIFFNEEXUOTDAFDPXTVKEBEWLAQWKIJJMHIGBPAMZNWGEIGKSGCAKPGTRMASBQYHVZDPZQVTLOISHRCJSKYCJFVJAWYTXZOTYMNLNBDJRXJDTRU");
    tmp_msg_0.lat = 0.432447086563;
    tmp_msg_0.lon = 0.0531259117761;
    tmp_msg_0.z = 0.902557868751;
    tmp_msg_0.z_units = 214U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.984298130044);
    msg.setSource(35762U);
    msg.setSourceEntity(112U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(149U);
    msg.op = 115U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QOEISRCOSRWKAQUTVJJWRKDBIDFEZWRUQALVGUNZLPRHLEEMAOYIIYQJOQFHHOMNFBVHVNXUYJHKUMXEJCTIDZCWNXSFOLKJLHKBDTXBSZIKEMHGHECEOYNFTUYUGIJNNPZDCARPFXMRKBZMJZTTOYBKNWDMJRQIRVUDPTELXMCAGZVMAYSXBFCCADGQQESSMKXWZPYPGQPGVSJFYSALHCLDHXLG");
    tmp_msg_0.lat = 0.127749273927;
    tmp_msg_0.lon = 0.229927139406;
    tmp_msg_0.z = 0.205541185211;
    tmp_msg_0.z_units = 28U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.188401078514);
    msg.setSource(43366U);
    msg.setSourceEntity(133U);
    msg.setDestination(4350U);
    msg.setDestinationEntity(86U);
    msg.value = 0.388590317648;
    msg.type = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.867562920905);
    msg.setSource(62453U);
    msg.setSourceEntity(218U);
    msg.setDestination(61540U);
    msg.setDestinationEntity(42U);
    msg.value = 0.905580268986;
    msg.type = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.134319127983);
    msg.setSource(49708U);
    msg.setSourceEntity(243U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(41U);
    msg.value = 0.594237776471;
    msg.type = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.209552480591);
    msg.setSource(15040U);
    msg.setSourceEntity(85U);
    msg.setDestination(19198U);
    msg.setDestinationEntity(157U);
    msg.value = 0.444307870315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.801818386264);
    msg.setSource(55287U);
    msg.setSourceEntity(148U);
    msg.setDestination(43483U);
    msg.setDestinationEntity(228U);
    msg.value = 0.817195203119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.687870709305);
    msg.setSource(45869U);
    msg.setSourceEntity(62U);
    msg.setDestination(62891U);
    msg.setDestinationEntity(67U);
    msg.value = 0.986624044111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.129757013758);
    msg.setSource(18308U);
    msg.setSourceEntity(177U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(30U);
    msg.timestamp_last_service = 0.270569212381;
    msg.time_next_service = 0.235248133388;
    msg.time_motor_next_service = 0.927343345405;
    msg.time_idle_ground = 0.342307904934;
    msg.time_idle_air = 0.603921679932;
    msg.time_idle_water = 0.60050073886;
    msg.time_idle_underwater = 0.361540910939;
    msg.time_idle_unknown = 0.040363094067;
    msg.time_motor_ground = 0.460030764455;
    msg.time_motor_air = 0.632776025171;
    msg.time_motor_water = 0.0745060597998;
    msg.time_motor_underwater = 0.564518818904;
    msg.time_motor_unknown = 0.772583947671;
    msg.rpm_min = 3529;
    msg.rpm_max = -8218;
    msg.depth_max = 0.290515009448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.28371066161);
    msg.setSource(57470U);
    msg.setSourceEntity(108U);
    msg.setDestination(18547U);
    msg.setDestinationEntity(4U);
    msg.timestamp_last_service = 0.60274075146;
    msg.time_next_service = 0.421331852717;
    msg.time_motor_next_service = 0.783571322041;
    msg.time_idle_ground = 0.798762547338;
    msg.time_idle_air = 0.10536519425;
    msg.time_idle_water = 0.162572753748;
    msg.time_idle_underwater = 0.66412044734;
    msg.time_idle_unknown = 0.717870141079;
    msg.time_motor_ground = 0.110291390905;
    msg.time_motor_air = 0.945252733072;
    msg.time_motor_water = 0.85502476663;
    msg.time_motor_underwater = 0.965553952197;
    msg.time_motor_unknown = 0.732191136309;
    msg.rpm_min = -1035;
    msg.rpm_max = -25674;
    msg.depth_max = 0.338433011698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.862680710181);
    msg.setSource(4290U);
    msg.setSourceEntity(210U);
    msg.setDestination(8403U);
    msg.setDestinationEntity(103U);
    msg.timestamp_last_service = 0.70461782205;
    msg.time_next_service = 0.0865446187191;
    msg.time_motor_next_service = 0.649694899524;
    msg.time_idle_ground = 0.776700560483;
    msg.time_idle_air = 0.342951395519;
    msg.time_idle_water = 0.712305437632;
    msg.time_idle_underwater = 0.271539477602;
    msg.time_idle_unknown = 0.794432354119;
    msg.time_motor_ground = 0.0694066097171;
    msg.time_motor_air = 0.369348474792;
    msg.time_motor_water = 0.874857861935;
    msg.time_motor_underwater = 0.707156525856;
    msg.time_motor_unknown = 0.0650611230955;
    msg.rpm_min = 15977;
    msg.rpm_max = -4374;
    msg.depth_max = 0.458156515726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.579500711978);
    msg.setSource(16608U);
    msg.setSourceEntity(64U);
    msg.setDestination(53275U);
    msg.setDestinationEntity(235U);
    msg.severity = 191U;
    msg.text.assign("AQTVJFZMVRAKNHLSUOSAGPZSZFRUADUPMVIVZQQRHYAUVXELTHQGLWUONOBIHKDVQMJERUVRIPYUKXPPUSGTNXRTBTLCWMEDBRWNJQMIAOESA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.105812084096);
    msg.setSource(41595U);
    msg.setSourceEntity(119U);
    msg.setDestination(57568U);
    msg.setDestinationEntity(169U);
    msg.severity = 201U;
    msg.text.assign("YRWPRCMWCWSDLJIFNOMSMFBTDOLPCXPDOKWXTEMORKCXKQJHWRIPZZWHNVXSECIBXMUAMYYUKIEATQAQDBNKEAXQZIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.737667127276);
    msg.setSource(11602U);
    msg.setSourceEntity(97U);
    msg.setDestination(6665U);
    msg.setDestinationEntity(67U);
    msg.severity = 210U;
    msg.text.assign("JAXUPYGJFRGKQGFVZHKBUXGQDDZMXJKZCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.367638319643);
    msg.setSource(36331U);
    msg.setSourceEntity(168U);
    msg.setDestination(49568U);
    msg.setDestinationEntity(159U);
    msg.channel = 98;
    msg.value = 118120782;
    msg.gain = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.279215819252);
    msg.setSource(15415U);
    msg.setSourceEntity(61U);
    msg.setDestination(33193U);
    msg.setDestinationEntity(189U);
    msg.channel = -72;
    msg.value = -511780495;
    msg.gain = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.288527748773);
    msg.setSource(29798U);
    msg.setSourceEntity(116U);
    msg.setDestination(15109U);
    msg.setDestinationEntity(85U);
    msg.channel = -118;
    msg.value = -612714762;
    msg.gain = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.412692979018);
    msg.setSource(7943U);
    msg.setSourceEntity(118U);
    msg.setDestination(16344U);
    msg.setDestinationEntity(71U);
    msg.ch01 = 0.331114105829;
    msg.ch02 = 0.996547895632;
    msg.ch03 = 0.304514699404;
    msg.ch04 = 0.606514685516;
    msg.ch05 = 0.638665609534;
    msg.ch06 = 0.396883614673;
    msg.ch07 = 0.683440797274;
    msg.ch08 = 0.269725058136;
    msg.ch09 = 0.0711745281517;
    msg.ch10 = 0.0539000490203;
    msg.ch11 = 0.909212238849;
    msg.ch12 = 0.736178043162;
    msg.ch13 = 0.247103500343;
    msg.ch14 = 0.918999771807;
    msg.ch15 = 0.190532545387;
    msg.ch16 = 0.799759043774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.883825198797);
    msg.setSource(27516U);
    msg.setSourceEntity(88U);
    msg.setDestination(43135U);
    msg.setDestinationEntity(21U);
    msg.ch01 = 0.708914131097;
    msg.ch02 = 0.306949205294;
    msg.ch03 = 0.525898545381;
    msg.ch04 = 0.0295228909359;
    msg.ch05 = 0.196716161201;
    msg.ch06 = 0.102583326751;
    msg.ch07 = 0.791391450011;
    msg.ch08 = 0.849001959762;
    msg.ch09 = 0.906994291986;
    msg.ch10 = 0.363981297977;
    msg.ch11 = 0.594473837427;
    msg.ch12 = 0.17623298277;
    msg.ch13 = 0.460626909175;
    msg.ch14 = 0.650900575065;
    msg.ch15 = 0.0569571733721;
    msg.ch16 = 0.730352299834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.99759627946);
    msg.setSource(12198U);
    msg.setSourceEntity(194U);
    msg.setDestination(40969U);
    msg.setDestinationEntity(91U);
    msg.ch01 = 0.731533872535;
    msg.ch02 = 0.774547151175;
    msg.ch03 = 0.758560314347;
    msg.ch04 = 0.233871653447;
    msg.ch05 = 0.98942898268;
    msg.ch06 = 0.401754322353;
    msg.ch07 = 0.768946885746;
    msg.ch08 = 0.108797564792;
    msg.ch09 = 0.56503957097;
    msg.ch10 = 0.467890837844;
    msg.ch11 = 0.660402967218;
    msg.ch12 = 0.625058022035;
    msg.ch13 = 0.521684357323;
    msg.ch14 = 0.0652659667245;
    msg.ch15 = 0.839987959213;
    msg.ch16 = 0.977393225488;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.467661621775);
    msg.setSource(56915U);
    msg.setSourceEntity(192U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(180U);
    msg.value = 0.390173284325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.445246200555);
    msg.setSource(57021U);
    msg.setSourceEntity(229U);
    msg.setDestination(9061U);
    msg.setDestinationEntity(204U);
    msg.value = 0.938930710387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.493197438571);
    msg.setSource(26600U);
    msg.setSourceEntity(71U);
    msg.setDestination(24308U);
    msg.setDestinationEntity(206U);
    msg.value = 0.10699298796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.35968318959);
    msg.setSource(48199U);
    msg.setSourceEntity(218U);
    msg.setDestination(57725U);
    msg.setDestinationEntity(250U);
    msg.op = 90U;
    msg.lat = 0.895873069008;
    msg.lon = 0.277125478657;
    msg.height = 0.216726421421;
    msg.depth = 0.856412872556;
    msg.alt = 0.946741939659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.543153370645);
    msg.setSource(39097U);
    msg.setSourceEntity(81U);
    msg.setDestination(39559U);
    msg.setDestinationEntity(102U);
    msg.op = 25U;
    msg.lat = 0.532837530143;
    msg.lon = 0.681370382171;
    msg.height = 0.198669048128;
    msg.depth = 0.0287262588952;
    msg.alt = 0.434904594457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.604938068268);
    msg.setSource(33286U);
    msg.setSourceEntity(55U);
    msg.setDestination(58692U);
    msg.setDestinationEntity(199U);
    msg.op = 170U;
    msg.lat = 0.604456818138;
    msg.lon = 0.926997678315;
    msg.height = 0.717977748174;
    msg.depth = 0.173483978025;
    msg.alt = 0.628916299845;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
