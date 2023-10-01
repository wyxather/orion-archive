#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_FogOfDiscoveryManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.UserConstructionScript
struct ABP_FogOfDiscoveryManager_C_UserConstructionScript_Params
{
};

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveBeginPlay
struct ABP_FogOfDiscoveryManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Update Map
struct ABP_FogOfDiscoveryManager_C_Update_Map_Params
{
};

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveEndPlay
struct ABP_FogOfDiscoveryManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Save FOD Texture
struct ABP_FogOfDiscoveryManager_C_Save_FOD_Texture_Params
{
};

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveTick
struct ABP_FogOfDiscoveryManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ExecuteUbergraph_BP_FogOfDiscoveryManager
struct ABP_FogOfDiscoveryManager_C_ExecuteUbergraph_BP_FogOfDiscoveryManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
