#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_TOD_Modifier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetColorScheme
struct ABP_TOD_Modifier_C_SetColorScheme_Params
{
	class FString*                                     Scheme;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.ReceiveBeginPlay
struct ABP_TOD_Modifier_C_ReceiveBeginPlay_Params
{
};

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.OnRegionEnter
struct ABP_TOD_Modifier_C_OnRegionEnter_Params
{
};

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.Update
struct ABP_TOD_Modifier_C_Update_Params
{
};

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky
struct ABP_TOD_Modifier_C_SetLabSky_Params
{
};

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky_MC
struct ABP_TOD_Modifier_C_SetLabSky_MC_Params
{
};

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.ExecuteUbergraph_BP_TOD_Modifier
struct ABP_TOD_Modifier_C_ExecuteUbergraph_BP_TOD_Modifier_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
