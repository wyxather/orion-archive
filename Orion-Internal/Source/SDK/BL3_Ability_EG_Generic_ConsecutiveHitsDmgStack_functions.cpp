// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_Generic_ConsecutiveHitsDmgStack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnActivated");

	UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.CausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.CausedDamage");

	UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_CausedDamage_Params params;
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


// Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnAbilityTimerEnded");

	UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnDeactivated");

	UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack");

	UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
