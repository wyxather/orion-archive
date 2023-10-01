// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_ElementalNullifier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.OperativeTriggerKillSkillEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                KillLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 KilledEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_ElementalNullifier_C::OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.OperativeTriggerKillSkillEffect");

	UPassiveSkill_Operative_ElementalNullifier_C_OperativeTriggerKillSkillEffect_Params params;
	params.KillLocation = KillLocation;
	params.KilledEnemy = KilledEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Operative_ElementalNullifier_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.OnAbilityTimerEnded");

	UPassiveSkill_Operative_ElementalNullifier_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_ElementalNullifier_C::ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier");

	UPassiveSkill_Operative_ElementalNullifier_C_ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
