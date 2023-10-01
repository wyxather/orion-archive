// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Snowdrift_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Snowdrift_C::GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1");

	UAbility_Artifact_Snowdrift_C_GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Snowdrift_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnActivated");

	UAbility_Artifact_Snowdrift_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.StopSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Snowdrift_C::StopSliding(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.StopSliding");

	UAbility_Artifact_Snowdrift_C_StopSliding_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Snowdrift_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerStarted");

	UAbility_Artifact_Snowdrift_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Snowdrift_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerEnded");

	UAbility_Artifact_Snowdrift_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.ExecuteUbergraph_Ability_Artifact_Snowdrift
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Snowdrift_C::ExecuteUbergraph_Ability_Artifact_Snowdrift(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.ExecuteUbergraph_Ability_Artifact_Snowdrift");

	UAbility_Artifact_Snowdrift_C_ExecuteUbergraph_Ability_Artifact_Snowdrift_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
