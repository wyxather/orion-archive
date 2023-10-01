#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Skag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Skag.BPAnim_Skag_C
// 0x4596 (0x5086 - 0x0AF0)
class UBPAnim_Skag_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E077C0584A397CFF0D79139180B5C113;      // 0x0AF8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0BAAE9AC45700AD9042C0E8E51D89112;// 0x0B40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9BC6F9584159DE84859D6581F37E4AAE;// 0x0B90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0ABA9C0E410F2149FAA97D920CE370CC;// 0x0BE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D2022764FBCFD25D75827A081E44B3B;// 0x0C30(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36B1D02442F63B9B85BAF5AFAE61F081;// 0x0C80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C927D33484ABF75612BCFAF4301FE87;// 0x0CD0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_558B11774B134172480784847C2A1BB7;// 0x0D20(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA6A069C4740BD67C82548976D7CDE0A;// 0x0D70(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF3E4E4D49033686898A13A7840C0E6F;// 0x0DC0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6C6553E04B88E6684C7174A563D1C320;// 0x0EB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F9603B34402CD5D093AF9E9BB64B19B8;// 0x0EF8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CE53CC7146D8FDC4D7F3CBB6609B0F75;// 0x0FE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_01B8CBCF4A4AF630909691B7FCE3E3E2;// 0x1030(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FE38E0484856DB86A6A3C49189BEF24C;// 0x11B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B976B23B416AF28143946A9E400F3FC9;// 0x1200(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B72D952429298AE0ED09CAABB671FC7;// 0x1250(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E3D3601480F6FBC02117BA6BB8999A2;// 0x12A0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_913A1DEE4B04067B10C0E7B8A35923E5;// 0x12F0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17974FF04C3D5CC411FD868BB0A8549E;// 0x1340(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A9D1288C47979EDD3C56FF8F5C86C5C2;// 0x14A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A0115394896C06024FDE19866911226;// 0x14E8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2A73DE7147F880BA949E069F9FAC2418;// 0x15D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF2BC2FF49F3B2317D36758A555E398E;// 0x1620(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A52CD1C8422C672291BAB89769CBA275;// 0x1710(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DA708267436D9F8D636C9BA759236ED0;// 0x1758(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51A5A07A4AF85322AF410196944B51E5;// 0x18E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_928FB39147DF9EFA1DC622819ABA3B89;// 0x1928(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEC8BA07477D9F925F0609B78D8328E3;// 0x1978(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21AB745443205FB6DA7AAB88DD8A4F03;// 0x19C8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F08E8C50404288C889770E8FB8DCE233;// 0x1A18(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_293FB3CF4D83D1208BAD89A79D4A5BAF;// 0x1A68(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61BF03FF4A253AF024771F84BE807AF7;// 0x1AB8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1499E35A4114B176E4BA74908B7B3B81;// 0x1B08(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA5399A64658A627F2F3E8B66CED4C15;// 0x1B58(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DCEBABAB47AB6F2B793D5EB301A55A98;// 0x1BA8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB501CA14F4E31B5EE5A84A1368747CF;// 0x1BF8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_00E5882E4AF2FBDAE70516B9C4722765;// 0x1C48(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A2264B71494346F83DCE059C0EC945BA;// 0x1C98(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0982C7F74586A2B4B612CF80EE8BC5A9;// 0x1CE8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_864F6E704E2C726C3535088EBFBCD982;// 0x1D38(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5333A01446FB7E70A7323A811E3E34E2;// 0x1E28(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_602060D84FD6E1EBBC6B4FB88B996304;// 0x1E70(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_98639E2B45E9328D31E20785FE70B1EE;// 0x1FD0(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_CF8A1B9D44F454322C12CE81C301D71B;// 0x2018(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_584FF33C48E21A22D78FE2914E61047B;// 0x20A0(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_E84B067E40F584627BA6D1853134DA0B;// 0x20E8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A08637DA4569171A9E5ACAB412C6FF69;// 0x2170(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_3E158E5B455708A1D8A949B9F2436294;// 0x21B8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5BB869D4E14DB1D2F8C91AF37BEC32F;// 0x2240(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_B499CC5B4A0CA52420CCDD81904EDB47;// 0x2288(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE811B324A063456B4817EA1232A8D11;// 0x2310(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A91552B74E7882584959D785D910B380;// 0x2358(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_30590F7640E04BCC1D2F8FA51AC7D2BB;// 0x2448(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_24DC45FE48E24E05DCE848BD3CCEA7AE;// 0x25A8(0x0160)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_85066416469580F5644BD3B2390EF390;// 0x2708(0x00E8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D14A6D342F0EDEE3BD8BDB4B87E1337;// 0x27F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9631743B4FBD2B3EBACE69B019E70C13;// 0x2838(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AFD0A5F14284FA519E7FBF8AC0CC9878;// 0x2928(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B32632384BE26C67CAC078B50C050DB1;// 0x2970(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1977916647D101F060C49DA357D085DB;// 0x2AF8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E0B6521421DAD31EBBFB2BF77F50F7B;// 0x2B40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85269BB943F74F0D35A356A941DB1EF3;// 0x2B90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_001CBF4E408C77ABF0E639A5C6BF8381;// 0x2BE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7FED94C4C37958B5BD41EAEAA7D40A8;// 0x2C30(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_750FDADE47A251AA29AA2B8522A70368;// 0x2C80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DCE6BAEE40FE82CBC73516B5F7AC74B2;// 0x2CD0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_759CE5254F9BE772D89067A7AAD50E1B;// 0x2D20(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA2687EF45FC5A340B15A3BAD67D030E;// 0x2D70(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3EF59DFF42EBF49E1634E7A00C7157B5;// 0x2DC0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3565C7C342676750A065B78CADABE8CF;// 0x2F20(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_8742B41048BEE4D33158FD8F87F0450B;// 0x2F68(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0E12213C448E592B6B2E4C86381D30F1;// 0x2FF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32ADEA574D91A1052B7521B5A25F0031;// 0x3038(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3037DCAD48A5CA3F24A2DD87CA02DDB4;// 0x3128(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21FBF10F4AA7175A25E44D907CCAEA87;// 0x3170(0x0160)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F127B1B6455E7B0BA37652AB8716C6E0;// 0x32D0(0x00F0)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_96760761493211BF835D7D810621A45E;// 0x33C0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_56907E2A4939F061C074B9A71FCD5E12;// 0x34A8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_32126BC143F1BC1A04489FA9C54FDF2D;// 0x3608(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CB4CC1445FE475F4E4EE5B5F2B78F46;// 0x3650(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E45E9A5B4F09F120EAB19B843DE1F5FC;// 0x3740(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_97D838DB40F584799BFB559516484F51;// 0x3788(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BB86499049A9CBF83830769764669EB8;// 0x3910(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C0C54EA749DD2D4B42337AAE3ECB0C2C;// 0x3958(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_13C3C8294C517427581C658651BD7E9B;// 0x3AE0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D50321F4028B01F1EB3CF88915B2D22;// 0x3BC0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5168F00D43A68B6C229AEC9C9F879DC8;// 0x3C10(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_337E5A844EE261F1452FF7A9F0393DAE;      // 0x3C60(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D0D1A1BC4DC171E42D88E098A11DFBC9;// 0x3D10(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FBE802234B969069BF34C0B74E56690F;      // 0x3E30(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A0899EEE4657B991B0CF74BC6A5911EB;// 0x3EE0(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4F812E9B4E48D163A0A10F806B24FEF3;// 0x3FC0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8664426C4BD999958637F78AEC3006CE;// 0x4008(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B99F8B144BD9F3E276A18596DCFCE2C4;// 0x4050(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FC55CB8D4B541F9160B4E9868E0D2360;// 0x4130(0x0050)
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_CD7C068A4DA0C874762C589240580CB4;  // 0x4180(0x08B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AC466FF34D4E8661D4C51D8A019A2DA1;      // 0x4A30(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2AAF6C654E1B77902B3DE99FFD6118D6;// 0x4AE0(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AE6AF84E43B4140B730C8CA8C5C5A99C;// 0x4C00(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BC57973844656A7EC5EEE2991F478834;// 0x4C50(0x0050)
	struct FGbxAnimNode_ApplyBoneModifyProfile         GbxAnimGraphNode_ApplyBoneModifyProfile_B163A6AB462B871BA7F55C939A2D95D3;// 0x4CA0(0x0180)
	struct FAnimNode_AimOffsetLookAt                   AnimGraphNode_AimOffsetLookAt_2B69FFBD44F51F3D348CFA86A051B703;// 0x4E20(0x0260)
	float                                              RandomStart_Idle;                                         // 0x5080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESkagVariations>                       EnemyVariants;                                            // 0x5084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInSuicideStance;                                         // 0x5085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Skag.BPAnim_Skag_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_SequencePlayer_A91552B74E7882584959D785D910B380();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_BlendSpacePlayer_30590F7640E04BCC1D2F8FA51AC7D2BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_BlendSpacePlayer_24DC45FE48E24E05DCE848BD3CCEA7AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_GbxAnimGraphNode_BlendListByFloatInRange_85066416469580F5644BD3B2390EF390();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_BlendSpacePlayer_602060D84FD6E1EBBC6B4FB88B996304();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_SequencePlayer_864F6E704E2C726C3535088EBFBCD982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_1499E35A4114B176E4BA74908B7B3B81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_001CBF4E408C77ABF0E639A5C6BF8381();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_E7FED94C4C37958B5BD41EAEAA7D40A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_DCE6BAEE40FE82CBC73516B5F7AC74B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_SequencePlayer_DF2BC2FF49F3B2317D36758A555E398E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_759CE5254F9BE772D89067A7AAD50E1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_BlendSpacePlayer_3EF59DFF42EBF49E1634E7A00C7157B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_BlendSpacePlayer_17974FF04C3D5CC411FD868BB0A8549E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_SequencePlayer_32ADEA574D91A1052B7521B5A25F0031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_913A1DEE4B04067B10C0E7B8A35923E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_BlendSpacePlayer_21FBF10F4AA7175A25E44D907CCAEA87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_SequencePlayer_F127B1B6455E7B0BA37652AB8716C6E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_GbxAnimGraphNode_BlendListByFloatInRange_96760761493211BF835D7D810621A45E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_BlendSpacePlayer_56907E2A4939F061C074B9A71FCD5E12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_3B72D952429298AE0ED09CAABB671FC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_AimOffsetLookAt_2B69FFBD44F51F3D348CFA86A051B703();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_AA6A069C4740BD67C82548976D7CDE0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_558B11774B134172480784847C2A1BB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_36B1D02442F63B9B85BAF5AFAE61F081();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Skag_AnimGraphNode_TransitionResult_0ABA9C0E410F2149FAA97D920CE370CC();
	void OnStanceChanged();
	void ExecuteUbergraph_BPAnim_Skag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
