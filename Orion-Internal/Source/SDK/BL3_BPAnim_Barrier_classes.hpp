#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Barrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Barrier.BPAnim_Barrier_C
// 0x0470 (0x0DC0 - 0x0950)
class UBPAnim_Barrier_C : public UGbxCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1D2AC41E44832D357F14E191248774D2;      // 0x0958(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15E604304714A8B16EC9A8A200DB4AF3;      // 0x09A0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1F86BBC942013BE61D4456B17A436A05;      // 0x0A50(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_791503554BC0B6773CE151ABD9121744;      // 0x0B00(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4CE67FC143929C4DAE8BACB479D4BD97;      // 0x0BB0(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7;// 0x0C60(0x0160)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Barrier.BPAnim_Barrier_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7();
	void AnimNotify_EnableGraphLocomotion();
	void AnimNotify_DisableGraphLocomotion();
	void ExecuteUbergraph_BPAnim_Barrier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
