// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunnerner_Grizzled_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.MozeKilledEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Gunnerner_Grizzled_C::MozeKilledEvent(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.MozeKilledEvent");

	UPassiveSkill_Gunnerner_Grizzled_C_MozeKilledEvent_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunnerner_Grizzled_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnActivated");

	UPassiveSkill_Gunnerner_Grizzled_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Gunnerner_Grizzled_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerStarted");

	UPassiveSkill_Gunnerner_Grizzled_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Gunnerner_Grizzled_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerEnded");

	UPassiveSkill_Gunnerner_Grizzled_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunnerner_Grizzled_C::ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled");

	UPassiveSkill_Gunnerner_Grizzled_C_ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
