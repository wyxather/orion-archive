// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_RocketLauncher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_RocketLauncher_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnBegin");

	UA_PetJabbermon_RocketLauncher_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.SpawnLauncher
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_RocketLauncher_C::SpawnLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.SpawnLauncher");

	UA_PetJabbermon_RocketLauncher_C_SpawnLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.FireLauncher
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_RocketLauncher_C::FireLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.FireLauncher");

	UA_PetJabbermon_RocketLauncher_C_FireLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.StartLauncherDespawn
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_RocketLauncher_C::StartLauncherDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.StartLauncherDespawn");

	UA_PetJabbermon_RocketLauncher_C_StartLauncherDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_RocketLauncher_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnEnd");

	UA_PetJabbermon_RocketLauncher_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.ExecuteUbergraph_A_PetJabbermon_RocketLauncher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_RocketLauncher_C::ExecuteUbergraph_A_PetJabbermon_RocketLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.ExecuteUbergraph_A_PetJabbermon_RocketLauncher");

	UA_PetJabbermon_RocketLauncher_C_ExecuteUbergraph_A_PetJabbermon_RocketLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
