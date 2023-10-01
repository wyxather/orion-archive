// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_Fling_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.BeginFling
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_Fling_C::BeginFling()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.BeginFling");

	UA_PetJabbermon_Fling_C_BeginFling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_Fling_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.OnServerBegin");

	UA_PetJabbermon_Fling_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.Notify_ShowPoop
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_Fling_C::Notify_ShowPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.Notify_ShowPoop");

	UA_PetJabbermon_Fling_C_Notify_ShowPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.ExecuteUbergraph_A_PetJabbermon_Fling
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_Fling_C::ExecuteUbergraph_A_PetJabbermon_Fling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.ExecuteUbergraph_A_PetJabbermon_Fling");

	UA_PetJabbermon_Fling_C_ExecuteUbergraph_A_PetJabbermon_Fling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
