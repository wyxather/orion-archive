// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_TravelPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_TravelPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.UserConstructionScript");

	ABP_ZoneMap_TravelPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_TravelPOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Activate POI");

	ABP_ZoneMap_TravelPOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_TravelPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveBeginPlay");

	ABP_ZoneMap_TravelPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_TravelPOI_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveActorBeginOverlap");

	ABP_ZoneMap_TravelPOI_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_TravelPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Begin Zone Map Cursor Over");

	ABP_ZoneMap_TravelPOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_TravelPOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.End Zone Map Cursor Over");

	ABP_ZoneMap_TravelPOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ViewModeChanged
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_TravelPOI_C::ViewModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ViewModeChanged");

	ABP_ZoneMap_TravelPOI_C_ViewModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ExecuteUbergraph_BP_ZoneMap_TravelPOI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_TravelPOI_C::ExecuteUbergraph_BP_ZoneMap_TravelPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ExecuteUbergraph_BP_ZoneMap_TravelPOI");

	ABP_ZoneMap_TravelPOI_C_ExecuteUbergraph_BP_ZoneMap_TravelPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
