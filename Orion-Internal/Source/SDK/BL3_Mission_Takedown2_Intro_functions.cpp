// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Takedown2_Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.OnDialogSequenceFinished_3
// (BlueprintCallable, BlueprintEvent)

void UMission_Takedown2_Intro_C::OnDialogSequenceFinished_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.OnDialogSequenceFinished_3");

	UMission_Takedown2_Intro_C_OnDialogSequenceFinished_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_Navigate_TakedownTwoPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Set_Navigate_TakedownTwoPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_Navigate_TakedownTwoPlanet");

	UMission_Takedown2_Intro_C_Set_Navigate_TakedownTwoPlanet_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_Navigate_TakedownTwoPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Obj_Navigate_TakedownTwoPlanet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_Navigate_TakedownTwoPlanet");

	UMission_Takedown2_Intro_C_Obj_Navigate_TakedownTwoPlanet_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_Navigate_Takedown2Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::UPDATE_Navigate_Takedown2Planet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_Navigate_Takedown2Planet");

	UMission_Takedown2_Intro_C_UPDATE_Navigate_Takedown2Planet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ADVANCE_Navigate_Takedown2Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::ADVANCE_Navigate_Takedown2Planet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ADVANCE_Navigate_Takedown2Planet");

	UMission_Takedown2_Intro_C_ADVANCE_Navigate_Takedown2Planet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_UseDropPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_UseDropPod");

	UMission_Takedown2_Intro_C_Set_UseDropPod_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_PlanetTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Set_PlanetTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_PlanetTitleCard");

	UMission_Takedown2_Intro_C_Set_PlanetTitleCard_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_MissionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Set_MissionEnd(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_MissionEnd");

	UMission_Takedown2_Intro_C_Set_MissionEnd_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_ReNavigate_Takedown2Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Obj_ReNavigate_Takedown2Planet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_ReNavigate_Takedown2Planet");

	UMission_Takedown2_Intro_C_Obj_ReNavigate_Takedown2Planet_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_ReNavigate_Takedown2Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::UPDATE_ReNavigate_Takedown2Planet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_ReNavigate_Takedown2Planet");

	UMission_Takedown2_Intro_C_UPDATE_ReNavigate_Takedown2Planet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_UseDropPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_UseDropPod");

	UMission_Takedown2_Intro_C_Obj_UseDropPod_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_TITLECARD_TAKEDOWNTWOPLANET
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Obj_TITLECARD_TAKEDOWNTWOPLANET(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_TITLECARD_TAKEDOWNTWOPLANET");

	UMission_Takedown2_Intro_C_Obj_TITLECARD_TAKEDOWNTWOPLANET_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_MissionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::Obj_MissionEnd(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_MissionEnd");

	UMission_Takedown2_Intro_C_Obj_MissionEnd_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UMission_Takedown2_Intro_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.MissionKickoff");

	UMission_Takedown2_Intro_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.AdvanceTo_PlanetTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::AdvanceTo_PlanetTitleCard(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.AdvanceTo_PlanetTitleCard");

	UMission_Takedown2_Intro_C_AdvanceTo_PlanetTitleCard_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ExecuteUbergraph_Mission_Takedown2_Intro
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_Intro_C::ExecuteUbergraph_Mission_Takedown2_Intro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ExecuteUbergraph_Mission_Takedown2_Intro");

	UMission_Takedown2_Intro_C_ExecuteUbergraph_Mission_Takedown2_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
