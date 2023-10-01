#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMapPOI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.UserConstructionScript
struct ABP_ZoneMapPOI_C_UserConstructionScript_Params
{
};

// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Activate POI
struct ABP_ZoneMapPOI_C_Activate_POI_Params
{
};

// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ReceiveBeginPlay
struct ABP_ZoneMapPOI_C_ReceiveBeginPlay_Params
{
};

// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Begin Zone Map Cursor Over
struct ABP_ZoneMapPOI_C_Begin_Zone_Map_Cursor_Over_Params
{
};

// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.End Zone Map Cursor Over
struct ABP_ZoneMapPOI_C_End_Zone_Map_Cursor_Over_Params
{
};

// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ExecuteUbergraph_BP_ZoneMapPOI
struct ABP_ZoneMapPOI_C_ExecuteUbergraph_BP_ZoneMapPOI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
