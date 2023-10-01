#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_AR_VLA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_AR_VLA.BPAnim_AR_VLA_C
// 0x06B0 (0x0B40 - 0x0490)
class UBPAnim_AR_VLA_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0498(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4404B80B4EBC5794F62FCC8E30BEFA93;      // 0x04A0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_56EE15FF44005EB38C97E0AD4C4A8C9D;      // 0x0550(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BDFD24ED4C995256F0056FB5140615E2;// 0x0600(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E83140AA4D42D08350AE8DA1AEE5160E;// 0x0720(0x0120)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_136E08DB4608096D09E3028BB6C8AC5D;// 0x0840(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0D09AD044C86E387EB5D43A870303732;      // 0x08C0(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8A91256A457E6BCDAD8D809F098BDAF1;// 0x0970(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_196B83E448EF1A14456FB98276E2B794;// 0x09F0(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2AFD3CDB48561E12A5B134AD40E0ED2F;// 0x0A70(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_Root_44CC04C34F62013B6499E29AA0B146ED;      // 0x0AF0(0x0048)
	class UAnimSequence*                               BarrelPoseIdle;                                           // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_AR_VLA.BPAnim_AR_VLA_C");
		return ptr;
	}


	void UpdateBarrelPose();
	void UpdateForegripPose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_2AFD3CDB48561E12A5B134AD40E0ED2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_196B83E448EF1A14456FB98276E2B794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_8A91256A457E6BCDAD8D809F098BDAF1();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int* NewMode);
	void ExecuteUbergraph_BPAnim_AR_VLA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
