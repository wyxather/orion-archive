#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Enforcer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Enforcer.BPAnim_Enforcer_C
// 0x9795 (0xA285 - 0x0AF0)
class UBPAnim_Enforcer_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6DD1B7DD46D17066801EDE8C8B39A49E;      // 0x0AF8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2FC8616C4AB275558DD409BE05DE4269;// 0x0B40(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_56F04FCC475C78EA1012AC82A5805629;      // 0x0C60(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DAEEECB64E8C18E429EB9DA64C2C1B56;// 0x0D10(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60EA1C684173947F537BD2867EF3BD73;// 0x0DF0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B1DEAEAC414DD983D239E2804B2F3AA5;      // 0x0E40(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_32B085584A6DFD992C2189AB1BE1E01C;// 0x0EF0(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_556EC6C14D06CC4B564F85A31CB013BA;// 0x0FD0(0x0238)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_437DDA564B9C0BF1BC0246BFCA962524;// 0x1208(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC1F6868453EFF65F75276BE48CDF9FC;// 0x1250(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50A2AD154C0FFAFC0D678293C04A9EBB;// 0x12A0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B7EAD4043098FBB38A5C987D2F1FAF0;// 0x12F0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E5C9FD2346FFC318C48CCEA135BBBF49;// 0x1340(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_394546F8454ABC10E53699A738DC68D6;// 0x1390(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F96ECA8A4C67FF7D07CD87A46A8386E6;// 0x13E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BFA82DFE45DD39DAB6060BB7DE2702E0;// 0x1430(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7912D82B4A662E096CCC018E45BF9AEA;// 0x1480(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E20BCED4B876EDCE39402BCA5081996;// 0x14D0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68837FC04485014DA24613A33B95C1A1;// 0x1520(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_669085A6487EC38FE94F0F861F80B231;// 0x1610(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90B07CC34BD1E29660C11ABFD17EFA3F;// 0x1658(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_72594364440C4D529CECB88842DF80BC;// 0x1748(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1D4CC28C491196A2B713C397B9EE12E2;// 0x1790(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5E3B1D5C46D89AFBD3EAC9B53BD69488;// 0x1918(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FD06D6F4210E30F8AE6E59C0404B878;// 0x1960(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3C3FD6D0418D43A65221CA882CBD7D56;// 0x1A50(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05D4369E4B1EDFCB32C2038AA1CA960C;// 0x1A98(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_388E726A4AEF5A7D9B5B41A34F0C7468;// 0x1AE8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A9EAE46475EE47573EDFEB899F31F3E;// 0x1B38(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB6D1E784B8B25839AFD04965949CD12;// 0x1B88(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B6511EA4469E1CAAAD82B99F6B029DE;// 0x1BD8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8285AF574FF6AACBBF400A95872C10A3;// 0x1C28(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38823A174A5C076937A530B97DCFFC4E;// 0x1C78(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_F254A6314D2AB7B0E6821CB37F4C9C04;// 0x1CC8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5BF2537E484169ABA43C91A75386964C;// 0x1D50(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_94B1A10749B93132F5B92DAB3930D35E;// 0x1D98(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_038158924ED6FE6926BA0EBAC98E8706;// 0x1EF8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_903F87D9421A26CA4148C09387460365;// 0x1F40(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3E838A1477C3F17A68A7AB7F91FACEC;// 0x20A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5A3409B2495777BC23942CB44BC0FA88;// 0x20E8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B1A457514728E5FDFE2676859E5C0ECC;// 0x21D8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_A0B11D8B45A305D662081E858EC251EB;// 0x2220(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_183CBE6D4E6726A801B9859C4493091E;// 0x2340(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3CBB185D421D8CD307F0BDB2181D4525;// 0x24A0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D15660BC4BB320F267242E8FBC7E9E57;// 0x2600(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8E9511C1428024C50ADDCE8D6F0C296D;// 0x2648(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_13B2D8F1479EA8B468A2A8BF8B4EFD03;// 0x27D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3BE2DA2C4FEF25ED06FA3FACD1E622E8;// 0x2818(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_845C8FEC464D6C3BC8A024A47F0AD080;// 0x2868(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0699C7B545F3A5D11BEE6EA25BD8E2C8;// 0x28B8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26B2A3DA4D5D731BC6A492A4B9157103;// 0x2908(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD2391DF436FB854D4686AA70F59563F;// 0x2958(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE5D5C4E4E01E1B2361593885DD65FA6;// 0x29A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C77920F54071D6E6847CFB8D7D4F5246;// 0x29F8(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_B71010A04A06351351E14C960646977A;// 0x2A48(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D44697CE4FAB5B0CE874ED89DB149103;// 0x2AD0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E09150884B556A8F7CB0DE8034A3F528;// 0x2B18(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9BAD3858432C805DF4BB6687D04800A5;// 0x2C78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A36641004F39B3D06A109FB1A65C483F;// 0x2CC0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F1A6FCC74C0061F96DFE6EBC493934A2;// 0x2DB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC7233134F160326D93A52AD88ABEB73;// 0x2DF8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_11B01AD642BD2945456C44A55426BC01;// 0x2EE8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B3585948496156F3798B85B5A02807D9;// 0x2F30(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_870DF9E34020D1DD369C3790C995C4E0;// 0x3090(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_41A172844BE1BD27E2D574A2C1880D9B;// 0x30D8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3C1BC2FF4DBDCC7A64B1C1ACCF1D1850;// 0x3260(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB087F8B418B7025317950827F3593CD;// 0x32A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C669468047E5914F0EDF5EB485CF4B5E;// 0x32F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DAF311A4B88C37F9D5CEA986724CCAD;// 0x3348(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A29108FE4A9E585576E092BF41A9AB79;// 0x3398(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9BC02CE4AFD8EA6943B5E9F2A27B641;// 0x33E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2555213244B67936C0539FB79B29E2A0;// 0x3438(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ACFA3F664ABED83EA599959AF73432DF;// 0x3488(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_915F9E5C49D573B1878D629FE77EBD23;// 0x34D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6DD2ED94B8A7D21D08F68B5EC36271B;// 0x3528(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_3B82E37D42E0661B95F5BAB1CB1E49B0;// 0x3578(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82F24C0D44E89975B7C200A5F126AE0A;// 0x3600(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_06C8E8CA41889D18563428A51878ABA8;// 0x3648(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_840FC50240725C10A3C7CBACF01A7E5B;// 0x37A8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A6FDA8E546CCED5D90B3D7B171439E79;// 0x37F0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_35BD855942C2946CECA794A0EAB225A8;// 0x3950(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9405AC294BF48018BBFFBEBB06A139AA;// 0x3998(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3B74C1884AFF742D4E4F758F01F3EA48;// 0x3A88(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_69DB05284A3733C99A0949B4E1050219;// 0x3AD0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CDDE0A01423ED04532242CB23882A76A;// 0x3C30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AA0542CB4A9FC73B6D5044AE87D39644;// 0x3C78(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E9AD50044CFCFC3D8C821A70A280603;// 0x3E00(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_25878D004D0C1A4C689F99A226653113;// 0x3E48(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1FAE215A42B0D8D7BEF9A69EAB533992;// 0x3FD0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E4FE257548243AB5B06A548C0E40FE50;      // 0x4020(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_363425E84C7328D85B24B0A3129DF79A;// 0x40D0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E1E455E42D43D153AFA4F8EFE459C8E;// 0x41B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6F8EBC984B14E02A146186BB48CC8745;// 0x4200(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3A910334487347D06CAE008DBFC840DF;// 0x4250(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5F7ADE8B42E93E89FE172E924F87EDE4;// 0x4370(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_294663BE4CACD950AC2C87AF1EDAD9EA;// 0x43C0(0x0050)
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_1AB62F094108893F7A064297DFF7C2EC;  // 0x4410(0x08B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E7A97AB2479D0671DA3B158FD26B25AD;// 0x4CC0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_37100A4648309428387F87BEF61DF3B0;// 0x4D08(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_112DE65A41F8779A7DF98C93F178E50A;// 0x4E28(0x00E0)
	struct FGbxAnimNode_ApplyBoneModifyProfile         GbxAnimGraphNode_ApplyBoneModifyProfile_DBE637F541FC0BB70FAD8FB8CE7B87BA;// 0x4F08(0x0180)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D322AA9A4F291A835C5ADE95D403CB7B;// 0x5088(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_05D787A14AAE98AEA351A5991EEB1DF6;// 0x5108(0x00E0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_06A0C2C14891C92828E8078A83CF96D7;// 0x51E8(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EF1F65D84839B3083417DC8039EFC2B1;// 0x5260(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0738D08D4105D374D2BEFE8B36457676;// 0x5340(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8D00F24B4036FFF51CE5DFBE26ADFD25;// 0x5460(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0AD9D73D42BEBB062191E99AB58D6B8B;// 0x5540(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CE958AA448D340B9FEF4A919728C917;// 0x5620(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1BE174404B167CC3A3EF4DAF25F01358;// 0x5670(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED277A9C4730CEE8D3CE268B7A6D6279;// 0x56C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7489D0CA48707B4AE2C5A7978FB8FB28;// 0x5710(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA104F3F415B7DC4335443A296C74AB1;// 0x5760(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DAC3D764AAADCBFFF2E8ABC947EC390;// 0x57B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D26C2FA8410A331A67E0938824536C50;// 0x5800(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A8B01F04A1F53A79FB9BD81D51D49B0;// 0x5850(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3F8DCD944562AB41119FE6BA68B1C8D9;// 0x5940(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_485C5373425B2C380ED5EAB9C7F49C19;// 0x5988(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E08620E347F603919A6F32A8E4067E20;// 0x5A78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A8DE668E43EB819B2E4599AAB8BDF3E8;// 0x5AC0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FFABF3C14612930896EA58ADB7C77E26;// 0x5C48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17C85A0B4BCFD55C1C4C079C9343BC15;// 0x5C90(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_035A1BB4451E9CFF7AE69FA4E5BEE394;// 0x5D80(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35FC4C8E42040F222802669A85CD86AD;// 0x5DC8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_63D7B2994884B4AF57909DB9265FD6F3;// 0x5E18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7EA3F4C947A31356F4FE8BA6F7C44B34;// 0x5E60(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9420467949B64CFAEA7D1D9B95A08E4A;// 0x5EB0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_302D720F4B65DC8645CBFF9B5CD9D3A0;// 0x5F00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3FA47A24CA69A62B15350814B29AD20;// 0x5F50(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EA1EEEB4835DDD964A758B58483A725;// 0x5FA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CAEF1CA24C19F7D48BECD2B46A0CAF09;// 0x5FF0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CD8EFFD4880D893D7E5638D8E5B8A52;// 0x6040(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_D1B4879C459A8E7B3D8E03AA1CE9DA64;// 0x6090(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3881E7BE417E9F2373D0399168595B18;// 0x6118(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A5EC32254B9987FBA3E156A36D438FA4;// 0x6160(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_00259C244D1F16CDCA2DC1A9F680BF62;// 0x62C0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7CD4743A40D531CDC9473AA926DE325B;// 0x6308(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75A8645A49074F97B7B2F5A6CB5FEF7A;// 0x6468(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B70C4BC9497A2741DBF1F28B96E0ADC6;// 0x64B0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CF948A3C491068985F80A1BFC21256C6;// 0x65A0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A6330FA6486070549D530CB04213ACCD;// 0x65E8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E4A8A9D94C7E658289365FAB8A010FA5;// 0x6748(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D51C5F9E42732D73212DDFA2D6937EDE;// 0x6790(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0AE05E684E62F766A89FADA6EC21DBE8;// 0x6918(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5687DECC4F2F2404C91AB7B27983A3C4;// 0x6960(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C950AB814ABE03BE454415AC7F5C2A7C;// 0x6AE8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7C05F3054B27EB396B02EC8CB0AFE0FB;// 0x6B38(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_167547664C71302A73D866ACE7900743;// 0x6C18(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0E3EC0F742F404BDBCB385BD5139C1DA;// 0x6C68(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E68CD10F4CDBE5B3816B478EA95D9262;// 0x6CB8(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x6D08(0x0008) MISSED OFFSET
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_5EBBD2C7433E339DAF47368E40E696B1; // 0x6D10(0x02D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_BF40BE484A4B1171528250A8D638BDFD;// 0x6FE0(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_570130DB40DCDEEFC7515F975A61C9CD;// 0x70C0(0x0238)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64494C1E429A4F3C42C704ACAFFC70A8;// 0x72F8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0C45EA9D476F482E815574BA77B7497E;// 0x7348(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B4C15D2B4D5541ED28318EB891823EBA;// 0x7398(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C540853F468EFC5E62156E882134F31E;// 0x73E8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A1095E614DA3BB061875F68D3212A44C;// 0x74C8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_041897BD470B3A53037D36843FF4AEDA;// 0x75A8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7A6623BC4D20672C82FE8598E6CBBAB8;// 0x75F8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9339354545C5D6EBD4F890A4CC903885;// 0x7648(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4F72FD8A4932D06FCD14DFADF12D6639;// 0x7698(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3E2E8FE04A23185A21F04C8BF770B08B;// 0x7718(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_734E496042DE77D0CE75C8ADA7312554;// 0x7768(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C5601023482C7D38D94972AA50942D3A;// 0x77B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_68B756354C20AF1A1428009F18131726;// 0x7808(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D64D49EE434149B838317695123294A9;// 0x7858(0x0238)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6118664845E5BC89E896C38501274C4E;// 0x7A90(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B4D631946BF71A584ED9E9675C06E9C;// 0x7AE0(0x00F0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1F2DC4524AB74B9949DDD79F17FCEDF2;// 0x7BD0(0x00E0)
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_A010B4B0411F8D6C1EE19783ECDE9613; // 0x7CB0(0x0370)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B52E1D3C4AAE81C8965BDDB7B6A2B17E;// 0x8020(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_04B214894C84576BCCE389B992540A5E;// 0x8140(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_EDA9A0FE412A4A6B966DEC8AC478AB5E;// 0x8190(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C24C1D6C410A521AAD5846BB52B2C271;// 0x82B0(0x00F0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1688492341C95F80FF620CA07D5EC79A;// 0x83A0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BD3468554DC97A9E7AA17F8FC91E2752;// 0x8480(0x0050)
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_0754F4864603F7B6E27A31A1606B5785; // 0x84D0(0x0370)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E6F589D0485BABAB9E4B03BB4526FAB8;// 0x8840(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CEC1C0574722D5274EB22FAD5411CCB5;// 0x8890(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C0EC3DB4CF7EE11B82205878E1B0299;// 0x88E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7B425814B5A8BC43F804DB8526C7B59;// 0x8930(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B45AB1014C1348D8426E4D95C8C73310;// 0x8980(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_121678804F1C7667CEBB7D8064CEFD44;// 0x89D0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06309EF74FD939510F0A71897CD34842;// 0x8A20(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_325FE78C4FF435FB2BE7A0B9972ABC4B;// 0x8A70(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D5867F94EC5E0CDA3BCF0A7E8BB62E9;// 0x8AC0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE55E1254729B1B0E51FF7A67018ACE6;// 0x8B10(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DD1853DB4610DFA922E1F5862FD9F8EA;// 0x8C00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B194CC84DEF23281E6F7EBCBD5F6D53;// 0x8C48(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8E6A3C834F379122F1B2A99A22972461;// 0x8D38(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2C9648E244D661E407A9F9A5EA967D62;// 0x8D80(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05B562AA4BE9848122978D90EE8D65FA;// 0x8DD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F660BD304A3E2FEB356879B3FCF491B5;// 0x8E18(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3870D75E4119507FCB0FD3AC5F5EE26F;// 0x8F08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DFC932A9443C2FCE950D4DB4BC4BA082;// 0x8F50(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1736EB2E4D175D54C305ACAFC164279A;// 0x9040(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFB6784C43F48111E5EB0A85E296B1F8;// 0x9088(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B39D3D85435E8185124E2D88D505BF8D;// 0x9178(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C61A94DA439715E5AF162D9E087CD1D4;// 0x91C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_10653DCB4B1189FC9AD6238FA5D7BC21;// 0x92B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C5280CF14CD4F3F829A2B5897D4A7F3C;// 0x92F8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_73BD6CF444AD795AB4920C966627F032;// 0x9480(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BECA61F9443DABB29996349A274AFD0F;// 0x9560(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D51A6516434F9B759B9C289F046661C0;// 0x95B0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0AF538F84C4F16CF5970CD9288F534D9;// 0x9600(0x0120)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9EFFC2AA4FF9EF36D8F53A99B3EA7B64;// 0x9720(0x0038)
	struct FAnimNode_BlendFaceFXAnimation              AnimGraphNode_BlendFaceFXAnimation_71FE61D141C9E6444A4A26B2B5B37500;// 0x9758(0x0088)
	class ABPChar_Enemy_C*                             Character;                                                // 0x97E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPawnMovementComponent*                      Movement_Component;                                       // 0x97E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<Enum_EnforcerVariants>                 EnemyVariant;                                             // 0x97F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x97F1(0x0007) MISSED OFFSET
	class UGbxCharacterMovementComponent*              GbxMoveComp;                                              // 0x97F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UOakCharacterMovementComponent*              OakMoveComp;                                              // 0x9800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InCombat;                                                 // 0x9808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Charging;                                                 // 0x9809(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Take;                                                     // 0x980A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Give;                                                     // 0x980B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InPassive;                                                // 0x980C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_EnforcerVariants>                 InitVariant;                                              // 0x980D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x980E(0x0002) MISSED OFFSET
	TArray<struct FName>                               LiveWeaponPoses;                                          // 0x9810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ValidWeapon;                                              // 0x9820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x9821(0x0007) MISSED OFFSET
	class AOakWeapon*                                  BaseWeapon;                                               // 0x9828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UManufacturerData*                           Manufacturer;                                             // 0x9830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GripType;                                                 // 0x9838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ForeGripType;                                             // 0x983C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAStruct_Generic_WeaponAnimContainer        WeaponPoses;                                              // 0x9840(0x0A20) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentWeaponManufacturer;                                // 0xA260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0xA264(0x0004) MISSED OFFSET
	struct FName                                       LeftGrip;                                                 // 0xA268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidLeftGrip;                                            // 0xA270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidRightGrip;                                           // 0xA274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightGrip;                                                // 0xA278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponType;                                               // 0xA280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MuteFace;                                                 // 0xA284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Enforcer.BPAnim_Enforcer_C");
		return ptr;
	}


	void CalculateWeaponHoldData(class AWeapon* NewWeapon, class AWeapon* PreviousWeapon, bool* ValidWeapon);
	void Init_Components();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_A6FDA8E546CCED5D90B3D7B171439E79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_E9BC02CE4AFD8EA6943B5E9F2A27B641();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_69DB05284A3733C99A0949B4E1050219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_A29108FE4A9E585576E092BF41A9AB79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendListByEnum_05D787A14AAE98AEA351A5991EEB1DF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_ApplyMeshSpaceAdditive_06A0C2C14891C92828E8078A83CF96D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendListByEnum_EF1F65D84839B3083417DC8039EFC2B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_9DAF311A4B88C37F9D5CEA986724CCAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_1BE174404B167CC3A3EF4DAF25F01358();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_ED277A9C4730CEE8D3CE268B7A6D6279();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_7489D0CA48707B4AE2C5A7978FB8FB28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_EA104F3F415B7DC4335443A296C74AB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_B3585948496156F3798B85B5A02807D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_D26C2FA8410A331A67E0938824536C50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_SequencePlayer_A36641004F39B3D06A109FB1A65C483F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_SequencePlayer_17C85A0B4BCFD55C1C4C079C9343BC15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_E09150884B556A8F7CB0DE8034A3F528();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_302D720F4B65DC8645CBFF9B5CD9D3A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_AE5D5C4E4E01E1B2361593885DD65FA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_CAEF1CA24C19F7D48BECD2B46A0CAF09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_4CD8EFFD4880D893D7E5638D8E5B8A52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_DD2391DF436FB854D4686AA70F59563F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_A5EC32254B9987FBA3E156A36D438FA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_0699C7B545F3A5D11BEE6EA25BD8E2C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_7CD4743A40D531CDC9473AA926DE325B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_A6330FA6486070549D530CB04213ACCD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_GbxAnimGraphNode_LookAt_5EBBD2C7433E339DAF47368E40E696B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendListByEnum_BF40BE484A4B1171528250A8D638BDFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_RotationOffsetBlendSpace_570130DB40DCDEEFC7515F975A61C9CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendListByEnum_C540853F468EFC5E62156E882134F31E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_RotationOffsetBlendSpace_D64D49EE434149B838317695123294A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_SequencePlayer_8B4D631946BF71A584ED9E9675C06E9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_GbxAnimGraphNode_HandIK_A010B4B0411F8D6C1EE19783ECDE9613();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_LayeredBoneBlend_B52E1D3C4AAE81C8965BDDB7B6A2B17E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TwoWayBlend_EDA9A0FE412A4A6B966DEC8AC478AB5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_SequencePlayer_C24C1D6C410A521AAD5846BB52B2C271();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_GbxAnimGraphNode_HandIK_0754F4864603F7B6E27A31A1606B5785();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_3CBB185D421D8CD307F0BDB2181D4525();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_183CBE6D4E6726A801B9859C4493091E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_B45AB1014C1348D8426E4D95C8C73310();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_121678804F1C7667CEBB7D8064CEFD44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TwoWayBlend_A0B11D8B45A305D662081E858EC251EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_325FE78C4FF435FB2BE7A0B9972ABC4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_5D5867F94EC5E0CDA3BCF0A7E8BB62E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_903F87D9421A26CA4148C09387460365();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_94B1A10749B93132F5B92DAB3930D35E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_LayeredBoneBlend_0AF538F84C4F16CF5970CD9288F534D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendFaceFXAnimation_71FE61D141C9E6444A4A26B2B5B37500();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_38823A174A5C076937A530B97DCFFC4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_8285AF574FF6AACBBF400A95872C10A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_0A9EAE46475EE47573EDFEB899F31F3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_SequencePlayer_8FD06D6F4210E30F8AE6E59C0404B878();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_3E20BCED4B876EDCE39402BCA5081996();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_7912D82B4A662E096CCC018E45BF9AEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_F96ECA8A4C67FF7D07CD87A46A8386E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_BlendSpacePlayer_06C8E8CA41889D18563428A51878ABA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_394546F8454ABC10E53699A738DC68D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_E5C9FD2346FFC318C48CCEA135BBBF49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_8B7EAD4043098FBB38A5C987D2F1FAF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_50A2AD154C0FFAFC0D678293C04A9EBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_915F9E5C49D573B1878D629FE77EBD23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_RotationOffsetBlendSpace_556EC6C14D06CC4B564F85A31CB013BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Enforcer_AnimGraphNode_TransitionResult_F6DD2ED94B8A7D21D08F68B5EC36271B();
	void BlueprintInitializeAnimation();
	void OnStanceChanged();
	void InitializeVariant();
	void OnAnimStyleChanged();
	void OnWeaponChanged(class AWeapon** NewWeapon, class AWeapon** PrevWeapon);
	void CheckWeaponPoses(bool ValidWeapon);
	void ExecuteUbergraph_BPAnim_Enforcer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
