#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Customizable_Create_Character_Male_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Customizable_Create_Character_Male_AnimsBP.Customizable_Create_Character_Male_AnimsBP_C
// 0x0B89 (0x1639 - 0x0AB0)
class UCustomizable_Create_Character_Male_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3CB5734941071CF79AF83F89F93A291C;      // 0x0AB8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_661D6D41437FF242AB22B1A4BFF94319;// 0x0AD8(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_2A7FA0C74AB09DB133D55488D4443BF9;// 0x0B50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC68A2F64031C30F0A5A3096D2BA62D3;// 0x0B98(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9142DA6A4750314F4C8D06AA0D0946C1;// 0x0C10(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A4DDDCC47F6E2F6654B62AEB4207567;// 0x0C88(0x0078)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_01107B02409499068EB17B81DE43E1F1;// 0x0D00(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_965E4A13407DAF3E8A2D02B043C3D180;// 0x0DC8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_663ADAFD40B1168C467B689F76976C51;// 0x0E40(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE83D37847D111A82780AA87249B13C1;// 0x0EB8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8BC07C404E64557990C12DAA2A0F857F;// 0x0F30(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5C7AC0A14D798EED28D95B94CAB25D9B;// 0x0FA8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2EEA6A1A498BB19389DC29995AC2198E;// 0x1020(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_649EE2BF44BD7C971E852584EAC784B6;// 0x1098(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F778E1E499903F54BCF9C8432CFF316;// 0x10C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7E540DC46AA552C2E238E94CF71B51B;// 0x10E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E3DC31024269B0E0A10BDD9CC8669A60;// 0x1110(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24C7A2224056681A25735295B1FE5CE5;// 0x1138(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D1F5B444972BF04DCA0EA821FA48544;// 0x1160(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EF4D96184DC4B5EB3EC2B683ED8971B6;// 0x11D8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0307EEF4EA156CBC643708FEB892664;// 0x11F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F18D1E0C43682839D21DF9BD7D7079A7;// 0x1270(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB3A1D0C4A06A1949B21C0A806083678;// 0x1290(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8328AE824BABB079F602CB856905BF45;// 0x1308(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C4F807342C159B980AE5384BD051054;// 0x1328(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B070637A4FA14C2375EB4BB7E27F4F18;// 0x13A0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D86366044F0BAE183BECF68372D0CECE;// 0x13C0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5F2411894CEC879E3C1574A9F569B1B9;// 0x1470(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B5AD23E24AAA6F67668562AF6D5B1045;// 0x1510(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_890208C74515D3418B9359B7ED51E366;// 0x15B0(0x0078)
	bool                                               IsSelected;                                               // 0x1628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsArchetypePreview;                                       // 0x1629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x162A(0x0002) MISSED OFFSET
	struct FVector                                     InitialPostion;                                           // 0x162C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDeceased;                                               // 0x1638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Customizable_Create_Character_Male_AnimsBP.Customizable_Create_Character_Male_AnimsBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Male_AnimsBP_AnimGraphNode_TransitionResult_E3DC31024269B0E0A10BDD9CC8669A60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Male_AnimsBP_AnimGraphNode_SequencePlayer_F0307EEF4EA156CBC643708FEB892664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Male_AnimsBP_AnimGraphNode_SequencePlayer_EB3A1D0C4A06A1949B21C0A806083678();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Male_AnimsBP_AnimGraphNode_TransitionResult_3F778E1E499903F54BCF9C8432CFF316();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Male_AnimsBP_AnimGraphNode_TransitionResult_F7E540DC46AA552C2E238E94CF71B51B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_OnLeft();
	void AnimNotify_StopImmediately();
	void ExecuteUbergraph_Customizable_Create_Character_Male_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
