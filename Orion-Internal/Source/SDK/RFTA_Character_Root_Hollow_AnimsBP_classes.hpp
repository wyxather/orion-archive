#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Hollow_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Root_Hollow_AnimsBP.Character_Root_Hollow_AnimsBP_C
// 0x1800 (0x22E0 - 0x0AE0)
class UCharacter_Root_Hollow_AnimsBP_C : public URemnantAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4AF40634F90B493BFF5F69E69832D7E;// 0x0AE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EA4D5994E99ABB1DBC51F93291122E5;// 0x0B10(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_93C6076640EB39590A1E0F8E7224D24B;// 0x0B38(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3EC9E9A24EA5CF22C2AC5D91377F2BEB;// 0x0C18(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6370F5240D8051F1550B1B0BACB9379;// 0x0C38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1F23F1F846A41DB383CE35B827436088;// 0x0CB0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F7EB6AA242537C8E788DF792CAA5D2C0;// 0x0CD0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D74E00B245F6CA3CB859878321286989;      // 0x0D80(0x0048)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_F8AB7E814CDA1E7F75FBE8A4D40B0513;// 0x0DC8(0x03C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_30F3A76640781D0AB167AC84EC2E7E0C;// 0x1188(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4790F31C4CD2683135400BAD854D6B12;// 0x1240(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A123CD004D2920AC476B8A84C5E53367;      // 0x1320(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_316F2E564BBABDCE0BE7DAB57C26407C;// 0x1368(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4704C3DA4E0705FB649653B24B419AA0;// 0x1420(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_026D72794CFA692A6C6C78A53BD441A1;// 0x1440(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BFE8FB85463424A501C1C693AAC96B85;// 0x1460(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B26830CC42415BCE152C9C85FA1963D9;// 0x1770(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_027842C44C589AFFDF29A083EB2E7046;// 0x1A80(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DD7F5B61412554350412BB92FBEBE3F9;// 0x1D90(0x0310)
	struct FAnimNode_Root                              AnimGraphNode_Root_45637FB648EC395C9779BCA52E2EAF67;      // 0x20A0(0x0020)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_25D5361D4B31F1E944B3399BB6ACAEDA;// 0x20C0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31A833C5485F38D75F2C3E8B17483000;// 0x2188(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_229DF8F045E32B7DEBB8F49EB1826892;// 0x21B0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E47ACF8D4B5D24B7218B8DB05E71E316;// 0x21D8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9AD152C54F4308D96AAD44AAC7F037C1;// 0x2290(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_02F5269541C77AD5212695846E31CE0F;// 0x22B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Root_Hollow_AnimsBP.Character_Root_Hollow_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Root_Hollow_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
