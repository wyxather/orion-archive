// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PlanetPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlanetPOI.BP_PlanetPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlanetPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.UserConstructionScript");

	ABP_PlanetPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Select__FinishedFunc
// (BlueprintEvent)

void ABP_PlanetPOI_C::Select__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Select__FinishedFunc");

	ABP_PlanetPOI_C_Select__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Select__UpdateFunc
// (BlueprintEvent)

void ABP_PlanetPOI_C::Select__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Select__UpdateFunc");

	ABP_PlanetPOI_C_Select__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlanetPOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Activate POI");

	ABP_PlanetPOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlanetPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.ReceiveBeginPlay");

	ABP_PlanetPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlanetPOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.End Zone Map Cursor Over");

	ABP_PlanetPOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlanetPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Begin Zone Map Cursor Over");

	ABP_PlanetPOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.Highlight POI
// (BlueprintCallable, BlueprintEvent)

void ABP_PlanetPOI_C::Highlight_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Highlight POI");

	ABP_PlanetPOI_C_Highlight_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlanetPOI.BP_PlanetPOI_C.ExecuteUbergraph_BP_PlanetPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlanetPOI_C::ExecuteUbergraph_BP_PlanetPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.ExecuteUbergraph_BP_PlanetPOI");

	ABP_PlanetPOI_C_ExecuteUbergraph_BP_PlanetPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
