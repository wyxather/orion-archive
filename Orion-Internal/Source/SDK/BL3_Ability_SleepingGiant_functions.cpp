// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SleepingGiant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UAbility_SleepingGiant_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnResumed");

	UAbility_SleepingGiant_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_SleepingGiant_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnActivated");

	UAbility_SleepingGiant_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_SleepingGiant_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnRegistered");

	UAbility_SleepingGiant_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadStartedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SleepingGiant_C::ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadStartedEvent");

	UAbility_SleepingGiant_C_ReloadStartedEvent_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadEndedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SleepingGiant_C::ReloadEndedEvent(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadEndedEvent");

	UAbility_SleepingGiant_C_ReloadEndedEvent_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_SleepingGiant_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnUnregistered");

	UAbility_SleepingGiant_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SleepingGiant.Ability_SleepingGiant_C.ExecuteUbergraph_Ability_SleepingGiant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SleepingGiant_C::ExecuteUbergraph_Ability_SleepingGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SleepingGiant.Ability_SleepingGiant_C.ExecuteUbergraph_Ability_SleepingGiant");

	UAbility_SleepingGiant_C_ExecuteUbergraph_Ability_SleepingGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
