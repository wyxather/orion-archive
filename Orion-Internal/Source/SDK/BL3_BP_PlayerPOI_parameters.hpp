#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PlayerPOI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerPOI.BP_PlayerPOI_C.UserConstructionScript
struct ABP_PlayerPOI_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPOI.BP_PlayerPOI_C.Activate POI
struct ABP_PlayerPOI_C_Activate_POI_Params
{
};

// Function BP_PlayerPOI.BP_PlayerPOI_C.ReceiveBeginPlay
struct ABP_PlayerPOI_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPOI.BP_PlayerPOI_C.Begin Zone Map Cursor Over
struct ABP_PlayerPOI_C_Begin_Zone_Map_Cursor_Over_Params
{
};

// Function BP_PlayerPOI.BP_PlayerPOI_C.End Zone Map Cursor Over
struct ABP_PlayerPOI_C_End_Zone_Map_Cursor_Over_Params
{
};

// Function BP_PlayerPOI.BP_PlayerPOI_C.ExecuteUbergraph_BP_PlayerPOI
struct ABP_PlayerPOI_C_ExecuteUbergraph_BP_PlayerPOI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
