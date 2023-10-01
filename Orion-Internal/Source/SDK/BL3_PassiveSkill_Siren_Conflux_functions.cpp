// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Conflux_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.RemoveElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Conflux_C::RemoveElement(class UObject* StatusEffect, class UClass** DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.RemoveElement");

	UPassiveSkill_Siren_Conflux_C_RemoveElement_Params params;
	params.StatusEffect = StatusEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageType != nullptr)
		*DamageType = params.DamageType;
}


// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Conflux_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.OnActivated");

	UPassiveSkill_Siren_Conflux_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_Conflux_C::DamageConfettiOnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedElementalEffect");

	UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedElementalEffect_Params params;
	params.Causer = Causer;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedMaxResourceEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakStatusEffectResourceEffectType ResourceEffectType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Conflux_C::DamageConfettiOnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedMaxResourceEffect");

	UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedMaxResourceEffect_Params params;
	params.Target = Target;
	params.ResourceEffectType = ResourceEffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ReopenGate
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Conflux_C::ReopenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ReopenGate");

	UPassiveSkill_Siren_Conflux_C_ReopenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ExecuteUbergraph_PassiveSkill_Siren_Conflux
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Conflux_C::ExecuteUbergraph_PassiveSkill_Siren_Conflux(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ExecuteUbergraph_PassiveSkill_Siren_Conflux");

	UPassiveSkill_Siren_Conflux_C_ExecuteUbergraph_PassiveSkill_Siren_Conflux_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
