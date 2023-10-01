// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_FriendPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_FriendPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.UserConstructionScript");

	ABP_ZoneMap_FriendPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_FriendPOI_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.Activate POI");

	ABP_ZoneMap_FriendPOI_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_FriendPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.ReceiveBeginPlay");

	ABP_ZoneMap_FriendPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_FriendPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.Begin Zone Map Cursor Over");

	ABP_ZoneMap_FriendPOI_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_FriendPOI_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.End Zone Map Cursor Over");

	ABP_ZoneMap_FriendPOI_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.ExecuteUbergraph_BP_ZoneMap_FriendPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_FriendPOI_C::ExecuteUbergraph_BP_ZoneMap_FriendPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C.ExecuteUbergraph_BP_ZoneMap_FriendPOI");

	ABP_ZoneMap_FriendPOI_C_ExecuteUbergraph_BP_ZoneMap_FriendPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
