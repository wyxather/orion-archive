#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_FogOfDiscoveryCapture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.FinishZoneMapFoD
struct ABP_FogOfDiscoveryCapture_C_FinishZoneMapFoD_Params
{
};

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.CaptureZoneMapFoD
struct ABP_FogOfDiscoveryCapture_C_CaptureZoneMapFoD_Params
{
};

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.UserConstructionScript
struct ABP_FogOfDiscoveryCapture_C_UserConstructionScript_Params
{
};

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.GetData
struct ABP_FogOfDiscoveryCapture_C_GetData_Params
{
};

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.OnFogLevelLoaded
struct ABP_FogOfDiscoveryCapture_C_OnFogLevelLoaded_Params
{
	class UZoneMapData**                               UpdatedZoneMap;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveEndPlay
struct ABP_FogOfDiscoveryCapture_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveBeginPlay
struct ABP_FogOfDiscoveryCapture_C_ReceiveBeginPlay_Params
{
};

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ExecuteUbergraph_BP_FogOfDiscoveryCapture
struct ABP_FogOfDiscoveryCapture_C_ExecuteUbergraph_BP_FogOfDiscoveryCapture_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
