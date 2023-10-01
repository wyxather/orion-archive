#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnPoint_IO_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpawnPoint_IO.SpawnPoint_IO_C.UserConstructionScript
struct ASpawnPoint_IO_C_UserConstructionScript_Params
{
};

// Function SpawnPoint_IO.SpawnPoint_IO_C.ReceiveBeginPlay
struct ASpawnPoint_IO_C_ReceiveBeginPlay_Params
{
};

// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorDied
struct ASpawnPoint_IO_C_IOSpawner_ActorDied_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorSpawned
struct ASpawnPoint_IO_C_IOSpawner_ActorSpawned_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorFracture
struct ASpawnPoint_IO_C_IOSpawner_ActorFracture_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorDestroyed
struct ASpawnPoint_IO_C_IOSpawner_ActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnPoint_IO.SpawnPoint_IO_C.ExecuteUbergraph_SpawnPoint_IO
struct ASpawnPoint_IO_C_ExecuteUbergraph_SpawnPoint_IO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
