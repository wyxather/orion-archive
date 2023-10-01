// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Radiodead_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Radiodead_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnActivated");

	UAbility_Artifact_Radiodead_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.StopSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Radiodead_C::StopSliding(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.StopSliding");

	UAbility_Artifact_Radiodead_C_StopSliding_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Radiodead_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerStarted");

	UAbility_Artifact_Radiodead_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Radiodead_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerEnded");

	UAbility_Artifact_Radiodead_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.ExecuteUbergraph_Ability_Artifact_Radiodead
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Radiodead_C::ExecuteUbergraph_Ability_Artifact_Radiodead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.ExecuteUbergraph_Ability_Artifact_Radiodead");

	UAbility_Artifact_Radiodead_C_ExecuteUbergraph_Ability_Artifact_Radiodead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
