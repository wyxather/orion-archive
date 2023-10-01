// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_FearPassThroughMe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.GetNovaDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_FearPassThroughMe_C::GetNovaDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.GetNovaDamage");

	UPassiveSkill_Siren_FearPassThroughMe_C_GetNovaDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.GetPhaseTranceElementalInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  OutClass                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EPhaseTranceElementalType      OutType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_FearPassThroughMe_C::GetPhaseTranceElementalInfo(class UClass** OutClass, EPhaseTranceElementalType* OutType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.GetPhaseTranceElementalInfo");

	UPassiveSkill_Siren_FearPassThroughMe_C_GetPhaseTranceElementalInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClass != nullptr)
		*OutClass = params.OutClass;
	if (OutType != nullptr)
		*OutType = params.OutType;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_FearPassThroughMe_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.OnActivated");

	UPassiveSkill_Siren_FearPassThroughMe_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_FearPassThroughMe_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.OnAbilityTimerEnded");

	UPassiveSkill_Siren_FearPassThroughMe_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_FearPassThroughMe_C::FearPassThroughMe_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnCausedElementalEffect");

	UPassiveSkill_Siren_FearPassThroughMe_C_FearPassThroughMe_OnCausedElementalEffect_Params params;
	params.Causer = Causer;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnCuasedMaxResourceEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakStatusEffectResourceEffectType ResourceEffectType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_FearPassThroughMe_C::FearPassThroughMe_OnCuasedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnCuasedMaxResourceEffect");

	UPassiveSkill_Siren_FearPassThroughMe_C_FearPassThroughMe_OnCuasedMaxResourceEffect_Params params;
	params.Target = Target;
	params.ResourceEffectType = ResourceEffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_FearPassThroughMe_C::FearPassThroughMe_OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnDeath");

	UPassiveSkill_Siren_FearPassThroughMe_C_FearPassThroughMe_OnDeath_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.DoFearPassThroughMeNova
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_FearPassThroughMe_C::DoFearPassThroughMeNova()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.DoFearPassThroughMeNova");

	UPassiveSkill_Siren_FearPassThroughMe_C_DoFearPassThroughMeNova_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_FearPassThroughMe_C::ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe");

	UPassiveSkill_Siren_FearPassThroughMe_C_ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
