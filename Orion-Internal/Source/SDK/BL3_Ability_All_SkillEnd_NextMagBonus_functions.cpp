// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_NextMagBonus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointTriggerEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_NextMagBonus_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointTriggerEffect");

	UAbility_All_SkillEnd_NextMagBonus_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_SkillEnd_NextMagBonus_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.OnActivated");

	UAbility_All_SkillEnd_NextMagBonus_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.BindReloadEvent
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillEnd_NextMagBonus_C::BindReloadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.BindReloadEvent");

	UAbility_All_SkillEnd_NextMagBonus_C_BindReloadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.UnbindReloadEvent
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillEnd_NextMagBonus_C::UnbindReloadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.UnbindReloadEvent");

	UAbility_All_SkillEnd_NextMagBonus_C_UnbindReloadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointRemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillEnd_NextMagBonus_C::AnointRemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointRemoveEffect");

	UAbility_All_SkillEnd_NextMagBonus_C_AnointRemoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ReloadedWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_NextMagBonus_C::ReloadedWeapon(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ReloadedWeapon");

	UAbility_All_SkillEnd_NextMagBonus_C_ReloadedWeapon_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_NextMagBonus_C::ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus");

	UAbility_All_SkillEnd_NextMagBonus_C_ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
