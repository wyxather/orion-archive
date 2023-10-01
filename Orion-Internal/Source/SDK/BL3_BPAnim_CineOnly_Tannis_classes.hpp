#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Tannis_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CineOnly_Tannis.BPAnim_CineOnly_Tannis_C
// 0x0CD8 (0x1118 - 0x0440)
class UBPAnim_CineOnly_Tannis_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CFEBA58846D1FFB151846A92EBF3DCD3;      // 0x0448(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C7F945F24E39FB7B317AB7B3335BB981;      // 0x0490(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_121F09EF42AF88637BD018963F522E8B;// 0x0540(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_F56EF5804A5B8979DD8DA2AF23FD03F7; // 0x0590(0x0290)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0F69056744D10E867F3FD19DABF98B13;// 0x0820(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0868(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C3694B614ED8015620F7D1B47C6EC996;      // 0x0870(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_41A105C042BC46931F3801887B95C7F8;// 0x0920(0x0038)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0958(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_776954C84627E825AC2987990483C4A1; // 0x0960(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3B2D670742766B4584DAEFAC4F2EE139; // 0x0BF0(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_64D6DE7B4F0ABC2B5DAE1F9EDE46E154; // 0x0E80(0x0290)
	float                                              FootIKOverride;                                           // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandIKOverride;                                           // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CineOnly_Tannis.BPAnim_CineOnly_Tannis_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tannis_AnimGraphNode_TwoBoneIK_64D6DE7B4F0ABC2B5DAE1F9EDE46E154();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tannis_AnimGraphNode_TwoBoneIK_3B2D670742766B4584DAEFAC4F2EE139();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tannis_AnimGraphNode_TwoBoneIK_776954C84627E825AC2987990483C4A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tannis_AnimGraphNode_TwoBoneIK_F56EF5804A5B8979DD8DA2AF23FD03F7();
	void ExecuteUbergraph_BPAnim_CineOnly_Tannis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
