#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Vaughn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CineOnly_Vaughn.BPAnim_CineOnly_Vaughn_C
// 0x0CD8 (0x1118 - 0x0440)
class UBPAnim_CineOnly_Vaughn_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B6FE859A4EA8B9AF9B5CB4973C19611F;      // 0x0448(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_10C8822049F4384E6A4D29A0EBD8494F;      // 0x0490(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BED9B4E641E3BBF957F546B99812ADC1;// 0x0540(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_0A03BDDC42F9E8022351868FD643D14F; // 0x0590(0x0290)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_990C27B144D7408E948D9288A2449BE8;// 0x0820(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0868(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15837E0C49F19568BE08A091AE5B3D41;      // 0x0870(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2FF8D59B44B15533EA4C1A864006D8E6;// 0x0920(0x0038)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0958(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_BCB10B214C67864409CDE3933105C3F7; // 0x0960(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_0644B1E54B4F69ADA1BC3B964BA1094C; // 0x0BF0(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_F1D36792423D2B2671C69691B20238F8; // 0x0E80(0x0290)
	float                                              FootIKOverride;                                           // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandIKOverride;                                           // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CineOnly_Vaughn.BPAnim_CineOnly_Vaughn_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Vaughn_AnimGraphNode_TwoBoneIK_F1D36792423D2B2671C69691B20238F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Vaughn_AnimGraphNode_TwoBoneIK_0644B1E54B4F69ADA1BC3B964BA1094C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Vaughn_AnimGraphNode_TwoBoneIK_BCB10B214C67864409CDE3933105C3F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Vaughn_AnimGraphNode_TwoBoneIK_0A03BDDC42F9E8022351868FD643D14F();
	void ExecuteUbergraph_BPAnim_CineOnly_Vaughn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
