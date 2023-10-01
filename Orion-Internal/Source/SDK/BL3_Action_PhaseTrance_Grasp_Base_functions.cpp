// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Grasp_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GetGraspDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::GetGraspDuration(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GetGraspDuration");

	UAction_PhaseTrance_Grasp_Base_C_GetGraspDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GraspTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::GraspTarget(class AActor* GraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GraspTarget");

	UAction_PhaseTrance_Grasp_Base_C_GraspTarget_Params params;
	params.GraspTarget = GraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetSearchFailed
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::HandleGraspTargetSearchFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetSearchFailed");

	UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetSearchFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetFound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::HandleGraspTargetFound(class AOakCharacter* GraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetFound");

	UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetFound_Params params;
	params.GraspTarget = GraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PerformGraspFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::PerformGraspFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PerformGraspFeedback");

	UAction_PhaseTrance_Grasp_Base_C_PerformGraspFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindInstantPhaseWebGraspTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::FindInstantPhaseWebGraspTarget(class AOakCharacter** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindInstantPhaseWebGraspTarget");

	UAction_PhaseTrance_Grasp_Base_C_FindInstantPhaseWebGraspTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Failure_08B09A8F480F3929252234B2AB30A873
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::Failure_08B09A8F480F3929252234B2AB30A873(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Failure_08B09A8F480F3929252234B2AB30A873");

	UAction_PhaseTrance_Grasp_Base_C_Failure_08B09A8F480F3929252234B2AB30A873_Params params;
	params.QueryResult = QueryResult;
	params.Location = Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Success_08B09A8F480F3929252234B2AB30A873
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::Success_08B09A8F480F3929252234B2AB30A873(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Success_08B09A8F480F3929252234B2AB30A873");

	UAction_PhaseTrance_Grasp_Base_C_Success_08B09A8F480F3929252234B2AB30A873_Params params;
	params.QueryResult = QueryResult;
	params.Location = Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillReactDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::TriggerActionSkillReactDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillReactDialogue");

	UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillReactDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillUseDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::TriggerActionSkillUseDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillUseDialogue");

	UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillUseDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.OnServerBegin");

	UAction_PhaseTrance_Grasp_Base_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartRumble
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::AN_PerformGraspStartRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartRumble");

	UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartCS
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::AN_PerformGraspStartCS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartCS");

	UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartCS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PlayPhaseTranceHandEffects
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::PlayPhaseTranceHandEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PlayPhaseTranceHandEffects");

	UAction_PhaseTrance_Grasp_Base_C_PlayPhaseTranceHandEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindGraspTargetAsync
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Grasp_Base_C::FindGraspTargetAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindGraspTargetAsync");

	UAction_PhaseTrance_Grasp_Base_C_FindGraspTargetAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.ExecuteUbergraph_Action_PhaseTrance_Grasp_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Grasp_Base_C::ExecuteUbergraph_Action_PhaseTrance_Grasp_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.ExecuteUbergraph_Action_PhaseTrance_Grasp_Base");

	UAction_PhaseTrance_Grasp_Base_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
