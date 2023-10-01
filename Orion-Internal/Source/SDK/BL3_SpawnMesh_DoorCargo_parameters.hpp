#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_DoorCargo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.SetDoorArtStyle
struct ASpawnMesh_DoorCargo_C_SetDoorArtStyle_Params
{
	TEnumAsByte<Enum_Spawnmesh_DoorCargo>              DoorArtStyle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.InitByAnimType
struct ASpawnMesh_DoorCargo_C_InitByAnimType_Params
{
	TEnumAsByte<Enum_Spawnmesh_DoorCargoAnimStyle>     DoorAnimType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.UserConstructionScript
struct ASpawnMesh_DoorCargo_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
