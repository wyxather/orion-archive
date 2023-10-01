#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCScript_BloodyHarvest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.GetSpawnTransform
struct USpawnDLCScript_BloodyHarvest_C_GetSpawnTransform_Params
{
	class AActor*                                      ActorThatDied;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Output;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.SpawnEnemyAsHaunted
struct USpawnDLCScript_BloodyHarvest_C_SpawnEnemyAsHaunted_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorSpawned
struct USpawnDLCScript_BloodyHarvest_C_OnActorSpawned_Params
{
	class USpawnerComponent**                          SpawnerComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorDied
struct USpawnDLCScript_BloodyHarvest_C_OnActorDied_Params
{
	class USpawnerComponent**                          SpawnerComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
