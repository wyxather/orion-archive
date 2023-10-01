#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_PS_VLA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_PS_VLA.BPAnim_PS_VLA_C
// 0x06B8 (0x0B48 - 0x0490)
class UBPAnim_PS_VLA_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_211C2640476D00732655E598561942D7;      // 0x0498(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5599A68646A093252E2C88A5D31BAAC6;      // 0x04E0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3662D8F64D1BED0E996257ACADC3C689;      // 0x0590(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3A71AA2B4971C95DC531B097494A14AC;// 0x0640(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3757A8B8485639D398DD2797BBB1AAE7;      // 0x0760(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_36DA10BA418E27BC8989DBB463E09580;// 0x0810(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_725558354C219365B9D739801201BCA3;// 0x0890(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EEC5598D4FEE3EDABDD5ADA324D74B7E;// 0x0910(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_694E37CC444E93954DAF59BDD24CB7BE;// 0x0990(0x0120)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F3B7A5A847CA3B86C31549A4B00B2D89;// 0x0AB0(0x0080)
	class ABPWeap_VLA_BaseWeapon_C*                    BaseWeapon;                                               // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               IdleAnim;                                                 // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               MagPose;                                                  // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_PS_VLA.BPAnim_PS_VLA_C");
		return ptr;
	}


	void UpdateMagIdle(float BaseWeapon);
	void UpdateIdleAnim(int UseMode);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_F3B7A5A847CA3B86C31549A4B00B2D89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_EEC5598D4FEE3EDABDD5ADA324D74B7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_725558354C219365B9D739801201BCA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_36DA10BA418E27BC8989DBB463E09580();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int* NewMode);
	void CheckClipIndex();
	void ExecuteUbergraph_BPAnim_PS_VLA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
