#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_IronBear_GunnersNest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C
// 0x0368 (0x07C8 - 0x0460)
class UBPAnim_IronBear_GunnersNest_C : public UIronBearGunnersNestAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_76D720724342E12D36C3058BEB8A530F;      // 0x0468(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_84B2D94D4A086EA95256C6A807F909F6;// 0x04B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685;// 0x04F8(0x0198)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1632711C4AEF1582B7805690390EE276;// 0x0690(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06D8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B6C1389D4979439FD1FC8A95ED06C8E6;      // 0x06E0(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_54A263B14835BE311B712BA8AB2A7429;// 0x0790(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685();
	void ExecuteUbergraph_BPAnim_IronBear_GunnersNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
