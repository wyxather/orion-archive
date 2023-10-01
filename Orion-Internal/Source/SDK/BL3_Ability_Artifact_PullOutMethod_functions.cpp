// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_PullOutMethod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.Ammo Return
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_PullOutMethod_C::Ammo_Return(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.Ammo Return");

	UAbility_Artifact_PullOutMethod_C_Ammo_Return_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_PullOutMethod_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnActivated");

	UAbility_Artifact_PullOutMethod_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.SlamEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_PullOutMethod_C::SlamEnd(const struct FGroundSlamEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.SlamEnd");

	UAbility_Artifact_PullOutMethod_C_SlamEnd_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_PullOutMethod_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnAbilityTimerStarted");

	UAbility_Artifact_PullOutMethod_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_PullOutMethod_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnAbilityTimerEnded");

	UAbility_Artifact_PullOutMethod_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.ExecuteUbergraph_Ability_Artifact_PullOutMethod
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_PullOutMethod_C::ExecuteUbergraph_Ability_Artifact_PullOutMethod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.ExecuteUbergraph_Ability_Artifact_PullOutMethod");

	UAbility_Artifact_PullOutMethod_C_ExecuteUbergraph_Ability_Artifact_PullOutMethod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
