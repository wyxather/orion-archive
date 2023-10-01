#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Lilith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CineOnly_Lilith.BPAnim_CineOnly_Lilith_C
// 0x0CD8 (0x1118 - 0x0440)
class UBPAnim_CineOnly_Lilith_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3859B29046EBC20061E53DAA0014391C;      // 0x0448(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4126ED444F827B475A0057A4B5B89C54;      // 0x0490(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9DD14F6B44EF41E85314E695BABBB72E;// 0x0540(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6FD9D845498835A8AD3E67B5B609C409; // 0x0590(0x0290)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9C3B00B849B7417806BC10A39782103A;// 0x0820(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0868(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CFD25C0649C912C7A52CA8A229020E1F;      // 0x0870(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_41A513B34E4542857E932F92E7E6196F;// 0x0920(0x0038)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0958(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_40F79FE246AD64A588F248B005C09BE8; // 0x0960(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_7ACE1F02408CD8006EF71788F5F7CC07; // 0x0BF0(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_64C1C08547649621C08398AA8A1F0AF9; // 0x0E80(0x0290)
	float                                              FootIKOverride;                                           // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandIKOverride;                                           // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CineOnly_Lilith.BPAnim_CineOnly_Lilith_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Lilith_AnimGraphNode_TwoBoneIK_64C1C08547649621C08398AA8A1F0AF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Lilith_AnimGraphNode_TwoBoneIK_7ACE1F02408CD8006EF71788F5F7CC07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Lilith_AnimGraphNode_TwoBoneIK_40F79FE246AD64A588F248B005C09BE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Lilith_AnimGraphNode_TwoBoneIK_6FD9D845498835A8AD3E67B5B609C409();
	void ExecuteUbergraph_BPAnim_CineOnly_Lilith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
