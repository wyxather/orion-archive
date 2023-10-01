// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Frequency_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Frequency.Ability_Frequency_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Frequency_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Frequency.Ability_Frequency_C.OnUnregistered");

	UAbility_Frequency_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Frequency.Ability_Frequency_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Frequency_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Frequency.Ability_Frequency_C.OnDeactivated");

	UAbility_Frequency_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Frequency.Ability_Frequency_C.OnKilled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Frequency_C::OnKilled(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Frequency.Ability_Frequency_C.OnKilled");

	UAbility_Frequency_C_OnKilled_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Frequency.Ability_Frequency_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Frequency_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Frequency.Ability_Frequency_C.OnRegistered");

	UAbility_Frequency_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Frequency.Ability_Frequency_C.OnReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Frequency_C::OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Frequency.Ability_Frequency_C.OnReloadStarted");

	UAbility_Frequency_C_OnReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Frequency.Ability_Frequency_C.ExecuteUbergraph_Ability_Frequency
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Frequency_C::ExecuteUbergraph_Ability_Frequency(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Frequency.Ability_Frequency_C.ExecuteUbergraph_Ability_Frequency");

	UAbility_Frequency_C_ExecuteUbergraph_Ability_Frequency_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
