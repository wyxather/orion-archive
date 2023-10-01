// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_TechSlaughter1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_9
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::OnDialogSequenceFinished_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_9");

	UMission_TechSlaughter1_C_OnDialogSequenceFinished_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_8
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::OnDialogSequenceFinished_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_8");

	UMission_TechSlaughter1_C_OnDialogSequenceFinished_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_7
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::OnDialogSequenceFinished_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_7");

	UMission_TechSlaughter1_C_OnDialogSequenceFinished_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_6
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::OnDialogSequenceFinished_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_6");

	UMission_TechSlaughter1_C_OnDialogSequenceFinished_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Set_Round1(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round1");

	UMission_TechSlaughter1_C_Set_Round1_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_TurnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_TurnIn");

	UMission_TechSlaughter1_C_Obj_TurnIn_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_TurnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_TurnIn");

	UMission_TechSlaughter1_C_Set_TurnIn_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_TurnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_Update_TurnIn(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_TurnIn");

	UMission_TechSlaughter1_C_MCE_Update_TurnIn_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_Rounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_Rounds(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_Rounds");

	UMission_TechSlaughter1_C_Obj_Rounds_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_RoundCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_Update_RoundCount(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_RoundCount");

	UMission_TechSlaughter1_C_MCE_Update_RoundCount_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAllDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_PlayersAllDied(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAllDied");

	UMission_TechSlaughter1_C_MCE_PlayersAllDied_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_SwitchUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_SwitchUsed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_SwitchUsed");

	UMission_TechSlaughter1_C_MCE_SwitchUsed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_AssembleRound1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_INVIS_AssembleRound1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_AssembleRound1");

	UMission_TechSlaughter1_C_Obj_INVIS_AssembleRound1_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_StartRound_2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_2");

	UMission_TechSlaughter1_C_Obj_StartRound_2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_CompleteWave_2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_2");

	UMission_TechSlaughter1_C_Obj_CompleteWave_2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_Update_CompleteWave_2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_2");

	UMission_TechSlaughter1_C_MCE_Update_CompleteWave_2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_OptionalObjective_Round1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round1");

	UMission_TechSlaughter1_C_Obj_OptionalObjective_Round1_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Set_Round_3(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_3");

	UMission_TechSlaughter1_C_Set_Round_3_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Set_Round_4(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_4");

	UMission_TechSlaughter1_C_Set_Round_4_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Set_Round_5(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_5");

	UMission_TechSlaughter1_C_Set_Round_5_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Set_Round_6(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_6");

	UMission_TechSlaughter1_C_Set_Round_6_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_INVIS_Assemble2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble2");

	UMission_TechSlaughter1_C_Obj_INVIS_Assemble2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_Rounds_Objective__PROXY()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY");

	UMission_TechSlaughter1_C__Obj_Rounds_Objective__PROXY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_1
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_Rounds_Objective__PROXY_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_1");

	UMission_TechSlaughter1_C__Obj_Rounds_Objective__PROXY_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_2
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_Rounds_Objective__PROXY_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_2");

	UMission_TechSlaughter1_C__Obj_Rounds_Objective__PROXY_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_3
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_Rounds_Objective__PROXY_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_3");

	UMission_TechSlaughter1_C__Obj_Rounds_Objective__PROXY_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_StartRound_3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_3");

	UMission_TechSlaughter1_C_Obj_StartRound_3_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_StartRound_4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_4");

	UMission_TechSlaughter1_C_Obj_StartRound_4_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_StartRound_5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_5");

	UMission_TechSlaughter1_C_Obj_StartRound_5_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_StartRound_6(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_6");

	UMission_TechSlaughter1_C_Obj_StartRound_6_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_INVIS_Assemble3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble3");

	UMission_TechSlaughter1_C_Obj_INVIS_Assemble3_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_INVIS_Assemble4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble4");

	UMission_TechSlaughter1_C_Obj_INVIS_Assemble4_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_INVIS_Assemble5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble5");

	UMission_TechSlaughter1_C_Obj_INVIS_Assemble5_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_CompleteWave_3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_3");

	UMission_TechSlaughter1_C_Obj_CompleteWave_3_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_Obj_CompleteWave_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_Update_Obj_CompleteWave_3(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_Obj_CompleteWave_3");

	UMission_TechSlaughter1_C_MCE_Update_Obj_CompleteWave_3_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_OptionalObjective_Round2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round2");

	UMission_TechSlaughter1_C_Obj_OptionalObjective_Round2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_CompleteWave_4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_4");

	UMission_TechSlaughter1_C_Obj_CompleteWave_4_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_Update_CompleteWave_4(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_4");

	UMission_TechSlaughter1_C_MCE_Update_CompleteWave_4_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_OptionalObjective_Round3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round3");

	UMission_TechSlaughter1_C_Obj_OptionalObjective_Round3_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_CompleteWave_5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_5");

	UMission_TechSlaughter1_C_Obj_CompleteWave_5_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_Update_CompleteWave_5(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_5");

	UMission_TechSlaughter1_C_MCE_Update_CompleteWave_5_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_OptionalObjective_Round4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round4");

	UMission_TechSlaughter1_C_Obj_OptionalObjective_Round4_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_CompleteWave_6(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_6");

	UMission_TechSlaughter1_C_Obj_CompleteWave_6_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_Update_CompleteWave_6(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_6");

	UMission_TechSlaughter1_C_MCE_Update_CompleteWave_6_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_OptionalObjective_Round5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round5");

	UMission_TechSlaughter1_C_Obj_OptionalObjective_Round5_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersNotAssembled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_PlayersNotAssembled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersNotAssembled");

	UMission_TechSlaughter1_C_MCE_PlayersNotAssembled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAssembled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_PlayersAssembled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAssembled");

	UMission_TechSlaughter1_C_MCE_PlayersAssembled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_PlayerDied(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayerDied");

	UMission_TechSlaughter1_C_MCE_PlayerDied_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_LightSwitchMover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_LightSwitchMover(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_LightSwitchMover");

	UMission_TechSlaughter1_C_Obj_LightSwitchMover_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_ChangeLights
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_ChangeLights(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_ChangeLights");

	UMission_TechSlaughter1_C_MCE_ChangeLights_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_ResetLights
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_ResetLights(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_ResetLights");

	UMission_TechSlaughter1_C_MCE_ResetLights_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_4
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_LightSwitchMover_Objective__PROXY_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_4");

	UMission_TechSlaughter1_C__Obj_LightSwitchMover_Objective__PROXY_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_5
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_LightSwitchMover_Objective__PROXY_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_5");

	UMission_TechSlaughter1_C__Obj_LightSwitchMover_Objective__PROXY_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_6
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_LightSwitchMover_Objective__PROXY_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_6");

	UMission_TechSlaughter1_C__Obj_LightSwitchMover_Objective__PROXY_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_7
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_LightSwitchMover_Objective__PROXY_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_7");

	UMission_TechSlaughter1_C__Obj_LightSwitchMover_Objective__PROXY_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_TorgueBossVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_TorgueBossVO(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_TorgueBossVO");

	UMission_TechSlaughter1_C_MCE_TorgueBossVO_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_PlayersDiedInRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::Obj_INVIS_PlayersDiedInRound(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_PlayersDiedInRound");

	UMission_TechSlaughter1_C_Obj_INVIS_PlayersDiedInRound_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAllDiedInRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_PlayersAllDiedInRound(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAllDiedInRound");

	UMission_TechSlaughter1_C_MCE_PlayersAllDiedInRound_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_8
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_INVIS_PlayersDiedInRound_Objective__PROXY_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_8");

	UMission_TechSlaughter1_C__Obj_INVIS_PlayersDiedInRound_Objective__PROXY_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_9
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_INVIS_PlayersDiedInRound_Objective__PROXY_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_9");

	UMission_TechSlaughter1_C__Obj_INVIS_PlayersDiedInRound_Objective__PROXY_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_10
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_INVIS_PlayersDiedInRound_Objective__PROXY_10()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_10");

	UMission_TechSlaughter1_C__Obj_INVIS_PlayersDiedInRound_Objective__PROXY_10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_11
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughter1_C::_Obj_INVIS_PlayersDiedInRound_Objective__PROXY_11()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedInRound_Objective] PROXY_11");

	UMission_TechSlaughter1_C__Obj_INVIS_PlayersDiedInRound_Objective__PROXY_11_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionActiveLoad
// (Event, Public, BlueprintEvent)

void UMission_TechSlaughter1_C::MissionActiveLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionActiveLoad");

	UMission_TechSlaughter1_C_MissionActiveLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionActive
// (Event, Public, BlueprintEvent)

void UMission_TechSlaughter1_C::MissionActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionActive");

	UMission_TechSlaughter1_C_MissionActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_UpdateOptionals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_UpdateOptionals(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_UpdateOptionals");

	UMission_TechSlaughter1_C_MCE_UpdateOptionals_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UMission_TechSlaughter1_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionKickoff");

	UMission_TechSlaughter1_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_BC_NotAllAssembled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::MCE_BC_NotAllAssembled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_BC_NotAllAssembled");

	UMission_TechSlaughter1_C_MCE_BC_NotAllAssembled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.ExecuteUbergraph_Mission_TechSlaughter1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughter1_C::ExecuteUbergraph_Mission_TechSlaughter1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.ExecuteUbergraph_Mission_TechSlaughter1");

	UMission_TechSlaughter1_C_ExecuteUbergraph_Mission_TechSlaughter1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
