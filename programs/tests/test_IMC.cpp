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
// IMC XML MD5: e1a980d4d20ab8faf89e606e6b9a7a03                            *
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
    msg.setTimeStamp(0.896662916256);
    msg.setSource(31523U);
    msg.setSourceEntity(48U);
    msg.setDestination(33837U);
    msg.setDestinationEntity(116U);
    msg.state = 190U;
    msg.flags = 61U;
    msg.description.assign("XFVFYKLXOAUJEXQMYBJPTSKORYEDZCTSBLGLIPRCUNCDNJOHIEZZELVDAWJKPMHJHRQCOZUFGHWOW");

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
    msg.setTimeStamp(0.209212705834);
    msg.setSource(53893U);
    msg.setSourceEntity(183U);
    msg.setDestination(33938U);
    msg.setDestinationEntity(208U);
    msg.state = 235U;
    msg.flags = 59U;
    msg.description.assign("BHJGIJSDWNNEBHQEULMNEGZVPSHQOUCYGYAIMDMIOWTJTDACEUSUJYBFHMOPVHKRFPBVIIDVSARZFLGWMOGLXTQNSFFUJHYZSUEBYTQQPGJJPWVILASTFNZEDUO");

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
    msg.setTimeStamp(0.268092786931);
    msg.setSource(42025U);
    msg.setSourceEntity(212U);
    msg.setDestination(47758U);
    msg.setDestinationEntity(247U);
    msg.state = 179U;
    msg.flags = 72U;
    msg.description.assign("TYDYWGJDCYWHMSLJVQGOAGEKQSXACMLWTRKVLSLKACOZBWURVOREVDTSEURZEEGZGHQIIZSGVIBWHDGTFTBRH");

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
    msg.setTimeStamp(0.415568162417);
    msg.setSource(25509U);
    msg.setSourceEntity(52U);
    msg.setDestination(16604U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.8128623637);
    msg.setSource(15160U);
    msg.setSourceEntity(204U);
    msg.setDestination(45732U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.988372951371);
    msg.setSource(41656U);
    msg.setSourceEntity(189U);
    msg.setDestination(6726U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.638777230347);
    msg.setSource(54708U);
    msg.setSourceEntity(48U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(192U);
    msg.id = 22U;
    msg.label.assign("FUCKYGZRLBMEFFOJXSDTNEPFUISDYGENPDSAZEXEVSOCKARCBCZMQIBLYRCZQLETSUFYTLNUAJKLELLVQNOHAXW");
    msg.component.assign("FICVNPRBEKZNQDEAHVYWBHFACPSVFOVJTGZLGOYCYWLXKHRDBMNDBVPUSYRWHKJSSJOQWCXMONDAKRWFBAAETPEMSUKWNWAOWTMZLUYPTNXUGCTYDORQDXDBPTNDJBUIFWXJBIDJJAHKTLKHFCEHERGICTQVHZBCZAZHXLZYPGCMXRNEQUIOITSVGXORJPFUOXAKRPGCKKWSQTMMNZ");
    msg.act_time = 11188U;
    msg.deact_time = 8003U;

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
    msg.setTimeStamp(0.776029991268);
    msg.setSource(18160U);
    msg.setSourceEntity(106U);
    msg.setDestination(63386U);
    msg.setDestinationEntity(52U);
    msg.id = 197U;
    msg.label.assign("YAQVCDGZKSCTGMCM");
    msg.component.assign("MZFKEDHFIAZKGUIJCDKMVQNFDPHWCDUWYSALVXBNUIQRCHOOEYTASSAWRBVDJNRCJOWHTSBMWKLYNMNGAALATEZYOCPOMWYSVQLQHHPKWUNEIUEFSOVBYGWGIAKXKFOCQUMQGTBWDSBVSVZYODMSLOXLSBHZHINEVPXJFRHAZATKCEYZCIXBRQZGFBPJVFHGM");
    msg.act_time = 23925U;
    msg.deact_time = 45734U;

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
    msg.setTimeStamp(0.461534346747);
    msg.setSource(26452U);
    msg.setSourceEntity(155U);
    msg.setDestination(51789U);
    msg.setDestinationEntity(181U);
    msg.id = 132U;
    msg.label.assign("KTTLINFKDHAFKKSLSZNOHZVXZCFMLMIFSZGNOYAMMUKZETKBDWQMBSTAGCOAXKPXHJUSWNXYWEUHOUXLTHJMXONVWXRMAAELVYIORHYEUYCYRTNJPRURIZNIQGTWVQUQWLJFCPDSGARLHV");
    msg.component.assign("WATAOCXKDRBMEZKMGVGFTECVCXGSCBWLROUONXUDCVIRWYKOUDGWDCYEMMZRROIKIZQSKWFXTFLACUVXYJNOUWPEGERGVATZMHPTKLIQZGBOUQSBLOFNGPSYXUMNSJXNEEJHHGVSHRMPDMSQDUWI");
    msg.act_time = 5258U;
    msg.deact_time = 12304U;

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
    msg.setTimeStamp(0.410698907671);
    msg.setSource(31925U);
    msg.setSourceEntity(18U);
    msg.setDestination(49376U);
    msg.setDestinationEntity(152U);
    msg.id = 103U;

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
    msg.setTimeStamp(0.0495370208679);
    msg.setSource(21851U);
    msg.setSourceEntity(121U);
    msg.setDestination(23557U);
    msg.setDestinationEntity(150U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.266958074756);
    msg.setSource(25332U);
    msg.setSourceEntity(237U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(244U);
    msg.id = 20U;

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
    msg.setTimeStamp(0.512768112341);
    msg.setSource(58279U);
    msg.setSourceEntity(229U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(110U);
    msg.op = 108U;
    msg.list.assign("WCOAZVQNIUWKGTRERTZMSXPDQVSMHMCKAKBSRVRGKZYPVOVFHVGHEDNBEXQEDBYJXVZKUTGAJUDXJNBYQDZLMAIYITPCBRTUEWCXGMHXWNHKMOFBONSJTHZZHOK");

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
    msg.setTimeStamp(0.520173426854);
    msg.setSource(64990U);
    msg.setSourceEntity(237U);
    msg.setDestination(2969U);
    msg.setDestinationEntity(19U);
    msg.op = 108U;
    msg.list.assign("KSHZPCTQRAHSQQQTLXAKWPAUSYRKEAHLPEVZSEZWEUGJBKOYLTWVLMMWKABCQCQGUIBIUUPPXWSZYDGQOAATIXYQGVPOFDLUQMCNIUMUAGJXEVFHBHRDDZNHTXXJYBOTCKIPMLYZVEYCVHJXGVBOGNMHXSPDYJUIYSFMGLUDOSJDHTCNDGBIWJNOVLVFXSFMNTQGWZWIKBIPFCZKJLFMJTIWFEDHMERKVEYBOJCTNREROPARADNCRRNLFWOF");

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
    msg.setTimeStamp(0.931418777793);
    msg.setSource(12741U);
    msg.setSourceEntity(112U);
    msg.setDestination(44380U);
    msg.setDestinationEntity(224U);
    msg.op = 135U;
    msg.list.assign("XSCUFUYTYZPRJLPDXGBJMIBTMIBUVBTHVYJEPGSPJFINUVEWAVNZKFNTAAYWXTMBFTGIKBGZYICCOCAVCFJRJBKZFOKICTSOYAWPXDHEIAOKLZQGLWQCUHXQDKMOPKIWNDSHVGLRTMZMUPVMWRJMHWAEXKPRHMPUQRJVWDXOLBZNSBPNNDAGXLOKILQCHFRYGZFWYLQFCKJVLXHBTDSOLIYEDECNZYUAERNMEEGTFSXQUWUHSJENQGOVQQOD");

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
    msg.setTimeStamp(0.717996738589);
    msg.setSource(31373U);
    msg.setSourceEntity(227U);
    msg.setDestination(26970U);
    msg.setDestinationEntity(123U);
    msg.value = 32U;

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
    msg.setTimeStamp(0.320676336347);
    msg.setSource(151U);
    msg.setSourceEntity(98U);
    msg.setDestination(29146U);
    msg.setDestinationEntity(178U);
    msg.value = 74U;

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
    msg.setTimeStamp(0.382595665926);
    msg.setSource(48218U);
    msg.setSourceEntity(198U);
    msg.setDestination(29037U);
    msg.setDestinationEntity(101U);
    msg.value = 253U;

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
    msg.setTimeStamp(0.42811209907);
    msg.setSource(34977U);
    msg.setSourceEntity(155U);
    msg.setDestination(30712U);
    msg.setDestinationEntity(29U);
    msg.consumer.assign("WEZIPKVFOUGAXQQWJIKONMKYDJQSBHUCPDXNETKDVWOFSIADULRPQATNVWKDWEPPRHULWLCGHJXRTIKWAJGCIYVGLNOISMBVZTUMERBCCSBMAQEMFRCJXLBNLTUDOPXGXFITLDOJTACKIZBCURKBFMYAPHESCIZRVSMNHOSTQUWLPJZDUSYYHPJVJQHGZFYOVFGXHDNPATGF");
    msg.message_id = 51554U;

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
    msg.setTimeStamp(0.24322115654);
    msg.setSource(42265U);
    msg.setSourceEntity(35U);
    msg.setDestination(56737U);
    msg.setDestinationEntity(52U);
    msg.consumer.assign("DAREOHDVISCACQTQYNRVLNYOTUSDXLOFQRAXVKFIUMKGSRHLBKYZZEJYXGVJZCFLPIWZSESJUYUGNANOMSFKMWAEYAKPIPNPUXLMYVHOCXMICENUFYWHVQQUVMPNWZLHPGWPOISNDBKZHEFLKJVKRNJFDMNGAWFURJOAERQSBXTXUDTIAEXYGQRMWBPTITCDFXHLSTOGWJBQZGETKZJBHMDSJPUJZWRDVOTOHGBCFTCYQBRIBPVMB");
    msg.message_id = 25017U;

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
    msg.setTimeStamp(0.908798975348);
    msg.setSource(35896U);
    msg.setSourceEntity(103U);
    msg.setDestination(43360U);
    msg.setDestinationEntity(251U);
    msg.consumer.assign("OIEQLXBNYOCNAAPAGCYNJLXETJLRLSYKYVYPSCNTETGQGCIDQKJWXDFAUTDGXRWFUMMUORUEZRDCESJIOURILJSKAOWVVXTZQLNNBFZCZENLIQOFWQVDSRWVJKQJSIRQFFKPLMLPMHVOTKTOZEJUMGNXBXGVUHWGACQWKIDFNPHYDPRGODZWHMHMUDIGZMVQPAHYUBFCPXZHXKVZETVYKCBHFWYCNAYTUABAWSPLPIRSKOFBBDBJZMESI");
    msg.message_id = 2341U;

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
    msg.setTimeStamp(0.641214208888);
    msg.setSource(55507U);
    msg.setSourceEntity(61U);
    msg.setDestination(52658U);
    msg.setDestinationEntity(182U);
    msg.type = 81U;

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
    msg.setTimeStamp(0.124142225314);
    msg.setSource(31157U);
    msg.setSourceEntity(207U);
    msg.setDestination(33452U);
    msg.setDestinationEntity(200U);
    msg.type = 33U;

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
    msg.setTimeStamp(0.299544657466);
    msg.setSource(38752U);
    msg.setSourceEntity(89U);
    msg.setDestination(14697U);
    msg.setDestinationEntity(39U);
    msg.type = 68U;

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
    msg.setTimeStamp(0.859355442805);
    msg.setSource(55667U);
    msg.setSourceEntity(230U);
    msg.setDestination(61483U);
    msg.setDestinationEntity(222U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.159524009064);
    msg.setSource(37273U);
    msg.setSourceEntity(162U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(243U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.204155180155);
    msg.setSource(16286U);
    msg.setSourceEntity(179U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(209U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.789840410949);
    msg.setSource(43045U);
    msg.setSourceEntity(235U);
    msg.setDestination(43194U);
    msg.setDestinationEntity(75U);
    msg.total_steps = 95U;
    msg.step_number = 35U;
    msg.step.assign("KPCTRDQYSFNFQQDYOGDRRXPJFSALXAEJJLGCJIFHWQEAGCFRBMROOOIECZZNCCQFIXNOHBBMPKAEPIIAHZVLXIFBJMMOBUMMYBNFBOWWJWKWXACUUBZGWPJDUNYDTKQTNHMNAUJDTLLOVSEVGMLLBGCAVKPTKZWLVLFYUVPHRCRLTJWGSRXQHVSKIET");
    msg.flags = 112U;

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
    msg.setTimeStamp(0.898154492209);
    msg.setSource(8881U);
    msg.setSourceEntity(111U);
    msg.setDestination(38259U);
    msg.setDestinationEntity(78U);
    msg.total_steps = 124U;
    msg.step_number = 171U;
    msg.step.assign("XIFZNBFBNDJABFDBOHDMLDGDTRDJLPTFEOMVHYPUKRRJYRUAGACBGWTGIOHNCDBAZMPTRPNIWEGVYQCSKHIHIRTXXOCJCXCXSXMPUHGERZSQVZQYUWHGOEJKKSKM");
    msg.flags = 222U;

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
    msg.setTimeStamp(0.269240774965);
    msg.setSource(11581U);
    msg.setSourceEntity(64U);
    msg.setDestination(3147U);
    msg.setDestinationEntity(133U);
    msg.total_steps = 76U;
    msg.step_number = 85U;
    msg.step.assign("QLDFNXIHZDFTRLEMHGAQSEZWCWMIAYVEIIUDFNHGBBJOWFJBSODVQHNSBELOVOKMWGFCNQPAJTVZNGJRQAMKDQJGTHAUJU");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.0789393080365);
    msg.setSource(18454U);
    msg.setSourceEntity(35U);
    msg.setDestination(41959U);
    msg.setDestinationEntity(70U);
    msg.state = 222U;
    msg.error.assign("VNEQKNHXCIGTZITMTIOUNCRWYHKNLMRKPHGULPGFNUBBGNOJVWPWXHFXUMARQJKJDETFDESQRCKMVEROIQIYLJPGASYSZVMNOFRDBZLYIZXMSUSRNGFARELQBGGBOZTVJCHCSLOAPVAJMUNQISOCYLVFXVJYIHNUHBQGEWQPVJRDCAHBXCOTIZKODCPDAPPHBAQDZODKRLQXUTYAHEYBUZTKXMEWUWESPMAESTKVXIFXJJSMYFLFKZL");

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
    msg.setTimeStamp(0.395333100006);
    msg.setSource(60270U);
    msg.setSourceEntity(245U);
    msg.setDestination(41307U);
    msg.setDestinationEntity(96U);
    msg.state = 254U;
    msg.error.assign("LYWMVIINWXVMSQBWUHSVFWBYDAHNDTEUPLBEFTKETZERBFPJZOLYPKXQJXMANOCPCJWSFCCGDPVNMZRWWMZDDUWDNIEEEXKCPGFTIGVGRKINTAFVCSSHOBJRUYWIQKTAIBZSUQRHJIFPCTQVUPUXVHULLEJYJAUOQZSCHPBKMAYZFABHRYXHVGYMNHOHDMXTZYXOKDFCOROKJLRGQGGFND");

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
    msg.setTimeStamp(0.384449197623);
    msg.setSource(51202U);
    msg.setSourceEntity(85U);
    msg.setDestination(30510U);
    msg.setDestinationEntity(128U);
    msg.state = 188U;
    msg.error.assign("YZEELYGNTZR");

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
    msg.setTimeStamp(0.778795730885);
    msg.setSource(56880U);
    msg.setSourceEntity(218U);
    msg.setDestination(51974U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.23987605044);
    msg.setSource(39541U);
    msg.setSourceEntity(95U);
    msg.setDestination(6647U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.86139226801);
    msg.setSource(11803U);
    msg.setSourceEntity(56U);
    msg.setDestination(43219U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.0856317534094);
    msg.setSource(19565U);
    msg.setSourceEntity(163U);
    msg.setDestination(17974U);
    msg.setDestinationEntity(248U);
    msg.op = 155U;
    msg.speed_min = 0.119376265984;
    msg.speed_max = 0.597927642345;
    msg.long_accel = 0.624086103582;
    msg.alt_max_msl = 0.865398390819;
    msg.dive_fraction_max = 0.124101895554;
    msg.climb_fraction_max = 0.286437607445;
    msg.bank_max = 0.929821812095;
    msg.p_max = 0.750727304365;
    msg.pitch_min = 0.23287037202;
    msg.pitch_max = 0.934611491439;
    msg.q_max = 0.657852701166;
    msg.g_min = 0.923175697186;
    msg.g_max = 0.673235991805;
    msg.g_lat_max = 0.946690551593;
    msg.rpm_min = 0.192323809003;
    msg.rpm_max = 0.269854542607;
    msg.rpm_rate_max = 0.405202303105;

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
    msg.setTimeStamp(0.415169478025);
    msg.setSource(36935U);
    msg.setSourceEntity(250U);
    msg.setDestination(63222U);
    msg.setDestinationEntity(94U);
    msg.op = 76U;
    msg.speed_min = 0.290925923557;
    msg.speed_max = 0.320862028694;
    msg.long_accel = 0.198448772516;
    msg.alt_max_msl = 0.938127425478;
    msg.dive_fraction_max = 0.888968275752;
    msg.climb_fraction_max = 0.688942414149;
    msg.bank_max = 0.20246947659;
    msg.p_max = 0.862369976638;
    msg.pitch_min = 0.331704493663;
    msg.pitch_max = 0.653484871359;
    msg.q_max = 0.120545423641;
    msg.g_min = 0.173505692056;
    msg.g_max = 0.582971966799;
    msg.g_lat_max = 0.701500630976;
    msg.rpm_min = 0.851464005631;
    msg.rpm_max = 0.352411570546;
    msg.rpm_rate_max = 0.221980661777;

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
    msg.setTimeStamp(0.427341116157);
    msg.setSource(15261U);
    msg.setSourceEntity(233U);
    msg.setDestination(1068U);
    msg.setDestinationEntity(12U);
    msg.op = 194U;
    msg.speed_min = 0.87388409597;
    msg.speed_max = 0.0848263873391;
    msg.long_accel = 0.393240332772;
    msg.alt_max_msl = 0.29689942249;
    msg.dive_fraction_max = 0.431396722886;
    msg.climb_fraction_max = 0.407423853899;
    msg.bank_max = 0.788991293415;
    msg.p_max = 0.832345005595;
    msg.pitch_min = 0.0919582689055;
    msg.pitch_max = 0.264970676994;
    msg.q_max = 0.274434502664;
    msg.g_min = 0.412535802986;
    msg.g_max = 0.28341232967;
    msg.g_lat_max = 0.840198039988;
    msg.rpm_min = 0.453804733499;
    msg.rpm_max = 0.231678150402;
    msg.rpm_rate_max = 0.776919706577;

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
    msg.setTimeStamp(0.649067264939);
    msg.setSource(10761U);
    msg.setSourceEntity(206U);
    msg.setDestination(55733U);
    msg.setDestinationEntity(8U);
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3777318206U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.756501679375);
    msg.setSource(45339U);
    msg.setSourceEntity(27U);
    msg.setDestination(32034U);
    msg.setDestinationEntity(185U);
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.790121938579;
    tmp_msg_0.lon = 0.959225932112;
    tmp_msg_0.z = 0.499247590365;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.speed = 0.941624853278;
    tmp_msg_0.speed_units = 111U;
    tmp_msg_0.abort_z = 0.719722208034;
    tmp_msg_0.bearing = 0.97217991542;
    tmp_msg_0.glide_slope = 25U;
    tmp_msg_0.glide_slope_alt = 0.258535826661;
    tmp_msg_0.custom.assign("XZPYTHOHOYCUNISKXNRGDUHDBEERFKOLJDQUTFAPADVXVFHDJYUHYNOCXABCSFWNRAQSWNQMMMKLAMRAJWGMOIQGWZIOENSVKHFVWPPUVJUZWGVIRLGTRAXXRKBHOMHGNTJTAMJLQEGRSFJDLTIBZPBFIMEFPVBSJLHSYTZLPURXBPZYKIBZXNNYJOECKYOSAQZPUGQIKFLCWEIYGTLVQYCLZCASDR");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.189554486587);
    msg.setSource(2445U);
    msg.setSourceEntity(251U);
    msg.setDestination(30787U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.42219679141);
    msg.setSource(40492U);
    msg.setSourceEntity(162U);
    msg.setDestination(54769U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.964735272301;
    msg.lon = 0.259425096161;
    msg.height = 0.922645029311;
    msg.x = 0.0357375889581;
    msg.y = 0.570207471507;
    msg.z = 0.633708071247;
    msg.phi = 0.36603840445;
    msg.theta = 0.749001042869;
    msg.psi = 0.222449416949;
    msg.u = 0.349704222066;
    msg.v = 0.0376173831612;
    msg.w = 0.659346688649;
    msg.p = 0.870677720954;
    msg.q = 0.0019105381333;
    msg.r = 0.965461119452;
    msg.svx = 0.76272900822;
    msg.svy = 0.89766114373;
    msg.svz = 0.669658144965;

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
    msg.setTimeStamp(0.26132603997);
    msg.setSource(65397U);
    msg.setSourceEntity(92U);
    msg.setDestination(2093U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.427327716354;
    msg.lon = 0.379746302507;
    msg.height = 0.212894261265;
    msg.x = 0.844604236382;
    msg.y = 0.653802345121;
    msg.z = 0.399146049919;
    msg.phi = 0.131973099804;
    msg.theta = 0.686138236633;
    msg.psi = 0.818740942575;
    msg.u = 0.756420078278;
    msg.v = 0.70031039973;
    msg.w = 0.242690758013;
    msg.p = 0.0621529911549;
    msg.q = 0.35284643547;
    msg.r = 0.288114704892;
    msg.svx = 0.137333295719;
    msg.svy = 0.727083288126;
    msg.svz = 0.0287002341443;

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
    msg.setTimeStamp(0.378028797809);
    msg.setSource(30260U);
    msg.setSourceEntity(139U);
    msg.setDestination(13785U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.483599727787;
    msg.lon = 0.137534599423;
    msg.height = 0.481196817553;
    msg.x = 0.613730563974;
    msg.y = 0.736473107144;
    msg.z = 0.628243865196;
    msg.phi = 0.399160197857;
    msg.theta = 0.259390244508;
    msg.psi = 0.0420832201149;
    msg.u = 0.703435015431;
    msg.v = 0.0710794660019;
    msg.w = 0.364403507724;
    msg.p = 0.780398383104;
    msg.q = 0.827564417525;
    msg.r = 0.556526158073;
    msg.svx = 0.0070805790052;
    msg.svy = 0.131009053857;
    msg.svz = 0.608778451979;

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
    msg.setTimeStamp(0.0164394796239);
    msg.setSource(27957U);
    msg.setSourceEntity(129U);
    msg.setDestination(10281U);
    msg.setDestinationEntity(198U);
    msg.op = 133U;
    msg.entities.assign("KZPOTITNGVHTWKMOVPKBJOKUJCKSLQVSFDDHBVGSSFOAJSBZMHRBUJMIORGWAYWPIAHMXOZXDVFKMSTLAMWPIJAZGBZUSEZLLLIZXXXC");

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
    msg.setTimeStamp(0.501202186072);
    msg.setSource(63909U);
    msg.setSourceEntity(5U);
    msg.setDestination(10623U);
    msg.setDestinationEntity(154U);
    msg.op = 175U;
    msg.entities.assign("LJMKFNOVVVSSIGHXTEPYINPQFLTSPEWCUHTAJADZBKUAZZXNJRRPJIGPDPMEJTCZPYTBFHWPAMSWMSSHOXKMYFMOLVUFVCQQXDRYGZYERDXKZBGFCYBPYQBOHQEMGNGBOYHVXHBILWZUNZQBDWTWGWIQKKOXMWKAANAXLOXDNZXB");

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
    msg.setTimeStamp(0.144112209719);
    msg.setSource(36706U);
    msg.setSourceEntity(179U);
    msg.setDestination(21018U);
    msg.setDestinationEntity(34U);
    msg.op = 239U;
    msg.entities.assign("JUXUGYRKLMMDVWUXOTTJGWGYEFQOLZEVAJCWCYLSDKHXWIDNRINCYPTXBMSWKGTVNLMBUGGWQOTZTUVCVUZQBGQOFBQVALPPNJLRYBIEHLDZRQDZQTHAEVPASNJOSQCASDDMHZZCBXJMIXEKMUHKCNDMFAHKRMCPOATFISNKLBQWBHEE");

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
    msg.setTimeStamp(0.974806828127);
    msg.setSource(64618U);
    msg.setSourceEntity(129U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(241U);
    msg.type = 225U;
    msg.speed = 35272U;
    const char tmp_msg_0[] = {-52, 30, 105, -100, 53, -44, 38, -124, 29, 60, 97, 58, -51, -38, -110, -122, 88, 111, -42, -79, -109, -71, 52, 32, -40, 79, -30, 56, 46, -82, -53, 49, -104, -21, 125, 68, 71, -102, 50, -48, 30, -37, 109, 66, 28, 81, 104, -23, 11, 53, 60, 86, 34, -26, 66, 59, 62, 50, -44, -71, -38, -83, -111, -65};
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
    msg.setTimeStamp(0.158273260942);
    msg.setSource(65509U);
    msg.setSourceEntity(22U);
    msg.setDestination(17439U);
    msg.setDestinationEntity(60U);
    msg.type = 178U;
    msg.speed = 16331U;
    const char tmp_msg_0[] = {122, 38, -45, 94, 94, 20, -57, -96, -49, 117, 22, 121, 54, -13, -88, -32, 57, -30, -109, 101, -127, 115, 126, -19, 126, 58, 21, 84, -84, -86, 100, -95, -33, -7, 74, 119, 9, -22, 91, 42, 123, 51, -112, -120, -65, -111, 1, -4, -43, -92, -55, -67, 2, -17, -83, -75, 52, 81};
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
    msg.setTimeStamp(0.507934175521);
    msg.setSource(14183U);
    msg.setSourceEntity(208U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(227U);
    msg.type = 144U;
    msg.speed = 42527U;
    const char tmp_msg_0[] = {-86, 4, -20, -48, -105, -40, -30, 20, -5, -13, 35, -110, -124, -106, 116, -116, -13, -42, -71, -21, 56, -101, 99, 25, 87, -105, -127, -75, 92, 71, -26, -105, 32, -27, -74, -43, 7, -70, -106, 42, 41, 124, -56, 9, 1, 107, 52, 52, 84, -46, 39, 18, 50, 17, 64, -33, -1, 64, 32, -36, -122, 41, -42, -78, -91, -45, -52, 34, 59, -36, -51, 11, -26, -10, -10, 28, 29, 19, -103, 13, -50, 1, 35, 111, 36, 17, -63};
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
    msg.setTimeStamp(0.882915936427);
    msg.setSource(15134U);
    msg.setSourceEntity(108U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(247U);
    msg.op = 194U;
    msg.tas2acc_pgain = 0.424962184707;
    msg.bank2p_pgain = 0.852056042982;

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
    msg.setTimeStamp(0.289560421485);
    msg.setSource(18845U);
    msg.setSourceEntity(214U);
    msg.setDestination(13851U);
    msg.setDestinationEntity(170U);
    msg.op = 198U;
    msg.tas2acc_pgain = 0.540257241656;
    msg.bank2p_pgain = 0.229351254859;

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
    msg.setTimeStamp(0.329372008891);
    msg.setSource(22669U);
    msg.setSourceEntity(101U);
    msg.setDestination(59380U);
    msg.setDestinationEntity(159U);
    msg.op = 251U;
    msg.tas2acc_pgain = 0.0145780165723;
    msg.bank2p_pgain = 0.473119439892;

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
    msg.setTimeStamp(0.971615131424);
    msg.setSource(64476U);
    msg.setSourceEntity(118U);
    msg.setDestination(53973U);
    msg.setDestinationEntity(48U);
    msg.available = 2795849613U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.0145078525977);
    msg.setSource(25207U);
    msg.setSourceEntity(179U);
    msg.setDestination(42236U);
    msg.setDestinationEntity(177U);
    msg.available = 2671091985U;
    msg.value = 190U;

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
    msg.setTimeStamp(0.383572585004);
    msg.setSource(36058U);
    msg.setSourceEntity(4U);
    msg.setDestination(38062U);
    msg.setDestinationEntity(177U);
    msg.available = 396465964U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.228879572327);
    msg.setSource(63976U);
    msg.setSourceEntity(163U);
    msg.setDestination(21842U);
    msg.setDestinationEntity(108U);
    msg.op = 234U;
    msg.snapshot.assign("XUHTYVYHLUBLODTZOXLQNFUYVMHEIDSJNUXWARKMWNIBWHNKKFYPLQCWGZBPDLYQJDKZQDRNWTTVOJXSOXJJBIVEBXMOIHGXVOKIVJQNUABSCIZACSIFPFFSGRCMZPMNUGHECPZTEAMKSQYZNETRFGVDJBBVMRHKQMFWRY");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 78U;
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
    msg.setTimeStamp(0.190120506291);
    msg.setSource(6819U);
    msg.setSourceEntity(223U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(16U);
    msg.op = 63U;
    msg.snapshot.assign("WHPQKOBXQNNDPHLO");
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 15626U;
    tmp_msg_0.destination.assign("BQKANSCASRCMFAYSVWDZPUCEAXHANUPFCYKDZKOWDKQDTRMDOPNBHSLGFZQOZNBWXJHJHGANILUIZEJJRPHE");
    tmp_msg_0.timeout = 0.811700405745;
    tmp_msg_0.sms_text.assign("UBQZINXAMEVWFSKFCBYPNAHMTHZSCAVROFYDFDUNRDEXXPFHJJJSMMWQPCVYGIIADFEKBFYTXRISJPURMWWMQGQJVGXMUKCKYETA");
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
    msg.setTimeStamp(0.459452592558);
    msg.setSource(7642U);
    msg.setSourceEntity(219U);
    msg.setDestination(36103U);
    msg.setDestinationEntity(202U);
    msg.op = 44U;
    msg.snapshot.assign("KIREAVKCUWVNXRDDJUPMSGMOCL");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.289690547781;
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
    msg.setTimeStamp(0.241758400357);
    msg.setSource(47428U);
    msg.setSourceEntity(208U);
    msg.setDestination(14064U);
    msg.setDestinationEntity(132U);
    msg.op = 136U;
    msg.name.assign("TQOGNYEDMIYYPTIBAGTFFPZUREFNJNJIH");

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
    msg.setTimeStamp(0.035572942008);
    msg.setSource(20847U);
    msg.setSourceEntity(146U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(224U);
    msg.op = 146U;
    msg.name.assign("WTFOAYILIOBMKFAXLZJYYTMIJDDJPRQLPSVQAZEHIZKLLNDDSBPVHUOBURFCQNKZMWYUGMKPLVCRCCHCUWMUVYOCGUVTWCVPXEKNHCTJGTWQLGLOESGWWZPCAPQXHKEGBPRWGVIIDQMRQYNMMJONDHFETUNDIXZAXRNDQNRBSUDHVJZLFLNZXMUREFSWKYAGSGBXKFSKOAWJJXAKTBOTFECYRIEPBZGESFNJEMVS");

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
    msg.setTimeStamp(0.572761971881);
    msg.setSource(61479U);
    msg.setSourceEntity(175U);
    msg.setDestination(58182U);
    msg.setDestinationEntity(102U);
    msg.op = 177U;
    msg.name.assign("TECXPJBBXRNLGQGWDCLYOCDVLSALFVVORAJWGKHQDCOHVKRGLWYKSBOPAIPLRISHHQOESBUNQSGLTKCFMKLPRTMBBWMYDYIMQ");

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
    msg.setTimeStamp(0.41613369562);
    msg.setSource(8912U);
    msg.setSourceEntity(199U);
    msg.setDestination(50995U);
    msg.setDestinationEntity(135U);
    msg.type = 202U;
    msg.htime = 0.975368984105;
    msg.context.assign("RMILIALDOZVENMPMSVQYXJYDTVLQAHLLLUXEUEDIITWMTTXGJ");
    msg.text.assign("JDZKXOILQCEJCFSNEYCMNDMMTATUSFEVYARJRKPETGNRHBLWSRFDYLAECSKNMTXJBXNWRVOXTPKBGYNYNJJOPIRVNCCSOATDFKGZXQNMIPODNRRHUPHMVPHUEAUQGVLTGIYMWSRSIBWJCKLXLOIZUFZTKCHILVQQFXWCLBZ");

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
    msg.setTimeStamp(0.886326469766);
    msg.setSource(44667U);
    msg.setSourceEntity(22U);
    msg.setDestination(55044U);
    msg.setDestinationEntity(114U);
    msg.type = 35U;
    msg.htime = 0.42402660731;
    msg.context.assign("DHVYMFDGVZVWMMMQQHUIKIQDNYEHWZUCURNNRPPAHAOBCNKIHZBCDATGPMNX");
    msg.text.assign("UTRSRYAMKIOCHJPTXLKCEEHULSALLHDYAIGQG");

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
    msg.setTimeStamp(0.780499695532);
    msg.setSource(59860U);
    msg.setSourceEntity(221U);
    msg.setDestination(42280U);
    msg.setDestinationEntity(147U);
    msg.type = 1U;
    msg.htime = 0.554065345412;
    msg.context.assign("CQRTANZWCTEZGXIGQCPDWXHDLQDOPBEPYFFMNJZZJBFCNKUYHROHUNBOTHRZDKTGDARYJXBNMJSK");
    msg.text.assign("TZKEINZMMZBKZWRH");

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
    msg.setTimeStamp(0.154640204925);
    msg.setSource(21330U);
    msg.setSourceEntity(178U);
    msg.setDestination(23652U);
    msg.setDestinationEntity(169U);
    msg.command = 183U;
    msg.htime = 0.440306192762;

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
    msg.setTimeStamp(0.14009953401);
    msg.setSource(26588U);
    msg.setSourceEntity(179U);
    msg.setDestination(33854U);
    msg.setDestinationEntity(0U);
    msg.command = 75U;
    msg.htime = 0.0498100809724;

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
    msg.setTimeStamp(0.885068217816);
    msg.setSource(48385U);
    msg.setSourceEntity(248U);
    msg.setDestination(54604U);
    msg.setDestinationEntity(164U);
    msg.command = 11U;
    msg.htime = 0.147363045652;

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
    msg.setTimeStamp(0.65796536443);
    msg.setSource(39470U);
    msg.setSourceEntity(69U);
    msg.setDestination(10725U);
    msg.setDestinationEntity(114U);
    msg.op = 110U;
    msg.file.assign("IGTSSLDHCYPZUWAPSOAVDZHTGQPDGWKWZZRKCKIYYTFPVNYTHSXZAMXCBHRIOUPGWFDESIWQLUYWZHONET");

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
    msg.setTimeStamp(0.969693698376);
    msg.setSource(16623U);
    msg.setSourceEntity(227U);
    msg.setDestination(53439U);
    msg.setDestinationEntity(154U);
    msg.op = 32U;
    msg.file.assign("KKPAPLPYBLYLMLXNTXUQDAHSYSCYEPNWARSXPSUJDRHLGBNYJBZBUEWFJKISNQMQVWCRFLVGIEENOXHOXIDIJRZPSTWCITVBIDKEZWEUVZFIFXCEEMTSXVRQDVGILBDFAYAGMMWNQOZNVTOYELAOMSCWGHQHAGOMFDGJXZKDDJTWHYKEFGKLYPCACJQ");

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
    msg.setTimeStamp(0.553465188591);
    msg.setSource(52736U);
    msg.setSourceEntity(15U);
    msg.setDestination(17524U);
    msg.setDestinationEntity(177U);
    msg.op = 27U;
    msg.file.assign("FXDMVRPKFWOKUIQQJCAPTZLDGEWABJLPFSWUTVOSLTPXOMKLCNKWKZHAHCPMLUQUTZFSXBCJYSEGSDGTPPDRVZGEUUJ");

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
    msg.setTimeStamp(0.393994126406);
    msg.setSource(39796U);
    msg.setSourceEntity(14U);
    msg.setDestination(63631U);
    msg.setDestinationEntity(162U);
    msg.op = 245U;
    msg.clock = 0.771879132568;
    msg.tz = -17;

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
    msg.setTimeStamp(0.0797161217634);
    msg.setSource(29714U);
    msg.setSourceEntity(70U);
    msg.setDestination(64662U);
    msg.setDestinationEntity(23U);
    msg.op = 143U;
    msg.clock = 0.602979809195;
    msg.tz = -71;

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
    msg.setTimeStamp(0.328022623857);
    msg.setSource(7415U);
    msg.setSourceEntity(104U);
    msg.setDestination(22033U);
    msg.setDestinationEntity(99U);
    msg.op = 166U;
    msg.clock = 0.0822894931054;
    msg.tz = -105;

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
    msg.setTimeStamp(0.925352408568);
    msg.setSource(65387U);
    msg.setSourceEntity(145U);
    msg.setDestination(7977U);
    msg.setDestinationEntity(76U);
    msg.conductivity = 0.06947963362;
    msg.temperature = 0.98175042706;
    msg.depth = 0.3761943029;

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
    msg.setTimeStamp(0.975734263279);
    msg.setSource(9712U);
    msg.setSourceEntity(42U);
    msg.setDestination(49561U);
    msg.setDestinationEntity(49U);
    msg.conductivity = 0.106134842314;
    msg.temperature = 0.357780359845;
    msg.depth = 0.720226997683;

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
    msg.setTimeStamp(0.104944538469);
    msg.setSource(15933U);
    msg.setSourceEntity(166U);
    msg.setDestination(55901U);
    msg.setDestinationEntity(192U);
    msg.conductivity = 0.361864819409;
    msg.temperature = 0.822733066257;
    msg.depth = 0.469783765386;

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
    msg.setTimeStamp(0.34378623592);
    msg.setSource(33187U);
    msg.setSourceEntity(39U);
    msg.setDestination(26260U);
    msg.setDestinationEntity(210U);
    msg.altitude = 0.230024121308;
    msg.roll = 55176U;
    msg.pitch = 42243U;
    msg.yaw = 35161U;
    msg.speed = 26144;

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
    msg.setTimeStamp(0.823849635968);
    msg.setSource(60627U);
    msg.setSourceEntity(13U);
    msg.setDestination(37494U);
    msg.setDestinationEntity(78U);
    msg.altitude = 0.789662258607;
    msg.roll = 56557U;
    msg.pitch = 41203U;
    msg.yaw = 57229U;
    msg.speed = -14559;

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
    msg.setTimeStamp(0.449696398537);
    msg.setSource(19852U);
    msg.setSourceEntity(1U);
    msg.setDestination(63767U);
    msg.setDestinationEntity(43U);
    msg.altitude = 0.221724584377;
    msg.roll = 7675U;
    msg.pitch = 8123U;
    msg.yaw = 44918U;
    msg.speed = 11575;

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
    msg.setTimeStamp(0.154878925602);
    msg.setSource(23432U);
    msg.setSourceEntity(114U);
    msg.setDestination(58352U);
    msg.setDestinationEntity(202U);
    msg.altitude = 0.481046303177;
    msg.width = 0.922806317222;
    msg.length = 0.31311794902;
    msg.bearing = 0.0619411005246;
    msg.pxl = 26973;
    msg.encoding = 65U;
    const char tmp_msg_0[] = {98, -18, 13, -115, 78, -120, -68, 41, 58, 55, -35, 9, -11, -109, 79, -91, 122, 19, 62, -16, -59, -41, -35, -84, -20, -34, 117, 76, -33, 29, -74, -39, 84, -79, 124, -88, 25, -25, -28, 75, 13, 86, -109, -59, 26, -82, -99, 50, -22, -77, -120, -60, -70, 31, -106, 54, -85, 51, 15, -25, 67, 106, 72, -48, -67, -125, -123, -94, 96, -74, 0, -67, -45, 15, 107, 40, 112, -125, 66, 70, -57, -107, 19, -20, -81, 85, 4, 50, -89, 112, 83, -58, 87, -81, 89, 111, -40, -109, -86, 12, 114, 101, 86, 69, -121, 25, -22, -44, 13, -42, 118, -43, -109, 114, -19, -22, 89, 108, -37, 26, -123, 115, 107, -6, -37, -114, -10, -67, -37, -72, 34, 125, 74, -90, -38, -37, 49, 103, 65, -90, 61, -95, 87, -99, 46, -64, 27, -85, 119, -42, -109, -26, -24, 71, -17, 61, -124, 67, 8, 105, -53, 95, -27, -53, -120, 41, 120, -88, -89, 54, -87, -38, 18, 85, 46, 123, 91, 25, -72, 41, -118, 43, 2, -107, 1, -45, -43, -46, 53, 95, -101, -89, -14, 58, 79, -114, 75, -128, -78, -13, -76, -110, -86};
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
    msg.setTimeStamp(0.140571886133);
    msg.setSource(52389U);
    msg.setSourceEntity(115U);
    msg.setDestination(21163U);
    msg.setDestinationEntity(17U);
    msg.altitude = 0.978945998323;
    msg.width = 0.502961699308;
    msg.length = 0.617845379704;
    msg.bearing = 0.179295616364;
    msg.pxl = -4128;
    msg.encoding = 176U;
    const char tmp_msg_0[] = {107, -13, -127, 44, -29, 30, 49, 85, 19, 105, -69, 95, 96, -76, -76, -75, 18, -8, -98, 118, 32, 109, -106, -68, 81, 58, 53, -88, 85, -54, -43, -48, 39, 35, 24, -80};
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
    msg.setTimeStamp(0.125814486148);
    msg.setSource(52416U);
    msg.setSourceEntity(75U);
    msg.setDestination(60810U);
    msg.setDestinationEntity(43U);
    msg.altitude = 0.375768094704;
    msg.width = 0.313919673631;
    msg.length = 0.756537459722;
    msg.bearing = 0.626329397905;
    msg.pxl = 13430;
    msg.encoding = 138U;
    const char tmp_msg_0[] = {-95, -93, 107, -102, 66, 24, 108, -72, 70, -25, 113, 79, 59, 43, -80, 105, -29, 72, -110, 38, -111, -38, 26, -114, 117, 12, -96, 25, 62, 58, -21, -89, 89, 69, -77, -27, -115, 116, -20, -14, 98, -28, -68, 57, 114, 124, 15, -67, -86, 31, 7, 63, 32, 18, -77, 54, -100, 21, -100, 104, 89, 60, 59, 45, -41, -98, 67, -61, 62, -62, 54, 66, 15, -34, 75, 73, 24, 27, -80, -64, -16, 41, -62, 124, 71, 3, -119, -28, -74, 55, -59, -14, -85, -3, 18, 98, 40, 64, 93, -74, -81, -96, 18, -24, -82, -51, 124, -122, 55, 77, 105, 80, 72, -87, -48, -58, 9, -33, -43, -121, -49, 69, -117, 53, 111, 15, 70, 33, 5, 62, 108, 79, -65, 49, -32, 21, 1, -53, 91, -85, 0, 55, -44, 75, 105, -58, 69, -30, -28, 6, 52, 72, 124, 93, -91, 106, -71, -102, 86, 2, 114, -15, -24, 108, 17, 111, -117, -67, 84, -13, -43, 68, -94, -79, -13, -97, 28, 27, 78, 126, -60, -56, -36, -93, 37, 85, -73, 114, -2, 82, -21, -52, 114, -14, 115, 19, -86, 70, -27, 16, 13, 106, 48, 102, 23, 82, -96, 15, 57, 78, -63, -9, 27, -97, 14, 117, 23, -11, 12, -40, -4, -94, 40, 23, 14, -80, 58, 76, -43, 70, -12, 15, 115, 18, -68, 77, 56, 50, 78, 113};
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
    msg.setTimeStamp(0.370541734956);
    msg.setSource(17707U);
    msg.setSourceEntity(142U);
    msg.setDestination(20315U);
    msg.setDestinationEntity(234U);
    msg.text.assign("PRUCACCWWFPTRPUQIHSLMDEA");
    msg.type = 201U;

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
    msg.setTimeStamp(0.525245060597);
    msg.setSource(9230U);
    msg.setSourceEntity(116U);
    msg.setDestination(54400U);
    msg.setDestinationEntity(49U);
    msg.text.assign("SBEKZDNTAGPPHZINZUDSIEIKVRFXTNSSNZWHMMBTGYQSBTHRBBHWFLUWPBAYRVNLLJPOMAGJEAQSFJOXLHCCXAPAIJJZBXRODDURKMCUZGCEHMPQVHY");
    msg.type = 187U;

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
    msg.setTimeStamp(0.263703758422);
    msg.setSource(18838U);
    msg.setSourceEntity(206U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(179U);
    msg.text.assign("ZRXHBLXROIVPSTMWBUQTGEDNAKKXPTHWBOVVOALNRACAKGOXICNRLNJZOJICUSAUZSTHMCHCFWZELWYSSMKDQYMTWIPWTEMGCMLDCVGJDXRPJGNKTFEF");
    msg.type = 152U;

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
    msg.setTimeStamp(0.401041161006);
    msg.setSource(55427U);
    msg.setSourceEntity(131U);
    msg.setDestination(60960U);
    msg.setDestinationEntity(133U);
    msg.parameter = 136U;
    msg.numsamples = 124U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 24672U;
    tmp_msg_0.avg = 0.929826283197;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.309623169633;
    msg.lon = 0.0810675466569;

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
    msg.setTimeStamp(0.812902611452);
    msg.setSource(31323U);
    msg.setSourceEntity(26U);
    msg.setDestination(60708U);
    msg.setDestinationEntity(170U);
    msg.parameter = 206U;
    msg.numsamples = 159U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 30885U;
    tmp_msg_0.avg = 0.686500015258;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.321415945734;
    msg.lon = 0.281464643401;

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
    msg.setTimeStamp(0.516268185166);
    msg.setSource(19736U);
    msg.setSourceEntity(140U);
    msg.setDestination(25454U);
    msg.setDestinationEntity(46U);
    msg.parameter = 128U;
    msg.numsamples = 43U;
    msg.lat = 0.321306282897;
    msg.lon = 0.334006781355;

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
    msg.setTimeStamp(0.453767393746);
    msg.setSource(7791U);
    msg.setSourceEntity(44U);
    msg.setDestination(26664U);
    msg.setDestinationEntity(50U);
    msg.depth = 45873U;
    msg.avg = 0.494592055606;

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
    msg.setTimeStamp(0.949293988148);
    msg.setSource(13629U);
    msg.setSourceEntity(77U);
    msg.setDestination(60318U);
    msg.setDestinationEntity(27U);
    msg.depth = 12356U;
    msg.avg = 0.0934311733827;

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
    msg.setTimeStamp(0.660111419375);
    msg.setSource(61002U);
    msg.setSourceEntity(75U);
    msg.setDestination(44554U);
    msg.setDestinationEntity(108U);
    msg.depth = 7080U;
    msg.avg = 0.373837975211;

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
    msg.setTimeStamp(0.907004224024);
    msg.setSource(64074U);
    msg.setSourceEntity(139U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.880385086297);
    msg.setSource(47953U);
    msg.setSourceEntity(156U);
    msg.setDestination(14426U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.438554584118);
    msg.setSource(3809U);
    msg.setSourceEntity(192U);
    msg.setDestination(10165U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.778035079602);
    msg.setSource(55666U);
    msg.setSourceEntity(230U);
    msg.setDestination(22813U);
    msg.setDestinationEntity(80U);
    msg.sys_name.assign("XFZUXMHKYEKBCVOKTGHXWRFAODATBZUGDJQJWHIMCHEFMKQTEMX");
    msg.sys_type = 201U;
    msg.owner = 9408U;
    msg.lat = 0.747196841011;
    msg.lon = 0.84503830158;
    msg.height = 0.551467592107;
    msg.services.assign("OVNINOAOMNNNTRDVBRHILTKGMZSOEGCYKKIENCJQCUMGHDTFPBQFQJBANLJZUWARROGCTNVODBVROAHMFHPEISPXWXCCEQVTSHGPESFUOWGJDLUHGXSJRXMIYTWYFHQJKNESWFVYJXXBHVQYAYQIZO");

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
    msg.setTimeStamp(0.919971125164);
    msg.setSource(47294U);
    msg.setSourceEntity(7U);
    msg.setDestination(15058U);
    msg.setDestinationEntity(129U);
    msg.sys_name.assign("UFDDWQKSVWPXSDTFWXBEGJJSUQLKJZOHEICUKEMQPAIXIHTMBZRRPZSJLJJIQCXHGKTKNHYRIAGODNSALHZBEUHRRLPGCOWDTNBVEFGEGCBJLKVAGZTDDZMOGWVKLBUJIAOVQSDWWHRAULZSYAACMZUQRYNQCOMFCXOOJUMMFRXIKWVVGBAYDFPJSFHWNEIYQYLPHYNNYFBMM");
    msg.sys_type = 35U;
    msg.owner = 63220U;
    msg.lat = 0.0496399246177;
    msg.lon = 0.268590868687;
    msg.height = 0.85778201635;
    msg.services.assign("FXBGUVZFXRQJYRQCABYKQPAGEYXKEJISJMVGURWSTWNNZVJULENYEPOPFSTNURQWUMCEJT");

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
    msg.setTimeStamp(0.0664316589491);
    msg.setSource(5544U);
    msg.setSourceEntity(14U);
    msg.setDestination(2078U);
    msg.setDestinationEntity(99U);
    msg.sys_name.assign("HMAONMIIVUWSIQIXFROVWDLTFWIALVWNREWDYFDQGDELDFZCRVUXYKPLGUCEPNOSSQYUXJHNUQRKWORMEAOCRTKZVKPAQTCBVBWFRDHMPYJUXCHBQATWTNAMQMDBOLKYZKAQREJJPAZOBUTBRIHNWVJFKZ");
    msg.sys_type = 30U;
    msg.owner = 49430U;
    msg.lat = 0.724780727485;
    msg.lon = 0.17553035153;
    msg.height = 0.175699748063;
    msg.services.assign("DGOHLBYPXRQQJSVFMQNNRAPGSVEHKKQDZPYMKWEKTAURWJFCAFMCLWFUKTPZHMSDYEDYYEQMZOSERIBPZAYZLVVDXHKXWWLTVXLGAFZNDJKMTGEWEZVOOHIASALUDFPVBOYEJUGCKISMLTGGWOILFUUYUOCFUJMREXJHXQDBPERMJSBHIJJITWTBGQNWGVCBTLSFVOZYXDYUNBGC");

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
    msg.setTimeStamp(0.696407540821);
    msg.setSource(52640U);
    msg.setSourceEntity(135U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(182U);
    msg.service.assign("VJGFMEJFQCMSYYXDBZDNSUWKXVRBDIIHZUJWDYBFPTESZUXNTYAKJLSICNHJZVCILPMKFWCYTHPXIMWNFUTXLSNFORUPPMTFIBEUIEHVTIACKBLOYVRNWCLUKWTALEJESRWVFKQQGNERJGVKFPPTPMWYQBGHJDSLZADJQZGDMIDHHQAUSXQMBRGQENHOPGMCYAAXAXXZCMAOCIOBVOSKEZWOGZVTOFDXKTJEZAQKYGPSHRHUOLQYLULBW");
    msg.service_type = 109U;

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
    msg.setTimeStamp(0.622244082192);
    msg.setSource(9879U);
    msg.setSourceEntity(208U);
    msg.setDestination(25713U);
    msg.setDestinationEntity(254U);
    msg.service.assign("QDFRHWZINCCRZOVAZU");
    msg.service_type = 25U;

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
    msg.setTimeStamp(0.445311812277);
    msg.setSource(24429U);
    msg.setSourceEntity(238U);
    msg.setDestination(27556U);
    msg.setDestinationEntity(167U);
    msg.service.assign("NZBOACQQFOVBFTYVIRGWPZBEHLGXAMXD");
    msg.service_type = 203U;

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
    msg.setTimeStamp(0.742776672374);
    msg.setSource(36052U);
    msg.setSourceEntity(173U);
    msg.setDestination(52385U);
    msg.setDestinationEntity(134U);
    msg.value = 0.236643474435;

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
    msg.setTimeStamp(0.101998664905);
    msg.setSource(54992U);
    msg.setSourceEntity(159U);
    msg.setDestination(17408U);
    msg.setDestinationEntity(182U);
    msg.value = 0.400693946331;

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
    msg.setTimeStamp(0.190789917672);
    msg.setSource(37067U);
    msg.setSourceEntity(94U);
    msg.setDestination(48511U);
    msg.setDestinationEntity(49U);
    msg.value = 0.296893992497;

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
    msg.setTimeStamp(0.205401772664);
    msg.setSource(37080U);
    msg.setSourceEntity(246U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(158U);
    msg.value = 0.725113780444;

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
    msg.setTimeStamp(0.202543903754);
    msg.setSource(12359U);
    msg.setSourceEntity(50U);
    msg.setDestination(27486U);
    msg.setDestinationEntity(99U);
    msg.value = 0.0937420620556;

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
    msg.setTimeStamp(0.0437743808519);
    msg.setSource(41297U);
    msg.setSourceEntity(52U);
    msg.setDestination(15617U);
    msg.setDestinationEntity(154U);
    msg.value = 0.71545447037;

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
    msg.setTimeStamp(0.435477557723);
    msg.setSource(6640U);
    msg.setSourceEntity(51U);
    msg.setDestination(63231U);
    msg.setDestinationEntity(244U);
    msg.value = 0.947220968631;

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
    msg.setTimeStamp(0.17582947807);
    msg.setSource(35511U);
    msg.setSourceEntity(254U);
    msg.setDestination(10419U);
    msg.setDestinationEntity(45U);
    msg.value = 0.389694259463;

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
    msg.setTimeStamp(0.739380894817);
    msg.setSource(12784U);
    msg.setSourceEntity(179U);
    msg.setDestination(25979U);
    msg.setDestinationEntity(210U);
    msg.value = 0.538258623839;

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
    msg.setTimeStamp(0.694266470191);
    msg.setSource(5484U);
    msg.setSourceEntity(30U);
    msg.setDestination(56254U);
    msg.setDestinationEntity(213U);
    msg.number.assign("GSFZYGVCJFWSXUXVDMKKNZMDPEIPOHKUJIJRFYOOVFETGH");
    msg.timeout = 7736U;
    msg.contents.assign("FRKYZIOANFXNHEZFWVHXYAJLZPNEEZBVOQCQENDNDSFTCCCLHVWIEGXXXPXSYHFBMUHPVSOXOTGLTSNTZMGBBGYJJLMCURIQARCKXKOSDOSMJIRHDPMLMDISYVLYTHKWUQUYAXONMXUFBAVTCQZBAKIVZUKRIU");

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
    msg.setTimeStamp(0.973827885867);
    msg.setSource(46743U);
    msg.setSourceEntity(175U);
    msg.setDestination(4881U);
    msg.setDestinationEntity(15U);
    msg.number.assign("ZHBUFFEMJSLGIMGCERFBYPHIUELLTYTXQQLWSGZBDUJHKODCASXISGIDPSGJVRRYOAAHTSWCNKZRCXWETNTRODJNTXUXSLJYSJNQFYVTZIMRKHCSOFAUIPWTAAKUPVNMOHQOYVYBPDIDZBVKMUGQFMEAQLWHNGMJQNZIRKHEPBDZZEOUPREXICJVFKAVFRGEJGZHYOY");
    msg.timeout = 54370U;
    msg.contents.assign("IUKBXHPBBKMOEDTOSXRYEJGMGZYVEEDZMXGVWTDSVCAQZGNBKRRHNZORZBPDETMZITXVHWMGACGAECLIUCUCFOHTEQRUWLKXDQUEPOK");

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
    msg.setTimeStamp(0.92874191954);
    msg.setSource(42255U);
    msg.setSourceEntity(230U);
    msg.setDestination(12395U);
    msg.setDestinationEntity(6U);
    msg.number.assign("UMQPAMODLCQKNHFUOPWFSPPGNCNKFLXEUFKRISEWKWUCJUWYAEYLIQDMVTYJGSRABTIGYGYYOBABAKTKEDYNVHIRAXWGXLNWPODBFJXLCJWGZWHILJIDKQOBMZPRMIVFDYADCJFNXOWJJBZLRRNVSSFMMSNIRZSZNDEEENRXMGBMIZHFBGHTLXOJSQPUBHACCYHQPULCHEHZTXGBEQTDTIVVKZMRVAOOCVEVHPTQPTUQSUWKY");
    msg.timeout = 29078U;
    msg.contents.assign("PZZESGHMXTIVNOKPRBQMPN");

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
    msg.setTimeStamp(0.290411525049);
    msg.setSource(25178U);
    msg.setSourceEntity(118U);
    msg.setDestination(24693U);
    msg.setDestinationEntity(43U);
    msg.seq = 1067637856U;
    msg.destination.assign("FUHWBOSBGNUTEWAXUKZZU");
    msg.timeout = 54123U;
    const char tmp_msg_0[] = {-56, 43, 55, -40, 99, -82, 37, -81, 43, -90, 81, 67, 123, 58, -89, 12, 22, -60, 64, -21, 87, 109, 91, 7, 116, 79, -46, 34, 17, 56, 87, -120, -89, -55, -6, 59, 60, 24, -54, -99, -94, -103, 51, -64, -3, 9, 80, 33, 91, -114, 51, 35, -11, 87, 11, -56, 90, 110, 80, -86, -124, 98, 87, -12, -18, -93, 117, 89, -84, 50, -61, -1, -18, -37, 123, 73, 30, -93, -9, 78, -99, -79, 52, -85, 54, -111, 13, -53, -89, -77, 56, -3, 38, -29, 98, -114, 116, 119, 13, -54, 14, -110, 4, 26, -76, 126, -66, -51, -53, -56, 79, -61, -37, -122, 87, -21, 17, -61, 87, -124, 95, -32, -115, 107, -79, -25, 117, -75, -51, 66, -8, 98, -81, -128, 122, 103, 103, 35, -32, 111, -38, 30, -115, 32, 98, 39, 51, -26, 1, 73, 92, 120, -75, -30, 65, 25, -122, 38, -23, 101, 78, -66, 58, 99, 47, 51, 99, -95, -119, -83, -80, 124, -100, -74, 4, -58, 67, -44, -98, 28, -29, -3, -37, 73, -9, 111, 15, -38, -8, 3, 52, -84, 111, -104, -92, 37, -47, -65, -17, 42, -39, 73, 116, 39, 46, -125, 88, 8, -34, 105};
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
    msg.setTimeStamp(0.597157929445);
    msg.setSource(37055U);
    msg.setSourceEntity(1U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(111U);
    msg.seq = 1129411281U;
    msg.destination.assign("YAEYXUGMAFOUIVIWGKHYWMQIMHDHVUSRQOXNFDRDJTIAOZWEGGYDEHUSEADHBCKWFYXGTRHPZCLTTMPPDZCTICWVYPWRRQDOPULGFBGFGMKJNVHJBTHMSPSDSXMPKOZEOKYZAPQOALAFUQIJHWIZTCZPJSZUNCXFFNCUYSRVNFFENZDPVWZXDOCTGESUCKBOVLQBINMIVREBSLCQQUA");
    msg.timeout = 39999U;
    const char tmp_msg_0[] = {-97, 73, -87, 49, 95, -35, -86, -76, 33, 75, 59, 119, 52, 91, 65, 121, 28, 21, -71, -29, -123, -7, -49, -47, -33, 11, -109, -32, 66, 62, -120, -80, -122, 103, 64, 71, -40, -15, -60, -118, -18, -19, 82, -40, 10, -95, -58, -79, -109, 96, -94, 43, 63, 81, -48, -26, 60, 118, -58, -96, -39, -100, -36, -128, -128, 60, 5, 3, -115, -34, 10, -54, 120, 97, -72, 83, 66, -114, 49, 3, -50, 59, -100, -108, -57, 33, 9, -68, -58, -122, 38, -61, 13, -25, -1, 93, -6, -24, -12, -14, -85, 41, 0, 24, -11, -76, -127, 123, 76, 86, -14, 71, 48, -116, 1, 123, -114, 85, 77, -24, 90, 75, 52, -125, 72, -71, -124, 92, -55, -3, -23, -92, 80, 65, 125, -74, 5, 30, 84, 96, -73, 35, -70, -105, 8, 68, 70, -108, 20, 50, 58, -17, -87, 76, 95, -13, -27, -60, -80, -5, -128, 64, -107, -43, 21, 10, -104, -127, -108, -127, -73, -31, -117, 101, -18, -36, -99, -26, -118, 124};
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
    msg.setTimeStamp(0.534340547924);
    msg.setSource(51096U);
    msg.setSourceEntity(61U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(198U);
    msg.seq = 3846243173U;
    msg.destination.assign("IYREURMPMHIRLDICQMDLRTWVUYJWEXUXBJBUSSAUEMFDWHEGXDFPOUPNNVVUKRVSDZGYYFQMNAWPQSBHWMGNBHPWPZKGZKIFY");
    msg.timeout = 16122U;
    const char tmp_msg_0[] = {-11, 64, 56, 8, 27, 122, 5, 106, 86, 31, 31, 86, 49, -103, 42, 51, -72, -9, -75, 61, 107, -18, 123, 33, 47, -103, -104, 6, 84, -68, -58, -4, 4, 8, -103, 82, -58, -108, -14, 8, 33, -33, 73, 48, -122, -18, -73, -8, -77, -63, -39, -30, -25, 16, 12, -1, -77, -106, 6, 123, 41, 38, -90, -5, -94, -10, -84, -36, 96, -18, 124, -40, 119, -104, 108, -126, -64, 6, 16, -97, 5, -115, -67, -48, 18, 121, -83, -125, 101, -100, 19, 12, 3, 54, -38, -95, -107, -102, 90, 117, 63, -88, 101, 104, -127, 98, 83, 94, 63, -100, -110, 46, 36, 18, 36, -97, 77, -123, -80, 74, -34, 54, 65, -59, 4, 80, -76, 113, -73, -74, 2, 115, -96, -16, -118, 38, 98, -124, 90, 112, 8, -78, 97, -38, 20, 111, 87, 88, -41, 26, 109, 6, 120, -24, -37, -122, -21, 43, 11, 46, 85, 99, -40};
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
    msg.setTimeStamp(0.803997952041);
    msg.setSource(52035U);
    msg.setSourceEntity(102U);
    msg.setDestination(9574U);
    msg.setDestinationEntity(161U);
    msg.source.assign("DGMEYGGORBXXMREWJZPEDLCLIPZTLBINQSJIPVPTMWHHEIBMKMACBYYJXYXJOWLFDYVBBZQDTQFQQWOAZFCLKURNGVCLCNQJDDKARDHUNFZMRANTOEJPGCYKYILWINXYAIRBUXWHUGXDVSOMPYJZXWTSSMCTKKKGHMRONPFHMZKVTGCOQRZFEJLSQFXBAJSENVKFHUHUEVKETHIPIGVSNCFWPUOVFA");
    const char tmp_msg_0[] = {-74, -46, -108, -4, -106, 12, -6, 51, -13, 98, -78, 53, -97, 77, -46, -22, -123, -6, -51, -105, -79, 98, -12, 38, -16, -67, 52, 117, 35, 84, 101, 99, 65, 100, -91, 48, 60, 91, -39, -41, -113, -70, 5, 108, -125, -51, 3, -113, -36, 111, -72, 124, 21, 97, 65, -71, -30, -29, -108, -14, -16, 80, 12, -119, -33, -93, -102, -77, 42, 102, -3, 104, -32, -16, 83, -44, -89, 47, -54, -33, -3, -9, -23, -10, 19, 5, -10, 94, 105, -27, 17, -117, 0, 98, -12, 65, -2, 15, 81, 121, -119, 101, -59, -2, 59, -36, 104, 103, -66, -67, -101, 87, -67, 32, -68, -77, -91, 3, -84, -30, 55, -112, 3, 11, 83, 41, 59, -85, 20, -126, -90, -31, -70, -40, -44, 53, 43, 109, 1, 24, -126, -102, -64, -128, -24, -101, 17, -41, 40, 83, 62, -37, -72, 81, -105, -71, -72, -98, 11, -33, 15, -65, -45, 97, 79};
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
    msg.setTimeStamp(0.508120090414);
    msg.setSource(25628U);
    msg.setSourceEntity(146U);
    msg.setDestination(15172U);
    msg.setDestinationEntity(116U);
    msg.source.assign("SIPWHWLAMPTGNU");
    const char tmp_msg_0[] = {-68, -34, 79, -92, 44, 56, 29, -122, 98, -53, -17, 95, 120, 65, 9, -115, -110, -48, -106, -14, 36, -93, 21, 33, -45, -46, 124, 103, -86, -61, 36, -75, -44, 110, 85, 15, -76, -7, -76, 126, -101, -118, -115, 40, 57, -22, -90, -74, 14, -40, -33, 76, 56, 89, 76, 34, 78, -36, 18, -73, -16, 84, 106, 85, -108, -100, -88, 43, -123, -69, -97, 13, -50, 21, -89, -7, -38, -6, -20, -114, 51, -79, 68, 37, -41, 75, -12, 67, -67, -10, -122, -51, 90, -71, -92, 15, 10, -60, 48, -46, 102, 72, 44, 96, -33, 105, -85, -118, -115, 30, -28, 90, -86, 122, -79, -79, -81, 4, 13, 11, -8, -78, -38, 7, -34, 41, -110, 95, 40, -52, 79, 79, -70, 55, 102, 1, -10};
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
    msg.setTimeStamp(0.717496394748);
    msg.setSource(21189U);
    msg.setSourceEntity(226U);
    msg.setDestination(45817U);
    msg.setDestinationEntity(121U);
    msg.source.assign("AHMPFXEMDKWIENABENIFZFGOQVCEDBUQSXSTMUQCQYLIRVAACSKJNQOWTQSYBIKIYFLVEHPTUXDJEFFMZPOYXJPGUORXDUVEAFDBPKOYDGTISGWXBWWCVQZAFSXXKCZVFRDPBRHLOMSLQUPZJNPLONVNYNTGKAMHFYHTABLHMBIYSZLHDTTKIMGKCLBCY");
    const char tmp_msg_0[] = {4, -77, -87, -94, -28, 13, -8, -10, -55, 100, -89, 15, -21, 23, 40, -28, -66, 20, -63, 0, -67, 30, 19, -29, 17, -42, 1, 29, -93, -52, -15, 77, 2, -78, -35, -47, -5, 77, -6, -114, 26, -34, 20, 101, -41, -57, 3, 76, -66, -39, 122, -15, -66, -65, -88, -13, -112, 62, 36, 99, -15, 91, -13, 126, -42, -116, -88, -25, -87, -63, -13, -57, 85, -74, -70, 0, -51, -41, -62, -56, -5, 71, 74, -123, 102, -35, 56, 27, -79, 76, -38, -11, -75, 95, 79, -71, 29, -7, 78, 88, -46, 26, -117, 49, 111, 29, 108, 125, 31, 123, -101, -108, 123, 119, -64, -123, 16, -124, 67, 125, -12, -19, 88, 2, 117, 92, 121, 26, -121, -47, 118, 27, 55, -42, -92, -66, 4, 9, -91, 13, 6, 84, -86, -111, 98, 98, 56, 0, 100, -39, -18};
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
    msg.setTimeStamp(0.674637348688);
    msg.setSource(42189U);
    msg.setSourceEntity(204U);
    msg.setDestination(20457U);
    msg.setDestinationEntity(47U);
    msg.seq = 1961033093U;
    msg.state = 27U;
    msg.error.assign("MVSIBJQHCYAYSWECOGFVTGI");

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
    msg.setTimeStamp(0.418819178753);
    msg.setSource(43431U);
    msg.setSourceEntity(4U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(238U);
    msg.seq = 60875414U;
    msg.state = 168U;
    msg.error.assign("NRPLSHBDPYIYULDFGEUPWXUHWAUDUICFWXMZTJIITEXEYVNIGNBXZKICHDQWBZDMSLVEAYUTSKBLJFPHMEQVYZMXLSWVQLEQPLKQOQESRACNIUOOZDTZBRFBEVJAJFJUTBFGWOIVYPJMCKYMSP");

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
    msg.setTimeStamp(0.791942896885);
    msg.setSource(62457U);
    msg.setSourceEntity(15U);
    msg.setDestination(17396U);
    msg.setDestinationEntity(173U);
    msg.seq = 163021429U;
    msg.state = 128U;
    msg.error.assign("NBVMMAGHXRCIXRROIJFZCUVMNSILVDOYUUHFTWNPJGQKSGPVIWEVFSCEOKGUXQEGEYNLOTRTNQAXGLIWMTNGPPIECJZDBQDBKBPCOBBBDYKXMJPQELHFQDSCGYGFPPQRAJUPLISZ");

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
    msg.setTimeStamp(0.0782526339768);
    msg.setSource(32609U);
    msg.setSourceEntity(190U);
    msg.setDestination(37854U);
    msg.setDestinationEntity(41U);
    msg.origin.assign("CCKBPLVFHHBHAFMWZYMAAHKGMSAKEKVBMEQCCXZPVMDTGPMZBNLNTWCUFBOONCDFEOGXLMPEYFIDWIAEDHWJRWDZFUOFGSRGXUHEJTFBHGXITRRILNBOSAWKHXGOXSPYRUMYQCIYLQERUJZJJZPLUNKPJYLNBASZGSOTRVLRLTCYHYMPNSTTKGQVBDXIQYSKOPEHMQATV");
    msg.text.assign("IVAPRRXXUEEZODMUQAPHYBFQFARGMFSIKFKBAVNMOGBGKQXNRRW");

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
    msg.setTimeStamp(0.173098538282);
    msg.setSource(15806U);
    msg.setSourceEntity(52U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("BJNRGCGTSVLJBISNFPRLRUDHEEGIMWFZFDWQHXIQTGXKBKBHVUYMBPHRSIPVZCVKVYZMVTHBURDNJVAYFIUYEQTQYG");
    msg.text.assign("QBRATJIRBDNKZMXKRVSHZBBIOCJTZCVNHGZRQECLPHKYQIWGIUKOHZAOMNYFQTAARDNAYODWTLVDSMIYIJIEVDDFWWTFYDPCQCEPHSKFSUMRVXAIVUKRRGETFHZIOMYBMCDNQEUYOGFWDLJMWSMANZWSWKXBPLHXVVLGEOFYNCQTJNWAAUC");

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
    msg.setTimeStamp(0.798030193556);
    msg.setSource(36183U);
    msg.setSourceEntity(146U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(61U);
    msg.origin.assign("BGSXWQSYLBLUJDUYCYRVFMXDRHEVDBOXOUSEBGMQRAMPQMOKTHYBBWOASMBU");
    msg.text.assign("DBELBKYUUQDIIHLYBQZSVOXIWBAXOGCDVGTRZYSILBTURNUQIQVPZLIKAHIGYZZOWZTVNEUTZXSXNCKNRCCMNHRBRUTPVXJKLJHPXOFBERJWAQSDIVPGMHJONHAVDHASHDXTEMRJAFVRPFYDANQFQEMCCMEOOKTJCFHLZRDZGWUNWMYINYJYSCHTFJZKSMJJBBWQEAPURYUKCVDFPIWSMMFLFELQXOGXPS");

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
    msg.setTimeStamp(0.0417775248935);
    msg.setSource(38427U);
    msg.setSourceEntity(135U);
    msg.setDestination(33229U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("GOXRIUYUDRJTHFJDDCBBYZAYNLULHJXKVVWOGCWSBNNEABOWEIQJOLXFGBEJCNZBTCXFXVCTMKBFACGAWIUHESJYRAVEJIQQVDKORPNFCJDIMSMJHBWTPUYRDGAEMZPAPEYZTW");
    msg.htime = 0.790080994858;
    msg.lat = 0.213969482885;
    msg.lon = 0.935628458058;
    const char tmp_msg_0[] = {-8, 125, -21, 119, -104, 27, -77, -20, -52, -44, 30, -121, 71, -56, 49, -21, -67, -86, -97, -37, -66, -111, -38, -126, 34, -39, -91, -45, -109, -40, -7, 36, 43, -48, 35, -73, 117, 60, 33, -39, 7, -100, -117, -23, -35, 2, -64, -113, 38, 117, -4, -92, -106, -86, 47, 0, -111, 98, -101, -47, -127, -66, -89, 50, 71, -77, 122, -21, 30, 83, -76, 65, -57, 109, 30, -4, 115, 53, -13, 126, -97, 112, -7, -25, -92, 107, 39, -112, 30, -103, 111, -19, 34, -79, 20, -19, -53, -116, -82, 33, -7, -108, 73, -38, 33, 69, 41, -8, -52, -79, 32, 117, 48, 49, -117, -67, 58, 75, -84, -77, 69, -16};
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
    msg.setTimeStamp(0.204902415175);
    msg.setSource(38869U);
    msg.setSourceEntity(66U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(107U);
    msg.origin.assign("OVNXAILRITJWQDEOIMMYKTMXZBTKVZDZJXEMJWKJZKILKPRPSOUADCDVVRHPRGTVQHQOUIQGYXUFTNDXDIOWOAGSFQLPTGCBZFCFYTJSLBKZMCEJXHBSXVTNSILCSSRVHUEERKVNLHPQPAYLIFB");
    msg.htime = 0.564909097746;
    msg.lat = 0.810720330213;
    msg.lon = 0.507468153935;
    const char tmp_msg_0[] = {-109, -97, -83, 9, -113, 35, -19, -106, -7, -20, 101, 64, 23, 101, -57, -36, -55, 96, 80, -54, -51, 7, -4, 119, -109, -24, -94, -44, -113, 40, 38, 30, 99, 8, 48, -123, 43, 101, 72, -58, -75, 78, -72, 85, 70, -27, 102, 83, -48, 57, -87, -105, -57, -9, -102, 109, 31, 100, 92, -70, -112, -119, 61, -75, 14, -18, -13, 17, -118, 10, 66, -9, 47, -62, -36, 119, 62, -18, 99, -107, -21, 58, 19, -127, -98, -86, -104, -77, 50, 65, -71, 56, -80, -16, -94, -27, -122, -31, 124, -62, 70, 1, -113, -44, -27, -119, -27, 99, 68, 26, 20, 60, -70, -27, 86, -49, 124, -15, 18, 33, -82, 71, 81, 117, -84, 63, -121, 15, -121, 79, 57, 18, -14, -106, -25, 17, -59, 44, 69, 107, -12, -84, 77, 73, 37, 61, -121, 74, -23, 6, -91, 1, -64, 100, 20, -94, -97, -121, 58, 44, -122, -70, 39, -21, 74, -1, -74, -110, 121, 96, 46, 43, 78, 97, -48, 64, 59, -58, -124, 1, 113, -34, -105, -108, -86, -75};
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
    msg.setTimeStamp(0.586580873163);
    msg.setSource(34953U);
    msg.setSourceEntity(241U);
    msg.setDestination(13030U);
    msg.setDestinationEntity(109U);
    msg.origin.assign("QIYULSUFWNZSBIFADBGAVXAZKZWVDDRRPLFXAGSKUVNJVMPTYNFNTQTRXKIBEGGIVRONZHAZVESEHQYQMWNMQHLJWWHCUDMCRJUDRLQCKYOSIHWJTPYLCLGTYBGFJACOGOSOBYPIZBSFIELCENVOCUWEFJKBILXMUXEXWCODNSGCQFAMVMOKMZAYHSRBXIVPJPJXDRSEMEUATLXHMPZTDKPBKUNRQFOZKPYOQGFTUNBHHAZHDQXJTJV");
    msg.htime = 0.119264250047;
    msg.lat = 0.437811427718;
    msg.lon = 0.380638422001;
    const char tmp_msg_0[] = {-94, -11, 6, -82, 86, -4, -44, -5, -76, -106, 80, -92, -61, -43, 8, -46, -107, -112, 77, -106, 73, -29, 17, -21, 123, 13, -27, -4, -97, -106, 23, -47, 69, 10, 112, 22, -78, -72, 60, -109, 105, 67, -67, -14, 101, 110, 89, 69, 27, 18, 71, -4, -32, -101, -102, -46, 85, -82, 16, 47, -90, -3, 119, -121, -84, 25, -31, 66, 126, 113, -77, -16, 85, -74, -18, 108, 101, -4, 101, 92, -37, -80, 8, -23, 92, 49, 22, -85, -90, 7, -116, -79, 88, -33, 41, -96, -70, -86, 71, 69, -63, 41, 123, 67, -63, 49, 12, -79, 106, -20, -128, -101, 18, 91, -19, -109, -49, -46, -92, -15, 68, 35, 48, 83, 38, 64, -99, 114, 87, -2, -84, 73, -124, 123, 92, 97, 113, 104, -7, 108, -24, -2, -105, 121, -94, 56, -91, -81, -73, 95, 81, -105, -105, -67, 3, 123, 78, 46, 45, -44, 97, 7, -63, 119, -102};
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
    msg.setTimeStamp(0.895281996134);
    msg.setSource(34798U);
    msg.setSourceEntity(208U);
    msg.setDestination(39023U);
    msg.setDestinationEntity(88U);
    msg.req_id = 27112U;
    msg.ttl = 51152U;
    msg.destination.assign("JUPXYBZDCVFGFBMEFPAPXAQATQDCJCKKYEPQFMGALOVVFHPUMPSJZBEUXORTOYAECIGVBSLGMMRJXBDLTUWSUNNMZZGSNFRGJIYDITUBIPUKKOSKLWMZPAJOFTCRQOOQNXZTELIZJKUUONKWMEEBBWNPYGGKJIAWSFEHGDVSLVWWODAYNHEDKWHNTFBLBLNWIAMRVFVTWIQXXKHHHDS");
    const char tmp_msg_0[] = {15, -62, -80, -76, 32, 69, 2, -57, -42, -58, 72, 71, 38, 6, -83, -77, -63, 20, 69, -111, 69, 77, 38, 101, -65, -76, -73, 117, -81, -51, -47, 69, 27, -109, 93, -64, -116, 14, 85, 6, 27, -96, 112, 105, -34, 59, -114, 10, -3, 62, -72, 71, 2, 38, -59, 103, 118, 119, 18, -9, -20, 71, 83, -73, -125, 11, -77, 103, 12, 78, -83, -79, -127, 66, -49, -8, -26, -39, -43, 125, 29, 68, -53, -92, -91, 64, -16, 19, -120, -79, 105, -17, -73, 35, 47, 61, 112, -15, -120, -91, 25, -102, -1, -62, -43, -114, -117, -2, 42, -5, -11, -11, 113, 52, -124, 46, 12, -119, 81, -67, -78, -68, -27, -7, 29, 95, -109, 125, -89, 6, 14, -71, -40, 86, -94, -16, 117, -56, -80, 90, -117, -23, 122, -44, -18, 0, -99, -63, -17, -62, 123, -37, 118, -39, 62, 94, 15, -18, 105, -105, -51, 8, 125, 119, 62, 66, -21, 95, -58, 41, -16, -121, 46, 98, -112, -80, -28, -99, 83, 43, -86, -30, -13, 6, -54, -124, 114, 6};
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
    msg.setTimeStamp(0.17870396478);
    msg.setSource(43221U);
    msg.setSourceEntity(180U);
    msg.setDestination(28374U);
    msg.setDestinationEntity(121U);
    msg.req_id = 43292U;
    msg.ttl = 32310U;
    msg.destination.assign("PANVRUXEVXUKBYZVCQLNAMQJSUMVRLPTDHWW");
    const char tmp_msg_0[] = {126, 49, 25, -17, -85, 101, -14, 74, 86, -123, -123, -11, 28, 77, -81, 19, 51, 4, -9, -85, -60, 20, 113, 21, -86, -65, -85, 35, 119, 105, 39, 71, 28, -80, -124, 126, 71, -84, 57, -5, 87, -112, -118, 90, 45, 90, 82, -73, 14, 71, -4, 125, -84, 7, -123, 19, -120, -61, 30, -5, 3, -36, -67, 52, 123, -9, -29, 55, 70, 110, 32, -41, -118, 54, 29, -77, -12};
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
    msg.setTimeStamp(0.741963632926);
    msg.setSource(22435U);
    msg.setSourceEntity(173U);
    msg.setDestination(5117U);
    msg.setDestinationEntity(90U);
    msg.req_id = 25344U;
    msg.ttl = 58999U;
    msg.destination.assign("TKDTWHTXGEVOESYMLAICZGAOOPCCWBTURUAMGQIQJWCLIONAYGVSLYMRTNTQZJTKHYWQLXGYCCODNFODSBRUNVRVXEMYWLVDIFTEIXWAEJKOBJHEPLJGPILNZQMHMSZHQVUDKRSMNSKJXFOJQBUAJFFZIJCBANNZAHRQLBEDITUPUNUUKDWMIEHTGFVVXCOZRXKYGHWVBSSBFEF");
    const char tmp_msg_0[] = {0, -86, -95, 31, -31, -83, -40, -85, -82, -109, -19, -127, -35, -109, -15, 32, -110, -42, 110, -20, -44, -128, 40, -105, -24, -20, -12, 123, 52, 3, -87, 26, 26, -120, -113, -105, 21, 79, 122, 64, -104, -51, 121, 104, 120, 92, 51, -69, 49, -9, -127, -64, 83, 59, -18, -83, 58, -32, -87, 57, -113, -89, 25, -71, -62, 9, -43};
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
    msg.setTimeStamp(0.179715034015);
    msg.setSource(8607U);
    msg.setSourceEntity(16U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(99U);
    msg.req_id = 13639U;
    msg.status = 28U;
    msg.text.assign("EZAJKQXGHLIKQZEEVFENRWCIZRECVBBYMPTCORJTYJCRYWVUGLKWAWAMNXVNTBTGLFNASORKAOEXLFCRCCDDDIDFLJLYRCGNOYDMBPPZUBUIISSDGJKVDSWJUJRZTNBMGBDTSPOITQAVUILKWMOFXGNDXQEFQXHDOTRHXYGPILBPMTXSOVHWFUPZLRFAU");

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
    msg.setTimeStamp(0.238434020539);
    msg.setSource(23377U);
    msg.setSourceEntity(193U);
    msg.setDestination(41417U);
    msg.setDestinationEntity(62U);
    msg.req_id = 43984U;
    msg.status = 109U;
    msg.text.assign("LNXPESIAQENOLDCLBVUHYODARWTCSMKIJCGKCYUCXDHMHEPYDRRVEPDSZHNJENSNPHRLMWKAVYMKJHHDDXMBKQRTLRPQQLIOYLJBSTIJCTBZKWUJGASXOGYKJOAOJFXNGZBSCCOFVLIDPBEWFQIZMXNVZEYYAWXLUQKAFWKUITMGDBVRGFVTXNPMYZUGASPZFTQGYBORTTEXIWPKOOGVJITWCRUQRSEZUNVZUBWPAMHNGUFVQAFHCXSZHLQD");

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
    msg.setTimeStamp(0.636022929142);
    msg.setSource(62467U);
    msg.setSourceEntity(177U);
    msg.setDestination(5448U);
    msg.setDestinationEntity(229U);
    msg.req_id = 65277U;
    msg.status = 132U;
    msg.text.assign("FJFYQZVCKXXUNWSVEAZIWRBREICDVHNSIBTOMEQKFRLOOGAZMWHGFNLQKMSTAUACADVMFYWHLGHBGTCAMNBYLQEYMMIWUUSYAGNPJTIPGVKOEXZPGDLRKTUNVWINLMTELRUBPYDJXTDOZDIRFVPLDVBUJBAZVHCCGQCHCSCWJJJVXYYTHWDNZXLPZQGRJR");

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
    msg.setTimeStamp(0.464787240262);
    msg.setSource(42627U);
    msg.setSourceEntity(246U);
    msg.setDestination(44631U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("ODEMPGOUHXLZKNAJVNLESJTIJEQNYKBBOJAMOKFTDFVCFKRWHGCFZKCHPQREBMHWCOLJYIWBPWNNMPRYCPMNOGJUWLETXOWESSYSGXROPQLFPTXSYIGVBNQVFYWDQRQVLUBMRUOYLXVZHEMQATNHYXZFROHMTDGWCCEEKZZDKZSAAQWXSSAXQVBITNDUGGHIDJHPLFFFTGUNIJSBEDDRRGS");
    msg.links = 819140939U;

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
    msg.setTimeStamp(0.508286004511);
    msg.setSource(59366U);
    msg.setSourceEntity(83U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("BLMNTNZEFGUKQNDYJSXSYEPAOXJXOWXMWDDBCCCZNISGYBSYCKWAQBNOMHSLXGOVPIWJRGTAISDKNNPDMOPBULZNTBJACXUPDZYLQAERLERHELWNCDHDUIAVVOWRUGYMQRTTMLOVZOJHQPYVVO");
    msg.links = 327420030U;

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
    msg.setTimeStamp(0.858104584923);
    msg.setSource(27712U);
    msg.setSourceEntity(142U);
    msg.setDestination(43440U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("MTWNHLBHADWRHAHOORKAUKZWUHJMOARCEQMQPPZWTFEUIGIVTDCEDPKTEVYXEGUPOGVBPBBZJAGDMZHXBMNUOWKTXZCRAXQKPRDODFNLGBNTXATIVSYFIJHJMCSLMSWBIXCXAUOZVRPCRPMGLIYUFOSJEVALNVPUVPXFXQW");
    msg.links = 672938180U;

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
    msg.setTimeStamp(0.0836829440225);
    msg.setSource(25432U);
    msg.setSourceEntity(144U);
    msg.setDestination(38069U);
    msg.setDestinationEntity(183U);
    msg.groupname.assign("ZVSDZQXFHLEOGJSYTUJSKSDMGCVHOYDKRFTPFTGPDKOUUSENKYRBZTGLHHNYQFTEOW");
    msg.action = 140U;
    msg.grouplist.assign("ITQQFLGHAGPBAHRPXMAXSGEGWPALMRJVAXWZCJTQZMYTSETLIMISLDDHUXVXOFFFDJOWSVAYVRTBELSQDNNIDZJEJJRPRUTHLGNHKSEAMRSUZGQHJKNLOUVPCFUNVAZDZCOEZRWNHOSFKQCZPOUKOTYIUIJHTYNECGIAPZWGYKNIEVUEBDBXYTIBRUWDXWQKWCNVCPKGWQJFRHKXLBXLJAMSGYEQXCOYCBVBUFQSTHYOPK");

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
    msg.setTimeStamp(0.998663071789);
    msg.setSource(25290U);
    msg.setSourceEntity(67U);
    msg.setDestination(31477U);
    msg.setDestinationEntity(190U);
    msg.groupname.assign("UXJCXNHCEFGGUDQICUQLPVZROA");
    msg.action = 109U;
    msg.grouplist.assign("RJZERNSYXUPIZKNKOUQAFBNCIMRRTTYKESUIKFYZGVADSFRVMKJTGUGKXQJDDLZTZJGQQIIQMOFMCGWXZQEWNVAPYO");

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
    msg.setTimeStamp(0.660829018685);
    msg.setSource(36437U);
    msg.setSourceEntity(201U);
    msg.setDestination(65427U);
    msg.setDestinationEntity(224U);
    msg.groupname.assign("ZVQFVJFKMRNBGZXS");
    msg.action = 166U;
    msg.grouplist.assign("DRRJKHLMYYGWJOUCASDYSGRYCGUXUTN");

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
    msg.setTimeStamp(0.274684974851);
    msg.setSource(41292U);
    msg.setSourceEntity(78U);
    msg.setDestination(49055U);
    msg.setDestinationEntity(188U);
    msg.value = 0.665841992361;
    msg.sys_src = 22317U;

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
    msg.setTimeStamp(0.080833682184);
    msg.setSource(54168U);
    msg.setSourceEntity(188U);
    msg.setDestination(20351U);
    msg.setDestinationEntity(31U);
    msg.value = 0.333299130449;
    msg.sys_src = 42393U;

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
    msg.setTimeStamp(0.253724153373);
    msg.setSource(6191U);
    msg.setSourceEntity(21U);
    msg.setDestination(4371U);
    msg.setDestinationEntity(193U);
    msg.value = 0.750771329207;
    msg.sys_src = 47101U;

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
    msg.setTimeStamp(0.0570487760155);
    msg.setSource(19021U);
    msg.setSourceEntity(140U);
    msg.setDestination(45082U);
    msg.setDestinationEntity(170U);
    msg.value = 0.271647852976;
    msg.units = 2U;

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
    msg.setTimeStamp(0.296119163422);
    msg.setSource(38244U);
    msg.setSourceEntity(190U);
    msg.setDestination(6518U);
    msg.setDestinationEntity(240U);
    msg.value = 0.0797345352791;
    msg.units = 221U;

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
    msg.setTimeStamp(0.98982289205);
    msg.setSource(28083U);
    msg.setSourceEntity(20U);
    msg.setDestination(61497U);
    msg.setDestinationEntity(239U);
    msg.value = 0.664749919798;
    msg.units = 172U;

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
    msg.setTimeStamp(0.183577556385);
    msg.setSource(30262U);
    msg.setSourceEntity(82U);
    msg.setDestination(61355U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.308027631746;
    msg.base_lon = 0.285937894733;
    msg.base_time = 0.58255502774;

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
    msg.setTimeStamp(0.644403714652);
    msg.setSource(29969U);
    msg.setSourceEntity(247U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(226U);
    msg.base_lat = 0.27757543823;
    msg.base_lon = 0.598353978373;
    msg.base_time = 0.990202917456;

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
    msg.setTimeStamp(0.901777982907);
    msg.setSource(33385U);
    msg.setSourceEntity(65U);
    msg.setDestination(49279U);
    msg.setDestinationEntity(15U);
    msg.base_lat = 0.480533658048;
    msg.base_lon = 0.874274879494;
    msg.base_time = 0.756738079494;

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
    msg.setTimeStamp(0.72304510348);
    msg.setSource(60493U);
    msg.setSourceEntity(46U);
    msg.setDestination(52321U);
    msg.setDestinationEntity(126U);
    msg.base_lat = 0.548257118095;
    msg.base_lon = 0.956998331892;
    msg.base_time = 0.588428088256;
    const char tmp_msg_0[] = {-83, 113, -103, 115, 123, -122, 1, -69, -19, 33, -7, 21, 8, -97, 34, -69, 79, 24, -11, 114, -111, 122, 69, -66, 105, 13, 74, -41, -109, 126, 59, -9, -102, 24, -68, -85, 78, 126, 99, -94, 74, -98, 57, 12, -66, 122, -40, -81, -31, 51, -77, 64, -87, 83, 57, -34, -111, 14, -3, 61, 48, -55};
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
    msg.setTimeStamp(0.42857297536);
    msg.setSource(16441U);
    msg.setSourceEntity(235U);
    msg.setDestination(20924U);
    msg.setDestinationEntity(166U);
    msg.base_lat = 0.53889722767;
    msg.base_lon = 0.333226489637;
    msg.base_time = 0.0152697943375;
    const char tmp_msg_0[] = {-13, -91, -26, 15, 70, -58, -20, -61, -120, 46, 104, 81, 79, 81, -68, 73, -22, 23, 45, 41, 112, 87, -90, 86, 17, 90, 87, -106, -63, 46, -112, -73, -119, 39, -54, -66, -16, 86, -81, -44, -42, 63, -18, -4, -56, -8, -119, -107, 101, 89, -114, 35, 83, -66, 55, 33, 86, -94, 93, -117, 55, -115, -105, -75, -118, 31, -100, -43, 22, -70, 36, 53, 0, 56, -14, 59, -56, 111, 123, 34, 58, -62, 21, -101, -68, -33, -26, 116, -60, 109, -90, -69, 103, -101, 36, -119, 61, -95, 84, -86, 51, 64, 124, -76, -125, 33, -99, -54, 122, -14, 25, -50, -107, -22, 78, 105, 80, -22, 55, 97, -118, -127, -5, -44, 34, -50, -119, 23, -72, -97, 51, 34, -21, 71, -95, -71, 0, 117, 60, 68, -126, -17, -106, -82, 52, -3, -28, -114, -111, -116, -57, 57, -75, 101, 97, 48, 32, -18};
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
    msg.setTimeStamp(0.596037856414);
    msg.setSource(27612U);
    msg.setSourceEntity(198U);
    msg.setDestination(34869U);
    msg.setDestinationEntity(97U);
    msg.base_lat = 0.0685217214486;
    msg.base_lon = 0.261447156106;
    msg.base_time = 0.293577696378;
    const char tmp_msg_0[] = {49, 62, 112, -48, 50, -45, 96, 97, -116, 51, -34, -10, -24, -61, -17, 121, -40, 8, 3, 55, -56, -57, 119, -51, 108, -62, 65, 46, -29, -56, 115, -12, -5, 45, 29, 14, -93, 9, -98, 118, -91, -74, 48, -55, 32, 73, 119, 103, 26, 104, -1, 111, -16, -81, -103, -40, 48, -22, 29, 122, 61, -74, 73, 35, 120, 87, -122, 41, 79, -79, 115, 38, 83, 62, -94, 68, -110, -52, 48, -2, 23, 67, 105, 65, 23, -123, -75, -110, -102, 43, -76, 17, 117, 4, 53, 124, 88, -81, -57, -105, -20, -34, 49, 21, 4, -79, -93, -79, 26, -16, -13, 95, -6, -30, -25, 80, -1, 13, -13, 103, 63, 10, 97, -128, 35, -28, -118, -23, -101, -62, -24, 88, -98, 89, 10, 12, -27, 89, -99, -59, 77, 63, -11, -11, 53, -46, -22, 106, 38, -41, -97, -50, -22, 103, 38, 6, -27, -95, 27, -68, 69, 39, -121, 70, -23, -7, 5};
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
    msg.setTimeStamp(0.587527437413);
    msg.setSource(41886U);
    msg.setSourceEntity(81U);
    msg.setDestination(38746U);
    msg.setDestinationEntity(170U);
    msg.sys_id = 27889U;
    msg.priority = 8;
    msg.x = -23872;
    msg.y = -26082;
    msg.z = -24936;
    msg.t = 11443;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.0154152238941;
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
    msg.setTimeStamp(0.448227624697);
    msg.setSource(20548U);
    msg.setSourceEntity(250U);
    msg.setDestination(40036U);
    msg.setDestinationEntity(177U);
    msg.sys_id = 22111U;
    msg.priority = 62;
    msg.x = -15030;
    msg.y = -23036;
    msg.z = 1682;
    msg.t = 29628;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.768988179195;
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
    msg.setTimeStamp(0.0799847052176);
    msg.setSource(48442U);
    msg.setSourceEntity(188U);
    msg.setDestination(20132U);
    msg.setDestinationEntity(33U);
    msg.sys_id = 4125U;
    msg.priority = 74;
    msg.x = 9971;
    msg.y = 20241;
    msg.z = -11534;
    msg.t = -24940;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.811575490221;
    tmp_msg_0.y = 0.151151105262;
    tmp_msg_0.z = 0.234785397923;
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
    msg.setTimeStamp(0.498564582547);
    msg.setSource(50522U);
    msg.setSourceEntity(164U);
    msg.setDestination(19557U);
    msg.setDestinationEntity(237U);
    msg.req_id = 35376U;
    msg.type = 111U;
    msg.max_size = 11248U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.733779086946;
    tmp_msg_0.base_lon = 0.137284614691;
    tmp_msg_0.base_time = 0.305524160806;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 23193U;
    tmp_tmp_msg_0_0.destination = 52224U;
    tmp_tmp_msg_0_0.timeout = 0.361863326678;
    IMC::SessionStatus tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 1765586957U;
    tmp_tmp_tmp_msg_0_0_0.status = 86U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.923303772862);
    msg.setSource(14089U);
    msg.setSourceEntity(241U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(14U);
    msg.req_id = 47141U;
    msg.type = 243U;
    msg.max_size = 14857U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.346835645705;
    tmp_msg_0.base_lon = 0.091843845556;
    tmp_msg_0.base_time = 0.0330505683169;
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
    msg.setTimeStamp(0.734747836008);
    msg.setSource(26232U);
    msg.setSourceEntity(160U);
    msg.setDestination(13921U);
    msg.setDestinationEntity(155U);
    msg.req_id = 28378U;
    msg.type = 243U;
    msg.max_size = 63318U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0048486966527;
    tmp_msg_0.base_lon = 0.365542673512;
    tmp_msg_0.base_time = 0.653845145538;
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
    msg.setTimeStamp(0.66751244863);
    msg.setSource(23557U);
    msg.setSourceEntity(9U);
    msg.setDestination(50035U);
    msg.setDestinationEntity(62U);
    msg.original_source = 48866U;
    msg.destination = 19232U;
    msg.timeout = 0.611172815541;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("RXVEYULGARRPBRUSQZRAVXMIEYZSILSFSOBFOVZDPTHGXCMFQDBKHAISTGGRMJWPSYQJDCJYIVPHFGEOJMQVPOLPKUDEBTHTPYSBCUGTLLCXIHRGBDEEEPPLADOFMCRWFJVTPYGTYIOAQBXFHYOVDWQSVVKBRDXQKAILZUWONBMDNJCYXKUBMCAGKGFAZNOXTZWSTJFACIKZKXCMKEJEXHZHJUIWRWMUHNFNWALLNZTSWNVIDMQON");
    tmp_msg_0.data.assign("LINZMTHKFASUGCLSICXFDIPPBZWUFMYQPNVEIABOTVIEQVLPJKKGTFHRGAGZHEAJQZWUFOKGACBAGWHSYYEYJKBCCPMXKJMSTYJOIMQPLCXYOFGRWOTBGUVQDLZVODAIEDFTIDLVWAUWHNONRZJFZXNWUTFMEXLZEHUQRHSXWWBPCXRRRLPMJCHXUWESIDXLRRVNZJAIMUPFPRYQKBQNLDSDOVVDCNOQUNTYXBYHOGDMBJZKGNKQJTTBMV");
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
    msg.setTimeStamp(0.791012823657);
    msg.setSource(32853U);
    msg.setSourceEntity(199U);
    msg.setDestination(45859U);
    msg.setDestinationEntity(170U);
    msg.original_source = 28724U;
    msg.destination = 57328U;
    msg.timeout = 0.517638219851;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 46U;
    tmp_msg_0.goal_id.assign("YWDMUCUOWSFUSXALYYGHPGBDDDLYTSWPCHHTUJIXKEEDMSPHJPOPRGGVJMEYQWWLCGPREWHAHGIBRBIOLKGVYNVBKSGDZMRPHBQQUXZIYXOFUJHXYKNXRNBEZEKMOOFTMXCNKDJVQLTHBVUTACQZSUSJBKLWOFNPZWJADTFMZIAZEQJHBPVAFTQIDQYEVTRCTCQIRDSCFLLFRESNUBNUJKXNSAINLWRNJTEYIMMVGOOVAFKPCKCVA");
    tmp_msg_0.goal_xml.assign("AKYZIJHCNTDIIWNWWDBUPHFYFSLFZNHNBSATUQSYWNCKCPSOR");
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
    msg.setTimeStamp(0.506146409479);
    msg.setSource(36561U);
    msg.setSourceEntity(14U);
    msg.setDestination(40046U);
    msg.setDestinationEntity(179U);
    msg.original_source = 2490U;
    msg.destination = 4927U;
    msg.timeout = 0.910771504427;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 747U;
    tmp_msg_0.custom.assign("KIXNHHWNFEEPXLGJOJRMSUEBGROOQQDYCREGXYRNYPMQTBCSCZYXJCQLYMMBRQFDFABSMFFDJOBQRUJBOHZAFDGTGBVIEOLNIUYMVBSGEPWPZKHTKXAFOVSBNKUFLAOIVLKNINMTPPNRMWFYEWYWLHJGQTGCTNHIVBAWZHHUZSDIXVHAVEOJAZLDAOKCFSHVKSECUREITJTXMGRTDPLCYKVIWZMPZDZVAZ");
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
    msg.setTimeStamp(0.19715137441);
    msg.setSource(33431U);
    msg.setSourceEntity(131U);
    msg.setDestination(45852U);
    msg.setDestinationEntity(202U);
    msg.type = 239U;
    msg.comm_interface = 36144U;
    msg.model = 43796U;
    msg.list.assign("WTUDRWJKGTJMZWPOQOJXGMJOIEVCLTTDYQRHTDNSKFABINZOFKMYZKBFBXSVBRQMXEBUXVDPILWMXYBQNCLVILMGFCPFYNZSYISUFHUOGPLHQOTAWSRFGKOPJXKXWNZPSEISGMQ");

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
    msg.setTimeStamp(0.359238005717);
    msg.setSource(19416U);
    msg.setSourceEntity(186U);
    msg.setDestination(63101U);
    msg.setDestinationEntity(64U);
    msg.type = 61U;
    msg.comm_interface = 13793U;
    msg.model = 38087U;
    msg.list.assign("GKCLYUBPUBVGGUZWMRYDOMCINVFNXEKEJQGOJPUYSURGZCBZVAJSUGEFRIOYPVWTQJWFVAPYZAPDECKYHSPWNXTUSWQOMWFJNTRTIWADCBNZMCEWHRHIYRROTJJYQAFHASDXUTUKGYBABMGRHMKJZMSNXCHPEOXTLJSQMFAOONKKLUIVGHIJAZRQLXMKVDYONFIWQDSCND");

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
    msg.setTimeStamp(0.757221590189);
    msg.setSource(49435U);
    msg.setSourceEntity(30U);
    msg.setDestination(14473U);
    msg.setDestinationEntity(31U);
    msg.type = 96U;
    msg.comm_interface = 21012U;
    msg.model = 65170U;
    msg.list.assign("SYLKENQJYELGXPBZGNNNAZIGZHNSLRPZFVHPZDMBXRIAJJTQKKTSORTVPZMHQQVORHNHQQGJXWDIGULGEAEGFSFLPYVPCHAUFNYJMCXTTCGGFYZQXNSWBFTJREEOKWTSMYXUCRDMIWXOPUXKJWMSZDJLIQOBAOSXUEYGFJZBHC");

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
    msg.setTimeStamp(0.938772074352);
    msg.setSource(12575U);
    msg.setSourceEntity(221U);
    msg.setDestination(60389U);
    msg.setDestinationEntity(109U);
    msg.type = 89U;
    msg.req_id = 1375206515U;
    msg.ttl = 1391U;
    msg.code = 222U;
    msg.destination.assign("AQEJKKAAZIIJQGEQJMSTBZIUWFFKISHBWQPBMXESKBZYWKMCVPZJZUJRINPFPWCDNHLDNRCGBYPEBCAMTGYYDHDKHVXORXJCSEDSRAPUTVBMSJFLUWXKUXAOESLJXVYUVUCLCJFDFOTGCHUYOKATGZPRTRYMWZLIQCVRYZLRUDTKBDWHALCFVIKETGENQNS");
    msg.source.assign("FTXKEFFRTGIWB");
    msg.acknowledge = 253U;
    msg.status = 123U;
    const char tmp_msg_0[] = {-91, 47, 76, 108, -66, 44, -61, 62, 20, 95, -93, -84, -125, 25, -84, 72, 41, 87, -16, -114, -81, -104, 35, -6, -30, -102, 39, 73, -20, 116, -88, 35, -20, -68, -12, 48, 99, -6, 74, 62, -113, 2, 97, 78, 92, 46, 57, 40, 3, 66, -21, 67, 81, 3, -120, -52, 66, 33, 117, -17, -82, -116, 91, 11, -3, 49, 30, -43, -94, -45, -73, -54, -26, -111, 69, 97, 14, 9, -108, -120, -113, -83, -91, 9, 118, -63, 51, 72, -58, -102, -53, 117, 20, 89, -39, -121, 23, 74, -92, -108, 38, 105, 5, -32, -128, -71, 104, 32, 66, 88, 54, 111, -14, -32, 34, 61, 36, 58, -90, -74, 85, -56, 33, 53, 40, 3, 98, -88, 11, -127, -26, 39, -106, 24, -22, -5, -1, -12, -49, -103, -78, 61, -126, -84, -43, 80, 107, 44, -123, 124, -57, 46, 48, -85, 107, 26, 33, 43, 56, 20};
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
    msg.setTimeStamp(0.642160399347);
    msg.setSource(61768U);
    msg.setSourceEntity(139U);
    msg.setDestination(44095U);
    msg.setDestinationEntity(62U);
    msg.type = 157U;
    msg.req_id = 1418717883U;
    msg.ttl = 21178U;
    msg.code = 123U;
    msg.destination.assign("HRJSOFVTRWLCKCJQTDMVSYENLQGEJKOBFEDBQUIMUKCKTMMWAOWNOIAJPLJVNIBRDIYPAAUCSLBZXWRSNPZAGPCZMKMYDIOPVKPFMYHRUHHNYEFXKAXBGYZYQIVEHHODXOXUKDSDLFIJRFMHKXWHCOUBWHSAUYTCTLXNWOKGNNGXLVSQEEQTFVGDZJTDWLEDPMJ");
    msg.source.assign("XVZSAVCFQYTWSHEAYUWZIKJGRPPJCODUGMR");
    msg.acknowledge = 109U;
    msg.status = 62U;
    const char tmp_msg_0[] = {16, -6, 116, 98, -116, -71, -27, 6, 37, 53, 15, 119, -85, -115, -44, 21, -43, 50, 95, -41, 123, -51, 62, 8, -101, 18, 98, 51, 29, -39, 102, -64, -77, 6, 123, -17, -58, -39, -54, 3, -89, -52, -5, 114, -48, 21, -81, 111, 4, 98, 101, -118, -70, 72, 26, -45, 19, 98, -12, 31, 42, -9, -76, 94, 111, 17, -52, -85, 108, 56, -1, 97, 77, 79, 91, -112, -84, -5, 52, 110, -5, 85, -108, 12, 33, -4, 100, 78, -48, -105, -36, -70, -3, -122, 8, -72, 4, -9, -42, 7, 90, 85, -26, -95, -26, 15, -54, -127, -128, 94, 7, 123, 61, 29, 23, 16, 3, -111, -109, -10, 79, 24, 87, 69, -50, -36, -76, 97, -70, 38, -75, -70, -45, -122, 76, 109, -103, 73, 84, 30, 99, 3, -49, 50, -100, -52, 14, 0, -57, 125, 79, -95, -43, -76, 102, -55, -91, 39, 115, -12, 46, -91, -90, 9, 103, 67, 79, -100, 20, -128, -12, -80, 104, -126, 18, 81, -32, -85, 1, 95, 125, 103, -126, 109, -95, -10, 87, 30, -123, 9, 118, -43, 70, -37, -30, -28, -64, -119, 45, -125, -28, 25, -85, 22, -68, -36, -45, -44, -63, 124, -90, -24, -49, 87, -1, 99, -110, -112, -73, 9, -97, -105, 81, 67, -44, -124, -95, -128, -55, -104, 63, -2, 53, 27, 108, -50, -3, -124, 106, 85, 25};
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
    msg.setTimeStamp(0.121975333315);
    msg.setSource(23658U);
    msg.setSourceEntity(253U);
    msg.setDestination(37313U);
    msg.setDestinationEntity(48U);
    msg.type = 179U;
    msg.req_id = 2330829809U;
    msg.ttl = 52318U;
    msg.code = 55U;
    msg.destination.assign("RNFXMSKHYYZSHBTPXBAQPGPXYSRJHNQEGQEBGPUJSLKSWZHJZRSMWIMSMN");
    msg.source.assign("GYNMFHFVRLEESIUOFUVIAYIYAPEXOJREB");
    msg.acknowledge = 164U;
    msg.status = 149U;
    const char tmp_msg_0[] = {120, -96, -106, -46, 86, 25, 53, 20, -122, 13, -14, -83, 8, -95, -73, 60, -44, -77, 126, 109, -51, -87, -82, -62, -7, 108, 65, -30, 35, -120, 30, 96, -76, 72, 100, 9, -110, -21, 57, -8, -59, 31, -5, -49, 42, 60, -47, 89, 106, -125, 82, 70};
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
    msg.setTimeStamp(0.644644066895);
    msg.setSource(1609U);
    msg.setSourceEntity(249U);
    msg.setDestination(41911U);
    msg.setDestinationEntity(66U);
    msg.id = 94U;
    msg.range = 0.295443564056;

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
    msg.setTimeStamp(0.598078543141);
    msg.setSource(35021U);
    msg.setSourceEntity(156U);
    msg.setDestination(46024U);
    msg.setDestinationEntity(146U);
    msg.id = 81U;
    msg.range = 0.43679380904;

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
    msg.setTimeStamp(0.0612808663533);
    msg.setSource(7062U);
    msg.setSourceEntity(231U);
    msg.setDestination(972U);
    msg.setDestinationEntity(220U);
    msg.id = 32U;
    msg.range = 0.158908704657;

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
    msg.setTimeStamp(0.702771864945);
    msg.setSource(36380U);
    msg.setSourceEntity(143U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(144U);
    msg.beacon.assign("QKAWIEJXRVQCOGSNESCKEBPNOGJKRZG");
    msg.lat = 0.403129077824;
    msg.lon = 0.864006438637;
    msg.depth = 0.143122005195;
    msg.query_channel = 102U;
    msg.reply_channel = 141U;
    msg.transponder_delay = 168U;

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
    msg.setTimeStamp(0.716621320447);
    msg.setSource(34368U);
    msg.setSourceEntity(239U);
    msg.setDestination(49222U);
    msg.setDestinationEntity(106U);
    msg.beacon.assign("ZNNAUJMMATPHLTOEDHSJOQGLPCEWGSIZYNNCPKQMGBFUILAUWQXNMZBNSFJJLEELSCCKBVSPLKXFXUSRYPVZEJYRFCBYQJLPKUWMZBUCQIMKIHTRPWRYVQXXDCSQMYOXQANVYZNMEIKTVWAZWJJRYGRTKVAVRZGHOYBDHALVYCTXNDFBKUGTKSIOIOGXBEDD");
    msg.lat = 0.851036342674;
    msg.lon = 0.685507272387;
    msg.depth = 0.376481400542;
    msg.query_channel = 179U;
    msg.reply_channel = 58U;
    msg.transponder_delay = 106U;

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
    msg.setTimeStamp(0.362602905751);
    msg.setSource(39121U);
    msg.setSourceEntity(251U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(86U);
    msg.beacon.assign("NZCHCGMSFXEXTTVUOYYESSAFORKCBQAITQPBNYJDQRAMNGXXIARVCRKWCBDBCUCWNKPBLZYLZKGVZGJLTFKXDMTDGPGRALZDYGUMBUHOEJQTWOFEBUFEQDZIKIHIEVPDBGIWEHXPXUTQAZOCSAWOFALUTRWFDDFJVEAMQFVGXLRIMNJYQBYVMOISHMOKJHEBYCULX");
    msg.lat = 0.700124537697;
    msg.lon = 0.963349477125;
    msg.depth = 0.572664470515;
    msg.query_channel = 245U;
    msg.reply_channel = 199U;
    msg.transponder_delay = 79U;

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
    msg.setTimeStamp(0.976122458359);
    msg.setSource(52304U);
    msg.setSourceEntity(95U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(131U);
    msg.op = 72U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EEPUNFGHDLHHBWXBJGERTXSFGZTANLIFUDARYBOTKSTCXQSNCYRQCZQTGEWCTXWCUQBHNLTJLYWDGFVLUWPCEASHUTHDZRKDBRPIWMIGPSIFBSUOPEKZRZROXLKCPYANEJZYZMVV");
    tmp_msg_0.lat = 0.265027477875;
    tmp_msg_0.lon = 0.107373657006;
    tmp_msg_0.depth = 0.176968077374;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 246U;
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
    msg.setTimeStamp(0.363968436935);
    msg.setSource(60468U);
    msg.setSourceEntity(182U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(155U);
    msg.op = 91U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XTIWPCTRCVDZOMULBVEEABVBEFIZYMZLLNFNGITHISNPJOMAKEGCAGEJJTOCXGGINGYLIKNLVOQCYCBMJVZHFSUATDEOMQKSSMANSFYUIKXYSLUBWDWDHBLVSMTLXEKLQQSYZDVEQNNIS");
    tmp_msg_0.lat = 0.972093051911;
    tmp_msg_0.lon = 0.750245351213;
    tmp_msg_0.depth = 0.542996056957;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 16U;
    tmp_msg_0.transponder_delay = 101U;
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
    msg.setTimeStamp(0.843468103865);
    msg.setSource(4805U);
    msg.setSourceEntity(87U);
    msg.setDestination(31355U);
    msg.setDestinationEntity(232U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.180018176891);
    msg.setSource(58007U);
    msg.setSourceEntity(53U);
    msg.setDestination(24946U);
    msg.setDestinationEntity(232U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.376541240224;
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
    msg.setTimeStamp(0.144265663294);
    msg.setSource(29758U);
    msg.setSourceEntity(107U);
    msg.setDestination(5437U);
    msg.setDestinationEntity(193U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.742173407531;
    tmp_msg_0.z_units = 197U;
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
    msg.setTimeStamp(0.501513352233);
    msg.setSource(21551U);
    msg.setSourceEntity(251U);
    msg.setDestination(19626U);
    msg.setDestinationEntity(191U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0808076674668;
    tmp_msg_0.lon = 0.356744736258;
    tmp_msg_0.height = 0.607962037789;
    tmp_msg_0.x = 0.0510980111125;
    tmp_msg_0.y = 0.213076282877;
    tmp_msg_0.z = 0.482856332209;
    tmp_msg_0.phi = 0.678677580166;
    tmp_msg_0.theta = 0.690171864638;
    tmp_msg_0.psi = 0.896816964934;
    tmp_msg_0.u = 0.95995507645;
    tmp_msg_0.v = 0.993910160539;
    tmp_msg_0.w = 0.0676357408931;
    tmp_msg_0.vx = 0.82551129146;
    tmp_msg_0.vy = 0.707022622573;
    tmp_msg_0.vz = 0.66434640531;
    tmp_msg_0.p = 0.516609963199;
    tmp_msg_0.q = 0.824167008973;
    tmp_msg_0.r = 0.628967470489;
    tmp_msg_0.depth = 0.735539038514;
    tmp_msg_0.alt = 0.555781448081;
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
    msg.setTimeStamp(0.0306935678516);
    msg.setSource(19727U);
    msg.setSourceEntity(70U);
    msg.setDestination(20365U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.10120871786;
    msg.lon = 0.14601548797;
    msg.depth = 0.477846782666;
    msg.sentence.assign("FURDBIIBAFLOBNQTTXJCTYQZNVNSSHXLFSMPRHUSYYOCVUZDLGDJAIPKNKZRBFYRMJRNURLNMWAMEKVUOPMQXQOEIFJRFPAWGDZBGWAGDLEMXVGPKVVVAQECJHGUUWJWQURKBAMXHXWBPXILYMXAJIOKC");
    msg.txtime = 0.747817945968;
    msg.modem_type.assign("XFYRXPBBWHNSVIUTLQQVRAADMAEICDXDEHYPCYBTIJUDCCEWYHVQVZJZLVMZTWMKKRBFBKINSLQQEGOBGJOPIGOEJE");
    msg.sys_src.assign("ADILSVHHNLPBEXNIZHJRQEUTHKCCCPYWOIRMSGCQFHTAZQNCPPEBULAHIFUWDZMCFSKOJERWPWALWAWUOHTDUUMJYXZYVRBUHRBYNQEIXDKHOYDQNMGVQBUAGJJIJSMXXDDGLZQBEVTPPQYKESXKMFWGSRKBGXCBAZZJVLNYAKKTFIVDSCNLGJELXMMPRVFOITYCVGVUZBQISTEXZVWMJCTLFOFGHSMAJFYPNSOR");
    msg.seq = 24560U;
    msg.sys_dst.assign("QFSQHZNAGTFOBIXERDL");
    msg.flags = 120U;
    const char tmp_msg_0[] = {42, 101, -51, -12, 110, -37, -9, -96, 87, 107, 29, -8, -32, -117, -86, -121, -73, 84, 122, -65, -26, -96, -12, -125, -111, 68, 87, -76, -30, 125, -118, -37, -58, -59, -1, 96, 53, -113, 84, -48, 16, 68, -117, 41, -50, 13, 114, 72, -48, 48, -105, -106, -127, -99, -89, 3, 2, 52, 77, 40, 64, -92, -79, -105, 89, 12, -92, -19, 21, 87, -14, 71, -29, -47, 31, -123, 123, 75, 126, -1, 76, 112, -125, 7, 85, -15, 117, -87, 113, 63, 116, -128, 23, -124, 51, -124, 35, -123, -91, 16, 12, 75, -44, 76, 88, -73, 7, -111, 80, 49, 109, -2, -36, 64, -5, 11, -106, 54, -68, 72, -8, -15, 6, -111, -65, 39, -72, 98, -14, -104, 18, -84, 118, 44, -84, -113, 37, -6, -109, 94, 90, -92, 108, -60, 107, -77, -23, -37, -70, -127, 94, 61, 45, 68, 3, 41, -20, -65, -79, 86, -108, -123, -12, 14, -35, 38, 13, 97, -98, 90, 30, 9, -82, -123, -21, 120, -48, -65, -28, 80, 124, 123, 72, -83, -12, 110, 75, 78, 73, 27, -122, -7, 93, -64, 43, 47, -61};
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
    msg.setTimeStamp(0.927923159989);
    msg.setSource(43993U);
    msg.setSourceEntity(109U);
    msg.setDestination(57816U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.827157337019;
    msg.lon = 0.816299686518;
    msg.depth = 0.593290615562;
    msg.sentence.assign("VOILNTIVRKNEICJHRMJKYELNNHGIRKMZBTCAGZTDGQMRVPWGOJYOLQHETOCCJSYMHEZIKBNZEVVOAOARWLFKBPESZQPCKQDQDUAZHNKRNWQCVUCHXDSSXBVDYKJUXUHYLEGWZDZUOSYMXUZCVUXFLARRPABVXWSLDTWNGDZIHISAAXVSAEUGPQMEBOJPUBH");
    msg.txtime = 0.424654902187;
    msg.modem_type.assign("CJGJFQIFHRVQKRAAVDZZMEEPPLUGIEHPMKMMDWRWPFMBHAIBXDRZQEY");
    msg.sys_src.assign("AMTRNKVHJWLBCKZWOVHMEWWCEHQZOTSZORGFXFFRIGHISLOFUTMAQBWKPRZXLDSTIYYEPUUFWCVTKEULFRDZHNUGZXWJJBOGDBLWBFDYCPMJYSICHAPZALPTENGANMCOKXTAESSRMPPMFXEFBRVQIVVFGXOEVCAJBTAQNPOUYIXAAWZNZJDKDR");
    msg.seq = 55776U;
    msg.sys_dst.assign("WAJLKCMHMFBGEWYQFHFEEOTKJSTTONIQLAERQGVDVAMZJCIRZYZRGCMIDBAPGBGOHJDLKTSAPIA");
    msg.flags = 58U;
    const char tmp_msg_0[] = {-119, -25, 1, 61, 93, -20, 8, 126, -112, -112, -23, 52, 90, 12, -75, -3, 47, 64, 10, -38, -116, -50, -71, -126, -104, -16, -100, -47, 9, -126, -95, 9, 68, 84, -66, 12, -106, 36, 90, -23, 32, -35, -6, -41, -90, 122, 82, 75, 21, 99, 9, -47, -55, -4, 116, -57, 66, -122, -39, 56, -95, 72, 8, 71, -110, 125, 36, -47, 67, -117, 24, -43, -14, -67, 1, 33, -4, -82, 98, -26, 89, -25, 37, 57, -108, 109, 124, -1, -101, 97, -11, -124, -2, -27, -16, -98, -28, 27, -77, 2, -59, -50, -127, 97, 55, 4, 115, 32, 21, 95, -40, -77, 91, -71, 10, 104, 88, 3, -90, -111, 29, 17, 29, 126, -104, -49, 109, 91, 42, 66, -36, -45, -70, 49, -47, 7, -78, 110, 40, -81, 107, -124, -36, -76, 25, -91, -55, -86, 104, -65, -6, 100, -107, 95, 46, -72, 84, 100, 36, 56, 86, 60, -26, 108, 104, 42, 26, 63, -5, 28, 44, -18, -49, 57, -92, 48, 97, -98, -126, 19, -16, 3, 94, -80, -60, -122, -20, -108, -20, 20, 40, -90, 69, -48, -23, -68, -9, 27, 88, 43, 113, -48, -56, -91, -65, -116, -69, -78, 54, -15, -33, 35, 32, 100, 117, 21, 42, 31, 106, -98, 24, -124, -14, 42, -101, 123, 37};
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
    msg.setTimeStamp(0.327556368564);
    msg.setSource(44960U);
    msg.setSourceEntity(188U);
    msg.setDestination(54003U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.603402493414;
    msg.lon = 0.743802563667;
    msg.depth = 0.879191889393;
    msg.sentence.assign("AZSULWQKYCILOMMEFFIMVOYMOHILDJYLDCMCHTMKFJDUZSPQTEVDEBDIOBQHRORHZKUBSELJFJWYSEHNUTHVOZNYANJGMPGITXYSVWEXNPOQLZVZLMPNPTRVKUXOSFNGQYIIZBGWJUPFBXKZNMVUPRWLQKJZYQOR");
    msg.txtime = 0.316667598403;
    msg.modem_type.assign("CYOPBWKTJEYJJWXVHXKNHBGRBIIHWPBKONHVZFNRQCQCNIMBVSAKXXLQLKZTMF");
    msg.sys_src.assign("WKGDYNCYVXPGPHUHYYNEVTPXNCJDMIWIVMJPTTYOLXIUMPOPGFCOETKCFCVRPDDOEIAZ");
    msg.seq = 5260U;
    msg.sys_dst.assign("PRFDVTBLZDWXDKXIZEUCHZQASHLMHJBIRMIZY");
    msg.flags = 215U;
    const char tmp_msg_0[] = {46, -119, -47, 7, -29, 43, -40, -42, 11, 51, 102, 78, 75, -24, -86, 11, 68, 110, -40, -96, -20, 46, 10, -57, 5, -80, -7, 0, 55, 105, 83, 39, 117, -5, 105, 83, -86, -83, 110, -32, 77, 21, -44, -52, 63, -103, 98, -72, -50, -50, -119, 58, 109, -57, -92, -88, -4, -21, -113, 88, -45, 126, -44, 36, 97, 70, -111, -59, -49, -94, 21, -124, 10, -45, 87, -95, -38, 10, 47, -46, -42, -62, 94, 30, 61, -5, -71, -110, 115, -50, -17, 61, 99, 97, -58, -66, 110, 3, 99, 51, -88, 97, -125, -105, -67, 111, 86, -10, 104, -53, -18, 100, 23, -74, 10, 10, -99, 36, -4, -95, -72, -6, -104, 93, 51, -50, -104, -76, 91, 12, -126, 102, -51, -56, 15};
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
    msg.setTimeStamp(0.993631336011);
    msg.setSource(40831U);
    msg.setSourceEntity(84U);
    msg.setDestination(11524U);
    msg.setDestinationEntity(156U);
    msg.op = 97U;
    msg.system.assign("NQRYJNZBEBWHJVCVPUNMXWPHOLVUTBEYIKTDLGBXBQDODDTXAIXZBGMHACUOODYRMLXVHVSWRWGETLCMOGCGGUHUPWKZMMOFNBYSCXWPSBSAZALT");
    msg.range = 0.0558474252827;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.198216829576;
    tmp_msg_0.lon = 0.0638335574354;
    tmp_msg_0.z = 0.850065550522;
    tmp_msg_0.z_units = 80U;
    tmp_msg_0.speed = 0.314772262199;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.bearing = 0.297937638458;
    tmp_msg_0.cross_angle = 0.503627773941;
    tmp_msg_0.width = 0.2283764915;
    tmp_msg_0.length = 0.188123381814;
    tmp_msg_0.coff = 161U;
    tmp_msg_0.angaperture = 0.478919033435;
    tmp_msg_0.range = 40872U;
    tmp_msg_0.overlap = 127U;
    tmp_msg_0.flags = 73U;
    tmp_msg_0.custom.assign("RXNNXDVUYXFILWVTCWVDATAWRWHDUUNILAEPQPLQTJQKOTVDNNWCDHOKLHEYQOAWDEFNZPJHZBYRXGYYPCSCCIJYMJ");
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
    msg.setTimeStamp(0.361451000567);
    msg.setSource(25409U);
    msg.setSourceEntity(24U);
    msg.setDestination(24274U);
    msg.setDestinationEntity(196U);
    msg.op = 109U;
    msg.system.assign("WNMFPVGLWYJDYCTFCDGCLBRCIXFBUHLSZJQSFMOXAPODFYZBWTCAMUNEMIYDVNHZPLTTHKOZIXOLAWVHULRAQRLKWGSWOYETENVJKSWLZICMJNBRZMXTUEJVJQTUGGDSZNOPAZBSEGEZQNXJMXQFICAKVYNIZFSDEHEUJGTHLPQHAWNHPKKIFIXGQMRJJHUROGFFCTYWBXQBAKUBAP");
    msg.range = 0.532784775782;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.693901001311;
    tmp_msg_0.x = 0.235925629269;
    tmp_msg_0.y = 0.737637406805;
    tmp_msg_0.z = 0.41692144265;
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
    msg.setTimeStamp(0.642045391357);
    msg.setSource(58841U);
    msg.setSourceEntity(234U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(77U);
    msg.op = 145U;
    msg.system.assign("DYUNAEFANVOTPDQZCJJSUDBRLPMFPSRQHJCOPWPYDGBSZMKEZUIFYEQROICVVKVUGTRURNQVXWWM");
    msg.range = 0.89029322157;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.170178396042;
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
    msg.setTimeStamp(0.132731484553);
    msg.setSource(61561U);
    msg.setSourceEntity(95U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.953371804445);
    msg.setSource(24360U);
    msg.setSourceEntity(141U);
    msg.setDestination(45393U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.929084464271);
    msg.setSource(6510U);
    msg.setSourceEntity(42U);
    msg.setDestination(12340U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.911245801476);
    msg.setSource(32744U);
    msg.setSourceEntity(177U);
    msg.setDestination(14833U);
    msg.setDestinationEntity(222U);
    msg.list.assign("OJJGJFAYFLKBKOENGSZLFRHMCXICRMWOTGITSKIIOPZBGPNZOEKZKDMWD");

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
    msg.setTimeStamp(0.0902935895316);
    msg.setSource(52890U);
    msg.setSourceEntity(20U);
    msg.setDestination(57751U);
    msg.setDestinationEntity(168U);
    msg.list.assign("MREJODFXLSLMMSOHQYBAGNNSFXUXFFMLHPKNBSWUZKODHMWYODCEQCKROZBDNINMGHENHFCTCEPZZOUAGGCXGPVXCIUOQKRBVRCFEHIQTESWKZNYDQROJSYTDVXJYRUGJRLADZQXSHAUBKIAGNIHYYBJYMRBLIPOTHAJKPQJLJMVSVBWVTUEXDKAWQLEGQWCILYEFECGPBV");

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
    msg.setTimeStamp(0.647466631773);
    msg.setSource(7441U);
    msg.setSourceEntity(77U);
    msg.setDestination(54943U);
    msg.setDestinationEntity(26U);
    msg.list.assign("GIHYFJCYKJWEEWDXSQIOBJXCTZGRSZIEDGYDVQKVDYLLPIXNWOBBAKJMMQEGLXFNETCTHALHFJVUQCRXGXOWKWDZZPCVTPVBAKBXHGMWSNPYPTYFMSLXOMKDGNSCRQGXQYLATVNZQMHFPLHFUWCIZYNXGQZYREVBNVCUUYQMCRSOPLMDDILHDQSRZFR");

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
    msg.setTimeStamp(0.965583494558);
    msg.setSource(40121U);
    msg.setSourceEntity(26U);
    msg.setDestination(55405U);
    msg.setDestinationEntity(203U);
    msg.peer.assign("MGHJFJPJYBAZXNPQHBWKOTTVVEWKRSCVDJRMZMFNIPMVESGQPAXAQCBJYBOEPFTUYOQYVHWGSILQXSDKAOVZSHRJNRFKBDCSFLKMSUBWLLAPWXTZNBZHUDCKCJANOUVYGXFUKMHJSOXCTEWLMYIYUNTUSZIACIERA");
    msg.rssi = 0.457834643366;
    msg.integrity = 63552U;

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
    msg.setTimeStamp(0.919413695743);
    msg.setSource(41631U);
    msg.setSourceEntity(27U);
    msg.setDestination(49382U);
    msg.setDestinationEntity(116U);
    msg.peer.assign("NXLHGJQLTTYQDEOITLHVHEJPJKNEZGHKTHXHMMUPPXXRYRVBFBUNTNVRSPVULCBXVCHFXALUROKYUCEJGBDPVAZYIPNFWVQXFSAWCOLZMDKZGZBKJTHMGOASIDUSXQEOIOQRLLMRREWTVTWSLFGYIDRZFMQWZPFZVBGDXLQDGBQPWNKYYZAMJVOMKUNIWAZCKHWQESNYNSWPI");
    msg.rssi = 0.27608615368;
    msg.integrity = 3370U;

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
    msg.setTimeStamp(0.423250189382);
    msg.setSource(10253U);
    msg.setSourceEntity(96U);
    msg.setDestination(4555U);
    msg.setDestinationEntity(198U);
    msg.peer.assign("CPZGKMRUIKGUBRQWEILPDJRICNEOJSSZXIBEWIWTMJWFLZHARUGIENVRDADBSKJDQZVBFTYMZCKDOZNYONSGSIAUGCGAQNTNCVMUXJUNLMKZIXFTFPFELXCUMYOOTOUHHNSMMBECGBASLTVHGPXTRIAXZPJRPAB");
    msg.rssi = 0.231697584879;
    msg.integrity = 32923U;

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
    msg.setTimeStamp(0.402878160902);
    msg.setSource(41638U);
    msg.setSourceEntity(78U);
    msg.setDestination(60621U);
    msg.setDestinationEntity(191U);
    msg.req_id = 27377U;
    msg.destination.assign("AXQMCIWBPGMBAVEKWJVDOIZCQHNWCXWGLSAUDUGBGZMQRUMYTPZKGEAHTENZOHUQKHSHNNTCSIUFSZNEZQKGZPXWOKTJMLTKAUQVVOXHHBDKVSTIXIFUTOUQAJHKCYXIODISFUARMVFZRVWBBEJKYLTQMOWUFWMMWRYMFJROJDDCAEWDAZJBP");
    msg.timeout = 0.300504176215;
    msg.range = 0.962787132564;
    msg.type = 20U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.289678860847;
    tmp_msg_0.lon = 0.963339556373;
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
    msg.setTimeStamp(0.366684622857);
    msg.setSource(26529U);
    msg.setSourceEntity(253U);
    msg.setDestination(62576U);
    msg.setDestinationEntity(223U);
    msg.req_id = 26677U;
    msg.destination.assign("SZOPFOZTJKZKGEDDAFVEUXJWVORHNHDEIVZPECFATMRDHDSHGHZWAMLSQYUIRUBBQHTDSZTJJEZTUKAHNDOLJINCTRZPLHQQTBLKFXZWYUKQGAYGTMFVNPWJCSPBAFBRSTLWYUSWXJUSBNQYXYANCWOEKOLXRMYWNUVKDHIXKVCDCSGMYNIMRGQRBCVSTEPHMQVMIMFLIQFKPPIIWPJVUGJE");
    msg.timeout = 0.536943109525;
    msg.range = 0.993156353191;
    msg.type = 145U;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 15U;
    tmp_msg_0.period = 1883376292U;
    tmp_msg_0.duty_cycle = 3582804765U;
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
    msg.setTimeStamp(0.31092807844);
    msg.setSource(19126U);
    msg.setSourceEntity(5U);
    msg.setDestination(64725U);
    msg.setDestinationEntity(47U);
    msg.req_id = 50262U;
    msg.destination.assign("GKCUSQVEMDGGWYWMAFWYKCEPURBFQJHEQIJMWUUJAVFVCNQGXOHIIMSZSQFBDKSLJGPNVTZIQJPUJODBKLLVFTPDDHIPJABKRUTSSKRZEKIEEHXHZTFKYSANMMTPOT");
    msg.timeout = 0.551794311491;
    msg.range = 0.957474062114;
    msg.type = 143U;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 3744465903U;
    tmp_msg_0.messages.assign("VCUNWYTKBOBCJQNBMTOTNCTAPMAYWPQZLJXOOBOBVVPTZHKYYISEXMJCECJBQHRWYAWYTRDFYTHRLKGASIVAHSNDIDAGEJTZDSXVGFCURSXSMAJFVPQCYOPZLXQZSZLIWWLLFIFPNEOXCIUZSWJORYPTDDKJLIKSLFWXHFDXRDIVFXCEQNLEMDRRXLKAVEGJKRUCWVWUGGUBHSNMKVIBUUOMGGNQQHIMDJMEHBTZZMEQPGBKFYUKNAHQZUO");
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
    msg.setTimeStamp(0.0658883581026);
    msg.setSource(62939U);
    msg.setSourceEntity(148U);
    msg.setDestination(29214U);
    msg.setDestinationEntity(141U);
    msg.req_id = 30372U;
    msg.type = 166U;
    msg.status = 105U;
    msg.info.assign("UGVFWPKZIVPOOZYWGIHVHJZPXGNCAEUUZLANIRGODHSSAFJCKHXAMZZCTVETVOMDQZXRZPOYGDAKVOKUYUKIBELLCLDYSPWLQCGGWUSCRPLJBDXHIBEKXLXXMRPEEKODGQRZJKHIUWYIWNFYXMJHADBBMPTQEMZOVSVQSXLXVDTNWVRJUDSUEFGNHBYWKQMRCTKFARMJFBQ");
    msg.range = 0.595665346351;

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
    msg.setTimeStamp(0.51132048085);
    msg.setSource(55604U);
    msg.setSourceEntity(201U);
    msg.setDestination(51866U);
    msg.setDestinationEntity(52U);
    msg.req_id = 571U;
    msg.type = 99U;
    msg.status = 207U;
    msg.info.assign("XATLJKBMRMIOUMJYKCCSTHWEICZTLVGSYLBOXNAUMZZFFBJDOZUSKXEYZBDODIORCAELMXCACEGKOPHPXNEAZGBFNBDVWCFJGCPKYMHBVDUXNZLSLOHKPPPROAQNRUUSQWJWDWSKL");
    msg.range = 0.753606066121;

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
    msg.setTimeStamp(0.918588130357);
    msg.setSource(21670U);
    msg.setSourceEntity(122U);
    msg.setDestination(34984U);
    msg.setDestinationEntity(194U);
    msg.req_id = 48259U;
    msg.type = 195U;
    msg.status = 88U;
    msg.info.assign("CKWRFIVOAOJRJMYERQMBQJCBIXTYEZD");
    msg.range = 0.534347240347;

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
    msg.setTimeStamp(0.912679214458);
    msg.setSource(32310U);
    msg.setSourceEntity(47U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(179U);
    msg.value = 16318;

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
    msg.setTimeStamp(0.659532013668);
    msg.setSource(13735U);
    msg.setSourceEntity(204U);
    msg.setDestination(9719U);
    msg.setDestinationEntity(253U);
    msg.value = -16548;

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
    msg.setTimeStamp(0.137185811039);
    msg.setSource(32508U);
    msg.setSourceEntity(210U);
    msg.setDestination(6508U);
    msg.setDestinationEntity(250U);
    msg.value = 11077;

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
    msg.setTimeStamp(0.703965347619);
    msg.setSource(54620U);
    msg.setSourceEntity(242U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(173U);
    msg.value = 0.76791461874;

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
    msg.setTimeStamp(0.770651945397);
    msg.setSource(39470U);
    msg.setSourceEntity(182U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(59U);
    msg.value = 0.45942940141;

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
    msg.setTimeStamp(0.188248849949);
    msg.setSource(38466U);
    msg.setSourceEntity(112U);
    msg.setDestination(37055U);
    msg.setDestinationEntity(1U);
    msg.value = 0.00499659673167;

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
    msg.setTimeStamp(0.915060090938);
    msg.setSource(55866U);
    msg.setSourceEntity(91U);
    msg.setDestination(6355U);
    msg.setDestinationEntity(97U);
    msg.value = 0.264007153253;

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
    msg.setTimeStamp(0.6533905146);
    msg.setSource(17815U);
    msg.setSourceEntity(51U);
    msg.setDestination(50572U);
    msg.setDestinationEntity(89U);
    msg.value = 0.342953004937;

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
    msg.setTimeStamp(0.251923329387);
    msg.setSource(13492U);
    msg.setSourceEntity(119U);
    msg.setDestination(58688U);
    msg.setDestinationEntity(99U);
    msg.value = 0.730557430852;

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
    msg.setTimeStamp(0.516562689489);
    msg.setSource(32571U);
    msg.setSourceEntity(48U);
    msg.setDestination(9134U);
    msg.setDestinationEntity(176U);
    msg.validity = 58279U;
    msg.type = 187U;
    msg.utc_year = 29660U;
    msg.utc_month = 59U;
    msg.utc_day = 185U;
    msg.utc_time = 0.347005765576;
    msg.lat = 0.622351922581;
    msg.lon = 0.308260617048;
    msg.height = 0.442347128044;
    msg.satellites = 192U;
    msg.cog = 0.134608571231;
    msg.sog = 0.38755740399;
    msg.hdop = 0.254926710229;
    msg.vdop = 0.535224038891;
    msg.hacc = 0.878024841618;
    msg.vacc = 0.530658900426;

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
    msg.setTimeStamp(0.821549560173);
    msg.setSource(40504U);
    msg.setSourceEntity(9U);
    msg.setDestination(8750U);
    msg.setDestinationEntity(6U);
    msg.validity = 13882U;
    msg.type = 171U;
    msg.utc_year = 51657U;
    msg.utc_month = 214U;
    msg.utc_day = 35U;
    msg.utc_time = 0.884303893991;
    msg.lat = 0.177917575112;
    msg.lon = 0.771265395637;
    msg.height = 0.0732591973518;
    msg.satellites = 95U;
    msg.cog = 0.937707617169;
    msg.sog = 0.327548028756;
    msg.hdop = 0.395955969835;
    msg.vdop = 0.329563304075;
    msg.hacc = 0.173683644428;
    msg.vacc = 0.241845424559;

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
    msg.setTimeStamp(0.763111531162);
    msg.setSource(25011U);
    msg.setSourceEntity(129U);
    msg.setDestination(25211U);
    msg.setDestinationEntity(27U);
    msg.validity = 42284U;
    msg.type = 37U;
    msg.utc_year = 50340U;
    msg.utc_month = 52U;
    msg.utc_day = 131U;
    msg.utc_time = 0.554044337495;
    msg.lat = 0.938549020823;
    msg.lon = 0.340677374796;
    msg.height = 0.74662412599;
    msg.satellites = 183U;
    msg.cog = 0.83887087939;
    msg.sog = 0.659316534219;
    msg.hdop = 0.374165079569;
    msg.vdop = 0.17923449757;
    msg.hacc = 0.181549819476;
    msg.vacc = 0.912425987836;

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
    msg.setTimeStamp(0.834089111153);
    msg.setSource(62153U);
    msg.setSourceEntity(207U);
    msg.setDestination(44745U);
    msg.setDestinationEntity(170U);
    msg.time = 0.576918157151;
    msg.phi = 0.972843156609;
    msg.theta = 0.834511072511;
    msg.psi = 0.125759989128;
    msg.psi_magnetic = 0.16330202524;

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
    msg.setTimeStamp(0.774544170223);
    msg.setSource(15115U);
    msg.setSourceEntity(33U);
    msg.setDestination(2061U);
    msg.setDestinationEntity(153U);
    msg.time = 0.8332640983;
    msg.phi = 0.306556791932;
    msg.theta = 0.40216418267;
    msg.psi = 0.863769716906;
    msg.psi_magnetic = 0.357017190482;

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
    msg.setTimeStamp(0.568547535633);
    msg.setSource(57579U);
    msg.setSourceEntity(24U);
    msg.setDestination(9546U);
    msg.setDestinationEntity(179U);
    msg.time = 0.322962325389;
    msg.phi = 0.71553475862;
    msg.theta = 0.984455261655;
    msg.psi = 0.130384710962;
    msg.psi_magnetic = 0.993841906853;

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
    msg.setTimeStamp(0.251491838687);
    msg.setSource(23314U);
    msg.setSourceEntity(115U);
    msg.setDestination(16857U);
    msg.setDestinationEntity(7U);
    msg.time = 0.240699300817;
    msg.x = 0.555757758404;
    msg.y = 0.435309147105;
    msg.z = 0.422526636514;
    msg.timestep = 0.810927747379;

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
    msg.setTimeStamp(0.314753951948);
    msg.setSource(18943U);
    msg.setSourceEntity(21U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(220U);
    msg.time = 0.647916439069;
    msg.x = 0.187745982761;
    msg.y = 0.714595773776;
    msg.z = 0.0824612154214;
    msg.timestep = 0.0311013250889;

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
    msg.setTimeStamp(0.557328993419);
    msg.setSource(46769U);
    msg.setSourceEntity(62U);
    msg.setDestination(41473U);
    msg.setDestinationEntity(132U);
    msg.time = 0.74544707069;
    msg.x = 0.706481243266;
    msg.y = 0.391728491567;
    msg.z = 0.0662591737006;
    msg.timestep = 0.567025737284;

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
    msg.setTimeStamp(0.901141304692);
    msg.setSource(44718U);
    msg.setSourceEntity(137U);
    msg.setDestination(61589U);
    msg.setDestinationEntity(172U);
    msg.time = 0.552232258167;
    msg.x = 0.781908589006;
    msg.y = 0.349755646655;
    msg.z = 0.721581189708;

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
    msg.setTimeStamp(0.869453742303);
    msg.setSource(30034U);
    msg.setSourceEntity(174U);
    msg.setDestination(9016U);
    msg.setDestinationEntity(121U);
    msg.time = 0.104544074688;
    msg.x = 0.0272636770336;
    msg.y = 0.37679526989;
    msg.z = 0.875925072599;

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
    msg.setTimeStamp(0.445402323659);
    msg.setSource(18865U);
    msg.setSourceEntity(58U);
    msg.setDestination(25039U);
    msg.setDestinationEntity(62U);
    msg.time = 0.838378442301;
    msg.x = 0.0100471243229;
    msg.y = 0.96566966188;
    msg.z = 0.808259030981;

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
    msg.setTimeStamp(0.629058810295);
    msg.setSource(15502U);
    msg.setSourceEntity(24U);
    msg.setDestination(53960U);
    msg.setDestinationEntity(64U);
    msg.time = 0.564314750357;
    msg.x = 0.787834124649;
    msg.y = 0.226195781932;
    msg.z = 0.140802609605;

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
    msg.setTimeStamp(0.655174700296);
    msg.setSource(42423U);
    msg.setSourceEntity(216U);
    msg.setDestination(9605U);
    msg.setDestinationEntity(40U);
    msg.time = 0.685749676841;
    msg.x = 0.420817345621;
    msg.y = 0.636185081227;
    msg.z = 0.51288704216;

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
    msg.setTimeStamp(0.195243957891);
    msg.setSource(44509U);
    msg.setSourceEntity(248U);
    msg.setDestination(28643U);
    msg.setDestinationEntity(51U);
    msg.time = 0.252580572602;
    msg.x = 0.637474590034;
    msg.y = 0.618183601426;
    msg.z = 0.160784886173;

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
    msg.setTimeStamp(0.934952286979);
    msg.setSource(34517U);
    msg.setSourceEntity(20U);
    msg.setDestination(15082U);
    msg.setDestinationEntity(232U);
    msg.time = 0.687735608465;
    msg.x = 0.900009974539;
    msg.y = 0.596893047928;
    msg.z = 0.703197047603;

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
    msg.setTimeStamp(0.0613478681617);
    msg.setSource(17506U);
    msg.setSourceEntity(83U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(86U);
    msg.time = 0.347485070671;
    msg.x = 0.341778901281;
    msg.y = 0.849887063739;
    msg.z = 0.751056282531;

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
    msg.setTimeStamp(0.0914530633878);
    msg.setSource(60190U);
    msg.setSourceEntity(248U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(22U);
    msg.time = 0.983239929542;
    msg.x = 0.914996598483;
    msg.y = 0.0074101574766;
    msg.z = 0.380889370664;

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
    msg.setTimeStamp(0.460605013307);
    msg.setSource(58480U);
    msg.setSourceEntity(109U);
    msg.setDestination(29863U);
    msg.setDestinationEntity(39U);
    msg.validity = 107U;
    msg.x = 0.85905995471;
    msg.y = 0.588799718685;
    msg.z = 0.764147450327;

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
    msg.setTimeStamp(0.272853524006);
    msg.setSource(57148U);
    msg.setSourceEntity(146U);
    msg.setDestination(30209U);
    msg.setDestinationEntity(10U);
    msg.validity = 154U;
    msg.x = 0.0818212135588;
    msg.y = 0.301302653606;
    msg.z = 0.293173346536;

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
    msg.setTimeStamp(0.879858483948);
    msg.setSource(43167U);
    msg.setSourceEntity(219U);
    msg.setDestination(30161U);
    msg.setDestinationEntity(50U);
    msg.validity = 192U;
    msg.x = 0.370193614067;
    msg.y = 0.413076009744;
    msg.z = 0.641145152752;

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
    msg.setTimeStamp(0.467284472837);
    msg.setSource(34821U);
    msg.setSourceEntity(161U);
    msg.setDestination(42448U);
    msg.setDestinationEntity(116U);
    msg.validity = 79U;
    msg.x = 0.137599604373;
    msg.y = 0.55573153883;
    msg.z = 0.25105954256;

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
    msg.setTimeStamp(0.766690323018);
    msg.setSource(30591U);
    msg.setSourceEntity(73U);
    msg.setDestination(3595U);
    msg.setDestinationEntity(183U);
    msg.validity = 124U;
    msg.x = 0.154099252795;
    msg.y = 0.504365943167;
    msg.z = 0.621388676602;

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
    msg.setTimeStamp(0.320098403827);
    msg.setSource(50661U);
    msg.setSourceEntity(12U);
    msg.setDestination(32509U);
    msg.setDestinationEntity(205U);
    msg.validity = 176U;
    msg.x = 0.0541170755062;
    msg.y = 0.525469559456;
    msg.z = 0.444862358025;

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
    msg.setTimeStamp(0.49317296936);
    msg.setSource(14593U);
    msg.setSourceEntity(242U);
    msg.setDestination(51741U);
    msg.setDestinationEntity(135U);
    msg.time = 0.447190186405;
    msg.x = 0.966972134839;
    msg.y = 0.157876770957;
    msg.z = 0.68412138188;

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
    msg.setTimeStamp(0.327939258179);
    msg.setSource(28964U);
    msg.setSourceEntity(239U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(109U);
    msg.time = 0.120946380935;
    msg.x = 0.219138135719;
    msg.y = 0.0654306353894;
    msg.z = 0.98512614345;

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
    msg.setTimeStamp(0.741472786918);
    msg.setSource(11301U);
    msg.setSourceEntity(13U);
    msg.setDestination(23035U);
    msg.setDestinationEntity(176U);
    msg.time = 0.719680247751;
    msg.x = 0.841405925479;
    msg.y = 0.203656402746;
    msg.z = 0.546894448262;

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
    msg.setTimeStamp(0.242253947423);
    msg.setSource(21201U);
    msg.setSourceEntity(101U);
    msg.setDestination(7973U);
    msg.setDestinationEntity(124U);
    msg.validity = 254U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0580008551213;
    tmp_msg_0.y = 0.531637862089;
    tmp_msg_0.z = 0.908666259953;
    tmp_msg_0.phi = 0.484447027392;
    tmp_msg_0.theta = 0.584784366634;
    tmp_msg_0.psi = 0.987940403051;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.885785606076;

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
    msg.setTimeStamp(0.115171028711);
    msg.setSource(21039U);
    msg.setSourceEntity(241U);
    msg.setDestination(16338U);
    msg.setDestinationEntity(23U);
    msg.validity = 239U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.874256555941;
    tmp_msg_0.beam_height = 0.203341057672;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.310696089838;

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
    msg.setTimeStamp(0.719069221725);
    msg.setSource(19032U);
    msg.setSourceEntity(44U);
    msg.setDestination(54784U);
    msg.setDestinationEntity(252U);
    msg.validity = 244U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.529074073634;
    tmp_msg_0.y = 0.206362364368;
    tmp_msg_0.z = 0.0678862374934;
    tmp_msg_0.phi = 0.0659752207725;
    tmp_msg_0.theta = 0.38961650066;
    tmp_msg_0.psi = 0.140016827795;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.13349118831;

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
    msg.setTimeStamp(0.198313120581);
    msg.setSource(15546U);
    msg.setSourceEntity(200U);
    msg.setDestination(61160U);
    msg.setDestinationEntity(116U);
    msg.value = 0.936880868766;

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
    msg.setTimeStamp(0.421943599901);
    msg.setSource(11314U);
    msg.setSourceEntity(129U);
    msg.setDestination(25186U);
    msg.setDestinationEntity(49U);
    msg.value = 0.493930569222;

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
    msg.setTimeStamp(0.656636968408);
    msg.setSource(34182U);
    msg.setSourceEntity(247U);
    msg.setDestination(1684U);
    msg.setDestinationEntity(221U);
    msg.value = 0.388645007028;

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
    msg.setTimeStamp(0.427149041017);
    msg.setSource(21416U);
    msg.setSourceEntity(179U);
    msg.setDestination(36475U);
    msg.setDestinationEntity(20U);
    msg.value = 0.478329567143;

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
    msg.setTimeStamp(0.906899160267);
    msg.setSource(21260U);
    msg.setSourceEntity(130U);
    msg.setDestination(16114U);
    msg.setDestinationEntity(94U);
    msg.value = 0.498139011649;

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
    msg.setTimeStamp(0.247398144004);
    msg.setSource(36846U);
    msg.setSourceEntity(232U);
    msg.setDestination(62005U);
    msg.setDestinationEntity(237U);
    msg.value = 0.539519547032;

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
    msg.setTimeStamp(0.553208478939);
    msg.setSource(48560U);
    msg.setSourceEntity(186U);
    msg.setDestination(63920U);
    msg.setDestinationEntity(69U);
    msg.value = 0.960978696733;

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
    msg.setTimeStamp(0.745898455406);
    msg.setSource(61120U);
    msg.setSourceEntity(78U);
    msg.setDestination(57776U);
    msg.setDestinationEntity(159U);
    msg.value = 0.689152759143;

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
    msg.setTimeStamp(0.72865088435);
    msg.setSource(10820U);
    msg.setSourceEntity(142U);
    msg.setDestination(27606U);
    msg.setDestinationEntity(227U);
    msg.value = 0.135595309431;

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
    msg.setTimeStamp(0.0712241589728);
    msg.setSource(9981U);
    msg.setSourceEntity(153U);
    msg.setDestination(29081U);
    msg.setDestinationEntity(22U);
    msg.value = 0.790484431353;

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
    msg.setTimeStamp(0.919381350044);
    msg.setSource(10279U);
    msg.setSourceEntity(141U);
    msg.setDestination(11910U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0181177018176;

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
    msg.setTimeStamp(0.730589259402);
    msg.setSource(40806U);
    msg.setSourceEntity(46U);
    msg.setDestination(33760U);
    msg.setDestinationEntity(38U);
    msg.value = 0.170235458971;

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
    msg.setTimeStamp(0.449452491892);
    msg.setSource(52820U);
    msg.setSourceEntity(0U);
    msg.setDestination(25667U);
    msg.setDestinationEntity(39U);
    msg.value = 0.474422021686;

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
    msg.setTimeStamp(0.354648508969);
    msg.setSource(63454U);
    msg.setSourceEntity(55U);
    msg.setDestination(21389U);
    msg.setDestinationEntity(135U);
    msg.value = 0.060599751294;

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
    msg.setTimeStamp(0.894037154197);
    msg.setSource(60197U);
    msg.setSourceEntity(36U);
    msg.setDestination(47606U);
    msg.setDestinationEntity(165U);
    msg.value = 0.891478984841;

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
    msg.setTimeStamp(0.70762018105);
    msg.setSource(64366U);
    msg.setSourceEntity(177U);
    msg.setDestination(14488U);
    msg.setDestinationEntity(193U);
    msg.value = 0.332213634065;

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
    msg.setTimeStamp(0.527084609394);
    msg.setSource(11851U);
    msg.setSourceEntity(136U);
    msg.setDestination(34073U);
    msg.setDestinationEntity(113U);
    msg.value = 0.309725364982;

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
    msg.setTimeStamp(0.237747046555);
    msg.setSource(52098U);
    msg.setSourceEntity(40U);
    msg.setDestination(7017U);
    msg.setDestinationEntity(93U);
    msg.value = 0.271670935325;

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
    msg.setTimeStamp(0.113416376506);
    msg.setSource(36277U);
    msg.setSourceEntity(73U);
    msg.setDestination(3017U);
    msg.setDestinationEntity(182U);
    msg.value = 0.696088748307;

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
    msg.setTimeStamp(0.253137773338);
    msg.setSource(61292U);
    msg.setSourceEntity(124U);
    msg.setDestination(42766U);
    msg.setDestinationEntity(233U);
    msg.value = 0.948473370261;

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
    msg.setTimeStamp(0.0148272088457);
    msg.setSource(6220U);
    msg.setSourceEntity(150U);
    msg.setDestination(461U);
    msg.setDestinationEntity(124U);
    msg.value = 0.348050886333;

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
    msg.setTimeStamp(0.393885383313);
    msg.setSource(54972U);
    msg.setSourceEntity(9U);
    msg.setDestination(28108U);
    msg.setDestinationEntity(217U);
    msg.value = 0.929414453658;

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
    msg.setTimeStamp(0.914179618746);
    msg.setSource(11060U);
    msg.setSourceEntity(89U);
    msg.setDestination(10505U);
    msg.setDestinationEntity(61U);
    msg.value = 0.859457923606;

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
    msg.setTimeStamp(0.195508997672);
    msg.setSource(34865U);
    msg.setSourceEntity(185U);
    msg.setDestination(48749U);
    msg.setDestinationEntity(72U);
    msg.value = 0.871290189829;

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
    msg.setTimeStamp(0.293256016306);
    msg.setSource(29423U);
    msg.setSourceEntity(144U);
    msg.setDestination(20935U);
    msg.setDestinationEntity(202U);
    msg.direction = 0.203532262873;
    msg.speed = 0.694227902129;
    msg.turbulence = 0.110344418949;

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
    msg.setTimeStamp(0.66120166389);
    msg.setSource(34190U);
    msg.setSourceEntity(140U);
    msg.setDestination(14837U);
    msg.setDestinationEntity(75U);
    msg.direction = 0.661293577484;
    msg.speed = 0.556234923638;
    msg.turbulence = 0.941982142642;

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
    msg.setTimeStamp(0.578257240594);
    msg.setSource(12094U);
    msg.setSourceEntity(229U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(84U);
    msg.direction = 0.841804221702;
    msg.speed = 0.96026240394;
    msg.turbulence = 0.343165794735;

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
    msg.setTimeStamp(0.711856808842);
    msg.setSource(35009U);
    msg.setSourceEntity(7U);
    msg.setDestination(52030U);
    msg.setDestinationEntity(63U);
    msg.value = 0.777981126669;

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
    msg.setTimeStamp(0.289971651963);
    msg.setSource(10154U);
    msg.setSourceEntity(232U);
    msg.setDestination(54671U);
    msg.setDestinationEntity(128U);
    msg.value = 0.792440238738;

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
    msg.setTimeStamp(0.6741240265);
    msg.setSource(10451U);
    msg.setSourceEntity(207U);
    msg.setDestination(16724U);
    msg.setDestinationEntity(218U);
    msg.value = 0.785414992312;

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
    msg.setTimeStamp(0.778021918771);
    msg.setSource(12881U);
    msg.setSourceEntity(22U);
    msg.setDestination(11460U);
    msg.setDestinationEntity(40U);
    msg.value.assign("VOFCWOURBXGSQAFJSUOMBSYAILPHBZJKWKYWCYFHJANDKKTQPVSUEBKTWSEIZOIXZCUAKHAGKLGUNTWJKGDRXTXTZAHAOSPMBWLAMWNCZFI");

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
    msg.setTimeStamp(0.755257373456);
    msg.setSource(24451U);
    msg.setSourceEntity(85U);
    msg.setDestination(53272U);
    msg.setDestinationEntity(174U);
    msg.value.assign("ZQWJNFCMJWAPGGHUQEXQRDVXCGNZYJLVMLGFCYJPNBGFNXOVGDILLUTZELAIBPSTISNMEKTDUTHFUWSEOHKVSWTUEBPMSWODSOCHKBHXZJDSEIOVGKUTVAFFBOXXLFYIQCGYTBEXZAXOKPUPWASXJMRYQRIMBJPHCVFOAPBNYAGONUXVUMELVBWFQPR");

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
    msg.setTimeStamp(0.0881614267979);
    msg.setSource(37040U);
    msg.setSourceEntity(194U);
    msg.setDestination(19798U);
    msg.setDestinationEntity(75U);
    msg.value.assign("SJBIDLHLWPPNCBCXHFWDRSZEJXDOMSRVIHFWZQTPOZSOXUNERCNHHNXOGJELVBTOAGCUQKJJQECDYFVQWWYMLCZFEEIDAARLDQBGPOTNXUPASMLMYSVWBIJWIELDYKITSEFUVKMXEKUNXAZMALMVJKTDXRBHGJKBFANAKWOJUPNIUYOKUCLCONQGAQQMQZFDFNTXYYPJGPTRKYUBTGIPXWCRWTVLHBHHVUVGGRMRHOAREZ");

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
    msg.setTimeStamp(0.224142564819);
    msg.setSource(42374U);
    msg.setSourceEntity(141U);
    msg.setDestination(22454U);
    msg.setDestinationEntity(236U);
    const char tmp_msg_0[] = {62, -96, -20, -59, -22, -47, 45, -123, -91, 57, 120, 60, -66, 28, 60, 71, 87, 2, -122, -9, 98, -118, 120, 23, -81, -76, -54, -71, -120, 23, -97, -74, -128, 104, 74, 35, 43, -125, -11, -124, 63, -108, 16, -86, 28, -69, -4, -72, -96, 16, 3, -113, 16, 97, 10, -11, -40, 75, -41, 65, -31, -81, -114, -33, -3, -20};
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
    msg.setTimeStamp(0.760531175379);
    msg.setSource(54901U);
    msg.setSourceEntity(137U);
    msg.setDestination(37520U);
    msg.setDestinationEntity(224U);
    const char tmp_msg_0[] = {47, 34, 107, 69, -56, -1, 81, -55, 35, 101, 35, 124, 105, 39, 105, 107, -40, 117, -99, 71, -79, -74, -109, 68, 74, 29, 111, 81, -49, 83, 73, -53, -83, 72, -34, 45, -45, -32, 101, -116, -106, -81, -81, -128, 43, 43, -98, -61, 2, 34, -27, -114, 2, 116, 14, -62};
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
    msg.setTimeStamp(0.842597013361);
    msg.setSource(42777U);
    msg.setSourceEntity(35U);
    msg.setDestination(35837U);
    msg.setDestinationEntity(176U);
    const char tmp_msg_0[] = {109, 38, 42, -13, -41, -37, -12, 111, -53, 53, 56, -29, 116, -38, 14, -50, -74, 19, -45, -4, -64, 27, 53, -52, 2, -97, 98, 24, -74, -50, 9, 10, -22, 21, -87, -50, -49, -49, 30, -80, -53, 58, 97, -58, -82, -32, 14, 76, 91, -59, -51, 1, -45, -66, 91, -1, 31, -101, 44, -25, -72, -106, 13, 119, -52, 123, 67, -19, -23, -120, -31, -17, -117, 42, 62, -76, -16, -42, -103, -45, -114, -60, -78, 109, -86, 74, -78, 112, 97, 16, 88, 53, 5, -52, 35, 10, 46, -59, -30, 52, 75, 53, -28, -29, -128, -35, 44, -90, 104, -5, -121, -101, -39, -73, 116, 32, 103, 70, 82, -3, 105, 14, 64, -38, -63, 32, 83, -74, -105, 100, -105, -56, -116, -45, -92, 51, 3, 19, 44, 93, 18, -79, -7, -103, -60, -10, -3, -120, -92, -118, 20, 107, 121, -31, 3, -69, 36, 123, -7, 72, 65, 122, -34, 122, 58, 102, -44, -110, -115, -57, 113, -120, -62, 126, 117, -8, -41, -28, 107, 124, 27, 89, 105, -49, 80, 35, 50, 46, -8, -83, 48, -58, -124, -96, 36, -19, 61, 43, -98, 81, -119, -39, -32, 125, -83, 92, 22, 33, 70, -109};
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
    msg.setTimeStamp(0.491843414892);
    msg.setSource(3059U);
    msg.setSourceEntity(10U);
    msg.setDestination(50400U);
    msg.setDestinationEntity(121U);
    msg.value = 0.467871912154;

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
    msg.setTimeStamp(0.996026990528);
    msg.setSource(49135U);
    msg.setSourceEntity(6U);
    msg.setDestination(60452U);
    msg.setDestinationEntity(212U);
    msg.value = 0.910777341516;

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
    msg.setTimeStamp(0.444639093334);
    msg.setSource(19715U);
    msg.setSourceEntity(109U);
    msg.setDestination(55179U);
    msg.setDestinationEntity(212U);
    msg.value = 0.37178210258;

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
    msg.setTimeStamp(0.664876756658);
    msg.setSource(23834U);
    msg.setSourceEntity(191U);
    msg.setDestination(60935U);
    msg.setDestinationEntity(142U);
    msg.type = 102U;
    msg.frequency = 2448460165U;
    msg.min_range = 44045U;
    msg.max_range = 20133U;
    msg.bits_per_point = 28U;
    msg.scale_factor = 0.68976671308;
    const char tmp_msg_0[] = {33, 34, 106, -88, 23, 105, -39, 100, 115, -34, 42, -112, 25, 103, -34, 24, -80, -11, 6, -65, 65, 93, -47, -116, -8, -103, -85, -118, -47, -83, 48, -113, 90, 122, 60, -100, 52, -35, -60, -5, -60, 39, -6, 13, 16, -95, -54, -106, 42, -38, -48, 86, -27, -33, -57, 55, 7, 108, -32, 49, -80, -110, -42, -21, -79, 40, -24, -18, 78, 41, -97, 112, 98, -100, 50, 0, -63, 20, 2, -116, 91, -45, 46, -2, 99, 7, -99, -116, -118, -69, 78, 5, 69};
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
    msg.setTimeStamp(0.794847547822);
    msg.setSource(51177U);
    msg.setSourceEntity(155U);
    msg.setDestination(36661U);
    msg.setDestinationEntity(89U);
    msg.type = 98U;
    msg.frequency = 1059690429U;
    msg.min_range = 16928U;
    msg.max_range = 62105U;
    msg.bits_per_point = 201U;
    msg.scale_factor = 0.954465253489;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.214721010564;
    tmp_msg_0.beam_height = 0.548311124513;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-110, -84, 79, 24, -31, -39, 60, -10, 60, -66, 5, -125, -38, 122, -30, -4, 57, -28, -17, -49, -52, 8, 117, 93, 5, 42, 78, 113, -4, 122, 94, 87, 100, 88, 65, 55, 8, -64, -79, 30, -68, 55, -39, 49, -113, 104, 112, 55, -23, -113, -24, -30, 16, 83, -122, 92, 88, 44, -83, -71, 17, -57, 22, 5, 35, 44, -43, -34, -59, -19, 24, 31, 75, -103, -115, -115, -45, 113, 89, 91, 16, -21, -89, -81, 35, -113, 58, -16, -91, -74, -63, -12, -103, 124, -84, -33, 88, -108, -42, -65, -127, 69, -122, 38, 39, 34, 28, 38, 93, 107, -13, -91, -71, -30, -57, 77, -85, 36, 111, 44, -36, -96, -75, -97, 48, 7, 68, 15, 116, 33, 65, 31, 107, -6, -53, -44, -82, -66, 14, -71, -44, -88, -83, 116, 34, -23, 0, 123, 28, -72, 107, 91, -83};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.494785979717);
    msg.setSource(40840U);
    msg.setSourceEntity(214U);
    msg.setDestination(37525U);
    msg.setDestinationEntity(97U);
    msg.type = 60U;
    msg.frequency = 3834659771U;
    msg.min_range = 61479U;
    msg.max_range = 22237U;
    msg.bits_per_point = 118U;
    msg.scale_factor = 0.00352391868531;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.539560194723;
    tmp_msg_0.beam_height = 0.742035710494;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {100, 64, -9, -28, -76, 20, 46, 43, -97, 15, 2, 74, -106, -46, 106, -66, 76, 72, -16, 17, -62, -84, -3, 50, -64, 99, -70, -99, 54, -7, 109, 21, 79, -58, 100, -96, -32, 19, 123, -105, -79, 107, 59, -73, -53, 53, -78, -80, -21, 107, 8, -75, -61, -22, -17, -103, 42, -68, 107, -60, -84, 105, -72, -107, -120, -92, 80, -45, -43, 71, 97, -48, -81, 42, 55, 58, -75};
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
    msg.setTimeStamp(0.125698636051);
    msg.setSource(26064U);
    msg.setSourceEntity(88U);
    msg.setDestination(41267U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.354356491882);
    msg.setSource(57008U);
    msg.setSourceEntity(128U);
    msg.setDestination(23075U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.674846255527);
    msg.setSource(9543U);
    msg.setSourceEntity(221U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.507648444214);
    msg.setSource(56754U);
    msg.setSourceEntity(232U);
    msg.setDestination(606U);
    msg.setDestinationEntity(107U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.261983361993);
    msg.setSource(14819U);
    msg.setSourceEntity(223U);
    msg.setDestination(62134U);
    msg.setDestinationEntity(198U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.757875090437);
    msg.setSource(5670U);
    msg.setSourceEntity(207U);
    msg.setDestination(41761U);
    msg.setDestinationEntity(89U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.985541819531);
    msg.setSource(43793U);
    msg.setSourceEntity(204U);
    msg.setDestination(62662U);
    msg.setDestinationEntity(9U);
    msg.value = 0.167832417206;
    msg.confidence = 0.37433101904;
    msg.opmodes.assign("PMECLCFJWXKXWBMHIFEXNMUJTQBAFVLTTCLHJYSDPOWPGLROEOKHZVDGRRILDOJQVMIWOEPMSAZFBZFLCEYZOKLUUYOPKTYLSWGQEKHZKFTIBTXMUCOQBZC");

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
    msg.setTimeStamp(0.482291899791);
    msg.setSource(46730U);
    msg.setSourceEntity(72U);
    msg.setDestination(37402U);
    msg.setDestinationEntity(213U);
    msg.value = 0.432646064627;
    msg.confidence = 0.36388944407;
    msg.opmodes.assign("WJSNVIDTNAIQOHAMMPFEEBMCKBODXWETDKKCFIXSOQMRESUWDXDOILPTPFKVYHVMZBVPZKBYPJNQGTHNLTUIJAEZSLWHFVXGZXSKZIUNUFXJJQAZTKGCHHSKDCQCYAWPJWUGY");

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
    msg.setTimeStamp(0.0304703692313);
    msg.setSource(22071U);
    msg.setSourceEntity(148U);
    msg.setDestination(24251U);
    msg.setDestinationEntity(68U);
    msg.value = 0.86312217098;
    msg.confidence = 0.602078751695;
    msg.opmodes.assign("VKLFXTVYRDHPOLXALTDYBHVHFFQEYUEJIXGYISWNJDBKAYVYMZWRDZSNZIWCOWUKHPKURVKNOVSUJHJGUPBBOGFFZDMBKKQVUIZM");

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
    msg.setTimeStamp(0.451207854192);
    msg.setSource(64355U);
    msg.setSourceEntity(19U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(250U);
    msg.itow = 3946788660U;
    msg.lat = 0.00160185022014;
    msg.lon = 0.229795642868;
    msg.height_ell = 0.428950457509;
    msg.height_sea = 0.350247922175;
    msg.hacc = 0.140305346838;
    msg.vacc = 0.377589227021;
    msg.vel_n = 0.356117140302;
    msg.vel_e = 0.0706926314064;
    msg.vel_d = 0.718579500241;
    msg.speed = 0.943435309615;
    msg.gspeed = 0.0792982747256;
    msg.heading = 0.250534766711;
    msg.sacc = 0.435838866626;
    msg.cacc = 0.513205839382;

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
    msg.setTimeStamp(0.0692922218196);
    msg.setSource(41426U);
    msg.setSourceEntity(120U);
    msg.setDestination(20201U);
    msg.setDestinationEntity(248U);
    msg.itow = 2198766674U;
    msg.lat = 0.705612201018;
    msg.lon = 0.805694680136;
    msg.height_ell = 0.734957499945;
    msg.height_sea = 0.763949593193;
    msg.hacc = 0.86365104885;
    msg.vacc = 0.631459753422;
    msg.vel_n = 0.110835980646;
    msg.vel_e = 0.773544122364;
    msg.vel_d = 0.712144572033;
    msg.speed = 0.305242837496;
    msg.gspeed = 0.420490951996;
    msg.heading = 0.181417052926;
    msg.sacc = 0.706447816061;
    msg.cacc = 0.668461109027;

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
    msg.setTimeStamp(0.933456632697);
    msg.setSource(49295U);
    msg.setSourceEntity(31U);
    msg.setDestination(30927U);
    msg.setDestinationEntity(113U);
    msg.itow = 4134898635U;
    msg.lat = 0.973801643829;
    msg.lon = 0.571469768219;
    msg.height_ell = 0.232679328989;
    msg.height_sea = 0.392157629134;
    msg.hacc = 0.960898533031;
    msg.vacc = 0.107480278568;
    msg.vel_n = 0.792222915722;
    msg.vel_e = 0.864935618672;
    msg.vel_d = 0.542874547506;
    msg.speed = 0.734891177071;
    msg.gspeed = 0.543179863021;
    msg.heading = 0.415499384336;
    msg.sacc = 0.95353524432;
    msg.cacc = 0.805010417975;

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
    msg.setTimeStamp(0.0786898540946);
    msg.setSource(44090U);
    msg.setSourceEntity(225U);
    msg.setDestination(61146U);
    msg.setDestinationEntity(158U);
    msg.id = 204U;
    msg.value = 0.802191148983;

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
    msg.setTimeStamp(0.529621154629);
    msg.setSource(34623U);
    msg.setSourceEntity(147U);
    msg.setDestination(13725U);
    msg.setDestinationEntity(90U);
    msg.id = 128U;
    msg.value = 0.637712505618;

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
    msg.setTimeStamp(0.306633546264);
    msg.setSource(59519U);
    msg.setSourceEntity(237U);
    msg.setDestination(52636U);
    msg.setDestinationEntity(30U);
    msg.id = 77U;
    msg.value = 0.192677975652;

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
    msg.setTimeStamp(0.156303411487);
    msg.setSource(24994U);
    msg.setSourceEntity(105U);
    msg.setDestination(44570U);
    msg.setDestinationEntity(238U);
    msg.x = 0.394170705556;
    msg.y = 0.270203989441;
    msg.z = 0.242688728124;
    msg.phi = 0.877623550841;
    msg.theta = 0.255676897136;
    msg.psi = 0.468934739563;

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
    msg.setTimeStamp(0.938370035407);
    msg.setSource(61361U);
    msg.setSourceEntity(138U);
    msg.setDestination(33925U);
    msg.setDestinationEntity(155U);
    msg.x = 0.712279511418;
    msg.y = 0.695337624744;
    msg.z = 0.35683822938;
    msg.phi = 0.617614552918;
    msg.theta = 0.328093705696;
    msg.psi = 0.845606758155;

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
    msg.setTimeStamp(0.397770127401);
    msg.setSource(2773U);
    msg.setSourceEntity(45U);
    msg.setDestination(46100U);
    msg.setDestinationEntity(51U);
    msg.x = 0.29509822998;
    msg.y = 0.00708418422632;
    msg.z = 0.781707616653;
    msg.phi = 0.508196314637;
    msg.theta = 0.139380854918;
    msg.psi = 0.526580248198;

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
    msg.setTimeStamp(0.591927842736);
    msg.setSource(8364U);
    msg.setSourceEntity(184U);
    msg.setDestination(55873U);
    msg.setDestinationEntity(143U);
    msg.beam_width = 0.767777210584;
    msg.beam_height = 0.342025713154;

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
    msg.setTimeStamp(0.299305445667);
    msg.setSource(62496U);
    msg.setSourceEntity(85U);
    msg.setDestination(32499U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.334902348423;
    msg.beam_height = 0.966875486271;

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
    msg.setTimeStamp(0.0967596401879);
    msg.setSource(41534U);
    msg.setSourceEntity(103U);
    msg.setDestination(19274U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.552290823021;
    msg.beam_height = 0.625945501926;

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
    msg.setTimeStamp(0.541076478118);
    msg.setSource(2034U);
    msg.setSourceEntity(76U);
    msg.setDestination(2702U);
    msg.setDestinationEntity(99U);
    msg.sane = 213U;

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
    msg.setTimeStamp(0.830153220281);
    msg.setSource(43392U);
    msg.setSourceEntity(140U);
    msg.setDestination(12514U);
    msg.setDestinationEntity(16U);
    msg.sane = 35U;

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
    msg.setTimeStamp(0.823177545134);
    msg.setSource(42055U);
    msg.setSourceEntity(129U);
    msg.setDestination(32286U);
    msg.setDestinationEntity(46U);
    msg.sane = 169U;

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
    msg.setTimeStamp(0.579357719396);
    msg.setSource(39339U);
    msg.setSourceEntity(248U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(136U);
    msg.value = 0.550915772405;

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
    msg.setTimeStamp(0.895047510922);
    msg.setSource(2497U);
    msg.setSourceEntity(71U);
    msg.setDestination(30641U);
    msg.setDestinationEntity(168U);
    msg.value = 0.297713145455;

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
    msg.setTimeStamp(0.97297208702);
    msg.setSource(45932U);
    msg.setSourceEntity(221U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(46U);
    msg.value = 0.476329632797;

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
    msg.setTimeStamp(0.498158236294);
    msg.setSource(40686U);
    msg.setSourceEntity(209U);
    msg.setDestination(62947U);
    msg.setDestinationEntity(246U);
    msg.value = 0.522268799175;

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
    msg.setTimeStamp(0.225493362174);
    msg.setSource(18018U);
    msg.setSourceEntity(185U);
    msg.setDestination(21745U);
    msg.setDestinationEntity(176U);
    msg.value = 0.19309517335;

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
    msg.setTimeStamp(0.615532090266);
    msg.setSource(4602U);
    msg.setSourceEntity(131U);
    msg.setDestination(11189U);
    msg.setDestinationEntity(58U);
    msg.value = 0.216417918289;

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
    msg.setTimeStamp(0.161854864497);
    msg.setSource(50704U);
    msg.setSourceEntity(196U);
    msg.setDestination(8107U);
    msg.setDestinationEntity(13U);
    msg.value = 0.105099219927;

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
    msg.setTimeStamp(0.284299277247);
    msg.setSource(9942U);
    msg.setSourceEntity(229U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(43U);
    msg.value = 0.344877625324;

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
    msg.setTimeStamp(0.227813241594);
    msg.setSource(40733U);
    msg.setSourceEntity(104U);
    msg.setDestination(50194U);
    msg.setDestinationEntity(232U);
    msg.value = 0.164459980248;

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
    msg.setTimeStamp(0.839849427994);
    msg.setSource(16678U);
    msg.setSourceEntity(133U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(21U);
    msg.value = 0.247804829851;

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
    msg.setTimeStamp(0.402767161703);
    msg.setSource(8627U);
    msg.setSourceEntity(16U);
    msg.setDestination(15135U);
    msg.setDestinationEntity(184U);
    msg.value = 0.983670888964;

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
    msg.setTimeStamp(0.198090983362);
    msg.setSource(38946U);
    msg.setSourceEntity(35U);
    msg.setDestination(51341U);
    msg.setDestinationEntity(126U);
    msg.value = 0.168206278286;

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
    msg.setTimeStamp(0.515407522367);
    msg.setSource(22395U);
    msg.setSourceEntity(0U);
    msg.setDestination(48392U);
    msg.setDestinationEntity(75U);
    msg.value = 0.788976298228;

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
    msg.setTimeStamp(0.360395786274);
    msg.setSource(42189U);
    msg.setSourceEntity(143U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(70U);
    msg.value = 0.177018057133;

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
    msg.setTimeStamp(0.0819621227866);
    msg.setSource(32099U);
    msg.setSourceEntity(165U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(207U);
    msg.value = 0.126964431957;

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
    msg.setTimeStamp(0.227798156111);
    msg.setSource(47502U);
    msg.setSourceEntity(86U);
    msg.setDestination(13400U);
    msg.setDestinationEntity(176U);
    msg.value = 0.667239464197;

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
    msg.setTimeStamp(0.302577264426);
    msg.setSource(44410U);
    msg.setSourceEntity(199U);
    msg.setDestination(27648U);
    msg.setDestinationEntity(69U);
    msg.value = 0.134854348731;

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
    msg.setTimeStamp(0.225612519975);
    msg.setSource(28710U);
    msg.setSourceEntity(87U);
    msg.setDestination(31742U);
    msg.setDestinationEntity(50U);
    msg.value = 0.805402349525;

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
    msg.setTimeStamp(0.740069340572);
    msg.setSource(15632U);
    msg.setSourceEntity(145U);
    msg.setDestination(15042U);
    msg.setDestinationEntity(230U);
    msg.value = 0.745682347673;

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
    msg.setTimeStamp(0.798167906149);
    msg.setSource(55144U);
    msg.setSourceEntity(204U);
    msg.setDestination(50407U);
    msg.setDestinationEntity(246U);
    msg.value = 0.885454088748;

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
    msg.setTimeStamp(0.495941511131);
    msg.setSource(45602U);
    msg.setSourceEntity(144U);
    msg.setDestination(22150U);
    msg.setDestinationEntity(113U);
    msg.value = 0.582784376765;

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
    msg.setTimeStamp(0.789879868761);
    msg.setSource(46627U);
    msg.setSourceEntity(20U);
    msg.setDestination(64356U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0323332761799;

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
    msg.setTimeStamp(0.218790814521);
    msg.setSource(30453U);
    msg.setSourceEntity(232U);
    msg.setDestination(24741U);
    msg.setDestinationEntity(89U);
    msg.value = 0.902943818274;

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
    msg.setTimeStamp(0.745703393258);
    msg.setSource(40170U);
    msg.setSourceEntity(19U);
    msg.setDestination(32875U);
    msg.setDestinationEntity(5U);
    msg.value = 0.580737274896;

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
    msg.setTimeStamp(0.261171136191);
    msg.setSource(20651U);
    msg.setSourceEntity(237U);
    msg.setDestination(26380U);
    msg.setDestinationEntity(75U);
    msg.validity = 13485U;
    msg.type = 207U;
    msg.tow = 2581064204U;
    msg.base_lat = 0.30728288783;
    msg.base_lon = 0.389474434225;
    msg.base_height = 0.299851159938;
    msg.n = 0.28813265391;
    msg.e = 0.206212306001;
    msg.d = 0.605650330004;
    msg.v_n = 0.360987161128;
    msg.v_e = 0.163401170996;
    msg.v_d = 0.138953735659;
    msg.satellites = 172U;
    msg.iar_hyp = 59110U;
    msg.iar_ratio = 0.548327841965;

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
    msg.setTimeStamp(0.0205114455091);
    msg.setSource(33589U);
    msg.setSourceEntity(250U);
    msg.setDestination(47884U);
    msg.setDestinationEntity(58U);
    msg.validity = 36626U;
    msg.type = 215U;
    msg.tow = 111827124U;
    msg.base_lat = 0.104160165592;
    msg.base_lon = 0.153281891865;
    msg.base_height = 0.865321445816;
    msg.n = 0.380845954975;
    msg.e = 0.240919645119;
    msg.d = 0.989123275522;
    msg.v_n = 0.227700137472;
    msg.v_e = 0.416425578974;
    msg.v_d = 0.287872893699;
    msg.satellites = 156U;
    msg.iar_hyp = 13032U;
    msg.iar_ratio = 0.840177931711;

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
    msg.setTimeStamp(0.954440130554);
    msg.setSource(57361U);
    msg.setSourceEntity(139U);
    msg.setDestination(8760U);
    msg.setDestinationEntity(231U);
    msg.validity = 43444U;
    msg.type = 67U;
    msg.tow = 2341814014U;
    msg.base_lat = 0.17976224793;
    msg.base_lon = 0.849844479852;
    msg.base_height = 0.339376501789;
    msg.n = 0.457691304245;
    msg.e = 0.418702367094;
    msg.d = 0.291203889553;
    msg.v_n = 0.863887767608;
    msg.v_e = 0.503390983277;
    msg.v_d = 0.535299901657;
    msg.satellites = 46U;
    msg.iar_hyp = 56461U;
    msg.iar_ratio = 0.866106025346;

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
    msg.setTimeStamp(0.00508617406782);
    msg.setSource(39008U);
    msg.setSourceEntity(168U);
    msg.setDestination(28202U);
    msg.setDestinationEntity(116U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.28866269364;
    tmp_msg_0.lon = 0.463537596226;
    tmp_msg_0.height = 0.219606894791;
    tmp_msg_0.x = 0.519728065299;
    tmp_msg_0.y = 0.398191324332;
    tmp_msg_0.z = 0.0481558546217;
    tmp_msg_0.phi = 0.871981077724;
    tmp_msg_0.theta = 0.918919762207;
    tmp_msg_0.psi = 0.539092155086;
    tmp_msg_0.u = 0.586156111223;
    tmp_msg_0.v = 0.532958297572;
    tmp_msg_0.w = 0.520572689959;
    tmp_msg_0.vx = 0.326512714785;
    tmp_msg_0.vy = 0.321163893509;
    tmp_msg_0.vz = 0.170332749881;
    tmp_msg_0.p = 0.326443868331;
    tmp_msg_0.q = 0.122247842521;
    tmp_msg_0.r = 0.747137647804;
    tmp_msg_0.depth = 0.718109455389;
    tmp_msg_0.alt = 0.348804077505;
    msg.state.set(tmp_msg_0);
    msg.type = 151U;

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
    msg.setTimeStamp(0.379931087658);
    msg.setSource(13425U);
    msg.setSourceEntity(134U);
    msg.setDestination(11868U);
    msg.setDestinationEntity(142U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.466003481086;
    tmp_msg_0.lon = 0.609027346468;
    tmp_msg_0.height = 0.116018497168;
    tmp_msg_0.x = 0.733642939486;
    tmp_msg_0.y = 0.972274808026;
    tmp_msg_0.z = 0.332418397772;
    tmp_msg_0.phi = 0.393361814748;
    tmp_msg_0.theta = 0.932054400501;
    tmp_msg_0.psi = 0.422077349437;
    tmp_msg_0.u = 0.586601645255;
    tmp_msg_0.v = 0.972485568728;
    tmp_msg_0.w = 0.851302162204;
    tmp_msg_0.vx = 0.574733718897;
    tmp_msg_0.vy = 0.641498154358;
    tmp_msg_0.vz = 0.876230185821;
    tmp_msg_0.p = 0.109605421466;
    tmp_msg_0.q = 0.049829918366;
    tmp_msg_0.r = 0.316256745475;
    tmp_msg_0.depth = 0.328881714947;
    tmp_msg_0.alt = 0.143024555664;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.149823126421);
    msg.setSource(24000U);
    msg.setSourceEntity(139U);
    msg.setDestination(42521U);
    msg.setDestinationEntity(115U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.210416136477;
    tmp_msg_0.lon = 0.329580648973;
    tmp_msg_0.height = 0.733959920304;
    tmp_msg_0.x = 0.34047518945;
    tmp_msg_0.y = 0.825452663428;
    tmp_msg_0.z = 0.320938688053;
    tmp_msg_0.phi = 0.488721138874;
    tmp_msg_0.theta = 0.526628862926;
    tmp_msg_0.psi = 0.680064166041;
    tmp_msg_0.u = 0.93520109434;
    tmp_msg_0.v = 0.494316574157;
    tmp_msg_0.w = 0.471034878466;
    tmp_msg_0.vx = 0.405601093928;
    tmp_msg_0.vy = 0.237151788957;
    tmp_msg_0.vz = 0.834297745336;
    tmp_msg_0.p = 0.435306802957;
    tmp_msg_0.q = 0.0564311070135;
    tmp_msg_0.r = 0.701007315295;
    tmp_msg_0.depth = 0.979200304037;
    tmp_msg_0.alt = 0.507063455382;
    msg.state.set(tmp_msg_0);
    msg.type = 80U;

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
    msg.setTimeStamp(0.454713469195);
    msg.setSource(26624U);
    msg.setSourceEntity(134U);
    msg.setDestination(10747U);
    msg.setDestinationEntity(189U);
    msg.value = 0.196680694429;

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
    msg.setTimeStamp(0.944604941696);
    msg.setSource(65007U);
    msg.setSourceEntity(180U);
    msg.setDestination(34050U);
    msg.setDestinationEntity(164U);
    msg.value = 0.686053832103;

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
    msg.setTimeStamp(0.491498068009);
    msg.setSource(40890U);
    msg.setSourceEntity(195U);
    msg.setDestination(13257U);
    msg.setDestinationEntity(241U);
    msg.value = 0.227163865937;

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
    msg.setTimeStamp(0.0417894892824);
    msg.setSource(56361U);
    msg.setSourceEntity(124U);
    msg.setDestination(40263U);
    msg.setDestinationEntity(245U);
    msg.value = 0.722389004426;

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
    msg.setTimeStamp(0.658821189027);
    msg.setSource(34908U);
    msg.setSourceEntity(15U);
    msg.setDestination(49913U);
    msg.setDestinationEntity(2U);
    msg.value = 0.883443461965;

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
    msg.setTimeStamp(0.76409231159);
    msg.setSource(41339U);
    msg.setSourceEntity(32U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(199U);
    msg.value = 0.245881377422;

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
    msg.setTimeStamp(0.00852692698394);
    msg.setSource(8832U);
    msg.setSourceEntity(143U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0881130813937;

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
    msg.setTimeStamp(0.784416506744);
    msg.setSource(4908U);
    msg.setSourceEntity(209U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(232U);
    msg.value = 0.9290828784;

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
    msg.setTimeStamp(0.784508996892);
    msg.setSource(43053U);
    msg.setSourceEntity(155U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(192U);
    msg.value = 0.923764764905;

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
    msg.setTimeStamp(0.799711282769);
    msg.setSource(35042U);
    msg.setSourceEntity(32U);
    msg.setDestination(62823U);
    msg.setDestinationEntity(7U);
    msg.value = 0.67130357788;

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
    msg.setTimeStamp(0.988526637034);
    msg.setSource(25872U);
    msg.setSourceEntity(161U);
    msg.setDestination(12952U);
    msg.setDestinationEntity(148U);
    msg.value = 0.787636003784;

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
    msg.setTimeStamp(0.848255768579);
    msg.setSource(49956U);
    msg.setSourceEntity(127U);
    msg.setDestination(26204U);
    msg.setDestinationEntity(221U);
    msg.value = 0.254970776928;

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
    msg.setTimeStamp(0.403940358254);
    msg.setSource(11309U);
    msg.setSourceEntity(60U);
    msg.setDestination(8923U);
    msg.setDestinationEntity(31U);
    msg.value = 0.322324973186;

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
    msg.setTimeStamp(0.254899324791);
    msg.setSource(12744U);
    msg.setSourceEntity(68U);
    msg.setDestination(49561U);
    msg.setDestinationEntity(240U);
    msg.value = 0.813189753094;

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
    msg.setTimeStamp(0.431126405408);
    msg.setSource(26564U);
    msg.setSourceEntity(122U);
    msg.setDestination(43930U);
    msg.setDestinationEntity(67U);
    msg.value = 0.172994814899;

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
    msg.setTimeStamp(0.461115175865);
    msg.setSource(41326U);
    msg.setSourceEntity(24U);
    msg.setDestination(35649U);
    msg.setDestinationEntity(25U);
    msg.id = 15U;
    msg.zoom = 152U;
    msg.action = 237U;

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
    msg.setTimeStamp(0.934611978938);
    msg.setSource(50589U);
    msg.setSourceEntity(217U);
    msg.setDestination(11706U);
    msg.setDestinationEntity(16U);
    msg.id = 61U;
    msg.zoom = 102U;
    msg.action = 42U;

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
    msg.setTimeStamp(0.0775389043792);
    msg.setSource(52890U);
    msg.setSourceEntity(112U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(239U);
    msg.id = 42U;
    msg.zoom = 246U;
    msg.action = 118U;

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
    msg.setTimeStamp(0.832524610946);
    msg.setSource(23825U);
    msg.setSourceEntity(60U);
    msg.setDestination(50343U);
    msg.setDestinationEntity(10U);
    msg.id = 163U;
    msg.value = 0.542175276618;

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
    msg.setTimeStamp(0.628603113528);
    msg.setSource(32482U);
    msg.setSourceEntity(181U);
    msg.setDestination(39487U);
    msg.setDestinationEntity(59U);
    msg.id = 84U;
    msg.value = 0.558535024598;

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
    msg.setTimeStamp(0.273001531182);
    msg.setSource(36097U);
    msg.setSourceEntity(127U);
    msg.setDestination(2096U);
    msg.setDestinationEntity(63U);
    msg.id = 178U;
    msg.value = 0.438778358582;

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
    msg.setTimeStamp(0.831462892417);
    msg.setSource(28624U);
    msg.setSourceEntity(153U);
    msg.setDestination(61902U);
    msg.setDestinationEntity(7U);
    msg.id = 37U;
    msg.value = 0.892613810631;

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
    msg.setTimeStamp(0.605816549101);
    msg.setSource(34601U);
    msg.setSourceEntity(71U);
    msg.setDestination(2771U);
    msg.setDestinationEntity(32U);
    msg.id = 137U;
    msg.value = 0.980577101739;

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
    msg.setTimeStamp(0.290785133881);
    msg.setSource(60059U);
    msg.setSourceEntity(79U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(221U);
    msg.id = 245U;
    msg.value = 0.769001336087;

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
    msg.setTimeStamp(0.992362040629);
    msg.setSource(57030U);
    msg.setSourceEntity(205U);
    msg.setDestination(51068U);
    msg.setDestinationEntity(31U);
    msg.id = 20U;
    msg.angle = 0.833108010473;

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
    msg.setTimeStamp(0.594905392417);
    msg.setSource(50720U);
    msg.setSourceEntity(144U);
    msg.setDestination(7967U);
    msg.setDestinationEntity(66U);
    msg.id = 148U;
    msg.angle = 0.310140059267;

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
    msg.setTimeStamp(0.611743243339);
    msg.setSource(49569U);
    msg.setSourceEntity(72U);
    msg.setDestination(25394U);
    msg.setDestinationEntity(214U);
    msg.id = 228U;
    msg.angle = 0.190514529386;

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
    msg.setTimeStamp(0.620134819845);
    msg.setSource(17966U);
    msg.setSourceEntity(37U);
    msg.setDestination(406U);
    msg.setDestinationEntity(147U);
    msg.op = 168U;
    msg.actions.assign("HIJNWWKQDMZJBURXZCSYMPTCVAKJVPYBRNWJQQPGKJNBIISJIFJTPLCUBBZXEGRBMTJMEFXDWHOAAPGKVUHKTKZNWUPUDROEISKOFZAPDUVPOSLLDORDIIXMDECNKNLYBVCZ");

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
    msg.setTimeStamp(0.288104079673);
    msg.setSource(2975U);
    msg.setSourceEntity(148U);
    msg.setDestination(4339U);
    msg.setDestinationEntity(246U);
    msg.op = 33U;
    msg.actions.assign("TRIKSKEGBEBTWDHIXXYYRJQGZOFIDPZMNPZJGZCJGTXRBEZMCCYPUJQMYTGODRXWCLOTXDVNGYOOENMTMLHTUFTOBMAJDQHNNRKZPMKVSNFUPBJKATWFQLWPRKVQHLNOUDMSQEHZSWUZPFMLNMWAPPUEHNLALRWXYDCWXSLVQFKQXISJQVDFAVCKFKTOYUDLBYUZWXBOYLUVSHGE");

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
    msg.setTimeStamp(0.516762972315);
    msg.setSource(7711U);
    msg.setSourceEntity(144U);
    msg.setDestination(4727U);
    msg.setDestinationEntity(157U);
    msg.op = 218U;
    msg.actions.assign("YOOEBSPQMOBKWCVDLTTRTMMJYSKEBLYHFETARJFFRTQSUMSHTPFDNUECGNZAPBUIOSIRXHQZIEAPNYFBJFAPAPBCVKNYEQMWURVAIJPZKXKJNIVISXWRVLDFGQYSOCJCDXTLAHOWCPKOUDMVEHSNUJWQKAGYVAG");

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
    msg.setTimeStamp(0.984998792867);
    msg.setSource(5104U);
    msg.setSourceEntity(41U);
    msg.setDestination(11687U);
    msg.setDestinationEntity(197U);
    msg.actions.assign("ZFZISPPIOWXUDLFSPVVSTDHQOVWUQIZIXGKBOTNRUWVUCOWOVJZGSXMABLQRFCVTEEECSSVTFNIXGZSUYKMQPULHBSNOCJDHWJEAIAXTQXEBDIRLTMMFBTPJPCXEUHJRNFNBZCKIYDMEMVPAZYZLUOGONXRNGJLOAZLQQAWRMNJMDHUBQLKAGATGZGWFIHDCHYENJYCETNFVJBXKLHBPKYYXWRM");

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
    msg.setTimeStamp(0.202837778434);
    msg.setSource(36807U);
    msg.setSourceEntity(106U);
    msg.setDestination(62563U);
    msg.setDestinationEntity(131U);
    msg.actions.assign("GJJDXWCKPTYOAJFGUUFYVQXMBOWCWYNXOFGVAIBTGQKRXFOAFEKCBRHXUYRLOCQTSNZHADDEDPUBSHNDEL");

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
    msg.setTimeStamp(0.040813347215);
    msg.setSource(58400U);
    msg.setSourceEntity(34U);
    msg.setDestination(61260U);
    msg.setDestinationEntity(21U);
    msg.actions.assign("WBNIOWPTTPNERXHQUIZXOIHXFVSKJZOLNYFCCYDYEYAPYSQZLZKSASOMUGSQYMHMRLIHG");

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
    msg.setTimeStamp(0.188445212218);
    msg.setSource(43754U);
    msg.setSourceEntity(144U);
    msg.setDestination(31692U);
    msg.setDestinationEntity(102U);
    msg.button = 65U;
    msg.value = 232U;

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
    msg.setTimeStamp(0.975070360907);
    msg.setSource(503U);
    msg.setSourceEntity(199U);
    msg.setDestination(53790U);
    msg.setDestinationEntity(88U);
    msg.button = 22U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.780789076208);
    msg.setSource(12506U);
    msg.setSourceEntity(235U);
    msg.setDestination(61898U);
    msg.setDestinationEntity(103U);
    msg.button = 165U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.842168000471);
    msg.setSource(47811U);
    msg.setSourceEntity(53U);
    msg.setDestination(17067U);
    msg.setDestinationEntity(26U);
    msg.op = 22U;
    msg.text.assign("VPKTQXNNARAYQATXXIWHJDBDFUKLSWTJZPAKOCFMXEEDWWGSZLROXSYMFUIZUUGGUDOODFZMIKYAIVBHJVBALHAGRYSNCCYRQEHIRRHOFVTUKNXVTHVLCXSCPMUDLVAMPMPKLWOENTMNQXTDSOGXUZNHGWCPEWKQECDKJFEVQMOBVJGWLFGZRZZIFFGTBNNLSBFSBRPZSYCIQWILOMVIYGPHJPBQAZUQMJNBHSCKIYXADPLEKJB");

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
    msg.setTimeStamp(0.701182917229);
    msg.setSource(11653U);
    msg.setSourceEntity(112U);
    msg.setDestination(59855U);
    msg.setDestinationEntity(34U);
    msg.op = 102U;
    msg.text.assign("QEKUJWYCYQKMSFVIDG");

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
    msg.setTimeStamp(0.940727690678);
    msg.setSource(8666U);
    msg.setSourceEntity(175U);
    msg.setDestination(59585U);
    msg.setDestinationEntity(81U);
    msg.op = 142U;
    msg.text.assign("PIOXAGBYRCTEWVTHURQDLNCENPPJUSPUVVAZTCXCUZDHRIJXFBMNVKSTSQJQQQSMWHDWRJQFCDEUKGGABFLKHESNLALYJRFXVCINASVWZPTEKKWQVDAOOPHAKIMZHIWLJBNBZJI");

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
    msg.setTimeStamp(0.567859035747);
    msg.setSource(33889U);
    msg.setSourceEntity(156U);
    msg.setDestination(44385U);
    msg.setDestinationEntity(9U);
    msg.op = 51U;
    msg.time_remain = 0.524055204152;
    msg.sched_time = 0.667427918529;

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
    msg.setTimeStamp(0.551911257179);
    msg.setSource(28381U);
    msg.setSourceEntity(141U);
    msg.setDestination(43262U);
    msg.setDestinationEntity(81U);
    msg.op = 117U;
    msg.time_remain = 0.299216126916;
    msg.sched_time = 0.734469950306;

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
    msg.setTimeStamp(0.296817914036);
    msg.setSource(11822U);
    msg.setSourceEntity(187U);
    msg.setDestination(34869U);
    msg.setDestinationEntity(190U);
    msg.op = 195U;
    msg.time_remain = 0.595395916592;
    msg.sched_time = 0.396304932051;

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
    msg.setTimeStamp(0.47220574985);
    msg.setSource(59915U);
    msg.setSourceEntity(31U);
    msg.setDestination(51621U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NLIZZCWKMOUUCROFZVFKGVADBPBOATNNDCZQTMEPKBTEDKILBSDLMJTIFMZDCRQSHLJBGQZZYMLOATZSROMXDMQNKEIJYWEXMQRRKGEQUJXUODUQWEUPCYDDFRSNGVJBGECRKHNHYTWGIIXWLXKKLPPFYJTFUALJKQVAQAACOIIICMUFNEXJWQSWOJLH");
    msg.op = 169U;
    msg.sched_time = 0.549323782885;

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
    msg.setTimeStamp(0.166528401392);
    msg.setSource(21119U);
    msg.setSourceEntity(50U);
    msg.setDestination(46709U);
    msg.setDestinationEntity(87U);
    msg.name.assign("MLOHMNNDLVTXQZQMZIZJUVWHYQURICQRLTSFJKYOAXBERZWTABNFPIMDEHDPTEDLRBPTGSOKZRKYXMLWMAKWJHYFYCRWIWTOSAGUEBLFUYZKJVSSVJ");
    msg.op = 5U;
    msg.sched_time = 0.0473927064547;

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
    msg.setTimeStamp(0.750121240122);
    msg.setSource(40520U);
    msg.setSourceEntity(191U);
    msg.setDestination(11495U);
    msg.setDestinationEntity(53U);
    msg.name.assign("TWURPUCEEABDURYN");
    msg.op = 142U;
    msg.sched_time = 0.913216393031;

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
    msg.setTimeStamp(0.206529617981);
    msg.setSource(20424U);
    msg.setSourceEntity(148U);
    msg.setDestination(2985U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.760947382557);
    msg.setSource(46748U);
    msg.setSourceEntity(76U);
    msg.setDestination(55739U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.486704098743);
    msg.setSource(13325U);
    msg.setSourceEntity(152U);
    msg.setDestination(12325U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.016837473099);
    msg.setSource(29786U);
    msg.setSourceEntity(141U);
    msg.setDestination(9516U);
    msg.setDestinationEntity(15U);
    msg.name.assign("QBIIKTFTZULJVDEKZNWBJAEJVAIHUXXGYKJZXNRFYRCSO");
    msg.state = 59U;

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
    msg.setTimeStamp(0.665511388186);
    msg.setSource(43756U);
    msg.setSourceEntity(123U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(106U);
    msg.name.assign("FIRCDNBOYHSZFEHXVVIVWQLRDJWLEJNDUSQOTWIJIGPUSTWNNZBCQQLQHUWFOODXMOIOIZJZKTMYXHWWVROLHFXABFKRYBZTKKGVBQHUCJZBSUUAGAENGYKHDOVEXUEESLOAJZBBCERLQMPBSXKYIDRHDQXSKPWYEYQSUTPKTQDFFMDAJGVXPAFLOJASNGLIVKRXNMMFZYAMNVLGHNPANCKTDBYCJLPGPACITMME");
    msg.state = 248U;

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
    msg.setTimeStamp(0.978997094396);
    msg.setSource(41656U);
    msg.setSourceEntity(73U);
    msg.setDestination(36222U);
    msg.setDestinationEntity(172U);
    msg.name.assign("BPDPPTVJNWKWNUIWIVRXTOKXZSTQMTNYLWPHRHDKJBAEZXZADTIFHYOSBFQDKQDSNERWMEABGWJKHXVVAHSLLGRRWCNLZDHVUTAKEYKRBHVQFRSH");
    msg.state = 169U;

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
    msg.setTimeStamp(0.239206985878);
    msg.setSource(21541U);
    msg.setSourceEntity(65U);
    msg.setDestination(63761U);
    msg.setDestinationEntity(12U);
    msg.name.assign("MJQSOLPXTJENJRFLMCCJYISAMWNTVMUMPFKBYUDPZZWIZKXOUQLXCWAKFVG");
    msg.value = 74U;

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
    msg.setTimeStamp(0.695104008947);
    msg.setSource(6054U);
    msg.setSourceEntity(49U);
    msg.setDestination(20155U);
    msg.setDestinationEntity(163U);
    msg.name.assign("JOLURLWLWPCEFVNXQPVPTDXHZNZEFLTTIRBBPNQTZGTOVSYGFTJRSIXXVNOENRMZIYOJJMNUCDJJFSINLBAEADUIIUUDEWV");
    msg.value = 0U;

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
    msg.setTimeStamp(0.809788587505);
    msg.setSource(48529U);
    msg.setSourceEntity(67U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(139U);
    msg.name.assign("FMINQCTDYVEJPOZTDWHHGKBIITTSJSLXLEIGVXOPGLGJFXY");
    msg.value = 95U;

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
    msg.setTimeStamp(0.809384060687);
    msg.setSource(53896U);
    msg.setSourceEntity(176U);
    msg.setDestination(27990U);
    msg.setDestinationEntity(72U);
    msg.name.assign("TJPTALCVZECNQNDRVIUFMGLLRUBKLPKKQJUJQDZHAWAUHYXFLOHSQKWTFDEZURWAVXPSIJDXGYFVKBSMEBBOFIRZWRWGZZORGDXVSEEXTFSJCLTOVCDCDYKJBIDYIVHKNQUBGWKMMJXOABZBKNILTAQPJTHOQVSVONFITWGCAPUHYKWLAMNQOCUCAAVORBHCGEX");

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
    msg.setTimeStamp(0.0643252752795);
    msg.setSource(64094U);
    msg.setSourceEntity(193U);
    msg.setDestination(27054U);
    msg.setDestinationEntity(42U);
    msg.name.assign("LOVIDLYZYJIBCJEWHGJHMMTVILYOYKCSXJWDOTIWFDNHJIQQQYWAHWHHNSRPWIQPMUAKYVBGVOTCPATEKUCBZFEWYKZEKZLBSSFJRGRZFGSGDGZXSGRLQUFVTRPMAWCPMXJTJPUNWTPXK");

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
    msg.setTimeStamp(0.494205104651);
    msg.setSource(50906U);
    msg.setSourceEntity(130U);
    msg.setDestination(6585U);
    msg.setDestinationEntity(70U);
    msg.name.assign("XIMNXJPRRMKKXWZSIHYNOBUDQNIJTVMCQETDBGJTCSLTMAUVSXXQKEHQKBYWYSGIDCQSOLLOUXTGQWGHRJXBRZLJYORKVHAOTGXJZUOIVHBWYDUVILPEPZEENXDN");

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
    msg.setTimeStamp(0.943150411074);
    msg.setSource(52633U);
    msg.setSourceEntity(79U);
    msg.setDestination(62182U);
    msg.setDestinationEntity(42U);
    msg.name.assign("UQWCUWLFXHHGLZLTNISEPDMAOJLVLKIXWYRTYWRATQVKMDHBZAJRBUUKXJMKCUGTRYPEOICUNOMXVIPVPAYOZNBFEDWGAAQDLJNLEHUSWIZGJJBCGXWJCRYMJHLVWLQKWVPXKECJVFNHVCOZSNPKIRS");
    msg.value = 68U;

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
    msg.setTimeStamp(0.505891486847);
    msg.setSource(51195U);
    msg.setSourceEntity(111U);
    msg.setDestination(4754U);
    msg.setDestinationEntity(71U);
    msg.name.assign("IMOOCNYZFFMTNMAFAYOYSILHIARKCXIBCAUXHMWAKYXUWZUOYMKIIAVSJDRTTNJULEOGXGGLEDPQFQLWSVEFPZDBLUXVPCHWFCKSNYBNUASQJUQQYIDIROVSZRBTJNWPVLHMBVLFPNJPTECEUUGDJRZAZZKRDFHRKMY");
    msg.value = 238U;

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
    msg.setTimeStamp(0.442067514699);
    msg.setSource(53677U);
    msg.setSourceEntity(239U);
    msg.setDestination(23525U);
    msg.setDestinationEntity(118U);
    msg.name.assign("MZXYJQAPAYQORKPRKWORABUUSFJODAVBMXPYKOHQEVWEYGZAPXGMGIBLJSRNVNXMCPXVWMFIYUUHLQZIRVEKJTZIKWNREGFKUBIJNFNKATXNNDCJSHEQLSZBTUZPEMRLECGSDZGIJZXTDGFTVMTCFTISQWCIHDDPAAMOPNSAICCBFOLYLQVGQWWNKREUZBVJ");
    msg.value = 143U;

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
    msg.setTimeStamp(0.659975697476);
    msg.setSource(61234U);
    msg.setSourceEntity(181U);
    msg.setDestination(15836U);
    msg.setDestinationEntity(195U);
    msg.id = 7U;
    msg.period = 3742542657U;
    msg.duty_cycle = 3100434311U;

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
    msg.setTimeStamp(0.633415950912);
    msg.setSource(1756U);
    msg.setSourceEntity(124U);
    msg.setDestination(48619U);
    msg.setDestinationEntity(35U);
    msg.id = 3U;
    msg.period = 1672515736U;
    msg.duty_cycle = 2318403761U;

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
    msg.setTimeStamp(0.743292092572);
    msg.setSource(20428U);
    msg.setSourceEntity(63U);
    msg.setDestination(6816U);
    msg.setDestinationEntity(189U);
    msg.id = 139U;
    msg.period = 1927751509U;
    msg.duty_cycle = 2904073816U;

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
    msg.setTimeStamp(0.172770466583);
    msg.setSource(53998U);
    msg.setSourceEntity(193U);
    msg.setDestination(28864U);
    msg.setDestinationEntity(122U);
    msg.id = 175U;
    msg.period = 1853880601U;
    msg.duty_cycle = 2694053903U;

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
    msg.setTimeStamp(0.953668798989);
    msg.setSource(61222U);
    msg.setSourceEntity(139U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(100U);
    msg.id = 178U;
    msg.period = 4255908257U;
    msg.duty_cycle = 2886195313U;

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
    msg.setTimeStamp(0.935339539603);
    msg.setSource(63593U);
    msg.setSourceEntity(92U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(155U);
    msg.id = 101U;
    msg.period = 2187928826U;
    msg.duty_cycle = 2871323380U;

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
    msg.setTimeStamp(0.750186876387);
    msg.setSource(22188U);
    msg.setSourceEntity(18U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.985744774565;
    msg.lon = 0.359761250849;
    msg.height = 0.916216714299;
    msg.x = 0.217629989354;
    msg.y = 0.552866887228;
    msg.z = 0.289534468836;
    msg.phi = 0.0518001628919;
    msg.theta = 0.886628287942;
    msg.psi = 0.823897272802;
    msg.u = 0.567534894379;
    msg.v = 0.179510285439;
    msg.w = 0.56304810761;
    msg.vx = 0.00219180631904;
    msg.vy = 0.159545317496;
    msg.vz = 0.188394202779;
    msg.p = 0.542276602981;
    msg.q = 0.659104413046;
    msg.r = 0.567959246031;
    msg.depth = 0.641461544174;
    msg.alt = 0.927688442292;

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
    msg.setTimeStamp(0.980300975205);
    msg.setSource(36264U);
    msg.setSourceEntity(111U);
    msg.setDestination(7284U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.414115721561;
    msg.lon = 0.588228320293;
    msg.height = 0.894198492656;
    msg.x = 0.231593124251;
    msg.y = 0.740227795778;
    msg.z = 0.0637943780927;
    msg.phi = 0.343888644304;
    msg.theta = 0.565998290683;
    msg.psi = 0.416573987812;
    msg.u = 0.912284857956;
    msg.v = 0.0154272824804;
    msg.w = 0.457221307619;
    msg.vx = 0.596855815279;
    msg.vy = 0.950663461121;
    msg.vz = 0.789053311573;
    msg.p = 0.00565332156992;
    msg.q = 0.607900167409;
    msg.r = 0.593292776384;
    msg.depth = 0.956024625962;
    msg.alt = 0.526799603627;

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
    msg.setTimeStamp(0.0953935177252);
    msg.setSource(46225U);
    msg.setSourceEntity(196U);
    msg.setDestination(48174U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.144343427338;
    msg.lon = 0.558370077198;
    msg.height = 0.176276236101;
    msg.x = 0.828304588634;
    msg.y = 0.175160335875;
    msg.z = 0.328638515939;
    msg.phi = 0.861812424024;
    msg.theta = 0.918364257204;
    msg.psi = 0.0500956954934;
    msg.u = 0.586902789267;
    msg.v = 0.849552584159;
    msg.w = 0.445000964498;
    msg.vx = 0.948659840458;
    msg.vy = 0.786094192766;
    msg.vz = 0.922403504597;
    msg.p = 0.96962737745;
    msg.q = 0.821641943819;
    msg.r = 0.312156312671;
    msg.depth = 0.926544370107;
    msg.alt = 0.0844205652559;

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
    msg.setTimeStamp(0.998027303026);
    msg.setSource(49087U);
    msg.setSourceEntity(55U);
    msg.setDestination(4533U);
    msg.setDestinationEntity(168U);
    msg.x = 0.510175601648;
    msg.y = 0.618818159409;
    msg.z = 0.664246100244;

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
    msg.setTimeStamp(0.435382116947);
    msg.setSource(35861U);
    msg.setSourceEntity(222U);
    msg.setDestination(20521U);
    msg.setDestinationEntity(223U);
    msg.x = 0.0744341348462;
    msg.y = 0.489277841265;
    msg.z = 0.508453127105;

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
    msg.setTimeStamp(0.313608507548);
    msg.setSource(50458U);
    msg.setSourceEntity(99U);
    msg.setDestination(52955U);
    msg.setDestinationEntity(88U);
    msg.x = 0.488138031152;
    msg.y = 0.13670531596;
    msg.z = 0.61516565076;

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
    msg.setTimeStamp(0.463068959586);
    msg.setSource(49319U);
    msg.setSourceEntity(183U);
    msg.setDestination(10570U);
    msg.setDestinationEntity(130U);
    msg.value = 0.78128423658;

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
    msg.setTimeStamp(0.144222807129);
    msg.setSource(28553U);
    msg.setSourceEntity(189U);
    msg.setDestination(28078U);
    msg.setDestinationEntity(21U);
    msg.value = 0.49064858191;

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
    msg.setTimeStamp(0.168093229022);
    msg.setSource(33068U);
    msg.setSourceEntity(80U);
    msg.setDestination(40823U);
    msg.setDestinationEntity(160U);
    msg.value = 0.719025499638;

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
    msg.setTimeStamp(0.15146530939);
    msg.setSource(60011U);
    msg.setSourceEntity(138U);
    msg.setDestination(42221U);
    msg.setDestinationEntity(72U);
    msg.value = 0.330402538263;

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
    msg.setTimeStamp(0.451158150244);
    msg.setSource(49775U);
    msg.setSourceEntity(11U);
    msg.setDestination(3707U);
    msg.setDestinationEntity(137U);
    msg.value = 0.705786239446;

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
    msg.setTimeStamp(0.561056303149);
    msg.setSource(27787U);
    msg.setSourceEntity(83U);
    msg.setDestination(44775U);
    msg.setDestinationEntity(79U);
    msg.value = 0.711694431161;

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
    msg.setTimeStamp(0.332330909861);
    msg.setSource(26882U);
    msg.setSourceEntity(89U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(197U);
    msg.x = 0.613926174339;
    msg.y = 0.971833351848;
    msg.z = 0.8965189692;
    msg.phi = 0.963384323626;
    msg.theta = 0.304218816149;
    msg.psi = 0.978482994052;
    msg.p = 0.730751911227;
    msg.q = 0.335485409968;
    msg.r = 0.91053713697;
    msg.u = 0.37840784358;
    msg.v = 0.479379305661;
    msg.w = 0.760400264179;
    msg.bias_psi = 0.244347713908;
    msg.bias_r = 0.660298812403;

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
    msg.setTimeStamp(0.584310853561);
    msg.setSource(62886U);
    msg.setSourceEntity(67U);
    msg.setDestination(44649U);
    msg.setDestinationEntity(19U);
    msg.x = 0.495620874512;
    msg.y = 0.231067121361;
    msg.z = 0.985263061029;
    msg.phi = 0.782600439418;
    msg.theta = 0.996871723146;
    msg.psi = 0.26331418392;
    msg.p = 0.271250955988;
    msg.q = 0.778179540494;
    msg.r = 0.219854204627;
    msg.u = 0.183758529543;
    msg.v = 0.605278551734;
    msg.w = 0.990202161287;
    msg.bias_psi = 0.645353314762;
    msg.bias_r = 0.314592781694;

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
    msg.setTimeStamp(0.0539675041227);
    msg.setSource(53689U);
    msg.setSourceEntity(141U);
    msg.setDestination(64097U);
    msg.setDestinationEntity(71U);
    msg.x = 0.301628919826;
    msg.y = 0.724609226936;
    msg.z = 0.484059663866;
    msg.phi = 0.540403433809;
    msg.theta = 0.0418028529877;
    msg.psi = 0.0636270937078;
    msg.p = 0.100340909007;
    msg.q = 0.953912021705;
    msg.r = 0.666285432503;
    msg.u = 0.885960716747;
    msg.v = 0.991493805586;
    msg.w = 0.0968705643484;
    msg.bias_psi = 0.0125445759914;
    msg.bias_r = 0.51220145987;

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
    msg.setTimeStamp(0.345255710581);
    msg.setSource(41484U);
    msg.setSourceEntity(42U);
    msg.setDestination(50018U);
    msg.setDestinationEntity(38U);
    msg.bias_psi = 0.272049142478;
    msg.bias_r = 0.353498688468;
    msg.cog = 0.942460581485;
    msg.cyaw = 0.159838261111;
    msg.lbl_rej_level = 0.0669986010837;
    msg.gps_rej_level = 0.359206519912;
    msg.custom_x = 0.0775864130209;
    msg.custom_y = 0.0319040326352;
    msg.custom_z = 0.549321673375;

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
    msg.setTimeStamp(0.589568739755);
    msg.setSource(8147U);
    msg.setSourceEntity(244U);
    msg.setDestination(23988U);
    msg.setDestinationEntity(170U);
    msg.bias_psi = 0.272278914202;
    msg.bias_r = 0.678519017602;
    msg.cog = 0.434486638014;
    msg.cyaw = 0.522382824877;
    msg.lbl_rej_level = 0.18607607808;
    msg.gps_rej_level = 0.0606383763299;
    msg.custom_x = 0.469906119413;
    msg.custom_y = 0.750953337785;
    msg.custom_z = 0.711156641293;

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
    msg.setTimeStamp(0.425773540893);
    msg.setSource(1630U);
    msg.setSourceEntity(109U);
    msg.setDestination(42730U);
    msg.setDestinationEntity(83U);
    msg.bias_psi = 0.322050466561;
    msg.bias_r = 0.193912596415;
    msg.cog = 0.699561834516;
    msg.cyaw = 0.339571828785;
    msg.lbl_rej_level = 0.855805482709;
    msg.gps_rej_level = 0.826431519237;
    msg.custom_x = 0.855972307148;
    msg.custom_y = 0.903139122933;
    msg.custom_z = 0.633304200852;

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
    msg.setTimeStamp(0.538652187849);
    msg.setSource(51170U);
    msg.setSourceEntity(142U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(23U);
    msg.utc_time = 0.221813386529;
    msg.reason = 14U;

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
    msg.setTimeStamp(0.0990605053147);
    msg.setSource(62724U);
    msg.setSourceEntity(10U);
    msg.setDestination(62075U);
    msg.setDestinationEntity(210U);
    msg.utc_time = 0.0179895817731;
    msg.reason = 154U;

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
    msg.setTimeStamp(0.765659015822);
    msg.setSource(44791U);
    msg.setSourceEntity(224U);
    msg.setDestination(44402U);
    msg.setDestinationEntity(254U);
    msg.utc_time = 0.981165155107;
    msg.reason = 236U;

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
    msg.setTimeStamp(0.531131635459);
    msg.setSource(55866U);
    msg.setSourceEntity(104U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(189U);
    msg.id = 209U;
    msg.range = 0.0380840067234;
    msg.acceptance = 220U;

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
    msg.setTimeStamp(0.799392023239);
    msg.setSource(53136U);
    msg.setSourceEntity(235U);
    msg.setDestination(54678U);
    msg.setDestinationEntity(93U);
    msg.id = 36U;
    msg.range = 0.0301876569408;
    msg.acceptance = 93U;

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
    msg.setTimeStamp(0.503596181923);
    msg.setSource(13734U);
    msg.setSourceEntity(46U);
    msg.setDestination(10096U);
    msg.setDestinationEntity(19U);
    msg.id = 168U;
    msg.range = 0.664695130749;
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
    msg.setTimeStamp(0.961000186639);
    msg.setSource(24617U);
    msg.setSourceEntity(124U);
    msg.setDestination(14586U);
    msg.setDestinationEntity(53U);
    msg.type = 94U;
    msg.reason = 131U;
    msg.value = 0.000382108632517;
    msg.timestep = 0.8765358327;

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
    msg.setTimeStamp(0.767875355046);
    msg.setSource(18385U);
    msg.setSourceEntity(17U);
    msg.setDestination(19772U);
    msg.setDestinationEntity(59U);
    msg.type = 49U;
    msg.reason = 202U;
    msg.value = 0.329555142585;
    msg.timestep = 0.463703121077;

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
    msg.setTimeStamp(0.968589439339);
    msg.setSource(31348U);
    msg.setSourceEntity(172U);
    msg.setDestination(8114U);
    msg.setDestinationEntity(153U);
    msg.type = 94U;
    msg.reason = 209U;
    msg.value = 0.928228462852;
    msg.timestep = 0.377814863946;

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
    msg.setTimeStamp(0.0379085428444);
    msg.setSource(45141U);
    msg.setSourceEntity(34U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(134U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LYOMFPMXVUNVJZBZIOEVQXTZPLUSNXBGURVMTRLYVDKHOALIHWKQSLZFJDVHDSYTJMBDEVTIRNJBQFJCLWQSRUIWNVTKBJBDKMHQPJJEAHSAEUYJIDSTGHRTCEVMWAFABIPWKWMRWRGHNXFQZGXNYAROJZEPKECSEGMYCWQSTDRGXUZIXDSVYOUACXFZXOC");
    tmp_msg_0.lat = 0.361965786069;
    tmp_msg_0.lon = 0.547251881678;
    tmp_msg_0.depth = 0.503307193502;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 141U;
    tmp_msg_0.transponder_delay = 122U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.280941270048;
    msg.y = 0.744838711383;
    msg.var_x = 0.866286220894;
    msg.var_y = 0.056900683681;
    msg.distance = 0.332722569453;

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
    msg.setTimeStamp(0.686699131017);
    msg.setSource(39161U);
    msg.setSourceEntity(204U);
    msg.setDestination(2339U);
    msg.setDestinationEntity(15U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CAUZXNZETKWSJVZMDEMKRJPDSKREWTTUCNEGISUCHUYGRHSWVAAJYIOIKBMORTKOUYFQCMSBNUVUOSJKJSVDNLFQZAFXIXQXTUMCBDQUJGWGFPIQYGNT");
    tmp_msg_0.lat = 0.242380623744;
    tmp_msg_0.lon = 0.0776866923095;
    tmp_msg_0.depth = 0.735517999815;
    tmp_msg_0.query_channel = 95U;
    tmp_msg_0.reply_channel = 84U;
    tmp_msg_0.transponder_delay = 109U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0534733360688;
    msg.y = 0.587452105207;
    msg.var_x = 0.026373299037;
    msg.var_y = 0.785249525743;
    msg.distance = 0.013858772378;

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
    msg.setTimeStamp(0.588164596897);
    msg.setSource(40731U);
    msg.setSourceEntity(96U);
    msg.setDestination(14256U);
    msg.setDestinationEntity(182U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PZUKONKMAIABCMSNZAUAJHTWMRVJXBRMIYJRXSGTHSBQOHOLZLOGGTQURKJBYYNFNJJLPHCAKNFKWFTIFMLCKDJTSPEQOSWCQCFRZKTQFUGATHOXTIUVBYHXPVEEDDBNZDLPNPLAZMVEVQGUOSYRXHKNYIBGJLPIVTDBGZWSIXBXLMOGEVYCLPZ");
    tmp_msg_0.lat = 0.550312772896;
    tmp_msg_0.lon = 0.754933082864;
    tmp_msg_0.depth = 0.000539020383996;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 131U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0666411837261;
    msg.y = 0.42551035918;
    msg.var_x = 0.856375956848;
    msg.var_y = 0.191312853542;
    msg.distance = 0.261239327585;

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
    msg.setTimeStamp(0.993660686302);
    msg.setSource(7369U);
    msg.setSourceEntity(14U);
    msg.setDestination(18747U);
    msg.setDestinationEntity(235U);
    msg.state = 67U;

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
    msg.setTimeStamp(0.542464113466);
    msg.setSource(2754U);
    msg.setSourceEntity(52U);
    msg.setDestination(16503U);
    msg.setDestinationEntity(211U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.788173409944);
    msg.setSource(36035U);
    msg.setSourceEntity(20U);
    msg.setDestination(25891U);
    msg.setDestinationEntity(184U);
    msg.state = 140U;

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
    msg.setTimeStamp(0.532755577187);
    msg.setSource(30520U);
    msg.setSourceEntity(45U);
    msg.setDestination(47985U);
    msg.setDestinationEntity(36U);
    msg.x = 0.429416295365;
    msg.y = 0.0974955634564;
    msg.z = 0.867195381523;

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
    msg.setTimeStamp(0.322337583903);
    msg.setSource(48298U);
    msg.setSourceEntity(220U);
    msg.setDestination(12510U);
    msg.setDestinationEntity(167U);
    msg.x = 0.750893996505;
    msg.y = 0.249101829592;
    msg.z = 0.67191210585;

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
    msg.setTimeStamp(0.515850306052);
    msg.setSource(64915U);
    msg.setSourceEntity(110U);
    msg.setDestination(19887U);
    msg.setDestinationEntity(97U);
    msg.x = 0.929378998154;
    msg.y = 0.367677696512;
    msg.z = 0.739886545739;

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
    msg.setTimeStamp(0.0581450046542);
    msg.setSource(26207U);
    msg.setSourceEntity(190U);
    msg.setDestination(28607U);
    msg.setDestinationEntity(212U);
    msg.va = 0.0767244928109;
    msg.aoa = 0.928850843434;
    msg.ssa = 0.814327300604;

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
    msg.setTimeStamp(0.106517393311);
    msg.setSource(3937U);
    msg.setSourceEntity(182U);
    msg.setDestination(963U);
    msg.setDestinationEntity(146U);
    msg.va = 0.00804487247373;
    msg.aoa = 0.322218169675;
    msg.ssa = 0.446344318637;

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
    msg.setTimeStamp(0.154008920846);
    msg.setSource(9525U);
    msg.setSourceEntity(78U);
    msg.setDestination(33518U);
    msg.setDestinationEntity(160U);
    msg.va = 0.864770582797;
    msg.aoa = 0.21217471192;
    msg.ssa = 0.787424996189;

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
    msg.setTimeStamp(0.382854441259);
    msg.setSource(51760U);
    msg.setSourceEntity(146U);
    msg.setDestination(15904U);
    msg.setDestinationEntity(59U);
    msg.value = 0.370398319654;

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
    msg.setTimeStamp(0.666796381391);
    msg.setSource(3039U);
    msg.setSourceEntity(168U);
    msg.setDestination(55016U);
    msg.setDestinationEntity(117U);
    msg.value = 0.0765588631567;

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
    msg.setTimeStamp(0.50647795495);
    msg.setSource(24348U);
    msg.setSourceEntity(223U);
    msg.setDestination(43699U);
    msg.setDestinationEntity(139U);
    msg.value = 0.164260684017;

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
    msg.setTimeStamp(0.464535521146);
    msg.setSource(5205U);
    msg.setSourceEntity(157U);
    msg.setDestination(3879U);
    msg.setDestinationEntity(222U);
    msg.value = 0.615749280949;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.202859697737);
    msg.setSource(5979U);
    msg.setSourceEntity(225U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(196U);
    msg.value = 0.769421490527;
    msg.z_units = 185U;

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
    msg.setTimeStamp(0.379678372898);
    msg.setSource(43591U);
    msg.setSourceEntity(160U);
    msg.setDestination(56360U);
    msg.setDestinationEntity(252U);
    msg.value = 0.502809192819;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.185302716077);
    msg.setSource(20221U);
    msg.setSourceEntity(128U);
    msg.setDestination(48335U);
    msg.setDestinationEntity(153U);
    msg.value = 0.734058495587;
    msg.speed_units = 23U;

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
    msg.setTimeStamp(0.0402208713328);
    msg.setSource(4181U);
    msg.setSourceEntity(135U);
    msg.setDestination(58266U);
    msg.setDestinationEntity(137U);
    msg.value = 0.416184296027;
    msg.speed_units = 137U;

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
    msg.setTimeStamp(0.56903624956);
    msg.setSource(59890U);
    msg.setSourceEntity(51U);
    msg.setDestination(63782U);
    msg.setDestinationEntity(102U);
    msg.value = 0.257712355241;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.787792152975);
    msg.setSource(2190U);
    msg.setSourceEntity(232U);
    msg.setDestination(18017U);
    msg.setDestinationEntity(229U);
    msg.value = 0.879713993367;

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
    msg.setTimeStamp(0.0795171373023);
    msg.setSource(56950U);
    msg.setSourceEntity(169U);
    msg.setDestination(29532U);
    msg.setDestinationEntity(100U);
    msg.value = 0.263992971944;

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
    msg.setTimeStamp(0.571580977523);
    msg.setSource(62234U);
    msg.setSourceEntity(9U);
    msg.setDestination(13743U);
    msg.setDestinationEntity(197U);
    msg.value = 0.479018839344;

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
    msg.setTimeStamp(0.363782742503);
    msg.setSource(6513U);
    msg.setSourceEntity(22U);
    msg.setDestination(54199U);
    msg.setDestinationEntity(67U);
    msg.value = 0.457059280739;

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
    msg.setTimeStamp(0.692314780779);
    msg.setSource(34251U);
    msg.setSourceEntity(86U);
    msg.setDestination(58081U);
    msg.setDestinationEntity(220U);
    msg.value = 0.163279656987;

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
    msg.setTimeStamp(0.00326802397509);
    msg.setSource(42474U);
    msg.setSourceEntity(170U);
    msg.setDestination(25498U);
    msg.setDestinationEntity(247U);
    msg.value = 0.428172155693;

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
    msg.setTimeStamp(0.106421044533);
    msg.setSource(9489U);
    msg.setSourceEntity(62U);
    msg.setDestination(40893U);
    msg.setDestinationEntity(71U);
    msg.value = 0.535925005166;

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
    msg.setTimeStamp(0.572323636993);
    msg.setSource(15163U);
    msg.setSourceEntity(132U);
    msg.setDestination(11658U);
    msg.setDestinationEntity(19U);
    msg.value = 0.266606441038;

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
    msg.setTimeStamp(0.199605336929);
    msg.setSource(62152U);
    msg.setSourceEntity(46U);
    msg.setDestination(23148U);
    msg.setDestinationEntity(147U);
    msg.value = 0.814428842986;

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
    msg.setTimeStamp(0.281573776377);
    msg.setSource(59338U);
    msg.setSourceEntity(120U);
    msg.setDestination(33984U);
    msg.setDestinationEntity(222U);
    msg.path_ref = 3750339795U;
    msg.start_lat = 0.803058483532;
    msg.start_lon = 0.965591652623;
    msg.start_z = 0.0112131537131;
    msg.start_z_units = 127U;
    msg.end_lat = 0.532587055249;
    msg.end_lon = 0.721408501458;
    msg.end_z = 0.500447637499;
    msg.end_z_units = 226U;
    msg.speed = 0.252947953068;
    msg.speed_units = 222U;
    msg.lradius = 0.895254315676;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.940614658321);
    msg.setSource(42087U);
    msg.setSourceEntity(68U);
    msg.setDestination(11206U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 2558545943U;
    msg.start_lat = 0.90316001023;
    msg.start_lon = 0.262610952645;
    msg.start_z = 0.53034824813;
    msg.start_z_units = 166U;
    msg.end_lat = 0.352016679069;
    msg.end_lon = 0.0727767332181;
    msg.end_z = 0.958710235985;
    msg.end_z_units = 20U;
    msg.speed = 0.622233210576;
    msg.speed_units = 177U;
    msg.lradius = 0.578792142806;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.87128197429);
    msg.setSource(15099U);
    msg.setSourceEntity(125U);
    msg.setDestination(17200U);
    msg.setDestinationEntity(72U);
    msg.path_ref = 4039362266U;
    msg.start_lat = 0.440719907144;
    msg.start_lon = 0.740347456708;
    msg.start_z = 0.630556771278;
    msg.start_z_units = 105U;
    msg.end_lat = 0.739902373999;
    msg.end_lon = 0.510686462673;
    msg.end_z = 0.479101816289;
    msg.end_z_units = 205U;
    msg.speed = 0.602023335811;
    msg.speed_units = 245U;
    msg.lradius = 0.893295827337;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.0742221991905);
    msg.setSource(65328U);
    msg.setSourceEntity(122U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(62U);
    msg.x = 0.338930146884;
    msg.y = 0.614497557397;
    msg.z = 0.767406309649;
    msg.k = 0.829215022032;
    msg.m = 0.864355019727;
    msg.n = 0.599497682682;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.775237749272);
    msg.setSource(11363U);
    msg.setSourceEntity(141U);
    msg.setDestination(24708U);
    msg.setDestinationEntity(139U);
    msg.x = 0.641239515638;
    msg.y = 0.157408407765;
    msg.z = 0.571292471068;
    msg.k = 0.707655412339;
    msg.m = 0.0676999056609;
    msg.n = 0.788563046678;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.845574067498);
    msg.setSource(10786U);
    msg.setSourceEntity(108U);
    msg.setDestination(29002U);
    msg.setDestinationEntity(220U);
    msg.x = 0.258862553937;
    msg.y = 0.0938438086907;
    msg.z = 0.733099991113;
    msg.k = 0.430486766995;
    msg.m = 0.905231340009;
    msg.n = 0.987980953797;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.972790546614);
    msg.setSource(37360U);
    msg.setSourceEntity(161U);
    msg.setDestination(15872U);
    msg.setDestinationEntity(99U);
    msg.value = 0.121523313565;

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
    msg.setTimeStamp(0.916339387513);
    msg.setSource(25591U);
    msg.setSourceEntity(122U);
    msg.setDestination(63132U);
    msg.setDestinationEntity(86U);
    msg.value = 0.739317661304;

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
    msg.setTimeStamp(0.735001268905);
    msg.setSource(29590U);
    msg.setSourceEntity(93U);
    msg.setDestination(9835U);
    msg.setDestinationEntity(125U);
    msg.value = 0.333672051911;

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
    msg.setTimeStamp(0.230116614981);
    msg.setSource(4045U);
    msg.setSourceEntity(153U);
    msg.setDestination(49132U);
    msg.setDestinationEntity(134U);
    msg.u = 0.068521840257;
    msg.v = 0.23894855522;
    msg.w = 0.651757650607;
    msg.p = 0.482847334772;
    msg.q = 0.743754758474;
    msg.r = 0.842784051465;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.622096111382);
    msg.setSource(57334U);
    msg.setSourceEntity(244U);
    msg.setDestination(26862U);
    msg.setDestinationEntity(190U);
    msg.u = 0.734548210014;
    msg.v = 0.502497874659;
    msg.w = 0.572809540315;
    msg.p = 0.0865104295433;
    msg.q = 0.892118618573;
    msg.r = 0.696631044446;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.246449029326);
    msg.setSource(17598U);
    msg.setSourceEntity(118U);
    msg.setDestination(36579U);
    msg.setDestinationEntity(23U);
    msg.u = 0.66600516602;
    msg.v = 0.705341345558;
    msg.w = 0.414951894405;
    msg.p = 0.0476418755701;
    msg.q = 0.582691351256;
    msg.r = 0.383978195633;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.0274056509059);
    msg.setSource(25757U);
    msg.setSourceEntity(220U);
    msg.setDestination(38689U);
    msg.setDestinationEntity(45U);
    msg.path_ref = 3296841666U;
    msg.start_lat = 0.217760711986;
    msg.start_lon = 0.364452109406;
    msg.start_z = 0.80611290656;
    msg.start_z_units = 57U;
    msg.end_lat = 0.0738658883282;
    msg.end_lon = 0.436678573132;
    msg.end_z = 0.603416306309;
    msg.end_z_units = 100U;
    msg.lradius = 0.163052575904;
    msg.flags = 199U;
    msg.x = 0.199523316469;
    msg.y = 0.117706685918;
    msg.z = 0.449268078429;
    msg.vx = 0.179011622549;
    msg.vy = 0.163767285683;
    msg.vz = 0.773342515148;
    msg.course_error = 0.160918551336;
    msg.eta = 14662U;

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
    msg.setTimeStamp(0.929226479204);
    msg.setSource(3821U);
    msg.setSourceEntity(45U);
    msg.setDestination(12225U);
    msg.setDestinationEntity(54U);
    msg.path_ref = 1200302109U;
    msg.start_lat = 0.201860422915;
    msg.start_lon = 0.196512306016;
    msg.start_z = 0.631534530651;
    msg.start_z_units = 118U;
    msg.end_lat = 0.6687598755;
    msg.end_lon = 0.0411956502084;
    msg.end_z = 0.151807933521;
    msg.end_z_units = 38U;
    msg.lradius = 0.070352625888;
    msg.flags = 19U;
    msg.x = 0.521737227371;
    msg.y = 0.694060577065;
    msg.z = 0.483494364746;
    msg.vx = 0.892103448532;
    msg.vy = 0.956417558349;
    msg.vz = 0.294228329509;
    msg.course_error = 0.343020333786;
    msg.eta = 14387U;

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
    msg.setTimeStamp(0.200330835434);
    msg.setSource(63479U);
    msg.setSourceEntity(2U);
    msg.setDestination(67U);
    msg.setDestinationEntity(236U);
    msg.path_ref = 3478860774U;
    msg.start_lat = 0.843784498367;
    msg.start_lon = 0.22999784536;
    msg.start_z = 0.371575777241;
    msg.start_z_units = 64U;
    msg.end_lat = 0.783561440901;
    msg.end_lon = 0.363630422189;
    msg.end_z = 0.951688316612;
    msg.end_z_units = 77U;
    msg.lradius = 0.825896864487;
    msg.flags = 206U;
    msg.x = 0.234117898635;
    msg.y = 0.835344845981;
    msg.z = 0.343262602626;
    msg.vx = 0.991896450283;
    msg.vy = 0.316968850054;
    msg.vz = 0.0940295818771;
    msg.course_error = 0.966757206268;
    msg.eta = 36254U;

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
    msg.setTimeStamp(0.571957178534);
    msg.setSource(6240U);
    msg.setSourceEntity(191U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(85U);
    msg.k = 0.603355379067;
    msg.m = 0.931374883506;
    msg.n = 0.684136710031;

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
    msg.setTimeStamp(0.08291367014);
    msg.setSource(56215U);
    msg.setSourceEntity(139U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(63U);
    msg.k = 0.552524821852;
    msg.m = 0.366285457968;
    msg.n = 0.48838269495;

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
    msg.setTimeStamp(0.206361405734);
    msg.setSource(27392U);
    msg.setSourceEntity(107U);
    msg.setDestination(49425U);
    msg.setDestinationEntity(52U);
    msg.k = 0.686357916792;
    msg.m = 0.502276866262;
    msg.n = 0.172492870057;

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
    msg.setTimeStamp(0.0253280174539);
    msg.setSource(6967U);
    msg.setSourceEntity(4U);
    msg.setDestination(61430U);
    msg.setDestinationEntity(79U);
    msg.p = 0.19131649921;
    msg.i = 0.653200849714;
    msg.d = 0.544461957806;
    msg.a = 0.613200603647;

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
    msg.setTimeStamp(0.00767844649228);
    msg.setSource(52348U);
    msg.setSourceEntity(36U);
    msg.setDestination(19859U);
    msg.setDestinationEntity(250U);
    msg.p = 0.489024847744;
    msg.i = 0.618508607144;
    msg.d = 0.636116298928;
    msg.a = 0.398875072916;

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
    msg.setTimeStamp(0.066185284814);
    msg.setSource(7205U);
    msg.setSourceEntity(131U);
    msg.setDestination(52653U);
    msg.setDestinationEntity(169U);
    msg.p = 0.869131361886;
    msg.i = 0.109487431629;
    msg.d = 0.235678055075;
    msg.a = 0.258324689826;

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
    msg.setTimeStamp(0.26118565062);
    msg.setSource(30654U);
    msg.setSourceEntity(240U);
    msg.setDestination(36921U);
    msg.setDestinationEntity(162U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.750007188417);
    msg.setSource(54173U);
    msg.setSourceEntity(194U);
    msg.setDestination(31465U);
    msg.setDestinationEntity(71U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.140077535775);
    msg.setSource(17092U);
    msg.setSourceEntity(207U);
    msg.setDestination(37086U);
    msg.setDestinationEntity(226U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.867756051252);
    msg.setSource(58211U);
    msg.setSourceEntity(65U);
    msg.setDestination(43799U);
    msg.setDestinationEntity(10U);
    msg.x = 0.708489274312;
    msg.y = 0.601807077268;
    msg.z = 0.258626085105;
    msg.vx = 0.560063451908;
    msg.vy = 0.880309633625;
    msg.vz = 0.809247567324;
    msg.ax = 0.269932554863;
    msg.ay = 0.878582009905;
    msg.az = 0.719281754465;
    msg.flags = 47317U;

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
    msg.setTimeStamp(0.457808771244);
    msg.setSource(13162U);
    msg.setSourceEntity(249U);
    msg.setDestination(2170U);
    msg.setDestinationEntity(34U);
    msg.x = 0.907288505536;
    msg.y = 0.988638937352;
    msg.z = 0.826631905779;
    msg.vx = 0.554647933306;
    msg.vy = 0.221607993132;
    msg.vz = 0.625103262765;
    msg.ax = 0.722823019724;
    msg.ay = 0.879039512388;
    msg.az = 0.280770335163;
    msg.flags = 28823U;

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
    msg.setTimeStamp(0.684418652926);
    msg.setSource(30015U);
    msg.setSourceEntity(223U);
    msg.setDestination(32107U);
    msg.setDestinationEntity(115U);
    msg.x = 0.66575501905;
    msg.y = 0.273555733808;
    msg.z = 0.301122991552;
    msg.vx = 0.312601935431;
    msg.vy = 0.950011884089;
    msg.vz = 0.826677725646;
    msg.ax = 0.819044953479;
    msg.ay = 0.86905253794;
    msg.az = 0.925465349653;
    msg.flags = 42749U;

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
    msg.setTimeStamp(0.597808172138);
    msg.setSource(18984U);
    msg.setSourceEntity(187U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0278745806332;

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
    msg.setTimeStamp(0.916975612554);
    msg.setSource(61916U);
    msg.setSourceEntity(168U);
    msg.setDestination(5788U);
    msg.setDestinationEntity(6U);
    msg.value = 0.692965083525;

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
    msg.setTimeStamp(0.0942591875605);
    msg.setSource(25731U);
    msg.setSourceEntity(51U);
    msg.setDestination(48822U);
    msg.setDestinationEntity(189U);
    msg.value = 0.898018795159;

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
    msg.setTimeStamp(0.558525527959);
    msg.setSource(58721U);
    msg.setSourceEntity(23U);
    msg.setDestination(56804U);
    msg.setDestinationEntity(24U);
    msg.timeout = 64309U;
    msg.lat = 0.108682171366;
    msg.lon = 0.118373418883;
    msg.z = 0.383198516664;
    msg.z_units = 97U;
    msg.speed = 0.251208201977;
    msg.speed_units = 23U;
    msg.roll = 0.600255164017;
    msg.pitch = 0.442801543037;
    msg.yaw = 0.0120410682215;
    msg.custom.assign("BULDBIPCYAHMNXHHMRKLWFDNPXLPCLVESARONHLQR");

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
    msg.setTimeStamp(0.443926897587);
    msg.setSource(45155U);
    msg.setSourceEntity(197U);
    msg.setDestination(61728U);
    msg.setDestinationEntity(82U);
    msg.timeout = 4055U;
    msg.lat = 0.315715703035;
    msg.lon = 0.740210365842;
    msg.z = 0.620832947182;
    msg.z_units = 18U;
    msg.speed = 0.912519813261;
    msg.speed_units = 241U;
    msg.roll = 0.350976981246;
    msg.pitch = 0.529904924524;
    msg.yaw = 0.604926727542;
    msg.custom.assign("GXSDCRLDJPXQQJMVYHIFSIKOBAJBOTVLONGFPIKQKIPGJZBDSFAPXVDUFKQKGWDAFMZSAUWVZWLTZMECMCFLVHTG");

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
    msg.setTimeStamp(0.952335052191);
    msg.setSource(47209U);
    msg.setSourceEntity(192U);
    msg.setDestination(25166U);
    msg.setDestinationEntity(242U);
    msg.timeout = 59041U;
    msg.lat = 0.035710702414;
    msg.lon = 0.357077048701;
    msg.z = 0.730715274164;
    msg.z_units = 53U;
    msg.speed = 0.608298418813;
    msg.speed_units = 29U;
    msg.roll = 0.124235232785;
    msg.pitch = 0.482455521;
    msg.yaw = 0.964541419562;
    msg.custom.assign("CWJEQXRUEKIFLYHZODBVQPKPFAKTMQPHBSDZPVVAQAJQGPWV");

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
    msg.setTimeStamp(0.729701099633);
    msg.setSource(14046U);
    msg.setSourceEntity(41U);
    msg.setDestination(37984U);
    msg.setDestinationEntity(113U);
    msg.timeout = 36852U;
    msg.lat = 0.0578901301981;
    msg.lon = 0.131381267372;
    msg.z = 0.380536931439;
    msg.z_units = 40U;
    msg.speed = 0.250778448067;
    msg.speed_units = 67U;
    msg.duration = 15415U;
    msg.radius = 0.801702236783;
    msg.flags = 117U;
    msg.custom.assign("RWJZSLBRXVIQWTMVAGNZBGUWJIKKESBAZREMHTZIDPGCMFVUDAXMHHHJTKPIURQDBLOMSLDLTYQSOCXEEYNJNQSZHLEDVVFPKXZLJCXPQJYTKVQUFVEQZIKVFDJAKELYONPCCSMRGUIMYUONJRWKYYSEAWFKTPWIUBPPKYCGOWBACCHXMGGGRFZPBISHTFOVNUMYAOBTGSWBZDVFAXLCIENFMSHLGCJQFROWTJNOXTHQAD");

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
    msg.setTimeStamp(0.0621509445328);
    msg.setSource(54463U);
    msg.setSourceEntity(200U);
    msg.setDestination(44432U);
    msg.setDestinationEntity(134U);
    msg.timeout = 2050U;
    msg.lat = 0.630985741555;
    msg.lon = 0.773039344178;
    msg.z = 0.42348815087;
    msg.z_units = 225U;
    msg.speed = 0.232585397306;
    msg.speed_units = 20U;
    msg.duration = 19646U;
    msg.radius = 0.770090152973;
    msg.flags = 13U;
    msg.custom.assign("KAPBSEQQXQPXHTHFLFSVLMDUGUWRGKYIJNYKKPPJCDIFEVVERGTFAWKKTMHIRQQRYXZGQEJPMGFDNMNDRUIQKJLECJPXGAYCGTTJOCE");

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
    msg.setTimeStamp(0.771732624829);
    msg.setSource(46497U);
    msg.setSourceEntity(27U);
    msg.setDestination(3365U);
    msg.setDestinationEntity(46U);
    msg.timeout = 59680U;
    msg.lat = 0.666910983884;
    msg.lon = 0.45134353367;
    msg.z = 0.856963245259;
    msg.z_units = 228U;
    msg.speed = 0.211449277471;
    msg.speed_units = 127U;
    msg.duration = 14270U;
    msg.radius = 0.241285395069;
    msg.flags = 10U;
    msg.custom.assign("KZMYTPKHGZASNVUXUXQBZACOMJXXERVFJKTSRGUJLEMDDJFCUZPLSHKSHSSWDZALHTSYXHWFVSTEANSPEZKEFOBDICDVAZHIPGENUOLVCHGRESKKQFZBJWQDTTJRYNNNBPAHNPQWALQXHJOABYLQIIGCBPNGKBGODLAJORHWIGUIFIWYQMVJLRRGCJMXLPWNGTNUFOWUXDUKOYWMVIFCDFXVEVICZRU");

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
    msg.setTimeStamp(0.425181631276);
    msg.setSource(1071U);
    msg.setSourceEntity(37U);
    msg.setDestination(62727U);
    msg.setDestinationEntity(83U);
    msg.custom.assign("UFNJSJABLOZIZZRPLVSKHARMWFRBRYAUJZCRXNMKHIJQMICHNZGTCPLYSARFSHAGDEQJZDVIBBZVSVPIODFVSMEULNJBYVCROKQWEURJPZFAQHMPFUXGHM");

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
    msg.setTimeStamp(0.59611194723);
    msg.setSource(38016U);
    msg.setSourceEntity(20U);
    msg.setDestination(24787U);
    msg.setDestinationEntity(150U);
    msg.custom.assign("QSPDXTSLUUQMEZQCMVNKFGFCIMBWPOAJCSTERQVZAATGIZVJHHMUEGZQIBFUFXRYIAENRIRBOUFMFEKGYLFNWBUKJLGINXXEWURYNYVZUMQTOAWBFXCNKMDACYQJTADRHTHSSHYIVNNZICDMPIPMXWTYPSNLPXPLWGJYSKEYTWUCXJKTSKSVEOWKKD");

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
    msg.setTimeStamp(0.945740081411);
    msg.setSource(63212U);
    msg.setSourceEntity(210U);
    msg.setDestination(47543U);
    msg.setDestinationEntity(127U);
    msg.custom.assign("SGSTFIHZDGSIFT");

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
    msg.setTimeStamp(0.0160074407264);
    msg.setSource(45380U);
    msg.setSourceEntity(223U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(146U);
    msg.timeout = 57302U;
    msg.lat = 0.714161592653;
    msg.lon = 0.662285173384;
    msg.z = 0.859286741063;
    msg.z_units = 68U;
    msg.duration = 41157U;
    msg.speed = 0.46399270229;
    msg.speed_units = 23U;
    msg.type = 215U;
    msg.radius = 0.52854181224;
    msg.length = 0.909039168162;
    msg.bearing = 0.230395336653;
    msg.direction = 31U;
    msg.custom.assign("AEBXETLPFHQQIVLAKIMNGARHBQDGTUTHLMTLRYCAKJAYTSAWBWXQJJNPZGXSCKMSKFAANWSXOEVWCVIRAVVOKXHXXHZPFVDCJONCMDZNOMGXLIRDUSQRJIIDFEZTUOBUBBHDSCPYOSJGOQIJNOTJWESVT");

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
    msg.setTimeStamp(0.951271512292);
    msg.setSource(43058U);
    msg.setSourceEntity(139U);
    msg.setDestination(12421U);
    msg.setDestinationEntity(224U);
    msg.timeout = 51643U;
    msg.lat = 0.858854927232;
    msg.lon = 0.281524287581;
    msg.z = 0.854159217467;
    msg.z_units = 202U;
    msg.duration = 32246U;
    msg.speed = 0.158927949046;
    msg.speed_units = 47U;
    msg.type = 25U;
    msg.radius = 0.879191254024;
    msg.length = 0.0845493070816;
    msg.bearing = 0.811777370093;
    msg.direction = 2U;
    msg.custom.assign("ZWPXAJSVNKRYSNUVYRCCVIIOJMOPCADHNXIMJXOBJLNAXKIFPIYGQUX");

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
    msg.setTimeStamp(0.758893018643);
    msg.setSource(31983U);
    msg.setSourceEntity(248U);
    msg.setDestination(11108U);
    msg.setDestinationEntity(69U);
    msg.timeout = 60906U;
    msg.lat = 0.616829374408;
    msg.lon = 0.811590933943;
    msg.z = 0.423868555665;
    msg.z_units = 225U;
    msg.duration = 8367U;
    msg.speed = 0.837424630029;
    msg.speed_units = 133U;
    msg.type = 3U;
    msg.radius = 0.251044970739;
    msg.length = 0.178894224066;
    msg.bearing = 0.493419791372;
    msg.direction = 221U;
    msg.custom.assign("KVSZVUFNZOCGQQHCGBPXSBMWGGWWLPTJYMLEFNJCUXRMTHKHJUCALAMZJSXNPQUOEZEGVRNTQALUJGNTWSYMDBBXGJSFJKIGNXPKDWCLRSQOWDRIEGDKMCPRIAF");

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
    msg.setTimeStamp(0.374530782809);
    msg.setSource(4434U);
    msg.setSourceEntity(66U);
    msg.setDestination(51932U);
    msg.setDestinationEntity(142U);
    msg.duration = 46181U;
    msg.custom.assign("TVGNOMGLFIFNWUEUDXPVLDHMOUEXRKH");

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
    msg.setTimeStamp(0.959804816429);
    msg.setSource(33026U);
    msg.setSourceEntity(190U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(81U);
    msg.duration = 15283U;
    msg.custom.assign("WOYFBIQPLTBHEZLSODJWEVHXLDGYYUUDCKILPFPVFSROBSKVIWPO");

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
    msg.setTimeStamp(0.203519551639);
    msg.setSource(1295U);
    msg.setSourceEntity(126U);
    msg.setDestination(60295U);
    msg.setDestinationEntity(12U);
    msg.duration = 34200U;
    msg.custom.assign("YVFVYOHJQMVYEYFBZUVWHSWQHSRDTSIXAUWDSIMOWNRKPQTYVOGWZHXIPGHANDNVQHEYLKLCUMAGVBKRZVJRIBOLYTL");

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
    msg.setTimeStamp(0.709870290779);
    msg.setSource(65136U);
    msg.setSourceEntity(160U);
    msg.setDestination(60717U);
    msg.setDestinationEntity(111U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.637968314129;
    msg.control.set(tmp_msg_0);
    msg.duration = 6448U;
    msg.custom.assign("GXKEFRUPPMAIYBMLSPTOBUNISGPVTVYTCELAMPJPGVTLCNFZKBWZZXGJIQUEHCAWNAXAHHMSNZYDHPHIJORQRKEWPZKNGFNUXASHNOYTHBORFMHDXGCWDLGMVCVBADOJIEIIPVEUNZYLJDBUQBCXDWKLEUVKOSHKJWKCBVCFIRLQFIBNQUDRJZSXVYQFCQBWJTFZUMLYAMDHRRWVYO");

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
    msg.setTimeStamp(0.133016104921);
    msg.setSource(41629U);
    msg.setSourceEntity(216U);
    msg.setDestination(52871U);
    msg.setDestinationEntity(73U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3649106331U;
    tmp_msg_0.start_lat = 0.548589949373;
    tmp_msg_0.start_lon = 0.406840878298;
    tmp_msg_0.start_z = 0.104484298346;
    tmp_msg_0.start_z_units = 170U;
    tmp_msg_0.end_lat = 0.192611525555;
    tmp_msg_0.end_lon = 0.548246851564;
    tmp_msg_0.end_z = 0.929646388292;
    tmp_msg_0.end_z_units = 128U;
    tmp_msg_0.speed = 0.0413090799027;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.lradius = 0.372010695901;
    tmp_msg_0.flags = 161U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3057U;
    msg.custom.assign("CWTRCNSTUMRSVEMAIPKJTAWPWBJFSFXISHDNWGUXBCVGEIEWXVHZZDCIWVROFVRDGTNETRXYLOVOHXYPAUDJELBTPNSFPDTITLIJWPPWGUCLNCTIBVUZCYHYBMAOWMHGVGPORYDCGTZKSJQUNZBKANOGARKNPRPENBZGMADHIHHKXYCXFLUOGESAUOXDRJKAOBBHYMBFLQJSLDWKEQVYLJQCFVQHFRIXKEZYSJKOZQN");

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
    msg.setTimeStamp(0.202559253196);
    msg.setSource(20752U);
    msg.setSourceEntity(7U);
    msg.setDestination(33962U);
    msg.setDestinationEntity(191U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.736265618663;
    tmp_msg_0.z_units = 192U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17892U;
    msg.custom.assign("RYUNKWTXLOIZDGLOYMKEPDINWFVZASMFPOYGDPJWAGXMOCFWHEKFAIVCYBJSOZSRFJVOQOBWUXLFQMRBLKVZMIFPTJWSENXZGIVEKYVMEEHCUVQHANEVYGSLCDXTHNNQCFXPBLJIAREWRUQIQTLSQKSCUMHOPNKWJQNRIHFOAMRKMVJYGUBBWATJWPHAJDDSJLBZRPACUTTEQGHXTSILPPUQGDCKYZKCBYLGTCDMZSEZ");

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
    msg.setTimeStamp(0.516786781192);
    msg.setSource(32699U);
    msg.setSourceEntity(63U);
    msg.setDestination(6214U);
    msg.setDestinationEntity(225U);
    msg.timeout = 53094U;
    msg.lat = 0.656585864466;
    msg.lon = 0.748519122195;
    msg.z = 0.0838026354478;
    msg.z_units = 110U;
    msg.speed = 0.377670146074;
    msg.speed_units = 243U;
    msg.bearing = 0.66364861515;
    msg.cross_angle = 0.175879260989;
    msg.width = 0.831440079515;
    msg.length = 0.0356408754202;
    msg.hstep = 0.240744835439;
    msg.coff = 221U;
    msg.alternation = 252U;
    msg.flags = 5U;
    msg.custom.assign("CNAIWPOTEGTKHHYXUSKBABVPABZSYLDZLGUPBBYRMCCSNMHYHQNJAKFKUTDNXIFSWOVQJXDBNIXKMLEYQOQZXCGVGWACDORTAEMZUQPUJHMFEAHGFXFXHFNLNREKUSOIDYAIYDKZEFDORRV");

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
    msg.setTimeStamp(0.533109903021);
    msg.setSource(9433U);
    msg.setSourceEntity(205U);
    msg.setDestination(30165U);
    msg.setDestinationEntity(13U);
    msg.timeout = 64887U;
    msg.lat = 0.544479626083;
    msg.lon = 0.102315746725;
    msg.z = 0.201926546319;
    msg.z_units = 23U;
    msg.speed = 0.756615750572;
    msg.speed_units = 52U;
    msg.bearing = 0.648624578576;
    msg.cross_angle = 0.723379653358;
    msg.width = 0.765813769427;
    msg.length = 0.250285830102;
    msg.hstep = 0.646448491082;
    msg.coff = 9U;
    msg.alternation = 44U;
    msg.flags = 138U;
    msg.custom.assign("LIILECYIYDLEOJJAIDRCPANMYDKJNUNUAIOLXJNYTWPFWHSBUXGKKPJZMNHRBWRMAVLNCCPHGMTTMJSIAKYWHUTJPWXLQUCDMXYKAQXSWAVUDHTNSJXUZMLKIZAYFZOZGZSRUCCDBPEBEHKREBRXDFXDVDJGVPVUEJZUFFRSPEBVHVFWFBKMAGORIEBEQQXZGQNO");

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
    msg.setTimeStamp(0.311717642494);
    msg.setSource(6768U);
    msg.setSourceEntity(154U);
    msg.setDestination(5919U);
    msg.setDestinationEntity(168U);
    msg.timeout = 6224U;
    msg.lat = 0.189537853918;
    msg.lon = 0.994477232767;
    msg.z = 0.604521567457;
    msg.z_units = 87U;
    msg.speed = 0.894220901673;
    msg.speed_units = 62U;
    msg.bearing = 0.322674251206;
    msg.cross_angle = 0.416459171857;
    msg.width = 0.430911901486;
    msg.length = 0.553983041785;
    msg.hstep = 0.953669862956;
    msg.coff = 170U;
    msg.alternation = 113U;
    msg.flags = 185U;
    msg.custom.assign("LVBETYQQMKZETAMCCZEGESFHQHPLRNMIWJIKYZEIWONWRKROYKETCLPCGVBUUOKBUQSBHZSEBRLQNOTVQJNPTRZNUBRMRNAKLVMRPFZFPMWHGLSASYFCIWWQSUFUXJDMEGAJJSIXVCXNFOHGDOUIDPYANXZCDASUDGKHDLQBTFDCJGPBCIVKEVJLTTJFXHGDWESFXVARNPMOXKQQCDFDAGHPBXIYUPILAZTIWHZNYOWSVXOMYJZUGVOTWHYK");

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
    msg.setTimeStamp(0.946496735712);
    msg.setSource(4065U);
    msg.setSourceEntity(180U);
    msg.setDestination(64044U);
    msg.setDestinationEntity(55U);
    msg.timeout = 593U;
    msg.lat = 0.113860632871;
    msg.lon = 0.323289376652;
    msg.z = 0.255852356747;
    msg.z_units = 158U;
    msg.speed = 0.875467083438;
    msg.speed_units = 172U;
    msg.custom.assign("XCLFYTZIZJATBXFKKJXAPMYXC");

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
    msg.setTimeStamp(0.375656487406);
    msg.setSource(19979U);
    msg.setSourceEntity(33U);
    msg.setDestination(39937U);
    msg.setDestinationEntity(110U);
    msg.timeout = 8680U;
    msg.lat = 0.944646684065;
    msg.lon = 0.742953371681;
    msg.z = 0.493592631243;
    msg.z_units = 132U;
    msg.speed = 0.668034304728;
    msg.speed_units = 92U;
    msg.custom.assign("VHRLPOSZWHQARWLEG");

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
    msg.setTimeStamp(0.711698047594);
    msg.setSource(49890U);
    msg.setSourceEntity(161U);
    msg.setDestination(34354U);
    msg.setDestinationEntity(204U);
    msg.timeout = 30482U;
    msg.lat = 0.465180282274;
    msg.lon = 0.0531186327884;
    msg.z = 0.396571629697;
    msg.z_units = 153U;
    msg.speed = 0.823008420035;
    msg.speed_units = 0U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.280544290383;
    tmp_msg_0.y = 0.373296267401;
    tmp_msg_0.z = 0.456985131093;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WXQDRSRKQHRNYBFSEIHAAQJCQLSIQRYJUSOGKDQZYPGDCUKYUJZISMWUVDHVCTOELNKNIHBAXYHSBUTKWWFLYWEJASPVEVBTFXCNARJFTVKWRQIUFGLVDRXACBOU");

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
    msg.setTimeStamp(0.595699169632);
    msg.setSource(39527U);
    msg.setSourceEntity(185U);
    msg.setDestination(33108U);
    msg.setDestinationEntity(166U);
    msg.x = 0.265452629925;
    msg.y = 0.758097637744;
    msg.z = 0.953167300414;

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
    msg.setTimeStamp(0.324152732116);
    msg.setSource(6623U);
    msg.setSourceEntity(225U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(235U);
    msg.x = 0.119564704673;
    msg.y = 0.153815795694;
    msg.z = 0.304831771964;

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
    msg.setTimeStamp(0.914443682425);
    msg.setSource(34497U);
    msg.setSourceEntity(167U);
    msg.setDestination(61178U);
    msg.setDestinationEntity(23U);
    msg.x = 0.861890158818;
    msg.y = 0.196113190033;
    msg.z = 0.189730525459;

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
    msg.setTimeStamp(0.431958527176);
    msg.setSource(47067U);
    msg.setSourceEntity(16U);
    msg.setDestination(48524U);
    msg.setDestinationEntity(61U);
    msg.timeout = 23242U;
    msg.lat = 0.198746728874;
    msg.lon = 0.43329764392;
    msg.z = 0.32309827161;
    msg.z_units = 241U;
    msg.amplitude = 0.3821090234;
    msg.pitch = 0.177671885961;
    msg.speed = 0.265388646819;
    msg.speed_units = 104U;
    msg.custom.assign("SOIMVVYMXIWIJEAQQLVALPDRRLJHWVGHFFOKJDKXTGHTBSKHONVIMDOHMZPTHPAHOIGGYRHPWIKEUODNBXEGVYHE");

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
    msg.setTimeStamp(0.708666033694);
    msg.setSource(3646U);
    msg.setSourceEntity(171U);
    msg.setDestination(23148U);
    msg.setDestinationEntity(86U);
    msg.timeout = 36612U;
    msg.lat = 0.742643410893;
    msg.lon = 0.932791311866;
    msg.z = 0.205343537445;
    msg.z_units = 150U;
    msg.amplitude = 0.511535674939;
    msg.pitch = 0.272006470524;
    msg.speed = 0.73209669434;
    msg.speed_units = 48U;
    msg.custom.assign("JNMUXHAMSCRNTXIOKUPSTCFUZJGEQWNYKGUIXHQZHYGPHWXEQOUGDSRWVOIAFQBOEKTQSXUAJIGCWBLTBMDZJCZELLMFAPKJRSTYZXNBRXDDF");

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
    msg.setTimeStamp(0.892775808023);
    msg.setSource(58851U);
    msg.setSourceEntity(86U);
    msg.setDestination(55349U);
    msg.setDestinationEntity(44U);
    msg.timeout = 20168U;
    msg.lat = 0.999644862758;
    msg.lon = 0.615014418884;
    msg.z = 0.55571257315;
    msg.z_units = 47U;
    msg.amplitude = 0.0423212986966;
    msg.pitch = 0.553901989037;
    msg.speed = 0.488609353812;
    msg.speed_units = 247U;
    msg.custom.assign("TIOUPSALOFBGOYUEAMLZL");

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
    msg.setTimeStamp(0.343346205697);
    msg.setSource(52262U);
    msg.setSourceEntity(159U);
    msg.setDestination(5107U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.211158509779);
    msg.setSource(28205U);
    msg.setSourceEntity(230U);
    msg.setDestination(47548U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.476201686366);
    msg.setSource(43404U);
    msg.setSourceEntity(8U);
    msg.setDestination(39175U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.536681909387);
    msg.setSource(52021U);
    msg.setSourceEntity(200U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.982325782686;
    msg.lon = 0.332873034953;
    msg.z = 0.449871409826;
    msg.z_units = 98U;
    msg.radius = 0.592429720388;
    msg.duration = 39958U;
    msg.speed = 0.171332129654;
    msg.speed_units = 217U;
    msg.custom.assign("QBQNAHNJYXLEGBRTSRGGTEAGWSSQCHBSTDIINYAKNHJVILREGESNMXVTMMZKIVRJDGZJHDZTXRDOQOWLFXWTW");

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
    msg.setTimeStamp(0.910706558521);
    msg.setSource(5676U);
    msg.setSourceEntity(102U);
    msg.setDestination(60853U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.783754321977;
    msg.lon = 0.655059412857;
    msg.z = 0.141189394865;
    msg.z_units = 115U;
    msg.radius = 0.817780643011;
    msg.duration = 11928U;
    msg.speed = 0.427658850248;
    msg.speed_units = 242U;
    msg.custom.assign("EHUKZOERUNCXNHICKMFARCLDGGSOYGZEYTPTQAHRPAEPSTFCXBVNJRRMCSMBWPXFOAURJZJKJXYQLRVVYFKIUBTSQTYQRJMUIUSDPVSTLKUHBRLBZPKULEGFQQGXAASLZDO");

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
    msg.setTimeStamp(0.13875266317);
    msg.setSource(36161U);
    msg.setSourceEntity(208U);
    msg.setDestination(29363U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.848972325337;
    msg.lon = 0.357455758822;
    msg.z = 0.399316702306;
    msg.z_units = 149U;
    msg.radius = 0.919685157935;
    msg.duration = 14489U;
    msg.speed = 0.670678252669;
    msg.speed_units = 2U;
    msg.custom.assign("CDHMBCOSAQEJOIWCZJDEZ");

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
    msg.setTimeStamp(0.360935598827);
    msg.setSource(50195U);
    msg.setSourceEntity(101U);
    msg.setDestination(15583U);
    msg.setDestinationEntity(144U);
    msg.timeout = 22682U;
    msg.flags = 217U;
    msg.lat = 0.69380232082;
    msg.lon = 0.668239885733;
    msg.start_z = 0.919899006644;
    msg.start_z_units = 33U;
    msg.end_z = 0.385742638572;
    msg.end_z_units = 72U;
    msg.radius = 0.744610429114;
    msg.speed = 0.697160391284;
    msg.speed_units = 23U;
    msg.custom.assign("YNMGQQOCWVHFKBJHXGPMRTCAAYASEYNFRLBXLONVXEOJEGNVZMTAKIUDETXQUUQTOJWUVUMIKEYULITRYZJZNKOPJMIZHQPCPFKKRDSWBNSWBFVOCOBDEWBZLMTAHCPUMRQXMNBFLKWXOLGHUGZYQDGDIE");

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
    msg.setTimeStamp(0.796598718272);
    msg.setSource(49645U);
    msg.setSourceEntity(132U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(204U);
    msg.timeout = 10902U;
    msg.flags = 146U;
    msg.lat = 0.251347683154;
    msg.lon = 0.486073991268;
    msg.start_z = 0.164348992892;
    msg.start_z_units = 227U;
    msg.end_z = 0.940934469281;
    msg.end_z_units = 81U;
    msg.radius = 0.512001406158;
    msg.speed = 0.482601957036;
    msg.speed_units = 219U;
    msg.custom.assign("FHSDFWXYPHVMLCBPVVWCGZEMXGZINMQSLSJKNAZUTCPNFQXPZCKJTXBCOBVQDNLATYBCLOAEKJGDFUKFUROGRZZTAJSOOW");

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
    msg.setTimeStamp(0.874347721806);
    msg.setSource(35104U);
    msg.setSourceEntity(238U);
    msg.setDestination(49315U);
    msg.setDestinationEntity(162U);
    msg.timeout = 37330U;
    msg.flags = 186U;
    msg.lat = 0.608991014115;
    msg.lon = 0.465054471683;
    msg.start_z = 0.320307273356;
    msg.start_z_units = 218U;
    msg.end_z = 0.164675161603;
    msg.end_z_units = 73U;
    msg.radius = 0.138723246592;
    msg.speed = 0.0920772888987;
    msg.speed_units = 61U;
    msg.custom.assign("SMXZKHFFZKENWJYUTQIZMPWCJMOZSYJUVAYJWVWDCHMLGCFECRPLZBKSA");

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
    msg.setTimeStamp(0.857575472806);
    msg.setSource(9863U);
    msg.setSourceEntity(63U);
    msg.setDestination(17926U);
    msg.setDestinationEntity(218U);
    msg.timeout = 39627U;
    msg.lat = 0.194261542895;
    msg.lon = 0.951249238496;
    msg.z = 0.713177157372;
    msg.z_units = 125U;
    msg.speed = 0.505358273331;
    msg.speed_units = 22U;
    msg.custom.assign("SLERRJGKPMBDRYGNWPRGAGGLTPKFXMQFKUVJPLAOYIKJWNUMTIFJXGYTKGKIBWSUSYMBUDQBULVYZLTXPEDZLEDXIEFIIWZCTLOCBXQAJJSXVRMZKFSCVUWHVPZQHCANFKUHPBXTZFDJJXWHAAQYHQIHZGCQLOHQJEXRQU");

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
    msg.setTimeStamp(0.387119912429);
    msg.setSource(2387U);
    msg.setSourceEntity(239U);
    msg.setDestination(45477U);
    msg.setDestinationEntity(159U);
    msg.timeout = 43685U;
    msg.lat = 0.838742184228;
    msg.lon = 0.89079040155;
    msg.z = 0.429737345633;
    msg.z_units = 175U;
    msg.speed = 0.597194344983;
    msg.speed_units = 142U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.939684219383;
    tmp_msg_0.y = 0.971212516824;
    tmp_msg_0.z = 0.110688926009;
    tmp_msg_0.t = 0.0907103188681;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OSILJLEPNBDKHPFBTVLKLXQJYWDSINVAOISIUYCYMZZXAJCMXUDGIXMTSFAMKZLREQXNDRVHLYFZXLQNVYGIJRGWXKLMNHMZBLHGCPURDWCDBBHOUJHTZOADEEWSXFWCIMUAKAGVNSPWEFYJSOHKRXNOBWYEJVWHJVARGFQUCZFBRLUZKSDQPDCOKJQIGOFYARAWAIQVGTST");

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
    msg.setTimeStamp(0.000873999142929);
    msg.setSource(58070U);
    msg.setSourceEntity(220U);
    msg.setDestination(62986U);
    msg.setDestinationEntity(188U);
    msg.timeout = 53392U;
    msg.lat = 0.489892429052;
    msg.lon = 0.0472659008813;
    msg.z = 0.0148489193414;
    msg.z_units = 69U;
    msg.speed = 0.367763736825;
    msg.speed_units = 78U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.112777622079;
    tmp_msg_0.y = 0.223587344683;
    tmp_msg_0.z = 0.0852524523962;
    tmp_msg_0.t = 0.330323996841;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IVLGSQJQPVEZX");

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
    msg.setTimeStamp(0.00356813803441);
    msg.setSource(37538U);
    msg.setSourceEntity(221U);
    msg.setDestination(5566U);
    msg.setDestinationEntity(38U);
    msg.x = 0.266017105246;
    msg.y = 0.813494545347;
    msg.z = 0.893229892244;
    msg.t = 0.0112252732467;

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
    msg.setTimeStamp(0.533952863127);
    msg.setSource(19829U);
    msg.setSourceEntity(227U);
    msg.setDestination(64353U);
    msg.setDestinationEntity(185U);
    msg.x = 0.77391953011;
    msg.y = 0.678940031303;
    msg.z = 0.337870522476;
    msg.t = 0.0404381945774;

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
    msg.setTimeStamp(0.635407285542);
    msg.setSource(58827U);
    msg.setSourceEntity(206U);
    msg.setDestination(61102U);
    msg.setDestinationEntity(69U);
    msg.x = 0.0717273300069;
    msg.y = 0.839152739273;
    msg.z = 0.642656832793;
    msg.t = 0.335647600391;

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
    msg.setTimeStamp(0.856806502443);
    msg.setSource(6572U);
    msg.setSourceEntity(155U);
    msg.setDestination(53526U);
    msg.setDestinationEntity(32U);
    msg.timeout = 39710U;
    msg.name.assign("RHKECYQNMBBVWTUHTVGNMHETJIVKWARIBYKWNKINMMEFQLUMTUEXSACWAHZXHAEVUPYFSXJQPSKIHJCRVWLZCWCGILEBOGGJBVRIPQSPLXAJHMSDTLYDOFC");
    msg.custom.assign("BMOUVNIVJKMGVFGLNDQWXTSRTZTYUPDSDEIQQQJJYRQEXARFWUVCOVZOXQOWSZYTHVAKRCUIPWLYPEICHPWJRXBLSNASLLEKRRAIQNZPKLHEUATSYUFGHAWMQSCOVWECEGXAXKKZUQGGWJURAKYFMHRZOPBVJKYZDTDZFLBMPFBGDXOQANRPAVZLBYKMEYIZYDKUIONNEHDTBDHPBCBHJT");

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
    msg.setTimeStamp(0.0648827125782);
    msg.setSource(31016U);
    msg.setSourceEntity(24U);
    msg.setDestination(31800U);
    msg.setDestinationEntity(21U);
    msg.timeout = 7532U;
    msg.name.assign("GVAQMVGWZGJTCWKXPCBSOLQUSYKMJERKJTNPFAZMTVIYNSGTUMDHGUSOHIYKRPTFLXOAQDRTH");
    msg.custom.assign("WZJHXJRRLNBJZILNKUYUAWKHNIBMZRKVTVWCCHBAIJEUPYFUAAUAXMCBDOEXODSMFDFXGNRKWNSWRKXGLOQBQOFAIGFEPWDQ");

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
    msg.setTimeStamp(0.838465240193);
    msg.setSource(13394U);
    msg.setSourceEntity(122U);
    msg.setDestination(691U);
    msg.setDestinationEntity(108U);
    msg.timeout = 38857U;
    msg.name.assign("JTIXBHYQPHRKTWAGDHDWTENFFVJFCMWAXARXJEKGNXJTALKPXZJQIBYMNQPBIPOTSPOGPFVKIHMLGPKUDYHSDGVZSUJOBVGMOXAJYWUMNRZATRPHZDQXIECRKFLUNQNQAVMZNMUMSDDEGAMZUTDBGVLSRWSWTIBFLOUACYDUBNFRVTCSCNRUNOWEQJXOSQYOWCERFXLSTFKKCHRILPASBGQHCJCZIBWIVLQFIGYEEYZLKXLCPVEEBMOVD");
    msg.custom.assign("ZDFUWELPHTFWWGKTJWCBC");

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
    msg.setTimeStamp(0.243644749903);
    msg.setSource(59485U);
    msg.setSourceEntity(89U);
    msg.setDestination(28862U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.620575101387;
    msg.lon = 0.213969865594;
    msg.z = 0.915994640687;
    msg.z_units = 138U;
    msg.speed = 0.866348333339;
    msg.speed_units = 20U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8465U;
    tmp_msg_0.off_x = 0.25850402201;
    tmp_msg_0.off_y = 0.75928907956;
    tmp_msg_0.off_z = 0.162284231907;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.113270397644;
    msg.custom.assign("IZHGDZWVEMPLFFWONDBKPNCNPOTJTVCTBLXVUKMMKZNJYLQEOAYFFDBYJNYCBAAPGUKSIGDMKUXCJAEO");

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
    msg.setTimeStamp(0.0586873326669);
    msg.setSource(18738U);
    msg.setSourceEntity(5U);
    msg.setDestination(55260U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.375752266541;
    msg.lon = 0.849272801275;
    msg.z = 0.045175550239;
    msg.z_units = 80U;
    msg.speed = 0.265479827089;
    msg.speed_units = 63U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58159U;
    tmp_msg_0.off_x = 0.662994555837;
    tmp_msg_0.off_y = 0.357094668532;
    tmp_msg_0.off_z = 0.0516440949789;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.649348740245;
    msg.custom.assign("GLIZFYKCTUFZPVGKUMGZYVAMWCOTJGBBPHZNSQJRRVJXEFTICDRNZYDXAMSNHYW");

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
    msg.setTimeStamp(0.91173174744);
    msg.setSource(31881U);
    msg.setSourceEntity(86U);
    msg.setDestination(11174U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.139241854313;
    msg.lon = 0.751179605596;
    msg.z = 0.16287431507;
    msg.z_units = 233U;
    msg.speed = 0.376907232379;
    msg.speed_units = 16U;
    msg.start_time = 0.465979859608;
    msg.custom.assign("BEWZQGFIMZMJKUBFYWVEUAZCAYXBGKGNGWUDHQVNYKNGBOZITZVPFQEFKSJPEHURELJWADIQSDDMXFCTQZQHXWKJONPOCEOJHLMVONABXMLMJZITBZSHQDJYNDVDIJUAGRPMSTWNPXERRIFLTELSDDRYREXITVPCBUWCUPUKTYYYPRHCLARQIVHGSCFKGSVWVBLAKQJOOYQHGHHLAIFNUMFXXACKNGZIXSUSMCSBOMOYWN");

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
    msg.setTimeStamp(0.324176304551);
    msg.setSource(61870U);
    msg.setSourceEntity(15U);
    msg.setDestination(39094U);
    msg.setDestinationEntity(61U);
    msg.vid = 52350U;
    msg.off_x = 0.481999312114;
    msg.off_y = 0.1892578234;
    msg.off_z = 0.335836562662;

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
    msg.setTimeStamp(0.825127240432);
    msg.setSource(8078U);
    msg.setSourceEntity(208U);
    msg.setDestination(31162U);
    msg.setDestinationEntity(163U);
    msg.vid = 22041U;
    msg.off_x = 0.391353587516;
    msg.off_y = 0.92045200583;
    msg.off_z = 0.10185358478;

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
    msg.setTimeStamp(0.362734217633);
    msg.setSource(15265U);
    msg.setSourceEntity(58U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(58U);
    msg.vid = 59323U;
    msg.off_x = 0.422954329641;
    msg.off_y = 0.287947980727;
    msg.off_z = 0.247724691437;

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
    msg.setTimeStamp(0.872445847154);
    msg.setSource(22603U);
    msg.setSourceEntity(147U);
    msg.setDestination(55422U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.18540449054);
    msg.setSource(36750U);
    msg.setSourceEntity(190U);
    msg.setDestination(52984U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.737344825094);
    msg.setSource(16353U);
    msg.setSourceEntity(242U);
    msg.setDestination(6181U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.736423134957);
    msg.setSource(2934U);
    msg.setSourceEntity(214U);
    msg.setDestination(56116U);
    msg.setDestinationEntity(152U);
    msg.mid = 37856U;

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
    msg.setTimeStamp(0.366357363838);
    msg.setSource(3418U);
    msg.setSourceEntity(226U);
    msg.setDestination(65155U);
    msg.setDestinationEntity(168U);
    msg.mid = 33988U;

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
    msg.setTimeStamp(0.494783890562);
    msg.setSource(17841U);
    msg.setSourceEntity(203U);
    msg.setDestination(64267U);
    msg.setDestinationEntity(162U);
    msg.mid = 62072U;

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
    msg.setTimeStamp(0.304354688);
    msg.setSource(3962U);
    msg.setSourceEntity(36U);
    msg.setDestination(23140U);
    msg.setDestinationEntity(124U);
    msg.state = 138U;
    msg.eta = 41930U;
    msg.info.assign("YEPLKQZUUDJJNRLXIEHUFCQQWWHSFCDWDQDSAIQLOAOULVHNWTNQNMHRYSASEPYTVOZMKDVDBGFZUGFXFHMSKZARCGEPAEDNMJNPZIUICLZVLJWGZBCNSSDTICKWMJVWSYERAOBTDAOHGMOQJXRMVVHNTIYBBUHQPCSBILEIYUXUTAMGPECXLVRGKYERLFJXXFPUGQQMKBKOBRPHIYYSXPXHVBFRNDKRKGNVZFAJBEOYTPJFML");

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
    msg.setTimeStamp(0.8282372187);
    msg.setSource(26566U);
    msg.setSourceEntity(193U);
    msg.setDestination(47562U);
    msg.setDestinationEntity(75U);
    msg.state = 242U;
    msg.eta = 29309U;
    msg.info.assign("QGVQFLCGEYGBNHTMQAIEEJCLIZOZWOKVMDYAZXETSDJDSEYSKQZBRYPPLUJVLMVOKYSIGPHAHLCCNBBZLPYKVSKIOUXYTKWCIUPZSRJUNNFGOZQBEJDUGWRGAWZYQLVXRXNAKYPFTXZVPLIZMIHEHQGHNHBJDWWNJOFDWTOVORKREMDACPNXSGYCIJTFXFUBGKTRPWXREMTXPCAIVRJUBHKCFMDHNFCEMNQTWS");

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
    msg.setTimeStamp(0.034905004888);
    msg.setSource(3240U);
    msg.setSourceEntity(213U);
    msg.setDestination(12468U);
    msg.setDestinationEntity(141U);
    msg.state = 53U;
    msg.eta = 8709U;
    msg.info.assign("UKCIXJDHQJUBKOQAPHAPCUBQAHOZTNLNXYGAOGPERVLAVDIPFQXESWNYDXQHRWOFTSZOIMXRAPMTLNVCFUYJDZHJRLYZNBZARRSVQKPCKGLPNIZSAEUTYFZJTOSBTVWKMNITGPEMFOBJVSSJSMLHEWBMQYCUWXDBUFJKHPOTANIQIMIWKBYUTENALXQWI");

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
    msg.setTimeStamp(0.885444173281);
    msg.setSource(4388U);
    msg.setSourceEntity(16U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(88U);
    msg.system = 15533U;
    msg.duration = 55191U;
    msg.speed = 0.400418839336;
    msg.speed_units = 165U;
    msg.x = 0.813631101765;
    msg.y = 0.779090357059;
    msg.z = 0.78790931045;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.75585676845);
    msg.setSource(30399U);
    msg.setSourceEntity(224U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(142U);
    msg.system = 50661U;
    msg.duration = 24518U;
    msg.speed = 0.781821822886;
    msg.speed_units = 238U;
    msg.x = 0.0522399730495;
    msg.y = 0.916548576026;
    msg.z = 0.879732587085;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.52040106125);
    msg.setSource(3816U);
    msg.setSourceEntity(197U);
    msg.setDestination(35786U);
    msg.setDestinationEntity(57U);
    msg.system = 61079U;
    msg.duration = 8224U;
    msg.speed = 0.198335737363;
    msg.speed_units = 171U;
    msg.x = 0.714233189671;
    msg.y = 0.43086116895;
    msg.z = 0.431818681044;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.437345000493);
    msg.setSource(29176U);
    msg.setSourceEntity(98U);
    msg.setDestination(23156U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.741771805184;
    msg.lon = 0.556415332873;
    msg.speed = 0.699612683082;
    msg.speed_units = 62U;
    msg.duration = 48597U;
    msg.sys_a = 2172U;
    msg.sys_b = 16301U;
    msg.move_threshold = 0.808744011767;

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
    msg.setTimeStamp(0.270360651766);
    msg.setSource(60886U);
    msg.setSourceEntity(203U);
    msg.setDestination(25122U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.0769333927632;
    msg.lon = 0.468532089807;
    msg.speed = 0.998479050872;
    msg.speed_units = 41U;
    msg.duration = 10337U;
    msg.sys_a = 38880U;
    msg.sys_b = 47138U;
    msg.move_threshold = 0.944220183282;

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
    msg.setTimeStamp(0.993932887954);
    msg.setSource(1410U);
    msg.setSourceEntity(13U);
    msg.setDestination(26302U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.0294108633708;
    msg.lon = 0.33737214352;
    msg.speed = 0.420575257613;
    msg.speed_units = 146U;
    msg.duration = 27147U;
    msg.sys_a = 9081U;
    msg.sys_b = 58723U;
    msg.move_threshold = 0.90437264187;

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
    msg.setTimeStamp(0.0403897074123);
    msg.setSource(64674U);
    msg.setSourceEntity(12U);
    msg.setDestination(33748U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.64340281114;
    msg.lon = 0.459803925764;
    msg.z = 0.709872258717;
    msg.z_units = 150U;
    msg.speed = 0.647461389428;
    msg.speed_units = 202U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0966252371425;
    tmp_msg_0.lon = 0.422711500508;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JUBZPSCIPRQYUWCTCCICEEMBDXRVUSJTMZJFUAPGCZQYZEYNTPALANLRYNHQ");

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
    msg.setTimeStamp(0.696066237904);
    msg.setSource(20976U);
    msg.setSourceEntity(198U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.664494728585;
    msg.lon = 0.888715241722;
    msg.z = 0.314050972213;
    msg.z_units = 236U;
    msg.speed = 0.325204177298;
    msg.speed_units = 127U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.764299864549;
    tmp_msg_0.lon = 0.362759165004;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LENIHXDXPZHBIGGYSMURCNLKGJNSXBEFAIQEHQOXEQ");

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
    msg.setTimeStamp(0.813158019944);
    msg.setSource(40699U);
    msg.setSourceEntity(190U);
    msg.setDestination(49434U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.871957390242;
    msg.lon = 0.611139475924;
    msg.z = 0.189790763032;
    msg.z_units = 220U;
    msg.speed = 0.899835581645;
    msg.speed_units = 245U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.567444601077;
    tmp_msg_0.lon = 0.0729701243521;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NTKOUZPIMHRALKKHIEPUOAIFCHVJHVRZYGUBHDTIWDPQJGRYZBHEWUFHYJXDTUFSLDAQLLPIZPXGBOCAXVDATYKXTGXCEORLRNMTFWNFEGHXESGRPJSBHLIPCVQBZWQZAGVUBJYROQGXZDPOJEQDMQSMCBJRSJTOSGYKWBYCAUL");

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
    msg.setTimeStamp(0.770693683292);
    msg.setSource(9864U);
    msg.setSourceEntity(153U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.246282500352;
    msg.lon = 0.754510143013;

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
    msg.setTimeStamp(0.370113523654);
    msg.setSource(5857U);
    msg.setSourceEntity(208U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.332449404244;
    msg.lon = 0.461538211054;

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
    msg.setTimeStamp(0.408280172593);
    msg.setSource(65160U);
    msg.setSourceEntity(190U);
    msg.setDestination(26112U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.663187154806;
    msg.lon = 0.86605784648;

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
    msg.setTimeStamp(0.85382448636);
    msg.setSource(26747U);
    msg.setSourceEntity(206U);
    msg.setDestination(63106U);
    msg.setDestinationEntity(37U);
    msg.timeout = 49432U;
    msg.lat = 0.487611168661;
    msg.lon = 0.533062497991;
    msg.z = 0.955725616685;
    msg.z_units = 102U;
    msg.pitch = 0.978074596552;
    msg.amplitude = 0.472225895446;
    msg.duration = 28907U;
    msg.speed = 0.00695223518114;
    msg.speed_units = 45U;
    msg.radius = 0.975762448981;
    msg.direction = 126U;
    msg.custom.assign("KECSXJYCFLXMGLBWHKOPEKXCGOVDMBQXLVITGZIEFKMGBINXUPBQCBJRKIZQSWLMZAAYFPWQWAHBARQBIKRMYSUHLENPOGVURTVGAFGCJJLGERRHVKODBNRJWZKFDFCHJUNCHWNWETHOOPSYEVPDILQVALSGEIJZWZCVKMNTQITAKQWPREZYTLAGTOTUUDTUQPMSYBSZIOEFSUILXOZRYDWMSXVMJCOAQUMRNHDSJNYDVDX");

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
    msg.setTimeStamp(0.464895046916);
    msg.setSource(24787U);
    msg.setSourceEntity(122U);
    msg.setDestination(41245U);
    msg.setDestinationEntity(51U);
    msg.timeout = 35864U;
    msg.lat = 0.56108485799;
    msg.lon = 0.834237192042;
    msg.z = 0.624121331183;
    msg.z_units = 98U;
    msg.pitch = 0.921373627897;
    msg.amplitude = 0.288556262086;
    msg.duration = 44904U;
    msg.speed = 0.601773658946;
    msg.speed_units = 217U;
    msg.radius = 0.120450514487;
    msg.direction = 203U;
    msg.custom.assign("WPKACLTGEHJKCTWLLMNOOMJDEXMWYJXSTREFWLAYACGZMHBHSNMBXVZHOWCEIOBNZVDXNTPPDSRACXBQUFJPAFXKTMZVPEOMESIPHSKYWLGDMBDIVRUOMPOIYJNHZZGBPYHCYSQABETCLKREUKNAE");

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
    msg.setTimeStamp(0.554470633085);
    msg.setSource(24474U);
    msg.setSourceEntity(183U);
    msg.setDestination(89U);
    msg.setDestinationEntity(218U);
    msg.timeout = 58936U;
    msg.lat = 0.799671423535;
    msg.lon = 0.9298551536;
    msg.z = 0.917413603015;
    msg.z_units = 112U;
    msg.pitch = 0.138162926609;
    msg.amplitude = 0.89007569503;
    msg.duration = 57847U;
    msg.speed = 0.246254850614;
    msg.speed_units = 44U;
    msg.radius = 0.501913211763;
    msg.direction = 76U;
    msg.custom.assign("MXBMDZIWXWOFYXHE");

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
    msg.setTimeStamp(0.256454468716);
    msg.setSource(30290U);
    msg.setSourceEntity(192U);
    msg.setDestination(12989U);
    msg.setDestinationEntity(119U);
    msg.formation_name.assign("FQTSUXWMAVNXXRRTCBOHVBJUDNWQFZMXCBBTECGWMQBPOVOLEONNVEUYIWKCEDSMKHKTSCBOPVXHVQRBKAMDTACUWQLQALHJSOFARM");
    msg.reference_frame = 162U;
    msg.custom.assign("ZGETKPWMDCEVIQIRHBPQMXUGNKFZKKOJOTNTVXOKZTCBALYSDBCEQAZSGSFOWUNKDOYOWTPSGJBJTHDCYBSUXAETAQDVEMWMGYAWLFGOSCLGFHLRVTRJKIVDLGFAROXEKBKIAR");

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
    msg.setTimeStamp(0.564718757921);
    msg.setSource(36413U);
    msg.setSourceEntity(66U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(60U);
    msg.formation_name.assign("XOBWIDGYMTKIUJNHAFWZBTVSYALDGCQPBUJZQCZCBIZXVREQGVOCNKRXPMKQDCSNZROBVMNKNIHVSKMJMRKSXTGJWXEIRWLSTUAHUCZYQMXDLKAANVNTWCOFWSTQOTIWBDSDYPFALZGFEGNZKLSLZRRXYWGJFKHPGHWBUPJEQYBHRIHMBOXYYEOLSRUBKDOGXVGEUYEVCNTREVPMADZUYCIDJOPMCQFSP");
    msg.reference_frame = 125U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1569U;
    tmp_msg_0.off_x = 0.607816742759;
    tmp_msg_0.off_y = 0.734857882699;
    tmp_msg_0.off_z = 0.664941402515;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KLEPFFFYRFSMHOJLDUXTAZRAOWKMUTYLZJTSHWAPW");

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
    msg.setTimeStamp(0.477899530779);
    msg.setSource(53635U);
    msg.setSourceEntity(187U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(129U);
    msg.formation_name.assign("JIVOGTZJUTUUHGDEOYPCMPMKACSZEWNDDLSXIHDXGWEQVMZPLLWNMHRFLCACGSZYJDYKRTOXASSVYRWOLMBEORCNSTVTWFOKHXXTATNIELBZISCUPKDQJVUUYNIPPXABQTMPIXAHKHRUMHQEGGCRBXFJGNBFIKBYYKQIILXVQRQNOJFVFUKLWJPMLBNWAKTGZRUODCCFYEWSDQYJFPRQRHNOUFIWEVPHVWEHBVG");
    msg.reference_frame = 125U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46148U;
    tmp_msg_0.off_x = 0.75916678242;
    tmp_msg_0.off_y = 0.220811661289;
    tmp_msg_0.off_z = 0.839235615919;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KXTIVJIODHEQSLXFOIHTSNWFHCHACCJLSVNDYKNEQZTDAUZTQXZHGSJWWGWSQNPGTBFCLGIWYDOLEBUYBMYEBOIHBMORTZWZMFAYNXPMGJEJQLHRRBVPRWHNEKUXIXBVFXKMZKLLJOFOKGPMDUQVPOZLSPJIQERPPJXCFVTBLETXROVGRATSYMNXWGAGSJMKRINUFVECBPAQLUGJAKHIYKOBZVRYCDKNTFHDWCZ");

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
    msg.setTimeStamp(0.478001424157);
    msg.setSource(32302U);
    msg.setSourceEntity(61U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("MJIPDWFQQSOISHAOVPRHVMHCOVCJYOROWXKFLKLZJMCVGOHTHVBGBYTNLDZNFXZNPUVNPVSMXEKXOYSXWJKOAZFPRSEMCQWYAHKLKSDJCHKIAUBYUUTITFBLNJBCYDWYLPUFMGTATGXEHHEL");
    msg.formation_name.assign("TIZTTXJKCUWFVHXMZTGJADEUFXKHRCYMOPPRXADFVBIQLXQELSTZKAURYQDIDBCVMGLFOFXPLROGBSOYJDKMWDNYPLOAYORBXFOKMKTOJZCGGWCAIUB");
    msg.plan_id.assign("ZVDTDRIAKMGQUKRDZOQEKYJIMMFJBYXALUKCWXOBDCFLESUMIRJNHWHBZPUSLGGWDRXYBKFMHJLVKXLWSVGDLAMWNFSRQHLKSJMSPZDTRUHNVVCZOQURASICFCSUQGBGOQYNAULOQPDUEVELSDXNWZRXTPZWIHOUTWR");
    msg.description.assign("NMJQGNFPUPJCABTVDFUALIYRVSBGJLNLIQWOAWEYDXMOTCHIUXVDROQUOAAEUXNEGKDQSFGZDZYPWZRSBOSIWMZHYLAHSXJHESUACAMFNVCVRNTDEFPLKTUFLYTKDVHUQXRBNHXOQFYRPCWTKQFEPBGIIMJIZEHBKYRKWWTSAQEKPJMXEUCHOUGXRNGMJBMSNLOGPOCPGKLRKTSCVCGPCZNWIBX");
    msg.leader_speed = 0.24085871698;
    msg.leader_bank_lim = 0.37481417628;
    msg.pos_sim_err_lim = 0.977754353572;
    msg.pos_sim_err_wrn = 0.518027471984;
    msg.pos_sim_err_timeout = 4311U;
    msg.converg_max = 0.507494071321;
    msg.converg_timeout = 42066U;
    msg.comms_timeout = 15267U;
    msg.turb_lim = 0.629685059424;
    msg.custom.assign("ANDOJNGABGAZHETDRRXLDFSPYVYTWKDIXVUOBHEIGJSKUXJESOWIMFAMVPXBPCNBWRESQRQHFUSEWPFKXOVLYQSHCFMEWITCPALVBTYGYBEBKYCPHIXDXCFJAMOINLFNLSTRHJABKIKBOCURFMWUTKVEIZXZQQJPGTLANCZQRQZSNLVSNUPWEC");

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
    msg.setTimeStamp(0.166971969515);
    msg.setSource(61918U);
    msg.setSourceEntity(179U);
    msg.setDestination(24624U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("PJQJYCFUHDNZDYQMVREGITRWBUSDZAYQMLGSJSZNSCKVBUAOPODCQKJJIYEIELBBVTZKEHDNXNCZLNOHZPXWYISOTDIFDIUWMHKOCCAEJWLLFGSEUMGNFGOFREWFAQQDHQGNONPSHAVTXSUSSWXATJYLBCEVZKTHBCWKXWTQHKOZEBNGRMPGUPR");
    msg.formation_name.assign("TMJNPEMIPIABNUFPHWCWZVKOCRAUTMBNZHXRMFRGKSLKRBJWDNHFZJSXDSYTRLLLXWHYWXGQXERVAOADDICSTXTDIFXQOBAGOEBNWRBLSYTZSZKQQDIEYYSMPJPTDBFYJWKCVQWEUNTAMGPUSPVVIIGHUFYDOVHRDFCKUDOWAXZMFLISNJFWHCSGNXHJRVCGLGJLULQMZOUQPEAQBMHYCZAJNVE");
    msg.plan_id.assign("RZIPGHTNLYKWYDJQLSQZYZPHVDSYKBWHTBPQYWFMFEFBFIRNMGBJMACDCVUUXWSHZFLUXIPRZGZFQ");
    msg.description.assign("ZKLVVQRUSZGVVNKANFPDOAKREFKGHJATAVCOIJXWYYTPZSOYXMDJNENAMMISOUVBRJEALXSQJAPNRQCGBUSPBDLTFDCPHLFRUYHGIVXAIQFTISGOFWENNXMLVIHZENSNEHCZIYKLIWOELQYROIXHQNFDBLBGMDYPKTURJJAFPGBSUMWSCETTLKQUWAWQWUMZEKRUWCRHPKTZJMDPVBBECJYGTTZYGDLVGJXMQHPBDXXBZFRUXDIW");
    msg.leader_speed = 0.196984298478;
    msg.leader_bank_lim = 0.593052786003;
    msg.pos_sim_err_lim = 0.370429551893;
    msg.pos_sim_err_wrn = 0.724624765196;
    msg.pos_sim_err_timeout = 33572U;
    msg.converg_max = 0.73796081013;
    msg.converg_timeout = 54707U;
    msg.comms_timeout = 25466U;
    msg.turb_lim = 0.836785446556;
    msg.custom.assign("LQBOCPIYQKVFSD");

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
    msg.setTimeStamp(0.975109172303);
    msg.setSource(17043U);
    msg.setSourceEntity(103U);
    msg.setDestination(33981U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("EXPJPRIKNXHUEEEFKTLXITPGXLAPNRMYTOFYRQJGVVKTSAHOUCCRJFPLDOZLRQAMESYV");
    msg.formation_name.assign("GWYEOSFXHLKDQLMGVLIKEHIHKVQVFBKRDJE");
    msg.plan_id.assign("LEDEQCOURXMLVCBIFXQK");
    msg.description.assign("STVZEHDMBLEYRSIRMUZOODKXVSAAKGLZJGWKNGAJIVYYCQ");
    msg.leader_speed = 0.930586735776;
    msg.leader_bank_lim = 0.115460537039;
    msg.pos_sim_err_lim = 0.405057482576;
    msg.pos_sim_err_wrn = 0.0645606254835;
    msg.pos_sim_err_timeout = 31281U;
    msg.converg_max = 0.596785331585;
    msg.converg_timeout = 44326U;
    msg.comms_timeout = 47280U;
    msg.turb_lim = 0.565280793284;
    msg.custom.assign("LTTOOWAIZQYAUZBBRPXUAXCWAWTALNOPEDHZPTVROVRFQNDKUGEXLKQTKGDHCLXWZKKJCLMUESXFFBYPGEXMZIPYBOHDUTFHNXBMDSMVNSJTNJYZIDNNOCWPUVVDTGJXMACEQERQGPWLHLIYIJFISGXWEUELVZEOMNBCSMKQZMF");

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
    msg.setTimeStamp(0.952305287023);
    msg.setSource(49399U);
    msg.setSourceEntity(84U);
    msg.setDestination(55219U);
    msg.setDestinationEntity(248U);
    msg.control_src = 57288U;
    msg.control_ent = 9U;
    msg.timeout = 0.412846606527;
    msg.loiter_radius = 0.587037094554;
    msg.altitude_interval = 0.360035851366;

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
    msg.setTimeStamp(0.938450130098);
    msg.setSource(45789U);
    msg.setSourceEntity(82U);
    msg.setDestination(16611U);
    msg.setDestinationEntity(176U);
    msg.control_src = 33200U;
    msg.control_ent = 237U;
    msg.timeout = 0.872711672519;
    msg.loiter_radius = 0.982049332767;
    msg.altitude_interval = 0.994085500031;

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
    msg.setTimeStamp(0.920363714411);
    msg.setSource(32695U);
    msg.setSourceEntity(24U);
    msg.setDestination(4715U);
    msg.setDestinationEntity(22U);
    msg.control_src = 40375U;
    msg.control_ent = 24U;
    msg.timeout = 0.867022622469;
    msg.loiter_radius = 0.819944150113;
    msg.altitude_interval = 0.898228273733;

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
    msg.setTimeStamp(0.0725515421085);
    msg.setSource(10084U);
    msg.setSourceEntity(107U);
    msg.setDestination(30415U);
    msg.setDestinationEntity(10U);
    msg.flags = 127U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.187498258689;
    tmp_msg_0.speed_units = 200U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.784627761535;
    tmp_msg_1.z_units = 236U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.779555890092;
    msg.lon = 0.769321166177;
    msg.radius = 0.897896556693;

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
    msg.setTimeStamp(0.882941016604);
    msg.setSource(16468U);
    msg.setSourceEntity(51U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(111U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.470685224835;
    tmp_msg_0.speed_units = 97U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.78492634432;
    tmp_msg_1.z_units = 65U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.368176821165;
    msg.lon = 0.787662532472;
    msg.radius = 0.340974415808;

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
    msg.setTimeStamp(0.905140994469);
    msg.setSource(48788U);
    msg.setSourceEntity(153U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(55U);
    msg.flags = 212U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.801426384846;
    tmp_msg_0.speed_units = 251U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.655012543596;
    tmp_msg_1.z_units = 144U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.926932658313;
    msg.lon = 0.378275357106;
    msg.radius = 0.140791859713;

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
    msg.setTimeStamp(0.855104833399);
    msg.setSource(32248U);
    msg.setSourceEntity(39U);
    msg.setDestination(56112U);
    msg.setDestinationEntity(148U);
    msg.control_src = 36789U;
    msg.control_ent = 166U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 131U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.12055425824;
    tmp_tmp_msg_0_0.speed_units = 94U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0569933472409;
    tmp_tmp_msg_0_1.z_units = 214U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.374708395264;
    tmp_msg_0.lon = 0.601984175329;
    tmp_msg_0.radius = 0.1860088233;
    msg.reference.set(tmp_msg_0);
    msg.state = 214U;
    msg.proximity = 78U;

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
    msg.setTimeStamp(0.379214086461);
    msg.setSource(11468U);
    msg.setSourceEntity(20U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(40U);
    msg.control_src = 25259U;
    msg.control_ent = 200U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 132U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.617183932086;
    tmp_tmp_msg_0_0.speed_units = 109U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.348746128922;
    tmp_tmp_msg_0_1.z_units = 230U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.979061064815;
    tmp_msg_0.lon = 0.554079466576;
    tmp_msg_0.radius = 0.71611081445;
    msg.reference.set(tmp_msg_0);
    msg.state = 188U;
    msg.proximity = 119U;

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
    msg.setTimeStamp(0.451274311181);
    msg.setSource(32475U);
    msg.setSourceEntity(19U);
    msg.setDestination(35190U);
    msg.setDestinationEntity(196U);
    msg.control_src = 59259U;
    msg.control_ent = 142U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 167U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.863447689336;
    tmp_tmp_msg_0_0.speed_units = 157U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.493618861086;
    tmp_tmp_msg_0_1.z_units = 242U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.930569800505;
    tmp_msg_0.lon = 0.0296450609128;
    tmp_msg_0.radius = 0.748877340857;
    msg.reference.set(tmp_msg_0);
    msg.state = 61U;
    msg.proximity = 191U;

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
    msg.setTimeStamp(0.554458181591);
    msg.setSource(56190U);
    msg.setSourceEntity(21U);
    msg.setDestination(14354U);
    msg.setDestinationEntity(223U);
    msg.ax_cmd = 0.88247375778;
    msg.ay_cmd = 0.420492946701;
    msg.az_cmd = 0.335181226059;
    msg.ax_des = 0.0861564941912;
    msg.ay_des = 0.014832435465;
    msg.az_des = 0.889098856106;
    msg.virt_err_x = 0.977541517708;
    msg.virt_err_y = 0.990417281183;
    msg.virt_err_z = 0.230249472259;
    msg.surf_fdbk_x = 0.48424632677;
    msg.surf_fdbk_y = 0.574550931904;
    msg.surf_fdbk_z = 0.677818898416;
    msg.surf_unkn_x = 0.572180759617;
    msg.surf_unkn_y = 0.936010781625;
    msg.surf_unkn_z = 0.70198167932;
    msg.ss_x = 0.262758000956;
    msg.ss_y = 0.54635092143;
    msg.ss_z = 0.422764285664;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FSMKVOBDTDPKAJJYVVOUXJFZUNPEGRHCCPEATSNXYACGPGZSTIEWABXCWQPBMKIYOOHYKAHOPXTJQSURYISAMRUDEWEGIZOEUDLAYHNMMXYMBNKF");
    tmp_msg_0.dist = 0.944348187419;
    tmp_msg_0.err = 0.469025162752;
    tmp_msg_0.ctrl_imp = 0.74937944416;
    tmp_msg_0.rel_dir_x = 0.648398494201;
    tmp_msg_0.rel_dir_y = 0.95573487486;
    tmp_msg_0.rel_dir_z = 0.906596760969;
    tmp_msg_0.err_x = 0.615003544853;
    tmp_msg_0.err_y = 0.0518562520425;
    tmp_msg_0.err_z = 0.0980788264336;
    tmp_msg_0.rf_err_x = 0.170804391405;
    tmp_msg_0.rf_err_y = 0.986036054744;
    tmp_msg_0.rf_err_z = 0.325136131512;
    tmp_msg_0.rf_err_vx = 0.731932163258;
    tmp_msg_0.rf_err_vy = 0.967778099753;
    tmp_msg_0.rf_err_vz = 0.267287616113;
    tmp_msg_0.ss_x = 0.935022815018;
    tmp_msg_0.ss_y = 0.395689930129;
    tmp_msg_0.ss_z = 0.344083067794;
    tmp_msg_0.virt_err_x = 0.269080813316;
    tmp_msg_0.virt_err_y = 0.0327291216359;
    tmp_msg_0.virt_err_z = 0.151897213192;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.193240110902);
    msg.setSource(35336U);
    msg.setSourceEntity(196U);
    msg.setDestination(21748U);
    msg.setDestinationEntity(130U);
    msg.ax_cmd = 0.416050982268;
    msg.ay_cmd = 0.238105870928;
    msg.az_cmd = 0.0768042026954;
    msg.ax_des = 0.515602626772;
    msg.ay_des = 0.437260573179;
    msg.az_des = 0.110119211149;
    msg.virt_err_x = 0.417276947834;
    msg.virt_err_y = 0.80772385742;
    msg.virt_err_z = 0.789238005032;
    msg.surf_fdbk_x = 0.824375355214;
    msg.surf_fdbk_y = 0.878153212563;
    msg.surf_fdbk_z = 0.119522709888;
    msg.surf_unkn_x = 0.6259441649;
    msg.surf_unkn_y = 0.979980815942;
    msg.surf_unkn_z = 0.328496736826;
    msg.ss_x = 0.417713838787;
    msg.ss_y = 0.203265459951;
    msg.ss_z = 0.789087640641;

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
    msg.setTimeStamp(0.75882297787);
    msg.setSource(30231U);
    msg.setSourceEntity(22U);
    msg.setDestination(20656U);
    msg.setDestinationEntity(56U);
    msg.ax_cmd = 0.64507394895;
    msg.ay_cmd = 0.0419070800463;
    msg.az_cmd = 0.740478728278;
    msg.ax_des = 0.552226597629;
    msg.ay_des = 0.406949062588;
    msg.az_des = 0.0712468377426;
    msg.virt_err_x = 0.986543108668;
    msg.virt_err_y = 0.815070804764;
    msg.virt_err_z = 0.877824062737;
    msg.surf_fdbk_x = 0.143039177227;
    msg.surf_fdbk_y = 0.673004864381;
    msg.surf_fdbk_z = 0.0541210590448;
    msg.surf_unkn_x = 0.994185545072;
    msg.surf_unkn_y = 0.369666099523;
    msg.surf_unkn_z = 0.427793398161;
    msg.ss_x = 0.230746610758;
    msg.ss_y = 0.695285305472;
    msg.ss_z = 0.146536822399;

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
    msg.setTimeStamp(0.422150942938);
    msg.setSource(12164U);
    msg.setSourceEntity(198U);
    msg.setDestination(51905U);
    msg.setDestinationEntity(98U);
    msg.s_id.assign("RPSIGVWILZEJQECPDORNZITKNEEQCTDUGBYOAFYPMNHOCGXZPSGNNKOECGFSDPWORRNOEXKWBKANJSXDV");
    msg.dist = 0.712028042559;
    msg.err = 0.727127155616;
    msg.ctrl_imp = 0.881386763752;
    msg.rel_dir_x = 0.209357115291;
    msg.rel_dir_y = 0.220340626223;
    msg.rel_dir_z = 0.37966191559;
    msg.err_x = 0.878433337448;
    msg.err_y = 0.75844122658;
    msg.err_z = 0.810508818703;
    msg.rf_err_x = 0.110314756566;
    msg.rf_err_y = 0.846957782726;
    msg.rf_err_z = 0.217090149123;
    msg.rf_err_vx = 0.165049663855;
    msg.rf_err_vy = 0.154720463679;
    msg.rf_err_vz = 0.334487818273;
    msg.ss_x = 0.0810238641529;
    msg.ss_y = 0.128232440352;
    msg.ss_z = 0.545580231974;
    msg.virt_err_x = 0.408029830826;
    msg.virt_err_y = 0.433059172269;
    msg.virt_err_z = 0.621430909493;

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
    msg.setTimeStamp(0.877202487247);
    msg.setSource(29761U);
    msg.setSourceEntity(49U);
    msg.setDestination(28591U);
    msg.setDestinationEntity(225U);
    msg.s_id.assign("EWNWDKQQXSFXCGCGQKXXRSUUPRBBHJNIHNFLHVYIPEBFNPEZQKRMUVJWUZMPWOZLDUYTPHVBMYEKITLOFTCRXXOKJYIDFNRRBWGVYUBHGRHJIJKVAUCSLOSOPLLSXZHKAJSWDRWIWMDMZNKIVTGPGFLNBNFFEOKMCGJZVZABTQOUEYCTOIZHN");
    msg.dist = 0.763829155705;
    msg.err = 0.279457038438;
    msg.ctrl_imp = 0.00497590551506;
    msg.rel_dir_x = 0.139056742553;
    msg.rel_dir_y = 0.996431217654;
    msg.rel_dir_z = 0.571210122578;
    msg.err_x = 0.870883861021;
    msg.err_y = 0.267013169142;
    msg.err_z = 0.223390786474;
    msg.rf_err_x = 0.574586604307;
    msg.rf_err_y = 0.845482120341;
    msg.rf_err_z = 0.0635837068225;
    msg.rf_err_vx = 0.386002995487;
    msg.rf_err_vy = 0.110309740558;
    msg.rf_err_vz = 0.941619290383;
    msg.ss_x = 0.337578723511;
    msg.ss_y = 0.884192726361;
    msg.ss_z = 0.656194956213;
    msg.virt_err_x = 0.573548210542;
    msg.virt_err_y = 0.522216858769;
    msg.virt_err_z = 0.0834049081233;

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
    msg.setTimeStamp(0.920212674856);
    msg.setSource(53465U);
    msg.setSourceEntity(167U);
    msg.setDestination(19463U);
    msg.setDestinationEntity(16U);
    msg.s_id.assign("IQGIDEUIVVKCRFBZGFXYJOTSTIHHKPQYGCOXZLLGHDJSECICEKLWQTCFXCEOMKECVUJBNGUBRBTHZUOXNXCAUZOANFFMLQPWUTTLJUNBULSPMHAYPDWLOIBSLOAMNFZRJFRDVHYWHWIGHRQREPIXAMMRUYXEHANKOSYAKAVBVKMOFXTENPSMTJDVCRDCYYPJNHPZBDQOSYWEXKADRVSKRDFSWNBEKXPDZGAYWFSZQUQNTLVPGTJIMJILZV");
    msg.dist = 0.360304579566;
    msg.err = 0.583572239148;
    msg.ctrl_imp = 0.284778609771;
    msg.rel_dir_x = 0.331489507724;
    msg.rel_dir_y = 0.212920527854;
    msg.rel_dir_z = 0.532426893792;
    msg.err_x = 0.29494604835;
    msg.err_y = 0.625487948285;
    msg.err_z = 0.858440149838;
    msg.rf_err_x = 0.0931567687205;
    msg.rf_err_y = 0.0972632210161;
    msg.rf_err_z = 0.305243668242;
    msg.rf_err_vx = 0.118365333783;
    msg.rf_err_vy = 0.836096967904;
    msg.rf_err_vz = 0.821426804119;
    msg.ss_x = 0.0325373273303;
    msg.ss_y = 0.80408745786;
    msg.ss_z = 0.835568906283;
    msg.virt_err_x = 0.599236441453;
    msg.virt_err_y = 0.0758785487533;
    msg.virt_err_z = 0.70427085545;

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
    msg.setTimeStamp(0.82597133037);
    msg.setSource(3995U);
    msg.setSourceEntity(45U);
    msg.setDestination(27074U);
    msg.setDestinationEntity(241U);
    msg.timeout = 25682U;
    msg.rpm = 0.822639221787;
    msg.direction = 200U;
    msg.custom.assign("QYSATZWTAGGMJLOZJNJGECDJHJZXXURBAWTRILIGRDGMFSUJNCNILKZKFDHOIDXYRYQCJQPTBUOPVVXWLQMGIRVOKL");

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
    msg.setTimeStamp(0.44345818309);
    msg.setSource(40995U);
    msg.setSourceEntity(124U);
    msg.setDestination(23709U);
    msg.setDestinationEntity(81U);
    msg.timeout = 2043U;
    msg.rpm = 0.0128318602222;
    msg.direction = 72U;
    msg.custom.assign("HHNAFCPTNHQUESSSMYWVCWVGDSXEGRPKPDMSICXXZLTDGQTVIMAGGJPCIKPEZOHRGJOTYQQUWHGWDFBZRVTJAZVSBSULVMEGLOKJBMYIKRWIZLEIQUAKKWFNMGAQANLYZBLIDFOTHRTT");

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
    msg.setTimeStamp(0.353800491369);
    msg.setSource(50426U);
    msg.setSourceEntity(25U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(177U);
    msg.timeout = 4851U;
    msg.rpm = 0.623540348457;
    msg.direction = 187U;
    msg.custom.assign("DTPBKSLSCWJSERIUQVZPOAPXTLSICJFNQMFMHLVBIUUUJREUQXENEWFWLOAKDNE");

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
    msg.setTimeStamp(0.808854522932);
    msg.setSource(46107U);
    msg.setSourceEntity(84U);
    msg.setDestination(3101U);
    msg.setDestinationEntity(154U);
    msg.formation_name.assign("QUKXYQHLLRVMTFBSZAFQYOINAGUIGKEUKPAXBEXXRBBQHYTRDJWSDZRWRLCKOIAUGNSSVZRADTGQENPKTNTJZIXKPOGYQVQYJYEVVOBEJORDCMYTGVMJFMQWPKFACZLMECZCPCWGAXMXSEXHHJYUABPMDDMIBFAIFJBGETTTTVLJZZHURWQLLUKORPPLUUZ");
    msg.type = 204U;
    msg.op = 213U;
    msg.group_name.assign("SKYEGBHOJOZPCIUHKZMNQIXZRJSUGFTYCIGEXXLIVYTDKBOQNGKATJWLDUNUDTOPOXXVMLGJBXFWKACHJCVOMZIJSEHBIMKWEASIHXRZYSDVYTYXTFVUPFPFRQKEGHANLVWYHAEBYGNTBAUFEISMRLJZBVOVNDPXDWWSGSHJMCUMMRDRLQQKZRELUCQEEPKWHBZPPARCWVAQIAFSJTSY");
    msg.plan_id.assign("KJVTQSEBWROVNSBTOTLQRDFPAWYJXENQPACYUCTGCYIGRMZJWMWOJMHLDIZXRDNBHUQWXQGDYPUKSPLGIOOPTCCXGDXMIQFYESGCIKKRHBFEPSFQAIEHAJLFYJRPBZIGOUEGDEIAZQVMOLJWIVBYXFFMUYZYDCBCCRQXJFMVSLLDTHZOWBKRSNZWXZEOIXVNAQMWTVSKMNHHVSKTJBCAFZVJTKPAUSZBUNHVLUANONLWNUEHRGKXPPADDFTKU");
    msg.description.assign("NQYISLHTDZCKEXNMDRLOVMFDIMIAF");
    msg.reference_frame = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47259U;
    tmp_msg_0.off_x = 0.746702902872;
    tmp_msg_0.off_y = 0.394864456304;
    tmp_msg_0.off_z = 0.212268368051;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.890389816599;
    msg.leader_speed_min = 0.404537450415;
    msg.leader_speed_max = 0.0461157030536;
    msg.leader_alt_min = 0.436846969213;
    msg.leader_alt_max = 0.196245277095;
    msg.pos_sim_err_lim = 0.139178472547;
    msg.pos_sim_err_wrn = 0.748780417409;
    msg.pos_sim_err_timeout = 20308U;
    msg.converg_max = 0.378373110037;
    msg.converg_timeout = 32894U;
    msg.comms_timeout = 17345U;
    msg.turb_lim = 0.213499546608;
    msg.custom.assign("FADCARPEXYVCTPOEMWNSNEVCJHAFIBPQMSIJGOUPHFZRIBEMZCSDKNYBOLSJWONSYUJHQMWJNVZBFCBGCHVWAGLTXLCEVLMQPCHDWLNMUZXRLXXOUUQKBIOTTKZEOVDRCJHRMKWGIBUQKVDFXFHDTOEAXWPGERHBADJVJDZQGYYQARWAYAMTFIXPRBVTZMWXENDUFIAGYFRXS");

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
    msg.setTimeStamp(0.424447698178);
    msg.setSource(56279U);
    msg.setSourceEntity(154U);
    msg.setDestination(54287U);
    msg.setDestinationEntity(227U);
    msg.formation_name.assign("NVVDXMGVCCRPYTEKTOUDAEGKRWAHOOQMGRAFEFTHIATFWUTMYKZWEZLWQXSCXSDBNFCXFZZQGNYDFJGIZNUPGMYQSXPJULONOQVGUFVWLOSCCIBHLLFBQQAJHKZRPRINPNEQTTWKNKDUSFJXMDHXYVWNCJDARIMKMDP");
    msg.type = 84U;
    msg.op = 201U;
    msg.group_name.assign("OUALOOSBXHNSMQYDXILRTXTUZELTEXVDKMICKXDUAPRVNUZWVWYWHFYGNETEQEYYCUJCTNZFDJNAMDQAIRBFXIIPHJVMDGFSMJBTYSIPYSHRKYAQCZZEVQXGKHZXXSPQVBLTTDMONLKGZAEMPHZSBKARTJQRBXPKGFLDUNVBIUNFWCGEDUARZCCCEUVLQGQDJMKJGFQHOJJCRUYLGO");
    msg.plan_id.assign("VLNBIPOZDUGLAQGHSDPELWGDAVKERPCPKCERCBLXBKNGMQFSMCFKFTFUSCMHJVAUYZQBLFRFYFZRLHDIOCIHYJXUZISLXVRXBPRWHQUUHUONKWODEHTSOAGKWGBTNRXMWMQZPMADDIESOYUXJMTYUCTHZFSYXAIOQNTJNGMMQGWJFTPJJKISKCWUVVGXQVYAEWJVDJXQRXITECVBVPBZEEKRDWMZDCTAQHOGOS");
    msg.description.assign("NZXQJTTXEZJHWFUVPPWVKCUIUYLNXYKIZHGRYXMCDAUKGAXKCTNSZWTOPTANOECPIBSGMMYHOFRTVAEKBEFHCSYAIQDBDJKDJGIEAQFLRPOWVUQRKFIIKZVMQDSNSHYQDXMRBCBBPKPZJSGFYANVFSLTGDHPXWUOZZDETGWNYEHGWSDVJXOHJZOBR");
    msg.reference_frame = 116U;
    msg.leader_bank_lim = 0.83941064454;
    msg.leader_speed_min = 0.151737677696;
    msg.leader_speed_max = 0.847806607121;
    msg.leader_alt_min = 0.450073642612;
    msg.leader_alt_max = 0.363959079679;
    msg.pos_sim_err_lim = 0.373921963274;
    msg.pos_sim_err_wrn = 0.0565375196849;
    msg.pos_sim_err_timeout = 22486U;
    msg.converg_max = 0.917595256507;
    msg.converg_timeout = 50996U;
    msg.comms_timeout = 13065U;
    msg.turb_lim = 0.209846289528;
    msg.custom.assign("PFWAYYJULTVJGCVZJISHIAPGWZMPGARIHGDXWFSXHNTEMOPOFSUDSABIGKLCMPWELEQFUZMALFWRJRTYMWDNFIKDSVOEOBLOIEEVQUXCHQTGVSMLZ");

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
    msg.setTimeStamp(0.557220057833);
    msg.setSource(3515U);
    msg.setSourceEntity(138U);
    msg.setDestination(31645U);
    msg.setDestinationEntity(55U);
    msg.formation_name.assign("IQFVEPIGJXYBFVAKPASGYKVJDDQYQFEHSPMHCUBRKZJCIAPHKGWNNMNOAYCLZEKWWSRJLSFNZTGMECPNNGTNABLTHFBIJLJDRZNRUEEPXLAXRCZFKFUPV");
    msg.type = 173U;
    msg.op = 126U;
    msg.group_name.assign("IPVMLTKXCCYDBGPLGBGBOLYRHPUKXTFMLJAFNCVBZRQNINOQIURLDCFRSUBLTORDVEONGUOCNBJBOROAESYTAHUWFZIARWLDSPIJJLNHVJOLZRAJTMEIAWEHAQKBTOZGKJ");
    msg.plan_id.assign("LRGTVCMDREROEZJVTEZFJZJMUBQOFJUKTXSOPRUEFJNDWIIGXIXTTNSSZQUVXJLCEINBCMIWHFCGOLMGYRUDLDUEBBXCAYBTDNZXRXOPPLDLMPQDBHFAQLLYCKHKECDKTYJWFA");
    msg.description.assign("PEUEKNXDBNCDZZOOKSGEZXVRXZXOITZFYJBSHTNPKFVWPONNEJUVVYDSNHNSUMFYAIMYCPSKWLYMZCROVXUAPZLACGLU");
    msg.reference_frame = 154U;
    msg.leader_bank_lim = 0.668185311968;
    msg.leader_speed_min = 0.952793708872;
    msg.leader_speed_max = 0.243401847321;
    msg.leader_alt_min = 0.542032782538;
    msg.leader_alt_max = 0.522005111183;
    msg.pos_sim_err_lim = 0.431327006272;
    msg.pos_sim_err_wrn = 0.817575767797;
    msg.pos_sim_err_timeout = 26566U;
    msg.converg_max = 0.127235040161;
    msg.converg_timeout = 3649U;
    msg.comms_timeout = 32595U;
    msg.turb_lim = 0.679027753359;
    msg.custom.assign("KFMYZUMEZMSRILXDGZKSYXBIXILCGIWEPTDFIHOTNYTGERBGEAKQOAVEFCNHMCEBWRYGEXBFSXHDLNRCESPMURBTQDTBIFAQDRTHKKOOARRUAPXVOVPZYCUHZPMYYNPUELQAXKZJBLCGRJYRCDHCVVHFNQSLBOOQYKHDQKJGQJJNF");

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
    msg.setTimeStamp(0.159429050363);
    msg.setSource(9866U);
    msg.setSourceEntity(127U);
    msg.setDestination(60383U);
    msg.setDestinationEntity(206U);
    msg.timeout = 35903U;
    msg.lat = 0.638896502398;
    msg.lon = 0.318067863777;
    msg.z = 0.972988373453;
    msg.z_units = 196U;
    msg.speed = 0.32978492078;
    msg.speed_units = 20U;
    msg.custom.assign("NSSWMRPGIWBDWOKXWSCJXCRJVEETP");

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
    msg.setTimeStamp(0.732217755467);
    msg.setSource(40133U);
    msg.setSourceEntity(199U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(153U);
    msg.timeout = 44024U;
    msg.lat = 0.0824807533868;
    msg.lon = 0.268067973901;
    msg.z = 0.125912681054;
    msg.z_units = 246U;
    msg.speed = 0.482042305444;
    msg.speed_units = 114U;
    msg.custom.assign("KAGKVJATZUHLZFKEHWHKOEYETORWOMVNMVWBMFXBYWNMNHPUTSMDMSRSFXNDPZKECELFGINAYVNGYTZLJPRAVJGEBODZQUCVIYXZUHMLAQTJLAIPWXBYYXLMSIOTEFPIUUGKXPQJEUCZKGQFHRUERGMLCIYUSFHVQOSIRXBBWFSLJPXQHGFJWVTQIDNQWPRKDSCNQTOZKBBJODAYIXCAS");

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
    msg.setTimeStamp(0.815151319527);
    msg.setSource(58800U);
    msg.setSourceEntity(116U);
    msg.setDestination(58513U);
    msg.setDestinationEntity(160U);
    msg.timeout = 31776U;
    msg.lat = 0.246334740065;
    msg.lon = 0.975121598358;
    msg.z = 0.172955956039;
    msg.z_units = 158U;
    msg.speed = 0.5108865714;
    msg.speed_units = 47U;
    msg.custom.assign("QRSIFRXORVDUJJMEEBRADWGSDVVMZLRTDGBOKKQPUNBKOABIPBUVQFHUHALAKBVJIAKJLPMSITMCIJKZECFICOOKWCNDLNTSIYSAGPSLXHQRDOZBSOCDYBTRJYMUKNUJVIFEYGGTMAGVDYBQFCPMLSOHNHYXWLOLLTZAEFZSPLGENPNHCUXFHZC");

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
    msg.setTimeStamp(0.831938459771);
    msg.setSource(23528U);
    msg.setSourceEntity(69U);
    msg.setDestination(55150U);
    msg.setDestinationEntity(30U);
    msg.timeout = 36285U;
    msg.lat = 0.0868953857721;
    msg.lon = 0.584419458607;
    msg.z = 0.173167992768;
    msg.z_units = 141U;
    msg.speed = 0.699581025571;
    msg.speed_units = 229U;
    msg.custom.assign("LZWJCVKMOBETZVZWCUEGRPPPVDPUQPIMLLVYZHOQEAUOTNUFNMQJVFSITAXYMXVEBLODKORWEBUWWGXRPNENWCYSSJIOYRTDUEDYABBUEYWQPEKYOTAXZSCPAQAPSGJFQWZXVIDDLZHDAJHIXQCFHCLYWOKBXHIEHMMZJNGBJQGFFTGTCTFPKCARWLFQCGLKOTMYRGMQLAJRMIFRDXUNZHHYHUZRVTAVNSJUKKLGD");

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
    msg.setTimeStamp(0.775149999615);
    msg.setSource(47240U);
    msg.setSourceEntity(245U);
    msg.setDestination(59888U);
    msg.setDestinationEntity(48U);
    msg.timeout = 4516U;
    msg.lat = 0.580783610914;
    msg.lon = 0.586282265754;
    msg.z = 0.624248436313;
    msg.z_units = 228U;
    msg.speed = 0.099225991917;
    msg.speed_units = 98U;
    msg.custom.assign("MYQXVPEKWWXAFQXQRRUVQSAMVTEIISPPOUNETQAGIMSZLSDOBXJOSMFVYHTZFUNROCAKRJFSWEKKZJDLYJHUXYYNTBBJCTNHAUREFDMXBGPZJJGQXBICFVZPYUVWNSUDADEQQNUJLKOAHRLVWIKVWOOOYYFABNZLGZBCMSKHWMSHOKFEKDDCHRIGUXLHTCALXFLGBRSVJRLCXJNPLCFGEPAGTMPUBCIKEMNQIZTIMOVBTEGDZYP");

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
    msg.setTimeStamp(0.467491942159);
    msg.setSource(30802U);
    msg.setSourceEntity(101U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(194U);
    msg.timeout = 42140U;
    msg.lat = 0.423391503136;
    msg.lon = 0.832362519195;
    msg.z = 0.0520465047165;
    msg.z_units = 168U;
    msg.speed = 0.37422039748;
    msg.speed_units = 71U;
    msg.custom.assign("ATAUXILETLWGKXVXKMEVAVRZEOGBTHAVGHEOFJRTSIKYWZXIGHMVGJFPACYFWISDKKIZENGJFMPDDPXZQFPBJDTHRBLJRHLVULPONPNEJDVMUICWA");

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
    msg.setTimeStamp(0.51382881142);
    msg.setSource(33974U);
    msg.setSourceEntity(191U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(135U);
    msg.arrival_time = 0.32953548345;
    msg.lat = 0.177534597973;
    msg.lon = 0.592667503354;
    msg.z = 0.91337937825;
    msg.z_units = 67U;
    msg.travel_z = 0.477319040956;
    msg.travel_z_units = 3U;
    msg.delayed = 212U;

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
    msg.setTimeStamp(0.302836850028);
    msg.setSource(15614U);
    msg.setSourceEntity(177U);
    msg.setDestination(62161U);
    msg.setDestinationEntity(2U);
    msg.arrival_time = 0.725372724992;
    msg.lat = 0.0760631089255;
    msg.lon = 0.0360598566735;
    msg.z = 0.817336370875;
    msg.z_units = 207U;
    msg.travel_z = 0.864497113667;
    msg.travel_z_units = 247U;
    msg.delayed = 161U;

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
    msg.setTimeStamp(0.992177466391);
    msg.setSource(55118U);
    msg.setSourceEntity(98U);
    msg.setDestination(14645U);
    msg.setDestinationEntity(215U);
    msg.arrival_time = 0.155228111669;
    msg.lat = 0.567967741258;
    msg.lon = 0.290998842395;
    msg.z = 0.373401417955;
    msg.z_units = 163U;
    msg.travel_z = 0.918065777934;
    msg.travel_z_units = 154U;
    msg.delayed = 236U;

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
    msg.setTimeStamp(0.4864140915);
    msg.setSource(35989U);
    msg.setSourceEntity(169U);
    msg.setDestination(23420U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.366672149068;
    msg.lon = 0.682652922034;
    msg.z = 0.714222420226;
    msg.z_units = 169U;
    msg.speed = 0.383221106221;
    msg.speed_units = 209U;
    msg.bearing = 0.57763311249;
    msg.cross_angle = 0.949309459275;
    msg.width = 0.0448771688142;
    msg.length = 0.488670682204;
    msg.coff = 16U;
    msg.angaperture = 0.602972452322;
    msg.range = 8019U;
    msg.overlap = 88U;
    msg.flags = 226U;
    msg.custom.assign("GUNFSIAARGGRKTJVHPJZQLAHFXBIBZPEBFPTMKZDKNPYNJEGEVIONKIOJNNCNYDGGWTKOGIZHKKWCLLSHXDOCJDDTQR");

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
    msg.setTimeStamp(0.19096256);
    msg.setSource(18702U);
    msg.setSourceEntity(33U);
    msg.setDestination(31904U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.464317819858;
    msg.lon = 0.825080884616;
    msg.z = 0.0706729899805;
    msg.z_units = 8U;
    msg.speed = 0.797956748103;
    msg.speed_units = 204U;
    msg.bearing = 0.121982734354;
    msg.cross_angle = 0.308232510718;
    msg.width = 0.363434179821;
    msg.length = 0.714375720816;
    msg.coff = 102U;
    msg.angaperture = 0.425800393082;
    msg.range = 49104U;
    msg.overlap = 8U;
    msg.flags = 44U;
    msg.custom.assign("WJNSAYFMOWAEDMILRQTEXZVSFOADQIFUEPL");

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
    msg.setTimeStamp(0.708223290466);
    msg.setSource(41447U);
    msg.setSourceEntity(6U);
    msg.setDestination(41459U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.505708477476;
    msg.lon = 0.0626706592613;
    msg.z = 0.405074484991;
    msg.z_units = 212U;
    msg.speed = 0.538658148709;
    msg.speed_units = 209U;
    msg.bearing = 0.869478526188;
    msg.cross_angle = 0.9906259234;
    msg.width = 0.241969956305;
    msg.length = 0.329660050285;
    msg.coff = 143U;
    msg.angaperture = 0.765404763826;
    msg.range = 9245U;
    msg.overlap = 12U;
    msg.flags = 150U;
    msg.custom.assign("UWGUXKAGBDCAHANFUVGZOTNIPRBJMALTSISTFVLGKMWRMBSANHOFDQXPNZLVTQYGIFFVXROLEZOZSEWDHXJVFHQSZSFYKIHDGWHCCLNUQQLGQURHQFBLMEYSYNENZJLMDRJHHJKBIDJZZPRKQJEUHIIXYPDREPUXBQTEFBUGK");

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
    msg.setTimeStamp(0.00416644298388);
    msg.setSource(30577U);
    msg.setSourceEntity(102U);
    msg.setDestination(28237U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.684347051966;
    msg.lon = 0.418911009543;
    msg.z = 0.808807841991;
    msg.z_units = 57U;
    msg.speed = 0.327342899343;
    msg.speed_units = 149U;
    msg.bearing = 0.490607363819;
    msg.width = 0.291865498935;
    msg.coff = 217U;
    msg.range = 35290U;
    msg.flags = 225U;
    msg.custom.assign("WMRIAXWKXHEPQIGDYPPSKKXZWNZOGDVWUFOVLRAAYKCDIMPNCKDENONCNGOKRBRGYDQDHEAEOIBRZOQAVHTMJJWMBFXJQOSIIETQYTHXHKFBUCTPYVOXVXAOWZYWDSKJFHUBYEAZTURNPWOIUVEAVJNLLKLMTBBBHSLGRFLRVCMLAQHCXNXUSZFQJJSYXQCTDVNZGPSMGEPULWZCJFTLHUIRDUBWDUPQQ");
    msg.hstep = 0.578962490097;

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
    msg.setTimeStamp(0.244639012563);
    msg.setSource(6960U);
    msg.setSourceEntity(160U);
    msg.setDestination(17570U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.620756201122;
    msg.lon = 0.553080838256;
    msg.z = 0.678492902331;
    msg.z_units = 19U;
    msg.speed = 0.600521902761;
    msg.speed_units = 139U;
    msg.bearing = 0.0531921963787;
    msg.width = 0.636665307835;
    msg.coff = 175U;
    msg.range = 48082U;
    msg.flags = 238U;
    msg.custom.assign("NLQWYEYRJRZCUHFYGIJENHHCJTZWHKLOYTNWDTTISKAQOIAMLAVMVSAPJYNLWGTZQIBECSTOVXCSGIUDGTUEZQQMXQRLHLSKFBGUHMBOKGQHZRBRYZNHWBRAMFSUJDWLMPNPXKRVJOWLUBXTYFRLBROEKMOXCLIZKXIVKVQUCAIPFRZCXSPDBFCSQDYPIDOUWMKYSXNCJEXSPWEHAIEDGFAJGH");
    msg.hstep = 0.799584528711;

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
    msg.setTimeStamp(0.294522692819);
    msg.setSource(21719U);
    msg.setSourceEntity(46U);
    msg.setDestination(18791U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.599610295817;
    msg.lon = 0.466954953439;
    msg.z = 0.650892193528;
    msg.z_units = 243U;
    msg.speed = 0.77097634316;
    msg.speed_units = 2U;
    msg.bearing = 0.607285381899;
    msg.width = 0.0102197402626;
    msg.coff = 178U;
    msg.range = 40167U;
    msg.flags = 32U;
    msg.custom.assign("UPRTQLELVQQXXOTKECMOGXAEDKYSOECZEJODWHYCGDHYIRGIESSZYJTMPEGDJJWLTKHYSIFNMXHEQXTFRBJADMAHMLOAIQRHGUIPXZSPCNTXMZWAJRLRGQFVFNPSFVAUWWUVSZDOKIWPQUVDQBJOHEIKMGNHCBUCHRGZTKRYLMTMRLWNSIVRUZKJVAZHNZOOWQSPGBBCBUEYBYDQFKMAPNNDDKUCLXLNFGTJXFVJFWYKWTIA");
    msg.hstep = 0.261103473542;

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
    msg.setTimeStamp(0.375786776985);
    msg.setSource(62382U);
    msg.setSourceEntity(47U);
    msg.setDestination(40007U);
    msg.setDestinationEntity(145U);
    msg.timeout = 63592U;
    msg.lat = 0.748576795409;
    msg.lon = 0.259110598894;
    msg.z = 0.567480821493;
    msg.z_units = 116U;
    msg.speed = 0.85030324817;
    msg.speed_units = 115U;
    msg.syringe0 = 215U;
    msg.syringe1 = 167U;
    msg.syringe2 = 114U;
    msg.custom.assign("MLYDVUNOIWRGVG");

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
    msg.setTimeStamp(0.127280843921);
    msg.setSource(46962U);
    msg.setSourceEntity(17U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(247U);
    msg.timeout = 41721U;
    msg.lat = 0.876372754555;
    msg.lon = 0.937074696903;
    msg.z = 0.328087015068;
    msg.z_units = 174U;
    msg.speed = 0.6042508963;
    msg.speed_units = 111U;
    msg.syringe0 = 237U;
    msg.syringe1 = 224U;
    msg.syringe2 = 137U;
    msg.custom.assign("UNAYMJWIFHEKGZHXSMYVMRQPIWCIERLYCQBIJXUFODXQFTIKIHA");

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
    msg.setTimeStamp(0.923219456065);
    msg.setSource(11456U);
    msg.setSourceEntity(156U);
    msg.setDestination(4389U);
    msg.setDestinationEntity(154U);
    msg.timeout = 14281U;
    msg.lat = 0.622167000628;
    msg.lon = 0.202054484466;
    msg.z = 0.167496846974;
    msg.z_units = 34U;
    msg.speed = 0.254834040465;
    msg.speed_units = 116U;
    msg.syringe0 = 83U;
    msg.syringe1 = 32U;
    msg.syringe2 = 28U;
    msg.custom.assign("KLIFXPSWVDHQNHXOOJKKANKTRRZXQJGMXLJMMRGBMNASNLYEBIHMDSWSISOGNXPDIRURVPFTXTDGYQQHYTRAPUXOMBTIZYQHGHCUJRYVFLGGVFNKQYJHZLDMMABJQZIXCJOQWFWGUHEAEWCAGQVSLWRYWD");

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
    msg.setTimeStamp(0.612534699059);
    msg.setSource(23173U);
    msg.setSourceEntity(170U);
    msg.setDestination(52439U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.12305667165);
    msg.setSource(19883U);
    msg.setSourceEntity(42U);
    msg.setDestination(4837U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.381128831842);
    msg.setSource(25252U);
    msg.setSourceEntity(11U);
    msg.setDestination(1113U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.305897816712);
    msg.setSource(37671U);
    msg.setSourceEntity(141U);
    msg.setDestination(8348U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.8481072971;
    msg.lon = 0.112029009149;
    msg.z = 0.086407326056;
    msg.z_units = 21U;
    msg.speed = 0.724156035839;
    msg.speed_units = 146U;
    msg.takeoff_pitch = 0.521922172434;
    msg.custom.assign("EQKIAOWWZJCHHHPKYINIGMBOKHXVGOQKVJDMMMLXTCRAUOZDNETEDVXNXECFPXAMWXTRTRRYFIJBCUGLJIYZGEJCCVZRLFWUHSYGGVWHPYXCAAFKVINQBUYBLQIKRRFQGPSENWEUJFCZWYAUSNUDADRNZHDEKTQXPPSPEWQOZNUVMMOSFSTTBLFOILFGJFBBHWDPKUKOYACCRSSGDAQQLMPNPXETOKYIQDGOLWTVLSBSYUJVJDX");

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
    msg.setTimeStamp(0.220692547216);
    msg.setSource(47199U);
    msg.setSourceEntity(128U);
    msg.setDestination(64512U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.391481000767;
    msg.lon = 0.661371090479;
    msg.z = 0.0759026494379;
    msg.z_units = 248U;
    msg.speed = 0.502868831813;
    msg.speed_units = 154U;
    msg.takeoff_pitch = 0.366054123894;
    msg.custom.assign("GOZPHWHJTZDZJGLHKIGCISUM");

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
    msg.setTimeStamp(0.701013545643);
    msg.setSource(64896U);
    msg.setSourceEntity(244U);
    msg.setDestination(25628U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.434781513499;
    msg.lon = 0.451510362631;
    msg.z = 0.357998204772;
    msg.z_units = 217U;
    msg.speed = 0.748025611737;
    msg.speed_units = 6U;
    msg.takeoff_pitch = 0.266577353063;
    msg.custom.assign("ZNXQHCXCKAWBSWDBREUAMSDGOVEQOLLEUEQMIRMVPHTSEYPPJLIDYWAUXXOLZPQOGDRYHECCZVAVLZNFMXGMSQXORYTBBNQWXDIHDAIPHN");

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
    msg.setTimeStamp(0.76965823735);
    msg.setSource(47327U);
    msg.setSourceEntity(185U);
    msg.setDestination(8627U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.267190048164;
    msg.lon = 0.665223928855;
    msg.z = 0.115756820797;
    msg.z_units = 86U;
    msg.speed = 0.87398935834;
    msg.speed_units = 65U;
    msg.abort_z = 0.831145562492;
    msg.bearing = 0.484633135057;
    msg.glide_slope = 224U;
    msg.glide_slope_alt = 0.289659106761;
    msg.custom.assign("NMLPVVWZNWDRDBMAKNJRZSHBLKYUVUTAUJCPYFVRRBXZGLNSGQKJPGIOTNJRKSSXIPJVELTUUKXUXALFGOJNGSPZQOWDUIWABYCBQUHDMEWOXINRTXOVTEQJLRBLDCPYNKCIOFAWQBGPTHZBPYGAAUBMSJUZMGCLTWQKXHKSJMHCQVPQZMVZEWWEDGOSGXYTSTDIQYIHHRMZAMXLBSOZOVAINIVDHDMNECPFCEF");

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
    msg.setTimeStamp(0.697750978476);
    msg.setSource(19749U);
    msg.setSourceEntity(100U);
    msg.setDestination(10711U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.0932382880857;
    msg.lon = 0.180139296635;
    msg.z = 0.198106590774;
    msg.z_units = 216U;
    msg.speed = 0.962234287825;
    msg.speed_units = 67U;
    msg.abort_z = 0.488996476114;
    msg.bearing = 0.0523453526267;
    msg.glide_slope = 98U;
    msg.glide_slope_alt = 0.356125994612;
    msg.custom.assign("LRJOCMHIANIXGFVMERHQRPFGMFYXBAUAARFAYEXFLOGQTECIDEHKWZNDIIYBCHZPENPDGIKYBSUDVYMRFGFJICKGNZJUXSFSHGCLBJUYZEXOHQEUAOJLHPYEMJWELXVZTDPSXWBHLCDMXVDTWKFANFUOOLAMVOZJSYBZHVGSMTSITZYUQCLRAZCXQTROCLMJRWLDVNQBIKBWKQUMSVGKGBPNQUUODWTKNRDKWEXJAHSTVRTKWQWNJVPZQP");

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
    msg.setTimeStamp(0.886984922375);
    msg.setSource(21473U);
    msg.setSourceEntity(76U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.0610285972024;
    msg.lon = 0.467696513724;
    msg.z = 0.54951716561;
    msg.z_units = 61U;
    msg.speed = 0.937824263309;
    msg.speed_units = 40U;
    msg.abort_z = 0.258360569001;
    msg.bearing = 0.544591299136;
    msg.glide_slope = 59U;
    msg.glide_slope_alt = 0.525385716992;
    msg.custom.assign("QGWEDFTKGODFZDTEKCLXDCJBIPWVYYAGQCNPUENQTXHDZBFINCODXWMQPUGMRJUKQCAOGEYAYSBOYZAOSJUZQHYMHSMSKIYFLBMMPZIKVKVLEHJVGMJBUHJXRVMOIEDQZGUEEPFEZYFOCAJVNLUUTIFBNWZONCLRTWRGPLRWLCAWKQSTEHYBTOVHNWADTI");

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
    msg.setTimeStamp(0.651001027754);
    msg.setSource(2382U);
    msg.setSourceEntity(140U);
    msg.setDestination(44865U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.795091234007;
    msg.lon = 0.400415100407;
    msg.speed = 0.363144674035;
    msg.speed_units = 30U;
    msg.limits = 128U;
    msg.max_depth = 0.307512154557;
    msg.min_alt = 0.70988302508;
    msg.time_limit = 0.188042174723;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.771602660006;
    tmp_msg_0.lon = 0.0754912851795;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("XJOSLWIUYTPORQRLIHGORMEDLXVASBLHWXZFMCHLNXHNUBAOEQIMGIBJOTTNVQSGQDVUZKZAYNUPKCHDGNFPVKFCHYLWPJ");
    msg.custom.assign("AUERZVRLRKEULZWPYOBOPVWLCFGXSRSVBMPJMKXBEHZECPHNFWTHOLADMFCXEWJTUOHQCAIQJQMDVHECTNVDSDJGDLIAOIZXRHBJBTTZIAKWNILPXIKFARMWRJWAUEFFIYSPLGUBDTHVGZBVUUIQVWSSCVZMHOFGQCYEQGNTKEUFZSNFQNUJOFXRPYQJALIDYNHXKKTMORCYPSBOJSEKNYWGHMMBZLDCAMYBC");

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
    msg.setTimeStamp(0.521576883786);
    msg.setSource(3070U);
    msg.setSourceEntity(30U);
    msg.setDestination(10554U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.877328380575;
    msg.lon = 0.766657018515;
    msg.speed = 0.16720534075;
    msg.speed_units = 164U;
    msg.limits = 91U;
    msg.max_depth = 0.884945877664;
    msg.min_alt = 0.911453966333;
    msg.time_limit = 0.217048940841;
    msg.controller.assign("JQCTSYJKQOSOEVEFNSGQRWGYJPGFBLJCMPCJIRBVBGKMXLJHWQYTUIMFAZCUNBXZVQFLATAYREXSROKDTDVKQLZNOQYAEOKRZBXXEACLIISFHWNCSYTGNZKQPEXD");
    msg.custom.assign("EOIFFVFFHXSDJEZOBGFJZVIXDVCACOFNKFBWDAHUNUBIUJRRTRPECCMYBZCSDYAVGCQREWSNPAC");

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
    msg.setTimeStamp(0.546583147737);
    msg.setSource(54717U);
    msg.setSourceEntity(65U);
    msg.setDestination(15575U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.137874210148;
    msg.lon = 0.896472320319;
    msg.speed = 0.0979227159574;
    msg.speed_units = 76U;
    msg.limits = 245U;
    msg.max_depth = 0.907411075162;
    msg.min_alt = 0.779005638629;
    msg.time_limit = 0.251587314463;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.351055476499;
    tmp_msg_0.lon = 0.743914660978;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DGNRLSMSUVCWHGSTRZXHVSQZYHBPEGVXYSXKWMNMOTSUKXTEXZKCVBAZDTIMILBJOMPCFXLDGFFCQFKOUTEAFDDVDRWKKLBJMNVGLYQOOFWJQQEPEZIZHGLGEQNRJHYFBARTLVIYTPMXXBJKYLNLURNEUCDAMHKSMCEHBQSYUNAJRVVQOBGWNALQPOJFPJSWDWQRWBUNZPJRECKHBEPI");
    msg.custom.assign("ZPQQUVYRKVWUKTITRZFWYJBMGOVABTQIQBBSDVJISDPWSLELHXCKOEHTIAGCMDMHCEAYECJVDASDKWRJNOMNTEJFTATAVRBZPVUYTNGEHBLFLJPXAXQIMJAMGLEIHZQDXSWZFYVKFPUYBO");

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
    msg.setTimeStamp(0.588646166289);
    msg.setSource(58752U);
    msg.setSourceEntity(26U);
    msg.setDestination(6326U);
    msg.setDestinationEntity(82U);
    msg.target.assign("GQOKMVSZFMAILXCSQJWGRICQBTAGTUCGYGWXFXXCEXHDSFZKYMLYJCMZOIUSLOCUHBOIEFEEKBOVPVTOYZLYWXOKGJRV");
    msg.max_speed = 0.0495359040693;
    msg.speed_units = 114U;
    msg.lat = 0.122850085168;
    msg.lon = 0.984575242764;
    msg.z = 0.200360763824;
    msg.z_units = 50U;
    msg.custom.assign("JJPVSFSGFPFXQFPPHQYQTXKHJNRLWVCMAMLSIIQGPNKVQEEMB");

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
    msg.setTimeStamp(0.193063728315);
    msg.setSource(65532U);
    msg.setSourceEntity(202U);
    msg.setDestination(23008U);
    msg.setDestinationEntity(107U);
    msg.target.assign("WIQZHGGQIVHBZRURHPFBFXJNDXNMGAIPXHETGTXKQBFONYEJBVCCKEUZSKJTAIXZWYFBDDSFJLOKHGACJMRLJNXSQKBEPLLHMABCIYZRMQHJUKZWPGKRZVE");
    msg.max_speed = 0.155964570198;
    msg.speed_units = 121U;
    msg.lat = 0.309473756963;
    msg.lon = 0.49078360257;
    msg.z = 0.110481015453;
    msg.z_units = 5U;
    msg.custom.assign("WMVSPLDIOIGSHDVNXOFFQNPKOAOKQIRAYUDEWSGPLZQRTFNBNMSBCFCNDYZKPZEFHQBYFEREGAHODBKXWDSUDZKCGAALEXRNZIJEPJMSHJSPXR");

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
    msg.setTimeStamp(0.706800969009);
    msg.setSource(54475U);
    msg.setSourceEntity(1U);
    msg.setDestination(4710U);
    msg.setDestinationEntity(138U);
    msg.target.assign("UKHCZHIPHDZXJANXJXGFFAKRCEQKGEEWIBJJFTBEXR");
    msg.max_speed = 0.993358611539;
    msg.speed_units = 139U;
    msg.lat = 0.908634782711;
    msg.lon = 0.58749979769;
    msg.z = 0.599263256452;
    msg.z_units = 151U;
    msg.custom.assign("BDDMPNFCTUPHFZDFOYQFZTNJENFYJRFCVJXJOZSOJTLXKYEWSTNKIHWJVCKOZMGHLAJRGDLQUUMTALGYHHEKGOTBEYTIPYYDAQIAXDDZWICWBGAULLWLLFKUAPXKHRXNWZSWGUKUNOZZYJBBVFVMMIIHVOTHVPGBICR");

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
    msg.setTimeStamp(0.91063211177);
    msg.setSource(8506U);
    msg.setSourceEntity(85U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(60U);
    msg.timeout = 59748U;
    msg.lat = 0.707689688674;
    msg.lon = 0.0402116570499;
    msg.speed = 0.478877380927;
    msg.speed_units = 182U;
    msg.custom.assign("MSVSFNTYSAY");

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
    msg.setTimeStamp(0.355853032643);
    msg.setSource(50159U);
    msg.setSourceEntity(219U);
    msg.setDestination(14777U);
    msg.setDestinationEntity(185U);
    msg.timeout = 47734U;
    msg.lat = 0.352744939507;
    msg.lon = 0.0291557862769;
    msg.speed = 0.745235028908;
    msg.speed_units = 229U;
    msg.custom.assign("KXOYEEOEXBTQGJZSDLZLSCWDAWNVWYWSEDEYWJNAWBVBUYZMNXLS");

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
    msg.setTimeStamp(0.0235162026593);
    msg.setSource(27950U);
    msg.setSourceEntity(30U);
    msg.setDestination(61187U);
    msg.setDestinationEntity(73U);
    msg.timeout = 58878U;
    msg.lat = 0.533822538465;
    msg.lon = 0.70970147922;
    msg.speed = 0.396400387869;
    msg.speed_units = 26U;
    msg.custom.assign("ATXCJSYBNYNCAYBEJZSBDGTDTC");

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
    msg.setTimeStamp(0.658702697881);
    msg.setSource(33513U);
    msg.setSourceEntity(48U);
    msg.setDestination(26642U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.556954046365;
    msg.lon = 0.885754242133;
    msg.z = 0.843208507169;
    msg.z_units = 113U;
    msg.radius = 0.783893829416;
    msg.duration = 12242U;
    msg.speed = 0.178056127977;
    msg.speed_units = 208U;
    msg.popup_period = 60959U;
    msg.popup_duration = 61727U;
    msg.flags = 102U;
    msg.custom.assign("MXTJZVUTMCVUPQLJTEOUHLCWTVEZAXXNWXSLQEKRRTR");

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
    msg.setTimeStamp(0.433163774372);
    msg.setSource(21526U);
    msg.setSourceEntity(174U);
    msg.setDestination(2196U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.133447622323;
    msg.lon = 0.172351167013;
    msg.z = 0.194888343178;
    msg.z_units = 34U;
    msg.radius = 0.218760557981;
    msg.duration = 12229U;
    msg.speed = 0.124900842795;
    msg.speed_units = 113U;
    msg.popup_period = 31173U;
    msg.popup_duration = 58648U;
    msg.flags = 14U;
    msg.custom.assign("YAQUDPBKGEIYXEMJCAQVHKIKCHJEIYESYDRIJMYU");

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
    msg.setTimeStamp(0.0425681790215);
    msg.setSource(6821U);
    msg.setSourceEntity(187U);
    msg.setDestination(39413U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.164410953865;
    msg.lon = 0.157519635257;
    msg.z = 0.328376358049;
    msg.z_units = 77U;
    msg.radius = 0.580118568487;
    msg.duration = 20837U;
    msg.speed = 0.820775656935;
    msg.speed_units = 52U;
    msg.popup_period = 27554U;
    msg.popup_duration = 4155U;
    msg.flags = 101U;
    msg.custom.assign("PLXGPLCZUJISAWGSNTPGCABFUDIIFYOEAXXOFSZXIQPZUGKGBETIHDSVWGUSCOQPXMQCEJUREGUXJQREQBNHWJMREOKTRDMVPTVYCCSQLEGKALKUWNCAWOGCUSJLZTEMQDXAHKZRHBETBYXTDYHGRANOLZWDMIZHZFRRDDCJAJJHMVJPVYNDJQHVFLWMBLNNFIVNTDFYLNFOKYFHKPT");

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
    msg.setTimeStamp(0.461985328442);
    msg.setSource(48471U);
    msg.setSourceEntity(4U);
    msg.setDestination(54327U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.933270736002);
    msg.setSource(15344U);
    msg.setSourceEntity(56U);
    msg.setDestination(50014U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.861784212418);
    msg.setSource(28155U);
    msg.setSourceEntity(122U);
    msg.setDestination(6059U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.697143378206);
    msg.setSource(18158U);
    msg.setSourceEntity(173U);
    msg.setDestination(46020U);
    msg.setDestinationEntity(241U);
    msg.timeout = 31132U;
    msg.lat = 0.218630202599;
    msg.lon = 0.283968109724;
    msg.z = 0.520805353616;
    msg.z_units = 160U;
    msg.speed = 0.920634077089;
    msg.speed_units = 3U;
    msg.bearing = 0.753789564725;
    msg.width = 0.187843749377;
    msg.direction = 203U;
    msg.custom.assign("YOAGWJLAQCMJLRXWUUCYSPQMQPFJXIVDMIBJSBKBXNTHOTLVBZOVGEDAIULZJTMRNBVFHCXXULEQNRIVDGPAALYZGVPMHOKYRQFKCSVSSCNYLUTNIYDZLTKOXLEFGODGRSWCFFSATJSJJEERSZTNEPTHECRFBKC");

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
    msg.setTimeStamp(0.413944839062);
    msg.setSource(18643U);
    msg.setSourceEntity(89U);
    msg.setDestination(45290U);
    msg.setDestinationEntity(39U);
    msg.timeout = 43675U;
    msg.lat = 0.886720704442;
    msg.lon = 0.760201574408;
    msg.z = 0.266348672669;
    msg.z_units = 105U;
    msg.speed = 0.857778926788;
    msg.speed_units = 224U;
    msg.bearing = 0.34449144237;
    msg.width = 0.575858203979;
    msg.direction = 70U;
    msg.custom.assign("UJHGMZUFUZEFQYCCHFLDIZNHAJJHPDCALMPRHBRIYWFYXSEAJEIVDJGCREGUMMYVVMOTSMXVZOWXTFZEALCOSXBWUKAVCQYKWPOQXNRDMOIGXPPZNIGOBEKNXVXZEFWFGBYDKUBFRHJQLKZOASMZROYEWGOSLXYWKTLPUHDIVNYAVJEQNSNNUTBBAN");

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
    msg.setTimeStamp(0.992288120244);
    msg.setSource(5399U);
    msg.setSourceEntity(199U);
    msg.setDestination(29133U);
    msg.setDestinationEntity(235U);
    msg.timeout = 41910U;
    msg.lat = 0.254330951284;
    msg.lon = 0.380971156282;
    msg.z = 0.142904514078;
    msg.z_units = 53U;
    msg.speed = 0.643808951522;
    msg.speed_units = 38U;
    msg.bearing = 0.414105547992;
    msg.width = 0.320318199832;
    msg.direction = 97U;
    msg.custom.assign("ZBLYCEUPLZWWOQIOKOGHHMTMTGICFCAZRYIEXUPPGBNFZLQLFAVWPOGUCIXSYZQKXFVXCJECPMIDRTBOXLWBFGFQBTNIVCONKJYXDHDVSHYCKMIJTDXOGATLALMOEBHJROISXRYBNSNUGSBPVUNNZVJKTMTHYYDAQWGEDJZRRKEPDSAHXDBDZONDHMAJJWWSKYVZAWSUTMRFXEPRJUIVRGHLWQFRFCLVLNUYHMASQKK");

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
    msg.setTimeStamp(0.693553285399);
    msg.setSource(39220U);
    msg.setSourceEntity(235U);
    msg.setDestination(4731U);
    msg.setDestinationEntity(206U);
    msg.op_mode = 197U;
    msg.error_count = 86U;
    msg.error_ents.assign("ISOAGRHKXECNH");
    msg.maneuver_type = 59856U;
    msg.maneuver_stime = 0.819487527312;
    msg.maneuver_eta = 15845U;
    msg.control_loops = 2333793108U;
    msg.flags = 196U;
    msg.last_error.assign("UJWBBBMJPHUJHRYYRFRHCWFJVCSLTRMVYAELDKELKYXOTDPSFSQRKISOVMBDKKBEFHOZWCICZHPQTLQVNSVMJLLNWAGWMDALPDADUMTPFKJZEWBGKWGDVNEXLLNTBZEVNSPRQC");
    msg.last_error_time = 0.72026522757;

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
    msg.setTimeStamp(0.863742277367);
    msg.setSource(5369U);
    msg.setSourceEntity(73U);
    msg.setDestination(62711U);
    msg.setDestinationEntity(202U);
    msg.op_mode = 46U;
    msg.error_count = 253U;
    msg.error_ents.assign("CELNNMLJUYZHTKQZOEUOODIJFAHZINYWNXMRUMBEXQHV");
    msg.maneuver_type = 43605U;
    msg.maneuver_stime = 0.173554879063;
    msg.maneuver_eta = 31769U;
    msg.control_loops = 1625609796U;
    msg.flags = 37U;
    msg.last_error.assign("YITXLVFXGZKJNWJICXEUJKNDEGEFFOQCZJQCMPTLWSUTOLBMAOPEAKDSYWYUHBIYLNXZQYWTIKQYVFTMAPXHOVORNUJQZFPVUYGENDMJNHGCQBRSXWSKQHLYFVZAODWAEHDDDPINPURERDBMGOSPKWQSNAJGMBCVBQMTDHILKXMWATEZAZKNCJIHRPWNGBHLRZBIUSVVFUIG");
    msg.last_error_time = 0.235891481794;

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
    msg.setTimeStamp(0.309787552407);
    msg.setSource(23582U);
    msg.setSourceEntity(166U);
    msg.setDestination(50497U);
    msg.setDestinationEntity(50U);
    msg.op_mode = 69U;
    msg.error_count = 128U;
    msg.error_ents.assign("FOJNYCHMOVNIQMGQRSWYSJFNXVCGBHIDLOVLWFAEQXZAWFVWGEMNLRCUCBHHRVATJOAYDVQRQWJGPWYEQFWXPRJWQICPZBH");
    msg.maneuver_type = 60733U;
    msg.maneuver_stime = 0.185897250354;
    msg.maneuver_eta = 41164U;
    msg.control_loops = 1874473473U;
    msg.flags = 217U;
    msg.last_error.assign("VIOBBVKSFFHRXHTBIJOCKQDUKCGPWIUOZYPSGWMEWSHUVQKHJEKITNTFNP");
    msg.last_error_time = 0.751020629994;

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
    msg.setTimeStamp(0.56461732132);
    msg.setSource(43001U);
    msg.setSourceEntity(2U);
    msg.setDestination(24459U);
    msg.setDestinationEntity(115U);
    msg.type = 4U;
    msg.request_id = 4389U;
    msg.command = 69U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.866108704062;
    tmp_msg_0.lon = 0.789799132394;
    tmp_msg_0.z = 0.710455625287;
    tmp_msg_0.z_units = 38U;
    tmp_msg_0.speed = 0.745905877478;
    tmp_msg_0.speed_units = 176U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 51409U;
    tmp_tmp_msg_0_0.off_x = 0.406053058468;
    tmp_tmp_msg_0_0.off_y = 0.358702746582;
    tmp_tmp_msg_0_0.off_z = 0.0483966974576;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.961930222281;
    tmp_msg_0.custom.assign("EXWHXWUTGEGLZUARKWAXENZAOLRQQDEKRPHWRRBJBOINPXGYFWQKIFYFMIDJZUCWNQOXBNYUUBMMNJPEMSUMDXOBIYKVZDSKGQDWRYSMEFJBGHAGZMSHFRKOCOLYQSXZEYFGCTRVAYSCZHBLL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28552U;
    msg.info.assign("RSSAPVYXXLSLNURNDUPZQPWLEKSVXRXNAOWWGVJTUTKGZIITRNZSBCMIEFRKFJVHHBDUORUBOXKHHCZVTHDEURQXSEWJMANDYSLLYOHMPLNLTRLVGOGGOIEJQBGEGDWQZIFOQBMXFQDFCPSWFCPITKYXHKBTPANKJYJTSJWQOCGWJDXWYMVOFYZMUVAPQCBHJOICMKIQEQFHFRAUNBXAIAMYELHUVTPPSCGBCBAZUWRYJFZVTN");

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
    msg.setTimeStamp(0.289098405777);
    msg.setSource(39326U);
    msg.setSourceEntity(206U);
    msg.setDestination(1625U);
    msg.setDestinationEntity(131U);
    msg.type = 211U;
    msg.request_id = 49406U;
    msg.command = 250U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 64257U;
    tmp_msg_0.rpm = 0.867826855517;
    tmp_msg_0.direction = 107U;
    tmp_msg_0.custom.assign("AVTLCBTBHNCSBIHPDWNDTJHVKUWKCLLDPZVQNUNWTOQHMVOCBAEGASLZYROGPGULEJZGJJRJTHCTMEFFWSVXTUTKQJYAIYQILVDUMAICVXFVXUIMXOMDEODMKMAKKRPFENEJGMYWFBQHAOCJILMNOUPEQAZQIKGCKYSQIFDRRJGEWOXXWDPYNRASZPVWZTCBHFDHWIBTNSIDLENVGPZQYRORYGXZURLYFYKJLBFNEXAM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2156U;
    msg.info.assign("ISECZJKPLKJZFZAJPQTLREHCJUVYINVMIVRCDSXWUARIMGDQDSQXNVBPXWQBRUOAMZFOATWYDBVTFZYYZTRFEPGMEHVSKHZSTNLXDGKGFSFZDXRKYAFRQKPNWMTFBSBUXGCLJEUKFBGBIATNSZVHIMYOXDRQ");

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
    msg.setTimeStamp(0.523775384452);
    msg.setSource(26205U);
    msg.setSourceEntity(134U);
    msg.setDestination(18875U);
    msg.setDestinationEntity(202U);
    msg.type = 53U;
    msg.request_id = 33285U;
    msg.command = 172U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 9755U;
    tmp_msg_0.lat = 0.882618179694;
    tmp_msg_0.lon = 0.864909799015;
    tmp_msg_0.z = 0.103338264597;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.00400696566872;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.custom.assign("NXDYIHSHEJNPAJHHEDDGRCWROGKMJTYVLAUKQYCZCVAPCPDGRVCAINHRLBMNUXTNJPTYWTMBIJUPTTIEFOWNVSSXMGPUQPXRGKGGOAUBOVFQYQMREFHDZFCYQOSOQXEKFKRYBBFUWXMLHZGUIXTQEUFANXADATUTYZKPIFMVHPWOGMZJRZYZWFLLCEBKKHKGSDQCSQEVJBZNYJIFXVXRBKOCOBWDIQSAPIVEZLMLNMLWORVCJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58519U;
    msg.info.assign("PKLDCNPKVFAONIYVXWRBMJDPFZLRYGGGBEPRCNSIZZPJKBIXJBMVOSCHXHYMRAHSLUCPIIZIVKBZWXDQOTLNNNLQVHNKGFQFHIWRCSAXJEKPZWHEXHQXSFUIDEEFTKUUBJTFETQSXOHLACTOVBFGITXBWUBBGOQLDWYTKFKRMYMOPERGAALDTVZZSYU");

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
    msg.setTimeStamp(0.400332113314);
    msg.setSource(42164U);
    msg.setSourceEntity(19U);
    msg.setDestination(57314U);
    msg.setDestinationEntity(191U);
    msg.command = 81U;
    msg.entities.assign("AJIURATGDYSVHTMDNDKOESPFONYZDXBYQWHRJJCUNEXWKDKIFZKZWMFBAVMTGFAJREVWLAQDLBVLVNERUCVQULWRUTSNDBEIJMQOUOESGDITWZYTGHMKNUCSSBPIXGJZCSFLRIOPMLKAWXOQJFFGTGKAKTKPEFBXVXEXXEZHQMXUZHCQORYJWNLEPDQPSMLGIATYBIHZFOOVRQBDRCXFBJHPWAN");

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
    msg.setTimeStamp(0.401984728656);
    msg.setSource(62507U);
    msg.setSourceEntity(251U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(210U);
    msg.command = 118U;
    msg.entities.assign("MWDSHOOYVXMDLBSIROZLIBPILUIFZZAKKKQNHAKCFNSKXTYNXMYIUATPTJLQDUCBLZMZEFDCNTMDXUNVFJXEE");

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
    msg.setTimeStamp(0.134498618269);
    msg.setSource(40790U);
    msg.setSourceEntity(99U);
    msg.setDestination(58536U);
    msg.setDestinationEntity(105U);
    msg.command = 126U;
    msg.entities.assign("GFVDQQJTYFQHUOBPTGPUFGKBJZZAVLEFAZMOMAYXCKRCTCRRIBLSCNSGBPZPOKABIPOLHDDDHVJYLTHUDMDHDQKLCHAKIURVWNWQCLEATGRHMYFBLBTQNZQKYOURWKXSKSDBWZERGZCOB");

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
    msg.setTimeStamp(0.69187595335);
    msg.setSource(54699U);
    msg.setSourceEntity(107U);
    msg.setDestination(43501U);
    msg.setDestinationEntity(160U);
    msg.mcount = 167U;
    msg.mnames.assign("NXLKCWFYREODJIKASFVTOCHLAGRNFKXLDKYHCQFISGVZBLMVODFCITVUSLNMXBSEEIKNZXUWQUXHKUXXVPMOORZHBQTBCSUJFZWOUTNEHKYTMBJQJYNSKPLLWDMDQIWRGCVBKRIBSVPVHLHGQKIDNTSGWPRAASEEWAAOYXQWORJPLINDDGWTXNCJMDMZUPEDFHTPPZHTCJQBPAOUMZGZFJFTAE");
    msg.ecount = 1U;
    msg.enames.assign("OZAZDBYPCNUMYEGCANUKSBIIGSPDCDIEDSJERWRSTAZKPUAOOYKXZMLTQCBRA");
    msg.ccount = 43U;
    msg.cnames.assign("HQVBMJXMZWWIBBBLULWXETUHQMGGHYHYCIOKFNKUEISBVDTFKQRACWCTMXD");
    msg.last_error.assign("CTMCRRPYLLYHALVEHOTJTFYXJBTDVIKOZCGABJHIQDZYZFJQUKEHHAUCV");
    msg.last_error_time = 0.592357968436;

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
    msg.setTimeStamp(0.221091238787);
    msg.setSource(13026U);
    msg.setSourceEntity(179U);
    msg.setDestination(20591U);
    msg.setDestinationEntity(218U);
    msg.mcount = 234U;
    msg.mnames.assign("KDTPEVQRUOCONOHGGWGPMEAIYDPKTOKVSWCLZUJORIFJCPYIBMOBENGYQNMWBIRVEXCDAAXWNFWFOPAFLSLAGVTALYJQIWACHYUHOSECAKKLHHSGCSRQXDBRTNWMNHKBQJXDXXJBPUPZWEZAHVVXZXFQYTRMGQMZQIYJCUEZHJMUHJKIORRDIUCETNVBVZVGKEPZNWURTZSBGLTRYSSVWM");
    msg.ecount = 232U;
    msg.enames.assign("ILOTICPEMRSBNOCBONFXP");
    msg.ccount = 149U;
    msg.cnames.assign("LQKUGTCEWEIENLXQCSVZBVUSNZLLIOPDXYAIDLJTHXCYGHFUUESJIFKUBRIAGHRDRAMNSWHLYMHPVDGYQMALHXCUWSCNYNHKNUIIMJFGQWSEOJCPNXWPGCAFGZNVKBGUUPDGBMBJKVWMBEDQTAKFYQYPFVDMPNOBPXFWRVXNESDRX");
    msg.last_error.assign("LSBHCDYZMZMHWZGPZOXTRJYFWLXVVFUGSGQCLPNRFYOFNLKATEIXBZFBATERFCFDBQAVVTBCMQHWAZLIXQWJDKEAFIOINXZNUSPAVRGSUCUQKSKXUQIASBSWRIBZTABTXITMAFRCMUWYEZKWPXPVURXLMYZHIYQSRVFKGKCHGTJMJDOQBHEGOPHKDLYEDJKBPKHDUTMRDCOEWJW");
    msg.last_error_time = 0.997731767742;

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
    msg.setTimeStamp(0.187230324556);
    msg.setSource(58584U);
    msg.setSourceEntity(171U);
    msg.setDestination(53536U);
    msg.setDestinationEntity(29U);
    msg.mcount = 215U;
    msg.mnames.assign("PYVYZONAXUFZUWCZBXFPLIJGADOTOFDYUVARLDBQBTEUMIHJXDFJQVH");
    msg.ecount = 28U;
    msg.enames.assign("GCYQZVHMNJBGAHHJTXQCVQBE");
    msg.ccount = 208U;
    msg.cnames.assign("WGQLEYAMNSKCZVPEDBKDAROLMHDCTRNOZNCQWRPEEJTWJHEFUMUGUBQPRZRLIMGNGDBJUYLXQIDCYWFCXMLOGOVZESDZJGYMWGUGHEIRCDXXIQSNESUHXPQHZDTEVEGFSVBJROFWLXXCMIYKUWOKACNOITJTSHQDBPNKPPUHOVBGIBCLFHAQIJTZSKYXYAKRLT");
    msg.last_error.assign("BYVYDOZQRNJUFBOLXTNABK");
    msg.last_error_time = 0.609946017434;

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
    msg.setTimeStamp(0.892258884408);
    msg.setSource(55868U);
    msg.setSourceEntity(169U);
    msg.setDestination(17323U);
    msg.setDestinationEntity(104U);
    msg.mask = 40U;
    msg.max_depth = 0.403848947226;
    msg.min_altitude = 0.390830645013;
    msg.max_altitude = 0.308314046066;
    msg.min_speed = 0.790536975521;
    msg.max_speed = 0.072479688636;
    msg.max_vrate = 0.883818448026;
    msg.lat = 0.190628324159;
    msg.lon = 0.570630992829;
    msg.orientation = 0.597566328002;
    msg.width = 0.892601123171;
    msg.length = 0.291157368418;

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
    msg.setTimeStamp(0.491131465537);
    msg.setSource(44417U);
    msg.setSourceEntity(199U);
    msg.setDestination(11237U);
    msg.setDestinationEntity(150U);
    msg.mask = 220U;
    msg.max_depth = 0.538892464604;
    msg.min_altitude = 0.659507161958;
    msg.max_altitude = 0.615986165122;
    msg.min_speed = 0.725757815616;
    msg.max_speed = 0.391547247209;
    msg.max_vrate = 0.782166921866;
    msg.lat = 0.659317061875;
    msg.lon = 0.634379898329;
    msg.orientation = 0.00692483232491;
    msg.width = 0.678452422363;
    msg.length = 0.860286739257;

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
    msg.setTimeStamp(0.226271108713);
    msg.setSource(29231U);
    msg.setSourceEntity(183U);
    msg.setDestination(59124U);
    msg.setDestinationEntity(150U);
    msg.mask = 33U;
    msg.max_depth = 0.055465348861;
    msg.min_altitude = 0.657572450556;
    msg.max_altitude = 0.0680041041484;
    msg.min_speed = 0.354182820933;
    msg.max_speed = 0.194212604102;
    msg.max_vrate = 0.637039341925;
    msg.lat = 0.300712053089;
    msg.lon = 0.0131711562106;
    msg.orientation = 0.0102794460028;
    msg.width = 0.7533901885;
    msg.length = 0.642368890609;

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
    msg.setTimeStamp(0.373288427813);
    msg.setSource(47026U);
    msg.setSourceEntity(169U);
    msg.setDestination(28079U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.463609740378);
    msg.setSource(29321U);
    msg.setSourceEntity(120U);
    msg.setDestination(56467U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.921313154576);
    msg.setSource(27114U);
    msg.setSourceEntity(18U);
    msg.setDestination(467U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.25541669221);
    msg.setSource(40371U);
    msg.setSourceEntity(190U);
    msg.setDestination(51344U);
    msg.setDestinationEntity(98U);
    msg.duration = 61489U;

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
    msg.setTimeStamp(0.382150323299);
    msg.setSource(21529U);
    msg.setSourceEntity(185U);
    msg.setDestination(53675U);
    msg.setDestinationEntity(165U);
    msg.duration = 55292U;

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
    msg.setTimeStamp(0.0992508255845);
    msg.setSource(25086U);
    msg.setSourceEntity(89U);
    msg.setDestination(27888U);
    msg.setDestinationEntity(186U);
    msg.duration = 5912U;

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
    msg.setTimeStamp(0.17533167905);
    msg.setSource(13237U);
    msg.setSourceEntity(3U);
    msg.setDestination(47441U);
    msg.setDestinationEntity(138U);
    msg.enable = 20U;
    msg.mask = 2870116501U;
    msg.scope_ref = 363831767U;

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
    msg.setTimeStamp(0.371317363796);
    msg.setSource(40529U);
    msg.setSourceEntity(155U);
    msg.setDestination(52700U);
    msg.setDestinationEntity(166U);
    msg.enable = 52U;
    msg.mask = 1254628212U;
    msg.scope_ref = 3752296189U;

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
    msg.setTimeStamp(0.980886309398);
    msg.setSource(30375U);
    msg.setSourceEntity(249U);
    msg.setDestination(65496U);
    msg.setDestinationEntity(114U);
    msg.enable = 111U;
    msg.mask = 3183079774U;
    msg.scope_ref = 2850959282U;

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
    msg.setTimeStamp(0.239788356156);
    msg.setSource(19937U);
    msg.setSourceEntity(39U);
    msg.setDestination(25966U);
    msg.setDestinationEntity(41U);
    msg.medium = 119U;

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
    msg.setTimeStamp(0.653548656917);
    msg.setSource(11426U);
    msg.setSourceEntity(212U);
    msg.setDestination(59109U);
    msg.setDestinationEntity(109U);
    msg.medium = 13U;

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
    msg.setTimeStamp(0.689226253064);
    msg.setSource(29282U);
    msg.setSourceEntity(87U);
    msg.setDestination(26213U);
    msg.setDestinationEntity(97U);
    msg.medium = 66U;

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
    msg.setTimeStamp(0.72356842319);
    msg.setSource(23927U);
    msg.setSourceEntity(200U);
    msg.setDestination(55312U);
    msg.setDestinationEntity(27U);
    msg.value = 0.879352302869;
    msg.type = 47U;

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
    msg.setTimeStamp(0.30037870433);
    msg.setSource(6836U);
    msg.setSourceEntity(97U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(163U);
    msg.value = 0.326915806168;
    msg.type = 149U;

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
    msg.setTimeStamp(0.39639251675);
    msg.setSource(52606U);
    msg.setSourceEntity(42U);
    msg.setDestination(24333U);
    msg.setDestinationEntity(19U);
    msg.value = 0.879104817701;
    msg.type = 7U;

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
    msg.setTimeStamp(0.13544762857);
    msg.setSource(42062U);
    msg.setSourceEntity(5U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.028989807514;
    msg.converg = 0.500414516974;
    msg.turbulence = 0.602612515681;
    msg.possimmon = 202U;
    msg.commmon = 254U;
    msg.convergmon = 105U;

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
    msg.setTimeStamp(0.812850702225);
    msg.setSource(7849U);
    msg.setSourceEntity(240U);
    msg.setDestination(60120U);
    msg.setDestinationEntity(210U);
    msg.possimerr = 0.109157625482;
    msg.converg = 0.993340120152;
    msg.turbulence = 0.0939030380223;
    msg.possimmon = 50U;
    msg.commmon = 217U;
    msg.convergmon = 175U;

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
    msg.setTimeStamp(0.0593297616519);
    msg.setSource(30336U);
    msg.setSourceEntity(65U);
    msg.setDestination(46644U);
    msg.setDestinationEntity(150U);
    msg.possimerr = 0.379541432083;
    msg.converg = 0.500830617365;
    msg.turbulence = 0.395221185288;
    msg.possimmon = 93U;
    msg.commmon = 154U;
    msg.convergmon = 55U;

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
    msg.setTimeStamp(0.778026336134);
    msg.setSource(21530U);
    msg.setSourceEntity(67U);
    msg.setDestination(37681U);
    msg.setDestinationEntity(174U);
    msg.autonomy = 20U;
    msg.mode.assign("VPAESHGJSLRQISOUOQXFRUUGQKBZFUHWHKEXONVJCIXWRLJGKOMPWEWBZTXHENASRVYZLMTJCMIYOOZNQIXAUAMNTNCKVNOKWQXFNZZMXKGNMPISFTHVTWFGPGLVPPRWVMEXYEBUDWDAWBIOYI");

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
    msg.setTimeStamp(0.452663797402);
    msg.setSource(44265U);
    msg.setSourceEntity(212U);
    msg.setDestination(40317U);
    msg.setDestinationEntity(225U);
    msg.autonomy = 84U;
    msg.mode.assign("EBALAVUOADQYXEFAWRVIPSVVTLOLSMWUYZTDUDHFPMZRJVQOHWUSEPGFFTACXDNRDGRXGVYAHPYJNGKOUIHAKXGYWMTOMJANQBZ");

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
    msg.setTimeStamp(0.648911240985);
    msg.setSource(57040U);
    msg.setSourceEntity(94U);
    msg.setDestination(45215U);
    msg.setDestinationEntity(156U);
    msg.autonomy = 214U;
    msg.mode.assign("ELQALNHTMXOCDCWTZVMFRHQECHLEADABQAJRWLVCUXKJGBNGYWWCOIPRONASONZIFHVVPPACBPSIITZQFECJPWFDFRNZWHYKBHZYNTELMHA");

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
    msg.setTimeStamp(0.613378260143);
    msg.setSource(7896U);
    msg.setSourceEntity(163U);
    msg.setDestination(5485U);
    msg.setDestinationEntity(44U);
    msg.type = 93U;
    msg.op = 69U;
    msg.possimerr = 0.730492187126;
    msg.converg = 0.537026438108;
    msg.turbulence = 0.449760343147;
    msg.possimmon = 37U;
    msg.commmon = 65U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.401230253408);
    msg.setSource(61113U);
    msg.setSourceEntity(165U);
    msg.setDestination(54739U);
    msg.setDestinationEntity(244U);
    msg.type = 89U;
    msg.op = 51U;
    msg.possimerr = 0.333296371013;
    msg.converg = 0.817953515636;
    msg.turbulence = 0.945094654288;
    msg.possimmon = 113U;
    msg.commmon = 189U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.375092497984);
    msg.setSource(41208U);
    msg.setSourceEntity(65U);
    msg.setDestination(18197U);
    msg.setDestinationEntity(11U);
    msg.type = 129U;
    msg.op = 193U;
    msg.possimerr = 0.295224100256;
    msg.converg = 0.836077688798;
    msg.turbulence = 0.972808032089;
    msg.possimmon = 18U;
    msg.commmon = 95U;
    msg.convergmon = 170U;

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
    msg.setTimeStamp(0.510415966467);
    msg.setSource(55245U);
    msg.setSourceEntity(72U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(72U);
    msg.op = 31U;
    msg.comm_interface = 203U;
    msg.period = 13586U;
    msg.sys_dst.assign("LVLVYAGXRRZVMZGAHHOSRJZXCYREKYRUHNBAVCUTFHDMOYRETIVLUCHMFLQLNJGRUWQEIALBAEWEWSLHNDPEOVXHFMGJPKJBGITITCKFIJSIMDYBPQZLGJZMETWHOEUFNCBB");

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
    msg.setTimeStamp(0.116529130205);
    msg.setSource(825U);
    msg.setSourceEntity(130U);
    msg.setDestination(31452U);
    msg.setDestinationEntity(132U);
    msg.op = 102U;
    msg.comm_interface = 135U;
    msg.period = 56074U;
    msg.sys_dst.assign("HBRJSUWSSHBNOKIVRQWLJIUTAKAPYWNYGXEHWZPCCRNRIKSEAYTDKVBGHIAPQLGMXALELXJCSEVNZUEMVZFBDYATTGGFWCJXXOSKAFBNYNHKXFYCOJTBVMMJFQWONGIZXIRYLPPWMQRGHMDJVJYEHNORDIBEWHAQRKUBLLUQCTZEKJOLXSYOZZIZZUNLCUVDMWF");

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
    msg.setTimeStamp(0.257699146939);
    msg.setSource(40529U);
    msg.setSourceEntity(160U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(177U);
    msg.op = 100U;
    msg.comm_interface = 61U;
    msg.period = 50625U;
    msg.sys_dst.assign("XETWKFQJDOOVMTHFLRNAXOTKRVKWGKOHIMJQULJSYDEUNFBYXBBBILZXQMYHHELTQZCKLBIIUVSDCKGIIENUMCPNQXFFDHSESMASZUOMACHNKDAVTSJHPEYFRVNLPBPGGMCJHSATUBRYECGNOV");

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
    msg.setTimeStamp(0.809691815493);
    msg.setSource(59828U);
    msg.setSourceEntity(103U);
    msg.setDestination(47026U);
    msg.setDestinationEntity(89U);
    msg.stime = 3421894869U;
    msg.latitude = 0.210837507291;
    msg.longitude = 0.601261461545;
    msg.altitude = 54566U;
    msg.depth = 22286U;
    msg.heading = 44634U;
    msg.speed = -26125;
    msg.fuel = 125;
    msg.exec_state = -45;
    msg.plan_checksum = 19038U;

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
    msg.setTimeStamp(0.427650568561);
    msg.setSource(50853U);
    msg.setSourceEntity(5U);
    msg.setDestination(22111U);
    msg.setDestinationEntity(127U);
    msg.stime = 2017062836U;
    msg.latitude = 0.088528740292;
    msg.longitude = 0.787124113427;
    msg.altitude = 38533U;
    msg.depth = 285U;
    msg.heading = 25343U;
    msg.speed = -10493;
    msg.fuel = 4;
    msg.exec_state = -22;
    msg.plan_checksum = 12392U;

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
    msg.setTimeStamp(0.129565973518);
    msg.setSource(41922U);
    msg.setSourceEntity(231U);
    msg.setDestination(54488U);
    msg.setDestinationEntity(9U);
    msg.stime = 1659266943U;
    msg.latitude = 0.942265003112;
    msg.longitude = 0.659465875423;
    msg.altitude = 56151U;
    msg.depth = 2639U;
    msg.heading = 15825U;
    msg.speed = 3892;
    msg.fuel = -54;
    msg.exec_state = 68;
    msg.plan_checksum = 1213U;

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
    msg.setTimeStamp(0.0473096580423);
    msg.setSource(29167U);
    msg.setSourceEntity(214U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(185U);
    msg.req_id = 32379U;
    msg.comm_mean = 104U;
    msg.destination.assign("AIIDCGLHURLHDCPVCBFUIOGFPSTKIAAQQNBOHDKIPUZJRNJEKPVNTFLNQAFKPMJWEYIZNCSIQMZXOQEBLRVWOQJVJFJSCGQTLMZJSHQHTMZDSMAPYIUVWDAJVHTHMXYMHXCDBRXMBGOZRHQPGFRJYSXRAFEKPBZMKHCTBEFUBOEUSZWOCIDPRVLYLXNVNVRELECNYZKFKOAGUWLLIWCDRJTZXBYYXYGPNWQGSDFUBNGWO");
    msg.deadline = 0.182676749244;
    msg.range = 0.418989086484;
    msg.data_mode = 26U;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.978587067796;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JDYVHPJECMFOTMVPPOCCTGOBMTZRVGSBNMRILCGVCEQAIRCRUUPGOLEALYJBAIMCNTJSUMLMXQAXJUEXWLFQDKITUJNOVXQAKBVYXQNBQMPLOUYBNLWIOMGIPREHFKDPTBBCFYHZFEDWIT");
    const char tmp_msg_1[] = {0, -37, -126, 86, 47, -99, -123, 103, 3, 23, -50, -67, 13, 47, -38, 90, -4, -120, -82, 87, 1, -103, -88, -117, 11, -35, -98, -59, -43, -118, -14, 71, 1, -78, 116, 97, 74, -43, 35, -95, -92, 125, 77, -46, 67, 1, 33, -92, -116, -109, 30, 81, -85, 61, 115, -101, -67, -12, -26, -18, 19, 31, 99, -73, -58, -68, 80, 28, -61, -54, -18, 16, -105, 97, -4, 13, 103, -45, 20, 85, 83, -106, -112, -6, -104, -37, -50, -42, 81, 35, 30, 111, -43, -69, 40, -123, -20, 47, -71, 66, 85, 37, -81, -82, 109, 78, -105, 100, -37, 115, -64, -12, 115, -107, -102, 114, -73, -39, 42, 111, 49, -87, 80, -47, 84, 70, 58, -12, -115, -119, -43, 96, -15, 106, 74, -1, 68, -46, -26, -54, 44, -114, -58, -26, -23, 99, -113, 94, 7, -89, 121, 57, 56, 78, 103, -124, -41, 95, 77, -112, -95, 53, -51, 76, 90, -122, -14, 92, -12, -108, 14, 77, -83, 87, 54, 121, 103, -110, 38, 23, 118, 62, -98, -15, -53, 125, -35, -55, 96, -84, -99, 59, 78, -106, -25};
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
    msg.setTimeStamp(0.0412075151406);
    msg.setSource(41197U);
    msg.setSourceEntity(0U);
    msg.setDestination(52215U);
    msg.setDestinationEntity(76U);
    msg.req_id = 18083U;
    msg.comm_mean = 202U;
    msg.destination.assign("CUWNJRJYRFTTZQUYUNGTEPCDDDIHQEMQJXSYCAOZHQIIVOGNVLXAUNUJXPVXTSIGXQAZOIFYTJLVCEUESDYRIR");
    msg.deadline = 0.727554850628;
    msg.range = 0.095531465316;
    msg.data_mode = 37U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.161757037358;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IJQBVPKATODRFYQQXVLSVTRBXAWRMBERPTMZQRNSSZASBXYDCMBRGILUODXFZTNXUVOBFIMZAAHWYUAXVZYLWGISTIMMGZZCMXNRJQDJIBBVNJYBNFOADJUHIK");
    const char tmp_msg_1[] = {8, -111, -4, 4, 108, -23, -89, -125, -39, -75, -103, 107, 18, 110, -117, -100, 23, 51, -50, 95, -91, -86, -96, -94, 105, 120, 7, 100, -36, 32, -47, 36, -101, 60, -45, -4, -49, 76, 40, -16, 40, -96, -103, 56, 76, 5, -31, 59, 22, -80, -81, -57, 25, 76, -83, 55, 69, -6, -116, 95, -51, -32, 51, -15, 29, 30, -51, 39, -61, 115, 107, -61, 33, 43, -114, -57, -92, 33, -68, 85, 112, -17, 23, -55, 72, -84, 48, -9, 101, 99, 79, 43, -20, -53, -7, -32, -87, -106, -60, -117, 7, 5, 20, -9, 94, -80, -8, -119, -52, 87, 105, -22, 43, -111, -121, -124, 117, 84, -121, 104, 32, 19, 3, -14, -44, -14, 44, -66, -42, -2, -40, 109, -10, 25, -29, 28, -110, 102, -104, -74, 114, -38, -120, 4, 52, -67, 9, 33, 5, 46, 123, -111, 103, -116, -37, 69, -16, -114, 101, -64, 112, 7, 117, -83, 86, -125, -64, 104, 98, -37, 32, 80, 27, 96, -126, 12, -39, 32, 65, -106, -112, 90, 51, -48, 21, 121, 30, -37, -1, -114, -13, -15, -57, 110, 85, -116, -51, -62, 61, -38, -6, 35, 99, -120, 96, 4, -19, -118, -81, -51, -48, -71, -27, -25, 105, -43, 81, 109, 49, -21, 63, -101, -31, 105, 94, 117, 117, -19, 111, -127};
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
    msg.setTimeStamp(0.24206342526);
    msg.setSource(46009U);
    msg.setSourceEntity(186U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(67U);
    msg.req_id = 54996U;
    msg.comm_mean = 186U;
    msg.destination.assign("ETFRCONKYAVSXEIVORUYPWEIYJIRNMHKWLNEAKLXSMJKDZUMMRGXFFSUMNTABOCDQDEZDYRZQBDDCAEHKVPQHBGPFINEPSSEJZNWFNCHXVSITAOCJGLVSKHYMSDMYWMCFLBLTUNJPQACTGBZVZVBXYGOKURWLUAWUATUQZWKZOZTWJHZCOPVNPXXILKV");
    msg.deadline = 0.60790885122;
    msg.range = 0.641754498921;
    msg.data_mode = 149U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1886207969U;
    tmp_msg_0.state = 9U;
    tmp_msg_0.error.assign("HTGFVVGSFDWNYENAQOUFERXZSIXKMJOMVWEUKRMTHQOHSUOLYNCQPBRRLEJQDMGGJVNFIMKTPY");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HLYNIBKILCVZWYFUIWJQOQGQTVEOEMAGVSNIHBFRGGCRRHECEJBUSUBDALPTCJSXGHJMVMJWVKMQJQYUOPTADZPSDUQLNXTYBEHYADSFJOPPRNXFUEKKMZOVRXPKLKZZJQACTPCEIAKMDVXKXJBIHOSMNBROQBIZSTPEFDRREEGYSNXYKCVFIOIH");
    const char tmp_msg_1[] = {109, -69, -54, 101, 99, 67, -29, 102, 15, -24, 100, -18, 20, 3, -49, 101, 79, 94, 31, 65, 102, -95, -117, -40, -22, 106, 96, -104, -117, 111, -121, -30, -124, 0, -94, -63, 19, -59, 29, -62, -48, -47, -119, 87, -118, 120, -67, 72, -62, 100, -26, -96, -59, 34, 55, 102, -115, 81, -23, 97, -70, 108, -2, -40, 75, -61, -27, 118, -40, 103, -72, 22, 58, 74, 6, 118, -53, -121, -106, 14, 102, 120, -109, -84, -43, 29, 103, 76, 23, 53, 22, -34, -79, -78, 55, -8, 66, -78, -27, -61, -42, 17, 26, 68, 93, 44, -50, -45, 113, -22, -7, -111, -47, -6, -2, -32, -106, -100, -10, 3, -15, -16, 13, 88, 60, 60, 113, 29, 97, 42, -38, -26, -76, 122, -111, -74, 11, 91, -16, -40, 123, 80, -110, 26, -46, -107, 73, -51, 16, -43, 89, -80, -127, -60, -55, -122, 90, -69, -103, 10, 116, -51, -61, 61, 108, -51, 69};
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
    msg.setTimeStamp(0.380839563279);
    msg.setSource(8998U);
    msg.setSourceEntity(19U);
    msg.setDestination(58169U);
    msg.setDestinationEntity(140U);
    msg.req_id = 32686U;
    msg.status = 220U;
    msg.range = 0.489394062983;
    msg.info.assign("ZUTRIHNMRGLENJZVIUTEXEDEJNXZJNXAKOSLYBDLGSHZIKVJZVUOCIXHGTFBZOCWQODBVUONCWXYHSXODQAWASAHFKBEYRVQTGICKMVXKLCVFFMFIKIHRMAZCDR");

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
    msg.setTimeStamp(0.475153430761);
    msg.setSource(1401U);
    msg.setSourceEntity(182U);
    msg.setDestination(25372U);
    msg.setDestinationEntity(141U);
    msg.req_id = 47099U;
    msg.status = 98U;
    msg.range = 0.880945492057;
    msg.info.assign("SAIAPIFUQHCTFSNVLKHSYDMORAVGZWVGXXXTNZZIHJSPLOBGCIYHSWFKUGHPONQYLNDWLTDYQESJLCPEZNQAJJDSDNVTQWFCUDDMPC");

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
    msg.setTimeStamp(0.167618924445);
    msg.setSource(64985U);
    msg.setSourceEntity(47U);
    msg.setDestination(6747U);
    msg.setDestinationEntity(59U);
    msg.req_id = 21474U;
    msg.status = 49U;
    msg.range = 0.0789409399386;
    msg.info.assign("PQMNSHMOIPSMDRVWFXYCSYVHMQCKYMZHESCLCBJXPPGRIXEOLFNWTXBGQINSYCJNQSCJYFOAKGCKRZWKXFJUZDNTVJAZBOFHSAYRZDIHXYOLGG");

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
    msg.setTimeStamp(0.507861151266);
    msg.setSource(41867U);
    msg.setSourceEntity(81U);
    msg.setDestination(2681U);
    msg.setDestinationEntity(69U);
    msg.req_id = 11347U;
    msg.destination.assign("SAPUICEBKMLXCLAGSELXPVZWHFKNQMTJFIPEGIFBJXFNNLVURJPZAGWUVSQUVSTCOGTLAMPRXCWPJSZUYYNYZARDMIKRNYSXQSCUKQGIXNMAERZHCKVJGQSTAYBGBZKHDLHCMVYFFBHMUDBYPMNHLQLPBRTTHNIOQDIMOIJIOKVNSJWKUDVTVSWO");
    msg.timeout = 0.627725400695;
    msg.sms_text.assign("GKLEZSKCMFDKOFWRYUUIYVHTHYRFLWUQJYNKPICGFFQZVBGQTDJWQISRVXKCACUEHGXMOFPVWUSJTTDH");

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
    msg.setTimeStamp(0.328671915354);
    msg.setSource(22067U);
    msg.setSourceEntity(128U);
    msg.setDestination(28524U);
    msg.setDestinationEntity(86U);
    msg.req_id = 61106U;
    msg.destination.assign("ZWYXKCNIMFXNDERINABQWXOBZEYPHVIGMQHWLFOQNGNRKZADCIYXKZBYMCYLVGJAUSZOCDSUCNKFPMBRUKMLGCZCCDUXQHTPJQLLGSPBZTUWNSPDVPHXCSYEXIREOQVYUILQOZVGCKAUOLTQVTJWAOBGIQXP");
    msg.timeout = 0.668428403071;
    msg.sms_text.assign("YIZNSRACCFZHXWVEGKKOECAUFDKVGYHZXIGRGQBBHYHPLILFTBOKEBKJYTCFCYTTHASOZVVVCHECQTUGWYNBOFMZXJLMJCYQOGMPXCREADQIWAUNDSYXVAXKWOPBTKPRINTDUVLMQWWUHINKPMNOHJSACAIETZMGZZXVJSGBEMRLUMFLPDDJONIJHF");

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
    msg.setTimeStamp(0.551985661237);
    msg.setSource(59368U);
    msg.setSourceEntity(53U);
    msg.setDestination(49070U);
    msg.setDestinationEntity(23U);
    msg.req_id = 33246U;
    msg.destination.assign("OKDMCYMUBNCRTC");
    msg.timeout = 0.542120394904;
    msg.sms_text.assign("ACHKWSNLYFGGGMFFPLEDTFSSMIYZYLIOEHFBVUKXMPLCZQHWRJIGANBORWKCBORCBPEPQZVDCIAFMZXTPQEUYKKJWNONBCYLMOTZLYKSVJPRBRGVAPEFSQZCDDGMYD");

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
    msg.setTimeStamp(0.707627947263);
    msg.setSource(12330U);
    msg.setSourceEntity(129U);
    msg.setDestination(28497U);
    msg.setDestinationEntity(193U);
    msg.req_id = 1277U;
    msg.status = 78U;
    msg.info.assign("MPRSOAHTDAQULWWLFBUOFFUPEZANWYUBSOCQZYELIXCHGFWMURBCNBOXOZFUHKAOBCRF");

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
    msg.setTimeStamp(0.945761221429);
    msg.setSource(37028U);
    msg.setSourceEntity(242U);
    msg.setDestination(29187U);
    msg.setDestinationEntity(28U);
    msg.req_id = 63439U;
    msg.status = 1U;
    msg.info.assign("SHEBQVUIBRSJHOFXCNQINQYSACMQBMFDAYSFVTDDGPRGCZTBYWPJCJLPUUTFMHFDVKQUBQOOMUPCDYMEVNGRQERZLGVHKZFGUEPWWBFFWSLJXZSREMHMWJOXLGLSQHPAUYNLAVZTHIHEBVKHIMZDEYBBYMDWXTLNNUNZZGLXNFKQYWYLVASDAKLJJIARDEANVPIXCTXFCRKOMOTPDZOKPGZXKSOONHU");

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
    msg.setTimeStamp(0.422187004882);
    msg.setSource(5585U);
    msg.setSourceEntity(160U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(246U);
    msg.req_id = 52846U;
    msg.status = 141U;
    msg.info.assign("CWJLDMZRIBVMOPZYERBIDVNUAPQRHWVABNJFTYVFUKKASYPALXADNGGWIXVYLJJMKICXYFBLHEVYUJEXQDKYRBHDOCXJWQNPTDSUAFEWAYQJAMIOGZGEFPIZQPCTAUUUTFHHYTELLQSRWKUEUIOZNLOGSQRYPOMMTDBWMCZINZGG");

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
    msg.setTimeStamp(0.390652090917);
    msg.setSource(19305U);
    msg.setSourceEntity(170U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(145U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.364471461781);
    msg.setSource(56924U);
    msg.setSourceEntity(221U);
    msg.setDestination(37152U);
    msg.setDestinationEntity(195U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.270908486953);
    msg.setSource(47408U);
    msg.setSourceEntity(118U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(203U);
    msg.state = 13U;

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
    msg.setTimeStamp(0.974025347298);
    msg.setSource(65441U);
    msg.setSourceEntity(246U);
    msg.setDestination(62659U);
    msg.setDestinationEntity(224U);
    msg.state = 40U;

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
    msg.setTimeStamp(0.928497490588);
    msg.setSource(11563U);
    msg.setSourceEntity(47U);
    msg.setDestination(18445U);
    msg.setDestinationEntity(183U);
    msg.state = 13U;

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
    msg.setTimeStamp(0.944492163561);
    msg.setSource(59726U);
    msg.setSourceEntity(168U);
    msg.setDestination(6504U);
    msg.setDestinationEntity(228U);
    msg.state = 141U;

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
    msg.setTimeStamp(0.695700153677);
    msg.setSource(23938U);
    msg.setSourceEntity(155U);
    msg.setDestination(42405U);
    msg.setDestinationEntity(249U);
    msg.req_id = 7061U;
    msg.destination.assign("FOUICRRTMDDLWIEWNDCDUZMKHGUEHSOGYWDWETJNSUTIHLXIVBPRDATORAXYRJKQGYNWWGAFAKIBAMCZFNVD");
    msg.timeout = 0.82128363023;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 375123569U;
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
    msg.setTimeStamp(0.579465951912);
    msg.setSource(49635U);
    msg.setSourceEntity(132U);
    msg.setDestination(5571U);
    msg.setDestinationEntity(249U);
    msg.req_id = 2217U;
    msg.destination.assign("WVRQIKMQUILVZTZUFXDNANOKHUTCFYHEGLEHQJNDVBWGFNXPYWZTWJCSATFOPPXROSCEDOLGBPEGGWUJEEFICYHRRDQTFOBRCZVPMOLRYAAKHERAVQPZUTIFTYHUGZKMDJBWJXCCQKXWYENFSLLZBSJXMACICYKVPZKJONKWBHGIGVJPPMO");
    msg.timeout = 0.140073774952;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.0254990837946;
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
    msg.setTimeStamp(0.702313380618);
    msg.setSource(17914U);
    msg.setSourceEntity(106U);
    msg.setDestination(25673U);
    msg.setDestinationEntity(251U);
    msg.req_id = 22672U;
    msg.destination.assign("HEYAPHMFPKJAAGFNHKPSTVB");
    msg.timeout = 0.103783466123;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 41300U;
    tmp_msg_0.lat = 0.397529292075;
    tmp_msg_0.lon = 0.0190432666279;
    tmp_msg_0.z = 0.976799501293;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.speed = 0.978946490021;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.custom.assign("DIINOSWWXOVIBQEKMGJWHDTUYEYTRFSHQZLAKRRCM");
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
    msg.setTimeStamp(0.20667722142);
    msg.setSource(56143U);
    msg.setSourceEntity(113U);
    msg.setDestination(38440U);
    msg.setDestinationEntity(62U);
    msg.req_id = 1187U;
    msg.status = 110U;
    msg.info.assign("HWFGVXLMBHIFGXEIOWDLHMOFBLDRXPEEBDSPAOFHJJDBKKXAYWNQQTMQEVVCZFHEMADIJKGYGDFAQNDUQGITUXNSQSPFLTZKXPERITAOZJGUGGSUTTFWBMZCOHPLZORVWJYVCOUWZERLAJSKNOSAPBALIMRUAENCBQNZLWFPWTCBYJJYFBGVYIR");

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
    msg.setTimeStamp(0.0748649420974);
    msg.setSource(28073U);
    msg.setSourceEntity(63U);
    msg.setDestination(60521U);
    msg.setDestinationEntity(207U);
    msg.req_id = 11703U;
    msg.status = 37U;
    msg.info.assign("XSOKFRCPPGVBQCHFKWXNXPPPFZHDQJIMTONMRJQKTHETGHOJRVTCJKNOZUDGZTMAFVLGJBLQJLJEBFUMYDUGOAWNEOTUOCWPLQRNKSNZYGAKFXGAZCTUAIXYFOUCBNQMAAAAY");

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
    msg.setTimeStamp(0.887311749411);
    msg.setSource(40595U);
    msg.setSourceEntity(59U);
    msg.setDestination(22541U);
    msg.setDestinationEntity(189U);
    msg.req_id = 38531U;
    msg.status = 245U;
    msg.info.assign("LFGHXZIUKWWUMDOFCDXYEXAGJLXUJNSGBRMGWIYBVOOVDUSAWNSSXYKFPBTAFZNJQBCDVZIIUZCUNAMQUBZMLORLFO");

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
    msg.setTimeStamp(0.464418980491);
    msg.setSource(51689U);
    msg.setSourceEntity(182U);
    msg.setDestination(5265U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.920963539727);
    msg.setSource(64628U);
    msg.setSourceEntity(74U);
    msg.setDestination(39006U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.818937264224);
    msg.setSource(40312U);
    msg.setSourceEntity(178U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.815325514874);
    msg.setSource(47923U);
    msg.setSourceEntity(244U);
    msg.setDestination(453U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("IENMXEKQZMZBPXHNUHBPVOTJYFCEDKIKWDZHQQOMFEWRYFMTTFATPOBDWCAFILBPMHAPVSMLJZUHSMBEUHYGTLOUTCZGOJXNBXYNIKGSYTJBLYJXIHGEKUNSEANRVWXBQTCATWJXZUYCZKASHAOCSSNWKXCLMLRQ");
    msg.description.assign("ICGDYCEJRCNDDIMHLUMIBMWIMNGUCBXUAVKRBPRSABPNHRAXFHOPRIUTNPKSEFZGWTJALYZXEWMTXKYSZQYIGQFKLYDQFDZOOKWFFRGMJFGLOLPSWRREUXAZIDKCLCTONDFJFYPMTBLHCOI");
    msg.vnamespace.assign("VXPKETTQBSJXGAFXAKKMUIMUSRLBGKKQHSNCLODKIWNWBKEDZYSZVMPCMBFHHRDPINBAQORFPLNJNVFBDTWLAHEJKVIBEUNOMUFIRGEEUPNZMVTVXOPUATUHACJYLVVLEZSCWGFTDSXCYJFVSBRDJFQYIJDHSJNXCWRAMMYCEUAPGRPTCSUQYWWCJIUQYJGLQEZVRRXZOMCOFG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NQDTURPHFDNYDMWZJHQXJJNDMMSXLNBBGWFFOUUVPQHXAAQZDMSDTLQKRJZKWAMGJYNRIGXHPSWAJEEDKHVPEFHYWTOBCLRRGLKBATNUSLEIYSFUEKWMZXHUCVKVJPGEARFCTSYBFECLTWCOJOWADZRR");
    tmp_msg_0.value.assign("TEDRCWHZBXAKLLTRLJFEAPHVBJNONWBAXQIXHEYTIFRDTNJZHSEEUFVCBFZVYVAUDIKSHBTYRMQIPNSUPJQDZIOOJMGTRNXWGLUYJLSOJPIYWYGVUFQCJGQSRFUBGKTMRVPYHLMPMJHOPOALXUKKXQDRGISWZNNNLUIZWCEEQDNHYXBMCSUORBWTDUMACASKYGOOMCOHQYKJDIFSVGZPGCAFCQBEWIGNCVSVRLZKWXXBWMKQAXLMF");
    tmp_msg_0.type = 81U;
    tmp_msg_0.access = 36U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HHSRRPMDXMRTNZWQBUZNOQCRJIWQJCWDWMTLME");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IUEJQTYATILKRBTBMPTNULBNNJIGSVYPREHULUTNGWVALQUTFZTNSCTGHNGXWPFRRMNBJFTVCQZPIILWPKMCBWYCXPSJCUHXHTSOEHWVJZHQWOAXEYEPOAZWKPNQIZBDEFKKRCOMDISFZVHLLQIMDOUKQYKXZFLDZYZDECWGWSBYSBMOODMA");
    tmp_msg_1.dest_man.assign("DXNBCDPGXGTFOARJNSZISOTJBCSTQPJOKMIUDJVBUTYRXNNODQOUSZPYXRULFWQWWYJFXKEDAXLOYELNWKFMVBHBCAIVENRKRUIKJKCZFJBLAQTCXNDGTGWQUSSKCTCQSIGUMEZQESHGYVIPLWZKPPBSMGJMYRWCWFVLMHTJOZLYAXHNEHVWMDAAEPCFFA");
    tmp_msg_1.conditions.assign("PHJKZWCPMMRQNROXLFVP");
    IMC::ServoPosition tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 81U;
    tmp_tmp_msg_1_0.value = 0.394200402991;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.886842788746);
    msg.setSource(60065U);
    msg.setSourceEntity(125U);
    msg.setDestination(43767U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("EWZMFEICGVXYTVABWKZUDBUJXHRQJXGKYDVTMPQLWQTBCUHXZXLZCBSTCWLJFXHPSBJDMPTZEQRREKFPCTRUWIRGWNQKHVEQOSYKCABNJYAVJOHWTONMFVIIAILGHUYHMFDTDWPKIRULTGNVNOLRANIPCFRDSENEKOMDJJHAFBNOXSVFBXEO");
    msg.description.assign("LNQMZTXBDXZAKXACDATVGNGWXUQHSFAJPSMMSZUHUXXBJFIRWCCDBWBZQEYPLLSNREZSDNPFODLOGOPCCTCKQHVQBYKJBIALUORUK");
    msg.vnamespace.assign("DLNRTKNRFEHIUEWDMVRFYJXYBWOEGSXTCJMBSPVUGTMGEEPLLQMWQPQCWKMYIBFPWPTVGHIHZPUOGFDGVCAISWZHKMYNQDLSVARXFOKXQTOGBYGPAC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CPJVIKYKVKGFTERLRCGEEGLGFNSZLEOZSQEILXPVSBONPCHQXXFBSBBEIHGVZAOWNUOFCAYPVJIUPYQYBNDFAMJIJQQWUUSHDUKWEANIYYHSHCTMMR");
    tmp_msg_0.value.assign("NHGNJBZBQDHZZVGEAYENWRGSTAZPHRJLYDAWBYCPIISKBQECQVQRHKMYNRFMUTCSEWWDVVUSIGOFVJNVRV");
    tmp_msg_0.type = 244U;
    tmp_msg_0.access = 31U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PNPASTEOTKIUXMNAKRIIZUSJQPVZRFGNSQVOZNKVVDXTCU");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BRXJIKSLGWEJYERTHZYSSUNOLJQEHCAIETUDTSCYOVKBGVYDWEREGUOLQVFQVIMGXGXOBIIFWDCADOIKANGUOPHFBMMXEMPNPSVIVPXNVZNQ");
    tmp_msg_1.dest_man.assign("BRERYVBMOAPVQ");
    tmp_msg_1.conditions.assign("IUUTPGLWIWANXEETUQLTIJJIWZHYE");
    IMC::LoggingControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 80U;
    tmp_tmp_msg_1_0.name.assign("YYDBUFSBOJPGHZNTQZRIJZOVNCYQDZIPUUPIRPHXAQIHRQAXAGZRPEQDKXKFKUPMXQRLCJIBLELBSZGIYCWUSLWUISDMVQYOEOSECHOXYCUDDTTWGO");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::StationKeepingExtended tmp_msg_2;
    tmp_msg_2.lat = 0.630638152026;
    tmp_msg_2.lon = 0.341069942414;
    tmp_msg_2.z = 0.0414319177091;
    tmp_msg_2.z_units = 172U;
    tmp_msg_2.radius = 0.787614382931;
    tmp_msg_2.duration = 2840U;
    tmp_msg_2.speed = 0.228198668406;
    tmp_msg_2.speed_units = 84U;
    tmp_msg_2.popup_period = 11617U;
    tmp_msg_2.popup_duration = 10114U;
    tmp_msg_2.flags = 113U;
    tmp_msg_2.custom.assign("QOCAQHXJYMWJNKRIICIOP");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.280772657495);
    msg.setSource(24390U);
    msg.setSourceEntity(16U);
    msg.setDestination(53006U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("AVHCPIWDXBBCOWOPAOXLHKJRVPLJVMDXLLDTKHCSSRFJXQHFQIHGTKEFFOUHJJNPRPEFWUEZSTMAYMNMNKJDWJNVDBPLYPYEMEAZBSYZUPMMIEIZCVUXSDRRAKMTYNTRIZSGYAVQLSWXQBRFHCRHTAJECITAQDISLTUGDRDIXUBVQSBHZVKQBWZKVCTOPECWDLKWJYA");
    msg.description.assign("QFXCMVDTRADPSUWKRQFKTWEGVBADKACXMEUTTJHEHLZOEMPRIUSSIUIYAQZNUOBHWBTMIMZKOKHQFCTYCDWDZONRELNJYXUKCRJQLXXWLDRYCWSACFUFSPSKGRWNHMDAPQHVEOQNVZIZLRZGFOEJONEYLBTVJSNDWBLVIGVHHBPNSTDYAKOES");
    msg.vnamespace.assign("FCAPEKKEJLYRIOUAGIGHATXYAHPWISXQWXFZWASMJNBFTQIHREOFNLLWZCNJFWHZFEAUENCQKZPFOVKNSGRAXMVYUVVKNMORMXIUBDRZMJCLOYSFQOJRDEVLCJZVWCPBZTCGKUPBCQAPMEHWIKNLNQXMTTGBZYFYIUODLXHPRMNDLUEKYHZWSBSGVYQQFOBGBSXUJZLGKD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EJPZJAPDXQGVIOLWLNUUXFVRADFWOKHYWGGWKDSKNGFBIUYZFDEUXPMXLCIAPQEMBMXOHIIJJOQAWQITKBBJQUMJXVGROYECYEQEKDHCCLODJTSQEZMGTRKNDOVEAHVLKZSTBWHOPFRWOUQZSSAVVCCYFPAZIFRCJYBPOQHTLUCNFXSNMEMPBDGVPIUTAMYGLNLRYYSRH");
    tmp_msg_0.value.assign("REBEDAMWPTOLOAFTZZTMSBKXVWPRFLKVELDSDEPHNNGPZJIYUDROIQSQCYHGIPOKMWEPEDUFBCDIITOMDNNFGZJMHOAHRWHPOQZVUIHAXAHDJQBKUFIGJOLBABJWEMDZGBLSLUFZKZSNBCAKQDWYHRHVEITLVCJWAYPRLJGGOXXUVXGRUONYXXJLYRAWLQMKMVCPQETRIMTRSZPSSCJCXJYKYGUNBCVQWYZXYUBFNFTVNQUSQNT");
    tmp_msg_0.type = 72U;
    tmp_msg_0.access = 113U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BMKGATRNVPIYTFJNSECHOAZCZTUEPKZCJNURTFTLTOLXKDXYAPPYNJPSDAHIQJQUXRDRWWIGBIKLEUFGZQUPNECTWMXVVEMLABZCRIQHOZHVODHFFKFRCUVBOLEYLNLOEVTHGOQJSRBUEXAGTNBSMAAQYHGPUDSJKLSJZUKXIPINBXEEMYAVJDWOXMQMBKJVYXRIQTCYDMZZWCILAVMQWSRQYSPHJIHDFBSGUGZRGDOCXFKVFWWMWWK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("CETQYDWFDOAXDURNBMSOUUCORSHISAHXNIRAZTTV");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 21908U;
    tmp_tmp_msg_1_0.flags = 118U;
    tmp_tmp_msg_1_0.lat = 0.931542582996;
    tmp_tmp_msg_1_0.lon = 0.481261040523;
    tmp_tmp_msg_1_0.start_z = 0.882928804487;
    tmp_tmp_msg_1_0.start_z_units = 142U;
    tmp_tmp_msg_1_0.end_z = 0.825823997225;
    tmp_tmp_msg_1_0.end_z_units = 128U;
    tmp_tmp_msg_1_0.radius = 0.773682201574;
    tmp_tmp_msg_1_0.speed = 0.72143843262;
    tmp_tmp_msg_1_0.speed_units = 237U;
    tmp_tmp_msg_1_0.custom.assign("XYTCQGLMUWFSYZNSJRPJPDELMOPANUDZZGUUKQCWIIHKNDWCAJZWNBXIDTUDMVEFRDURWJYXXTVKSKELHHNWEGUCCUMKOXPSZOXPUEBOPHOHBNJVVVQJWCPMJIMJZPVGJGRLBVMFRBTIRAYLOHOHXBQOPZHQSQQTIEKLZSTSQXGXBCQSFYLTEDTIOBLYZGMDIIXNNFKTWKALRGFPNASEABKGWUHKLSRDNJYIOFZADA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Current tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.863221963092;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::RSSI tmp_msg_2;
    tmp_msg_2.value = 0.696189218865;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.717136992652);
    msg.setSource(49350U);
    msg.setSourceEntity(107U);
    msg.setDestination(62492U);
    msg.setDestinationEntity(81U);
    msg.maneuver_id.assign("RNGPKTQAULSLLTIBSAWY");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredThrottle tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.546347219596;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 33633U;
    tmp_msg_0.custom.assign("DVSEGJLCDTFTLIKHVSJPOFPEFXNEXMRHRCJCKPGVETYZGYLCGQHYCJAEOSDAZJFTNIQWKCCOBKYMDAIDFXOTHRAGLBAZPWZJWGBNIWZWZZDEVUAYHERSXNUZGRVBJBVZTUQHWLRVBMTNTQJVGLVHIRQNOOWQOEUUYIQQSMKLIZPTYHKASXKDSLKMMRUFMHFCJMMBOP");
    msg.data.set(tmp_msg_0);
    IMC::PlanControlState tmp_msg_1;
    tmp_msg_1.state = 112U;
    tmp_msg_1.plan_id.assign("WBKVIJWLLGQDRYBFHZUMEGVHMSXKEPRLJKTQXYIMKAVQIJSDUISECPESPFMAWQWRBUKF");
    tmp_msg_1.plan_eta = -572202351;
    tmp_msg_1.plan_progress = 0.378134202278;
    tmp_msg_1.man_id.assign("GRFKAOBZAHOQRHKXWGGDEXPAYUDENKRQAEEAOYITJWTMUSHTCNLVKXKSPZYDSUFXSRDYAEGLWNFGCRNIYGAGJTRRMBKVIGACZXZPYCCCSBCXWSVQLPZWLHQZALNKVZBNEODHOPWFLOWJPTUULXTCQTWLSDXFTVGVBRHUNDMNIMIFISBJNCHJMBZQBIOSVYLVEMTOUMPJACYQUWEKIBEEUVPFPUVJJOXBRRMQMFYNF");
    tmp_msg_1.man_type = 52729U;
    tmp_msg_1.man_eta = 1049617085;
    tmp_msg_1.last_outcome = 174U;
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
    msg.setTimeStamp(0.0615281272938);
    msg.setSource(47521U);
    msg.setSourceEntity(246U);
    msg.setDestination(42761U);
    msg.setDestinationEntity(40U);
    msg.maneuver_id.assign("EPUMJWSZHNVZSJKLWCXLCTZGTTKPQNFAQWJGRUWSKKXPAUUQARZHDBLOOGBDTVFCRGCDKYNOLNSONEHIEPSCUCNVPLDURTPMQTRHSMNFPTR");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 63470U;
    tmp_msg_0.flags = 102U;
    tmp_msg_0.lat = 0.782604231363;
    tmp_msg_0.lon = 0.489385628037;
    tmp_msg_0.start_z = 0.488315645417;
    tmp_msg_0.start_z_units = 18U;
    tmp_msg_0.end_z = 0.191872556332;
    tmp_msg_0.end_z_units = 233U;
    tmp_msg_0.radius = 0.0213470248583;
    tmp_msg_0.speed = 0.197066984355;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.custom.assign("DDCCMLYILIXXORWRNVPFMUAZTFHMVPHBQTWLAVBWAUXBUDXFVKJDWJRWCOXURVLTJHMGUKKQYESXQYKYQZTSUSLNZAAAEFLXCEONNEGGWFTPIYGZKHFFJAPUNUYMSMCRTKLDHQHHOGRRZPQIDRQOSIOVTSBVDMVNEHFYCMKJJAFMEHDZQOWCTKSPTWZRYEYQXBCWDJKVFOEJWUPGKXGIOIYINAEZ");
    msg.data.set(tmp_msg_0);
    IMC::PlanStatistics tmp_msg_1;
    tmp_msg_1.plan_id.assign("UNXOXGEUXFLCAIWHIOKQRDIMXCPYSOZBTOILWYLZZDQFGDSEFAHMBADOTQVMNEYANCHXMPSQKDRDMWVURQAGZPGNTXRXHXWJHCYLWVRNTYVKPFQKEWZIKGMWBBCFPEVNKTFBVHFHTJUZRRERNKAAHBTYPLSUSOTVDRGTWCEHGPZSSILLLJFAJDWPLYUIUQNKQOMXJIJCUQU");
    tmp_msg_1.type = 135U;
    tmp_msg_1.properties = 89U;
    tmp_msg_1.durations.assign("VSTAPWKDOZLLMLRJRARPCXOWNXDVICZQXYFHOFFNQESCGQVTLCDFJSTKTKQPMHGILMPMHKZJDKDEXJDDPUDJASRJYVCPQAELMINGWJKWNS");
    tmp_msg_1.distances.assign("XVDNLEDKEUKWRLOIOTYBGIFBWOBMJZVMMOUYASWAFEPTLQZQTJNYJBCPICCAKMFFFIKSJAQNBOHAYCZTIUXUWJBXXSCNIYYGTPGHKEASLTEZVDDNUEDQGJQBTGMKQVKWZEXVFRQYNFXNROMPKUSDZOZVVPQUYRJHIBGHYSGDWOKMQLIASGHCRRNBJDPXXYHRJMPGNORIXHVQUUERWCCUCBWPTNFEWFCLPLV");
    tmp_msg_1.actions.assign("UIVJLWMZEYXFHVZLULKORLHNONSEWLKUMXSAZPNANLEXPEFYXUSDRHVTNLJMRTPHDGOBDGUXVZZBINYDDOYPFX");
    tmp_msg_1.fuel.assign("AWYKZDKVECMRPQXGQUPOFJFDFSUNTXVHGRMWTKNPZQGVAXNWFORKDLCKTCFHHEAY");
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
    msg.setTimeStamp(0.768182358305);
    msg.setSource(60220U);
    msg.setSourceEntity(131U);
    msg.setDestination(30856U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("AOLRGSPKMMEOXSGISFUEZUCFUFUADJPIJCMRYQMNIVKPFHDADMFICUTEERWLAJTRVUJSWRZMDEBKJAOYXGFMIJFZNTTRVDCIALOQAGSUCMNKGIE");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 38579U;
    tmp_msg_0.custom.assign("LEQNILHMQCIEADHGQSJPQXNAGVBCWBGUMGCBUSJDWSVAMSADDVQWHUJZMZFSYGHCHVBMKQRLXWFKGPKXZAOUJCRQVFPIUONQOFSKUZSCNCWGELILZTNOBGIAIZRHLZTJHIOIFXJZKMTENVKYDAWYDGOCB");
    msg.data.set(tmp_msg_0);
    IMC::UsblPositionExtended tmp_msg_1;
    tmp_msg_1.target.assign("MLFFZCZDZJJDHIYBDNKHWUCNYTUWAJBKHQAYHBVMMHCMOYGRFSTNBWAREPOOHQIKZTLODHJCEOIMQVBKUSKWSZXDMJZCKXLWURPVTAWAXQITILBVIFCIGYVVKTRDMVWSYMHDGQMCROXFZIHQGBSLSGYZRVJTHGXOPRWLYXZLNEKIXWSUCMDUANLPANGO");
    tmp_msg_1.x = 0.703911455987;
    tmp_msg_1.y = 0.540354728539;
    tmp_msg_1.z = 0.911205789885;
    tmp_msg_1.n = 0.895575076741;
    tmp_msg_1.e = 0.610257407789;
    tmp_msg_1.d = 0.68856785445;
    tmp_msg_1.phi = 0.450066504289;
    tmp_msg_1.theta = 0.493195244909;
    tmp_msg_1.psi = 0.10024421538;
    tmp_msg_1.accuracy = 0.405782813073;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.53683519208);
    msg.setSource(16082U);
    msg.setSourceEntity(34U);
    msg.setDestination(63143U);
    msg.setDestinationEntity(36U);
    msg.source_man.assign("HVLUWQBYNGVNNXECWORWJFHHMOZCIGIEBFDSWIVBNZFRGBLAEANCYIYFCGON");
    msg.dest_man.assign("LMHJWQZHUSZMTKNYMXZSXLAASTDBXNHYFGMDWRQDQOGBHWVAOVXDPMOOCZQSRBJVUPHEAJNYBECMUVCIROFKGCMAKSLNZIXEQKMCRGLGUUDLREPBYLOVWAZRFDIBFRKOGAIUZLYZNWHJHGBDVICSWROIWUUFYTSVVQQJKQGTSPFMTEYVXDNJXODVWHBJPGAWHCABLCIHUTIXQANZKWEFYYXP");
    msg.conditions.assign("SMFHLDUOMJGBMWARPBLRWVYQFGKDDZOBMJLQTMUEDIMNGGNPRCKEVMYSASEQBKXOQHKYULGYOADAXOVFXUGHHFMOIQCYBNTUOTUOJZIC");
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.782950476783;
    tmp_msg_0.type = 74U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.723008726298);
    msg.setSource(46150U);
    msg.setSourceEntity(85U);
    msg.setDestination(19360U);
    msg.setDestinationEntity(136U);
    msg.source_man.assign("SVTCNZVKNQKVPALDZLJEVTEBXMLDPZLNUQHBFVIPFZSRTQBUIIOQPWHUOXLYLGZPEXBAKTUNMDXCFLSWYXICAJIBXHTYBNUSAIUZWEZGOWGDNNXXVPCRHQMPHJGMPKBMOAULXOFSRUPJEQAZNCRVZASCWKXRCYATHCSIEKEHHGZRTRDMVRJIYSGBTPGAYDGCDGSYFKYD");
    msg.dest_man.assign("SXPWMPREEPQFOUFMVTVGPLGIIYPLIHKIKBOHXDGNYGSYTEDPQFOEUQSTKZOMEBYXEMHAHFOYPINEXTBCJUXYCNGXCRWJGUVFMRAEDUAJYFSZGSLPCTZXQMOWAOJRPVNCZQCYNHCWDHZDWMNSZFKLKFJHVRQWJZKFOTWTILBVQMDITBPF");
    msg.conditions.assign("JLTSTZSWGQJYFACGFKAJDADMCIFUYPUSPYDNVMNOWHFLHPWLYFATDTDTVSJMZBCXBZIOFABWECMDRXMMXZJJYYJWRUQPRBXKLNEYQGXKGGZEOAZYNDVWPCHVHOOWAQRSZKIMTULXVGHCXKUFQAFETNHVBNSNPGFWIEIMKLKBBOYEGCIRPXARQISZPMLIUWDEOOEUFSLUODKYC");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 17550U;
    tmp_msg_0.priority = -74;
    tmp_msg_0.x = -7715;
    tmp_msg_0.y = 4118;
    tmp_msg_0.z = -31958;
    tmp_msg_0.t = -13821;
    IMC::DesiredVerticalRate tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.842649343834;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.553955620367);
    msg.setSource(24718U);
    msg.setSourceEntity(241U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(42U);
    msg.source_man.assign("BTLATMISTOOFJTZFNHLMIYGZMYWUBFHEZVFDWUTXMYXLGONRBCVFGVHYFVCZLWGPAPHYFXINKKOGSVPSJXXOTDUEAUPCMWIUQMRHLQPBRZPRQFSZKEPJRDBIDYXDDRQFWOMTWADYEGGHKH");
    msg.dest_man.assign("DNDLBQLAMUIPJPBKUOWNXBRLSZRWVIMFCERGGIXCUGZXKEBQZNAKNCAUZYIET");
    msg.conditions.assign("KIDHKLNRJHWPGOQAHDQCXZIUJTMDZZFFSFEOUDOSVJJGAITCRRWTPXLMZDRXKXQCTIBSBVVEEMRCXBRNIXEIGRNLIDOWCPGBWWPAGRL");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 136U;
    tmp_msg_0.quality = 2U;
    tmp_msg_0.reps = 206U;
    tmp_msg_0.tsize = 205U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0907958662312);
    msg.setSource(12412U);
    msg.setSourceEntity(187U);
    msg.setDestination(18077U);
    msg.setDestinationEntity(244U);
    msg.command = 12U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("COHRVFRIZPNMSSCLEUDKKSTRFOAIWEYREBSRHZNGYZKZJOXDPNQJVEKVKCHQUHLPJUOYHEITSGUXZCLEWNSEHLBPFYBWMDY");
    tmp_msg_0.description.assign("VISQPOJACJCUGFDBACGB");
    tmp_msg_0.vnamespace.assign("FBHGDQJKPKUNTLHMZJLAJYZIRRJBLEDSQVYWACKLTWXXUNUAJZVIKOKWQQBMDBNUYOAOJTSEXQLLFWMWEBINOUPPFIEXOZCFNAZVIDWITYCARWTNSUHZXPJCRVPTLYJSVCDGNYKRFMDIGVSGHFTTTHSVQKASUGORRMUOIJPWVEUXDPCLOYIVZQHZDBRLEQLDKHFMGNKCZBOENAQMWIFEYXHKETRSVSMMQPGXHXCWBBBACYPOEZJN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AUREOHBRBRCRJXNLSCSPQRMGXEIOBUKDCYNVGAFAZWQNTSOCTFOVVLAHYBZXHDBKRPNYFPYKBCYEAUZYDIYJCFZXVSSQWAKTLIFTSHNJQGVQKHXMGDYKCWIMXTYZUEHPUBZXLPWOHPJGUMVLOKIEEFWREMVVASJRLOTAZCQDKMWKQMFEMGJPFUPNQIFLJPUTKABXSDJNMGVJTCWDAWNVNILBZQYEHSESTWGO");
    tmp_tmp_msg_0_0.value.assign("QILJJRKRUWASNLRVLPLEDZZOVGBAYS");
    tmp_tmp_msg_0_0.type = 134U;
    tmp_tmp_msg_0_0.access = 229U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WBRTYFPPLCVTLVFIXJAASUJIWCHTFXGAKLLWXLUYUSGETUZBOFXSEINZEJYVKEOYBTGEIALKWZKBHVBDWXOKIQGYGHZLBMPSHURTPSMINMPRKTPZZPOCFDHDQLEKWRSQAPWOSMFMVVHEJDTUDCTPSZEJJTXHNBRHQJDCUMAQJNRZQFLUVQGVJYWNIYSAAQCQRCIX");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JDRUQAMVPVTRLKVQXILIKMBPNBENRMOEAXWPXRWFJNPGJCPKLVILBKJZFLQEXUDIMOZTATTBGZSUOQHHJSBLBVKWAXGHDVQWZSSOFKOHYXWNQTAFPDOGPGHGTJRDSAWEFJHSTUVXUIZBZMZMAFGCLCZKZOPPYRYHVAQWFWEHBYBOWRXEQ");
    tmp_tmp_msg_0_1.dest_man.assign("PHVOVFHJHPFLGRLHSTXDCN");
    tmp_tmp_msg_0_1.conditions.assign("FUEWHNGEVXYWSFHQZYZBRPJPASBBRBORWUQTOZCBZEIOAHVJQXFNRXHZWPCIWCMZEUKUIASRWOGPKVFPUPBOGURFNMYDOTKZEAAGZJTUIQGVUDHFNOUQJGJYQRDJKKFBQTCLIKRMPKIJOGJQHEPVSGLVMRHDHMQNZDAAVYMLTXSYYDSEDXUEEKIXNFAKIDQGOTWCPSDGXTLSRVBHXKLVIJACMWJHBSTNFNIFCL");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LcdControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 9U;
    tmp_tmp_msg_0_2.text.assign("QCOJJLCBMAQDFIDQHINOSMVBVHBOOCQSTINGTPAXZSDABPCVRSKOWXBCKQTIPCKVYRIAAUFSYUQAWENAORWYRLNEFMDVPLVPAHEUTYABPEQZNJHWVCBRDNEOPLTLZUZRUQJXNZMDMRDYFHFFPTYGFDSGIWZWJZSRWEITNEUIXTJXGLXUYCZQEBEXFITHHROKDYSKYUZSNJFKQGTWFIGMKNCLVPXGGWWHBZMKLROLJADMCEMXHXUBOYUPVS");
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
    msg.setTimeStamp(0.947139365034);
    msg.setSource(51555U);
    msg.setSourceEntity(67U);
    msg.setDestination(3146U);
    msg.setDestinationEntity(238U);
    msg.command = 122U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NDVFWNFFJKYELSSVAGBOPOO");
    tmp_msg_0.description.assign("FZNJAGBZHPFFZFRAEJSBMUROTSKNJQBDXPODNYGIVHYWKUABSFQLAMHVJINWIUSWUMJXINOZFETAMDDGLGFWCOTWLQDHTIZVJCEDBPGBMCEPBVINCJQMPYOEDLSTXKGPUXFYQMDH");
    tmp_msg_0.vnamespace.assign("XBUSNGGLVDZYFSRTYMCUKGOVBUIKLEYBPDDPFJUSTWUDLHEXUEIUZYLCEHPKOYFHSEVCTQWO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OQOMLARRWSJFAATLXYUOLGPRULLXFODGTIYAVKYFEJZXWRHZNNZPSTABKLIJWTASDCAOSUQCFHIQQMSJRUDXBQXDULXGDWOIHCOPBSKPKKONOLPPSTPIU");
    tmp_tmp_msg_0_0.value.assign("FPYGGWBJQDXKRZYOBMSJIDQZMCCLNVTTJETSVOOKMVGJIDXTCCLEAKMRAIBHEMH");
    tmp_tmp_msg_0_0.type = 41U;
    tmp_tmp_msg_0_0.access = 101U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DACRJDMDTWQMIEPGOYOFKUDMPCLXSYRY");
    IMC::Brake tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 19U;
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
    msg.setTimeStamp(0.28574284143);
    msg.setSource(64951U);
    msg.setSourceEntity(53U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(180U);
    msg.command = 63U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PBWFAUVKBNEZKZUGEOSSMQBIRBAJNJMHAODKTQZHNRDIQOPK");
    tmp_msg_0.description.assign("ANAZCRSRSLAQYPRIBQHUYDEYMHAEIXOAPLPHOGSMKZOKQEKAJSFNGVDIMOFU");
    tmp_msg_0.vnamespace.assign("GBPNTCHKNYQEIZOWMUVOBRU");
    tmp_msg_0.start_man_id.assign("AHIRYRWDUIHMTPOQPEHVISADMZOYVQWOLQRLMDSQPEXZIROAOUGPWTJITKZKHYZRBFWBQGLFATLMSLNFCVXXIWWRJNKHWXQZCURSHUYDQHUENSGYDVFKARCEDXUUPKFDZEWAJEGONJSRBVGMCZIGLGEXPZBWUHZFNITTSBNHOJGBNKXLNMUXMXPFOYOJMLBPYAIEVDYDEKOKJQKCNVPGZVVJFARYCTTHLTBCWACSMFTDM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GPDWKMKSMOHOLVZZBOHHBPPIJTGUOYXJIMAFAWINHJGYQEEUIEWPCJBXDEHGTUSYIDBLSVRSBQPSLKWRJLASJQNLYSTQAAQRIDVBMKVZNPOJQZHFCKIAHELRFCEGNXFCPLNWWQOTCBYYUBWYQTCZSDUEARNXRWFFRGLZVLPGCGZUOPMZFOTHDHTCEVJMCENFMYTDXXHQUVFTPNUXRAJMKAVLDIKOSNJMRBWZYVIKGKQZABXUDSEXIK");
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.916012526155;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.471466826077;
    tmp_tmp_tmp_msg_0_0_0.z = 0.541055986837;
    tmp_tmp_tmp_msg_0_0_0.z_units = 27U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.310863426512;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 106U;
    tmp_tmp_tmp_msg_0_0_0.takeoff_pitch = 0.125579673713;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MBVIARPKYWVJXOREXXKXUDFXATQLIQPFVXIJSJPBLAKMZVEWVHJQZIDYXHTGNNFCNZFWHJHSLSUOFBYNPUOHCYZPLBHAEPOMMKYKOFADKXU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanGeneration tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.cmd = 85U;
    tmp_tmp_tmp_msg_0_0_1.op = 122U;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("ZPMQJVYXYLCRVRFSVFERZFPBUSNMWSPXJZHFKIIPDONNLRDCNTLVAMIELTWMJMXJTQLOJGOWXXHEJCENMSTEGEASSLKVCZYNA");
    tmp_tmp_tmp_msg_0_0_1.params.assign("BPVPSOEFLDNGMUBPJEQBHMSPFYMBAWOYIMCCWJJCLVDYZVQTMOAKPHMJAQWAOLQQUDEZVYWUWNTFPFDHBDWGXYFAURNKXNZRAXTAKGTUENCYESQERIKWXGHGQKJRLXVSGTDDKRESLZGBKVDHNBINIQRUZBQPLPNUFTMJPGHVVLHJSYKZOIECQMFFBCCHSKWLAZIGFMXASOWUXCTRPXRCFSOIXKZXYSIUJZUWYNIRLDOZIHDOHYARMJBOCEEV");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::QueryEntityState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RIFLNZEFIRZYWSMOJVPGUQEICXCSKBYEXVFOADJMWIKCXDZVDZMRZONLTRUEZTAHLUMRBPGCAVTJPWVUFNAPNUJREIDYHNVNUGWEDJEGYWKTQGKBTALEQSCUXLOJIRWMDLFLKXTYYBGZQXXPQCWCHMCTDMDQAWJIGCPZIQIJZPHDOGOHPDVSANWSFFBFLAUEW");
    tmp_tmp_msg_0_1.dest_man.assign("BQWOUXZHNAAKTWVBCKNGSUWKVDCDERSWPCAAATQUIBFQKHMVZVJHXVSTZZRITXTNBRDHAHJRJEJGZLDNIIUFXCEMIKQUHKDYTEGOZHSLOKMHQXVRBTWGYHKTLRGQJALIUCPGWYANYYNEXQJCOPYFIGGTANCRXFVFZKIMSPJZUSBCTAOQPBERCOSJQPWULKFGOESMOUBMPNWFWFNGDLVBPUPOHRIRFEEFLQMMYJSXJDMVMLYXDICD");
    tmp_tmp_msg_0_1.conditions.assign("QWQAIXJOWVAYTTGNWTFWCRPTOXDMCJYGBBUZMGSWYYRLDAUKOCMFCCUIFSMZXGWHRKPPXLSLPVIBVZJAKAJQVQSNEBUSRTEZNQEPAQO");
    IMC::CameraZoom tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 202U;
    tmp_tmp_tmp_msg_0_1_0.zoom = 217U;
    tmp_tmp_tmp_msg_0_1_0.action = 238U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsFixRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.utc_time = 0.217649164646;
    tmp_tmp_msg_0_2.reason = 230U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::StorageUsage tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.available = 1476243144U;
    tmp_tmp_msg_0_3.value = 246U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.787857278356);
    msg.setSource(9681U);
    msg.setSourceEntity(122U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(188U);
    msg.state = 129U;
    msg.plan_id.assign("PDRDGEIOJNDIBBXWGSNGIACJQCFCXLSHLJHTBEALVQWZTXSBQNONGPUSOIOTFYQAJILWWXQOUUDPXVBSARDKFGRCHOMBJITFEUTSHPKAVWVJSBOMLQNXCUZIUMZCWLTCRRGZK");
    msg.comm_level = 250U;

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
    msg.setTimeStamp(0.323283847678);
    msg.setSource(35077U);
    msg.setSourceEntity(33U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(44U);
    msg.state = 83U;
    msg.plan_id.assign("FSTEGCPQOAIKTFQFEECUTTGJQDEXEYZLYWOCMFYWTHDPZIQWNRHJMZRFDWHAOUJMMVQJCTIOWLZPITKODYPXHFGCDSBSONDEMZREDLYMIABOXBGCQFNZUDYLCVDEBGFGJECHKSXLTRDBWKYXBLMHRAGRPXAMFCJGXVUFNEQVSLISOVVTWKUNNKLSIZXQUVAJUJRBBNKTNSHGRYVWBPPPZ");
    msg.comm_level = 94U;

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
    msg.setTimeStamp(0.483851523092);
    msg.setSource(59251U);
    msg.setSourceEntity(204U);
    msg.setDestination(44111U);
    msg.setDestinationEntity(140U);
    msg.state = 68U;
    msg.plan_id.assign("XXMDIIISGJIMUGBKUKRONDHKHDJGKMNLWVJOLXPGLHWNCJLUYPVQIXJLAQRXKUVDEZDMRFFNKTPRAHAPPAIDFBEGLCBERBTVETHIYUOYFZCNLOWEXUXWOZHSSGJVYUWAKTNP");
    msg.comm_level = 66U;

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
    msg.setTimeStamp(0.0260245522417);
    msg.setSource(2350U);
    msg.setSourceEntity(148U);
    msg.setDestination(24922U);
    msg.setDestinationEntity(5U);
    msg.type = 58U;
    msg.op = 135U;
    msg.request_id = 12491U;
    msg.plan_id.assign("NOQKZTUDAFCUMVYRVKMMHBZQWLLALDLVISHLJXHZQYUJXHNYTNGNEOPCSG");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 904459137U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MHIUTNJVVWYDNCWPHCHWWHEGOAUVFSXBHQXOJNJKCRNQPCJSULNSVKYTARCZBDSKKQYWDRVMAMVFYDNUF");

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
    msg.setTimeStamp(0.098777761175);
    msg.setSource(31284U);
    msg.setSourceEntity(224U);
    msg.setDestination(3865U);
    msg.setDestinationEntity(139U);
    msg.type = 108U;
    msg.op = 216U;
    msg.request_id = 32148U;
    msg.plan_id.assign("YCBUZMFIVQRMTXNOKZCCXIKFLCBALZWQJBLUGERRRDDJYYAGOXIWDBIYPDAAXRHFYURZHWYTSHVEXRVLUYNQXDVLAKAQGBZGK");
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JTXTVQXCXUJPRKSCFYVWBABVGSYVZOYGAMVWFRLWCGSTNFCCOKMUEIUOUIEDUURTHGWMGNAXZCQNMTBBTIAJEPLBL");

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
    msg.setTimeStamp(0.695074879992);
    msg.setSource(22893U);
    msg.setSourceEntity(193U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(164U);
    msg.type = 158U;
    msg.op = 109U;
    msg.request_id = 36863U;
    msg.plan_id.assign("SNKLUNPGRSAAFXYTHOFNSKQXIOLMNJOEHUKKWRUYFSPGFFDKC");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 180U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BRYNTPLSBUPHOERSFZKFDEDLQQPEPDKMVGTIRAWMOBAZZJYBTJHAHDOGBVUIXIYNFHIHZHUUGXXOFFZGCDHKPPQTSIECLNJFZKKOGVYPXCZXGNZLBPBYOQKLCAPAAVEIRXINMWHSDWMTSJIVGDMNYXORTUCXAQYEONCMFWEDCVUATJKQEMETOQORJGDUNQYVEPZHRSQXAXFNSUBJWCRCYDLIVWFKGTJHVIJRGSSFWLMLARKJNB");

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
    msg.setTimeStamp(0.490619394828);
    msg.setSource(53531U);
    msg.setSourceEntity(133U);
    msg.setDestination(48882U);
    msg.setDestinationEntity(102U);
    msg.plan_count = 30713U;
    msg.plan_size = 1686953442U;
    msg.change_time = 0.131069096896;
    msg.change_sid = 21535U;
    msg.change_sname.assign("JJSGNKKNLMYNESRCHATLSPPORPGVQTGACHAZEUNGIKIPWARPCUUPROJMWXIRFNUGQEAYEOKYOWQWBNOOABRETMWLRVWKMCBDUJKBDOBQHTMFCEXJZJBZFSCVLBLOKPTRWWPMLFFHQDYZTHSHJPJXZIHWNMVDBMYGUVYGXIVQYXJCHERIHXKSVYAGUXMNFGITDDCLOV");
    const char tmp_msg_0[] = {-14, 64, 14, 18, 102, -36, 15, 62, -23, 29, -39, 22, 2, -25, -112, -96, -26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.0916747197741);
    msg.setSource(5866U);
    msg.setSourceEntity(243U);
    msg.setDestination(27579U);
    msg.setDestinationEntity(109U);
    msg.plan_count = 1509U;
    msg.plan_size = 581008493U;
    msg.change_time = 0.760078514516;
    msg.change_sid = 26661U;
    msg.change_sname.assign("NJNFEZUFWXKPABUGTFCFTKLMOQWQXBCLPCBWFSZWMXTNUDOEZBUIOIVOPWYQGNDWAQCFEHCDGAKZPUYJAJMXLDTBYCEDIMKRQKHMSCLUGUPLNVLGQVNYWJHOXAWAVVOVYGVQVYUNOZNHXMTXDEAVZJRLQDGTPFABJLJIKODCIGLMPTSE");
    const char tmp_msg_0[] = {125, 104, 122, 126, -90, -86, 13, -36, 52, -47, 117, -57, 105, -117};
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
    msg.setTimeStamp(0.559899062295);
    msg.setSource(35165U);
    msg.setSourceEntity(190U);
    msg.setDestination(64931U);
    msg.setDestinationEntity(109U);
    msg.plan_count = 28180U;
    msg.plan_size = 270523468U;
    msg.change_time = 0.37001883382;
    msg.change_sid = 44034U;
    msg.change_sname.assign("XDBFYJATPJJYVQFEONAWUGLSLKTENOYGMAZMQZTQFBQZWOHQCUWGMRMMFHEKRVTPOYDRLLVBRSOGBHFFLVR");
    const char tmp_msg_0[] = {91, 16, 54, 117, -94, -63, -14, -76, -5, 29, 31, -35, 53, 114, 53, -113, 93, -94, -18, 59, 54, 82, 83, 93, -33, -33, -94, -7, -23, 49, -34, 105, -95, -28, 7, -78, 45, 48, 74, -3, 4, 71, 27, -128, -30, -83, -88, -93, -58, -47, 66, -103, -54, -90, -25, 55, -91, 62, -128, -61, -124, -105, -123, -9, -44, 20, 107, -10, -96, -66, -123, -116, 80, 126, -76, -104, -118, -54, -74, -113, 73, 116, 61, 35, 29, -43, -48, -100, -51, 4, -55, 124, -16, 86, 43, -72, -122, 22, -75, 102, 25, 116, 53, -124, -112, -69, 93, 102, -116, 59, -110, 116, -75, 101, -125, -10, 17, 110, -97, 22, -1, -81, -74, -98, 119, 114, -29, -126, -113, -72, 31, -66, -125, -15, 76, -51, 96, 57, 5, -26, -14, 113, 15, 91, -91, 68, -49, -96, -54, -96, 74, 103, -59, 114, 118, -111, 36, -120, -83, 77, -35, -42, 119, -70, -80, 68, 88, 18, 33, 35, -60, 101, -80, 108, -19, 97, -109, -95, 78, -100, -115, -37, -118, 46, 29, 38, 109, 115, 8, -3, 9, 28, 23, -119, 39, -30, -1, 37, 119, 16, -1, 24};
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
    msg.setTimeStamp(0.739467388916);
    msg.setSource(13599U);
    msg.setSourceEntity(33U);
    msg.setDestination(57152U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("AGPBNGULMWZEVDSMXWHFJZAAUJMEFOTMSYZTTUBJLNQYPLLKTPVFUDXPIWOBVZWHVYEUCDRXPZASDEWURQUTJPBLFBNNWSGWZMDTEVALZSRJKNXHOBVYOQFCGYQXRXRIHNRROCQLCKNWEJDTOWKXSANJQMTPMKZASNIKSTHIYCZCGVRSDBFFTBLVKGHEYXCIUOKNJHYAVIWKLQRPD");
    msg.plan_size = 32936U;
    msg.change_time = 0.403254225654;
    msg.change_sid = 41605U;
    msg.change_sname.assign("YAAHVYCOGHRQCFEUPG");
    const char tmp_msg_0[] = {-43, 102, 112, -73, -83, 52, -46, 75, -116, -10, 0, -108, -63, -33, -25, 35, 45, -6, 50, 48, 3, 119, 33, 81, 30, -84, -64, -92, -60, -74, 36, 0, 123, -6, -48, -66, 116, -47, 63, 40, -55, -101, -66, 56, -11, 68, 68, 44, -65, -34, -107, 5, -78, 35, -60, -39, 89, 47, -56, 125, 20, -32, -120, -113, 32, 119, 126, -93, -80, -41, 6, 58, 43, -104, -93, 68, 67, 27, 99, -80, -103, -101, 122, -70, 105, -110, -100, 125, 14, 107, 102, -118, -102, 9, -39, -96, -99, -89, -85, 111, 41, 106, 43, -88, 111, -32, -53, 33, 124, 112, 27, -62, 69, -118, -25, -89, -123, -20, 76, -26, -107, -16, 15, -11, 78, -126, -7, -4, -14, 36, -73, 40, -102, 121, 62, -1, -102, -19, -37, 98, 68, -78, 93, -72, 123, 116, 21, -36, 55, -83, -109, -20, 90, 84, -36, 4, 75, -18, 61, 39, -13, 70, 96, -65, 76, 52, -67, 66, 6, -20, 6, 48, 11, -36, -6, -125, -119, 83, 64, -55, -41, -26, -80, 62, 10, 108, -120, 72, 77, 65, 46, -47, 10, 71, 46, 20, 76, -94, 95, -77, 109, 65, -99, -109, -82, 90, -31, 103, -31, -7, -94, 11, -98, -94, 31, -15, 32, -53, -73, 37, 49, -46, 2, 27, -74, -99, -107, 121, 100, 24, -110, -39, -79, 70, -12, -18, -34, 103, -104, 40, 116, 52, -36, 47, -66, -82, -2, 19, -16, -49, 29, 26, 86, 87};
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
    msg.setTimeStamp(0.867216918637);
    msg.setSource(41907U);
    msg.setSourceEntity(69U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("LXBJHOAUPRVPISFPEGKDKKHEKWMA");
    msg.plan_size = 26879U;
    msg.change_time = 0.0927354520582;
    msg.change_sid = 10866U;
    msg.change_sname.assign("MXTPJKIRWSNDVINCJTIFYXUBNIPLWPXC");
    const char tmp_msg_0[] = {-102, -93, -85, 87, 116, -110, -107, 14, -16, 87, 13, 51, -22, -23, -22, 103, 39, -69, 13, -41, 1, 105, 73, 98, 83, 63, -104, 49, -50, 15, 27, 58, 2, 98, -79, -56, -67, -98, 21, 77, 121, 63, 33, -49, 79, 62, 110, -99, 120, 43, -10, -41, -69, 47, -106, -33, 30, 89, -101, 108, -65, 125, 2, 106, -81, 13, 7, 11, 107, -101, -125, -25, 87, 101, 1, -20, -76, -43, -82, -32, -58, 91, -3, 60, 58, -34, -50, 33, -44, -91, 95, 85, -97, -123, -66, 12, -45, -77, -33, 72, 4, 69, 42, 90, -16, 97, 28, 105, -82, -91, 23, 112, 47, -51, 8, -96, -60, -23, -84, -56, -128, 105, -27, 1, -119, -118, 84, -13, 46, -12, 63, 28, -15, -31, -83, -8, -90, -30, -75, 89, -30, 82, -89, 18, 112, 9, -56, 48, -114, -20, -100, 87, 46, 116, 15, -10, -103, 45, -69, 43, -122, 52, 55, -18, -105, 22, -69, -45, -35, -37, 3, -101, -16, -31, -60, 90, 11, -117, 0, 9, -61, 110, 51, -75, -6, 12, -87, -19, -73, 105, 25, -61, 71, -34, 19, -23, -27, -112, 51, 48, -31, 6, -84, 45, 2, -103, -108, -43, 74, 86, 106, 55, -31, 42, -65, 71, 61, -4, 105, 119};
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
    msg.setTimeStamp(0.16864564713);
    msg.setSource(43308U);
    msg.setSourceEntity(235U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("THIBHGRVILPPPHOCWJSTBIBFSMOLXNZSJUABNRRGEOJMXSDVLPTQAUOKEZFUGNDZFWFHQJUMKHWQWIWHLLJPNYBQJUQVKAYQNKHDDMIRRVRVXYOUGCCBJGHYEGHTYMCXNEXCIMASJPYNMNJBMBSGENUTFZWT");
    msg.plan_size = 48754U;
    msg.change_time = 0.808045826257;
    msg.change_sid = 39745U;
    msg.change_sname.assign("VNDNPTPBMKYWVWIVNXGCWCMIYJGCSSEJMLHIKKFFYCXKWSQNTCOBYPRVFYBDXYFRQAKXTSGZOUVLSAILJ");
    const char tmp_msg_0[] = {38, -58, -82, -60, -83, -128, -35, -10, -52, -62, 29, 123, -57, -87, -39, -54, -61, -89, -33, 110, -117, -115, -1, -67, 70, 4, -50, -31, -56, -103, -124, 103, -12, 19, -110, -1, 23, 56, 38, -73, 73, -31, -58, 92, -94, 100, 78, -106, -104, 15, -61, 54, 68, -117, 122, 53, 60, -13, 35, 62, -23, -90, 73, 110, 11, -123, -123, -85, 2, -27, -71, -44, -29, 27, -63, 112, -59, 29, 97, 8, 100, -37, -56, -118, -41, -57, -83, 35, -57, -26, -61, 76, 109, -85, 122, 25, -51, 91, -75, 22, 74, 21, 3, 85, 119, -57, -7, -65, 65, -70, -72, -39, 47, 58, -50, -126, 42, 10, 87, 51, -108, -88, -61, 17, -53, -128, 32, -19, 22, -39, 32, 74};
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
    msg.setTimeStamp(0.666774591418);
    msg.setSource(30878U);
    msg.setSourceEntity(129U);
    msg.setDestination(38075U);
    msg.setDestinationEntity(87U);
    msg.type = 123U;
    msg.op = 254U;
    msg.request_id = 13004U;
    msg.plan_id.assign("QJRIHYXMEXEACRIJURDXURGRBZPOITLSBYGCAWOPHIXLNAWQVFCEVAWWCBUODJPGPBSCPDKXGJTNHOEMDQWGYIHNNBIQZWBFPZLEMUDSQVQPYRADFKMEFFXTJSNHZUWEIMLXLEOAJFLLBZMCQQNSFJWH");
    msg.flags = 18932U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 2502935054U;
    tmp_msg_0.destination.assign("XDRBMEBZYANZIDATRJVGUJQXFDNENDVECBTNGQGYOIQKAILCONFWMNXOROPGVAAEIDSKWDDLHYPWTROBZWQMAMGLXOZOEIMXJTTXPZFYYFSIXOTZJCDAQHTQUHPURPJQKRKHWMUCEYSGCFAKJLVELSVXBNOBTUNSSTWRJFJRWMCGVLJLZYGYOYPVAKFKWWEMTBUDLBVHHURZJGPI");
    tmp_msg_0.timeout = 52088U;
    const char tmp_tmp_msg_0_0[] = {-11, 20, -69, -39, -108, -114, 11, -35, 50, -7, -30, -41, -3, 25, -93, 64, 111, 68, -89, -61, 37, -36, -95};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JQHEYONPPMVGVKQPYEWBBMCIQCHVDMMEJZRVFOXSLUXDXFIIOKQJRGXGTZNDLMPRUJYGWTWLNEAKZYXLHPYWUMDDEYUPIBZGFBKMFNHTXDIULFOIKSZGVAIOQNQALPOKNYRSYSNTXQGMRJBWSZKUHXQIYRHUUWMROPGRCLBPTFVJULYOHJGCNCCTBNWWCDEO");

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
    msg.setTimeStamp(0.458490445531);
    msg.setSource(30815U);
    msg.setSourceEntity(16U);
    msg.setDestination(20736U);
    msg.setDestinationEntity(56U);
    msg.type = 1U;
    msg.op = 197U;
    msg.request_id = 56613U;
    msg.plan_id.assign("BZUTKDPXLRVWDUNZOHRWYWLQZLPJESPSYCO");
    msg.flags = 55565U;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 41U;
    tmp_msg_0.goal_id.assign("MPVNPHOZSYDZRXDJIBXHYHQLBAKXRSCLYBAVTHAYZKYFFJVUKESEJGXDTIMQNMVINQUCDQKEDEESMJNPTXPOXCAQYTXTBCWCIPAYJILMPEHLFUIORTKEXSULGLGRDOEOUXWUFRAPRQMRNBFDLRSYGLAWZFMNPPSNRISZDNBBKYWGNFTQPAVIVTFQZLBOMWWZV");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("ZYFQHRIWNFLDRDPNJWSUMIKWGOKDSBDOOSZHUBDJTOZWUPVDKIUFEKSNRYBBQZCVVFHEXB");
    tmp_tmp_msg_0_0.predicate.assign("EEPWDGVDOCYZMASBBTHNDTRXVJGFJSICKEVRBUOEXKHAUZVSNUVHQBXULASHFLGTKIELHFPGUJPHRQFGMNZLW");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("IWZTNTEOYVGXNHRCJXYPWQOZTSYYBGMVVOTLHUVUAVHSJKNROIJMQAXUOPCWQGBHDQPTWKDXZVQSLUYJDNETHBWTXMIFPFEZQVLSDKYLMQKJDXSNMYRBZFBXUIREZWELNSYE");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 31U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("PYSQHMJKCXIUMRQDZTKOTUG");
    tmp_tmp_tmp_msg_0_0_0.max.assign("LXHWVXTRTNSGUTHBEEJYOHPIXNSNNVQOIQKPTAGJLFCBRMKWDBUCKJMYPZLKIPVIMDYNXDGMSNJJALEDBZPHOMQKMAIAHGGTVWWUSGIFJRSBFICSJQERMZVOFLKCRYVANZWEWPBCFARIYECNVQSKLZHPCDDUMXRFRRIGBOYAAWLOXDPJOWHXTWIUZAPUZYMQVVFYGQSDGWOHBETELTJTXOUZXVY");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TUMTCSFKPIGOPDWFYCEZRXVESVZBYYACFGIHMXQIOWCKYOXA");

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
    msg.setTimeStamp(0.637275979526);
    msg.setSource(37219U);
    msg.setSourceEntity(72U);
    msg.setDestination(61224U);
    msg.setDestinationEntity(49U);
    msg.type = 222U;
    msg.op = 219U;
    msg.request_id = 25480U;
    msg.plan_id.assign("DXQRQPTJZFERWJFJGWYHRWOFVLXIWJSEKVMIMSFUYRMTGDBMUTLXBXOQDENUGTFOQRCQBDKOQASZZLPWBCLEHGHNHANRKUFPCYELSXMPIHZFUHQENKLTMBKKSOFKNEOTRFUWCAYJQYVEMTWNOIRAHKTYPCBVMLZZKNSJAXNUVJVZDGTAAYX");
    msg.flags = 39782U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 9950U;
    tmp_msg_0.rpm = 0.587231512496;
    tmp_msg_0.direction = 38U;
    tmp_msg_0.custom.assign("YETBAFLNUAIDJFQDMWZVFIXOMCLYXNU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QFUFHMKGYFIHLMEEPSIXXUZMJNTNCOUEQRDMBFZJBILSVMZTMKSUKTBJAKBWQHKGDYUSSWNRANPUGCDHVRDSOJCAJCHRSXWVPILVCBOWNQDGGPODIZAZSEKNCRBXJRBVQFEHALCNXWCMUCFXILFUXRVMNBPVBH");

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
    msg.setTimeStamp(0.593424222095);
    msg.setSource(55073U);
    msg.setSourceEntity(234U);
    msg.setDestination(40683U);
    msg.setDestinationEntity(105U);
    msg.state = 251U;
    msg.plan_id.assign("MUPPBWRNGKXDXYFYNARYVXKWVIKQLKWTUAEHTHTQAAVBKOISISNWRLLGFYHSOLZNPVCMXLUDUYEESPCWIAOBWOJMUHJEEHAACHCMQLLOBSZKCJXEFVWMPUBCJWOGUPYDCJRUDIKNYEYRHJCZDZTGFISBQWOHAWPAPYFSLSDUVQFGNJFDZXEGBBSFDFSXZKZUMMTXAGDQRRLNEQTNV");
    msg.plan_eta = -880514250;
    msg.plan_progress = 0.391054679712;
    msg.man_id.assign("XKQYZCYKYXTETWVEJRMCWFNYJAIJFJZDGPGSJYDELPIXCIILOABHFGRJGKKCEALXZSZWUKEHJAXZLRDEZYHPSTHYNZFUJMLHKEUTRVAKNDAOMWVNYINQHSMWWVXIRLPZBODHGEUIPQOTQDBOTGLNUBCCDKGMOQBUMAEMRNTBOWTLOBMDBFNPWALSTCNBFSJVHWVVMHPPVVRRIQNCGIQGOUEDOYDXUGXUXWV");
    msg.man_type = 60122U;
    msg.man_eta = 674883979;
    msg.last_outcome = 247U;

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
    msg.setTimeStamp(0.0399600764136);
    msg.setSource(15269U);
    msg.setSourceEntity(92U);
    msg.setDestination(25886U);
    msg.setDestinationEntity(163U);
    msg.state = 231U;
    msg.plan_id.assign("SRZQUEBYVVZYPJUFKRFMSONLRWYQGZVJAPWVCSIGMDUBQGOKFLQAKNOBEKKSFTDRNFDKUTJSLCZQGOPUBASNXZJGRQWXWROJWHEGIZEZDHNCNEYSXKACMQNHLZRMWSEAJLLAZAHMQLCJDRBROUBLTHMSVNDYTWUPUIBXCPYSYBEJMHCXEEDPQFBYIIWMOXGILOXHJVYGWXKLDNVCTYUCT");
    msg.plan_eta = -893728321;
    msg.plan_progress = 0.993713181941;
    msg.man_id.assign("TYTQSNCIPSARBCYPZMJVXZAPJZEGPTFKDVATPAAVWOHBEEPKITUXSDFHCLHXZENWHGMPKFHRTZTDMOKVUPNIGAFJFCDCQTJVSXCBGOYDNEFVUCVAT");
    msg.man_type = 33976U;
    msg.man_eta = 46615664;
    msg.last_outcome = 94U;

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
    msg.setTimeStamp(0.285936971932);
    msg.setSource(53004U);
    msg.setSourceEntity(220U);
    msg.setDestination(17734U);
    msg.setDestinationEntity(246U);
    msg.state = 213U;
    msg.plan_id.assign("EYZBICYVYDDWXXJQLYDVPUGNMZMURPKKPWEOAH");
    msg.plan_eta = -527757582;
    msg.plan_progress = 0.765606310743;
    msg.man_id.assign("NABSJEXYQASPPHJNSNZPTDVCMXTQTUGISJBRICAKNREDDLJPTNBMQQXYSTQFRKDBWGOXVFANBUHVMTVKBMIYMHDNBEFLLEZYYUIANQPRDWGHCGF");
    msg.man_type = 23370U;
    msg.man_eta = 200637510;
    msg.last_outcome = 239U;

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
    msg.setTimeStamp(0.000202774004417);
    msg.setSource(34212U);
    msg.setSourceEntity(108U);
    msg.setDestination(46789U);
    msg.setDestinationEntity(198U);
    msg.name.assign("VXBEMKBMZWIIYUBTZJKHKE");
    msg.value.assign("OQFTZUBAJQZNHMRYKGTHLBIWXDLSBIAOZIBWVTYOCATKXYCFVGEUAHJXVYRNLAFEZTWHDXMGYJTCUPPRKTMGMOQFJEIFNUCWLSPSVYISYOSGBOEPXVNIJLKPSZEODYLXTQDUNGHKXELBWOEPYKNOERVZVS");
    msg.type = 214U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.397099618434);
    msg.setSource(16044U);
    msg.setSourceEntity(210U);
    msg.setDestination(52471U);
    msg.setDestinationEntity(63U);
    msg.name.assign("LZFAQJDNAZCMEOGVNRCOYIOVAMOKOMYPRIKZIDYNQVOJKBWCGYXYPUTMATMSVPERWXQXIQUPTBLZJHVKGQUGWJBQZEHXWSMRPKXCXFUHVYNOFWTITAAKRUFZEKQJKRVAIJBLINFODSDCWLGYHYBLJBPDWSGQDMLCHPUFLYCCXFGZCSMRTJZWWNDZYXIAOSHVNVHDITBQKEMPISJSBQEPRXFTOJEUWTDFXLMAUBLSRTZNU");
    msg.value.assign("LJPSDNWCIVFVQTLKRZGYVXDFXHATZEGWAIFRLURBHBHCPGXLPKZAMTHGOONLUCTZWZMKYVNXKGAQOACAQKJFRUSIYHZLIBGVCBBSCJDWKXKXJWXTIOCYUQZNEFHIFNEMMIDQETNERUFMLPPDLUTWOFSOYSUIZBBPKWRDXGHTOJSJZCREQJENUMVPDAPGVELJYPVSRWJYELVZAYIOOFPBMSEQHRWQSTURJNIYWYNDCQVFONBCMHKXTXMSQBHD");
    msg.type = 181U;
    msg.access = 160U;

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
    msg.setTimeStamp(0.559442802177);
    msg.setSource(17589U);
    msg.setSourceEntity(28U);
    msg.setDestination(49466U);
    msg.setDestinationEntity(163U);
    msg.name.assign("SIHPQNJZPUKWEYPEPDVGWRVLQGTMJFOVHCNRZSUIPKKKUTYNMFMQEXRGNXAYHKGOFRQGNLZTXBZCZQDVIIPVOWYWFZAXAVOVQDOXMUBUHDAYYDMNDGMVWIBBXTECIZIOJTDFZIRMDFRWLBEJUYLTFTTDWXGPBBQNEBHQ");
    msg.value.assign("KSMLXYEPJDCYWLMHISQHJAFTBQVHPWEBRTGKVXQLWSDQHCGIZGSTMYXAJBQILRSBOCIEOKMWUWNBRARDFPKWPBYIVTKDVNFISZUREQHPQWKOXULPHOZPFVNIDGMSNQBVVVYDKHAGECXONIUSJMFNKRHZARXGGWVCALXMNTOTFCATJUZLXDQLLKOYATMBRDJVGYJEPBEYNFOY");
    msg.type = 84U;
    msg.access = 48U;

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
    msg.setTimeStamp(0.299139347238);
    msg.setSource(38530U);
    msg.setSourceEntity(226U);
    msg.setDestination(46114U);
    msg.setDestinationEntity(140U);
    msg.cmd = 188U;
    msg.op = 107U;
    msg.plan_id.assign("HKPMGDXYTYVEJBK");
    msg.params.assign("NSIBFZUHOACUIIMHYYZERMNYGJHORTWSUXVEFBHLKLGOGJPANUIEQCCJTMK");

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
    msg.setTimeStamp(0.676805209968);
    msg.setSource(45551U);
    msg.setSourceEntity(15U);
    msg.setDestination(36856U);
    msg.setDestinationEntity(14U);
    msg.cmd = 101U;
    msg.op = 82U;
    msg.plan_id.assign("XNPEEUMEYARFMSVLSXSWPDEYFFJTZXHISCJUKTDGOFIJVRHJDORBSVBNKOUWQGQOLJAKQHIVKOTQGURSYZQLGZTYFIAVKWXPYGGILXLFVMWLXXWIOVGWRMVRWXHCINCAHQTTMKRAKGPGNJOTRIJEEYAEPGBVKYIHNCBUAXBVORTAELNDCBZQSZUJPUMNQEZTCUHWNSDLOZBQXDCCMPFHBWEIRAMCCODLQKPFZBZKDDYPFUH");
    msg.params.assign("ZYLMPNLMJLIOPXAUNAFHHZBKNZOTHWAERKKXRGQTFBDOOANKJXUYJMMDZOXEBHEACFYRNUFOGLCTEMVPQKWRSWJKPLGVRIYGNODCBZIMFKSBAREZFDHNSPIGMUCQAEQCSLPWMBTYDTEPISAIVC");

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
    msg.setTimeStamp(0.0371848025556);
    msg.setSource(23746U);
    msg.setSourceEntity(193U);
    msg.setDestination(28382U);
    msg.setDestinationEntity(236U);
    msg.cmd = 88U;
    msg.op = 143U;
    msg.plan_id.assign("ZFGRXRZSXCSZSFOOKPYUXKGTDHBYSHRNVHZZLXFOLMWUDEDQGANGWFBVAVNYTPOLVDYHMXQHBCIBXEHDZPMKWTEEIJPYJONDQMPMROVZGUANERJMVDRFIQJLQNATBNMTSZPAJRODWSLYAJLXNFZURVYUUYGTUWLKJFTFRIGFKVRUIBXQWEYJAUHHWYXKJEHCBLJQMOWSITCWOMXSCKCIGAOCASLHLDBQTVDPUPMWZNPTCEQKGASIB");
    msg.params.assign("MRQKUGIOKUTKHUJCGEXYHSLZQQUDJUMGKSSNOBVHVPTFDNKSJZTZLAGAFTNEDPMASZOJFWWUZGOW");

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
    msg.setTimeStamp(0.343815654021);
    msg.setSource(23900U);
    msg.setSourceEntity(105U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("CIGFHMGJPXBHHXGDPSTNUFFTWXQOKDSEEGVWLHUGQCNARAYLLDBGUUCXZSYPYTTRUPVZATMAZIEMK");
    msg.op = 76U;
    msg.lat = 0.154226141271;
    msg.lon = 0.838337647844;
    msg.height = 0.994081166633;
    msg.x = 0.257605122195;
    msg.y = 0.853727823848;
    msg.z = 0.403637999833;
    msg.phi = 0.456789223299;
    msg.theta = 0.593501716769;
    msg.psi = 0.292503744366;
    msg.vx = 0.78880018181;
    msg.vy = 0.474605685141;
    msg.vz = 0.785710791008;
    msg.p = 0.00923305343361;
    msg.q = 0.950455502509;
    msg.r = 0.893423352406;
    msg.svx = 0.83801230264;
    msg.svy = 0.405094738708;
    msg.svz = 0.0466978236879;

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
    msg.setTimeStamp(0.774446482246);
    msg.setSource(43609U);
    msg.setSourceEntity(19U);
    msg.setDestination(36395U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("XEZNUJPJKSMAWUIHHZVOHFZTJJWVRBMWCGRCQYNJPRICFTESIFSOECOKBBOVKSDGNSIBBBNCUBQGINXHMJGIQZCFJLXULSEDRDHLNFDTVAZFIGUSZNTYDTYRTWCZOWHCTURUKQGHAGMNXGQEWXLRXAPWFCQLROXPCZFAVL");
    msg.op = 105U;
    msg.lat = 0.964711787169;
    msg.lon = 0.0215645888339;
    msg.height = 0.238941639287;
    msg.x = 0.166313136638;
    msg.y = 0.6512984679;
    msg.z = 0.972983550104;
    msg.phi = 0.625992192604;
    msg.theta = 0.525917152329;
    msg.psi = 0.524003366501;
    msg.vx = 0.537886310258;
    msg.vy = 0.296803123357;
    msg.vz = 0.398992568304;
    msg.p = 0.360193066779;
    msg.q = 0.671090157644;
    msg.r = 0.813388035138;
    msg.svx = 0.0517416516273;
    msg.svy = 0.650573352771;
    msg.svz = 0.859469340834;

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
    msg.setTimeStamp(0.987019471285);
    msg.setSource(45122U);
    msg.setSourceEntity(35U);
    msg.setDestination(46335U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("TIZSKYIAAPPSIOBXNCLLSZBDDFNQJAXAIJJOGFBDNTMCBMICFEYUEIGQNWRGSVBFRVPXCAZVADRZOTIUWU");
    msg.op = 162U;
    msg.lat = 0.230737379226;
    msg.lon = 0.204897611764;
    msg.height = 0.644644021877;
    msg.x = 0.453007580818;
    msg.y = 0.0652617361031;
    msg.z = 0.878304033464;
    msg.phi = 0.547478557303;
    msg.theta = 0.915847812674;
    msg.psi = 0.729281864515;
    msg.vx = 0.823918928684;
    msg.vy = 0.888012161817;
    msg.vz = 0.328952296159;
    msg.p = 0.0302890105571;
    msg.q = 0.81620522611;
    msg.r = 0.106465292953;
    msg.svx = 0.667361766652;
    msg.svy = 0.532594571246;
    msg.svz = 0.202985303176;

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
    msg.setTimeStamp(0.656280493899);
    msg.setSource(16043U);
    msg.setSourceEntity(50U);
    msg.setDestination(2644U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("SOFZWAUELVQNNOYTYQRDXARNEPPIWUQZYQVHTJGAXIKLZCZUQSUGKMYCPBFPCKUOKFJVGZEOLRMIPHSIVYYRNBBGNMXZHRXFJDLOFCFGPHVQJCZPBJIAGDXDLLOUOEZLNHKYWDCIQTNSSFOGXAZETOLSMSIQWTEQUMXMDNCKJDSWQEDBGUBRTRTJXIHRNWFCKTFXFJWDIKNAKHIRMYBEGPHWAETWYRGBABCTUU");
    msg.type = 53U;
    msg.properties = 214U;
    msg.durations.assign("BSLDPQIDXTBGFSIQJGXNLWYQTZSBQLGUUMFQXXHVUXAAQRTHNEKVZGMDDONGWKLLORVHZHASWIKBDGLBUMHJRZAQNHEWWSHJPMXTOYZYNPQYONYMANDLKCOUBGFRSODUPJKUAIWIFPKEOFJSRCVOQIZBRMXSDHIFXFTCFHLZKWJIURJKCOJKHVEIZVCM");
    msg.distances.assign("UTVEDBAGHIIFAWSIHOBNPQCIDCNTJWQHZHKRZLUQYOUNKRUSWBEDWKVYEMGGTYWNQBYEAUINTZLILOGRLKULMCEBCXOATBSECGSHAQVYFPXGXWONKAYYGDMVBZIRERZFTGVCRXSKUGYRDVAWJKOTIKFJTENMLSKWFZIWLMJ");
    msg.actions.assign("GWDFPMWNMMTNHCOBCQXTIDFHBVZYQKMYBGLOOYRZGTZGTLSSIVOXRMUVJLEKF");
    msg.fuel.assign("QMRZLLTJKPDBXSQKIGDVIUIZYVZYRRAAHWYDINOPLENVEUQUEJGMYHRSD");

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
    msg.setTimeStamp(0.484009861781);
    msg.setSource(37188U);
    msg.setSourceEntity(70U);
    msg.setDestination(42045U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("SPDLKKCVMAYBVQZNRZVNDLRDRZOVEHMXTCWCMQSABPKJFJOUPNDIUBVANYUZOIWIHYGQBGSXHNOWIOJALIHPEIAACCXJYNJDKPVDCBGHWJILPYAKFTUFFURBJLEKUBCTLTCUDJXJV");
    msg.type = 213U;
    msg.properties = 201U;
    msg.durations.assign("RFXMKDHGIQBEPEFUNFIPQIHKULSZSTPCPWVWJPYFBFMAWETPBON");
    msg.distances.assign("NHTYSQNXNIMZSUACOLYCMPPMHBMRWPGTGKQKHOZWBYPIMLQENHOUOVTTINGVSELCGRBFRQKCDSPXARARUSDABRVGDUYTYJEJSYZVUJCDJNMDIXECLJWFZKWAQKVVKYHJHGXSPEAOGLPXLWVFUUZIXSXTJYTGFJNKDGCDRXRMWWMAIHAFDWEVLTYPOPZTSONOFALZQKJYFLIBQRDBBPNEHINXMRCLZQVBGHCQMFEHBOZKUWWCDSZ");
    msg.actions.assign("MMAYVGLIGKNOCMGDXMTRGYUZAVCBUKOTQVXA");
    msg.fuel.assign("IYGEURVXVJRHHILSHTVCCCSITKVSTPCGQEN");

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
    msg.setTimeStamp(0.708615516791);
    msg.setSource(60867U);
    msg.setSourceEntity(43U);
    msg.setDestination(12819U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("AFNDUCSZSYMTDGRTFJWEJEXLJBKCGYLFJLIUSHOR");
    msg.type = 119U;
    msg.properties = 73U;
    msg.durations.assign("TDDGYPXDCTXKLLGXZONMGGNYIPSIQBJCFRCKHNQWFYQHZRNWXBNXMGRAQBOXBUTSVWLYDIOZEZVCPUFDOHHFUVTWKQWLASXWIDSGEGJZITMXFZLUZDCROOHLJNKYKVBMBPMFUPYGEAECSLQDUISGMOUYIRLKWOJHCTSABFRQEEBHLIHVCHZJTQJKVWEEZNRQVZRJFBVSMKCFTINABVJPTMTPHDYVCAXOWYMXOAMPAJRYKUIGUU");
    msg.distances.assign("UBUKVNRAFRDZOLCGPMQAWUALEVUVZOTZRSKQAXECXFDKROPYTZPCREYHJFBIDHDLGQCQOOVKKVKOJWYFGRXYUQVDMMWFSEEMPUYNIZRJQXNYJIWPLMVGRSSLYUIETNBSOTHAHHNLDQMFBTWOOSIXFYQFMBANITCZXDCSDFJSXWAHNKWBQTMEGBGHJUWJWDYMZGDVTAIPRCSLPHXECVKGGBJWHCBLTZKEUCIFPRUPINKJXZAAPOGXIMVLBTYSJ");
    msg.actions.assign("PMILKHQTXSYUGZTTSCNAQBRMOXAXIKDWYLHIYLNAGETVSTVPFIVLOEHZVMTIPTXOCZTYJKMHEKNXELVFGVAJBXNIIDE");
    msg.fuel.assign("NIMXZROSNFTQLSVXUTVGKMWTCWBSAUCWYFBNPLISUIRHUKZDKWNACSQYNPIOJAHCXRLYYCUSHGMAMANOZKXQBPMKXWMUMTQLFXZILVBNVOCXZIRMYQHFSLIUJGIGDTOPKFI");

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
    msg.setTimeStamp(0.0570718402102);
    msg.setSource(63209U);
    msg.setSourceEntity(88U);
    msg.setDestination(41533U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.47743112735;
    msg.lon = 0.888264647427;
    msg.depth = 0.173033729567;
    msg.roll = 0.564248808773;
    msg.pitch = 0.00463695477079;
    msg.yaw = 0.803767165543;
    msg.rcp_time = 0.935770194903;
    msg.sid.assign("UPJAVEBRFNOFKFKKAEFQTLGZVDBXMVVCLDWNXBVMZVJONKZKPEJQEKHJINRHXQGVVHNJMBFLXDBNEQPFRQAEGIDTNLFLZINRWZBYAWOCDIG");
    msg.s_type = 140U;

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
    msg.setTimeStamp(0.00414724240936);
    msg.setSource(56014U);
    msg.setSourceEntity(165U);
    msg.setDestination(50969U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.0583675486233;
    msg.lon = 0.819399344123;
    msg.depth = 0.740925857786;
    msg.roll = 0.344834985358;
    msg.pitch = 0.0331145368602;
    msg.yaw = 0.619897974643;
    msg.rcp_time = 0.0871475329897;
    msg.sid.assign("XHYKAVGZSLMPUHPHRVIQMAAHVSXGUSOSMNVCAELWCNWMBKERVKCVPMWRXYAZAHJFIRABKGNTFEULJPWXCDTUOBREFFXSFSRKNNUXBRLPETEHZBEJCTOSEQBPIODHDLIYWBAYOTGDCSOPGPCBSNVJRYQJWQQIHWDUHTUCGRBQZVEVIQOZKXTZCLMSKLMZPWNTWOFBJXYJNJGIOJZHFTLNCMR");
    msg.s_type = 234U;

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
    msg.setTimeStamp(0.0186346470182);
    msg.setSource(10204U);
    msg.setSourceEntity(200U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.186513517645;
    msg.lon = 0.461158318976;
    msg.depth = 0.809193886866;
    msg.roll = 0.825194682181;
    msg.pitch = 0.787676741232;
    msg.yaw = 0.251208301633;
    msg.rcp_time = 0.456442345849;
    msg.sid.assign("JZJELFRGBXVJMOUOWBRNKEYMPIOKXNIANMDJPQVGYTJPRKAZCRMACYDDXAFOROBDOKZEWBLOSVFYTBHFEYZJZBMZMTUMNEUCFGBITBVEWSNJVHHCASIWQCG");
    msg.s_type = 123U;

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
    msg.setTimeStamp(0.106640768421);
    msg.setSource(25207U);
    msg.setSourceEntity(46U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(27U);
    msg.id.assign("MVKBLJFEVBHWINYLUXUXEMZXJSKRUCRLFTTJEVOCMBODJHAYRPGNWJZAYLPTZHCPGWTYHSQVFRBKZOT");
    msg.sensor_class.assign("UBYUTRJOCWFVCJVEDWQINKVWUXIHTNFMAHHVHCLRPMEGKLGZZETSJPYBIIYQWRLZXWYTTDESXAQILBAVKBGYIEMKYGMPSGYPEJGMBTBVOLUDANHRQOFPOTBWZYKLDYMGNCDNZVDBISSWGTGONDSKAQDOCKUFPZTBSCOOEHRSRTOXKOXHGQFNHSXBJJQVLHKKJCCNHPQXZJZXEWRFUQN");
    msg.lat = 0.471776270409;
    msg.lon = 0.182001506208;
    msg.alt = 0.141605596531;
    msg.heading = 0.930997134557;
    msg.data.assign("WEZGFNAIVTVIZUQTRHSFM");

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
    msg.setTimeStamp(0.513584585523);
    msg.setSource(44542U);
    msg.setSourceEntity(159U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(81U);
    msg.id.assign("FUGEURHZBANTC");
    msg.sensor_class.assign("LIXHTHRQNAAYHESDZKO");
    msg.lat = 0.0151308829008;
    msg.lon = 0.469705272813;
    msg.alt = 0.95267100807;
    msg.heading = 0.213536162721;
    msg.data.assign("GHJLXCKZSTJEPABNDVSOOLNMOHDDOXTPTVBSPNETVSLVRCWUWHVFKLAFZFJRRRAHRIIWKMQNXCBXKZFXULAVHBUUNCQYZCYGCWNIXWELWWZPKYACFYDSFDRSPACEWDDAGTIMKHEMTFFXHMFXUBEYCGIHKSKQFUJMAEVOBOPYSVIMUYMWRZMGQRRGLKOTPZQBTYYDLJXULJSAODKNECWGPNNZIUELZBDORJJTPBHNGY");

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
    msg.setTimeStamp(0.318198231086);
    msg.setSource(52528U);
    msg.setSourceEntity(129U);
    msg.setDestination(64476U);
    msg.setDestinationEntity(147U);
    msg.id.assign("NWFXRFYHIGKNVASSITQTPIGNEKD");
    msg.sensor_class.assign("FBQPGOFFRQQOZCVHCRHKWGBGVXLMAHYUYOQADZTJMXXGTBCAWENPCNLMSRKLDUVKSIXRINWAWEIEPEFIVZJDLNAXRUDULJCOVVRLPTNYGBXUZRSJMMTIKMYSTFZQRTZXCGBSQENYNCXOJKDEFSPPTLXZCFSCPJSTBIHJHEAKONFYGFALT");
    msg.lat = 0.745819672942;
    msg.lon = 0.704375531631;
    msg.alt = 0.0351239655473;
    msg.heading = 0.744429192402;
    msg.data.assign("UQRLFAQIVMTDDKVNMFIPRVCAUAQARWECWBVLJSJQMWQOXGABZSIYDNRSPNTEHASGSLMKBPXMESBCNHQZKZJLRXNKELHN");

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
    msg.setTimeStamp(0.834607965028);
    msg.setSource(47019U);
    msg.setSourceEntity(208U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(241U);
    msg.id.assign("DONAGWBAASKWILIJMFKGFYCKQUYEYPPVECHQTXXHVBFLYWORZVVDRDZOSJXWNPNMKJCHIOTVGYROM");

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
    msg.setTimeStamp(0.372290303286);
    msg.setSource(21493U);
    msg.setSourceEntity(89U);
    msg.setDestination(47867U);
    msg.setDestinationEntity(243U);
    msg.id.assign("MRTRPTCGWEALYYIOIYUOUSFRLFIXEZYDADDNWKNFSYUVCSSJDHXBQVHCHOAWJJZSKLJLWXLBCSVOHXZLMURAKOMMQNZPZRJUKEFPPQBEANXSHIBIISNYNTKFHGZGWACPFSMRPGCGVLOYQVRTMDTNLTOKNOUDRFCZUIOWIBQDQGHQBPFGBUCJNSYJLAVKIBCVCQUKXWVEKRRF");

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
    msg.setTimeStamp(0.923622982439);
    msg.setSource(48432U);
    msg.setSourceEntity(128U);
    msg.setDestination(44698U);
    msg.setDestinationEntity(243U);
    msg.id.assign("TALDRYEHJKASSGUKEZEYFQWVCSEDBLXAODEQZPEIHMJYJIIJFVBCGXQZRRIFHBBMNGZEOGLXJKZOUBBDRXJXBTVSXLNSVPWKDAOJMJRWQGKLIQCANYWHZDQPRCBPTDRAVLVUARWOCMLOTEYSTPUURMGRIQJYOAFYKSQEXFGMNGPZTGWTABWTFKPYMQVSYWKFHVIUCCFCSSHHPOMNUAGWMNXLFEMVDNPIKZIOCINTPXTUUZCFNDQUNJYKBHLZW");

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
    msg.setTimeStamp(0.421169849759);
    msg.setSource(52071U);
    msg.setSourceEntity(112U);
    msg.setDestination(37528U);
    msg.setDestinationEntity(165U);
    msg.id.assign("VXVJNIEEHXSUSZZBCRJJRCDAZYRDCXTSIBKORJWLGFFJXEHLZRKIQTAAODOLQAFQFPZXONLMTDLGGVMQEMFHTJPHFXOVNLQGWEIZEPZKHGPSVUVNCLHHPWSSIHIGNMADCOTUTKDICSICBJQQJEBKDGUPCUBIIUSBOSHMKL");
    msg.feature_type = 146U;
    msg.rgb_red = 127U;
    msg.rgb_green = 5U;
    msg.rgb_blue = 231U;

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
    msg.setTimeStamp(0.427168735235);
    msg.setSource(42574U);
    msg.setSourceEntity(235U);
    msg.setDestination(14791U);
    msg.setDestinationEntity(3U);
    msg.id.assign("MEUOOWJWLSQOUGOJQPKXMQSOATIXQKPAJTXNCJEBUUYNGOFZAPNNPHSFKCRDRTGOLALEPFCARFBAANZLHGMMKUVRTIXKFLGRLTMGMHSSESJHBQADDREYYWUQGCYATUHLJKHTHDZZYMEVPXSVXRZONHBWZBESESWVLCGBDBYWJCVKGQWLPCBRIOMNAVXJQFVZVEYPPBIGOQDJRVKCMKXYDHTIFXTZBQIXDNUCUKYFHID");
    msg.feature_type = 145U;
    msg.rgb_red = 119U;
    msg.rgb_green = 219U;
    msg.rgb_blue = 149U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.547235885761;
    tmp_msg_0.lon = 0.309551923917;
    tmp_msg_0.alt = 0.289558930163;
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
    msg.setTimeStamp(0.83911840747);
    msg.setSource(50748U);
    msg.setSourceEntity(60U);
    msg.setDestination(1847U);
    msg.setDestinationEntity(103U);
    msg.id.assign("RXUCUGGKQFEQOSMVDZUZDNPJKDBRDTMNCUCSKCXPEDWZUYATZEGTZCIOVFLTPJMYDDZHXWCHFMIRTXMW");
    msg.feature_type = 5U;
    msg.rgb_red = 226U;
    msg.rgb_green = 231U;
    msg.rgb_blue = 134U;

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
    msg.setTimeStamp(0.383612297948);
    msg.setSource(3384U);
    msg.setSourceEntity(178U);
    msg.setDestination(44920U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.730447747198;
    msg.lon = 0.0310598923105;
    msg.alt = 0.250700306054;

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
    msg.setTimeStamp(0.367840522406);
    msg.setSource(50765U);
    msg.setSourceEntity(236U);
    msg.setDestination(59513U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.601241746927;
    msg.lon = 0.301607028645;
    msg.alt = 0.822774112861;

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
    msg.setTimeStamp(0.800343767491);
    msg.setSource(7887U);
    msg.setSourceEntity(11U);
    msg.setDestination(5493U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.0418487183037;
    msg.lon = 0.699774048044;
    msg.alt = 0.562823891198;

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
    msg.setTimeStamp(0.872918888726);
    msg.setSource(59732U);
    msg.setSourceEntity(130U);
    msg.setDestination(20666U);
    msg.setDestinationEntity(227U);
    msg.type = 192U;
    msg.id.assign("PKCWUCEBQBCWAWI");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TYLAQPZWKDUAHFGJZRQIPUPQCSYDWHPRYLMYQFEVFDKQJUEVWVVHURCSGOTESIPHSMPTENUELTICXXVWRXJTGBKFGKXOEOJRZJUAOCJADNGFKUYNKHSGMWYVLQESLFTADZIJIBLY");
    tmp_msg_0.description.assign("TXPEWFQVYFYCWIWWTXHHYJXRJLNXUMZNBAGLOQVQDBRCLFVFJDTG");
    tmp_msg_0.vnamespace.assign("PLYCPZRPUQEJBGSKRALWOIJWCDLHDWZYZJISYKUQYGJMLBIIMMTVWICNRXXQALBEIVLJOZIRBJFOGPNUTLPZEGZDMHKREVJAMSRTFYFKXFYDVOKROBTYZUWNYPDTSCTYQGRODTQOOUOLBGCMWZFLHHGVPVBHWHGIQJRPLJMMKG");
    tmp_msg_0.start_man_id.assign("MXHLUNOIPQCKCNILVTGVKFOYRVPBZAZHWXYLNYQJNJS");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("KWUXOPZSIPNDSIJNIBCAFPJSBFBFCCHTJPHLLYQYODUOGUZVEJUKVZPYEBZLGXCWPAPXWMMYBJCFVCYFJCHUZSFQUPFRAKMNRXTXOFGWFUGQBVLZFKHKDJDWMTUERUCZXVXKNKSSHVNIERHLEABNWLLHRYTUHNQLQEBGGXOJJWTYENQDHADWLMABMIPXTRHSQPYQKVQEIGVOVQMKDRCELTM");
    tmp_tmp_msg_0_0.dest_man.assign("CSUFUSNKMZIIPJNEBYBIAMQIMWTVWVLVOVGXNDCZQREEWXQRKFJMYIAKYKZOHUERWHCBZKEGJFDGIDYXYVSZSMGTODULZSMJMQOTBNLEKUVZYHTEFINOLNKTDPWSDVIGGYRAQLSJJHBDAAEWPNXTPGRBBUWCDXJILNBAPSPUWNFQMQVXFACXEXHSRYPPXEWKVQOVXSFBMUCQYGLKOCAADQTHHLDGTZUTJLFJKFRBPYOOZJWCUCTPRAHNRGMH");
    tmp_tmp_msg_0_0.conditions.assign("XMVSTDIDVWFEPYMPSWASHBGHGOUVOSCPRZHEJQOWPMICIKJLRQSPFHQWTVXMLRKTZQOYLKILZVRR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SmsStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.req_id = 32504U;
    tmp_tmp_msg_0_2.status = 117U;
    tmp_tmp_msg_0_2.info.assign("IDVGQQLZNMKHEWTKJASSOFCAGOMIOCGWBWILULQWUAXOJSBHQTRKTCNRDBOIRKFYBEMWVYSFOYGANQPPPXPJSYCBVEVTHKTHEFMNLCVSJUPZLHINAOMEVIDEKYJANTON");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.0266614726118);
    msg.setSource(34025U);
    msg.setSourceEntity(142U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(182U);
    msg.type = 192U;
    msg.id.assign("BNTXQPJGXAMVHUONHHVPJUHOQXKTCJIOAEJKERUIJGCCXMJPUWEDACTRLFTYKANORMRMGFVCKKTEWYSKPZFHORMZVRIXZXNLFWOSGTRRIAFUVBOSLWWMTONPMQCCD");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 152U;
    tmp_msg_0.htime = 0.283891254669;
    tmp_msg_0.context.assign("FXSTHSDOXJRHWOBVK");
    tmp_msg_0.text.assign("IRJZYDQGRGPI");
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
    msg.setTimeStamp(0.458436048504);
    msg.setSource(37198U);
    msg.setSourceEntity(59U);
    msg.setDestination(15485U);
    msg.setDestinationEntity(112U);
    msg.type = 73U;
    msg.id.assign("XURILRGMBMOSYXYTTXOJLRCDYZVHQEPRDWPUEHJJEADXQABWZWKBOLVGESWNYKLSQARPZFNE");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.746220008849;
    tmp_msg_0.bias_r = 0.612580007896;
    tmp_msg_0.cog = 0.102880605808;
    tmp_msg_0.cyaw = 0.564864388139;
    tmp_msg_0.lbl_rej_level = 0.192071063327;
    tmp_msg_0.gps_rej_level = 0.955634240812;
    tmp_msg_0.custom_x = 0.800089248744;
    tmp_msg_0.custom_y = 0.269923663477;
    tmp_msg_0.custom_z = 0.377414534954;
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
    msg.setTimeStamp(0.336436129241);
    msg.setSource(33295U);
    msg.setSourceEntity(249U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(120U);
    msg.localname.assign("JCZNKADONPJMGGJNNTWRLDVYPGKHTWVFQFQWSADKHCHEMJNOPPELTQWWTRIDBUVOLOIAMBLXZFMXBNRFGLZDEZOVQVTILCKXJMBGMYYYHSOYAFYBURPROTTAOSCNLESAUDKGOUAUJCPSXUHTQWCZGVXUZHXUQBLKGTFZICXRAYATFUACXRLKJIHXKWBWMRKRPJKFZZSDPIQEIVIEFSDHRFQCSYMYUBPZVEPNNHMNVELGGDEXS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OVJNLRVRYZQMNZIHDKQCDOIHASGURZLYOVNDIUILPKMYQSGMXKXPOQEUEHPS");
    tmp_msg_0.sys_type = 120U;
    tmp_msg_0.owner = 41359U;
    tmp_msg_0.lat = 0.254706872322;
    tmp_msg_0.lon = 0.668829989287;
    tmp_msg_0.height = 0.815490621368;
    tmp_msg_0.services.assign("KOTOBPPFMVFSRVRXVFFSTFPAQYECMZQLEJSSPCMWIHDAKQCOXUPNFBOYNKJRIUHBVMDMZLZTSOMYEOMBSUWDVYRJIWTGYITGBXALLBXRAIMPYNIWZAFCFHWTHYEDHRNXXTRQEVGKUETJYCWIV");
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
    msg.setTimeStamp(0.664064342114);
    msg.setSource(3257U);
    msg.setSourceEntity(23U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(220U);
    msg.localname.assign("JKKCURCEETAZTYQYZPAPOTNVVKUTHNUXVJKRSLFDZRLRABNYZAJPIZUNDGSMLZFGVQXWNSKSNCOWJVGVMJSYHURIRIBRXKEWTMKCDZLYAZUYAIFNEHDLFIDZTVEGMJJECBLOJSNTFNNTWIHAQOUUMEERHROUQKPKCQYHLCKJYFLVGOBJAH");

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
    msg.setTimeStamp(0.177134644849);
    msg.setSource(47897U);
    msg.setSourceEntity(88U);
    msg.setDestination(65330U);
    msg.setDestinationEntity(5U);
    msg.localname.assign("ESPUSSAGBCFZHRPJKCGDDIUKPFENJKALQPVKOHVUYMIQMKQLGNRPYVIFQTDLHQZCCDBLBYHZAAUERBSLCDXOMYOCSNQHHDOFADMJJZWITZUHKMRPNBXZGRUSDIGMKEGMUZVOJFBOWRUIRNPXPNWYWTENCDJAVBWLSACNBXYYITFEWLSQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JEVPPGKUFRHIOQHLUUYLQPSQCOGZQZMIANZVTDLHXWHEXWJBIJQRWTPAOMMBBVSWSDHZTOTJHELYMWYZHTFHGOSGOJVYCNPDKRDSKNFDWYAFRZJYRWVCFBUSBQXFGNYJVLNEJMONGQRESYJDRBRBWFUKOACVUDARUEGVXTEUMPIHDPKMSDCMXIALPBOFWABXXNICIXKAZISZWVTQKUGCOPSTJZXYVDLCTAFAZNELNLQURIMKBELCIHYX");
    tmp_msg_0.sys_type = 125U;
    tmp_msg_0.owner = 61721U;
    tmp_msg_0.lat = 0.0637370232789;
    tmp_msg_0.lon = 0.47222792703;
    tmp_msg_0.height = 0.325431984772;
    tmp_msg_0.services.assign("LHAJREMAUXMNFQVFKEXTSRMBWAIFTPDRUPLVXESELARZMPNOWINQRKKGNHOGBVYAYEZDPZUWMBQWEMGCDGTNEUYPVGFLFAXPLSFHPDUDQDWBQZCJNZMBTLPJ");
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
    msg.setTimeStamp(0.878430957297);
    msg.setSource(44851U);
    msg.setSourceEntity(175U);
    msg.setDestination(40432U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("HDXQJJDDNDRXFRGHUEKBYZSPKCYILIWOLIDYSDEVUGJZBUXXNXUVITUEAUWCXRQKGSUCSJRRWMMRBDGQBWB");
    msg.predicate.assign("AMGSZKEMXZTYLLXFSYMNYPITIUTDONICALTHYAFLDBGNROTFBIXBMDWYZVPCMNBLRJUKAMCOTKZSHJEHCAWBUJVLNRBEJXLWZYTGCNQPDDGQWFRECHZXOSGMITVEODSQIGWSUGMPRRVLMKFOWJIXHTJXFVUUPKJXNYJELGHQQSQOVQRWZAJADKMIBZCPQLOHESUCYRI");
    msg.attributes.assign("CJKARWTEBIRBIQDQUMHVYRAPYNPUNSXGRDGCWXNLLJFCOVYHHAMGAEKFNKUCVHRTPBBSSIHKQGXLBZGVRQCFDPVJAGVGRKSXWZWGJOLCJWNUEUZTZUPMHAIEQSJFYITOVXSOSKIWVWAMWL");

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
    msg.setTimeStamp(0.645809231154);
    msg.setSource(42215U);
    msg.setSourceEntity(5U);
    msg.setDestination(28664U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("DRZDGGFZHSZLNJPFGIDIVVXNIRZPNFCWCUXBZNSNASUOTXBJQVTLZOJFKTWCAMPAXUMMIWOUJATRKOXBBMPPENTSBQPHUMCXVIRMWYWQDANYIWSBKLSYRNDJFAUYLVFQHEKTUKEVYTFPFTWKZRUGSRBLAMYVEMXGJCHKBVTUSPCWHFLSOOELILBMZGGY");
    msg.predicate.assign("PEQBVROEPJCBBOXFOJMTWXYQVEVTLNEYFWDDGAZKRBHFOSMPBKTRPGCYZPIMITHWYBXNVNHRDUSIEVYVBO");
    msg.attributes.assign("MOHWXRQPZFZDXIEPISRNGJZUAFWAOETNWOFQYBJFAZJCJSUXMIACWFTAAUNWYFUXZSPDLVLLNT");

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
    msg.setTimeStamp(0.485938603682);
    msg.setSource(10694U);
    msg.setSourceEntity(131U);
    msg.setDestination(20969U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("UNPFVQEHZTBSRAIGKMZBJJHHZEBGCFLOPPJKTLBJMYMNWWNQGIDQYPGTWILVBXO");
    msg.predicate.assign("TOORXWQOKQNYJXWPAVEGYJHCQTSXVMXBFGFFCEPUTQJSWKIWGURDFJAQI");
    msg.attributes.assign("FKOWMEJQPOYJTJYQIBQYNGHMZYTCCUWCZTZXZUBLWVXGDQREVDTGAYUZTLSVIKSVMHHBAAVCLPJOYRXUEDOGUNFQEPFDEZKAHWSWOLSZKIRMOENLTIDMUGHGNFEIYXYFFSTILHNRDUXNCFPCWPSADEUWFSMNOACZRJH");

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
    msg.setTimeStamp(0.0288394538469);
    msg.setSource(55490U);
    msg.setSourceEntity(223U);
    msg.setDestination(58061U);
    msg.setDestinationEntity(111U);
    msg.command = 254U;
    msg.goal_id.assign("DWZRGHBYTLAIAFCLBSPWPYJDRZCMICHHRTBXOLWKFCORQFNEFLCRXLVZKYIGFBICHVQYVXCTNNEZJLRW");
    msg.goal_xml.assign("NLGCKTXWTLUBNCMREZORZPTNNBTISSQIVUAKZCDSYXDLCBWERZJNXSIPZAW");

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
    msg.setTimeStamp(0.345654343833);
    msg.setSource(54915U);
    msg.setSourceEntity(36U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(235U);
    msg.command = 36U;
    msg.goal_id.assign("XPEVHGIDCGZOKSMTHBZUOAZZCJBCNNCENASMCEUHVQBFFTOTTDMIYO");
    msg.goal_xml.assign("VTOOCTQMNWMZADFEMMIRFNCGCFZWAPHAK");

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
    msg.setTimeStamp(0.0422352738596);
    msg.setSource(14135U);
    msg.setSourceEntity(227U);
    msg.setDestination(60195U);
    msg.setDestinationEntity(91U);
    msg.command = 31U;
    msg.goal_id.assign("RUROBZPRFHKHUZONYPSVVDJWSUCDGTBZSMRS");
    msg.goal_xml.assign("LPPKCRGWADNDFOLHYCJXRSLURZYFEHLTNEQRBLACWXOJZMDPYZJXHDENGJUDHQYARQYMOTATSFVIDXSLOGNXQKQVWHSOUIQRJAPGCEOXGNDMBBHTWZIMKPIQZCAIJSWPILRHSNYRLPGBVFTTWKMFUNWCVUZIEEIMEAGMTTVBXJWLABJJGIOWZCFCXBIFVDAUU");

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
    msg.setTimeStamp(0.664177491917);
    msg.setSource(10926U);
    msg.setSourceEntity(146U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(215U);
    msg.op = 171U;
    msg.goal_id.assign("LJRXNBGZFXFOOSMSSQWVQRFFUKEPFQEZTGOPVESDOLCBYQTT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KISRFVJZLJXXWITLFCNVRSSLBTLTQMQSRAGNGNMPVGPKYAQDZBONBUUNEHUCOQYXUVFXDGDDHCWUSVIVUVLA");
    tmp_msg_0.predicate.assign("PMRYQYWKSZELYPHPXHTUOJLLCAXOCGJPFHSYWHPZAHSOUMOIXBUYVBVMYSTTWGUBDGQJZSCZRZFIBWHKZWEEVNZDTJCZLXAWABHXAXDGDMEVFOIHGQEQKDRGVRINFDWULSUIBUNMNQQPZNBOUKRGIEGNRAOEHEJYSSWKEYVNSDVLCWO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IANRGJBTQTPGOQMPKREJYXUCQUSGDPMHNZCQBPXDWKOOTDEEAPHFBPCLFFKKNJDKWVUJLCHVFUGZEZOVTWSRQZMCCKHHFITNLEPBASYIUUBWXNHXVAYNVVWRBEZXBYLJEUPRAOAQKRXVSSOHJBCXGQAYJNCYFARNNQSDWOJGMEOYXGGZHGIKYQDMLYHDMOKRJSDFBRUVATKVJOLXSYFTZWCULIEVDILMSUSNPWHWIMEFWFTGMIT");
    tmp_tmp_msg_0_0.attr_type = 8U;
    tmp_tmp_msg_0_0.min.assign("VEQPHSBUFUBJYELQHDETTLGUNUZXRIGACTPJT");
    tmp_tmp_msg_0_0.max.assign("MUGKFXGSHFVJFIXZORKUYTLWRAPGNEBUEGLEKBZIVNHI");
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
    msg.setTimeStamp(0.596742500497);
    msg.setSource(29788U);
    msg.setSourceEntity(221U);
    msg.setDestination(30706U);
    msg.setDestinationEntity(167U);
    msg.op = 24U;
    msg.goal_id.assign("VBKWBQGVGMYONSZWLGPPMJANDRFECRXPQVDBZNIDZJLEOHIIWUKCWNFKLBZNARLPUCVSEADZYOQJETUCAFBKYKDCAINAE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HXARKJQNTMEUDWWPESRCXHYDYNGASFLEPKQHEJOMJVVZCJDXGPVRUTENHTBVRDJNZAVYCMDOGQFRMOUSBGRSCILBSOQGFC");
    tmp_msg_0.predicate.assign("WWEOBRDPWDRNMIMYQVMZUINLPQQSSGQYRTHKJISNCGFZMGVJWUAFCLXOFIFJYDLWGRHYWPKFXHQOAPMDDTSGMUQWBRIYBGXYXVCVIXKHQDBILGPPTNWCCQBNFEKCKCRTALNJFHAJYYLUJWTOXQXJMRBRTEGHAZUTKGXONCLVEDQUIUYVRZKEESHNEDVTAZ");
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
    msg.setTimeStamp(0.478335679583);
    msg.setSource(64416U);
    msg.setSourceEntity(178U);
    msg.setDestination(459U);
    msg.setDestinationEntity(133U);
    msg.op = 53U;
    msg.goal_id.assign("CMTPHWXJAWZKSCLRZHSXBOEYEUSXLEFETUIQCBWDOEZWUKDJFLISCTSMSJYJLSMAFKZGTSQQMHHYVVPZIPFVRZRUFYEOKCGAKKIAIPLAFDMBIQVBRYLRGGKOOMQNOAJNG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HUEKJNMULEVTTLHPBLRSDCPZOXAYIFIFNMZRFEJDZHWRUWV");
    tmp_msg_0.predicate.assign("WNKFAKUIZXVYZGBJFBGDOFEAUYVDVVJQKSNMUWLXNOIUICQHFEIJXDYEFYPRZWDTYQNDWHZJFIIQHTFCJSRIHMSVGUZCOXHSLKWLFSJZBMUTEWSEGXFRTMU");
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
    msg.setTimeStamp(0.622633387298);
    msg.setSource(21951U);
    msg.setSourceEntity(83U);
    msg.setDestination(63508U);
    msg.setDestinationEntity(76U);
    msg.name.assign("MOOLJNDTIFUJCJDFVGENSCKSVXSJNZLBQBPUXSPRHDWVEUYDTWKZTYPZIZYZYAXXSNBYZKZEMVBKXKXIATIFPFJACHVGQIVGIDHDLHBOVHALRRFDSOXALQCCPBGTQCQFGAPFMHLYPWOHZRUQRKKRMTCEENVGLYUMGBFKIKSBQWPRXUSQYAJANNRIWFWTOEBPHWYJRKLNUGR");
    msg.attr_type = 163U;
    msg.min.assign("HTGBZVGUBWZKEJGEMMFNPDLVZXHDANSVJJYDIYTUQKDBVSPUCNUWAJQHSTNNMXIAFKJQKFGIYMTASIPAQFOKZLSDMXIGQAPBPVPKZRFNRNQHLTWYAXDZKLCPMICQWOLLFETETXRUKXYBDFJDOLCEYNGUSEMWHBCVSCSRKOVDQXOUEJVRHOOYZRPWRPWCCP");
    msg.max.assign("EFOQPAKJDESYLYONZNDFSHPSCJUYPBWBBSLZLKBDSOEDJCRLMUMXOQODVSGRAQOFHLREAVAINFZQMKIFWGIBSQETJXNHVKTDDJCRHIWWWXEQBDZVCQEOJTTVGFHYLJOPZSLAYGKOJTMQNUZFZIXGHIJKQWPXIZPHTTMKYXNCTLHYYUXFMCIPTFMNMAULGHXRPGUXIWXJPVYVSBDAAYRCQCRWKECVVOAKMZRSUBMGENIFEUWHRPLBZGNCKVNA");

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
    msg.setTimeStamp(0.7888469689);
    msg.setSource(29302U);
    msg.setSourceEntity(30U);
    msg.setDestination(34393U);
    msg.setDestinationEntity(149U);
    msg.name.assign("FBQGSMGIPHZTXOANRTJBVHCWWPPTOYVYIOXQKPCFQHEVJRYCILLVURQTNKZDIXNUEOFXRXLYASNPNMTGJMUATBGWGCCJIHBNVJEODPZDGUIPLLGKENSKVFSDRJMXBMEFFAOWTTJZMDHVLHKQAASFIYRSIHNJQJCXSLAPFKGDHSWNKJLHLMQIYEVUGNCRWPIBBZQUEOE");
    msg.attr_type = 39U;
    msg.min.assign("JWSPFUJEKDLYJIUVCDPGATVHPQUAZNWBRQGFHPIQBJLCNSVPMAFKSFZSYMQJLIDHGXYQOIZFTGGASMIPAWBCTVRVZAJKQORFGXQKSNTXZDVWEWEJTXEUIJPZGOGSNQFUVDECKOWXCCRTONRMAKWIBKQQVDHHRTESFZBEUTRNBHLURPDLXMWZMIHGAKDZXJLACRJOCVRZEPPDXOBYEN");
    msg.max.assign("SSGOQRBJCJOVPUEPXGKLFVRIDXWZVKQERBKBHMGNTUHRGCDCHGRCYAYEEAZTNSCDUXSCWDPPEBAIYDNXHBALYNSOZVFTOPTRIALJKIFJQPFEAFZGM");

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
    msg.setTimeStamp(0.845766454187);
    msg.setSource(64356U);
    msg.setSourceEntity(195U);
    msg.setDestination(61822U);
    msg.setDestinationEntity(168U);
    msg.name.assign("JRNBCJUMCYLOAISEYJZUXVXIMRPWNGVMASUKERATFCWDEBLBRJTBHMDFUQBTWPSDKZGVXIGYTCTDGIRSDOPSUPDGTYSCCNLPNVQZFFQAMNZKUONOJAIXOAVXRUWHCMRAEGXGBHJBPLDYTAGFOXFKUDZVYTQVRIHNYLSRMKHKOEEZJHKEFXCNOAJMZ");
    msg.attr_type = 16U;
    msg.min.assign("HZXNDQSDOGHEYFWAYHETIIJSNAPEUKTEBLEHRADLRGWBWDYAMZIWLPRQELJGPZZURBDJHWDYJFDLODSXZOLRMKQGESFCVBPZLVUXQIEYRTABGJWFYBTYSPVNMOAHACFWUONYLKKU");
    msg.max.assign("HHAJSAZXGDQIUYIWAAATZYWXWOGXAXOEJVJ");

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
    msg.setTimeStamp(0.782435571792);
    msg.setSource(16526U);
    msg.setSourceEntity(63U);
    msg.setDestination(54726U);
    msg.setDestinationEntity(17U);
    msg.timeline.assign("PUXTHQEKIQEZTEVIFOKXJYA");
    msg.predicate.assign("UGIAYYTOWOEMLCDUKSGPFQVYWZIXFCXINJEUKHBGQXBWUTNJMGCSMAQDPZARDROXJANADURGRXCYJERKADFPQRQHXOEOPWWLQBFBEBDDLXCBPKQRSHXSCIEWDIJYZNNZNZTZCOSNKHAVVQWJXGQYYKRZGJLTTSGSHBMILVMHAHUPBOOIOSUVWKKMEYHMHVMVAULDAMMCYIVLTZNJBFKU");

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
    msg.setTimeStamp(0.553722224138);
    msg.setSource(54363U);
    msg.setSourceEntity(166U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("MLKLOZGAEMFSWIMVCYXVXIWKAFOFEWCDBAXCTZHBXSWVTKJDYVILCCSGRRKRDTHBIZMIDNYPILZOGACQSUADTUNBYNBXNPXERNJKNSPYWCRBDGPDUUWSTGCYRIQWEYEGUANMVRMXEZDFFLHIFQOOQKHKFZPVHJQPUSTNEJAJAYYNUOESXIJATGLFRVOMKKXCPRQ");
    msg.predicate.assign("QRVZQQNZABABJTLUCANKHYWWOLIAPIJWCTMRPCNSUEHCYGFSUYYHENWDPZSWIRLGZEOKDCVVOERGQZSPOKBWPLAIEWPMDQSFOUVPWGJZXSBOGQKIMQTJTMLVEHUXLQCZZSCNIDECDBADGTYVLVTHYFIBSPDHPKGKHXXNTTOXMUFXHDDNYMXJBCVWMJAJGMEUVYO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZFLSOJDDTHKMEMFAGFADYAGMCCBKVWKFDETNGNSEYQQIHJEITVBTEINZEYCTXGBNPKBDRIVSDFNAJRCNPAOJAIKFPLVJLXEBVCZMKOIQIPFSUCZHXRTTRRZORNGJOXQZSGFIUSHODWXMDMWUYTHVAVWAGUPHSTQXWQUJKUPFKVGWLLQBBCSAKMHDYOHQRRMITASPRLUZJXXP");
    tmp_msg_0.attr_type = 165U;
    tmp_msg_0.min.assign("UBKZRZLQFDLJAUYYCMINRDVVAJRXXHLKOGPPJHOHYGSQOSBG");
    tmp_msg_0.max.assign("MMMCHSOSWVFVXIPIKSRCORSMUBAQBZKBEHYERYE");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.446933633791);
    msg.setSource(20195U);
    msg.setSourceEntity(110U);
    msg.setDestination(34373U);
    msg.setDestinationEntity(23U);
    msg.timeline.assign("NDAPXPTHVBENUGKPUHHNFOFMZSBUZWPMQARWFRMJYMLPOPYEURDNAVPUXGIKYQCCTDLXDSEEIZLSAWPSVSHKMOHCGERSWRTSXIJKOSUHAMLTQGBXMMCACKZZLTIIDPMJYOEIHHCQNGJYZLBEQYBLYUFOUHNVSDGDGOAOBOQRZQIVYAXJTREYJBPFBZFNEGKXBVKWAIC");
    msg.predicate.assign("IWJHXEIGNJFXJDHRBJGGHDFLRHDSGUFNEHKRZICGWPGEYXTPWGOPXMUQJISNUKFMQSHOVZCVRPUNPCXCMSGODQJPKZQNUMVARIXRXAFZDMFKKUZTMLFKTTPKXMRQCVONSJCBZLBTTVRXOAHDYBCYLDCLVQYEVBLDVHCKONDWSZLQAAQWSAJBOHBZGMLZPIYORBIKEWMUFGOYEJET");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TLSRBNXMGUMCOLOAJDMFQFORWOFI");
    tmp_msg_0.attr_type = 250U;
    tmp_msg_0.min.assign("QJKOVPANPCVPKRXMIXMJVQOOZVGGCAUHKEMCCFNGNFJDXAZCFTYVCAXWTUBPMBHHWBGUPXFMNSOOQKEOTRKRXANLCRWUUYCINOEALZYDHHEKDZYALLWHZTNFXJZZIVFWWKZISLQPULMUWLEMVSGBSYVZMLEHYDETLRUHSTJAJKFBVXRBSDFZRWMPIBCTTQYPQUAKINIYDSXDJIMYECGQETDKLSFOBNDGSARQWUODWSIJFPBYGRENQ");
    tmp_msg_0.max.assign("RLSTVSLHCZJMUXQBSVVPGUBXEIUKVXUXNUJTCEEKPYOXTKGNETIWQWIALLESTGJFCCUDSQAYJPWYAGPARJZZALFQFSKDGQMMQOYBIQDTJLNJPYRYHNHLNNXZDHGWVUAVRHENDOXOBRMDUEIYFHSHJFMTI");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.312063253307);
    msg.setSource(46335U);
    msg.setSourceEntity(106U);
    msg.setDestination(54293U);
    msg.setDestinationEntity(80U);
    msg.reactor.assign("NZRLONVDFHQERKGRCGBCRJHIYAGZFNJYGLAXSHQEBTKPAPOMIJZOPZRWNNGYLRXGDJIUFHRTYD");

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
    msg.setTimeStamp(0.918074966144);
    msg.setSource(25288U);
    msg.setSourceEntity(66U);
    msg.setDestination(5726U);
    msg.setDestinationEntity(75U);
    msg.reactor.assign("ZCZKUUVXTONLQLASQBZYQZHWXJTFBDDKPSVQQXJEHDTIMPKGBIXVJFEBEWREASOKEJTYYKPMFCVNZQHKDAILXZEYEBYAQCRCCGYWVIAZWCMBHLHTHLMXNPAVYDWOHVIITQXNVFGRUODJPSIEIHWSKFHLKVNNRRRSJJOMDRNJXGBSMMLTTTWICGWBLAPECNBCFWGFZFROMGOYPOZUA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JUQOTDOYLBRAJUBJVKIKSJOZRSSHYYFNMPMROVYKRMKAISAXLDIQEKVEUIJRFZCXCYFRBNZUYLCQZBPADLFWWZJUIQACIOZGSDPGJPYIGXTFZBPHMADQNPZRWKTOIESBXXPNCHEWCRQMUGAVCQXWLVTBSBYFJKMLECVDKVNFTMXIUDXPENDHTQMAHJHENWLOQFXAGGMBHNGXAFLUNEUDNWHLR");
    tmp_msg_0.predicate.assign("KMEPZTLSVJMXSLSTNHRXAIHUELVNZBOIDYBKCZHBVQXNSXOATDDQAYJIJNRYQUEJGERXHJZL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WVDXWSVMWKZLDLYCCIAEBDORMISINPZTJOSBMKQRJAKEKOIEHRQYFNUHBHEZPTBAZNEFZTRPSUNGCVCEDCXGSSSUHNKNVRINZXMZVAIEFIFCIBGKOHTBNDWOJPKDAOKHXQMOBZWKDPFQHGYGQPPGIDMLXZJEUWBQPLQUPGTYTCFQLSLJAGHWJUFUXLXOTIRJMJEMHCJRUSVBVUCXKVTNYDYDTALBXQRRFVLMJAE");
    tmp_tmp_msg_0_0.attr_type = 58U;
    tmp_tmp_msg_0_0.min.assign("PKUPCIXISGJPACPKNEVKAHMMIKSEMHKZZRKKWBXHSZJBOXTLYDBHWISNJDDRITMQRDZGECRHLDSUQKTIBMFNSXRFXCXUXVCAUAFMZJWAZFOVHSWLGFSYNKDANMHWJUQNVDQGVDGEPHYMLBFYOXYOEKQCWVTYIWFIAYNMWGATBUGVMLLDUUGDPFENOQNXSBULNPAO");
    tmp_tmp_msg_0_0.max.assign("EEWALRXIYLYHTIXQMBMALJIDOCKNULONJKISAOYRGJQASCDAKVECFGJPYZAHCJBBTEFEIUYZHAFRMNRPKDVWWFHBDEKTCXNSXIUZWHSOFJPBMTVTWQPKDGQEBUFFRTJJZFNCOLOMBKURSMDHKUZSFXHGZOPOALQQQYOBZXTFYTWLYDEXCCICUVQZAPSGIUXDCPNJMZSJSUTHLQVHIYGNNL");
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
    msg.setTimeStamp(0.0675231881045);
    msg.setSource(6156U);
    msg.setSourceEntity(81U);
    msg.setDestination(54636U);
    msg.setDestinationEntity(130U);
    msg.reactor.assign("ETDKBFNAUDBVOKGKSIAQFJQJBZKMAGTDLLKXBADVTLTSFMNN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TNZDSLAFPPDFMGSYXBVHXOXKQVVXLGRFBFWJJELWOAISVBEXHCIPOFUMWARZNEUDKLMDOJRVRPTXUUDEDUEOLJYNSHOCSYSGLCCLTTHHIPQWNQQMOOIZNOVBCQNYBTOLGSHAWWDYAGVKT");
    tmp_msg_0.predicate.assign("LDXLUMTKVMWEXIOFRAHKNGHDDOOL");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.828103593009);
    msg.setSource(51379U);
    msg.setSourceEntity(83U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(18U);
    msg.topic.assign("ZQLOPFKSPFQGHFHGUXZDTMEBUMJZRYKMMYHLKVJSZRQRJEEVUIXUDARUO");
    msg.data.assign("PEBPZOKHXNGTDDPTMUCYXNTLALCWLRCBOSHTZNVBPDQCWEDSYPMKUZLSXMXNUQWCBPGMVTQKYEJEMEWIXJMWWPLHJRWGIFREENOTZODIDAFRZGOGAAKKQJJRUJV");

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
    msg.setTimeStamp(0.0427278307111);
    msg.setSource(20800U);
    msg.setSourceEntity(33U);
    msg.setDestination(35769U);
    msg.setDestinationEntity(19U);
    msg.topic.assign("XSYZCSFTRNHGZOFDNXISJIOEUKOUNUPYHKWIWFXSDYOZXJUFZNFCYSKAMFIDFABWKLLBVHAYNLEHVYODT");
    msg.data.assign("NZYNTQRZSMDQOTEOQMKFTBYSYXAHJXUOUNXTLXACNUSRELFMOIGWXLAGREHCQLVSJMNJQKJDJLSAYXZGQESUKKHPSGAKLBKPFHKFHAFOVWSMDYEVGAVIPLABSIQMBAGEZZWJBXZPZHCHTNAPIYFDTMDPNTLRGDKIEXCPDOFHWUMHJIYLCBKUUOBPBRORDQUYBZZGIECVGRCYTIFVJDVJVWQOZXTMH");

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
    msg.setTimeStamp(0.368950794142);
    msg.setSource(48968U);
    msg.setSourceEntity(119U);
    msg.setDestination(52302U);
    msg.setDestinationEntity(97U);
    msg.topic.assign("OAZTIRRBTYWHISCJPXNHVHFBXYJHQMBLKIDPHIWKZKEIQFNLXUYSTBIWUZODKJJNCHUJOPLGWVINPXCKZEXRKLETQULVKZDSDMVTXOLVRMYPRAPXADJMLGPTSYIMAPFRNNTGEUYGKAOQNNSWZWAYEMTMVJ");
    msg.data.assign("QSFXNISAKBUBLBJLOFPVJYSREEQYJEHEBUHDHKDVFICWLDLJXKDACUQAMYFHRTKXFRZENFEFJSGUTHTJAATLSRIMKBXVZSGIOXGHJ");

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
    msg.setTimeStamp(0.564233765061);
    msg.setSource(27445U);
    msg.setSourceEntity(18U);
    msg.setDestination(40306U);
    msg.setDestinationEntity(206U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {-110, 88, -43, -113, -87, 43, 67, -48, -49, 108, -68, -10, -30, 30, -69, 5, -18, 98, -64, -54, 38, 48, 108, 64, 24, -112, 68, -16, -51, -71, 28, -74, -63, -47, -96, -122, 101, -6, -102, 76, -118, 19, -126, -78, 67, -89, -108, 50, -113, -90, 67, -10, 84, 11, -5, 7, 119, -106, 27, -1, 20, 104, -12, -109, 68, 15, -42, -5, 79, -115};
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
    msg.setTimeStamp(0.501920023192);
    msg.setSource(39709U);
    msg.setSourceEntity(144U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(188U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {-58, 54, -109, 74, 19, -1, -4, -113, -78, 1, -33, 14, -6, -6, -45, -103, 80, 49, -17, 100, 49, -106, 98, 56, 90, 7, -32, 75, 113, -64, -93, 77, -102, 70, -126, 63, 82, 10, -69, -34, -59, 49, 25, 6, -4, 81, 113, 77, -56, 78, -81, 33, 49, -5};
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
    msg.setTimeStamp(0.40402854392);
    msg.setSource(1763U);
    msg.setSourceEntity(31U);
    msg.setDestination(63868U);
    msg.setDestinationEntity(32U);
    msg.frameid = 185U;
    const char tmp_msg_0[] = {-112, -29, 56, -40, -67, 12, -72, -63, -5, 13, -101, 42, -103, -108, 26, -15, 85, -67, -34, 72, -7, -67, 76, 71, 98, -17, -30, -87, -42, -41, -78, -81, 8, -48, 1, -58, 91, 15, -19, 109, 81, 74, -75, 82, -97, 24, -114, 70, -63, -15, -72, 98, -43, -128, 34, -30, -8, -55, 26, -76, 87, -84, -116, 46, 93, -34, -77, -79, -37, -69, 85, 89, -99, -85, 37, 69, 49, 112, 115, -86, 39, 94, -56, 41, 33, -12, 3, -53, -100, -117, -38, 32, 0, -3, -91, -32};
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
    msg.setTimeStamp(0.839081775727);
    msg.setSource(6834U);
    msg.setSourceEntity(91U);
    msg.setDestination(61468U);
    msg.setDestinationEntity(221U);
    msg.fps = 217U;
    msg.quality = 100U;
    msg.reps = 141U;
    msg.tsize = 181U;

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
    msg.setTimeStamp(0.919456060881);
    msg.setSource(57613U);
    msg.setSourceEntity(147U);
    msg.setDestination(37648U);
    msg.setDestinationEntity(34U);
    msg.fps = 68U;
    msg.quality = 175U;
    msg.reps = 245U;
    msg.tsize = 92U;

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
    msg.setTimeStamp(0.561233595018);
    msg.setSource(48501U);
    msg.setSourceEntity(193U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(131U);
    msg.fps = 63U;
    msg.quality = 54U;
    msg.reps = 50U;
    msg.tsize = 118U;

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
    msg.setTimeStamp(0.456506370238);
    msg.setSource(4259U);
    msg.setSourceEntity(122U);
    msg.setDestination(14103U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.76470302477;
    msg.lon = 0.207355487969;
    msg.depth = 86U;
    msg.speed = 0.52069013058;
    msg.psi = 0.585143147161;

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
    msg.setTimeStamp(0.981296126909);
    msg.setSource(17812U);
    msg.setSourceEntity(237U);
    msg.setDestination(18630U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.520436514108;
    msg.lon = 0.0881208460195;
    msg.depth = 215U;
    msg.speed = 0.602945979576;
    msg.psi = 0.532902136687;

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
    msg.setTimeStamp(0.93790901337);
    msg.setSource(19155U);
    msg.setSourceEntity(189U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.713858327201;
    msg.lon = 0.652213016511;
    msg.depth = 164U;
    msg.speed = 0.499135502048;
    msg.psi = 0.390877840885;

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
    msg.setTimeStamp(0.825860156712);
    msg.setSource(52501U);
    msg.setSourceEntity(74U);
    msg.setDestination(33587U);
    msg.setDestinationEntity(125U);
    msg.label.assign("ABMNCSRJLJTBFOWFHCXQHM");
    msg.lat = 0.24915172982;
    msg.lon = 0.661187452364;
    msg.z = 0.210313706569;
    msg.z_units = 205U;
    msg.cog = 0.253852979288;
    msg.sog = 0.87964202683;

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
    msg.setTimeStamp(0.6835676169);
    msg.setSource(43142U);
    msg.setSourceEntity(94U);
    msg.setDestination(9478U);
    msg.setDestinationEntity(179U);
    msg.label.assign("HAUDPLOKNSTU");
    msg.lat = 0.607114163698;
    msg.lon = 0.750201934204;
    msg.z = 0.525069696077;
    msg.z_units = 201U;
    msg.cog = 0.926279852629;
    msg.sog = 0.985730579271;

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
    msg.setTimeStamp(0.968077749477);
    msg.setSource(40812U);
    msg.setSourceEntity(103U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(16U);
    msg.label.assign("YLRZEDJJTUETHUWVOUVFXMYWQJASAUKKWWEPZYPFYMYNKWGWBSVPNKZDLRXIXCEYLQFEWPOLARYKIADIMHMWRUHVRJGKFSCBNPXTMOOGTGOAMRHPERICBQOUHOCVRFXTKQAEJUBXXDUYLHDGZCFONSEDOSJIMMDBQNXPMJSJKAGZSDGZQTRVDVXWAIBIFULPKVNNWFCLYCZSGTQVRGXPIZNPBOLCLYDZUBNHFLTIHQQCAF");
    msg.lat = 0.415764686196;
    msg.lon = 0.218165149943;
    msg.z = 0.300155406851;
    msg.z_units = 100U;
    msg.cog = 0.673828081369;
    msg.sog = 0.839974969453;

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
    msg.setTimeStamp(0.389128096237);
    msg.setSource(44044U);
    msg.setSourceEntity(158U);
    msg.setDestination(14655U);
    msg.setDestinationEntity(47U);
    msg.name.assign("XJMMIZYYRCJTIEZVMQPWRAXLLIUSQSWXXOCLJBDGGJVFGUDZOMNXECLDTQXQMLRNJEKSIVUT");
    msg.value.assign("YTVPUPONXHKRJDSHWTLIXKGPBQHIYVFNYHM");

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
    msg.setTimeStamp(0.696150890578);
    msg.setSource(16788U);
    msg.setSourceEntity(87U);
    msg.setDestination(59583U);
    msg.setDestinationEntity(51U);
    msg.name.assign("XKFPJSRIKAOBCTYNTZJNFVNIUZAUJFQWKHIWJQQADQUBSNELOXDYEWUQTWAOKYCMHXSLIDAUMOODGMYGQSBVRHGVHJAMRFIGRJUEEKLHPWRVKZGBDCROEPYIXRLZLPRPMVHYNMPMBQPCKLNRHEZLOAEKBOEVRSIDNTJZSPBCQSGACXCUUWGZKJMMFKXTZAGO");
    msg.value.assign("DCTNKIFUTWYSBKYREWEYJDPRQZQUMWLXOCHKVHXREMHJAENZGMMVKNAKLUGMLZQLBGOIUJDRZUJLVWEKAREQRUXNSQGJYQGRLBDWHTXVITOJIAFDYESHLODCPAFBHQHSLNABKKZKBWGP");

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
    msg.setTimeStamp(0.377403939881);
    msg.setSource(58460U);
    msg.setSourceEntity(86U);
    msg.setDestination(1597U);
    msg.setDestinationEntity(9U);
    msg.name.assign("ZDCFCKSNCFOBQUYJOEKPDVDSZGZJCYOFMVUBIMEPJGCADIQKBAQAGBOWNELVPOSFLFSGHTWZKVOOYZHTABDYPEHIQWTLVYQXRBRPNXLQXTGWCSYANUUZGMRCSAQFFYWRHLVXHXXYNIMUBPGJYUZBAVUKEFCQTBIPK");
    msg.value.assign("OKNSAVCXTGCWYRMVQCUXHOSVWQSRHVDKBWVCOLXTBIMKDWLZLVGOMDPGHKQNQWSUEHUHLSTAXLPJZRBOGTTLGWYHMCAYFIZCEIBUPXKJJWKRNXFINECUNNGRUBLOJTHIYMMQXEEFSFVQGCRTQZBPASABZFN");

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
    msg.setTimeStamp(0.640753591119);
    msg.setSource(32525U);
    msg.setSourceEntity(17U);
    msg.setDestination(44860U);
    msg.setDestinationEntity(149U);
    msg.name.assign("INGYDWFMPLWQBVHNOIAGYHUCMLAWFDXTUESSKVSDYAFAKOCBQGALGHNDGQDX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VWXWJGXVAZQAHPJMIENNYGMDVYYFRPSLBHZBACNHWVUXXETUZYKBBBLCEEQMPWLLBRRQGYGRLLOTQIMQBTKCIAFDYRQIGJPHIZOCFAJESCEGKANDRWMKCAGRGPKIOOUXFCVRWJOSEWLOOYTUSCIFJZTQK");
    tmp_msg_0.value.assign("BGWOLHFZHKTENQDYYPKKONFXUVKYMIFYTJIGGKWQQNSZRVISFWPEHHPZJILPTTXLWJZDCQMZMBRXVJNWDOHGVXYNLUPSYVWWUAPRMISFECZKWNTACCCEICLDJAWZPDEGBONROZBEMEPCMDAMJKXKRGJJBMUIRXULAFXCODNSI");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.615316790703);
    msg.setSource(6741U);
    msg.setSourceEntity(208U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(135U);
    msg.name.assign("FOTLUMUWCGEYIEVKJXMBSOKDXIPGFJSVFCAKIEQJUEEDVAVGOYQTCMYWEIYBGIYUTBWVLBCOTPDWDCHMATVWQNGMZKWWXIBMIAZPHRJFNKRLLJSLOFWUZQQT");

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
    msg.setTimeStamp(0.55539233055);
    msg.setSource(1069U);
    msg.setSourceEntity(205U);
    msg.setDestination(36343U);
    msg.setDestinationEntity(13U);
    msg.name.assign("HNSJGWNEBBYFXOIJYVUBMWSWWWXEGIAFJHNCBIFKJVKZSNQUNEYPAMOZMDCAHOTOIOLJKUIXJQHZXVRGFENVXSANBFDTPTCQUXLZKIWIFLMZZMDTYOCFSGANEQINI");

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
    msg.setTimeStamp(0.35598780836);
    msg.setSource(14017U);
    msg.setSourceEntity(84U);
    msg.setDestination(680U);
    msg.setDestinationEntity(0U);
    msg.name.assign("NKAPFDCDGNVOORMUHNYSSILXVOJVJVZLAWDZEFBNEWHLMJYBFOJZTXRIHSUACYCNOMBTHXFZPJIQIAXZKDTNFIUYGIZRIVWQZIWMYQJQLAUGGPMXDMPEKHZMCYEVTBPGXRW");
    msg.visibility.assign("GFGGISNPPNCYDNRDKLJRCPWZMILUJFTESEZMVWWPCLEXBREKZEIHBTMWYTNGRBQCGLDTCWVXYSMXLSSNAVRKFBWORTMYREQBVBDFHXFFOJLQPSPNIATOYJMUUAWIQOFNQZJTRHJQKZLDSMUJTZUZTQHIECIUGNVCYZNWWHHAAGXMKVECAIZODATYPCOQBFSBUQVOXVXIBLKYHARGEUL");
    msg.scope.assign("YQIEIJTZUAEWYPPYSLNHRZSHBDIPKVTGMIWUWFXXBNNNKXXLXZRSDQVCHJYKNSBHYNZAUAWLGAQFXDJJRVVIGZYANVJECRCLJGIXHTFUFEZMKXFNSMCSBWXFDAGJJNERVKTJRZEOELATBYMLCYSPKDEUFUMGGSPJWTLXUWWGHKLACQMPTSQVQOEYZYQCZUFIRVCOODPBOWQTMUIFMOHBRFUWPRIOZLVLDDHO");

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
    msg.setTimeStamp(0.1626336879);
    msg.setSource(38394U);
    msg.setSourceEntity(3U);
    msg.setDestination(59215U);
    msg.setDestinationEntity(118U);
    msg.name.assign("ACYTIOYWXROQTAMYWVUVLVZNTNRZPTCKOOMADJUHORQGFNGMUPFFMDCJ");
    msg.visibility.assign("DKSXSTPNFXLOPPZAOYPVGKXSWMGVUVGRYFCGUHCLECQJHOXQWQRRCKDZIYGWEJEHTUGRIEAINLHPBZQCSSKWYOKUYAXRFBBBKQHADCYW");
    msg.scope.assign("ZWTPGFVCZZDJYGWSOXXIIPREBSAKQLUYSUJFZCVQZYJCXVCQUOIPEYTJBWVPIUKPGHCQHSHHJXURNVUBAXQFAZMMXLUPWEKNFPATDI");

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
    msg.setTimeStamp(0.409617103985);
    msg.setSource(25821U);
    msg.setSourceEntity(195U);
    msg.setDestination(55944U);
    msg.setDestinationEntity(146U);
    msg.name.assign("MEEWRATPZTFOCTWXOHJLNQGPDXNYMHYXKAHIXZSTSFNZXOCMTBTCVDFGGDXDIJNCPZDHBUIBBQPLFNMYZZRLSTJARWBJVEUVRFPQJSHCHHXGNZICSPILPGVWEQZIVLOEYNBDKASVDCARHVJCQAUPTJUEMOHRRVOWOGFOVMMXQFKBIIKQZSYWGFBKLMGLSNESTEHAUUBKDQJYPTKWUSYYPDOCWCMKOGZGL");
    msg.visibility.assign("PMMHCHLJOMELMINCRCIPHLQJJLWIEFVFTORFOUVQWWBSNTZTQBOREGCILZSCOXGHUPORYRDZEMPDKPRNPWP");
    msg.scope.assign("BCNZQFXYDZCEJPFSIMHEIMBYXPTKNVBCSQUXRUKKQVWNCJGPNXOUPLDHBKORKBIWGINZJACSVLDRYYBLXZHVEKUSCATRDYUVBIDYKJFNLHRETYGMOWCLOHAASKZDGJLRJTWYUPUHRAVESOFMIBQB");

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
    msg.setTimeStamp(0.99888840455);
    msg.setSource(956U);
    msg.setSourceEntity(22U);
    msg.setDestination(4111U);
    msg.setDestinationEntity(182U);
    msg.name.assign("KQQLGXNSZHVBIKYNKKQQYZVLYTCAIPCGPOF");

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
    msg.setTimeStamp(0.758061016139);
    msg.setSource(274U);
    msg.setSourceEntity(30U);
    msg.setDestination(57340U);
    msg.setDestinationEntity(185U);
    msg.name.assign("NUHHCKDJFNAKRAKMOGRYIWQYGCDLSFGLOTGZFHFXRVHTCZAPDZWXYLJISYUQJEOWYIBSNR");

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
    msg.setTimeStamp(0.974770282779);
    msg.setSource(41229U);
    msg.setSourceEntity(154U);
    msg.setDestination(23906U);
    msg.setDestinationEntity(17U);
    msg.name.assign("IYIROXZRMEOZMZCCTACDHLMHGNDHBKEYUVQLGMCDBXUONDEIQBURXAWSBCOYYFJRNSTCKXZFRHZQWLTQADSXAYSNH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KKFILBUCVIJWLNTBQBZVFOXPOGRCTABYPWRHIEQFUBQCMSPEHYCTTVSHRRLVJIQZMOZAPXDQLQYHDMONEWLNJULAUUUIMIIJRHMOUCATEGKOZDAGXHGPUGVNPLNKUFVLHXAXSVOLXGE");
    tmp_msg_0.value.assign("ZQCZCWCFILPXCAOAVVKCNLEFGDGHBPBWJSEHKXCUQVUAJFEMZWSZILQJEWW");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.982064422574);
    msg.setSource(52649U);
    msg.setSourceEntity(153U);
    msg.setDestination(30071U);
    msg.setDestinationEntity(220U);
    msg.name.assign("YDEBOCWLRPTPNEZISKGDHRRQQWRHFEDNNAJFHBYUTYLAATITNJPEYGKYJMOAXEOCJOWWUSSJXRKCE");

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
    msg.setTimeStamp(0.262649877948);
    msg.setSource(35277U);
    msg.setSourceEntity(73U);
    msg.setDestination(21336U);
    msg.setDestinationEntity(218U);
    msg.name.assign("GIRKJPYNRDUZSPLJQAAKNKGARKZSMYVOUDSOI");

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
    msg.setTimeStamp(0.82425826686);
    msg.setSource(47764U);
    msg.setSourceEntity(221U);
    msg.setDestination(45235U);
    msg.setDestinationEntity(143U);
    msg.name.assign("FTPKEKIJDSBONSLYCIWUQZGEXEFDYGXMOOFZMIJPGHVHTJKGRSTBJTXDJDBVPDAEMGYCRNNJQVLYLVURAJZDXDCUBOTVRAWHUESVXBGWSWOVKFWNAKZMKYDUQXLQZFVCLLOHPLAKBXEWHMXOCYOBMBSQNCLQSTIWUKXUHCQYCHASQGYOYPCVKSIRNEAQIRNGZXGI");

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
    msg.setTimeStamp(0.321202084073);
    msg.setSource(58926U);
    msg.setSourceEntity(246U);
    msg.setDestination(32409U);
    msg.setDestinationEntity(213U);
    msg.timeout = 2241774773U;

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
    msg.setTimeStamp(0.840559142126);
    msg.setSource(17414U);
    msg.setSourceEntity(228U);
    msg.setDestination(10578U);
    msg.setDestinationEntity(148U);
    msg.timeout = 3207990041U;

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
    msg.setTimeStamp(0.9978651622);
    msg.setSource(47090U);
    msg.setSourceEntity(230U);
    msg.setDestination(14834U);
    msg.setDestinationEntity(0U);
    msg.timeout = 1837842259U;

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
    msg.setTimeStamp(0.552649346197);
    msg.setSource(47378U);
    msg.setSourceEntity(41U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(35U);
    msg.sessid = 1716401074U;

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
    msg.setTimeStamp(0.750080292124);
    msg.setSource(50184U);
    msg.setSourceEntity(150U);
    msg.setDestination(51363U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3007414067U;

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
    msg.setTimeStamp(0.29788653258);
    msg.setSource(6853U);
    msg.setSourceEntity(178U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(213U);
    msg.sessid = 3943604656U;

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
    msg.setTimeStamp(0.576214859355);
    msg.setSource(26519U);
    msg.setSourceEntity(235U);
    msg.setDestination(26047U);
    msg.setDestinationEntity(63U);
    msg.sessid = 3149178225U;
    msg.messages.assign("YWHDMQLIRKVKPWNDTNQPIIYVWDKSFTOTNZBJQJOCXFLASPWPGKSGORASOGDFSWKNNCYDTBTQIUKLZZOFIRCLABEXVYCLQBDRQFDKUZCJTCEXYVEMIRWOLGFHKHKZUDTFNVNBJTADIXPSGCSMRSJRRXHGNNUMRQHEHZATFYWJMVYEAXWHCZBOUQKUIPCOPVUUYAWOVEZSMXJIAMVAXEYMMGNLGLPEHYZFORJQFBJILEBGMBVTDXZBQ");

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
    msg.setTimeStamp(0.84638570983);
    msg.setSource(1957U);
    msg.setSourceEntity(86U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(193U);
    msg.sessid = 3632108720U;
    msg.messages.assign("YDIWTLWHVXWIBTKWCQCPRIMEFCUFNCHJQDTSWBKGIFXPQFEGALWEBUEGRLYZFNDNPQXKZLZZTGPCKIJAAXRAOOGMOHPOWVYUSNBSXDTLOVHTWDGFBRRSFVWCCNSFCTPVOMSVUTKURAMIHMJZLM");

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
    msg.setTimeStamp(0.293100215647);
    msg.setSource(5173U);
    msg.setSourceEntity(26U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(44U);
    msg.sessid = 1701957366U;
    msg.messages.assign("NSIZSFEQTBIISTSKHTCOKLJWKBZETTKPXODODZJJGYLVSKMMJPHCWRSHHRYVPTUGRAVFYPAJAQWHRKELCUKOMJVKIXQAXQPZUWNSRDYNAIAZOYEZMVFLTDMECDPXUXVTVMNBGFPRCIDUUAMOQWEVWUEEBIYHGIUMYOZJXXXWTAYREFSLFJRPOSHQJGGQ");

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
    msg.setTimeStamp(0.146233953989);
    msg.setSource(23688U);
    msg.setSourceEntity(170U);
    msg.setDestination(53193U);
    msg.setDestinationEntity(97U);
    msg.sessid = 314879998U;

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
    msg.setTimeStamp(0.201722635043);
    msg.setSource(37161U);
    msg.setSourceEntity(4U);
    msg.setDestination(24523U);
    msg.setDestinationEntity(111U);
    msg.sessid = 797105414U;

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
    msg.setTimeStamp(0.306397577922);
    msg.setSource(30637U);
    msg.setSourceEntity(43U);
    msg.setDestination(65212U);
    msg.setDestinationEntity(65U);
    msg.sessid = 4224749278U;

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
    msg.setTimeStamp(0.54074761145);
    msg.setSource(44804U);
    msg.setSourceEntity(20U);
    msg.setDestination(45080U);
    msg.setDestinationEntity(221U);
    msg.sessid = 4100250062U;
    msg.status = 23U;

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
    msg.setTimeStamp(0.0179730702341);
    msg.setSource(51893U);
    msg.setSourceEntity(105U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(7U);
    msg.sessid = 946802487U;
    msg.status = 55U;

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
    msg.setTimeStamp(0.534150609726);
    msg.setSource(54774U);
    msg.setSourceEntity(23U);
    msg.setDestination(58300U);
    msg.setDestinationEntity(188U);
    msg.sessid = 636620824U;
    msg.status = 176U;

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
    msg.setTimeStamp(0.991108119045);
    msg.setSource(65516U);
    msg.setSourceEntity(76U);
    msg.setDestination(57659U);
    msg.setDestinationEntity(98U);
    msg.name.assign("JMDKWVZJWOTCZGZPIFBEXTCEOCQHYMRZAAIPWCJMOYNWZRUNIMUNLQINBUPBYRRSOBJLHFMIHXQNYGVDWQHWUTZTGIGYOW");

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
    msg.setTimeStamp(0.853814426199);
    msg.setSource(54461U);
    msg.setSourceEntity(32U);
    msg.setDestination(60064U);
    msg.setDestinationEntity(23U);
    msg.name.assign("DVTPQELTNUEJPCNIVGHIXUGZGHBPBTSTFEJBSWYCGOYFIYCHRXMBXPGGEPQJXASSQEZHHRJDNKOWKGXCUWARDPLXANDTKEHRGOVNANQKRI");

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
    msg.setTimeStamp(0.643980463503);
    msg.setSource(50973U);
    msg.setSourceEntity(151U);
    msg.setDestination(3693U);
    msg.setDestinationEntity(247U);
    msg.name.assign("ZJFAVXLFCHSUICKPRYJZHIXZGMKIIRJBDSQQFMIOODLPPFEIFRHHRVOKVUCPVDJHSUGMMDABTSQTSGCNHYAATTYSMUDXEWLHVZATUDWIKMLLYAOLIFNOJRGTWOWGQZBHRNCFFLVQHNAEPWOJPCVUCVBXNLBJKGTRKRLLNCUJYKDSEWWRGYANKBIOUJAUCWQOTBXYMVNYDXZGXXQZTOHZBBFM");

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
    msg.setTimeStamp(0.0144141686099);
    msg.setSource(7129U);
    msg.setSourceEntity(52U);
    msg.setDestination(62749U);
    msg.setDestinationEntity(150U);
    msg.name.assign("AHDHEYMVQUQNFRIUOBNMSPQYBMCIWRXDSAFLBIJWQGLISGXPLKEKAKPBHTKAKAFOLTUSZKEBNPZZJYRSHYUCMYSTQLXODGEYXWNCGRKVONSWG");

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
    msg.setTimeStamp(0.358259695382);
    msg.setSource(62695U);
    msg.setSourceEntity(152U);
    msg.setDestination(241U);
    msg.setDestinationEntity(252U);
    msg.name.assign("WXTWNSYVUOY");

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
    msg.setTimeStamp(0.751167835375);
    msg.setSource(11684U);
    msg.setSourceEntity(234U);
    msg.setDestination(37512U);
    msg.setDestinationEntity(42U);
    msg.name.assign("VSLAPFZCRXTWNTYCQJBYBZEZEGCFIWCYGEYXOFHEAOLLJSKPQLBNINXPWVGZQKSGKJDRDRXTICMQYVCABHQPMJRBCPRXGRIUUDJPYIETLWOKHONTXXCGJYFLJOUDRPVMNUUVWYXHPMDJFMTFSFVGTISOFPQTUDAAZHWESHLIAROSBHVWXVLZCFQWDPYMYNRKTOARKGHGBBVMF");

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
    msg.setTimeStamp(0.591192550162);
    msg.setSource(15988U);
    msg.setSourceEntity(115U);
    msg.setDestination(36578U);
    msg.setDestinationEntity(135U);
    msg.type = 57U;
    msg.error.assign("SVGQBRTQKETZCAFONLHNCARZLWUUVZJSICVIKBPYBSPQTXCMTZNFROKZIMHUNUADXUOOWHPZUYNLIFAOVGDGRTGPRDSLYEBTXYQMPVZXRUCEZDYWPHBEXKLXQVASMSZLGYGKJGCRPUWXYJKFPRVJTVOLBSJMOANHKFEHEAISKLSXWMPUB");

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
    msg.setTimeStamp(0.729776136153);
    msg.setSource(5875U);
    msg.setSourceEntity(54U);
    msg.setDestination(52906U);
    msg.setDestinationEntity(197U);
    msg.type = 170U;
    msg.error.assign("JGHOPNEDCGOLBPTXYRZMUSCYBOAMHURLNPGXUVXCYPDPCDKTETERJAYHZZXZQTWTSFIUSXCKLWXSBTRAPPDHFFJNWNYTBYGZVVWSYDVEKYODJUOBKZAHHPMMHRZAIRAGONEEIKJJISEONZCDEIFYASQAFRRQQKCVDQVSHBCULJBKWEWTWI");

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
    msg.setTimeStamp(0.587518939434);
    msg.setSource(34886U);
    msg.setSourceEntity(90U);
    msg.setDestination(53464U);
    msg.setDestinationEntity(146U);
    msg.type = 216U;
    msg.error.assign("XSWAGIXCXSYLERFDZPKGQJRRHLCTILBIIVKQBKEGSUJOOCNQGNMIRGSNPXBTQJYHLWDRKLDHMAKOUVJNXHOTVPTEYDSHZBSFTXJMBZNKTPMMFRTLHEFFDCZVUGEQVDAIZGGUNESWXMZAAPCRYMPAMCYSOYLWOLIZIZOUXWEQWQIUWCEIRKMWLQPDH");

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
    msg.setTimeStamp(0.948617298367);
    msg.setSource(12527U);
    msg.setSourceEntity(237U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(59U);
    msg.seq = 39278U;
    msg.sys_dst.assign("FUVKAYVFOEGREKEKFUHZSVZBMVKBINMOUTFLAMCJGXBQMGNQJHGDUVKQDSLFGNCMLYEMOLXCMNPZBADTPJXIDSBOGNDHIURIGOZCZDZHPYAF");
    msg.flags = 59U;
    const char tmp_msg_0[] = {56, 73, -104, -119, -12, -38, -34, -67, -125, -82, -57, -35, -97, 84, 92, -52, -59, 58, -16, 118, -10, -44, -54, 32, -10, -78, 74, 29, -54, 36, -17, 54, -19, 8, -8, -6, -126, -114, -94, -74, -43, 119, 56, -52, 64, -72, 113, 99, -38, 70, -89, 13, 32, -43, 107, 62, 123, 102, -31, 110, -101, 59, 102, 28, 118, 19, -29, 2, 60, 58, 126, 26, 105, -52, -57, 84, 106, -50, 122, -21, -8, 108, -105, -67, -100, -128, -51, 63, 116, -24, -118, -89, 73, -110, -68, 115, 31, 114, 120, 68, 108, -110, 96, -115, 51, 23, 46, 53, 111, 88, -67, -93, 19, -85, -118, -93, -27, -3, -67, 114, 6, 102, -101, 43, 60, 98, -14, 100, -103, 124, 64, -99, -93, -12, 2, 28, 22, 99, -127, -45, 25, -33, -80, -75, -40, 34, 41, 95, -122, -59, -39, 108, -111, 52, 49, -32, -24, 76, -115, 80, 49, 74, 37, -32, 54, 87, 11, -125, -29, 52, 33, 20, 32, -63, -78, 87, -72, 105, 82, -92, -124, -47, 110, -118, 47, 114, -100, -1, -95, -38, 112, -68, -25, -4, -58, -16, -9, 6, -59, -69, 61, 62, -54, 14, -49, -121, 36, -69, 89, 104, -112, -26, 33};
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
    msg.setTimeStamp(0.0385916509021);
    msg.setSource(61492U);
    msg.setSourceEntity(20U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(243U);
    msg.seq = 13377U;
    msg.sys_dst.assign("QQEFVCJIISKFMVAJNZSVOTPBYLEDEQULMBIOOWDHWWJVUYRXGNDIUYZXTBHREFZPUUBRWMMESHGCWQGAMFKKBDLJGSVFDEPATJVLXBAXRAQRHJLTNOMLQNDNBZPLETHDGWCXAEWSSZFDAHWHTUOHVXNLMNSUAJZYYCTPNRGPRDOVJZCMYMTVOIUPIXOJYHCSUJBYDYXKRGAXVPKFIBLOQGPFYGXZNQUCCMFRZCRFZISWQN");
    msg.flags = 87U;
    const char tmp_msg_0[] = {41, 14, 25, 38, 54, 21, -44, 62, 63, 105, -61, 66, 112, -60, -114, 24, -56, -3, -57, 77, 40, 36, 91, 68, 13, 34, 53, 10, -28, -111, 117, -9, -115, -95, 32, 44, 50, -17, -123, -72, -125, -109, -29, -16, -120, 103, -19, 99, 11, 105, 11, 110, -61, 12, -74, -33, 71, -7, -2, 10, 23, 1, 16, -59, 5, 113, 87, -29, 92, 104, -62, -93, 55, -54, -68, 79, 21, -80, -94, 106, 31, 54, 97, -3, -69, 87, 61, -124, 24, -52, 1, 119, -80, 31, -77, 58, -96, 121, -64, -41, -104, -71, -7, -38, 45, -7, -25, -13, -72, -16, -47, 21, -27, 10, 122, -11, -90, -31, -49, 7, 114, -43, 6, -59, -7, 114, -128, -87, -11, -73, 11, 7, 25, 112, 99, -29, -24, -92, -35, 44, -73, -42, -126, 56, -63, -27, 59, 57, -94, 16, -89, -31, 54, -67, 71, 111, 45, -39, -61, -34, -46, 39, 17, 89, -81, 11, 110, 112, 26, 55, 99};
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
    msg.setTimeStamp(0.922766286351);
    msg.setSource(41039U);
    msg.setSourceEntity(31U);
    msg.setDestination(24059U);
    msg.setDestinationEntity(27U);
    msg.seq = 7251U;
    msg.sys_dst.assign("MDCEVJSYNOPBGBHKHSGAYRIFWAWAVKBUSPNTUYRQEGORIKMXVTUDCNRTDCVOUIUYWYJMBZTEARHVXXWGBBINLZJCLJBVQHLLGXGOFTOETXJCDOTFHMPLIEVBFSNZOFBRBQIHOHPEYJYGXDCRPGGICLXXAEDKVDRCLPKCSSQSMQHNMWQYMQWPIVZZOFLAPFLWXIWINDTFULUSFKSRAKKQYYOENFJDMUSAHNRMAMJUNXQZZPZJ");
    msg.flags = 155U;
    const char tmp_msg_0[] = {21, 1, 35, -1, 30, -21, 61, 37, -29, -12, 56, -12, 34, 81, 40, -10, -116, 121, 108, 77, -99, 55, -91, 28, -36, -78, 79, -117, -42, 78, -98, -26, 117, 34, -77, -87, -86, -23, -67, -105, 69, -74, 9, 37, -22, 0, -74, -98, -62, 29, 76, 33, -29, -10, -73, 81, -104, -117, 43, -52, 15, -64, -84, -115, -48, 118, 105, -121, 84, -8, -15, -28, -94, 93, 43, 22, -61, 26, 61, 20, -33, 114, 19, -17, -75, 42, 105, 47, -44, 65, 65, 66, -81, -39, -63, 21, -9, -103, 106, -90, -18, 118, 74, 91, 95, 98, 48, 25, 92, 9, 3, 1, 72, 98, -86, 118, -47, 60, -93, -114, -16, 44, 22, -34, -26, 58, 13, 83, 1, -6, -23, -76, 84, -57, 72, 94, 77, 11, 0, 101, -50, 78, 74, -45, -46, -60, -116, -90, -63};
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
    msg.setTimeStamp(0.879516115829);
    msg.setSource(31236U);
    msg.setSourceEntity(16U);
    msg.setDestination(53650U);
    msg.setDestinationEntity(53U);
    msg.sys_src.assign("IYMSGHOGNRJ");
    msg.sys_dst.assign("IWOQNFSUKRQMEUEUQECABPYVUZYFWSEGMTWBCJCKTIYPVE");
    msg.flags = 47U;
    const char tmp_msg_0[] = {-19, 17, -75, 124, 24, 126, 12, -81, -92, 8, 121, -98, -17, -102, -114, -76, 40, -47, -37, -28, -78, -47, 18, -21, 114, 77, 101, 39, -113, -117, -111, -26, 104, 0, 86, 92, -104, -65, 78};
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
    msg.setTimeStamp(0.738170611444);
    msg.setSource(48171U);
    msg.setSourceEntity(37U);
    msg.setDestination(16179U);
    msg.setDestinationEntity(63U);
    msg.sys_src.assign("ZYLBOYJDLYTHSUYSFOZBFWMLIKCUOBZFAZGCSQOXULGSUVIVERANNLYEZRPFESCLHGAHOCEQJZEGHTKARAVWKUHMCCFILXTREWHSWKVCFRNGVNPBZEEGHMZRBSMIQKTTSDHIKDXYWUDMIFFWYUWOXKJQURQIXNADVMEONQPQIBJXYDPTDMMGDJAQFX");
    msg.sys_dst.assign("ULMAVNMWFCKFRGPEBQDDEDSZAENIUNGLNQSROOWBJBRDNYHAPXHRKGLNLXOVMPUDBPYGJZYUJIFMKJURMKSITAFHQJMTGDYBY");
    msg.flags = 83U;
    const char tmp_msg_0[] = {13, 88, 95, -29, 8, -53, 34, 44, -63, 41, 106, 17, 124, -58, 95, -51, 29, 10, 35, 39, -127, 53, -91, -40, 63, -10, 32, 23, -120, 98, 51, 63, -44, -101, -35, 40, 10, 108, -89, -32, -35, 12, -125, 3, 51, 2, -15, -91, 19, 15, -59, -41, -114};
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
    msg.setTimeStamp(0.286074566406);
    msg.setSource(34353U);
    msg.setSourceEntity(244U);
    msg.setDestination(13105U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("USWWYNKITGTFVIQLOMKXQYQQVMWKLNSWZWKTCPFLJYLXUEQFOVBXPQSETLBCCSGGEARMLERJBDWAYSHZIANSEVCKZRIDJOGTXXBLTRZDLMVQBDUQNHMVPAYDUNHWQRCGJWRBXDOHFNBSXTAHHFPHGLFJMFABRYNDEKZYZKNGUPPFRJJHZEKNFTGMMJMQCCYWUAEXSUPDIOSXHFVCRZAPJIARLYEGCCGKPSUOIZDHOVPUOMVKTXJUBZYTII");
    msg.sys_dst.assign("MBTZLPHVIEBDQHPSGOXEWFINFPZMKACNOSLCXKVZEQNDTJTLLNNVMSYCISQBZFFWVRAJFDWJEDJMXHWOJNOVKVOHAVIPQTOUXPDGYGYEHGRWJPZYFNERYAWDRPFPQOOKMOMADGHUDQXFIKDZEQQBGHXGACSFVWLVTXULMYRSDAECASWKWTHPSTKLIBUANQFBZBMUOKLJBRIX");
    msg.flags = 59U;
    const char tmp_msg_0[] = {-61, 52, 84, -125, -62, 91, -36, 50, -90, 39, -16, 38, 96, 58, -78, 17, 48, 22, -85, -101, -49, 10, 78, -45, -90, -48, -112, -20, -50, 98, -106, 73, -46, -15, 95, -37, -66, 82, 57, -93, 22, -87, 64, 108, -96, 49, 92, 120, -82, 115, 1, 45, 112, 109, -28, 119, -17, 90, -119, -77, -1, 89, 87, -4, -92, 39, -121, 86, -23, -51, -96, -49, 125, -2, -60, 72, 47, 53, 57, 47, -17, 74, -48, 117, 59, -76, -112, 45, 44, -57, 62, 56, -78, 101, 75, 57, -77, 56, 34, -52, -95, -54, -115, -48, -85, 94, 79, 28, -127, 67, 35, 30, 111, -111, -16, 111, -65, 78, 44, 27, 74, -124, -72, 85, 6, -107, 95, 100, 54};
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
    msg.setTimeStamp(0.635485939414);
    msg.setSource(298U);
    msg.setSourceEntity(184U);
    msg.setDestination(16895U);
    msg.setDestinationEntity(165U);
    msg.seq = 1068U;
    msg.value = 76U;
    msg.error.assign("SFWZPDZKQTPFAKXIPPDPKQFBQUSEUOFOZXYPSXJMHTTLWNJNBINVCZVWBHBHBJLICSZVGRHAIYYHAFCKIX");

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
    msg.setTimeStamp(0.578465724562);
    msg.setSource(49014U);
    msg.setSourceEntity(11U);
    msg.setDestination(7951U);
    msg.setDestinationEntity(46U);
    msg.seq = 7074U;
    msg.value = 115U;
    msg.error.assign("SVIUUUJFLWTEOVXCDDOSCDNBTNIMJRNDKHUHTKFAKEUBVWQOWCGYHRKA");

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
    msg.setTimeStamp(0.628795841412);
    msg.setSource(44840U);
    msg.setSourceEntity(192U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(155U);
    msg.seq = 50930U;
    msg.value = 206U;
    msg.error.assign("CEKBLRODCAJRUZWVFDIMGVQBRTKPHLEBZFVTWHKXDXRWNOLVCPKBNKWYTOPDLHMEOSWNIOXQESZMHQTAZWALBSCEURTOEYHQGAJMSJBVAYIEKTIVJXTACIGMTALUHINCFJJQMLKIQUTOLPKZYRFAJYVBIXYOIFUZRKXDEDJWLEHPYZFXGUQNANKMUUNSDXENSZPFMNUMYGGZSNAGWGPSBJCQTSHFH");

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
    msg.setTimeStamp(0.0300740616469);
    msg.setSource(54967U);
    msg.setSourceEntity(133U);
    msg.setDestination(4382U);
    msg.setDestinationEntity(69U);
    msg.seq = 18033U;
    msg.sys.assign("FFKNYSQRSYWYCHHQGZOASTOZKFFIZKMGXVEYYUBZGPANUKCGFSCGQUTTZBEQOBVIGOFIYKJQXHRDQNEDMCAHRNQVBCCXKIUVPCLDFKMDXWMOUUOWIFJDYAGVGWJNUVJWUBKIFSCYVGXMARVNQMMXPBWJOBSOEXENDSWFNTDLIRTXEEYPPYRTULLAGWNJPCTZJBAIAALDLRTBJCPAPJIVBM");
    msg.value = 0.349388604625;

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
    msg.setTimeStamp(0.263497944451);
    msg.setSource(4746U);
    msg.setSourceEntity(1U);
    msg.setDestination(20944U);
    msg.setDestinationEntity(189U);
    msg.seq = 60573U;
    msg.sys.assign("ISIKKLBSBRTDUXPPLVNFJUVHOPAUDVTLSFPZCBTBSXREZDKWWYCWFCZNBYTHVIBJOTPKWRGYQDVJNLVRHQMQOQGWSKUMMEHEAN");
    msg.value = 0.446130745864;

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
    msg.setTimeStamp(0.748590555489);
    msg.setSource(40898U);
    msg.setSourceEntity(116U);
    msg.setDestination(39477U);
    msg.setDestinationEntity(126U);
    msg.seq = 1069U;
    msg.sys.assign("WSXKFXCEVPHDGYCNUIXJPWXDKUUZYUJHJKWEOKRMBEDRKHVBTJYOEWAWLHENDAIYSHFNSUBGAELQBOZUHGYLBQHQPIKMATOWQKYBNGIQXFCHRBZLZXVSFEFVZVGPQNUYKFUGTJCCQLRYFSDLACALEIVMSDPOTZMGUFXJPVKTNMTNLHMRBNNWRQPOTICJTBFQPPKIQOXNSGAJDCCVRYZOXPDWVWZGDAXGOSZTYZJUWTVSM");
    msg.value = 0.857862659445;

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
    msg.setTimeStamp(0.912443739097);
    msg.setSource(62497U);
    msg.setSourceEntity(134U);
    msg.setDestination(56559U);
    msg.setDestinationEntity(68U);
    msg.seq = 44673U;
    msg.sys_dst.assign("OCYKFBMVNGPVNHCIQPWAAMBGUWJFRKQSHNXGLPMGRHLIWIIIK");
    msg.timeout = 0.108075680162;

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
    msg.setTimeStamp(0.557248950387);
    msg.setSource(39539U);
    msg.setSourceEntity(78U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(153U);
    msg.seq = 22423U;
    msg.sys_dst.assign("UCQEXXZZOZDJFNPDQFJBRGNQQGUTXURDKVDAMNSHSXOBTKFJJFJYPREFSTQFOXWFZGENYNJEHNNDNYPUKRBDKVDWRAOISVZOJHELOBAIHZXTELIRWXMIDUWRIQKWGPUAACPACBGNZGPWQRTAVXGSMMMHDVFIOTYMLTPH");
    msg.timeout = 0.608446770172;

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
    msg.setTimeStamp(0.753617042104);
    msg.setSource(45507U);
    msg.setSourceEntity(201U);
    msg.setDestination(1732U);
    msg.setDestinationEntity(115U);
    msg.seq = 32103U;
    msg.sys_dst.assign("MHIIZUBJFOCYQRGIUMSVJEUMUZTIROBKZXNKSXXRTRJKICGAQFBHWEIUNZSAQDWGGCFFAZUGCVRMOLBOAENIEPKDHYXICVBYNAJJPTFOXQZWXECQJMOBJVZKQMLHRRWGYZYAPSQNLWUEDMLHPVOMTCYSDDUVBULTKVSWPA");
    msg.timeout = 0.717954060431;

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
    msg.setTimeStamp(0.747078709395);
    msg.setSource(4977U);
    msg.setSourceEntity(228U);
    msg.setDestination(2218U);
    msg.setDestinationEntity(17U);
    msg.action = 74U;
    msg.longain = 0.443280763241;
    msg.latgain = 0.436977900808;
    msg.bondthick = 790314816U;
    msg.leadgain = 0.901376681233;
    msg.deconflgain = 0.234104689733;

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
    msg.setTimeStamp(0.316743684445);
    msg.setSource(42665U);
    msg.setSourceEntity(175U);
    msg.setDestination(1518U);
    msg.setDestinationEntity(186U);
    msg.action = 43U;
    msg.longain = 0.957329861987;
    msg.latgain = 0.613514944872;
    msg.bondthick = 814491046U;
    msg.leadgain = 0.945355057856;
    msg.deconflgain = 0.0520258101806;

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
    msg.setTimeStamp(0.403935226615);
    msg.setSource(22857U);
    msg.setSourceEntity(28U);
    msg.setDestination(9027U);
    msg.setDestinationEntity(104U);
    msg.action = 38U;
    msg.longain = 0.264156824111;
    msg.latgain = 0.518281509874;
    msg.bondthick = 1950601292U;
    msg.leadgain = 0.197810459617;
    msg.deconflgain = 0.920527139959;

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
    msg.setTimeStamp(0.486763511111);
    msg.setSource(19687U);
    msg.setSourceEntity(119U);
    msg.setDestination(28821U);
    msg.setDestinationEntity(225U);
    msg.err_mean = 0.314586979141;
    msg.dist_min_abs = 0.504771155908;
    msg.dist_min_mean = 0.855305034635;

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
    msg.setTimeStamp(0.780615580873);
    msg.setSource(33080U);
    msg.setSourceEntity(5U);
    msg.setDestination(39429U);
    msg.setDestinationEntity(22U);
    msg.err_mean = 0.818669718618;
    msg.dist_min_abs = 0.333407387197;
    msg.dist_min_mean = 0.707438973867;

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
    msg.setTimeStamp(0.419548535279);
    msg.setSource(33394U);
    msg.setSourceEntity(173U);
    msg.setDestination(18969U);
    msg.setDestinationEntity(175U);
    msg.err_mean = 0.731030408596;
    msg.dist_min_abs = 0.802039212802;
    msg.dist_min_mean = 0.206974875791;

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
    msg.setTimeStamp(0.727140551504);
    msg.setSource(49172U);
    msg.setSourceEntity(153U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(230U);
    msg.action = 90U;
    msg.lon_gain = 0.638601945401;
    msg.lat_gain = 0.134772307634;
    msg.bond_thick = 0.0132253842073;
    msg.lead_gain = 0.920173561616;
    msg.deconfl_gain = 0.479829909873;
    msg.accel_switch_gain = 0.416870993984;
    msg.safe_dist = 0.948182725345;
    msg.deconflict_offset = 0.695791943191;
    msg.accel_safe_margin = 0.0217014568318;
    msg.accel_lim_x = 0.726333425593;

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
    msg.setTimeStamp(0.298441277333);
    msg.setSource(24757U);
    msg.setSourceEntity(136U);
    msg.setDestination(4158U);
    msg.setDestinationEntity(191U);
    msg.action = 123U;
    msg.lon_gain = 0.855189922507;
    msg.lat_gain = 0.769213931658;
    msg.bond_thick = 0.945238680868;
    msg.lead_gain = 0.648508453798;
    msg.deconfl_gain = 0.91048813734;
    msg.accel_switch_gain = 0.592212214445;
    msg.safe_dist = 0.187788018389;
    msg.deconflict_offset = 0.914481221402;
    msg.accel_safe_margin = 0.945879669011;
    msg.accel_lim_x = 0.771691043429;

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
    msg.setTimeStamp(0.0679698286543);
    msg.setSource(61860U);
    msg.setSourceEntity(71U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(32U);
    msg.action = 94U;
    msg.lon_gain = 0.157285560666;
    msg.lat_gain = 0.354471164072;
    msg.bond_thick = 0.0434365074644;
    msg.lead_gain = 0.309937061646;
    msg.deconfl_gain = 0.437146103387;
    msg.accel_switch_gain = 0.547717828655;
    msg.safe_dist = 0.35671826166;
    msg.deconflict_offset = 0.822293216623;
    msg.accel_safe_margin = 0.84012333991;
    msg.accel_lim_x = 0.40890778576;

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
    msg.setTimeStamp(0.803130558552);
    msg.setSource(41400U);
    msg.setSourceEntity(133U);
    msg.setDestination(43918U);
    msg.setDestinationEntity(87U);
    msg.type = 188U;
    msg.op = 104U;
    msg.err_mean = 0.949121928913;
    msg.dist_min_abs = 0.598346030274;
    msg.dist_min_mean = 0.505925145282;
    msg.roll_rate_mean = 0.074022834582;
    msg.time = 0.157950622382;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 109U;
    tmp_msg_0.lon_gain = 0.349595331514;
    tmp_msg_0.lat_gain = 0.526019783997;
    tmp_msg_0.bond_thick = 0.0800130192589;
    tmp_msg_0.lead_gain = 0.437193498131;
    tmp_msg_0.deconfl_gain = 0.680651830955;
    tmp_msg_0.accel_switch_gain = 0.753217453101;
    tmp_msg_0.safe_dist = 0.672884164687;
    tmp_msg_0.deconflict_offset = 0.972504122816;
    tmp_msg_0.accel_safe_margin = 0.7630801464;
    tmp_msg_0.accel_lim_x = 0.270634097547;
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
    msg.setTimeStamp(0.420030463411);
    msg.setSource(35301U);
    msg.setSourceEntity(57U);
    msg.setDestination(27U);
    msg.setDestinationEntity(32U);
    msg.type = 138U;
    msg.op = 109U;
    msg.err_mean = 0.862935802001;
    msg.dist_min_abs = 0.107886948563;
    msg.dist_min_mean = 0.153686618408;
    msg.roll_rate_mean = 0.774225524401;
    msg.time = 0.6136958344;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 165U;
    tmp_msg_0.lon_gain = 0.37821460935;
    tmp_msg_0.lat_gain = 0.013839314258;
    tmp_msg_0.bond_thick = 0.130540936397;
    tmp_msg_0.lead_gain = 0.528300361853;
    tmp_msg_0.deconfl_gain = 0.215295350184;
    tmp_msg_0.accel_switch_gain = 0.210077340772;
    tmp_msg_0.safe_dist = 0.164679769181;
    tmp_msg_0.deconflict_offset = 0.666906051391;
    tmp_msg_0.accel_safe_margin = 0.5627878309;
    tmp_msg_0.accel_lim_x = 0.619982534308;
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
    msg.setTimeStamp(0.192551373029);
    msg.setSource(3791U);
    msg.setSourceEntity(92U);
    msg.setDestination(23953U);
    msg.setDestinationEntity(8U);
    msg.type = 240U;
    msg.op = 219U;
    msg.err_mean = 0.2941070112;
    msg.dist_min_abs = 0.224755726586;
    msg.dist_min_mean = 0.441583206798;
    msg.roll_rate_mean = 0.999695559065;
    msg.time = 0.762208353285;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 241U;
    tmp_msg_0.lon_gain = 0.575977141696;
    tmp_msg_0.lat_gain = 0.384936618901;
    tmp_msg_0.bond_thick = 0.94673312459;
    tmp_msg_0.lead_gain = 0.114214249777;
    tmp_msg_0.deconfl_gain = 0.358421687877;
    tmp_msg_0.accel_switch_gain = 0.112844112372;
    tmp_msg_0.safe_dist = 0.48973390441;
    tmp_msg_0.deconflict_offset = 0.340300173997;
    tmp_msg_0.accel_safe_margin = 0.898176642319;
    tmp_msg_0.accel_lim_x = 0.813331205119;
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
    msg.setTimeStamp(0.258777883792);
    msg.setSource(22633U);
    msg.setSourceEntity(75U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.0982414740025;
    msg.lon = 0.0605113904152;
    msg.eta = 2754677332U;
    msg.duration = 27935U;

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
    msg.setTimeStamp(0.351833575409);
    msg.setSource(55662U);
    msg.setSourceEntity(206U);
    msg.setDestination(53182U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.199369992831;
    msg.lon = 0.4842808592;
    msg.eta = 1763204786U;
    msg.duration = 57257U;

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
    msg.setTimeStamp(0.478482986454);
    msg.setSource(33830U);
    msg.setSourceEntity(64U);
    msg.setDestination(13425U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.160942554787;
    msg.lon = 0.109140024686;
    msg.eta = 676311344U;
    msg.duration = 9959U;

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
    msg.setTimeStamp(0.494688618764);
    msg.setSource(52472U);
    msg.setSourceEntity(209U);
    msg.setDestination(47687U);
    msg.setDestinationEntity(244U);
    msg.plan_id = 46843U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.698305547056;
    tmp_msg_0.lon = 0.232579174572;
    tmp_msg_0.eta = 1501592189U;
    tmp_msg_0.duration = 21767U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.774307073292);
    msg.setSource(55064U);
    msg.setSourceEntity(211U);
    msg.setDestination(41653U);
    msg.setDestinationEntity(165U);
    msg.plan_id = 5834U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.41962109741;
    tmp_msg_0.lon = 0.278923953386;
    tmp_msg_0.eta = 1818858796U;
    tmp_msg_0.duration = 14008U;
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
    msg.setTimeStamp(0.184243688165);
    msg.setSource(46316U);
    msg.setSourceEntity(177U);
    msg.setDestination(32105U);
    msg.setDestinationEntity(184U);
    msg.plan_id = 56644U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.615719036472;
    tmp_msg_0.lon = 0.259485040436;
    tmp_msg_0.eta = 351309935U;
    tmp_msg_0.duration = 61986U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.745965383483);
    msg.setSource(47957U);
    msg.setSourceEntity(254U);
    msg.setDestination(16956U);
    msg.setDestinationEntity(107U);
    msg.type = 167U;
    msg.command = 117U;
    msg.settings.assign("CIQAAFAEABDNCLOYKWQUAPRTIXHOYTFVWFGMKESURZOPWOGLIGVTQNGCHPOYZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22000U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KEMLEOJELTROZOSWJHASGTKDDDLXUBMFDBCKFFYNQPPIETRUAUJPMTZHMMPCBBYGTMSMBVROLDGPAFHFXAWLXAMZJGURJLOHDPUZFFLIYSQFYV");

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
    msg.setTimeStamp(0.599551937395);
    msg.setSource(15344U);
    msg.setSourceEntity(165U);
    msg.setDestination(62699U);
    msg.setDestinationEntity(11U);
    msg.type = 90U;
    msg.command = 162U;
    msg.settings.assign("OFYXTGTIJZEUZEDYCWUCBNPGHCGRCGKIIJNMAVTSDMTVUBBLVRUXMDEJGOUOQDXROVSCNFLNNSEQESRWWYZICXQRIRFLMIRVUMUFOJOJLKHKZPUGECYRZDVHTRQGJAKQYLAWTZMSHBHNVLOXHPMPBSMIJXGUAJSZBNFDEYXANGKKXDBKWPQWHDMOWKEDSPSTJHPTKLWCCBQLHLRDQEMOYZFOT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51370U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ITQPOSZBCFDONRPAZDHQOWAGEXMIUGWKLWQVOXVSDEFFUUATJUJYVNMREKXRAQNDGKSUT");

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
    msg.setTimeStamp(0.958851402461);
    msg.setSource(33840U);
    msg.setSourceEntity(143U);
    msg.setDestination(43139U);
    msg.setDestinationEntity(23U);
    msg.type = 87U;
    msg.command = 189U;
    msg.settings.assign("PGJTAKBXQCZNTESFGYMCIJHGGDHPHIKIMSKUOFWAFGPBTWSEQQPUPONTTAVGCWIMTYNUSRERKVZZNJYGSQZDBQONCUSYLWHADLAMSGVCCGPRWMVWJNOANFMOWOIFKPXZXYKEOXBKVBHVJRLUINCMAXFFTLATBHKZKUJLYOOEEGVIBKBQRDTRCUQHCP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 28348U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.166431006293;
    tmp_tmp_msg_0_0.lon = 0.644245481141;
    tmp_tmp_msg_0_0.eta = 3818305224U;
    tmp_tmp_msg_0_0.duration = 41685U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FTTSXPBCQNYGREKATHWRDCDVWYOYTHCZLSENMIFUMUWJWEVPDJBMMPYZAICLNOXXQRLFGDTGFWONSPWBPBJOCHXLVMUSQNEQKWLUOJYJJITNAEAION");

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
    msg.setTimeStamp(0.0550591803654);
    msg.setSource(13967U);
    msg.setSourceEntity(251U);
    msg.setDestination(14833U);
    msg.setDestinationEntity(11U);
    msg.state = 119U;
    msg.plan_id = 65504U;
    msg.wpt_id = 125U;
    msg.settings_chk = 60497U;

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
    msg.setTimeStamp(0.682027145344);
    msg.setSource(56098U);
    msg.setSourceEntity(216U);
    msg.setDestination(40173U);
    msg.setDestinationEntity(174U);
    msg.state = 106U;
    msg.plan_id = 62706U;
    msg.wpt_id = 196U;
    msg.settings_chk = 49680U;

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
    msg.setTimeStamp(0.723214312474);
    msg.setSource(14590U);
    msg.setSourceEntity(35U);
    msg.setDestination(54234U);
    msg.setDestinationEntity(250U);
    msg.state = 245U;
    msg.plan_id = 56694U;
    msg.wpt_id = 114U;
    msg.settings_chk = 10944U;

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
    msg.setTimeStamp(0.453247064556);
    msg.setSource(30253U);
    msg.setSourceEntity(148U);
    msg.setDestination(9618U);
    msg.setDestinationEntity(247U);
    msg.uid = 86U;
    msg.frag_number = 77U;
    msg.num_frags = 79U;
    const char tmp_msg_0[] = {-45, 99, -29, -94, -30, 77, -48, -55, 108, -52, 119, -121, 70, 1, -24, 51, 42, -31, -117, 117, -43, 90, -127, -84, -102, -111, 16, 36, 15, -84, -10, 27, 16, -108, -60, 108, -42, 119, -96, -113, 80, -61, -66, 34, 11, -23, -101, 69, 45, 86, -6, 84, 10, -83, 38, -120, 26, -97, 92, -55, 10, 24, -60, 22, -19, 16, 113, 53, 18, 18, -27, -4, 7, -116, -41, 93, 12, -6, 13, -108, 92, -43, 108, -75, 25, -39, -90, -12, -75, -20, -85, 36, -6, -97, -25, 49, 38, 123, -45, -65, -27, -77, -117, 113, 18, -51, 52, -116, -12, -27, -4, -8, -29, 83, -80, 110, 19, 0, -74, -96, 117, 16, -8, 48, 111, 64, 28, 96, -56, -86, 4, -110, -114, -48, 35, 66, -2, 112, 66, -115, 18, 50, -43, 113, -28, -17, -10, -107, -97, 109, 100, 76, -30, -18, -52, 122, -84, -86, 107, 18, -22, 18, -45, 30, -115, -64, 98, 13, -120, -121, -14, 96, 111, -101, -55, 76, -84, 18, -25, 99, -3, -43, 71, 35, -22, 1, -78, 101, -20, 101, -7, 124, -22, -14, -65, 52, 28, -42, 19, -82, -112, 42, -100, 50, -31, -73, -107, -19, 82, -38, -2, -45, 33, -34, 125, -19};
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
    msg.setTimeStamp(0.88479434727);
    msg.setSource(36373U);
    msg.setSourceEntity(55U);
    msg.setDestination(40583U);
    msg.setDestinationEntity(145U);
    msg.uid = 17U;
    msg.frag_number = 195U;
    msg.num_frags = 122U;
    const char tmp_msg_0[] = {60, -113, 105, 43, -19, -64, -34, -115, -100, 58, -24, 54, -35, 123, 50, -113, 59, -16, 82, -95, 41, -3, 84, 38, 106, -20, -75, -76, -122, 59, 87, 49, -9, -29, 115, -106, 57, -60, -63, -77, 106, 98, 76, 120, 84, 80, 109, -32, 60, -66, -119, -100, 53, 42, -2, -65, -66, -76, -2, 115, -111, 81, -37, -106, -81, 69, -99, -47, 93, 123, 124, 11, 9, 125, -24, 96, 46, -112, -84, -107, 56, 121, 99, -93, 98, 101, 12};
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
    msg.setTimeStamp(0.50547693077);
    msg.setSource(57597U);
    msg.setSourceEntity(197U);
    msg.setDestination(61028U);
    msg.setDestinationEntity(176U);
    msg.uid = 94U;
    msg.frag_number = 156U;
    msg.num_frags = 64U;
    const char tmp_msg_0[] = {56, -90, 19, -16, 37, -28, 103, -67, -15, 126, -5, 35, 79, -114, 15, 118, -29, -24, -7, -116, -16, -83, 69, 103, -23, -59, 35, -38, -76, 107, 90, 19, -116, 12, 82, 109, 81, -27, 117, -13, 123, -10, -10, 112, 37, -24, -12, -99, 72, -100, -76, 92, -23, -42, 40, 104, 85, -9, 73, -38, -66, -119, 89, -96, -76, -42, -24, 5, -8, -38, 72, 115, 79, -2, 116, 72, -84, -75, 20, 44, -5, -85, -80, -5, 70, 62, -26, -89, 121, 102, 13, 120, 62, -27, 95, 71, -72, 74, -20, -37, -44, -10, -23, 31, -55, 23, -108, 23, 111, -44, 94, 3, 66, -69, -13, 33, -108, -13, -93, 84, 58, -73, -33, 0, -82, -116, 109, -57, -12, -122, 39, 85, -77, 35, -77, 103, -31, 100, -33, -49, 94, 76, -115, -93, 125, 1, 73, -62, -20, -56, 28, -54, 120, 3, -85, -3, 104, 81, 53, -91, 91, -13, 65, -39, 90, 7, 13, -118, 95, 98, 23, 125, 77, 96, -9, -75, 114, -40, -48, 93, 25, -97, 94, -114, -50, 57, -77, -101, -12, -5, 6, 74, -121, -107, -7, 60, 122, -108, 74, -69, -76, -72, -45, 28, -12, 0, 2, -67, -65, 21, -16, -87, 20, -45, 61, 74, -109, 75, 66, 47, 5, -70, 80, -12, 26};
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
    msg.setTimeStamp(0.194690346686);
    msg.setSource(14557U);
    msg.setSourceEntity(199U);
    msg.setDestination(19322U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("XWEORPWDFKBRIYLXCQBPVYHNXHBPSSUQXIPANONAFNEXLDQITMBBZUAKYYWTJZVNINZVMGBQSZJXRTCAGLNGWEHXEQDATDMOGCIHOWDGCEUZYOBZDPZGGEMZWRWRIHMKWYJQXBFUTIIFPLNXQJFVLRFHVSLASLKEGMVSLRKBCCVVA");
    const char tmp_msg_0[] = {17, 23, -30, -43, -71, -10, 9, 96, -77, -35, -1, 48, 106, -100, 62, -43, 116, -74, 124, 3, -29, 107, -36, -81, 78, -80, 35, -44, 33, 9, 112, -61, -122, -111, -27, 113, 113, -40, -4, -53, -41, -123, 66, -34, 23, 13, 8, 80, 81, -75, -73, -46, 83, 39, -126, 52, -1, 27, 41, -111, -26, 102, -116, 88, -35, 81, 62, 122, 65, -128, -119, -31, 81, -121, -101, -127, 101, 96, -83, 99, 112, 75, 91, -100, 59, -51, 53, 27, 112, 68, -71, -53, -118, -117, 24, -44, -6, 42, -75, 114, -112, -99, 118, -81, 23, -61, -25, 119, 17, 72, -3, 100, -66, 62, 7, -9, -117, 61, -33, 106, -47, 69, -114, -116, -27, -102, 52, 12, -29, -86, -1, -64, -72, -51, 39, -15, -84, 21, -113, -14, -105, -10, -91, 87, 52, 54, 50, 118, 106, 87, -73, 75, -112, 0, 28, -91, -71, -55, -121, 76, -38, -16, -118, 16};
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
    msg.setTimeStamp(0.511360122713);
    msg.setSource(32946U);
    msg.setSourceEntity(242U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(223U);
    msg.content_type.assign("XNXOFDGABDOYATHEISVZYCLLJDESYYULTKWREWSBBEPCUBXCPJNA");
    const char tmp_msg_0[] = {-4, 100, 31, -35, 116, -127, 40, 4, -89, 76, 36, -101, -61, 52, -26, -45, 60, -60, -67, -30, -25, 49, 65, -1, -52, 17, 67, -125, -114, -29, 13, -13, 18, 25, -51, 42, 39, -18, 94, 3, 35, 37, 69, -32, 4, -59, -34, -1, 10, 105, 87, 66, -125, 69, -93, -53, -103, 112, 51, -100, 108, 38, 25, 4, -101, 61, 66, -103, -30, -85, -104, 67, 1, 25, 57, 38, 110, -96, -78, 94, 25, 65, -26, 100, -25, 124, -45, 123, -59, -116, 81, -104, -40, -81, -34, -112, 65, -79, -56, -6, 76, -108, 116, 53, 25, 60, -83, -88, 110, 32, -100, -42, -75, -4, 91, -27, -31, -16, -75, -66, -26, -113, -49, -56, 99, 7, 115, -96, -19, 37, 0, -128, 108, 110, 110, -82, -56, -11, -63, -32, 83, 118, 95, 33, -103, 89, -105, 115, 37, -32, -116, -56, -82, -5, 92, -71, 73, -99, 49, 63, -94, 47, -27, 45, -28, 82, -27, 72, 46, 71, -32, -118, 77, 67, -77, -81, 14, -27, -49, 27, 40, 18, 32, -64, 41, 19, 113, 14, 119, 100, -22, -73, -74, -2, -97, -105};
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
    msg.setTimeStamp(0.563891445237);
    msg.setSource(62340U);
    msg.setSourceEntity(94U);
    msg.setDestination(57658U);
    msg.setDestinationEntity(98U);
    msg.content_type.assign("ABMWFZTVKIBZALMMBFUCLAAHWIFYYUCYABLKESXUTUBNDAWCNMGVYJVAWJGASPCXWEHZHXVGPXXTSDARHDZIKXQJMKSQRODVNNNIOJGIMSPQRQDHKFQDKPUTDKHTTSIUFCRZJEVGQLYHLCEYJCMBOIPMCTRRBUMWIGKSOJHGPZFWQYIVBXPFOMOPNOFPLZQUSLWAWJZNTGENDCLGTRXEQI");
    const char tmp_msg_0[] = {-126, -101, 26, -104, -52, 121, 51, -90, 88, -63, 116, 103, -95, 108, -103, -41, 99, -93, 51, 20, 94, 15, 115, 71, -24, -44, 37, -64, -66};
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
    msg.setTimeStamp(0.933822933441);
    msg.setSource(10141U);
    msg.setSourceEntity(214U);
    msg.setDestination(35650U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.286214284064);
    msg.setSource(12499U);
    msg.setSourceEntity(87U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.362892926397);
    msg.setSource(1510U);
    msg.setSourceEntity(94U);
    msg.setDestination(32926U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.137489968624);
    msg.setSource(8084U);
    msg.setSourceEntity(141U);
    msg.setDestination(420U);
    msg.setDestinationEntity(247U);
    msg.target = 63159U;
    msg.bearing = 0.397767371531;
    msg.elevation = 0.300123438045;

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
    msg.setTimeStamp(0.196967742629);
    msg.setSource(50751U);
    msg.setSourceEntity(76U);
    msg.setDestination(3641U);
    msg.setDestinationEntity(189U);
    msg.target = 24957U;
    msg.bearing = 0.500126276887;
    msg.elevation = 0.758489506869;

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
    msg.setTimeStamp(0.0624693888084);
    msg.setSource(20060U);
    msg.setSourceEntity(78U);
    msg.setDestination(11641U);
    msg.setDestinationEntity(125U);
    msg.target = 59371U;
    msg.bearing = 0.21684919787;
    msg.elevation = 0.885333738989;

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
    msg.setTimeStamp(0.831481589766);
    msg.setSource(48723U);
    msg.setSourceEntity(187U);
    msg.setDestination(54884U);
    msg.setDestinationEntity(111U);
    msg.target = 64199U;
    msg.x = 0.704905659945;
    msg.y = 0.102589494423;
    msg.z = 0.316887988688;

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
    msg.setTimeStamp(0.165251178469);
    msg.setSource(59125U);
    msg.setSourceEntity(184U);
    msg.setDestination(49430U);
    msg.setDestinationEntity(104U);
    msg.target = 29932U;
    msg.x = 0.519164856481;
    msg.y = 0.350386155395;
    msg.z = 0.84704437984;

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
    msg.setTimeStamp(0.957293883827);
    msg.setSource(8107U);
    msg.setSourceEntity(29U);
    msg.setDestination(9002U);
    msg.setDestinationEntity(117U);
    msg.target = 34218U;
    msg.x = 0.323946391969;
    msg.y = 0.324625421626;
    msg.z = 0.381113364291;

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
    msg.setTimeStamp(0.30325143696);
    msg.setSource(5842U);
    msg.setSourceEntity(141U);
    msg.setDestination(29744U);
    msg.setDestinationEntity(181U);
    msg.target = 55675U;
    msg.lat = 0.290135250322;
    msg.lon = 0.410061989137;
    msg.z_units = 24U;
    msg.z = 0.551039217987;

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
    msg.setTimeStamp(0.681036344679);
    msg.setSource(33094U);
    msg.setSourceEntity(251U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(60U);
    msg.target = 28915U;
    msg.lat = 0.249027160315;
    msg.lon = 0.518582991163;
    msg.z_units = 34U;
    msg.z = 0.188963738667;

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
    msg.setTimeStamp(0.901931216395);
    msg.setSource(20799U);
    msg.setSourceEntity(48U);
    msg.setDestination(63329U);
    msg.setDestinationEntity(16U);
    msg.target = 54937U;
    msg.lat = 0.200777740906;
    msg.lon = 0.518082559997;
    msg.z_units = 224U;
    msg.z = 0.829926312198;

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
    msg.setTimeStamp(0.173145331659);
    msg.setSource(64007U);
    msg.setSourceEntity(219U);
    msg.setDestination(37533U);
    msg.setDestinationEntity(18U);
    msg.locale.assign("RWHVMMULUWSNJPRPSC");
    const char tmp_msg_0[] = {31, -117, 118, 40, -36, -86, 76, 30, -126, 112, -51, 78, 62, -22, 64, 76, 11, 69, -24, -41, -9, -34, 97, 36, -53, 48, 62, 89, -28, -33, 51, 39, 120, 96, 96, 83, -107, 49, -63, 4, -122, -50, 13, -109, 63, 107, 67, 72, -123, -89, -110, -43, -118, -36, -128, 49, -8, 75, 10, -23, -41, 81, 35, -64, -13, -92, -128, -1, -33, 60, 82, -93, -48, -81, 95, 77, -12, 88, -21, -22, 33, 46, 77, -50, 4, -57, 35, 121, -28, -62, -26, 43, -88, -15, -87, -99, -28, 25, 31, -91, -124, -34, 46, -56, 12, 77, -11, 100, 61, 4, 53, -115, -23, -6, 61, -39, -74, -61, 27, 84, 55, 77, 97, -28, 27, 44, -75, 109, 43, 75, -97, -97, 114, -12, 95, 47, -98, -94, -4};
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
    msg.setTimeStamp(0.516138372793);
    msg.setSource(53307U);
    msg.setSourceEntity(30U);
    msg.setDestination(11412U);
    msg.setDestinationEntity(110U);
    msg.locale.assign("EIUTUOZFDCWFAAYFXJBORXJMGKSZVXYTYGNRNXUNBVIMTWBLSNMXLDYESLIPGNRBRJDFPXPRNFBAFVUTONPQIVQFVLOWSEHIYUCBGDMKZBQKHQPOEYMDSCGTNZHCOERHTAIPFIUQIYQHKTVJCMGPRRIZJGDVZXAHCJZJEXNUGKOOWWZJVWOKCTYEPDZHASNVWJPAHECRYURWSQQLZASMJ");
    const char tmp_msg_0[] = {-12, -95, 117, -42, 70, -66, 52, 1, -26, -74, 80, 54, 14, 11, -22, -91, 102, 83, 9, -80, -120, 37, 83, -75, -66};
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
    msg.setTimeStamp(0.585119797364);
    msg.setSource(33974U);
    msg.setSourceEntity(163U);
    msg.setDestination(51637U);
    msg.setDestinationEntity(68U);
    msg.locale.assign("VABJKBIWTLUEZMNOPZMKZSSOBQQCPVPNYXENOMQUJBCKYAAQRFAOKLWMPMVPDVSHTHYEWVFSPRHOTDFRXXRZUXKEGTHILWLVZLWUNFCNDAJEBCIUGYDJBBBWYSFKEAGFFKIDPCXZTACUPIRLACDEQIKCKQGMAJAGHZHNLMZHIYGXGWIORJPBYVBXKNWLHQELTSHEHUURNVXFQNDUNSSQFJMGZXCLFOSIVYROYQOMTPUD");
    const char tmp_msg_0[] = {120, 78, -83, -4, 94, -93, -56, -69, 97, 6, 67, 53, 17, -92, 34, -22, -88, -26, 119, 113, -125, -68, -89, -44, 0, 35, -73, -111, 111, 15, 96, -72, -101, -39, -109, -61, -21, -12, 34, -31, 24, 3, -11, -62, -1, 82, 2, 43, 80, 56, 84, 77, 106, 100, 36, 62, -67, -64, 90, 48, -62, 55, -77, -77, 65, -117, 39, -123, 50, 57, 26, 106, -81, 41, -73, -10, -86, -128, 106, -34, 112, 10, 40, 11, -14, -36, 62, 49, 63, -41, -48, 72, -86, 90, -7, 98, 123, -111, -16, -109, 98, -35, 64, -105, 54, 35, 79, -27, 108, 6, -94, -74, -5, -47, -15, -3, 124, 104, -62, -78, 30, 6, 3, -121, -128, -83, -88, 86, 86, -87, 26, -9, -27, -46, -99, 67, -64, -44, -24, 58, -63, -62, 69, 50, -103, -44, -51, 59, -24, -128, -61, 60, 14, 80, -5, 59, -35, -1, 119, -126, 103, -90, -116, 21, 88, 69, 23, -13, -48, -119, -21, -92, -105, -84, -7, -38, 43, 54, 17, 68, 102, 46, -103, -23, 116, 77, -4, 24, 106, -81, -49, -91, -81, 59, 99, 28, -13, -34, -53, -55, 2, 51, -27, -54, 40};
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
    msg.setTimeStamp(0.533860718763);
    msg.setSource(12173U);
    msg.setSourceEntity(114U);
    msg.setDestination(6724U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.882566917234);
    msg.setSource(40023U);
    msg.setSourceEntity(92U);
    msg.setDestination(31594U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.63247688179);
    msg.setSource(59259U);
    msg.setSourceEntity(48U);
    msg.setDestination(21780U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.663193005735);
    msg.setSource(28560U);
    msg.setSourceEntity(8U);
    msg.setDestination(43329U);
    msg.setDestinationEntity(155U);
    msg.camid = 96U;
    msg.x = 36857U;
    msg.y = 31203U;

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
    msg.setTimeStamp(0.228922105385);
    msg.setSource(59975U);
    msg.setSourceEntity(213U);
    msg.setDestination(20651U);
    msg.setDestinationEntity(41U);
    msg.camid = 132U;
    msg.x = 2266U;
    msg.y = 57040U;

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
    msg.setTimeStamp(0.139612423017);
    msg.setSource(15366U);
    msg.setSourceEntity(162U);
    msg.setDestination(36448U);
    msg.setDestinationEntity(103U);
    msg.camid = 149U;
    msg.x = 55911U;
    msg.y = 1281U;

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
    msg.setTimeStamp(0.607185551505);
    msg.setSource(54234U);
    msg.setSourceEntity(124U);
    msg.setDestination(47137U);
    msg.setDestinationEntity(110U);
    msg.camid = 219U;
    msg.x = 50692U;
    msg.y = 14728U;

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
    msg.setTimeStamp(0.70764524483);
    msg.setSource(16696U);
    msg.setSourceEntity(118U);
    msg.setDestination(39096U);
    msg.setDestinationEntity(186U);
    msg.camid = 209U;
    msg.x = 41039U;
    msg.y = 1832U;

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
    msg.setTimeStamp(0.924539066267);
    msg.setSource(36411U);
    msg.setSourceEntity(186U);
    msg.setDestination(8305U);
    msg.setDestinationEntity(42U);
    msg.camid = 178U;
    msg.x = 10037U;
    msg.y = 51277U;

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
    msg.setTimeStamp(0.365585074321);
    msg.setSource(38224U);
    msg.setSourceEntity(212U);
    msg.setDestination(46337U);
    msg.setDestinationEntity(148U);
    msg.tracking = 240U;
    msg.lat = 0.0141455598224;
    msg.lon = 0.240789202153;
    msg.x = 0.741241287964;
    msg.y = 0.752740225857;
    msg.z = 0.674335219865;

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
    msg.setTimeStamp(0.109285546805);
    msg.setSource(56646U);
    msg.setSourceEntity(180U);
    msg.setDestination(3300U);
    msg.setDestinationEntity(56U);
    msg.tracking = 159U;
    msg.lat = 0.118978695595;
    msg.lon = 0.228407407599;
    msg.x = 0.0789730038895;
    msg.y = 0.267315551271;
    msg.z = 0.0929668854437;

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
    msg.setTimeStamp(0.0175644905946);
    msg.setSource(16204U);
    msg.setSourceEntity(101U);
    msg.setDestination(34768U);
    msg.setDestinationEntity(236U);
    msg.tracking = 240U;
    msg.lat = 0.00498617814145;
    msg.lon = 0.171595176478;
    msg.x = 0.222767145878;
    msg.y = 0.511757978629;
    msg.z = 0.457189310573;

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
    msg.setTimeStamp(0.691061517114);
    msg.setSource(45646U);
    msg.setSourceEntity(87U);
    msg.setDestination(29435U);
    msg.setDestinationEntity(101U);
    msg.target.assign("VVYCHHTWHVCRJQFGYUHSIBANHAUVRSVFPRHQUZXSEEVTBXZHNSJHEMELXHDQDUEQPSLKZGCSRQCWLIJCTMNDEOGFANWVWBBGBMDYN");
    msg.lbearing = 0.465912171314;
    msg.lelevation = 0.769550617889;
    msg.bearing = 0.770922156198;
    msg.elevation = 0.084022920983;
    msg.phi = 0.0714182637919;
    msg.theta = 0.871580294022;
    msg.psi = 0.40511602143;
    msg.accuracy = 0.902829608531;

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
    msg.setTimeStamp(0.187761164673);
    msg.setSource(17214U);
    msg.setSourceEntity(76U);
    msg.setDestination(4211U);
    msg.setDestinationEntity(199U);
    msg.target.assign("DAUPDJAOBPKZXDKQQFTQTQWUHUJHJNAYGDIGUHEQZXVBNXNERHRNYJGXZCSNLOULSIGXFROITGBKDUGSWOVRZZOPIUMTGETFVRCVEFNEOWCCVDGTOSFOYJSAEPMNEPECPDIKLLMDHLBJMZZFGQDSRTKHHQKUBMKNWXKTWFTWPYHDYAIOGJQMBWU");
    msg.lbearing = 0.259258513539;
    msg.lelevation = 0.37968408586;
    msg.bearing = 0.548374373867;
    msg.elevation = 0.527704063214;
    msg.phi = 0.885349252741;
    msg.theta = 0.154042477253;
    msg.psi = 0.709580639454;
    msg.accuracy = 0.204458609545;

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
    msg.setTimeStamp(0.73883082321);
    msg.setSource(51696U);
    msg.setSourceEntity(80U);
    msg.setDestination(39545U);
    msg.setDestinationEntity(215U);
    msg.target.assign("CFPHSNBXNQQTUJEFXLIUVVQMEWIHWPDDGNRCSFKBYFUZCIGATFLUWEPIKSYIJCHIBNPFROITYOQIUGAWZTXDAOKMPONTDJBOBAMZLVMENAULRJZTRDTYGWDWLCKHIBERQARZOOJWNJSK");
    msg.lbearing = 0.39386997677;
    msg.lelevation = 0.548101470071;
    msg.bearing = 0.88674974231;
    msg.elevation = 0.644576135152;
    msg.phi = 0.8765540103;
    msg.theta = 0.0160201758805;
    msg.psi = 0.453738433107;
    msg.accuracy = 0.35537432247;

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
    msg.setTimeStamp(0.469575949365);
    msg.setSource(23746U);
    msg.setSourceEntity(233U);
    msg.setDestination(60831U);
    msg.setDestinationEntity(64U);
    msg.target.assign("YWQXGDDHCAOJCZAAMPTSPJANLTWZEZUIBCGXYKOQDXHUXLQPVTFMBAOVHJSTEWVSMLKBGEUCMNFDTVLOUKFMENZNELBNWDTGYDCQFKZUIOSPASRJCHSWXMZIYNFIAYKWBPIREKEUTRGJBXLUGXVQRZRUQYVGFHOLDCOIRQMEJZPWKPHJPAMHEABECLVUKXHOSFGX");
    msg.x = 0.41346351221;
    msg.y = 0.154498021226;
    msg.z = 0.0902230979537;
    msg.n = 0.73684747029;
    msg.e = 0.389755489532;
    msg.d = 0.763154066523;
    msg.phi = 0.942345776371;
    msg.theta = 0.0594255164714;
    msg.psi = 0.182096698339;
    msg.accuracy = 0.381335799716;

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
    msg.setTimeStamp(0.944096050341);
    msg.setSource(767U);
    msg.setSourceEntity(171U);
    msg.setDestination(10723U);
    msg.setDestinationEntity(3U);
    msg.target.assign("DFJSWBXSZEJAX");
    msg.x = 0.73703927802;
    msg.y = 0.973188479095;
    msg.z = 0.963441384895;
    msg.n = 0.156790683749;
    msg.e = 0.797322600136;
    msg.d = 0.108854643929;
    msg.phi = 0.737760648531;
    msg.theta = 0.195851399573;
    msg.psi = 0.107934022652;
    msg.accuracy = 0.612708037669;

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
    msg.setTimeStamp(0.86409546896);
    msg.setSource(40235U);
    msg.setSourceEntity(163U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(205U);
    msg.target.assign("SMIJTYNVPYLUVLVYZBGOFLFMTGOCCHVUJOOBLJRRSPUAXKOBJITZMIFXFOIWKEZTCDMWNQDRELKMRABBQBVEZGKHYNGHT");
    msg.x = 0.978564332854;
    msg.y = 0.0451015862781;
    msg.z = 0.782598736843;
    msg.n = 0.326191216969;
    msg.e = 0.405001196209;
    msg.d = 0.202116446758;
    msg.phi = 0.790215853308;
    msg.theta = 0.466515257789;
    msg.psi = 0.833523112057;
    msg.accuracy = 0.843016251437;

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
    msg.setTimeStamp(0.0631016300701);
    msg.setSource(29633U);
    msg.setSourceEntity(120U);
    msg.setDestination(13812U);
    msg.setDestinationEntity(77U);
    msg.target.assign("LGYTQXAUPSPOBIMRWLVZGHMCLPDFHTVPXLTAFVCPDWHXVELYEESSXEDBVSZSYTKUTHDQRJKXNDHBDEMYUXACBNFIREWONVWNSZHJPU");
    msg.lat = 0.995507416046;
    msg.lon = 0.380849468165;
    msg.z_units = 71U;
    msg.z = 0.290155072318;
    msg.accuracy = 0.757735790428;

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
    msg.setTimeStamp(0.834034710795);
    msg.setSource(56477U);
    msg.setSourceEntity(15U);
    msg.setDestination(8674U);
    msg.setDestinationEntity(86U);
    msg.target.assign("TSLZJTYLCBYIMKZYJBJKO");
    msg.lat = 0.942457809329;
    msg.lon = 0.0701942521276;
    msg.z_units = 202U;
    msg.z = 0.604994382301;
    msg.accuracy = 0.328026932585;

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
    msg.setTimeStamp(0.0388056434075);
    msg.setSource(5629U);
    msg.setSourceEntity(114U);
    msg.setDestination(26911U);
    msg.setDestinationEntity(185U);
    msg.target.assign("HWCREYGKZMIXTZSOJHBOWGLGOYJBCDYSHLBMERUDNGPWSDLJNALDVGMWELQCFZOKIVXENAMBGBNOLZVVQYDZPTUIKZCRWWQFBDKTCCSKPUEZHMBWDYIAVERKKVTQDKJUENMRTUINFHQFXKXTTYHAFUSHPBQQFYENXACHZUGTPHQBAGOWQPFASFPEMIVY");
    msg.lat = 0.485723892147;
    msg.lon = 0.988324465607;
    msg.z_units = 147U;
    msg.z = 0.100618082377;
    msg.accuracy = 0.15854321127;

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
    msg.setTimeStamp(0.419892749203);
    msg.setSource(31181U);
    msg.setSourceEntity(73U);
    msg.setDestination(39128U);
    msg.setDestinationEntity(99U);
    msg.name.assign("SQEPRSSLHSVKTIWFEXAGLNXIXURBWZMTDVJARRHYPFVOIXOIVRBLNKOMVGMHOQXQCCTONIXHLW");
    msg.lat = 0.491723424629;
    msg.lon = 0.34273600285;
    msg.z = 0.333794553564;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.197712221051);
    msg.setSource(24349U);
    msg.setSourceEntity(89U);
    msg.setDestination(18380U);
    msg.setDestinationEntity(43U);
    msg.name.assign("GUROIWXEHOULKCREMLGUPUXYDOQKIYIFRBCIFBSKXDVGLVZBDCLVZJYEDSSKHYWFSCGCQUNBBSJGPTDGGFXJHUMP");
    msg.lat = 0.375145782652;
    msg.lon = 0.810234418836;
    msg.z = 0.0446791850475;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.305698617523);
    msg.setSource(31480U);
    msg.setSourceEntity(196U);
    msg.setDestination(29272U);
    msg.setDestinationEntity(6U);
    msg.name.assign("YCBABEDEGKADRUSLUPKJAOQUBLZTIWWKCGCMVAONYYHFLIOJOEIIFPUKQVDMGQLZOJEHSUZWFXYSZNFNQCWOWQMQXDJIELPRNCSJMJRFYTIPXNPUBENBDSUYAGGHKOUGAVXHKYBWTAXZBV");
    msg.lat = 0.811809562583;
    msg.lon = 0.47251001679;
    msg.z = 0.150078291113;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.400366248355);
    msg.setSource(35541U);
    msg.setSourceEntity(44U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(211U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.224188624594);
    msg.setSource(14905U);
    msg.setSourceEntity(106U);
    msg.setDestination(44467U);
    msg.setDestinationEntity(145U);
    msg.op = 63U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CQVRPZFAOBEOUYDKFQPJBKMPPHBGSLYNUALURFACRQMEPNLGYURJXJQPMBESQTFQIDKDZWIAASGXGWWHZWMIXZYLNWJVNOWQVNAHHEFEVPJOTOQA");
    tmp_msg_0.lat = 0.131029788704;
    tmp_msg_0.lon = 0.125044722808;
    tmp_msg_0.z = 0.674036412545;
    tmp_msg_0.z_units = 240U;
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
    msg.setTimeStamp(0.938938921869);
    msg.setSource(51974U);
    msg.setSourceEntity(168U);
    msg.setDestination(1935U);
    msg.setDestinationEntity(188U);
    msg.op = 72U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GGCQBKVNUENMLGLLREPNCRJZKDVEIRIGIMPZNJEWHVCWHVAUNUBSMHLSHZPELGSKATUSQCOTYYNTDIFJPXMLXSLKFEUMWUPCYSQVSJXAOLRJDVPDERSDHYHGNZBXQZZKGFYKKQOMIUAFWMQYACDNTLLABOIIIMKACIXFOHOUUWTTQYTNABAHFOBZXJRYQJBCPWSRGPYJDWBDCKOFBNWXMWXAPHQFV");
    tmp_msg_0.lat = 0.458431120547;
    tmp_msg_0.lon = 0.63717938938;
    tmp_msg_0.z = 0.409946743128;
    tmp_msg_0.z_units = 235U;
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
    msg.setTimeStamp(0.363744734241);
    msg.setSource(23407U);
    msg.setSourceEntity(95U);
    msg.setDestination(18263U);
    msg.setDestinationEntity(221U);
    msg.value = 0.892809059063;
    msg.type = 124U;

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
    msg.setTimeStamp(0.120181149577);
    msg.setSource(57460U);
    msg.setSourceEntity(244U);
    msg.setDestination(48361U);
    msg.setDestinationEntity(141U);
    msg.value = 0.897650859533;
    msg.type = 235U;

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
    msg.setTimeStamp(0.496209229331);
    msg.setSource(25915U);
    msg.setSourceEntity(82U);
    msg.setDestination(5827U);
    msg.setDestinationEntity(196U);
    msg.value = 0.13179400855;
    msg.type = 238U;

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
    msg.setTimeStamp(0.509736608177);
    msg.setSource(20361U);
    msg.setSourceEntity(166U);
    msg.setDestination(36743U);
    msg.setDestinationEntity(136U);
    msg.value = 0.700327430719;

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
    msg.setTimeStamp(0.353261705706);
    msg.setSource(53909U);
    msg.setSourceEntity(88U);
    msg.setDestination(10228U);
    msg.setDestinationEntity(127U);
    msg.value = 0.0579728710077;

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
    msg.setTimeStamp(0.863029631145);
    msg.setSource(48667U);
    msg.setSourceEntity(41U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(178U);
    msg.value = 0.0976756665328;

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
    msg.setTimeStamp(0.185352308155);
    msg.setSource(31067U);
    msg.setSourceEntity(155U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(154U);
    msg.timestamp_last_service = 0.45573703552;
    msg.time_next_service = 0.186617795019;
    msg.time_motor_next_service = 0.540327517885;
    msg.time_idle_ground = 0.0520133153284;
    msg.time_idle_air = 0.733543595428;
    msg.time_idle_water = 0.856301588643;
    msg.time_idle_underwater = 0.711168871715;
    msg.time_idle_unknown = 0.627935857023;
    msg.time_motor_ground = 0.148196683512;
    msg.time_motor_air = 0.900070361977;
    msg.time_motor_water = 0.625238093769;
    msg.time_motor_underwater = 0.0922177704577;
    msg.time_motor_unknown = 0.556327762289;
    msg.rpm_min = 23865;
    msg.rpm_max = 21584;
    msg.depth_max = 0.981377094532;

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
    msg.setTimeStamp(0.960973963698);
    msg.setSource(36192U);
    msg.setSourceEntity(136U);
    msg.setDestination(18563U);
    msg.setDestinationEntity(106U);
    msg.timestamp_last_service = 0.39071637463;
    msg.time_next_service = 0.763864611222;
    msg.time_motor_next_service = 0.744207306507;
    msg.time_idle_ground = 0.823659308567;
    msg.time_idle_air = 0.748039853036;
    msg.time_idle_water = 0.92770032921;
    msg.time_idle_underwater = 0.531163216486;
    msg.time_idle_unknown = 0.480045526818;
    msg.time_motor_ground = 0.949613587314;
    msg.time_motor_air = 0.856441198363;
    msg.time_motor_water = 0.621376679263;
    msg.time_motor_underwater = 0.978456574558;
    msg.time_motor_unknown = 0.0889501129317;
    msg.rpm_min = 28520;
    msg.rpm_max = 22853;
    msg.depth_max = 0.744910569307;

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
    msg.setTimeStamp(0.304112431439);
    msg.setSource(35593U);
    msg.setSourceEntity(96U);
    msg.setDestination(20792U);
    msg.setDestinationEntity(233U);
    msg.timestamp_last_service = 0.876203720275;
    msg.time_next_service = 0.228997396508;
    msg.time_motor_next_service = 0.179802951204;
    msg.time_idle_ground = 0.583889810643;
    msg.time_idle_air = 0.535826389526;
    msg.time_idle_water = 0.128979201465;
    msg.time_idle_underwater = 0.453579481174;
    msg.time_idle_unknown = 0.518606194519;
    msg.time_motor_ground = 0.334626552876;
    msg.time_motor_air = 0.258887387582;
    msg.time_motor_water = 0.122128887161;
    msg.time_motor_underwater = 0.423210405473;
    msg.time_motor_unknown = 0.130155406947;
    msg.rpm_min = 30672;
    msg.rpm_max = 6615;
    msg.depth_max = 0.296819025403;

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
    msg.setTimeStamp(0.499205205219);
    msg.setSource(54681U);
    msg.setSourceEntity(125U);
    msg.setDestination(30562U);
    msg.setDestinationEntity(249U);
    msg.severity = 50U;
    msg.text.assign("SQEHWJQIOHLQIKGJGNTALGRMYTKSHDPOVKJBMVDKZCEODWUUCDTHFU");

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
    msg.setTimeStamp(0.452484919595);
    msg.setSource(7481U);
    msg.setSourceEntity(8U);
    msg.setDestination(54451U);
    msg.setDestinationEntity(21U);
    msg.severity = 140U;
    msg.text.assign("WFAFOTQFXKQ");

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
    msg.setTimeStamp(0.26323895363);
    msg.setSource(29241U);
    msg.setSourceEntity(65U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(184U);
    msg.severity = 185U;
    msg.text.assign("NHUBFEYPXGSOUIRNWPUXTXMXYDOZICZZXOFOXUKREHQOKEMQMUVJGJEFQWPXWKVLIHJSVGAQHCTXRDIDHGGBKINLVQYRZNRNBLJLSADQCAUGJALJIOKSPYU");

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
    msg.setTimeStamp(0.042590270574);
    msg.setSource(28900U);
    msg.setSourceEntity(134U);
    msg.setDestination(8251U);
    msg.setDestinationEntity(25U);
    msg.channel = 34;
    msg.value = 1967404808;
    msg.gain = 65U;

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
    msg.setTimeStamp(0.27433462991);
    msg.setSource(10973U);
    msg.setSourceEntity(35U);
    msg.setDestination(52822U);
    msg.setDestinationEntity(35U);
    msg.channel = -120;
    msg.value = -773729230;
    msg.gain = 59U;

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
    msg.setTimeStamp(0.298415688191);
    msg.setSource(3409U);
    msg.setSourceEntity(59U);
    msg.setDestination(35511U);
    msg.setDestinationEntity(53U);
    msg.channel = -17;
    msg.value = -410126986;
    msg.gain = 111U;

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
    msg.setTimeStamp(0.845999791287);
    msg.setSource(23728U);
    msg.setSourceEntity(235U);
    msg.setDestination(61353U);
    msg.setDestinationEntity(20U);
    msg.ch01 = 0.700795798001;
    msg.ch02 = 0.579567590082;
    msg.ch03 = 0.307034502343;
    msg.ch04 = 0.804166873258;
    msg.ch05 = 0.990767496566;
    msg.ch06 = 0.813258234459;
    msg.ch07 = 0.429368978134;
    msg.ch08 = 0.350391539281;
    msg.ch09 = 0.619163115819;
    msg.ch10 = 0.362657758044;
    msg.ch11 = 0.751726736382;
    msg.ch12 = 0.358011484801;
    msg.ch13 = 0.240959664488;
    msg.ch14 = 0.994348364001;
    msg.ch15 = 0.338323246889;
    msg.ch16 = 0.955508453806;

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
    msg.setTimeStamp(0.901471205831);
    msg.setSource(1756U);
    msg.setSourceEntity(177U);
    msg.setDestination(6362U);
    msg.setDestinationEntity(120U);
    msg.ch01 = 0.0298523272557;
    msg.ch02 = 0.59740885353;
    msg.ch03 = 0.989774672551;
    msg.ch04 = 0.302227534803;
    msg.ch05 = 0.3999535987;
    msg.ch06 = 0.436308158883;
    msg.ch07 = 0.484646061576;
    msg.ch08 = 0.665864760636;
    msg.ch09 = 0.100007423681;
    msg.ch10 = 0.271541421868;
    msg.ch11 = 0.540202361438;
    msg.ch12 = 0.130190528434;
    msg.ch13 = 0.193038453368;
    msg.ch14 = 0.0287919575041;
    msg.ch15 = 0.62182525633;
    msg.ch16 = 0.953146715476;

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
    msg.setTimeStamp(0.332017922888);
    msg.setSource(17545U);
    msg.setSourceEntity(38U);
    msg.setDestination(57477U);
    msg.setDestinationEntity(70U);
    msg.ch01 = 0.381486117423;
    msg.ch02 = 0.0637306789218;
    msg.ch03 = 0.639785160384;
    msg.ch04 = 0.59470603954;
    msg.ch05 = 0.882222475097;
    msg.ch06 = 0.35481136825;
    msg.ch07 = 0.403543551254;
    msg.ch08 = 0.540867485281;
    msg.ch09 = 0.0914437142949;
    msg.ch10 = 0.428106609915;
    msg.ch11 = 0.964517754565;
    msg.ch12 = 0.494750223889;
    msg.ch13 = 0.75665832461;
    msg.ch14 = 0.93721943719;
    msg.ch15 = 0.802933049868;
    msg.ch16 = 0.844653357659;

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
    msg.setTimeStamp(0.160414042661);
    msg.setSource(7729U);
    msg.setSourceEntity(202U);
    msg.setDestination(5241U);
    msg.setDestinationEntity(237U);
    msg.value = 0.520310528279;

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
    msg.setTimeStamp(0.241510324866);
    msg.setSource(37830U);
    msg.setSourceEntity(182U);
    msg.setDestination(27388U);
    msg.setDestinationEntity(128U);
    msg.value = 0.055242930655;

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
    msg.setTimeStamp(0.18668986807);
    msg.setSource(46667U);
    msg.setSourceEntity(128U);
    msg.setDestination(57814U);
    msg.setDestinationEntity(217U);
    msg.value = 0.437971315099;

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
    msg.setTimeStamp(0.535871568716);
    msg.setSource(61428U);
    msg.setSourceEntity(204U);
    msg.setDestination(19095U);
    msg.setDestinationEntity(35U);
    msg.op = 221U;
    msg.lat = 0.702069080069;
    msg.lon = 0.134511855895;
    msg.height = 0.637682457472;
    msg.depth = 0.825792501671;
    msg.alt = 0.12011985417;

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
    msg.setTimeStamp(0.653932616479);
    msg.setSource(29020U);
    msg.setSourceEntity(38U);
    msg.setDestination(18026U);
    msg.setDestinationEntity(121U);
    msg.op = 131U;
    msg.lat = 0.471506691814;
    msg.lon = 0.938369175809;
    msg.height = 0.210407086074;
    msg.depth = 0.525870249371;
    msg.alt = 0.0310862688623;

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
    msg.setTimeStamp(0.554487222085);
    msg.setSource(21707U);
    msg.setSourceEntity(117U);
    msg.setDestination(64989U);
    msg.setDestinationEntity(119U);
    msg.op = 88U;
    msg.lat = 0.232701481701;
    msg.lon = 0.549214866888;
    msg.height = 0.360860318645;
    msg.depth = 0.950327832436;
    msg.alt = 0.969765575403;

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
