// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Alisma_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Alisma_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnActivated");

	UOakAbility_Beastmaster_ClassMod_Alisma_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.BeastmasterClassModAlisma_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Beastmaster_ClassMod_Alisma_C::BeastmasterClassModAlisma_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.BeastmasterClassModAlisma_OnCausedAnyDamage");

	UOakAbility_Beastmaster_ClassMod_Alisma_C_BeastmasterClassModAlisma_OnCausedAnyDamage_Params params;
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


// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ResetGate
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Alisma_C::ResetGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ResetGate");

	UOakAbility_Beastmaster_ClassMod_Alisma_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Alisma_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnResumed");

	UOakAbility_Beastmaster_ClassMod_Alisma_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Beastmaster_ClassMod_Alisma_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnAbilityTimerEnded");

	UOakAbility_Beastmaster_ClassMod_Alisma_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_ClassMod_Alisma_C::ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma");

	UOakAbility_Beastmaster_ClassMod_Alisma_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
