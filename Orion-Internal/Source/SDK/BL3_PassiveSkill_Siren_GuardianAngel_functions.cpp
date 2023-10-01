// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_GuardianAngel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GetNovaDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_GuardianAngel_C::GetNovaDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GetNovaDamage");

	UPassiveSkill_Siren_GuardianAngel_C_GetNovaDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnDownStateStart
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_GuardianAngel_C::OnDownStateStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnDownStateStart");

	UPassiveSkill_Siren_GuardianAngel_C_OnDownStateStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_GuardianAngel_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnAbilityTimerEnded");

	UPassiveSkill_Siren_GuardianAngel_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ActiveGuardianAngel
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_GuardianAngel_C::ActiveGuardianAngel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ActiveGuardianAngel");

	UPassiveSkill_Siren_GuardianAngel_C_ActiveGuardianAngel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GuardianAngel_OnKilledEnemy
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_GuardianAngel_C::GuardianAngel_OnKilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GuardianAngel_OnKilledEnemy");

	UPassiveSkill_Siren_GuardianAngel_C_GuardianAngel_OnKilledEnemy_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_GuardianAngel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnActivated");

	UPassiveSkill_Siren_GuardianAngel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_GuardianAngel_C::ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel");

	UPassiveSkill_Siren_GuardianAngel_C_ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
