// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_NervesOfSteel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassiveSkill_Operative_NervesOfSteel_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.CalculateAbilityState");

	UPassiveSkill_Operative_NervesOfSteel_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_NervesOfSteel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnActivated");

	UPassiveSkill_Operative_NervesOfSteel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Operative_NervesOfSteel_C::InTheZone_OnResourcePoolFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolFilled");

	UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolFilled_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolNotFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Operative_NervesOfSteel_C::InTheZone_OnResourcePoolNotFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolNotFilled");

	UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolNotFilled_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Operative_NervesOfSteel_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnAbilityTimerEnded");

	UPassiveSkill_Operative_NervesOfSteel_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_NervesOfSteel_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnResumed");

	UPassiveSkill_Operative_NervesOfSteel_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_NervesOfSteel_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnPaused");

	UPassiveSkill_Operative_NervesOfSteel_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_NervesOfSteel_C::ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel");

	UPassiveSkill_Operative_NervesOfSteel_C_ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
