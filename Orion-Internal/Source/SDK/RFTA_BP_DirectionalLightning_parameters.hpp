#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_DirectionalLightning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.RandomizeRotation
struct ABP_DirectionalLightning_C_RandomizeRotation_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.UserConstructionScript
struct ABP_DirectionalLightning_C_UserConstructionScript_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_2__FinishedFunc
struct ABP_DirectionalLightning_C_Lightning_2__FinishedFunc_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_2__UpdateFunc
struct ABP_DirectionalLightning_C_Lightning_2__UpdateFunc_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_3__FinishedFunc
struct ABP_DirectionalLightning_C_Lightning_3__FinishedFunc_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_3__UpdateFunc
struct ABP_DirectionalLightning_C_Lightning_3__UpdateFunc_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning__FinishedFunc
struct ABP_DirectionalLightning_C_Lightning__FinishedFunc_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning__UpdateFunc
struct ABP_DirectionalLightning_C_Lightning__UpdateFunc_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.ReceiveBeginPlay
struct ABP_DirectionalLightning_C_ReceiveBeginPlay_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Call Lightning
struct ABP_DirectionalLightning_C_Call_Lightning_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Custom Lightning
struct ABP_DirectionalLightning_C_Custom_Lightning_Params
{
	int*                                               Version;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Reenable Random Lightning
struct ABP_DirectionalLightning_C_Reenable_Random_Lightning_Params
{
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning Flash
struct ABP_DirectionalLightning_C_Lightning_Flash_Params
{
	int*                                               Version;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Random_Lightning;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.ExecuteUbergraph_BP_DirectionalLightning
struct ABP_DirectionalLightning_C_ExecuteUbergraph_BP_DirectionalLightning_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
