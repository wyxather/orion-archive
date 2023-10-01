#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCSCript_Cartels_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorDied
struct USpawnDLCSCript_Cartels_C_OnActorDied_Params
{
	class USpawnerComponent**                          SpawnerComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorSpawned
struct USpawnDLCSCript_Cartels_C_OnActorSpawned_Params
{
	class USpawnerComponent**                          SpawnerComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
