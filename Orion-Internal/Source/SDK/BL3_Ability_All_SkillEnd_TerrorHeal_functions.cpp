// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_TerrorHeal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.AnointTriggerEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_TerrorHeal_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.AnointTriggerEffect");

	UAbility_All_SkillEnd_TerrorHeal_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_SkillEnd_TerrorHeal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.OnActivated");

	UAbility_All_SkillEnd_TerrorHeal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.SkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_TerrorHeal_C::SkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.SkillCoolingDown");

	UAbility_All_SkillEnd_TerrorHeal_C_SkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_TerrorHeal_C::ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal");

	UAbility_All_SkillEnd_TerrorHeal_C_ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
