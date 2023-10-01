#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxSpawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxSpawn.Spawner.SuspendAllActors
struct ASpawner_SuspendAllActors_Params
{
};

// Function GbxSpawn.Spawner.SetTeamOverride
struct ASpawner_SetTeamOverride_Params
{
	class UTeam*                                       OverrideTeam;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.Spawner.SetTeam
struct ASpawner_SetTeam_Params
{
	class UTeam*                                       NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.Spawner.SetAlwaysActive
struct ASpawner_SetAlwaysActive_Params
{
	bool                                               bInAlwaysActive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.Spawner.ResetSpawning
struct ASpawner_ResetSpawning_Params
{
};

// Function GbxSpawn.Spawner.OverrideSpawnerStyle
struct ASpawner_OverrideSpawnerStyle_Params
{
	class USpawnerStyle*                               NewSpawnerStyle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.Spawner.OnSpawningComplete
struct ASpawner_OnSpawningComplete_Params
{
	class ASpawner*                                    Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.Spawner.IsSpawnerEnabled
struct ASpawner_IsSpawnerEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.Spawner.IsFinishedSpawning
struct ASpawner_IsFinishedSpawning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.Spawner.GetSpawnPointComponent
struct ASpawner_GetSpawnPointComponent_Params
{
	class USpawnPointComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxSpawn.Spawner.GetSpawnerTeamComponent
struct ASpawner_GetSpawnerTeamComponent_Params
{
	class USpawnerTeamComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxSpawn.Spawner.GetSpawnerLinkComponent
struct ASpawner_GetSpawnerLinkComponent_Params
{
	class USpawnerLinkComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxSpawn.Spawner.GetSpawnerComponent
struct ASpawner_GetSpawnerComponent_Params
{
	class USpawnerComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxSpawn.Spawner.GetNumAliveActors
struct ASpawner_GetNumAliveActors_Params
{
	bool                                               bIncludeExternal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.Spawner.EnableSpawner
struct ASpawner_EnableSpawner_Params
{
};

// Function GbxSpawn.Spawner.DisableSpawner
struct ASpawner_DisableSpawner_Params
{
};

// Function GbxSpawn.Spawner.DestroyAllActors
struct ASpawner_DestroyAllActors_Params
{
};

// Function GbxSpawn.Spawner.CompleteScriptedWarmup
struct ASpawner_CompleteScriptedWarmup_Params
{
};

// Function GbxSpawn.Spawner.AreAllDead
struct ASpawner_AreAllDead_Params
{
	bool                                               bIncludeExternal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.SuspendAllActors
struct USpawnerComponent_SuspendAllActors_Params
{
};

// Function GbxSpawn.SpawnerComponent.SetTeam
struct USpawnerComponent_SetTeam_Params
{
	class UTeam*                                       NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.SetSpawnOptions
struct USpawnerComponent_SetSpawnOptions_Params
{
	class USpawnOptionData*                            NewSpawnOptions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.ResetSpawning
struct USpawnerComponent_ResetSpawning_Params
{
};

// Function GbxSpawn.SpawnerComponent.OverrideSpawnerStyle
struct USpawnerComponent_OverrideSpawnerStyle_Params
{
	class USpawnerStyle*                               NewSpawnerStyle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.IsSpawnerStyleClassAllowed
struct USpawnerComponent_IsSpawnerStyleClassAllowed_Params
{
	class UClass*                                      SpawnerStyleClass;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.IsFinishedSpawning
struct USpawnerComponent_IsFinishedSpawning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.IncludeExternalActorsForAllDiedEvent
struct USpawnerComponent_IncludeExternalActorsForAllDiedEvent_Params
{
};

// Function GbxSpawn.SpawnerComponent.GetSpawnOptions
struct USpawnerComponent_GetSpawnOptions_Params
{
	class USpawnOptionData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.GetParentSpawner
struct USpawnerComponent_GetParentSpawner_Params
{
	class USpawnerComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.GetNumSuspendedActors
struct USpawnerComponent_GetNumSuspendedActors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.GetNumSpawnedActors
struct USpawnerComponent_GetNumSpawnedActors_Params
{
	bool                                               bIncludeExternal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInGroup;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.GetNumDeadActors
struct USpawnerComponent_GetNumDeadActors_Params
{
	bool                                               bIncludeExternal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInGroup;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.GetNumAliveActors
struct USpawnerComponent_GetNumAliveActors_Params
{
	bool                                               bIncludeExternal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInGroup;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerComponent.GetAliveActors
struct USpawnerComponent_GetAliveActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxSpawn.SpawnerComponent.EnableSpawner
struct USpawnerComponent_EnableSpawner_Params
{
};

// Function GbxSpawn.SpawnerComponent.DisableSpawner
struct USpawnerComponent_DisableSpawner_Params
{
};

// Function GbxSpawn.SpawnerComponent.DestroyAllActors
struct USpawnerComponent_DestroyAllActors_Params
{
};

// Function GbxSpawn.SpawnerComponent.CompleteScriptedWarmup
struct USpawnerComponent_CompleteScriptedWarmup_Params
{
};

// Function GbxSpawn.SpawnerComponent.AreAllDead
struct USpawnerComponent_AreAllDead_Params
{
	bool                                               bIncludeExternal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInGroup;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnPoint.SetSpawnStyleTag
struct ASpawnPoint_SetSpawnStyleTag_Params
{
	struct FGameplayTag                                NewTag;                                                   // (Parm)
};

// Function GbxSpawn.SpawnPoint.ResetStretchPoint
struct ASpawnPoint_ResetStretchPoint_Params
{
};

// Function GbxSpawn.SpawnPoint.GetSpawnStyleTag
struct ASpawnPoint_GetSpawnStyleTag_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxSpawn.SpawnPoint.EnableSpawnPoint
struct ASpawnPoint_EnableSpawnPoint_Params
{
};

// Function GbxSpawn.SpawnPoint.DisableSpawnPoint
struct ASpawnPoint_DisableSpawnPoint_Params
{
};

// Function GbxSpawn.GbxAction_SpawnAnim.K2_GetSpawnPoint
struct UGbxAction_SpawnAnim_K2_GetSpawnPoint_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnDLCScript.OnAllSpawned
struct USpawnDLCScript_OnAllSpawned_Params
{
	class USpawnerComponent*                           SpawnerComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxSpawn.SpawnDLCScript.OnAllDied
struct USpawnDLCScript_OnAllDied_Params
{
	class USpawnerComponent*                           SpawnerComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxSpawn.SpawnDLCScript.OnActorSpawned
struct USpawnDLCScript_OnActorSpawned_Params
{
	class USpawnerComponent*                           SpawnerComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnDLCScript.OnActorDied
struct USpawnDLCScript_OnActorDied_Params
{
	class USpawnerComponent*                           SpawnerComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.SuspendSpawnedActors
struct USpawnerBlueprintLibrary_SuspendSpawnedActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsTransform
struct USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsTransform_Params
{
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USpawnOptionData*                            SpawnOptions;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsAsync
struct USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsAsync_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnManagerAsyncRequest                   Request;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptions
struct USpawnerBlueprintLibrary_SpawnActorWithSpawnOptions_Params
{
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USpawnOptionData*                            SpawnOptions;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USpawnPointComponent*                        SpawnPointComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawner
struct USpawnerBlueprintLibrary_SpawnActorWithSpawner_Params
{
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USpawnFactory*                               Factory;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USpawnPointComponent*                        SpawnPointComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnerComponent*                           SpawnerComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.SetMaxSpawnCost
struct USpawnerBlueprintLibrary_SetMaxSpawnCost_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewMaxSpawnCost;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.RestoreSuspendedActors
struct USpawnerBlueprintLibrary_RestoreSuspendedActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.RemoveActorFromSpawnSystem
struct USpawnerBlueprintLibrary_RemoveActorFromSpawnSystem_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerBlueprintLibrary.CancelSpawnActorWithOptionsAsyncRequest
struct USpawnerBlueprintLibrary_CancelSpawnActorWithOptionsAsyncRequest_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnerStyleFactory_Bunch.IsFactoryClassAllowed
struct USpawnerStyleFactory_Bunch_IsFactoryClassAllowed_Params
{
	class UClass*                                      FactoryClass;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerStyleFactory_Den.IsFactoryClassAllowed
struct USpawnerStyleFactory_Den_IsFactoryClassAllowed_Params
{
	class UClass*                                      FactoryClass;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnerStyleFactory_Single.IsFactoryClassAllowed
struct USpawnerStyleFactory_Single_IsFactoryClassAllowed_Params
{
	class UClass*                                      FactoryClass;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnFactory_Generic.ShouldSkipActorProperty
struct USpawnFactory_Generic_ShouldSkipActorProperty_Params
{
	class UProperty*                                   ActorProperty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnManager.ActorDestroyed
struct USpawnManager_ActorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxSpawn.SpawnPointComponent.SetSpawnStyleTag
struct USpawnPointComponent_SetSpawnStyleTag_Params
{
	struct FGameplayTag                                NewTag;                                                   // (Parm)
};

// Function GbxSpawn.SpawnPointComponent.ResetStretchPoint
struct USpawnPointComponent_ResetStretchPoint_Params
{
};

// Function GbxSpawn.SpawnPointComponent.HasSpawnAITreeTag
struct USpawnPointComponent_HasSpawnAITreeTag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnPointComponent.GetStretchyPoint
struct USpawnPointComponent_GetStretchyPoint_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxSpawn.SpawnPointComponent.GetSpawnStyleTag
struct USpawnPointComponent_GetSpawnStyleTag_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxSpawn.SpawnPointComponent.GetSpawnAITreeTag
struct USpawnPointComponent_GetSpawnAITreeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxSpawn.SpawnPointComponent.EnableSpawnPoint
struct USpawnPointComponent_EnableSpawnPoint_Params
{
};

// Function GbxSpawn.SpawnPointComponent.DisableSpawnPoint
struct USpawnPointComponent_DisableSpawnPoint_Params
{
};

// Function GbxSpawn.SpawnPreviewComponent.OnReplayAction
struct USpawnPreviewComponent_OnReplayAction_Params
{
};

// Function GbxSpawn.SpawnPreviewComponent.OnCycleActor
struct USpawnPreviewComponent_OnCycleActor_Params
{
	ECycleDirection                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
