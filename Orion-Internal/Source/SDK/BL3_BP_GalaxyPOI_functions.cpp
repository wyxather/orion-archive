// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GalaxyPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GalaxyPOI.BP_GalaxyPOI_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GalaxyPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.UserConstructionScript");

	ABP_GalaxyPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GalaxyPOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.End Zone Map Cursor Over");

	ABP_GalaxyPOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GalaxyPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.Begin Zone Map Cursor Over");

	ABP_GalaxyPOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GalaxyPOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.Activate POI");

	ABP_GalaxyPOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GalaxyPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.ReceiveBeginPlay");

	ABP_GalaxyPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.On Begin Zone Map Cursor Over
// (BlueprintCallable, BlueprintEvent)

void ABP_GalaxyPOI_C::On_Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.On Begin Zone Map Cursor Over");

	ABP_GalaxyPOI_C_On_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.On End Zone Map Cursor Over
// (BlueprintCallable, BlueprintEvent)

void ABP_GalaxyPOI_C::On_End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.On End Zone Map Cursor Over");

	ABP_GalaxyPOI_C_On_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.ExecuteUbergraph_BP_GalaxyPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GalaxyPOI_C::ExecuteUbergraph_BP_GalaxyPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GalaxyPOI.BP_GalaxyPOI_C.ExecuteUbergraph_BP_GalaxyPOI");

	ABP_GalaxyPOI_C_ExecuteUbergraph_BP_GalaxyPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
