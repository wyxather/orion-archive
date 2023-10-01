#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_WantedPosters_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_WantedPosters.Prologue_WantedPosters_C
// 0x000C (0x0484 - 0x0478)
class APrologue_WantedPosters_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	int                                                TinkTauntNumber;                                          // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_WantedPosters.Prologue_WantedPosters_C");
		return ptr;
	}


	void BndEvt__OakTriggerCapsule_Mission_ScoopersBully_Rakkspit_K2Node_ActorBoundEvent_4_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakMissionWaypoint_M_UnderwearTink_TinkLocation_K2Node_ActorBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakMissionWaypoint_M_UnderwearTink_TinkLocation_K2Node_ActorBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature(class AActor* LeavingActor, bool bIsPlayer);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_WantedPosters(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Prologue_WantedPosters(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
