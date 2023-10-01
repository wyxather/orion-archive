#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CharSelectStandInAuxiliaryActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CharSelectStandInAuxiliaryActor.BPAnim_CharSelectStandInAuxiliaryActor_C
// 0x01F0 (0x0630 - 0x0440)
class UBPAnim_CharSelectStandInAuxiliaryActor_C : public UStandInAuxiliaryActorAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8F83D60345977BC45A9C749C8A2F8F09;      // 0x0448(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9E81EEF34B4CFCE37E6D9A9295CDC500;      // 0x0490(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41AAF95847263A86E0724DA18FB84164;// 0x0540(0x00F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CharSelectStandInAuxiliaryActor.BPAnim_CharSelectStandInAuxiliaryActor_C");
		return ptr;
	}


	void ExecuteUbergraph_BPAnim_CharSelectStandInAuxiliaryActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
