// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillActive_PulseFireNova_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.IsChargeBasedSkill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 ActionSkill                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillActive_PulseFireNova_C::IsChargeBasedSkill(class UObject* ActionSkill, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.IsChargeBasedSkill");

	UAbility_All_SkillActive_PulseFireNova_C_IsChargeBasedSkill_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointOnActionSkillActivated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility**      ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillActive_PulseFireNova_C::AnointOnActionSkillActivated(class UOakActionAbility** ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointOnActionSkillActivated");

	UAbility_All_SkillActive_PulseFireNova_C_AnointOnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointTriggerEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillActive_PulseFireNova_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointTriggerEffect");

	UAbility_All_SkillActive_PulseFireNova_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.TriggerNova
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillActive_PulseFireNova_C::TriggerNova()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.TriggerNova");

	UAbility_All_SkillActive_PulseFireNova_C_TriggerNova_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointRemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillActive_PulseFireNova_C::AnointRemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointRemoveEffect");

	UAbility_All_SkillActive_PulseFireNova_C_AnointRemoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillActive_PulseFireNova_C::ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova");

	UAbility_All_SkillActive_PulseFireNova_C_ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
