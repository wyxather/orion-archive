// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Disruptor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Disruptor.Ability_Disruptor_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Disruptor_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Disruptor.Ability_Disruptor_C.OnActivated");

	UAbility_Disruptor_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Disruptor.Ability_Disruptor_C.OnCausedDeath_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Disruptor_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Disruptor.Ability_Disruptor_C.OnCausedDeath_Event");

	UAbility_Disruptor_C_OnCausedDeath_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Disruptor.Ability_Disruptor_C.OnCausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Disruptor_C::OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Disruptor.Ability_Disruptor_C.OnCausedDamage");

	UAbility_Disruptor_C_OnCausedDamage_Params params;
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


// Function Ability_Disruptor.Ability_Disruptor_C.RemoveCDM
// (BlueprintCallable, BlueprintEvent)

void UAbility_Disruptor_C::RemoveCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Disruptor.Ability_Disruptor_C.RemoveCDM");

	UAbility_Disruptor_C_RemoveCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Disruptor.Ability_Disruptor_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Disruptor_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Disruptor.Ability_Disruptor_C.OnDeactivated");

	UAbility_Disruptor_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Disruptor.Ability_Disruptor_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Disruptor_C::WeaponFired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Disruptor.Ability_Disruptor_C.WeaponFired");

	UAbility_Disruptor_C_WeaponFired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Disruptor.Ability_Disruptor_C.ExecuteUbergraph_Ability_Disruptor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Disruptor_C::ExecuteUbergraph_Ability_Disruptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Disruptor.Ability_Disruptor_C.ExecuteUbergraph_Ability_Disruptor");

	UAbility_Disruptor_C_ExecuteUbergraph_Ability_Disruptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
