// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_ViolentTapestry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassiveSkill_Siren_ViolentTapestry_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.CalculateAbilityState");

	UPassiveSkill_Siren_ViolentTapestry_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_ViolentTapestry_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.OnActivated");

	UPassiveSkill_Siren_ViolentTapestry_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_ViolentTapestry_C::ViolentTapestry_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedElementalEffect");

	UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedElementalEffect_Params params;
	params.Causer = Causer;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedMaxResourceEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakStatusEffectResourceEffectType ResourceEffectType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_ViolentTapestry_C::ViolentTapestry_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedMaxResourceEffect");

	UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedMaxResourceEffect_Params params;
	params.Target = Target;
	params.ResourceEffectType = ResourceEffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestryTriggerRushStacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RushStacks                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_ViolentTapestry_C::ViolentTapestryTriggerRushStacks(int RushStacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestryTriggerRushStacks");

	UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestryTriggerRushStacks_Params params;
	params.RushStacks = RushStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_ViolentTapestry_C::ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry");

	UPassiveSkill_Siren_ViolentTapestry_C_ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
