#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_TravelPOI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.UserConstructionScript
struct ABP_ZoneMap_TravelPOI_C_UserConstructionScript_Params
{
};

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Activate POI
struct ABP_ZoneMap_TravelPOI_C_Activate_POI_Params
{
};

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveBeginPlay
struct ABP_ZoneMap_TravelPOI_C_ReceiveBeginPlay_Params
{
};

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveActorBeginOverlap
struct ABP_ZoneMap_TravelPOI_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Begin Zone Map Cursor Over
struct ABP_ZoneMap_TravelPOI_C_Begin_Zone_Map_Cursor_Over_Params
{
};

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.End Zone Map Cursor Over
struct ABP_ZoneMap_TravelPOI_C_End_Zone_Map_Cursor_Over_Params
{
};

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ViewModeChanged
struct ABP_ZoneMap_TravelPOI_C_ViewModeChanged_Params
{
};

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ExecuteUbergraph_BP_ZoneMap_TravelPOI
struct ABP_ZoneMap_TravelPOI_C_ExecuteUbergraph_BP_ZoneMap_TravelPOI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
