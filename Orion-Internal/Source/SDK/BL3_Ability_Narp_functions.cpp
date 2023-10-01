// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Narp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Narp.Ability_Narp_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Narp_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Narp.Ability_Narp_C.OnActivated");

	UAbility_Narp_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Narp.Ability_Narp_C.OnReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Narp_C::OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Narp.Ability_Narp_C.OnReloadStarted");

	UAbility_Narp_C_OnReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Narp.Ability_Narp_C.OnReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Narp_C::OnReloadEnded(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Narp.Ability_Narp_C.OnReloadEnded");

	UAbility_Narp_C_OnReloadEnded_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Narp.Ability_Narp_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Narp_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Narp.Ability_Narp_C.OnDeactivated");

	UAbility_Narp_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Narp.Ability_Narp_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Narp_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Narp.Ability_Narp_C.OnUnregistered");

	UAbility_Narp_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Narp.Ability_Narp_C.ExecuteUbergraph_Ability_Narp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Narp_C::ExecuteUbergraph_Ability_Narp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Narp.Ability_Narp_C.ExecuteUbergraph_Ability_Narp");

	UAbility_Narp_C_ExecuteUbergraph_Ability_Narp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
