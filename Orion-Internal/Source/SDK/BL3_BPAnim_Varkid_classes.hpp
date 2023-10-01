#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Varkid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Varkid.BPAnim_Varkid_C
// 0x4225 (0x4D15 - 0x0AF0)
class UBPAnim_Varkid_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E6B3AA934E2EEDD7C686B78B9D126D81;      // 0x0AF8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A6F910E48CBD9A4C0E5F9A38D9DB2BE;// 0x0B40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86239E09484C62EFDAEB959EFC838C39;// 0x0B90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_765F199E40346C1FE9810E9C317DDA8B;// 0x0BE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD78342045B03CFB11C0E089F35BE08F;// 0x0C30(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F5D9EB9D4F012C29E392BFA386C4F11B;// 0x0C80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6584523F4B8A59973ED542B2A7D00F4E;// 0x0CD0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2CC3E58843EA0CDA459A8E81B2F9C9F5;// 0x0D20(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9FC032494AE5E5B5977873BD064ED2C4;// 0x0D70(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C1BD07440BB4F5C0F27C38EB1875978;// 0x0DC0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F057EE7044373C773FF50AAF9E85FF8D;// 0x0E10(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33058CC54F989B8697854491CA46FF20;// 0x0E60(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62460451498F87AE1B436F80491AB824;// 0x0EB0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_622F402B44EC0A4D14D24B91572B7B66;// 0x0F00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D37D13914423509CA0D92DBC9CF296BF;// 0x0F50(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13D19D46466A6B60A5D7AA9173883D65;// 0x0FA0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4466A891439BE33837E16A90C1920EDE;// 0x1090(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35B3C6E34FC1A1ADFD96A0B9F6FBC370;// 0x10D8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_45E3A84E4D8C6000ACBB32AE5CE6BF76;// 0x11C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_869729BD4F97C08ED3FFDCB176CC7F77;// 0x1210(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BA4E1D4375E0136B31338334C122DF;// 0x1398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7567A869424AC38732C33BAF90E0F964;// 0x13E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_598C2DCF4548B271A8DBCD9C8F32E1CB;// 0x1430(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72A4F8774E9647470CE809880D16C595;// 0x1480(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_845C7505434F9A92A79D22BFE91BEA8D;// 0x14D0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F275DF845E2F5817E34D4A3388F5559;// 0x1520(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA954CF84730A92A06858A859C1C0D5D;// 0x1570(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EE6DF3E487DDF3998BE238A99D8F08F;// 0x15C0(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_AB79CFDF417D187F2F033E8218707CBD;// 0x1610(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D1FD4B9C45E4D5798345FC9A80F4C884;// 0x1698(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F08B6F93435FB86554755AA6A833BE1A;// 0x16E0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_01810B934C9607EA20DD4FBE8204606C;// 0x1840(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53ACD24C4368F738146CCE90E772A817;// 0x1888(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5E0684D144706287042B3D84DF36852C;// 0x1978(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F6D433E45085B7C32D3A38F2D6FF364;// 0x19C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_982187244AD5ADE6E7588AA3DF2DCA9D;// 0x1AB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E3DC38C4B85A1C9D4CC00BDEDAE42B7;// 0x1AF8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5EF0DE64C6FFC4C0EC3EE893A72EEF3;// 0x1BE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_29DC405B4A8DC51FCDE7B987EB5340D5;// 0x1C30(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_98DDC7B8477C5C409C663DAEB4BEB272;// 0x1DB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE1FD6E74719D67116E54FA5A68459AA;// 0x1E00(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_100EA9C149EE2E2378849A88ED41D8BE;// 0x1EF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC09805444B2CC1203948B93A97E004D;// 0x1F38(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5D14EA5E488882AB1F1D37BC4F89D603;// 0x2028(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DA7FA2E47DBED61176A4EAE01597E01;// 0x2070(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D5C48FB4CD96E7C03DD7789AF701585;// 0x20C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09897FF14E83916608A3F8B4E971D313;// 0x2110(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A21A4D04015C8DA6A78D49B5630C6E8;// 0x2160(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DACD99F345DDA5506BE3CBA66D8FFAFE;// 0x21B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E68DAA19414FE42CE794E9ACF7FDD9C4;// 0x2200(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E0979414C56510F36EBBFBD019352D1;// 0x2250(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_3CF0E09A4637BEA366A893ACA701D501;// 0x22A0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2857ADF049DA71D5523DB98632EE01F5;// 0x2328(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C053D1EE4E024469093EAC8CB3F562A9;// 0x2370(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_780C04324C5DD63630CCBA9908A7273D;// 0x24D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D62DF7D404B621AA81B82A49199B367;// 0x2518(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19CBA7554842D51F555B1B93AD017826;// 0x2608(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21DEC7EC4BF09CEC7CAE739A5CE3BAA5;// 0x2650(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D60D94946019E9B2E12B68E055D45A1;// 0x27B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE4008684FEEDAE7302532BFB4ADD784;// 0x27F8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E703D7744833D3AF7BF9488148C385EC;// 0x28E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E2DF0C3E49BAA703CBB114B768C07430;// 0x2930(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F36036954CBD87B07AF5CCA691E45471;// 0x2AB8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_945C2D4C418DA9064A8F67A0003889C4;// 0x2B00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A6E99B7474A1202D3E99CAD2F4CDD09;// 0x2B50(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B788C40458B33FA11494889EE309366;// 0x2BA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92CE29134F56CF459B7C8B9EF3A01E57;// 0x2BF0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23733B0E45C36DCE0833CA9DD4F0077A;// 0x2C40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_350A07B249A85792102323973B3E85A5;// 0x2C90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D102962460EDBEB5034D5BBE723A240;// 0x2CE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58A42EA34CE9BD2B66232A9A23365139;// 0x2D30(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_ABE3DFDD480921EF0E13D19D726CDC36;// 0x2D80(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_44A2FA68403051CF108F7F9D6F686B17;// 0x2E08(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C095E7584BB065EDEE6D92B44F6B88EF;// 0x2E50(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7C11D96A47763AC410452C96EE2A669D;// 0x2FB0(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_376A57DA47A9BB2C8130B7BC03B89D68;// 0x2FF8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E4308824F4DB5CAEDFA7C88C18257D9;// 0x3080(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4EB545644DDAE8F86FD48AA81979B277;// 0x30C8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E7D113FA4841E28E1AD2668C0D4FB869;// 0x3228(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_402A29264633AFEBC93EF8A235049C37;// 0x3270(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_881933874139AEDABDA11D9FED17D762;// 0x3360(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E4CC5A5949E4D58C07C3129B347E16CF;// 0x33A8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91C7553045C502B21D2F15BBB6A73655;// 0x3530(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F750D65242BA3129CBB02DBEC67F1E8C;// 0x3578(0x0188)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7A9E01344BF631281745C3AC61E737A4;// 0x3700(0x00E0)
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_842FA7CD4304638C88A77898406185A2; // 0x37E0(0x02D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EF94765C468A23470FCEBEBBC36BF42E;// 0x3AB0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_917C03F34CA40E5E62F102B42DF75BAB;// 0x3B90(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E5618EF47B8ACEACD29118FEEDEDB15;      // 0x3BE0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_720222904F16D750B702C79E66A326B5;      // 0x3C90(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F13B2BF941FA97170B8D248B2B8D3DD4;      // 0x3D40(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_910B21104BE34372DA474BBDC275C426;// 0x3DF0(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C12813C94682FAD20BAF3B85ECCEBF48;// 0x3F10(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F66C413042171CC85F7411B835F429D6;// 0x3F60(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B97641BB4DAA93989328E9926B2A41CB;// 0x4040(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43F133964D9D99E8DF53A1A48930D8EF;// 0x4090(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9530BC924F20B4FA2895E4BD9152B1FA;// 0x40E0(0x0120)
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_3F72A87D422ED82FE10C238AC769A65A;  // 0x4200(0x08B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7F36415547C7A16AF46B89915AF1543A;// 0x4AB0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_628D0899419DFE0AFB969886A5907730;// 0x4AF8(0x0048)
	struct FGbxAnimNode_ApplyBoneModifyProfile         GbxAnimGraphNode_ApplyBoneModifyProfile_E42935984F4F0F5DEC8538A5CE64D0EC;// 0x4B40(0x0180)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65BA711640FE927E197A91B57488C186;// 0x4CC0(0x0050)
	TEnumAsByte<EVarkidVariations>                     Enemie_Variant;                                           // 0x4D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PodGroundStance;                                          // 0x4D11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InPassive;                                                // 0x4D12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               PodStance;                                                // 0x4D13(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCombat;                                                 // 0x4D14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Varkid.BPAnim_Varkid_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_SequencePlayer_5F6D433E45085B7C32D3A38F2D6FF364();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_BlendSpacePlayer_F08B6F93435FB86554755AA6A833BE1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_CA954CF84730A92A06858A859C1C0D5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_09897FF14E83916608A3F8B4E971D313();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_5F275DF845E2F5817E34D4A3388F5559();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_DACD99F345DDA5506BE3CBA66D8FFAFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_E68DAA19414FE42CE794E9ACF7FDD9C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_72A4F8774E9647470CE809880D16C595();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_BlendSpacePlayer_C053D1EE4E024469093EAC8CB3F562A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_SequencePlayer_4D62DF7D404B621AA81B82A49199B367();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_BlendSpacePlayer_21DEC7EC4BF09CEC7CAE739A5CE3BAA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_D37D13914423509CA0D92DBC9CF296BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_622F402B44EC0A4D14D24B91572B7B66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_92CE29134F56CF459B7C8B9EF3A01E57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_33058CC54F989B8697854491CA46FF20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_350A07B249A85792102323973B3E85A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_6C1BD07440BB4F5C0F27C38EB1875978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_BlendSpacePlayer_C095E7584BB065EDEE6D92B44F6B88EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_9FC032494AE5E5B5977873BD064ED2C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_BlendSpacePlayer_4EB545644DDAE8F86FD48AA81979B277();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_2CC3E58843EA0CDA459A8E81B2F9C9F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_BlendListByEnum_7A9E01344BF631281745C3AC61E737A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_GbxAnimGraphNode_LookAt_842FA7CD4304638C88A77898406185A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_6584523F4B8A59973ED542B2A7D00F4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_BD78342045B03CFB11C0E089F35BE08F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_765F199E40346C1FE9810E9C317DDA8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_TransitionResult_86239E09484C62EFDAEB959EFC838C39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Varkid_AnimGraphNode_SequencePlayer_53ACD24C4368F738146CCE90E772A817();
	void OnStanceChanged();
	void ExecuteUbergraph_BPAnim_Varkid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
