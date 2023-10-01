#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VehicleSpawnMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.AddInstantForce
struct ABP_VehicleSpawnMesh_C_AddInstantForce_Params
{
	class AOakVehicle*                                 OakVehicle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.UserConstructionScript
struct ABP_VehicleSpawnMesh_C_UserConstructionScript_Params
{
};

// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.SpawnMesh_TriggerDestruction
struct ABP_VehicleSpawnMesh_C_SpawnMesh_TriggerDestruction_Params
{
};

// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.ExecuteUbergraph_BP_VehicleSpawnMesh
struct ABP_VehicleSpawnMesh_C_ExecuteUbergraph_BP_VehicleSpawnMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
