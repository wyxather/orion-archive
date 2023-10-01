// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_CitizenScience_Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.OnDialogSequenceFinished_3
// (BlueprintCallable, BlueprintEvent)

void UMission_CitizenScience_Intro_C::OnDialogSequenceFinished_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.OnDialogSequenceFinished_3");

	UMission_CitizenScience_Intro_C_OnDialogSequenceFinished_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Set_InteractWithMachine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_CitizenScience_Intro_C::Set_InteractWithMachine(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Set_InteractWithMachine");

	UMission_CitizenScience_Intro_C_Set_InteractWithMachine_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Obj_InteractWithMachine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_CitizenScience_Intro_C::Obj_InteractWithMachine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Obj_InteractWithMachine");

	UMission_CitizenScience_Intro_C_Obj_InteractWithMachine_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UMission_CitizenScience_Intro_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MissionKickoff");

	UMission_CitizenScience_Intro_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MCE_InteractedWithMachine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_CitizenScience_Intro_C::MCE_InteractedWithMachine(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MCE_InteractedWithMachine");

	UMission_CitizenScience_Intro_C_MCE_InteractedWithMachine_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.ExecuteUbergraph_Mission_CitizenScience_Intro
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_CitizenScience_Intro_C::ExecuteUbergraph_Mission_CitizenScience_Intro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.ExecuteUbergraph_Mission_CitizenScience_Intro");

	UMission_CitizenScience_Intro_C_ExecuteUbergraph_Mission_CitizenScience_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
