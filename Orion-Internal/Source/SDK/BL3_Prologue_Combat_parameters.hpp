#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_Combat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Prologue_Combat.Prologue_Combat_C.ResetSpawnerIfAllAreDead
struct APrologue_Combat_C_ResetSpawnerIfAllAreDead_Params
{
	class AOakSpawner*                                 SpawnerToEvaluate;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.OnCompleted_D8CA171E4B6231997D2B44A057502A49
struct APrologue_Combat_C_OnCompleted_D8CA171E4B6231997D2B44A057502A49_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.OnAborted_D8CA171E4B6231997D2B44A057502A49
struct APrologue_Combat_C_OnAborted_D8CA171E4B6231997D2B44A057502A49_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.OnCompleted_262B7C864039379B93683583D8DA0D8B
struct APrologue_Combat_C_OnCompleted_262B7C864039379B93683583D8DA0D8B_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.OnAborted_262B7C864039379B93683583D8DA0D8B
struct APrologue_Combat_C_OnAborted_262B7C864039379B93683583D8DA0D8B_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.OnCompleted_564ECBCE402F604C41A869ACEC2FC00C
struct APrologue_Combat_C_OnCompleted_564ECBCE402F604C41A869ACEC2FC00C_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.OnAborted_564ECBCE402F604C41A869ACEC2FC00C
struct APrologue_Combat_C_OnAborted_564ECBCE402F604C41A869ACEC2FC00C_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakSpawner_SunSmasher_K2Node_ActorBoundEvent_0_SpawnerEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakSpawner_SunSmasher_K2Node_ActorBoundEvent_0_SpawnerEvent__DelegateSignature_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakTriggerVolume_2_K2Node_ActorBoundEvent_6_OakTouchedTriggerDelegate__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakTriggerVolume_2_K2Node_ActorBoundEvent_6_OakTouchedTriggerDelegate__DelegateSignature_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakTriggerBox3-BoatCamp-MoveBanditsTrigger_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakTriggerBox3_BoatCamp_MoveBanditsTrigger_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__SpawnMesh_Sunsmasher_884_K2Node_ActorBoundEvent_3_SpawnPointEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__SpawnMesh_Sunsmasher_884_K2Node_ActorBoundEvent_3_SpawnPointEvent__DelegateSignature_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__SpawnMesh_Sunsmasher_3_K2Node_ActorBoundEvent_4_SpawnPointEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__SpawnMesh_Sunsmasher_3_K2Node_ActorBoundEvent_4_SpawnPointEvent__DelegateSignature_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__SpawnMesh_DoorSmall_382_K2Node_ActorBoundEvent_5_SpawnPointEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__SpawnMesh_DoorSmall_382_K2Node_ActorBoundEvent_5_SpawnPointEvent__DelegateSignature_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.CE_AreAllDeadSectionOneBoat
struct APrologue_Combat_C_CE_AreAllDeadSectionOneBoat_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.CD_AreAllDeadSectionTwoBoat
struct APrologue_Combat_C_CD_AreAllDeadSectionTwoBoat_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.CD_AreAllDeadSectionThreeBoat
struct APrologue_Combat_C_CD_AreAllDeadSectionThreeBoat_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.MRE_CheckForSkags
struct APrologue_Combat_C_MRE_CheckForSkags_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakMissionSpawner_PowerfulConnections_Skags_K2Node_ActorBoundEvent_9_SpawnerDoneEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakMissionSpawner_PowerfulConnections_Skags_K2Node_ActorBoundEvent_9_SpawnerDoneEvent__DelegateSignature_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakMissionSpawner_SkagCampOutsideRecruitment_1_K2Node_ActorBoundEvent_2_SpawnerDoneEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakMissionSpawner_SkagCampOutsideRecruitment_1_K2Node_ActorBoundEvent_2_SpawnerDoneEvent__DelegateSignature_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakSpawner_40_K2Node_ActorBoundEvent_7_SpawnerDoneEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakSpawner_40_K2Node_ActorBoundEvent_7_SpawnerDoneEvent__DelegateSignature_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature_UNIX1555328363
struct APrologue_Combat_C_BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature_UNIX1555328363_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature_UNIX1555328373
struct APrologue_Combat_C_BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature_UNIX1555328373_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakSpawnPoint_Undertaker_K2Node_ActorBoundEvent_8_SpawnPointEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakSpawnPoint_Undertaker_K2Node_ActorBoundEvent_8_SpawnPointEvent__DelegateSignature_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.MRE_SpawnSuccSkags
struct APrologue_Combat_C_MRE_SpawnSuccSkags_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__OakMissionSpawner_DumpTruck_K2Node_ActorBoundEvent_16_SpawnerEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__OakMissionSpawner_DumpTruck_K2Node_ActorBoundEvent_16_SpawnerEvent__DelegateSignature_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.CE_WasButtholed
struct APrologue_Combat_C_CE_WasButtholed_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.MRE_ResetCoVSpawner
struct APrologue_Combat_C_MRE_ResetCoVSpawner_Params
{
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__SpawnMesh_SkagDen_660_K2Node_ActorBoundEvent_17_SpawnPointEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__SpawnMesh_SkagDen_660_K2Node_ActorBoundEvent_17_SpawnPointEvent__DelegateSignature_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__SpawnMesh_SkagDen_660_K2Node_ActorBoundEvent_18_SpawnPointEvent__DelegateSignature
struct APrologue_Combat_C_BndEvt__SpawnMesh_SkagDen_660_K2Node_ActorBoundEvent_18_SpawnPointEvent__DelegateSignature_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Combat
struct APrologue_Combat_C_BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Combat_Params
{
	struct FMissionObjectiveReference                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prologue_Combat.Prologue_Combat_C.ExecuteUbergraph_Prologue_Combat
struct APrologue_Combat_C_ExecuteUbergraph_Prologue_Combat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
