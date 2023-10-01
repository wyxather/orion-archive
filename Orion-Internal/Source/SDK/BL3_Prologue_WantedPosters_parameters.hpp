#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_WantedPosters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Prologue_WantedPosters.Prologue_WantedPosters_C.BndEvt__OakTriggerCapsule_Mission_ScoopersBully_Rakkspit_K2Node_ActorBoundEvent_4_OakTouchedTriggerDelegate__DelegateSignature
struct APrologue_WantedPosters_C_BndEvt__OakTriggerCapsule_Mission_ScoopersBully_Rakkspit_K2Node_ActorBoundEvent_4_OakTouchedTriggerDelegate__DelegateSignature_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Prologue_WantedPosters.Prologue_WantedPosters_C.BndEvt__OakMissionWaypoint_M_UnderwearTink_TinkLocation_K2Node_ActorBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature
struct APrologue_WantedPosters_C_BndEvt__OakMissionWaypoint_M_UnderwearTink_TinkLocation_K2Node_ActorBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Prologue_WantedPosters.Prologue_WantedPosters_C.BndEvt__OakMissionWaypoint_M_UnderwearTink_TinkLocation_K2Node_ActorBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature
struct APrologue_WantedPosters_C_BndEvt__OakMissionWaypoint_M_UnderwearTink_TinkLocation_K2Node_ActorBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Params
{
	class AActor*                                      LeavingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_WantedPosters.Prologue_WantedPosters_C.BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_WantedPosters
struct APrologue_WantedPosters_C_BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_WantedPosters_Params
{
	struct FMissionObjectiveReference                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_WantedPosters.Prologue_WantedPosters_C.ExecuteUbergraph_Prologue_WantedPosters
struct APrologue_WantedPosters_C_ExecuteUbergraph_Prologue_WantedPosters_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
