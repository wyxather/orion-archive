// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_JustAPrick_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_9
// (BlueprintCallable, BlueprintEvent)

void UMission_JustAPrick_C::OnDialogSequenceFinished_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_9");

	UMission_JustAPrick_C_OnDialogSequenceFinished_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_8
// (BlueprintCallable, BlueprintEvent)

void UMission_JustAPrick_C::OnDialogSequenceFinished_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_8");

	UMission_JustAPrick_C_OnDialogSequenceFinished_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_7
// (BlueprintCallable, BlueprintEvent)

void UMission_JustAPrick_C::OnDialogSequenceFinished_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_7");

	UMission_JustAPrick_C_OnDialogSequenceFinished_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_6
// (BlueprintCallable, BlueprintEvent)

void UMission_JustAPrick_C::OnDialogSequenceFinished_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_6");

	UMission_JustAPrick_C_OnDialogSequenceFinished_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.Set_CollectHypo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::Set_CollectHypo(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.Set_CollectHypo");

	UMission_JustAPrick_C_Set_CollectHypo_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_CollectHypo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::Obj_CollectHypo(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_CollectHypo");

	UMission_JustAPrick_C_Obj_CollectHypo_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.Set_TurnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.Set_TurnIn");

	UMission_JustAPrick_C_Set_TurnIn_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_TurnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_TurnIn");

	UMission_JustAPrick_C_Obj_TurnIn_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_BringHyposBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::MCE_BringHyposBack(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_BringHyposBack");

	UMission_JustAPrick_C_MCE_BringHyposBack_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_PlayerCollectedHypo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::MCE_PlayerCollectedHypo(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_PlayerCollectedHypo");

	UMission_JustAPrick_C_MCE_PlayerCollectedHypo_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.OBJ_Hidden_SteamJetActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::OBJ_Hidden_SteamJetActivated(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.OBJ_Hidden_SteamJetActivated");

	UMission_JustAPrick_C_OBJ_Hidden_SteamJetActivated_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.Update_SteamJetActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::Update_SteamJetActivated(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.Update_SteamJetActivated");

	UMission_JustAPrick_C_Update_SteamJetActivated_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UMission_JustAPrick_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.MissionKickoff");

	UMission_JustAPrick_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_JustAPrick.Mission_JustAPrick_C.ExecuteUbergraph_Mission_JustAPrick
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_JustAPrick_C::ExecuteUbergraph_Mission_JustAPrick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_JustAPrick.Mission_JustAPrick_C.ExecuteUbergraph_Mission_JustAPrick");

	UMission_JustAPrick_C_ExecuteUbergraph_Mission_JustAPrick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
