#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_NPC_Non-Combat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_NPC_Non-Combat.BPAnim_NPC_Non-Combat_C
// 0xA5E4 (0xB0F4 - 0x0B10)
class UBPAnim_NPC_Non_Combat_C : public UOakNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2427C294E008543087B9A9E3B9B55A2;      // 0x0B18(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0CBED4C540E9517DC706FE8376B344CD;// 0x0B60(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_82C0DEDD49993152C88F058718DE242A;      // 0x0C40(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_96496C454BA9DF19177067B84C00D52C;      // 0x0CF0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A284F104D34F4AFC5483E8464041E74;// 0x0DA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_207500B44669241E728427A9DBC441F6;// 0x0DF0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_447EDBA549F84C57236735A0FF6C5859;// 0x0E40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79AF3CC54895FEE0E467918640D86261;// 0x0E90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4A25AB56412279152C26949B7874406A;// 0x0EE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14ABA24346C950D6555E5EBCEAD1C368;// 0x0F30(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_954E3A8E485553BB660BDBA3028D75A2;// 0x0F80(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1FFA0D5047B6C14C7846B2AC680D711E;// 0x1070(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22F27DF240DCB42651709891C7907C78;// 0x10B8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AEB7B7F84CDFB3E2DE7BD8BFF0291500;// 0x11A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B2A064AD413E58D2B5703FB1B38A1C2F;// 0x11F0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_974372A84A521002399B078C5B42733C;// 0x1378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C76D090744073FDCCA7EB5A09A3CA82A;// 0x13C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_995944A24D53568BF067F7B66F361F96;// 0x1410(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABD1572B4B0148A7875D05ADCEA3AE39;// 0x1460(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B5DC1A34D084DC11A3D708FCE580220;// 0x14B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A9A7F6543557100AB1886B1895D57C4;// 0x1500(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66D2C17C442B1960BCE6A0A582500AC3;// 0x1550(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C47236F4FEECB33E1EDA295DC8C7444;// 0x15A0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E54AF5241A17EC6D692B2ABF832EB0E;// 0x15F0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E05A22D14AFB3B57DD880D83C541AEB7;// 0x1640(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7D846ECA41E54BEFE97C5FBE6DF2C4A7;// 0x1690(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A033B64414481548C63568426A3CA3D;// 0x16E0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5E2D1B646EECEB9987F0F8252B14190;// 0x17D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBB4ED6448931C62AB3AE1BF9C4AD8BE;// 0x1818(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8940065C4FE662BC4F4AB58DCA0C97CA;// 0x1908(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E3358114D5C2EC21DEC6D8BADC7C3F2;// 0x1950(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7F541D1432DBAAA267C239FB4BBA7AA;// 0x1A40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E28902B45701B4C752D279B9D62BBF9;// 0x1A88(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BFE528D54913EF969E646C81BF17FFF0;// 0x1B78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4AA8A1E74266B36C9E401CB52A14F34A;// 0x1BC0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_125854A0476F13E9E8B1429CA4B3B5BE;// 0x1CB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5117D3504B829632B9B4B0882165A935;// 0x1CF8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F8243C9347809D46BA627AA605A7A69B;// 0x1DE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C264A5254A8EFAD2E09D16AA832BB616;// 0x1E30(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4D6AB6134AADE41FCB50B3A21FBD72B1;// 0x1F20(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_C1B729054B976623670FCEA5273BAB3A;// 0x1F68(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A61260FC4131695575E0A6930316CC3E;// 0x1FF0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_05AEDB7A44E79EDD622EC8B72243F746;// 0x2038(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_60761D31433A76F5C9A81D9E029E1427;// 0x21C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4C3B351440242AD0D677E832DC63137;// 0x2208(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_282122044B750D282219CFBEA4C55665;// 0x2258(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93E38A3349BEE0C90BACAFA86778A4B1;// 0x22A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D08830C14B21CE89856F099B1341FBA5;// 0x22F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25198219469770C69C368AA63F740ED7;// 0x2348(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89C2B58F4CDEAB099C7D42BAE13F8520;// 0x2398(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B3E301042392CAD4D6BF986C1D188D5;// 0x23E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A1E250F449B5BB9161CDAB5BEEB3845;// 0x2438(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5328EF184F7A8160341B84B4CE492582;// 0x2488(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD8F6D14445BC7795E757D9CE09B000D;// 0x24D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_337AC22D41EADEEFC9972F8F7DF0AA4F;// 0x2528(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D197C0D4448ADC461490D68601CE0464;// 0x2578(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4CA1BF74AC5FE279615F5A55B7E9078;// 0x25C8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3828AE1B40A6181FB3100A81AD2E0F9D;// 0x2618(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A02161034F54B4F54B135E80B46FF021;// 0x2708(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_B2307EF9415EDF3AE12FC79F02E7E0F2;// 0x2750(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F6F7791E4B3AF088C0F7C38BB17ED22D;// 0x27D8(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_EBE4353541C73995A30082B42BF2F0E7;// 0x2820(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F0A6472404B20F2D0F469BE9B881EDB;// 0x28A8(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_80E5EA5C4967E431EDD57AAD082D1809;// 0x28F0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_020EA7AA460ACDD95ECC71ACC35AE85E;// 0x2978(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1CFCB7A14B3E90C2AFDAD4A51579249E;// 0x29C0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DB1C463A4462617168C8A785FE6D2D34;// 0x2B20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A0CB3554D94974BF50D0FAD958909BF;// 0x2B68(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2034B2694E6E0374EE10429BFB6860CC;// 0x2C58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_517E9ABB4A46E08A774533AEA7AB1473;// 0x2CA0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AF672F464083DB6D99DCFAA5CD3C76DE;// 0x2D90(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EB38BA8C44E4DE4DC024E39974AC8E0A;// 0x2DD8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7C890EE4F3E9AC5F63133AF56492BB9;// 0x2F38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7FF76F2A4ACB41F2666ECA80105857C5;// 0x2F80(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_65BF8EF64C39CFF349FB168581A5420A;// 0x3108(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11D86C864A3C1ECBA4CD93849F9236DF;// 0x3150(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FA46C97440F40B53D5E0C5BEF42B139F;// 0x32D8(0x00E0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x33B8(0x0008) MISSED OFFSET
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_CE9783A141AFBBD6DE64EFA2124F26E5;  // 0x33C0(0x08B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DDB85CB04BAC46886154DE8CFF60765B;// 0x3C70(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_16B4C1684AE88BD1C4A5B581C02741D7;// 0x3CC0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5F935F964280A6F059CB68902352B385;// 0x3D08(0x0048)
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_B8ABEF814F9BB4FD1947A683FBCC13B5; // 0x3D50(0x02D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_035A718945B677F84FCEF8A24A041FB9;// 0x4020(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D7B4F114861A6B8FEE18684D0301E17;// 0x4100(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EE8C0FBD4992254013066E9C2130FA87;// 0x4150(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5F432F2C4DFA1C57CF10A6BCE7F4DF7E;      // 0x4230(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D1AD1AC477F68434F8F43BBABAB8CCA;// 0x42E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_970910A04E6E8E8F895B42970F2B6D14;// 0x4330(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_260681ED4C52E1E7E6F2C8BF4C33976E;// 0x4380(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EB8AF6744EFBC9EC968A3B76D44CA68;// 0x43D0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_657DF6A843EB75BFA4EAEFAE1B972516;// 0x4420(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_281C89DF47026A20CBAB9EA8B918DD89;// 0x4470(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F11060EE4359C2D8DB9F4290C0C287F7;// 0x44C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC20D3AE43641C8FBC3167995C0807A5;// 0x4510(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33AD92AB40330341BAF1199DB81389A7;// 0x4560(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EAF41ED946DDC4A911755B8C5BD4FE7B;// 0x45B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6A2105A149F1D059967AABBF704B333E;// 0x4600(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC90EB814CFDC92406452F852D2A7107;// 0x4650(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C18D7CE641789E5D2FF369AB8C019388;// 0x46A0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_954E2F634B4ED4A4A369EABA84FF83E2;// 0x46F0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD8945904C9A06085755A68D017857DD;// 0x4740(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5EC9DCC746FD79C29582B5A8494CBDFB;// 0x4790(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5FAB91424ED2CD98D6B0238E5613A00C;// 0x47E0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D51376D94BB57A3BBD59C5BE8102D34B;// 0x48D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_685439224DF1A8F436AB7199EF12BFB6;// 0x4918(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DFAF49564368A8DE67BCEB81E4CEB9A7;// 0x4A08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A895FA3B4D9BB2B2F96480A94311DB3B;// 0x4A50(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_68FF73F14B27466C1284C68ED7270356;// 0x4B40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35EBD24B4C9B4B3A934C508BD232407C;// 0x4B88(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_54F1E75E47D05652AA3A60B426F8CEF9;// 0x4C78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82622924488C244F97FFD7B5E2B21EB0;// 0x4CC0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A65C96E4481B0682A2A45A82F98F6FAF;// 0x4DB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C5FFC72A480ABB8B00725EB61C0EFFFE;// 0x4DF8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF9349EF4F86FF486A3FDD82B47532B3;// 0x4EE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43A0B6A3402DDAEBC96CDE871440FAFB;// 0x4F30(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2CB27240476B3BBC2A2139A523E8A4B7;// 0x5020(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5818FEF549EF1CF286BFB19FA14EB9AF;// 0x5068(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E0C2E06C4E8BA21E93216E8450E622D8;// 0x5158(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_267283A640A2BB9BD5C8DDB0030BD722;// 0x51A0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7FD05548464C844A8D43F4A26A5A3BF6;// 0x51F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8EEBB0D464B7B1DAF96FC99CE8E4459;// 0x5238(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_372420EC4CB974967038E19788488012;// 0x5328(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49D7562547195C0091AD159C3FFB249A;// 0x5370(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F5A9345F4EDD28E0CB81ACA10F735A4C;// 0x5460(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C51F10E04A88D411A92F089FDC04E4E3;// 0x54A8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1145E1C84F367E035AB259A2574CFF1A;// 0x5598(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C8C4024464E7B9A461D9DB823D5E713;// 0x55E0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3B731B834A164943F7FE3FA7731107FA;// 0x56D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_78D997FF455232F9159A53A350E5F88C;// 0x5718(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EB4E7BDF4860D48A5B91FBA1D3B26785;// 0x58A0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_763A31C0490F011022DDE49A598B5991;// 0x5980(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B61C632048BF12EA9326FFAEDD902BB9;// 0x59D0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DF48411848B2A4E802CE089B1FF15179;// 0x5A20(0x0050)
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_C1B277DE400FBA1A1C83778F4204A5A1;// 0x5A70(0x0730)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_E2BCF31D474BE29922595895BB9A24B0;// 0x61A0(0x00D0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_AA0DDED344D65411A6406F887E1C3211;// 0x6270(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_57A941F542D07684B77337AC622B64F1;// 0x62E8(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_875CC72A43E346D7BAF9A5907CFCD8DA;// 0x6368(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_72A85A8D462FC780F8CD998ABE903AB5;// 0x63E8(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FFC90A144D14285BDBA4B2865BF55208;// 0x6460(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_F186D2374D6BC3C906095D849636D26D;// 0x64E0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5383800B44BD4E7FDB847DBD902EC449;// 0x6558(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_74721DD5422BEBDE5BF0F185AA822306;// 0x6648(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1460DE04434D0BAF25E173B04BF1EAD9;// 0x66C0(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8CD965A84905B6D3285C0DB1AEE49575;// 0x6740(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A1489956467D695F08377A87740D4CD4;// 0x6788(0x0188)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_1759471542CD6977E611CFB0D88BB193;// 0x6910(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C704F5D643568EEC1903139BF45BA7BB;// 0x6988(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A0100D946F8AE37FCA131A7B8CE0C94;// 0x6A08(0x00F0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_32C80EC84BC1890147108583DA67F258;// 0x6AF8(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_B38BA3274CAFCD06DBEFC9A6EB871DDD;// 0x6B78(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_484FC4004DD87E089CADBEAB9B103536;// 0x6BF0(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_360434A64953D133F4DF809D1285C309;// 0x6C70(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16978EFE42C32F66340F2BA80A680590;// 0x6CE8(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_36776CAD483CDECF01ECF2BD9C4EE061;// 0x6DD8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_33BDBF7F4F5668894CEF33B2F534A0A6;// 0x6E50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_081C008145F8955885CA78AACB82A912;// 0x6E98(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B0614DBC438F891BEC1DEC808637703A;      // 0x7020(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E885C92143A838F8D122A8AF8CF56EBB;// 0x70D0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9EBAFBE643988F52A644419942762B66;// 0x71F0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A802B1E44A9B618A50B8E291574203BE;// 0x72D0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D1875A8414B21BCE3C389AD0E3CC0B4;// 0x7320(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F527FDBF46B4B53CE2AAD69210B4DBCC;// 0x7370(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_188336E34C98501B1AB706800DD89105;// 0x73F0(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_7EE21F254BC915FFF8C909A51CE80CA5;// 0x7470(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_A347ED554CE2FE4A48357F9C579BDCAC;// 0x74E8(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_08BAA89847636910DC0AE2A8F7BBB7A3;// 0x7560(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5BBDC73D44871D4F067A2FB6DD309975;// 0x75D8(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9D7C97D7477736E88BAEBEA60FB8AA91;// 0x7658(0x00E0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x7738(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B1B47FE24A1B08DB3F1877ACF94FB57A;      // 0x7740(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ADE2AB854F9F570A4213719DF5887F11;// 0x77F0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_783D0FCC436AE0CE88E878B937870919;// 0x78C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_595DF9F2457362D1ACD38E9C22686DA0;// 0x7910(0x0050)
	struct FAnimNode_BlendFaceFXAnimation              AnimGraphNode_BlendFaceFXAnimation_6CFA4AA249D488BE4EB21ABF4E68CFB9;// 0x7960(0x0088)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D400B89842631CCF1335FEB4A80A61D8;// 0x79E8(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_499344394FE577C73DD6718181294EDF;// 0x7A38(0x0140)
	unsigned char                                      UnknownData02[0x8];                                       // 0x7B78(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_44FCDEB94D8DC3CC348F4288AD663CAD;      // 0x7B80(0x00B0)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_FD14F2974A2733F5D02382A3A8EA7B89;// 0x7C30(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5AF0A6B1490C6C1FCA1E0E9A7258A844;// 0x7C98(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3969C097411133D9D3F1CABCA78B5BD6;// 0x7D78(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F14FB9D9479F701C7FF1D7B6C646D920;// 0x7DC8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_260DC58A40F7F7F4E7CFE3AEB49E6000;// 0x7EA8(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_94DF9851406B148C7BF129A2D341BFBC;// 0x7EF8(0x0140)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_6259083A44AC523A932455BC20398F86;// 0x8038(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3854B5A4641C3B7B30B5A9EC9C4F171;// 0x8178(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A6AF0654AD0691C61826397126DA3A5;// 0x8268(0x00D0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_D2CA1A4244D7160D7A91EA9AC7275F0C;// 0x8338(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_ADEB50284F33D1EF9217EC9EECCAD81E;// 0x83B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2EE342284C88B31EB3CFA8947F14ABB0;// 0x8430(0x00F0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B13755F3419328E33E6277A80FDCCD74;// 0x8520(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_7EE7EE9647BEF47B28D206818E287779;// 0x85A0(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A91703384BF10924BB9E059848D8DD17;// 0x8618(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_CE00E9BC4C80DB80E96872993F0160C5;// 0x8698(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4436E38D45A48AEC9AFFDBAA91CF13C7;// 0x8710(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_7C16CD2B43D439A7075E4BA4BCA95B40;// 0x8800(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A72636B40BACD968C5301A28650AA68;// 0x8878(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F35C215C42AD64D53BCC49BAABA554F1;// 0x88C0(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4C0C8FF04646E2CAD7F695BF29756310;// 0x8A48(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9190AA0340E5D68049639183630B5AF5;// 0x8B28(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_093BCF1A4D7BF2AC0C7CD1835DA7F163;// 0x8B78(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_974CA122467A9C75928117A95EA4183D;// 0x8BC8(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_064B8C4A41A8D232F9977EAF9600B10B;// 0x8CE8(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D01F345445F0B058F979EABEE17CD809;// 0x8E08(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BA7DCAF94D3281F8C06BBDB1913D9B50;// 0x8EF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4EE83D794B6E998F4FD42A9BD4A8B19B;// 0x8F40(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5E6A7AE54D129447181A4BB179F8C3FC;// 0x90C8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C2F41A3840B0333DAEB338A23BF4C3F1;// 0x91A8(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_810A7C784E5851E28940B08296059658;// 0x91F8(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9782B134436FA8BD4F28F78688C4291C;// 0x9318(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_0B6AFDED48626B3EDC0F19A218F772DA;// 0x9368(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BFBB4D994F9EE51C13AAD1A9E7328707;// 0x9488(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0E9D13684825D9A4DC14F6AF7ECD2DE1;// 0x9568(0x0050)
	struct FGbxAnimNode_BlendTwoPosesPerBone           GbxAnimGraphNode_BlendTwoPosesPerBone_5FD144F144813276747C4B8E65CD68D4;// 0x95B8(0x00F0)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_754EDEA74A209FE2940A24A0457CFEB8;// 0x96A8(0x0140)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_57F0F0FB437EF6B6B53BD486E2A646E8;// 0x97E8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0CDA10C044FBA260410E9A8449A0C26F;// 0x98C8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA57DD524CF8C9237A4F6C91D5996C87;// 0x9918(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_408CA4D04F88034D2382998229B3B60F;// 0x9968(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_141F6FD04E83902C3A4A74859F8E5D1E;// 0x99B8(0x0120)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48B500B4415BBCCD92F02BB4FA304B9A;// 0x9AD8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DC55B4B4AA6C023EC139CB7DFC27C38;// 0x9B28(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEAF419B430EA06342CE0BB1228EFA4C;// 0x9B78(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_88A482F8462FE4F2A66DA8A3135A3569;// 0x9C68(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D3C7A8DB4C4579AA9C96658391AAD75E;// 0x9CB0(0x0050)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_8528E6B247EA77814BDBB1A9363B7CAD;// 0x9D00(0x00F8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03EDF9A644F1C2BCE6EB36A892F92422;// 0x9DF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_340E503240D08B0CB21A7E9393FF4F72;// 0x9E40(0x0188)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_458AA8E344F60B4A44CE2BAB496E1F31;// 0x9FC8(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B80EDC7C4C62A61C77D1C38FA7BE4325;// 0xA000(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F665532646D5DB76A6F27086E4E6577F;// 0xA038(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2AE9E1574F8D10A692319EAEC08E3C7C;// 0xA118(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27908CCE414346C5F26BF6A6FD21DFB5;// 0xA168(0x0050)
	unsigned char                                      UnknownData03[0x8];                                       // 0xA1B8(0x0008) MISSED OFFSET
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_AA661F8E40CA133658B397811BE1D80D; // 0xA1C0(0x0370)
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_593A10BA4FE1D8108942BF89FCC9FBAD; // 0xA530(0x0370)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9272B4F246F91804B48BAD87E10FCDFF;// 0xA8A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A4DDDE78472EF80B0860269BED2782DF;// 0xA8F0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_371B2B1149902590F6B8CD9CFE5ED3B6;// 0xA940(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B6745ED74A36378AA133289B0DAC26EA;// 0xA990(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_1AB58EBC425DD6E1FD2319BEDDB0DC58;// 0xA9E0(0x0120)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_649A532F4C8642187466FEAD1655EE0D;// 0xAB00(0x0198)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_0DE28CE7438CAA9157FA70A4B7EA5053;// 0xAC98(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BE67440D46B357CFBECD04A04C7AC981;// 0xADD8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1C416A0344669BD69DD6D5A98F8D7934;// 0xAE28(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9B7B2E364E1892623AA5F0A384B0E61C;// 0xAF08(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B90964EA4A459B0401828A8A41EE5DB6;// 0xAF58(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3012DCAB425836C1212EA09A48DDBE31;// 0xAFA8(0x0120)
	class AOakCharacter*                               Character;                                                // 0xB0C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxMoveComp;                                              // 0xB0D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UOakCharacterMovementComponent*              OakMoveComp;                                              // 0xB0D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Give;                                                     // 0xB0E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Take;                                                     // 0xB0E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomInjuredVar;                                         // 0xB0E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_IdleToWalk;                                           // 0xB0E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Passive_Sprint_Blendspace;                            // 0xB0E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFacePoses;                                             // 0xB0E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Give_Alt;                                                 // 0xB0E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Take_Alt;                                                 // 0xB0E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_AnimPostures>                     Posture;                                                  // 0xB0E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Sad;                                         // 0xB0E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Tense;                                       // 0xB0EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Confident;                                   // 0xB0EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Default;                                     // 0xB0EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFallAnims;                                             // 0xB0ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0xB0EE(0x0002) MISSED OFFSET
	float                                              GlobalEmoteWeightModifier;                                // 0xB0F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_NPC_Non-Combat.BPAnim_NPC_Non-Combat_C");
		return ptr;
	}


	void Sort_Posture_StateMachine_TransitionRules(TEnumAsByte<Enum_AnimPostures> Posture);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequencePlayer_6A0100D946F8AE37FCA131A7B8CE0C94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_32C80EC84BC1890147108583DA67F258();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_484FC4004DD87E089CADBEAB9B103536();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_C18D7CE641789E5D2FF369AB8C019388();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_6A2105A149F1D059967AABBF704B333E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_EAF41ED946DDC4A911755B8C5BD4FE7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TwoWayBlend_E885C92143A838F8D122A8AF8CF56EBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_F527FDBF46B4B53CE2AAD69210B4DBCC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_188336E34C98501B1AB706800DD89105();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_5BBDC73D44871D4F067A2FB6DD309975();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_BlendListByBool_ADE2AB854F9F570A4213719DF5887F11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_BlendFaceFXAnimation_6CFA4AA249D488BE4EB21ABF4E68CFB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_LayeredBoneSetBlend_499344394FE577C73DD6718181294EDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_LayeredBoneSetBlend_94DF9851406B148C7BF129A2D341BFBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_BlendListByBool_0A6AF0654AD0691C61826397126DA3A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_ADEB50284F33D1EF9217EC9EECCAD81E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_B13755F3419328E33E6277A80FDCCD74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_A91703384BF10924BB9E059848D8DD17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_657DF6A843EB75BFA4EAEFAE1B972516();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_9EB8AF6744EFBC9EC968A3B76D44CA68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_GbxAnimGraphNode_LookAt_B8ABEF814F9BB4FD1947A683FBCC13B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TwoWayBlend_810A7C784E5851E28940B08296059658();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TwoWayBlend_0B6AFDED48626B3EDC0F19A218F772DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_GbxAnimGraphNode_BlendTwoPosesPerBone_5FD144F144813276747C4B8E65CD68D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_LayeredBoneSetBlend_754EDEA74A209FE2940A24A0457CFEB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TwoWayBlend_141F6FD04E83902C3A4A74859F8E5D1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_8DC55B4B4AA6C023EC139CB7DFC27C38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_BlendSpacePlayer_EB38BA8C44E4DE4DC024E39974AC8E0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequencePlayer_1A0CB3554D94974BF50D0FAD958909BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_GbxAnimGraphNode_HandIK_AA661F8E40CA133658B397811BE1D80D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_GbxAnimGraphNode_HandIK_593A10BA4FE1D8108942BF89FCC9FBAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TwoWayBlend_1AB58EBC425DD6E1FD2319BEDDB0DC58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_ModifyBone_649A532F4C8642187466FEAD1655EE0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_LayeredBoneSetBlend_0DE28CE7438CAA9157FA70A4B7EA5053();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TwoWayBlend_3012DCAB425836C1212EA09A48DDBE31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_BlendSpacePlayer_1CFCB7A14B3E90C2AFDAD4A51579249E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_C704F5D643568EEC1903139BF45BA7BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequencePlayer_3828AE1B40A6181FB3100A81AD2E0F9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_5328EF184F7A8160341B84B4CE492582();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_954E2F634B4ED4A4A369EABA84FF83E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_BD8945904C9A06085755A68D017857DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_5EC9DCC746FD79C29582B5A8494CBDFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_1460DE04434D0BAF25E173B04BF1EAD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_89C2B58F4CDEAB099C7D42BAE13F8520();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_FFC90A144D14285BDBA4B2865BF55208();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_875CC72A43E346D7BAF9A5907CFCD8DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_SequenceEvaluator_57A941F542D07684B77337AC622B64F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_BlendListByInt_E2BCF31D474BE29922595895BB9A24B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_14ABA24346C950D6555E5EBCEAD1C368();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_79AF3CC54895FEE0E467918640D86261();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_447EDBA549F84C57236735A0FF6C5859();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_GbxAnimGraphNode_ForwardDynamics_C1B277DE400FBA1A1C83778F4204A5A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Non_Combat_AnimGraphNode_TransitionResult_207500B44669241E728427A9DBC441F6();
	void BlueprintInitializeAnimation();
	void OnStanceChanged();
	void Validate_Anim_Set_Tags();
	void OnAnimStyleChanged();
	void Update_AnimStyle();
	void ExecuteUbergraph_BPAnim_NPC_Non_Combat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
