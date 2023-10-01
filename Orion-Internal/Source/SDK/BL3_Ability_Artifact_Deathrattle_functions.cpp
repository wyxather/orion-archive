// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Deathrattle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Deathrattle_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnDeactivated");

	UAbility_Artifact_Deathrattle_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.DownStateStopped
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_Deathrattle_C::DownStateStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.DownStateStopped");

	UAbility_Artifact_Deathrattle_C_DownStateStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Deathrattle_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnRegistered");

	UAbility_Artifact_Deathrattle_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Deathrattle_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnActivated");

	UAbility_Artifact_Deathrattle_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Deathrattle_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.OnUnregistered");

	UAbility_Artifact_Deathrattle_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.DownStateStarted
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_Deathrattle_C::DownStateStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.DownStateStarted");

	UAbility_Artifact_Deathrattle_C_DownStateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.ExecuteUbergraph_Ability_Artifact_Deathrattle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Deathrattle_C::ExecuteUbergraph_Ability_Artifact_Deathrattle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C.ExecuteUbergraph_Ability_Artifact_Deathrattle");

	UAbility_Artifact_Deathrattle_C_ExecuteUbergraph_Ability_Artifact_Deathrattle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
