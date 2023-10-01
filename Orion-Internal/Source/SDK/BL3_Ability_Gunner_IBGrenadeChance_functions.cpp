// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_IBGrenadeChance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.GrenadeCooldown
// (BlueprintCallable, BlueprintEvent)

void UAbility_Gunner_IBGrenadeChance_C::GrenadeCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.GrenadeCooldown");

	UAbility_Gunner_IBGrenadeChance_C_GrenadeCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronIronBearStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear** IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_IBGrenadeChance_C::AnointIronIronBearStarted(class AOakCharacter_IronBear** IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronIronBearStarted");

	UAbility_Gunner_IBGrenadeChance_C_AnointIronIronBearStarted_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronBearEnded
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_Gunner_IBGrenadeChance_C::AnointIronBearEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronBearEnded");

	UAbility_Gunner_IBGrenadeChance_C_AnointIronBearEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointRemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_Gunner_IBGrenadeChance_C::AnointRemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointRemoveEffect");

	UAbility_Gunner_IBGrenadeChance_C_AnointRemoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnTookDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Gunner_IBGrenadeChance_C::OnTookDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnTookDamage");

	UAbility_Gunner_IBGrenadeChance_C_OnTookDamage_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_IBGrenadeChance_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnActivated");

	UAbility_Gunner_IBGrenadeChance_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.ExecuteUbergraph_Ability_Gunner_IBGrenadeChance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_IBGrenadeChance_C::ExecuteUbergraph_Ability_Gunner_IBGrenadeChance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.ExecuteUbergraph_Ability_Gunner_IBGrenadeChance");

	UAbility_Gunner_IBGrenadeChance_C_ExecuteUbergraph_Ability_Gunner_IBGrenadeChance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
