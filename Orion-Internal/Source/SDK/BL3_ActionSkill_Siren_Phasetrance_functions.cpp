// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Siren_Phasetrance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetDLCSkillOrb
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProj_Siren_DLCSkill_WalkingPotato_Base_C* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::GetDLCSkillOrb(class AProj_Siren_DLCSkill_WalkingPotato_Base_C** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetDLCSkillOrb");

	UActionSkill_Siren_Phasetrance_C_GetDLCSkillOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RegisterDLCSkillOrb
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProj_Siren_DLCSkill_WalkingPotato_Base_C* Orb                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::RegisterDLCSkillOrb(class AProj_Siren_DLCSkill_WalkingPotato_Base_C* Orb, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RegisterDLCSkillOrb");

	UActionSkill_Siren_Phasetrance_C_RegisterDLCSkillOrb_Params params;
	params.Orb = Orb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Quicken
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOakPhaseTranceEffectSpec Spec                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::DoEffect_Quicken(const struct FOakPhaseTranceEffectSpec& Spec, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Quicken");

	UActionSkill_Siren_Phasetrance_C_DoEffect_Quicken_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UActionSkill_Siren_Phasetrance_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CalculateAbilityState");

	UActionSkill_Siren_Phasetrance_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetSingularityRadius
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPhaseTranceActivationComboData ComboData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::GetSingularityRadius(const struct FPhaseTranceActivationComboData& ComboData, float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetSingularityRadius");

	UActionSkill_Siren_Phasetrance_C_GetSingularityRadius_Params params;
	params.ComboData = ComboData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetEssenceDurationAdjust
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::GetEssenceDurationAdjust(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetEssenceDurationAdjust");

	UActionSkill_Siren_Phasetrance_C_GetEssenceDurationAdjust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.TryFindNewEssenceGraspTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastGraspTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::TryFindNewEssenceGraspTarget(class AActor* LastGraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.TryFindNewEssenceGraspTarget");

	UActionSkill_Siren_Phasetrance_C_TryFindNewEssenceGraspTarget_Params params;
	params.LastGraspTarget = LastGraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnWebGraspMissed
// (Public, BlueprintCallable, BlueprintEvent)

void UActionSkill_Siren_Phasetrance_C::OnWebGraspMissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnWebGraspMissed");

	UActionSkill_Siren_Phasetrance_C_OnWebGraspMissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnKilledGraspedEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::OnKilledGraspedEnemy(class AActor* Killer, class AGbxCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnKilledGraspedEnemy");

	UActionSkill_Siren_Phasetrance_C_OnKilledGraspedEnemy_Params params;
	params.Killer = Killer;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.AdjustLeechDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          StartingDamage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FinalDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::AdjustLeechDamage(float StartingDamage, float* FinalDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.AdjustLeechDamage");

	UActionSkill_Siren_Phasetrance_C_AdjustLeechDamage_Params params;
	params.StartingDamage = StartingDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalDamage != nullptr)
		*FinalDamage = params.FinalDamage;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindLeechTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::FindLeechTarget(class AActor** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindLeechTarget");

	UActionSkill_Siren_Phasetrance_C_FindLeechTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetLeechTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::GetLeechTarget(class AActor** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetLeechTarget");

	UActionSkill_Siren_Phasetrance_C_GetLeechTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_SoulSap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOakPhaseTranceEffectSpec Spec                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::DoEffect_SoulSap(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_SoulSap");

	UActionSkill_Siren_Phasetrance_C_DoEffect_SoulSap_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Allure
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOakPhaseTranceEffectSpec Spec                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::DoEffect_Allure(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Allure");

	UActionSkill_Siren_Phasetrance_C_DoEffect_Allure_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_StillnessOfMind
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOakPhaseTranceEffectSpec Spec                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::DoEffect_StillnessOfMind(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_StillnessOfMind");

	UActionSkill_Siren_Phasetrance_C_DoEffect_StillnessOfMind_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_BrightStar
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOakPhaseTranceEffectSpec Spec                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::DoEffect_BrightStar(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_BrightStar");

	UActionSkill_Siren_Phasetrance_C_DoEffect_BrightStar_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Glamour
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOakPhaseTranceEffectSpec Spec                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::DoEffect_Glamour(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Glamour");

	UActionSkill_Siren_Phasetrance_C_DoEffect_Glamour_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOakPhaseTranceEffectSpec* Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Siren_Phasetrance_C::DoEffect(struct FOakPhaseTranceEffectSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect");

	UActionSkill_Siren_Phasetrance_C_DoEffect_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CreateAttackActionRegisters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGbxActionRegister> res                            (Parm, OutParm, ZeroConstructor)

void UActionSkill_Siren_Phasetrance_C::CreateAttackActionRegisters(TArray<struct FGbxActionRegister>* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CreateAttackActionRegisters");

	UActionSkill_Siren_Phasetrance_C_CreateAttackActionRegisters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ShouldAbortActivation
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  OutAbortCode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Siren_Phasetrance_C::ShouldAbortActivation(unsigned char* OutAbortCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ShouldAbortActivation");

	UActionSkill_Siren_Phasetrance_C_ShouldAbortActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAbortCode != nullptr)
		*OutAbortCode = params.OutAbortCode;

	return params.ReturnValue;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetActionSkillWidgetKeyframe
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UActionSkill_Siren_Phasetrance_C::GetActionSkillWidgetKeyframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetActionSkillWidgetKeyframe");

	UActionSkill_Siren_Phasetrance_C_GetActionSkillWidgetKeyframe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ResetCounters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionSkill_Siren_Phasetrance_C::ResetCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ResetCounters");

	UActionSkill_Siren_Phasetrance_C_ResetCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetMaxCooldownModifier
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EGbxAttributeModifierType      ModifierType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Siren_Phasetrance_C::GetMaxCooldownModifier(EGbxAttributeModifierType* ModifierType, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetMaxCooldownModifier");

	UActionSkill_Siren_Phasetrance_C_GetMaxCooldownModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierType != nullptr)
		*ModifierType = params.ModifierType;
	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindSpreadTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::FindSpreadTarget(class AActor** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindSpreadTarget");

	UActionSkill_Siren_Phasetrance_C_FindSpreadTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.StartAttack
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionSkill_Siren_Phasetrance_C::StartAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.StartAttack");

	UActionSkill_Siren_Phasetrance_C_StartAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Calculate Leech Heal Amount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Don_t_Adjust                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_Siren_Phasetrance_C::Calculate_Leech_Heal_Amount(float Damage, bool Don_t_Adjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Calculate Leech Heal Amount");

	UActionSkill_Siren_Phasetrance_C_Calculate_Leech_Heal_Amount_Params params;
	params.Damage = Damage;
	params.Don_t_Adjust = Don_t_Adjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_Siren_Phasetrance_C::GetCooldownRestartPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetCooldownRestartPercent");

	UActionSkill_Siren_Phasetrance_C_GetCooldownRestartPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Siren_Phasetrance_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnStartActionAbility");

	UActionSkill_Siren_Phasetrance_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UActionSkill_Siren_Phasetrance_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnActivated");

	UActionSkill_Siren_Phasetrance_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RecallOrb
// (Event, Protected, BlueprintEvent)

void UActionSkill_Siren_Phasetrance_C::RecallOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RecallOrb");

	UActionSkill_Siren_Phasetrance_C_RecallOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ExecuteUbergraph_ActionSkill_Siren_Phasetrance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Siren_Phasetrance_C::ExecuteUbergraph_ActionSkill_Siren_Phasetrance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ExecuteUbergraph_ActionSkill_Siren_Phasetrance");

	UActionSkill_Siren_Phasetrance_C_ExecuteUbergraph_ActionSkill_Siren_Phasetrance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Phasetrance_RecallOrb__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UActionSkill_Siren_Phasetrance_C::Phasetrance_RecallOrb__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Phasetrance_RecallOrb__DelegateSignature");

	UActionSkill_Siren_Phasetrance_C_Phasetrance_RecallOrb__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
