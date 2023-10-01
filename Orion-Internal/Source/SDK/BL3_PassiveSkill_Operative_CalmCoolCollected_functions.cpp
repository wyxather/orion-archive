// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_CalmCoolCollected_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_CalmCoolCollected_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.OnActivated");

	UPassiveSkill_Operative_CalmCoolCollected_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_OnCausedMaxResourceEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakStatusEffectResourceEffectType ResourceEffectType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_OnCausedMaxResourceEffect");

	UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_OnCausedMaxResourceEffect_Params params;
	params.Target = Target;
	params.ResourceEffectType = ResourceEffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ShieldEffect
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_ShieldEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ShieldEffect");

	UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ShieldEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_RegenEffect
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_RegenEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_RegenEffect");

	UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_RegenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ActionSkillEffect
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_ActionSkillEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ActionSkillEffect");

	UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ActionSkillEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.Clone_OnFreezeEnemy
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Operative_CalmCoolCollected_C::Clone_OnFreezeEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.Clone_OnFreezeEnemy");

	UPassiveSkill_Operative_CalmCoolCollected_C_Clone_OnFreezeEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_CalmCoolCollected_C::CCC_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_OnActionSkillActivated");

	UPassiveSkill_Operative_CalmCoolCollected_C_CCC_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_Clone_OnCausedMaxResourceEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakStatusEffectResourceEffectType ResourceEffectType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_CalmCoolCollected_C::CCC_Clone_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_Clone_OnCausedMaxResourceEffect");

	UPassiveSkill_Operative_CalmCoolCollected_C_CCC_Clone_OnCausedMaxResourceEffect_Params params;
	params.Target = Target;
	params.ResourceEffectType = ResourceEffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_CalmCoolCollected_C::ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected");

	UPassiveSkill_Operative_CalmCoolCollected_C_ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
