#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Customizable_Create_Character_Female_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Customizable_Create_Character_Female_AnimsBP.Customizable_Create_Character_Female_AnimsBP_C
// 0x0B89 (0x1639 - 0x0AB0)
class UCustomizable_Create_Character_Female_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F6197D58437CD9AF54D96AAFAD19624C;      // 0x0AB8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A85690541017B8BBEEEE7BAEB5F4080;// 0x0AD8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C7C8847D43E996D4682169948C943138;// 0x0B50(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_491C46E648B48ACF73BF19A7CD6DD2F1;// 0x0BC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6877B2A647DF826A417C378C20319792;// 0x0C10(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57CD8631485C85C4E7ABC1BCDCA9A45B;// 0x0C88(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_607CBDFF4DFEC4BD017887BA9707A31A;// 0x0D00(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9159433A436FD6EE390A24B749964214;// 0x0D78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_737616B5441C98C5459C729C7FFC193A;// 0x0DA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B25F85147C3C30B642BCAA3D101211F;// 0x0DC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_902249184B521A3725F987857685CCE0;// 0x0DF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A2BE02CD4E37A1089FB64891EDE683E3;// 0x0E18(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF716E314BA82C185D11FDAC0708E8EE;// 0x0E40(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C565AC2646AF3EE257742C9B45800260;// 0x0EB8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52EF3ADC45BAC73D76B33380D0C21860;// 0x0ED8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_940CF7B745999EC8431E7189D2D2C00B;// 0x0F50(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25B6FCE24A1A80FAC35F2DA0F01E521D;// 0x0F70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8672D9F74D50A657A6C8D2945CD69F28;// 0x0FE8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FAAF8D44467AE7C5D00ABEB276E016AA;// 0x1008(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7F071FC746CF0790E4DF42ADDAA57C46;// 0x1080(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D0E10F0245E5A8F2007F9CA7D94D88C6;// 0x10A0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3FE11B33488F937F728A83AE7F596C10;// 0x1150(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DC183E04FFA63175EA4B8A1B626986E;// 0x11F0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4B0AE57A4FE274151584C88D89D24B0E;// 0x1268(0x0078)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_58787FF946A1A5F6A6914FBC47B27649;// 0x12E0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5515BED0495BF2EC15F249AACCC87F12;// 0x13A8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D59AF6E40D990548C13B688237E93BC;// 0x1420(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29AE4FD143B57094DAECC78AF6A26A6B;// 0x1498(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0C62CDD84FAD8F842C6A979C6761B839;// 0x1510(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D6FE40A5493F9DB70C69B69AF83CC58C;// 0x15B0(0x0078)
	bool                                               IsSelected;                                               // 0x1628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsArchetypePreview;                                       // 0x1629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x162A(0x0002) MISSED OFFSET
	struct FVector                                     InitialPostion;                                           // 0x162C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDeceased;                                               // 0x1638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Customizable_Create_Character_Female_AnimsBP.Customizable_Create_Character_Female_AnimsBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Female_AnimsBP_AnimGraphNode_SequencePlayer_52EF3ADC45BAC73D76B33380D0C21860();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Female_AnimsBP_AnimGraphNode_TransitionResult_902249184B521A3725F987857685CCE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Female_AnimsBP_AnimGraphNode_SequencePlayer_25B6FCE24A1A80FAC35F2DA0F01E521D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Female_AnimsBP_AnimGraphNode_TransitionResult_737616B5441C98C5459C729C7FFC193A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Customizable_Create_Character_Female_AnimsBP_AnimGraphNode_TransitionResult_5B25F85147C3C30B642BCAA3D101211F();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_OnLeft();
	void AnimNotify_StopImmediately();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_Customizable_Create_Character_Female_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
