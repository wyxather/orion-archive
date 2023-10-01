// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Juliet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Juliet.Ability_Juliet_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UAbility_Juliet_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juliet.Ability_Juliet_C.OnResumed");

	UAbility_Juliet_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juliet.Ability_Juliet_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Juliet_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juliet.Ability_Juliet_C.OnActivated");

	UAbility_Juliet_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juliet.Ability_Juliet_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Juliet_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juliet.Ability_Juliet_C.OnRegistered");

	UAbility_Juliet_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juliet.Ability_Juliet_C.ReloadStartedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Juliet_C::ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juliet.Ability_Juliet_C.ReloadStartedEvent");

	UAbility_Juliet_C_ReloadStartedEvent_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juliet.Ability_Juliet_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Juliet_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juliet.Ability_Juliet_C.OnUnregistered");

	UAbility_Juliet_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juliet.Ability_Juliet_C.OnCausedDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Juliet_C::OnCausedDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juliet.Ability_Juliet_C.OnCausedDeath_CE");

	UAbility_Juliet_C_OnCausedDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juliet.Ability_Juliet_C.ExecuteUbergraph_Ability_Juliet
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Juliet_C::ExecuteUbergraph_Ability_Juliet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juliet.Ability_Juliet_C.ExecuteUbergraph_Ability_Juliet");

	UAbility_Juliet_C_ExecuteUbergraph_Ability_Juliet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
