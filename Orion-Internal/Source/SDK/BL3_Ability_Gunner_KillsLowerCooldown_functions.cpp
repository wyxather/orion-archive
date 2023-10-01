// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_KillsLowerCooldown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointTriggerEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_KillsLowerCooldown_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointTriggerEffect");

	UAbility_Gunner_KillsLowerCooldown_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.KilledEnemy
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Gunner_KillsLowerCooldown_C::KilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.KilledEnemy");

	UAbility_Gunner_KillsLowerCooldown_C_KilledEnemy_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointRemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_Gunner_KillsLowerCooldown_C::AnointRemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointRemoveEffect");

	UAbility_Gunner_KillsLowerCooldown_C_AnointRemoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.BindKillEffect
// (BlueprintCallable, BlueprintEvent)

void UAbility_Gunner_KillsLowerCooldown_C::BindKillEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.BindKillEffect");

	UAbility_Gunner_KillsLowerCooldown_C_BindKillEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_KillsLowerCooldown_C::ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown");

	UAbility_Gunner_KillsLowerCooldown_C_ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
