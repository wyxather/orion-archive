// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_ChallengePOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_ChallengePOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.UserConstructionScript");

	ABP_ZoneMap_ChallengePOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_ChallengePOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Activate POI");

	ABP_ZoneMap_ChallengePOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_ChallengePOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ReceiveBeginPlay");

	ABP_ZoneMap_ChallengePOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_ChallengePOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Begin Zone Map Cursor Over");

	ABP_ZoneMap_ChallengePOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_ChallengePOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.End Zone Map Cursor Over");

	ABP_ZoneMap_ChallengePOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.K2_OnChallengeUpdated
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_ChallengePOI_C::K2_OnChallengeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.K2_OnChallengeUpdated");

	ABP_ZoneMap_ChallengePOI_C_K2_OnChallengeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ExecuteUbergraph_BP_ZoneMap_ChallengePOI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_ChallengePOI_C::ExecuteUbergraph_BP_ZoneMap_ChallengePOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ExecuteUbergraph_BP_ZoneMap_ChallengePOI");

	ABP_ZoneMap_ChallengePOI_C_ExecuteUbergraph_BP_ZoneMap_ChallengePOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
