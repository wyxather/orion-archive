// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxMission_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxMission.Mission.UpdateObjective
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*       Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UMission::UpdateObjective(class UMissionObjective* Objective, class UObject* Context, unsigned char Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.UpdateObjective");

	UMission_UpdateObjective_Params params;
	params.Objective = Objective;
	params.Context = Context;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.UnpauseObjectiveChain
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*       Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UMission::UnpauseObjectiveChain(class UMissionObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.UnpauseObjectiveChain");

	UMission_UnpauseObjectiveChain_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*       ObjectiveToThwart              (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjectiveSet*    ObjectiveSet                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJumpToSet                     (Parm, ZeroConstructor, IsPlainOldData)

void UMission::ThwartObjectiveAndAdvanceObjectiveSet(class UMissionObjective* ObjectiveToThwart, class UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet");

	UMission_ThwartObjectiveAndAdvanceObjectiveSet_Params params;
	params.ObjectiveToThwart = ObjectiveToThwart;
	params.ObjectiveSet = ObjectiveSet;
	params.bJumpToSet = bJumpToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.StopMissionTimer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UMission::StopMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.StopMissionTimer");

	UMission_StopMissionTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.StartMissionTimer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UMission::StartMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.StartMissionTimer");

	UMission_StartMissionTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionTimerExpired
// (Event, Public, BlueprintEvent)

void UMission::MissionTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionTimerExpired");

	UMission_MissionTimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionRemoteEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMission::MissionRemoteEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionRemoteEvent");

	UMission_MissionRemoteEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.Mission.MissionNotStarted
// (Event, Public, BlueprintEvent)

void UMission::MissionNotStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionNotStarted");

	UMission_MissionNotStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionKickoff
// (Event, Public, BlueprintEvent)

void UMission::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionKickoff");

	UMission_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionGameModeEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMission::MissionGameModeEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionGameModeEvent");

	UMission_MissionGameModeEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.Mission.MissionFailed
// (Event, Public, BlueprintEvent)

void UMission::MissionFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionFailed");

	UMission_MissionFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionCompleteLoad
// (Event, Public, BlueprintEvent)

void UMission::MissionCompleteLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionCompleteLoad");

	UMission_MissionCompleteLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionComplete
// (Event, Public, BlueprintEvent)

void UMission::MissionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionComplete");

	UMission_MissionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionActiveLoad
// (Event, Public, BlueprintEvent)

void UMission::MissionActiveLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionActiveLoad");

	UMission_MissionActiveLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.MissionActive
// (Event, Public, BlueprintEvent)

void UMission::MissionActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionActive");

	UMission_MissionActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.JumpToObjectiveSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjectiveSet*    ObjectiveSet                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBranchingMission            (Parm, ZeroConstructor, IsPlainOldData)

void UMission::JumpToObjectiveSet(class UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.JumpToObjectiveSet");

	UMission_JumpToObjectiveSet_Params params;
	params.ObjectiveSet = ObjectiveSet;
	params.bIsBranchingMission = bIsBranchingMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.GetPausableChainedObjectivesList
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class UMissionObjective*> ObjectivesList                 (Parm, OutParm, ZeroConstructor)

void UMission::GetPausableChainedObjectivesList(TArray<class UMissionObjective*>* ObjectivesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetPausableChainedObjectivesList");

	UMission_GetPausableChainedObjectivesList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectivesList != nullptr)
		*ObjectivesList = params.ObjectivesList;
}


// Function GbxMission.Mission.GetObjectivesList
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class UMissionObjective*> ObjectivesList                 (Parm, OutParm, ZeroConstructor)

void UMission::GetObjectivesList(TArray<class UMissionObjective*>* ObjectivesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetObjectivesList");

	UMission_GetObjectivesList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectivesList != nullptr)
		*ObjectivesList = params.ObjectivesList;
}


// Function GbxMission.Mission.GetObjectiveSetsList
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class UMissionObjectiveSet*> ObjectiveSetsList              (Parm, OutParm, ZeroConstructor)

void UMission::GetObjectiveSetsList(TArray<class UMissionObjectiveSet*>* ObjectiveSetsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetObjectiveSetsList");

	UMission_GetObjectiveSetsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectiveSetsList != nullptr)
		*ObjectiveSetsList = params.ObjectiveSetsList;
}


// Function GbxMission.Mission.GetMissionRemainingSeconds
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMission::GetMissionRemainingSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetMissionRemainingSeconds");

	UMission_GetMissionRemainingSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.Mission.FailMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UMission::FailMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.FailMission");

	UMission_FailMission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.EndKickoff
// (Final, Native, Public, BlueprintCallable)

void UMission::EndKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.EndKickoff");

	UMission_EndKickoff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.CompleteMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UMission::CompleteMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.CompleteMission");

	UMission_CompleteMission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.ClearObjective
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*       Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UMission::ClearObjective(class UMissionObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.ClearObjective");

	UMission_ClearObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.AdvanceObjectiveSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjectiveSet*    ObjectiveSet                   (Parm, ZeroConstructor, IsPlainOldData)

void UMission::AdvanceObjectiveSet(class UMissionObjectiveSet* ObjectiveSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.AdvanceObjectiveSet");

	UMission_AdvanceObjectiveSet_Params params;
	params.ObjectiveSet = ObjectiveSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.AddTimeToMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            SecondsToAdd                   (Parm, ZeroConstructor, IsPlainOldData)

void UMission::AddTimeToMission(int SecondsToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.AddTimeToMission");

	UMission_AddTimeToMission_Params params;
	params.SecondsToAdd = SecondsToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.Mission.ActivateMission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjectiveSet*    InitialObjectiveSet            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetAsTrackedMission           (Parm, ZeroConstructor, IsPlainOldData)

void UMission::ActivateMission(class UMissionObjectiveSet* InitialObjectiveSet, bool bSetAsTrackedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.ActivateMission");

	UMission_ActivateMission_Params params;
	params.InitialObjectiveSet = InitialObjectiveSet;
	params.bSetAsTrackedMission = bSetAsTrackedMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMissionAvailableResult> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionDirectorComponent::IsAnyMissionAvailable(TEnumAsByte<EMissionAvailableResult>* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable");

	UMissionDirectorComponent_IsAnyMissionAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function GbxMission.MissionDirectorComponent.IsAnyMissionActive
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMissionActiveResult> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionDirectorComponent::IsAnyMissionActive(TEnumAsByte<EMissionActiveResult>* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.IsAnyMissionActive");

	UMissionDirectorComponent_IsAnyMissionActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function GbxMission.MissionDirectorComponent.GetAllMissions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          AllMissions                    (Parm, OutParm, ZeroConstructor)

void UMissionDirectorComponent::GetAllMissions(TArray<class UClass*>* AllMissions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.GetAllMissions");

	UMissionDirectorComponent_GetAllMissions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllMissions != nullptr)
		*AllMissions = params.AllMissions;
}


// Function GbxMission.MissionDirectorComponent.ClearMissions
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UMissionDirectorComponent::ClearMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.ClearMissions");

	UMissionDirectorComponent_ClearMissions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDirectorComponent.AddMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InMission                      (Parm, ZeroConstructor, IsPlainOldData)

void UMissionDirectorComponent::AddMission(class UClass* InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.AddMission");

	UMissionDirectorComponent_AddMission_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDirectorComponent.ActivateAvailableMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UMissionDirectorComponent::ActivateAvailableMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.ActivateAvailableMission");

	UMissionDirectorComponent_ActivateAvailableMission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionIconComponent.SetIconState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMissionIconState> InState                        (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIconComponent::SetIconState(TEnumAsByte<EMissionIconState> InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.SetIconState");

	UMissionIconComponent_SetIconState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionIconComponent.SetIconEnabledCondition
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxCondition*           EnabledCondition               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionIconComponent::SetIconEnabledCondition(class UGbxCondition* EnabledCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.SetIconEnabledCondition");

	UMissionIconComponent_SetIconEnabledCondition_Params params;
	params.EnabledCondition = EnabledCondition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionIconComponent.SetDisabledState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIconComponent::SetDisabledState(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.SetDisabledState");

	UMissionIconComponent_SetDisabledState_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionIconComponent.OnRep_Enabled
// (Final, Native, Private)
// Parameters:
// bool                           bPreviouslyEnabled             (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIconComponent::OnRep_Enabled(bool bPreviouslyEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.OnRep_Enabled");

	UMissionIconComponent_OnRep_Enabled_Params params;
	params.bPreviouslyEnabled = bPreviouslyEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionIconComponent.IsIconEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionIconComponent::IsIconEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.IsIconEnabled");

	UMissionIconComponent_IsIconEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionIconComponent.GetRequiredInterface
// (Final, Native, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMissionIconComponent::GetRequiredInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.GetRequiredInterface");

	UMissionIconComponent_GetRequiredInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionIconComponent::EnabledConditionRequiresNativeClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass");

	UMissionIconComponent_EnabledConditionRequiresNativeClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionTracker.OnStatIncrement
// (Native, Public)
// Parameters:
// class AActor*                  StatContext                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTracker::OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionTracker.OnStatIncrement");

	AMissionTracker_OnStatIncrement_Params params;
	params.StatContext = StatContext;
	params.StatId = StatId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionTracker.OnRep_LevelLoadEventsIssued
// (Final, Native, Public)

void AMissionTracker::OnRep_LevelLoadEventsIssued()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionTracker.OnRep_LevelLoadEventsIssued");

	AMissionTracker_OnRep_LevelLoadEventsIssued_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionTracker.OnRep_ActiveIcons
// (Final, Native, Public)

void AMissionTracker::OnRep_ActiveIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionTracker.OnRep_ActiveIcons");

	AMissionTracker_OnRep_ActiveIcons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ServerTrackPreviousActiveMissionInList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void UPlayerMissionComponent::ServerTrackPreviousActiveMissionInList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ServerTrackPreviousActiveMissionInList");

	UPlayerMissionComponent_ServerTrackPreviousActiveMissionInList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ServerTrackNextActiveMissionInList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void UPlayerMissionComponent::ServerTrackNextActiveMissionInList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ServerTrackNextActiveMissionInList");

	UPlayerMissionComponent_ServerTrackNextActiveMissionInList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ServerSetTrackedMission(class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission");

	UPlayerMissionComponent_ServerSetTrackedMission_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionStatus>    Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientUpdateMissionStatus(class UClass* MissionClass, TEnumAsByte<EMissionStatus> Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus");

	UPlayerMissionComponent_ClientUpdateMissionStatus_Params params;
	params.MissionClass = MissionClass;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjectiveSet*    ActiveObjectiveSet             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMissionObjective*> DormantObjectives              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerMissionComponent::ClientUpdateActiveObjectiveSet(class UClass* MissionClass, class UMissionObjectiveSet* ActiveObjectiveSet, TArray<class UMissionObjective*> DormantObjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet");

	UPlayerMissionComponent_ClientUpdateActiveObjectiveSet_Params params;
	params.MissionClass = MissionClass;
	params.ActiveObjectiveSet = ActiveObjectiveSet;
	params.DormantObjectives = DormantObjectives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientTrackedMissionChanged(class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged");

	UPlayerMissionComponent_ClientTrackedMissionChanged_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjective*       UpdatedObjective               (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ObjectiveBit                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientObjectiveUpdated(class UClass* MissionClass, class UMissionObjective* UpdatedObjective, uint32_t ObjectiveBit, unsigned char Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated");

	UPlayerMissionComponent_ClientObjectiveUpdated_Params params;
	params.MissionClass = MissionClass;
	params.UpdatedObjective = UpdatedObjective;
	params.ObjectiveBit = ObjectiveBit;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjectiveSet*    CompletedObjectiveSet          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientObjectiveSetCompleted(class UClass* MissionClass, class UMissionObjectiveSet* CompletedObjectiveSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted");

	UPlayerMissionComponent_ClientObjectiveSetCompleted_Params params;
	params.MissionClass = MissionClass;
	params.CompletedObjectiveSet = CompletedObjectiveSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjective*       ClearedObjective               (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientObjectiveCleared(class UClass* MissionClass, class UMissionObjective* ClearedObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared");

	UPlayerMissionComponent_ClientObjectiveCleared_Params params;
	params.MissionClass = MissionClass;
	params.ClearedObjective = ClearedObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjective*       Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientObjectiveChainUnpaused(class UClass* MissionClass, class UMissionObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused");

	UPlayerMissionComponent_ClientObjectiveChainUnpaused_Params params;
	params.MissionClass = MissionClass;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientMissionTimerStopped(class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped");

	UPlayerMissionComponent_ClientMissionTimerStopped_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientMissionTimerStarted(class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted");

	UPlayerMissionComponent_ClientMissionTimerStarted_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SecondsToAdd                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientMissionTimerChanged(class UClass* MissionClass, float SecondsToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged");

	UPlayerMissionComponent_ClientMissionTimerChanged_Params params;
	params.MissionClass = MissionClass;
	params.SecondsToAdd = SecondsToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientMissionRegistered
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientMissionRegistered(class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionRegistered");

	UPlayerMissionComponent_ClientMissionRegistered_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjective*       Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIssueActiveEvent              (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientDormantObjectiveRemoved(class UClass* MissionClass, class UMissionObjective* Objective, bool bIssueActiveEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved");

	UPlayerMissionComponent_ClientDormantObjectiveRemoved_Params params;
	params.MissionClass = MissionClass;
	params.Objective = Objective;
	params.bIssueActiveEvent = bIssueActiveEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMissionObjective*       Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMissionComponent::ClientDormantObjectiveAdded(class UClass* MissionClass, class UMissionObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded");

	UPlayerMissionComponent_ClientDormantObjectiveAdded_Params params;
	params.MissionClass = MissionClass;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDebugMenu.SelectMissionGraph
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MissionGraphId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMissionDebugMenu::SelectMissionGraph(const struct FName& MissionGraphId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.SelectMissionGraph");

	UMissionDebugMenu_SelectMissionGraph_Params params;
	params.MissionGraphId = MissionGraphId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDebugMenu.NotifyMissionActivationCheatStart
// (Final, Native, Public, BlueprintCallable, Const)

void UMissionDebugMenu::NotifyMissionActivationCheatStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.NotifyMissionActivationCheatStart");

	UMissionDebugMenu_NotifyMissionActivationCheatStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   MissionId                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FGbxCascadingListItemData> OutItems                       (Parm, OutParm, ZeroConstructor)

void UMissionDebugMenu::GetObjectiveSetItemsForMission(const struct FName& MissionId, TArray<struct FGbxCascadingListItemData>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission");

	UMissionDebugMenu_GetObjectiveSetItemsForMission_Params params;
	params.MissionId = MissionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function GbxMission.MissionDebugMenu.GetMissionWithId
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   MissionId                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMission*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMission* UMissionDebugMenu::GetMissionWithId(const struct FName& MissionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetMissionWithId");

	UMissionDebugMenu_GetMissionWithId_Params params;
	params.MissionId = MissionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionDebugMenu.GetMissionStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   MissionId                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EMissionStatus>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EMissionStatus> UMissionDebugMenu::GetMissionStatus(const struct FName& MissionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetMissionStatus");

	UMissionDebugMenu_GetMissionStatus_Params params;
	params.MissionId = MissionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMissionDebugStatus> Status                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxCascadingListItemData> OutItems                       (Parm, OutParm, ZeroConstructor)

void UMissionDebugMenu::GetItemsForMissionStatus(TEnumAsByte<EMissionDebugStatus> Status, TArray<struct FGbxCascadingListItemData>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus");

	UMissionDebugMenu_GetItemsForMissionStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxCascadingListItemData> OutItems                       (Parm, OutParm, ZeroConstructor)

void UMissionDebugMenu::GetItemsForMissionGraph(TArray<struct FGbxCascadingListItemData>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph");

	UMissionDebugMenu_GetItemsForMissionGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function GbxMission.MissionDebugMenu.CompleteMission
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MissionId                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMissionDebugMenu::CompleteMission(const struct FName& MissionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.CompleteMission");

	UMissionDebugMenu_CompleteMission_Params params;
	params.MissionId = MissionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MissionId                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ObjectiveSetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMissionDebugMenu::AdvanceToObjectiveSet(const struct FName& MissionId, const struct FName& ObjectiveSetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet");

	UMissionDebugMenu_AdvanceToObjectiveSet_Params params;
	params.MissionId = MissionId;
	params.ObjectiveSetId = ObjectiveSetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionDebugMenu.AdvanceMission
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MissionId                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMissionDebugMenu::AdvanceMission(const struct FName& MissionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.AdvanceMission");

	UMissionDebugMenu_AdvanceMission_Params params;
	params.MissionId = MissionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveReference ObjectiveRef                   (Parm)

void UMissionFunctionLibrary::STATIC_UpdateMissionObjectiveRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef");

	UMissionFunctionLibrary_UpdateMissionObjectiveRef_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveRef = ObjectiveRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_TrackPreviousActiveMissionInList(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList");

	UMissionFunctionLibrary_TrackPreviousActiveMissionInList_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_TrackNextActiveMissionInList(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList");

	UMissionFunctionLibrary_TrackNextActiveMissionInList_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.TrackActiveMission
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_TrackActiveMission(class UObject* WorldContextObject, class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.TrackActiveMission");

	UMissionFunctionLibrary_TrackActiveMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMissionEventReference  EventRef                       (Parm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OptionalContext                (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_SendMissionEventWithContext(const struct FMissionEventReference& EventRef, class UObject* WorldContextObject, class UObject* OptionalContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext");

	UMissionFunctionLibrary_SendMissionEventWithContext_Params params;
	params.EventRef = EventRef;
	params.WorldContextObject = WorldContextObject;
	params.OptionalContext = OptionalContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.SendMissionEvent
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionEventReference  EventRef                       (Parm)
// class UObject*                 OptionalContext                (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_SendMissionEvent(class UObject* WorldContextObject, const struct FMissionEventReference& EventRef, class UObject* OptionalContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.SendMissionEvent");

	UMissionFunctionLibrary_SendMissionEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EventRef = EventRef;
	params.OptionalContext = OptionalContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UClass>   Mission                        (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMissionFunctionLibrary::STATIC_ResolveMissionSoftClassReference(TSoftObjectPtr<class UClass> Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference");

	UMissionFunctionLibrary_ResolveMissionSoftClassReference_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveSetReference ObjectiveSetRef                (Parm)
// bool                           bIsBranchingMission            (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_JumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef");

	UMissionFunctionLibrary_JumpToMissionObjectiveSetRef_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveSetRef = ObjectiveSetRef;
	params.bIsBranchingMission = bIsBranchingMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TSoftObjectPtr<class UClass>   MissionClass                   (Parm)
// TArray<TSoftObjectPtr<class UMissionObjectiveSet>> SoftObjectiveSetList           (Parm, OutParm, ZeroConstructor)

void UMissionFunctionLibrary::STATIC_GetSoftObjectiveSetListForMission(TSoftObjectPtr<class UClass> MissionClass, TArray<TSoftObjectPtr<class UMissionObjectiveSet>>* SoftObjectiveSetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission");

	UMissionFunctionLibrary_GetSoftObjectiveSetListForMission_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoftObjectiveSetList != nullptr)
		*SoftObjectiveSetList = params.SoftObjectiveSetList;
}


// Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMission*                MissionObj                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMissionFunctionLibrary::STATIC_GetPlotMissionIndex(class UMission* MissionObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex");

	UMissionFunctionLibrary_GetPlotMissionIndex_Params params;
	params.MissionObj = MissionObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TSoftObjectPtr<class UClass>   MissionClass                   (Parm)
// TArray<struct FName>           NamesList                      (Parm, OutParm, ZeroConstructor)

void UMissionFunctionLibrary::STATIC_GetObjectiveSetNameListForMissionFromAssetSubclass(TSoftObjectPtr<class UClass> MissionClass, TArray<struct FName>* NamesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass");

	UMissionFunctionLibrary_GetObjectiveSetNameListForMissionFromAssetSubclass_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NamesList != nullptr)
		*NamesList = params.NamesList;
}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           NamesList                      (Parm, OutParm, ZeroConstructor)

void UMissionFunctionLibrary::STATIC_GetObjectiveSetNameListForMission(class UClass* MissionClass, TArray<struct FName>* NamesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission");

	UMissionFunctionLibrary_GetObjectiveSetNameListForMission_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NamesList != nullptr)
		*NamesList = params.NamesList;
}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMissionObjectiveSet*> ObjectiveSetList               (Parm, OutParm, ZeroConstructor)

void UMissionFunctionLibrary::STATIC_GetObjectiveSetListForMission(class UClass* MissionClass, TArray<class UMissionObjectiveSet*>* ObjectiveSetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission");

	UMissionFunctionLibrary_GetObjectiveSetListForMission_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectiveSetList != nullptr)
		*ObjectiveSetList = params.ObjectiveSetList;
}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TSoftObjectPtr<class UClass>   Mission                        (Parm)
// TArray<struct FName>           NamesList                      (Parm, OutParm, ZeroConstructor)

void UMissionFunctionLibrary::STATIC_GetObjectiveNameListForMissionFromAssetSubclass(TSoftObjectPtr<class UClass> Mission, TArray<struct FName>* NamesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass");

	UMissionFunctionLibrary_GetObjectiveNameListForMissionFromAssetSubclass_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NamesList != nullptr)
		*NamesList = params.NamesList;
}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           NamesList                      (Parm, OutParm, ZeroConstructor)

void UMissionFunctionLibrary::STATIC_GetObjectiveNameListForMission(class UClass* MissionClass, TArray<struct FName>* NamesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission");

	UMissionFunctionLibrary_GetObjectiveNameListForMission_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NamesList != nullptr)
		*NamesList = params.NamesList;
}


// Function GbxMission.MissionFunctionLibrary.GetMissionStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionStatus>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EMissionStatus> UMissionFunctionLibrary::STATIC_GetMissionStatus(class UObject* WorldContextObject, class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionStatus");

	UMissionFunctionLibrary_GetMissionStatus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveReference ObjectiveRef                   (Parm)
// class UObject*                 OptionalContext                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionObjectiveStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EMissionObjectiveStatus> UMissionFunctionLibrary::STATIC_GetMissionObjectiveStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, class UObject* OptionalContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef");

	UMissionFunctionLibrary_GetMissionObjectiveStatusRef_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveRef = ObjectiveRef;
	params.OptionalContext = OptionalContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveSetReference ObjectiveSetRef                (Parm)
// TEnumAsByte<EMissionObjectiveSetStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EMissionObjectiveSetStatus> UMissionFunctionLibrary::STATIC_GetMissionObjectiveSetStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef");

	UMissionFunctionLibrary_GetMissionObjectiveSetStatusRef_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveSetRef = ObjectiveSetRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveReference ObjectiveRef                   (Parm)
// int                            CurrentObjectiveCount          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TotalObjectiveCount            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_GetMissionObjectiveCount(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, int* CurrentObjectiveCount, int* TotalObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount");

	UMissionFunctionLibrary_GetMissionObjectiveCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveRef = ObjectiveRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentObjectiveCount != nullptr)
		*CurrentObjectiveCount = params.CurrentObjectiveCount;
	if (TotalObjectiveCount != nullptr)
		*TotalObjectiveCount = params.TotalObjectiveCount;
}


// Function GbxMission.MissionFunctionLibrary.GetMissionLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMission*                MissionObj                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMissionFunctionLibrary::STATIC_GetMissionLevel(class UMission* MissionObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionLevel");

	UMissionFunctionLibrary_GetMissionLevel_Params params;
	params.MissionObj = MissionObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveReferenceWeak ObjectiveReference             (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMissionFunctionLibrary::STATIC_GetMissionClassFromObjectiveReferenceWeak(const struct FMissionObjectiveReferenceWeak& ObjectiveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak");

	UMissionFunctionLibrary_GetMissionClassFromObjectiveReferenceWeak_Params params;
	params.ObjectiveReference = ObjectiveReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveReference ObjectiveReference             (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMissionFunctionLibrary::STATIC_GetMissionClassFromObjectiveReference(const struct FMissionObjectiveReference& ObjectiveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference");

	UMissionFunctionLibrary_GetMissionClassFromObjectiveReference_Params params;
	params.ObjectiveReference = ObjectiveReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMission*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMission* UMissionFunctionLibrary::STATIC_GetMission(class UObject* WorldContextObject, class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMission");

	UMissionFunctionLibrary_GetMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           NamesList                      (Parm, OutParm, ZeroConstructor)

void UMissionFunctionLibrary::STATIC_GetEventNameListForMission(class UClass* MissionClass, TArray<struct FName>* NamesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission");

	UMissionFunctionLibrary_GetEventNameListForMission_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NamesList != nullptr)
		*NamesList = params.NamesList;
}


// Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMissionFunctionLibrary::STATIC_GetCurrentlyTrackedMission(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission");

	UMissionFunctionLibrary_GetCurrentlyTrackedMission_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetActivePlotMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMissionFunctionLibrary::STATIC_GetActivePlotMission(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetActivePlotMission");

	UMissionFunctionLibrary_GetActivePlotMission_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.GetActiveMissions
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMission*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMission*> UMissionFunctionLibrary::STATIC_GetActiveMissions(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetActiveMissions");

	UMissionFunctionLibrary_GetActiveMissions_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMissionObjectiveSetReference MissionObjectiveSetRef         (Parm, OutParm, ReferenceParm)
// class UClass*                  MissionClass                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ObjectiveSet                   (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_FillMissionObjectiveSetRef(const struct FName& ObjectiveSet, struct FMissionObjectiveSetReference* MissionObjectiveSetRef, class UClass** MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef");

	UMissionFunctionLibrary_FillMissionObjectiveSetRef_Params params;
	params.ObjectiveSet = ObjectiveSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionObjectiveSetRef != nullptr)
		*MissionObjectiveSetRef = params.MissionObjectiveSetRef;
	if (MissionClass != nullptr)
		*MissionClass = params.MissionClass;
}


// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMissionObjectiveReferenceWeak MissionObjectiveRef            (Parm, OutParm, ReferenceParm)
// class UClass*                  MissionClass                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_FillMissionObjectiveRefWeak(const struct FName& Objective, struct FMissionObjectiveReferenceWeak* MissionObjectiveRef, class UClass** MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak");

	UMissionFunctionLibrary_FillMissionObjectiveRefWeak_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionObjectiveRef != nullptr)
		*MissionObjectiveRef = params.MissionObjectiveRef;
	if (MissionClass != nullptr)
		*MissionClass = params.MissionClass;
}


// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMissionObjectiveReference MissionObjectiveRef            (Parm, OutParm, ReferenceParm)
// class UClass*                  MissionClass                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_FillMissionObjectiveRef(const struct FName& Objective, struct FMissionObjectiveReference* MissionObjectiveRef, class UClass** MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef");

	UMissionFunctionLibrary_FillMissionObjectiveRef_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionObjectiveRef != nullptr)
		*MissionObjectiveRef = params.MissionObjectiveRef;
	if (MissionClass != nullptr)
		*MissionClass = params.MissionClass;
}


// Function GbxMission.MissionFunctionLibrary.FillMissionEventRef
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMissionEventReference  MissionEventRef                (Parm, OutParm, ReferenceParm)
// class UClass*                  MissionClass                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_FillMissionEventRef(const struct FName& EventName, struct FMissionEventReference* MissionEventRef, class UClass** MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionEventRef");

	UMissionFunctionLibrary_FillMissionEventRef_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionEventRef != nullptr)
		*MissionEventRef = params.MissionEventRef;
	if (MissionClass != nullptr)
		*MissionClass = params.MissionClass;
}


// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveSetReference A                              (Parm)
// struct FMissionObjectiveSetReference B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionFunctionLibrary::STATIC_EqualEqual_MissionObjectiveSetReference(const struct FMissionObjectiveSetReference& A, const struct FMissionObjectiveSetReference& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference");

	UMissionFunctionLibrary_EqualEqual_MissionObjectiveSetReference_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveReference A                              (Parm)
// struct FMissionObjectiveReference B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionFunctionLibrary::STATIC_EqualEqual_MissionObjectiveReference(const struct FMissionObjectiveReference& A, const struct FMissionObjectiveReference& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference");

	UMissionFunctionLibrary_EqualEqual_MissionObjectiveReference_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveSetReference ObjectiveSetRef                (Parm)
// bool                           bIsBranchingMission            (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_DebugJumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef");

	UMissionFunctionLibrary_DebugJumpToMissionObjectiveSetRef_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveSetRef = ObjectiveSetRef;
	params.bIsBranchingMission = bIsBranchingMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.CreateMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMission*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMission* UMissionFunctionLibrary::STATIC_CreateMission(class UObject* WorldContextObject, class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.CreateMission");

	UMissionFunctionLibrary_CreateMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionFunctionLibrary.CompleteMission
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_CompleteMission(class UObject* WorldContextObject, class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.CompleteMission");

	UMissionFunctionLibrary_CompleteMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveReference BreadcrumbObjectiveRef         (Parm)

void UMissionFunctionLibrary::STATIC_AdvanceToBreadcrumbObjective(class UObject* WorldContextObject, const struct FMissionObjectiveReference& BreadcrumbObjectiveRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective");

	UMissionFunctionLibrary_AdvanceToBreadcrumbObjective_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BreadcrumbObjectiveRef = BreadcrumbObjectiveRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveSetReference ObjectiveSetRef                (Parm)

void UMissionFunctionLibrary::STATIC_AdvanceMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef");

	UMissionFunctionLibrary_AdvanceMissionObjectiveSetRef_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveSetRef = ObjectiveSetRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionObjectiveSetReference ObjectiveSetRef                (Parm)

void UMissionFunctionLibrary::STATIC_ActivateMissionAtObjectiveSet(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet");

	UMissionFunctionLibrary_ActivateMissionAtObjectiveSet_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectiveSetRef = ObjectiveSetRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionFunctionLibrary.ActivateMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UMissionFunctionLibrary::STATIC_ActivateMission(class UObject* WorldContextObject, class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.ActivateMission");

	UMissionFunctionLibrary_ActivateMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionLocationData.GetRequiredInterface
// (Final, Native, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMissionLocationData::GetRequiredInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionLocationData.GetRequiredInterface");

	UMissionLocationData_GetRequiredInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionLocationData::EnabledConditionRequiresNativeClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass");

	UMissionLocationData_EnabledConditionRequiresNativeClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FMissionObjectiveReference> OutMissionObjectives           (Parm, OutParm, ZeroConstructor)

void UMissionObjectiveReferenceInterface::GetMissionObjectiveReferences(TArray<struct FMissionObjectiveReference>* OutMissionObjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences");

	UMissionObjectiveReferenceInterface_GetMissionObjectiveReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMissionObjectives != nullptr)
		*OutMissionObjectives = params.OutMissionObjectives;
}


// Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FMissionObjectiveSetReference> OutMissionObjectiveSets        (Parm, OutParm, ZeroConstructor)

void UMissionObjectiveSetReferenceInterface::GetMissionObjectiveSetReferences(TArray<struct FMissionObjectiveSetReference>* OutMissionObjectiveSets)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences");

	UMissionObjectiveSetReferenceInterface_GetMissionObjectiveSetReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMissionObjectiveSets != nullptr)
		*OutMissionObjectiveSets = params.OutMissionObjectiveSets;
}


// Function GbxMission.MissionObserverComponent.ObserverMission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UMissionObserverComponent::ObserverMission(class UClass* MissionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObserverComponent.ObserverMission");

	UMissionObserverComponent_ObserverMission_Params params;
	params.MissionClass = MissionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionObserverComponent.GetUpdateEventObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         OutMissionInitialized          (Parm, OutParm, ZeroConstructor)
// TArray<class UObject*>         OutMissionUpdate               (Parm, OutParm, ZeroConstructor)
// TArray<class UObject*>         OutMissionObjectiveUpdate      (Parm, OutParm, ZeroConstructor)
// TArray<class UObject*>         OutMissionObjectiveSetUpdate   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionObserverComponent::GetUpdateEventObject(TArray<class UObject*>* OutMissionInitialized, TArray<class UObject*>* OutMissionUpdate, TArray<class UObject*>* OutMissionObjectiveUpdate, TArray<class UObject*>* OutMissionObjectiveSetUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObserverComponent.GetUpdateEventObject");

	UMissionObserverComponent_GetUpdateEventObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMissionInitialized != nullptr)
		*OutMissionInitialized = params.OutMissionInitialized;
	if (OutMissionUpdate != nullptr)
		*OutMissionUpdate = params.OutMissionUpdate;
	if (OutMissionObjectiveUpdate != nullptr)
		*OutMissionObjectiveUpdate = params.OutMissionObjectiveUpdate;
	if (OutMissionObjectiveSetUpdate != nullptr)
		*OutMissionObjectiveSetUpdate = params.OutMissionObjectiveSetUpdate;

	return params.ReturnValue;
}


// Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FReplicatedMissionData  MissionData                    (ConstParm, Parm, ReferenceParm)

void UMissionObserverPlayerInterface::ClientReceiveMissionData(const struct FReplicatedMissionData& MissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData");

	UMissionObserverPlayerInterface_ClientReceiveMissionData_Params params;
	params.MissionData = MissionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxMission.MissionReferenceInterface.GetMissionClassReferences
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          OutMissions                    (Parm, OutParm, ZeroConstructor)

void UMissionReferenceInterface::GetMissionClassReferences(TArray<class UClass*>* OutMissions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionReferenceInterface.GetMissionClassReferences");

	UMissionReferenceInterface_GetMissionClassReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMissions != nullptr)
		*OutMissions = params.OutMissions;
}


// Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionReferenceInterface::CheckForMissionReferenceErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors");

	UMissionReferenceInterface_CheckForMissionReferenceErrors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
