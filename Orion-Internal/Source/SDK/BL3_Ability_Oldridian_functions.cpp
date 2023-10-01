// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Oldridian_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Oldridian.Ability_Oldridian_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Oldridian_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Oldridian.Ability_Oldridian_C.OnActivated");

	UAbility_Oldridian_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Oldridian.Ability_Oldridian_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Oldridian_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Oldridian.Ability_Oldridian_C.OnDeactivated");

	UAbility_Oldridian_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Oldridian.Ability_Oldridian_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Oldridian_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Oldridian.Ability_Oldridian_C.OnUnregistered");

	UAbility_Oldridian_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Oldridian.Ability_Oldridian_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Oldridian_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Oldridian.Ability_Oldridian_C.OnPaused");

	UAbility_Oldridian_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Oldridian.Ability_Oldridian_C.Reload_ShotMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Oldridian_C::Reload_ShotMod(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Oldridian.Ability_Oldridian_C.Reload_ShotMod");

	UAbility_Oldridian_C_Reload_ShotMod_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Oldridian.Ability_Oldridian_C.RemoveShotModifiers
// (BlueprintCallable, BlueprintEvent)

void UAbility_Oldridian_C::RemoveShotModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Oldridian.Ability_Oldridian_C.RemoveShotModifiers");

	UAbility_Oldridian_C_RemoveShotModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Oldridian.Ability_Oldridian_C.ExecuteUbergraph_Ability_Oldridian
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Oldridian_C::ExecuteUbergraph_Ability_Oldridian(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Oldridian.Ability_Oldridian_C.ExecuteUbergraph_Ability_Oldridian");

	UAbility_Oldridian_C_ExecuteUbergraph_Ability_Oldridian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
