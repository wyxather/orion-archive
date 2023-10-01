// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_MissionPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_MissionPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.UserConstructionScript");

	ABP_ZoneMap_MissionPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_MissionPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ReceiveBeginPlay");

	ABP_ZoneMap_MissionPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.BeginZoneMapCursorOver
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_MissionPOI_C::BeginZoneMapCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.BeginZoneMapCursorOver");

	ABP_ZoneMap_MissionPOI_C_BeginZoneMapCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.EndZoneMapCursorOver
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_MissionPOI_C::EndZoneMapCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.EndZoneMapCursorOver");

	ABP_ZoneMap_MissionPOI_C_EndZoneMapCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.K2_OnWaypointUpdated
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_MissionPOI_C::K2_OnWaypointUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.K2_OnWaypointUpdated");

	ABP_ZoneMap_MissionPOI_C_K2_OnWaypointUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ExecuteUbergraph_BP_ZoneMap_MissionPOI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_MissionPOI_C::ExecuteUbergraph_BP_ZoneMap_MissionPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ExecuteUbergraph_BP_ZoneMap_MissionPOI");

	ABP_ZoneMap_MissionPOI_C_ExecuteUbergraph_BP_ZoneMap_MissionPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
