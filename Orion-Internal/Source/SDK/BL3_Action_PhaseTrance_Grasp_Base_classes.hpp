#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Grasp_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C
// 0x00CF (0x0388 - 0x02B9)
class UAction_PhaseTrance_Grasp_Base_C : public UAction_Phasetrance_Common_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             GraspTargetQuery;                                         // 0x02C8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      PhaseGraspControlledMoveClass;                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C");
		return ptr;
	}


	void GetGraspDuration(float* Result);
	void GraspTarget(class AActor* GraspTarget);
	void HandleGraspTargetSearchFailed();
	void HandleGraspTargetFound(class AOakCharacter* GraspTarget);
	void PerformGraspFeedback();
	void FindInstantPhaseWebGraspTarget(class AOakCharacter** res);
	void Failure_08B09A8F480F3929252234B2AB30A873(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
	void Success_08B09A8F480F3929252234B2AB30A873(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
	void TriggerActionSkillReactDialogue();
	void TriggerActionSkillUseDialogue();
	void OnServerBegin(class AActor** Actor);
	void AN_PerformGraspStartRumble();
	void AN_PerformGraspStartCS();
	void PlayPhaseTranceHandEffects();
	void FindGraspTargetAsync();
	void ExecuteUbergraph_Action_PhaseTrance_Grasp_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
