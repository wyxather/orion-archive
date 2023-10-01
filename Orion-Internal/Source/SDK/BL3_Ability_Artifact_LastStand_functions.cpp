// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_LastStand_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.LastStandArtifactAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_LastStand_C::LastStandArtifactAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.LastStandArtifactAbility");

	UAbility_Artifact_LastStand_C_LastStandArtifactAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.SetVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_LastStand_C::SetVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.SetVariables");

	UAbility_Artifact_LastStand_C_SetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_LastStand_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnActivated");

	UAbility_Artifact_LastStand_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.TakeDamage_LastStand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Artifact_LastStand_C::TakeDamage_LastStand(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.TakeDamage_LastStand");

	UAbility_Artifact_LastStand_C_TakeDamage_LastStand_Params params;
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


// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_LastStand_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnAbilityTimerStarted");

	UAbility_Artifact_LastStand_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_LastStand_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.OnAbilityTimerEnded");

	UAbility_Artifact_LastStand_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.ExecuteUbergraph_Ability_Artifact_LastStand
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_LastStand_C::ExecuteUbergraph_Ability_Artifact_LastStand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_LastStand.Ability_Artifact_LastStand_C.ExecuteUbergraph_Ability_Artifact_LastStand");

	UAbility_Artifact_LastStand_C_ExecuteUbergraph_Ability_Artifact_LastStand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
