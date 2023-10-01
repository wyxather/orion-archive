#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Root_Broken_AnimsBP.Character_Root_Broken_AnimsBP_C
// 0x0C1C (0x16FC - 0x0AE0)
class UCharacter_Root_Broken_AnimsBP_C : public URemnantAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_40DB261141C771BF1D844889A13E5931;      // 0x0AE8(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_31B959514660D93FB652D5B4447593CB;      // 0x0B08(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F4F0B74B4ED2A0756FB0B7BC7B710A97;      // 0x0B50(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1003924C4CF21E978D652BA01C28AFF9;// 0x0B98(0x00B8)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_7268AE024808A49FA4778F8DA996F808;// 0x0C50(0x03C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_868B4B56444DF0E4981079A2793A9946;// 0x1010(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A9020E484EE6F1E82A4435857D455AF1;// 0x10C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_38BCFEAA493D4EABC0C315967993C9A3;// 0x10F0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9FE46150449A746C542274B59553546F;// 0x1118(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E492DC20468D6E8075FCE393D0A563D7;// 0x11F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_990E1176471B42393E97FDB67565F1E1;// 0x1220(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0BFD29F648125C04188C84A6984B5664;// 0x1248(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_066A7AFA44C5B495C22FABBC0A120330;// 0x1328(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9FF5D354257CD8BCBA47FAD4306C9EE;// 0x1348(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6FBA6DD54D35AEE13A6E768D0231B7B9;// 0x13C0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C840EDC946F193F3975ED1A53ABBA84B;// 0x13E0(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_8FB4EA2240D399933AD7539F529590B3;// 0x1490(0x0188)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7FA3230D4A965F5EA33AFCBEF7566406;// 0x1618(0x00E0)
	float                                              Gravity;                                                  // 0x16F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Root_Broken_AnimsBP.Character_Root_Broken_AnimsBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Character_Root_Broken_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
