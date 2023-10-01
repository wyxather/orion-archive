// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_PetShared_GeneticLink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.NewFunction_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageDealt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_PetShared_GeneticLink_C::NewFunction_1(float DamageDealt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.NewFunction_1");

	UAbility_PetShared_GeneticLink_C_NewFunction_1_Params params;
	params.DamageDealt = DamageDealt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_PetShared_GeneticLink_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnActivated");

	UAbility_PetShared_GeneticLink_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnTakeDamage_GeneticLink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_PetShared_GeneticLink_C::OnTakeDamage_GeneticLink(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnTakeDamage_GeneticLink");

	UAbility_PetShared_GeneticLink_C_OnTakeDamage_GeneticLink_Params params;
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


// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.EnablePetBonusDamage
// (BlueprintCallable, BlueprintEvent)

void UAbility_PetShared_GeneticLink_C::EnablePetBonusDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.EnablePetBonusDamage");

	UAbility_PetShared_GeneticLink_C_EnablePetBonusDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_PetShared_GeneticLink_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnAbilityTimerEnded");

	UAbility_PetShared_GeneticLink_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.ExecuteUbergraph_Ability_PetShared_GeneticLink
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_PetShared_GeneticLink_C::ExecuteUbergraph_Ability_PetShared_GeneticLink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.ExecuteUbergraph_Ability_PetShared_GeneticLink");

	UAbility_PetShared_GeneticLink_C_ExecuteUbergraph_Ability_PetShared_GeneticLink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
