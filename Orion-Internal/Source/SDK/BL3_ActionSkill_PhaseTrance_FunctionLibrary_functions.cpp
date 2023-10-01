// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_PhaseTrance_FunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CanPerformPassiveGhostArmAction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AOakCharacter_Player*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_CanPerformPassiveGhostArmAction(class AOakCharacter_Player* Player, class UObject* __WorldContext, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CanPerformPassiveGhostArmAction");

	UActionSkill_PhaseTrance_FunctionLibrary_C_CanPerformPassiveGhostArmAction_Params params;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.TriggerPhaseTrancePassives
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_TriggerPhaseTrancePassives(class AOakCharacter_Player* Player, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.TriggerPhaseTrancePassives");

	UActionSkill_PhaseTrance_FunctionLibrary_C_TriggerPhaseTrancePassives_Params params;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.IsImmuneToPhaseLock
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_IsImmuneToPhaseLock(class AActor* GraspTarget, class UObject* __WorldContext, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.IsImmuneToPhaseLock");

	UActionSkill_PhaseTrance_FunctionLibrary_C_IsImmuneToPhaseLock_Params params;
	params.GraspTarget = GraspTarget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CalculatePhaseTranceDamage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    ContextSource                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPhaseTranceActivationComboData ComboData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_CalculatePhaseTranceDamage(class AOakCharacter_Player* ContextSource, const struct FPhaseTranceActivationComboData& ComboData, class UObject* __WorldContext, float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CalculatePhaseTranceDamage");

	UActionSkill_PhaseTrance_FunctionLibrary_C_CalculatePhaseTranceDamage_Params params;
	params.ContextSource = ContextSource;
	params.ComboData = ComboData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.GetSirenStatusEffectInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCauseDamageStatusEffectOverrides StatusEffectOverride           (Parm, OutParm)

void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_GetSirenStatusEffectInfo(class UObject* __WorldContext, struct FCauseDamageStatusEffectOverrides* StatusEffectOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.GetSirenStatusEffectInfo");

	UActionSkill_PhaseTrance_FunctionLibrary_C_GetSirenStatusEffectInfo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusEffectOverride != nullptr)
		*StatusEffectOverride = params.StatusEffectOverride;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
