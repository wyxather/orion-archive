// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Decoupler_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Decoupler.Ability_Decoupler_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Decoupler_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnActivated");

	UAbility_Decoupler_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Decoupler.Ability_Decoupler_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Decoupler_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnDeactivated");

	UAbility_Decoupler_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Decoupler.Ability_Decoupler_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Decoupler_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnUnregistered");

	UAbility_Decoupler_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Decoupler.Ability_Decoupler_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Decoupler_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnPaused");

	UAbility_Decoupler_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Decoupler.Ability_Decoupler_C.ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Decoupler_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.ReloadStarted");

	UAbility_Decoupler_C_ReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Decoupler.Ability_Decoupler_C.ReloadFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Decoupler_C::ReloadFinished(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.ReloadFinished");

	UAbility_Decoupler_C_ReloadFinished_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Decoupler.Ability_Decoupler_C.ExecuteUbergraph_Ability_Decoupler
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Decoupler_C::ExecuteUbergraph_Ability_Decoupler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.ExecuteUbergraph_Ability_Decoupler");

	UAbility_Decoupler_C_ExecuteUbergraph_Ability_Decoupler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
