// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveCDM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::AnointRemoveCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveCDM");

	UAbility_AnointParent_C_AnointRemoveCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointRegisterCDM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointRegisterCDM(bool Register, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointRegisterCDM");

	UAbility_AnointParent_C_AnointRegisterCDM_Params params;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::AnointRemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveEffect");

	UAbility_AnointParent_C_AnointRemoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointTriggerEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointTriggerEffect");

	UAbility_AnointParent_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillReadied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointOnActionSkillReadied(class UOakActionAbility* ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillReadied");

	UAbility_AnointParent_C_AnointOnActionSkillReadied_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillActivated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillActivated");

	UAbility_AnointParent_C_AnointOnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillCoolingDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillCoolingDown");

	UAbility_AnointParent_C_AnointOnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnPlayerAbilitySlotChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerAbilitySlotData* SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_OnPlayerAbilitySlotChanged(class UOakPlayerAbilitySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnPlayerAbilitySlotChanged");

	UAbility_AnointParent_C_AnointParent_OnPlayerAbilitySlotChanged_Params params;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SetBinds
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::AnointParent_SetBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SetBinds");

	UAbility_AnointParent_C_AnointParent_SetBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillCoolingDown");

	UAbility_AnointParent_C_AnointParent_OnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillActivated");

	UAbility_AnointParent_C_AnointParent_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillReadied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_OnActionSkillReadied(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillReadied");

	UAbility_AnointParent_C_AnointParent_OnActionSkillReadied_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_BeastmasterActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_BeastmasterActionSkillActivated(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_BeastmasterActionSkillActivated");

	UAbility_AnointParent_C_AnointParent_BeastmasterActionSkillActivated_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OperativeActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgets> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_OperativeActionSkillActivated(TEnumAsByte<EOperativeGadgets> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OperativeActionSkillActivated");

	UAbility_AnointParent_C_AnointParent_OperativeActionSkillActivated_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SirenPhaseGraspedEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPhaseTranceElementalType      Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_SirenPhaseGraspedEnemy(class AActor* Enemy, EPhaseTranceElementalType Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SirenPhaseGraspedEnemy");

	UAbility_AnointParent_C_AnointParent_SirenPhaseGraspedEnemy_Params params;
	params.Enemy = Enemy;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_PhaseGraspEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_PhaseGraspEnded(bool Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_PhaseGraspEnded");

	UAbility_AnointParent_C_AnointParent_PhaseGraspEnded_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::AnointParent_HulkedOutStarted(bool res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutStarted");

	UAbility_AnointParent_C_AnointParent_HulkedOutStarted_Params params;
	params.res = res;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutEnded
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::AnointParent_HulkedOutEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutEnded");

	UAbility_AnointParent_C_AnointParent_HulkedOutEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.OnDeactivated");

	UAbility_AnointParent_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.OnActivated");

	UAbility_AnointParent_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.BindBeastmasterEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::BindBeastmasterEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindBeastmasterEvents");

	UAbility_AnointParent_C_BindBeastmasterEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.BindOperativeEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::BindOperativeEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindOperativeEvents");

	UAbility_AnointParent_C_BindOperativeEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.BindSirenEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::BindSirenEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindSirenEvents");

	UAbility_AnointParent_C_BindSirenEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.BindGunnerEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_C::BindGunnerEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindGunnerEvents");

	UAbility_AnointParent_C_BindGunnerEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent.Ability_AnointParent_C.ExecuteUbergraph_Ability_AnointParent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_C::ExecuteUbergraph_Ability_AnointParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.ExecuteUbergraph_Ability_AnointParent");

	UAbility_AnointParent_C_ExecuteUbergraph_Ability_AnointParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
