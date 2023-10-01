// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_VehiclePOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_VehiclePOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.UserConstructionScript");

	ABP_ZoneMap_VehiclePOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_VehiclePOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Activate POI");

	ABP_ZoneMap_VehiclePOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_VehiclePOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ReceiveBeginPlay");

	ABP_ZoneMap_VehiclePOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_VehiclePOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Begin Zone Map Cursor Over");

	ABP_ZoneMap_VehiclePOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_VehiclePOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.End Zone Map Cursor Over");

	ABP_ZoneMap_VehiclePOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ExecuteUbergraph_BP_ZoneMap_VehiclePOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_VehiclePOI_C::ExecuteUbergraph_BP_ZoneMap_VehiclePOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ExecuteUbergraph_BP_ZoneMap_VehiclePOI");

	ABP_ZoneMap_VehiclePOI_C_ExecuteUbergraph_BP_ZoneMap_VehiclePOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
