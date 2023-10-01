// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMapPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMapPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.UserConstructionScript");

	ABP_ZoneMapPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMapPOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Activate POI");

	ABP_ZoneMapPOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMapPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ReceiveBeginPlay");

	ABP_ZoneMapPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMapPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Begin Zone Map Cursor Over");

	ABP_ZoneMapPOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMapPOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.End Zone Map Cursor Over");

	ABP_ZoneMapPOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ExecuteUbergraph_BP_ZoneMapPOI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMapPOI_C::ExecuteUbergraph_BP_ZoneMapPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ExecuteUbergraph_BP_ZoneMapPOI");

	ABP_ZoneMapPOI_C_ExecuteUbergraph_BP_ZoneMapPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
