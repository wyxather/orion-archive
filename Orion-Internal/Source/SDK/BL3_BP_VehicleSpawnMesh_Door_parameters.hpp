#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VehicleSpawnMesh_Door_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.SetArtStyle
struct ABP_VehicleSpawnMesh_Door_C_SetArtStyle_Params
{
	TEnumAsByte<Enum_VehicleSpawnMesh_DoorStyle>       VehicleSpawnMeshStyle;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.UserConstructionScript
struct ABP_VehicleSpawnMesh_Door_C_UserConstructionScript_Params
{
};

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ReceiveBeginPlay
struct ABP_VehicleSpawnMesh_Door_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.OnActorSpawned_Event_1
struct ABP_VehicleSpawnMesh_Door_C_OnActorSpawned_Event_1_Params
{
	class ASpawnPoint*                                 SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.BndEvt__GbxAction_K2Node_ComponentBoundEvent_0_ActionComponentStopDelegate__DelegateSignature_BP_VehicleSpawnMesh_Door
struct ABP_VehicleSpawnMesh_Door_C_BndEvt__GbxAction_K2Node_ComponentBoundEvent_0_ActionComponentStopDelegate__DelegateSignature_BP_VehicleSpawnMesh_Door_Params
{
	class UClass*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ReleaseVehicle
struct ABP_VehicleSpawnMesh_Door_C_ReleaseVehicle_Params
{
};

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ExecuteUbergraph_BP_VehicleSpawnMesh_Door
struct ABP_VehicleSpawnMesh_Door_C_ExecuteUbergraph_BP_VehicleSpawnMesh_Door_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
