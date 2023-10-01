// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Overrun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.GetFallbackBlitzLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void UPassiveSkill_Siren_Overrun_C::GetFallbackBlitzLocation(struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.GetFallbackBlitzLocation");

	UPassiveSkill_Siren_Overrun_C_GetFallbackBlitzLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnBlitzStarted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Overrun_C::OnBlitzStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnBlitzStarted");

	UPassiveSkill_Siren_Overrun_C_OnBlitzStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ResetOverrunCooldown
// (Public, BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Overrun_C::ResetOverrunCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ResetOverrunCooldown");

	UPassiveSkill_Siren_Overrun_C_ResetOverrunCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassiveSkill_Siren_Overrun_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.CalculateAbilityState");

	UPassiveSkill_Siren_Overrun_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_Overrun_C::BlitzCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzCausedDeath");

	UPassiveSkill_Siren_Overrun_C_BlitzCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Overrun_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnActivated");

	UPassiveSkill_Siren_Overrun_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzOnPerformMelee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerMeleeData*        MeleeData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  MeleeTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Overrun_C::BlitzOnPerformMelee(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzOnPerformMelee");

	UPassiveSkill_Siren_Overrun_C_BlitzOnPerformMelee_Params params;
	params.MeleeData = MeleeData;
	params.bSuccess = bSuccess;
	params.MeleeTarget = MeleeTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ExecuteUbergraph_PassiveSkill_Siren_Overrun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Overrun_C::ExecuteUbergraph_PassiveSkill_Siren_Overrun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ExecuteUbergraph_PassiveSkill_Siren_Overrun");

	UPassiveSkill_Siren_Overrun_C_ExecuteUbergraph_PassiveSkill_Siren_Overrun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
