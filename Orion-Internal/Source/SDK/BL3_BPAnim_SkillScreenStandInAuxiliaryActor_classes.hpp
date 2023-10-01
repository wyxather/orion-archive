#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_SkillScreenStandInAuxiliaryActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_SkillScreenStandInAuxiliaryActor.BPAnim_SkillScreenStandInAuxiliaryActor_C
// 0x01F0 (0x0630 - 0x0440)
class UBPAnim_SkillScreenStandInAuxiliaryActor_C : public UStandInAuxiliaryActorAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D003D39C47BE8D042AD24FA2CDDBA2CF;      // 0x0448(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AD9A579743366EB5476B07AD8D931FD7;      // 0x0490(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C4097C64CAE1A8084FC108BDDB511D3;// 0x0540(0x00F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SkillScreenStandInAuxiliaryActor.BPAnim_SkillScreenStandInAuxiliaryActor_C");
		return ptr;
	}


	void ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
