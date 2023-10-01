// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_MeansOfDestruction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_MeansOfDestruction_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnActivated");

	UPassiveSkill_Gunner_MeansOfDestruction_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnCausedDamage_MeansOfDestruction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Gunner_MeansOfDestruction_C::OnCausedDamage_MeansOfDestruction(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnCausedDamage_MeansOfDestruction");

	UPassiveSkill_Gunner_MeansOfDestruction_C_OnCausedDamage_MeansOfDestruction_Params params;
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


// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnGradeChanged
// (Event, Public, BlueprintEvent)

void UPassiveSkill_Gunner_MeansOfDestruction_C::OnGradeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnGradeChanged");

	UPassiveSkill_Gunner_MeansOfDestruction_C_OnGradeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.DetermineNewChance
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Gunner_MeansOfDestruction_C::DetermineNewChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.DetermineNewChance");

	UPassiveSkill_Gunner_MeansOfDestruction_C_DetermineNewChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetMoDClamp_Ammo
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Gunner_MeansOfDestruction_C::ResetMoDClamp_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetMoDClamp_Ammo");

	UPassiveSkill_Gunner_MeansOfDestruction_C_ResetMoDClamp_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Gunner_MeansOfDestruction_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnAbilityTimerEnded");

	UPassiveSkill_Gunner_MeansOfDestruction_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetModClamp_Grenade
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Gunner_MeansOfDestruction_C::ResetModClamp_Grenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetModClamp_Grenade");

	UPassiveSkill_Gunner_MeansOfDestruction_C_ResetModClamp_Grenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_MeansOfDestruction_C::ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction");

	UPassiveSkill_Gunner_MeansOfDestruction_C_ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
