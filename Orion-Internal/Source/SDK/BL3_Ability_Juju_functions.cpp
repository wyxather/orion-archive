// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Juju_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Juju.Ability_Juju_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Juju_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.OnActivated");

	UAbility_Juju_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juju.Ability_Juju_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Juju_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.OnRegistered");

	UAbility_Juju_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juju.Ability_Juju_C.ReloadStartedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Juju_C::ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.ReloadStartedEvent");

	UAbility_Juju_C_ReloadStartedEvent_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juju.Ability_Juju_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Juju_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.OnUnregistered");

	UAbility_Juju_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juju.Ability_Juju_C.OnCausedDmg_CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Juju_C::OnCausedDmg_CE(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.OnCausedDmg_CE");

	UAbility_Juju_C_OnCausedDmg_CE_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juju.Ability_Juju_C.OnCausedDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Juju_C::OnCausedDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.OnCausedDeath_CE");

	UAbility_Juju_C_OnCausedDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juju.Ability_Juju_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UAbility_Juju_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.OnResumed");

	UAbility_Juju_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Juju.Ability_Juju_C.ExecuteUbergraph_Ability_Juju
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Juju_C::ExecuteUbergraph_Ability_Juju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Juju.Ability_Juju_C.ExecuteUbergraph_Ability_Juju");

	UAbility_Juju_C_ExecuteUbergraph_Ability_Juju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
