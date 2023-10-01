#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SpawnMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpawnMesh.BP_SpawnMesh_C.UserConstructionScript
struct ABP_SpawnMesh_C_UserConstructionScript_Params
{
};

// Function BP_SpawnMesh.BP_SpawnMesh_C.SpawnMesh_TriggerDestruction
struct ABP_SpawnMesh_C_SpawnMesh_TriggerDestruction_Params
{
};

// Function BP_SpawnMesh.BP_SpawnMesh_C.ExecuteUbergraph_BP_SpawnMesh
struct ABP_SpawnMesh_C_ExecuteUbergraph_BP_SpawnMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
