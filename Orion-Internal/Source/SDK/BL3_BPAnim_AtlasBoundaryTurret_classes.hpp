#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_AtlasBoundaryTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_AtlasBoundaryTurret.BPAnim_AtlasBoundaryTurret_C
// 0x0368 (0x08C8 - 0x0560)
class UBPAnim_AtlasBoundaryTurret_C : public UBoundaryTurretAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BD39F2DB463ECF7B6617A29F7845A248;      // 0x0568(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C3BD869846957F576378028D94391A4C;// 0x05B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6EE72F8744580EBE263E61A1E4C951A4;// 0x05F8(0x0198)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EA2F863F4CFAFAAA8583FA8455DAF55D;// 0x0790(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C1CE777492DFE6AE2B0E889FC8602D7;// 0x07D8(0x00F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_AtlasBoundaryTurret.BPAnim_AtlasBoundaryTurret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AtlasBoundaryTurret_AnimGraphNode_ModifyBone_6EE72F8744580EBE263E61A1E4C951A4();
	void ExecuteUbergraph_BPAnim_AtlasBoundaryTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
