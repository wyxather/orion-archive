// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Tankman_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Tankman.Ability_Tankman_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UAbility_Tankman_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.OnResumed");

	UAbility_Tankman_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Tankman_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.OnActivated");

	UAbility_Tankman_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Tankman_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.OnRegistered");

	UAbility_Tankman_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.ReloadStartedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Tankman_C::ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.ReloadStartedEvent");

	UAbility_Tankman_C_ReloadStartedEvent_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.ReloadEndedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Tankman_C::ReloadEndedEvent(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.ReloadEndedEvent");

	UAbility_Tankman_C_ReloadEndedEvent_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Tankman_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.OnUnregistered");

	UAbility_Tankman_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.OnCauseDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Tankman_C::OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.OnCauseDeath_CE");

	UAbility_Tankman_C_OnCauseDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.OnDownStateStart_CE
// (BlueprintCallable, BlueprintEvent)

void UAbility_Tankman_C::OnDownStateStart_CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.OnDownStateStart_CE");

	UAbility_Tankman_C_OnDownStateStart_CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tankman.Ability_Tankman_C.ExecuteUbergraph_Ability_Tankman
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Tankman_C::ExecuteUbergraph_Ability_Tankman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tankman.Ability_Tankman_C.ExecuteUbergraph_Ability_Tankman");

	UAbility_Tankman_C_ExecuteUbergraph_Ability_Tankman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
