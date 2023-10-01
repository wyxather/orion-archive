#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Grasp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C
// 0x0008 (0x0390 - 0x0388)
class UAction_PhaseTrance_Grasp_C : public UAction_PhaseTrance_Grasp_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C");
		return ptr;
	}


	void DoDamageToImmuneTarget(class AActor* Enemey);
	void AnimNotify_CreateGraspingSphere();
	void HandleGraspTargetFound(class AOakCharacter** GraspTarget);
	void ExecuteUbergraph_Action_PhaseTrance_Grasp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
