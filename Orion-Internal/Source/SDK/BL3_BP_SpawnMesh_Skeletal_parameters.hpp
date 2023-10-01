#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SpawnMesh_Skeletal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.SetAnimationTickEnabled
struct ABP_SpawnMesh_Skeletal_C_SetAnimationTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.UserConstructionScript
struct ABP_SpawnMesh_Skeletal_C_UserConstructionScript_Params
{
};

// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.ReceiveBeginPlay
struct ABP_SpawnMesh_Skeletal_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.BndEvt__GbxAction_K2Node_ComponentBoundEvent_1_ActionComponentStopDelegate__DelegateSignature_SpawnMesh_ZipLine
struct ABP_SpawnMesh_Skeletal_C_BndEvt__GbxAction_K2Node_ComponentBoundEvent_1_ActionComponentStopDelegate__DelegateSignature_SpawnMesh_ZipLine_Params
{
	class UClass*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.ExecuteUbergraph_BP_SpawnMesh_Skeletal
struct ABP_SpawnMesh_Skeletal_C_ExecuteUbergraph_BP_SpawnMesh_Skeletal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
