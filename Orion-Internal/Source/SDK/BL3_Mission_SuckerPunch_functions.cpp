// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_SuckerPunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_9
// (BlueprintCallable, BlueprintEvent)

void UMission_SuckerPunch_C::OnDialogSequenceFinished_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_9");

	UMission_SuckerPunch_C_OnDialogSequenceFinished_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_8
// (BlueprintCallable, BlueprintEvent)

void UMission_SuckerPunch_C::OnDialogSequenceFinished_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_8");

	UMission_SuckerPunch_C_OnDialogSequenceFinished_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_7
// (BlueprintCallable, BlueprintEvent)

void UMission_SuckerPunch_C::OnDialogSequenceFinished_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_7");

	UMission_SuckerPunch_C_OnDialogSequenceFinished_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_6
// (BlueprintCallable, BlueprintEvent)

void UMission_SuckerPunch_C::OnDialogSequenceFinished_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_6");

	UMission_SuckerPunch_C_OnDialogSequenceFinished_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_DestroyCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_DestroyCamera(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_DestroyCamera");

	UMission_SuckerPunch_C_MCE_Update_DestroyCamera_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KilledSelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Set_KilledSelf(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KilledSelf");

	UMission_SuckerPunch_C_Set_KilledSelf_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.[Obj_KillYourself_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)

void UMission_SuckerPunch_C::_Obj_KillYourself_Objective__PROXY()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.[Obj_KillYourself_Objective] PROXY");

	UMission_SuckerPunch_C__Obj_KillYourself_Objective__PROXY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_KillYourself
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_KillYourself(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_KillYourself");

	UMission_SuckerPunch_C_MCE_Update_KillYourself_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_DestroyCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_DestroyCamera(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_DestroyCamera");

	UMission_SuckerPunch_C_Obj_DestroyCamera_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_KillYourself
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_KillYourself(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_KillYourself");

	UMission_SuckerPunch_C_Obj_KillYourself_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KillYourself
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Set_KillYourself(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KillYourself");

	UMission_SuckerPunch_C_Set_KillYourself_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_DestroyedCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Set_DestroyedCamera(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_DestroyedCamera");

	UMission_SuckerPunch_C_Set_DestroyedCamera_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.[Obj_DestroyCamera_Objective] PROXY_1
// (BlueprintCallable, BlueprintEvent)

void UMission_SuckerPunch_C::_Obj_DestroyCamera_Objective__PROXY_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.[Obj_DestroyCamera_Objective] PROXY_1");

	UMission_SuckerPunch_C__Obj_DestroyCamera_Objective__PROXY_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera1_Inv
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_Camera1_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera1_Inv");

	UMission_SuckerPunch_C_Obj_Camera1_Inv_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera2_Inv
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_Camera2_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera2_Inv");

	UMission_SuckerPunch_C_Obj_Camera2_Inv_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera3_Inv
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_Camera3_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera3_Inv");

	UMission_SuckerPunch_C_Obj_Camera3_Inv_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera4_Inv
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_Camera4_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera4_Inv");

	UMission_SuckerPunch_C_Obj_Camera4_Inv_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera5_Inv
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_Camera5_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera5_Inv");

	UMission_SuckerPunch_C_Obj_Camera5_Inv_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_Camera1(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera1");

	UMission_SuckerPunch_C_MCE_Update_Camera1_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_Camera2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera2");

	UMission_SuckerPunch_C_MCE_Update_Camera2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_Camera3(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera3");

	UMission_SuckerPunch_C_MCE_Update_Camera3_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_Camera4(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera4");

	UMission_SuckerPunch_C_MCE_Update_Camera4_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_Camera5(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera5");

	UMission_SuckerPunch_C_MCE_Update_Camera5_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UMission_SuckerPunch_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MissionKickoff");

	UMission_SuckerPunch_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KickoffPart2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Set_KickoffPart2(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KickoffPart2");

	UMission_SuckerPunch_C_Set_KickoffPart2_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_FakeObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_FakeObjective(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_FakeObjective");

	UMission_SuckerPunch_C_Obj_FakeObjective_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_UnlockButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::Obj_UnlockButton(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_UnlockButton");

	UMission_SuckerPunch_C_Obj_UnlockButton_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_UnlockButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::MCE_Update_UnlockButton(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_UnlockButton");

	UMission_SuckerPunch_C_MCE_Update_UnlockButton_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_SuckerPunch.Mission_SuckerPunch_C.ExecuteUbergraph_Mission_SuckerPunch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_SuckerPunch_C::ExecuteUbergraph_Mission_SuckerPunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_SuckerPunch.Mission_SuckerPunch_C.ExecuteUbergraph_Mission_SuckerPunch");

	UMission_SuckerPunch_C_ExecuteUbergraph_Mission_SuckerPunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
