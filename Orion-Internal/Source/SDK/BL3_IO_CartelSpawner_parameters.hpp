#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_CartelSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_CartelSpawner.IO_CartelSpawner_C.SetSpawnedEnemyProvoke
struct AIO_CartelSpawner_C_SetSpawnedEnemyProvoke_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.HandleTestmapEnemySpawns
struct AIO_CartelSpawner_C_HandleTestmapEnemySpawns_Params
{
	TEnumAsByte<ECartelSpawnerType>                    SpawnType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.CheckForSpawnCollisions
struct AIO_CartelSpawner_C_CheckForSpawnCollisions_Params
{
	struct FVector                                     CapsulePos;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CanSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelFX
struct AIO_CartelSpawner_C_SpawnCartelFX_Params
{
	struct FVector                                     BackupFX_Location;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.InitCartelIO
struct AIO_CartelSpawner_C_InitCartelIO_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnNewKillSquadMember
struct AIO_CartelSpawner_C_SpawnNewKillSquadMember_Params
{
	class USpawnOptionData*                            SpawnOptions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECartelSpawnerType>                    SpawnType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.BeginCleanup
struct AIO_CartelSpawner_C_BeginCleanup_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.UpdateCartelMission
struct AIO_CartelSpawner_C_UpdateCartelMission_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.UserConstructionScript
struct AIO_CartelSpawner_C_UserConstructionScript_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50
struct AIO_CartelSpawner_C_GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50
struct AIO_CartelSpawner_C_GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.ReceiveBeginPlay
struct AIO_CartelSpawner_C_ReceiveBeginPlay_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelKillSquad
struct AIO_CartelSpawner_C_SpawnCartelKillSquad_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnUnderbossWithAllies
struct AIO_CartelSpawner_C_SpawnUnderbossWithAllies_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.StartAsyncSpawnTrace
struct AIO_CartelSpawner_C_StartAsyncSpawnTrace_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.DoStartupPresentation
struct AIO_CartelSpawner_C_DoStartupPresentation_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_Underboss
struct AIO_CartelSpawner_C_OnAllDied_Underboss_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_ThugSpawner
struct AIO_CartelSpawner_C_OnAllDied_ThugSpawner_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Underboss
struct AIO_CartelSpawner_C_OnSuspend_Underboss_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Thug
struct AIO_CartelSpawner_C_OnSuspend_Thug_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.BeginFailsafeTimer
struct AIO_CartelSpawner_C_BeginFailsafeTimer_Params
{
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_ThugSpawner
struct AIO_CartelSpawner_C_OnSpawned_ThugSpawner_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_Underboss
struct AIO_CartelSpawner_C_OnSpawned_Underboss_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_CartelSpawner.IO_CartelSpawner_C.ExecuteUbergraph_IO_CartelSpawner
struct AIO_CartelSpawner_C_ExecuteUbergraph_IO_CartelSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
