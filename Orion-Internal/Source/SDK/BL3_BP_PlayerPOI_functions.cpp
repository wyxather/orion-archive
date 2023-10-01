// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PlayerPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerPOI.BP_PlayerPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPOI.BP_PlayerPOI_C.UserConstructionScript");

	ABP_PlayerPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPOI.BP_PlayerPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPOI.BP_PlayerPOI_C.Activate POI");

	ABP_PlayerPOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPOI.BP_PlayerPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPOI.BP_PlayerPOI_C.ReceiveBeginPlay");

	ABP_PlayerPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPOI.BP_PlayerPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPOI.BP_PlayerPOI_C.Begin Zone Map Cursor Over");

	ABP_PlayerPOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPOI.BP_PlayerPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPOI.BP_PlayerPOI_C.End Zone Map Cursor Over");

	ABP_PlayerPOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPOI.BP_PlayerPOI_C.ExecuteUbergraph_BP_PlayerPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPOI_C::ExecuteUbergraph_BP_PlayerPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPOI.BP_PlayerPOI_C.ExecuteUbergraph_BP_PlayerPOI");

	ABP_PlayerPOI_C_ExecuteUbergraph_BP_PlayerPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
