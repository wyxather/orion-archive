// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_PrivateInvestigator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_PrivateInvestigator_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnActivated");

	UAbility_PrivateInvestigator_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.CausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_PrivateInvestigator_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.CausedDamage");

	UAbility_PrivateInvestigator_C_CausedDamage_Params params;
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


// Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.ModeSwitched
// (BlueprintCallable, BlueprintEvent)

void UAbility_PrivateInvestigator_C::ModeSwitched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.ModeSwitched");

	UAbility_PrivateInvestigator_C_ModeSwitched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_PrivateInvestigator_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnUnregistered");

	UAbility_PrivateInvestigator_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_PrivateInvestigator_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnDeactivated");

	UAbility_PrivateInvestigator_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.ExecuteUbergraph_Ability_PrivateInvestigator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_PrivateInvestigator_C::ExecuteUbergraph_Ability_PrivateInvestigator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.ExecuteUbergraph_Ability_PrivateInvestigator");

	UAbility_PrivateInvestigator_C_ExecuteUbergraph_Ability_PrivateInvestigator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
