#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VolumetricFog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VolumetricFog.BP_VolumetricFog_C.Set Properties
struct ABP_VolumetricFog_C_Set_Properties_Params
{
};

// Function BP_VolumetricFog.BP_VolumetricFog_C.UserConstructionScript
struct ABP_VolumetricFog_C_UserConstructionScript_Params
{
};

// Function BP_VolumetricFog.BP_VolumetricFog_C.ReceiveBeginPlay
struct ABP_VolumetricFog_C_ReceiveBeginPlay_Params
{
};

// Function BP_VolumetricFog.BP_VolumetricFog_C.ExecuteUbergraph_BP_VolumetricFog
struct ABP_VolumetricFog_C_ExecuteUbergraph_BP_VolumetricFog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
