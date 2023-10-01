#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_DoorSmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SetBarricadeArtStyle
struct ASpawnMesh_DoorSmall_C_SetBarricadeArtStyle_Params
{
	TEnumAsByte<Enum_SpawnMesh_DoorSmallBarricades>    BarricadeArtStyle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SetDoorArtStyle
struct ASpawnMesh_DoorSmall_C_SetDoorArtStyle_Params
{
	TEnumAsByte<Enum_SpawnMesh_DoorSmall>              DoorArtStyle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.InitByAnimType
struct ASpawnMesh_DoorSmall_C_InitByAnimType_Params
{
	TEnumAsByte<Enum_SpawnMesh_DoorSmallAnimStyle>     DoorAnimType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.UserConstructionScript
struct ASpawnMesh_DoorSmall_C_UserConstructionScript_Params
{
};

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.BndEvt__Barricade_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_SpawnMesh_DoorSmall
struct ASpawnMesh_DoorSmall_C_BndEvt__Barricade_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_SpawnMesh_DoorSmall_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SpawnMesh_TriggerDestruction
struct ASpawnMesh_DoorSmall_C_SpawnMesh_TriggerDestruction_Params
{
};

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.ExecuteUbergraph_SpawnMesh_DoorSmall
struct ASpawnMesh_DoorSmall_C_ExecuteUbergraph_SpawnMesh_DoorSmall_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
