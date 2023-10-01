#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_SM_TED_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_SM_TED.BPAnim_SM_TED_C
// 0x0500 (0x0990 - 0x0490)
class UBPAnim_SM_TED_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1E269D40484A263C74B2D584401B33B9;      // 0x0498(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1BC91C774C988B9D1C607480B63D80DC;      // 0x04E0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1B150CB348131850F4F621849A24D4C9;      // 0x0590(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5008A3B2469902A8EE12ED9117B925EF;// 0x0640(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_377E8DC84651CB4702C23E8D29BAE715;      // 0x0760(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A43AD6D84396064FBC54F3AB71B1984F;// 0x0810(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087;// 0x0890(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D;// 0x0910(0x0080)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SM_TED.BPAnim_SM_TED_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087();
	void ExecuteUbergraph_BPAnim_SM_TED(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
