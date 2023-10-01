// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Takedown2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Takedown2.Mission_Takedown2_C.OnDialogSequenceFinished_5
// (BlueprintCallable, BlueprintEvent)

void UMission_Takedown2_C::OnDialogSequenceFinished_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.OnDialogSequenceFinished_5");

	UMission_Takedown2_C_OnDialogSequenceFinished_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.OnDialogSequenceFinished_4
// (BlueprintCallable, BlueprintEvent)

void UMission_Takedown2_C::OnDialogSequenceFinished_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.OnDialogSequenceFinished_4");

	UMission_Takedown2_C_OnDialogSequenceFinished_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_Start(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Start");

	UMission_Takedown2_C_MCE_Update_Start_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Start_Takedown2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Start_Takedown2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Start_Takedown2");

	UMission_Takedown2_C_Obj_Start_Takedown2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_TakedownTwoCountdown_Inv
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_TakedownTwoCountdown_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_TakedownTwoCountdown_Inv");

	UMission_Takedown2_C_Obj_TakedownTwoCountdown_Inv_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Takedown2Countdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_Takedown2Countdown(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Takedown2Countdown");

	UMission_Takedown2_C_MCE_Update_Takedown2Countdown_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_Section1Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_Section1Start(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_Section1Start");

	UMission_Takedown2_C_Set_Section1Start_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_Start_Takedown2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_Start_Takedown2(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_Start_Takedown2");

	UMission_Takedown2_C_Set_Start_Takedown2_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Section1_Explore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Section1_Explore(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Section1_Explore");

	UMission_Takedown2_C_Obj_Section1_Explore_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_StartCrystal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_StartCrystal(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_StartCrystal");

	UMission_Takedown2_C_Set_StartCrystal_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_StartCrystal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_StartCrystal(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_StartCrystal");

	UMission_Takedown2_C_Obj_StartCrystal_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_CrystalChallengeTwo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_CrystalChallengeTwo(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_CrystalChallengeTwo");

	UMission_Takedown2_C_Set_CrystalChallengeTwo_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystals(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystals");

	UMission_Takedown2_C_Obj_ChargeCrystals_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_StartCrystal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_StartCrystal(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_StartCrystal");

	UMission_Takedown2_C_MCE_StartCrystal_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_CrystalChargeLeft(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeLeft");

	UMission_Takedown2_C_MCE_Update_CrystalChargeLeft_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_Ruins
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_Ruins(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_Ruins");

	UMission_Takedown2_C_Set_Ruins_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ExploreRuins
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ExploreRuins(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ExploreRuins");

	UMission_Takedown2_C_Obj_ExploreRuins_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_CrystalChallengeOne
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_CrystalChallengeOne(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_CrystalChallengeOne");

	UMission_Takedown2_C_Set_CrystalChallengeOne_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalTutorial(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalTutorial");

	UMission_Takedown2_C_Obj_ChargeCrystalTutorial_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_MiniBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_MiniBoss(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_MiniBoss");

	UMission_Takedown2_C_Set_MiniBoss_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_DefeatMiniBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_DefeatMiniBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_DefeatMiniBoss");

	UMission_Takedown2_C_Obj_DefeatMiniBoss_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_RuinsExplored
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_RuinsExplored(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_RuinsExplored");

	UMission_Takedown2_C_MCE_Update_RuinsExplored_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_MiniBossKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_MiniBossKilled(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_MiniBossKilled");

	UMission_Takedown2_C_MCE_Update_MiniBossKilled_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_BugsDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_BugsDead(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_BugsDead");

	UMission_Takedown2_C_MCE_Update_BugsDead_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ButtSlam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ButtSlam(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ButtSlam");

	UMission_Takedown2_C_Obj_ButtSlam_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_ButtSlamed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_ButtSlamed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_ButtSlamed");

	UMission_Takedown2_C_MCE_Update_ButtSlamed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_FailMission_Section1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_FailMission_Section1(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_FailMission_Section1");

	UMission_Takedown2_C_MCE_FailMission_Section1_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_ResetMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_ResetMission(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_ResetMission");

	UMission_Takedown2_C_MCE_ResetMission_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_RespawnPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_RespawnPlayers(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_RespawnPlayers");

	UMission_Takedown2_C_MCE_RespawnPlayers_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalSurprise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_PortalSurprise(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalSurprise");

	UMission_Takedown2_C_Obj_PortalSurprise_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_PortalSurprise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_PortalSurprise(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_PortalSurprise");

	UMission_Takedown2_C_MCE_Update_PortalSurprise_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Platforming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Platforming(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Platforming");

	UMission_Takedown2_C_Obj_Platforming_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Platforming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_Platforming(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Platforming");

	UMission_Takedown2_C_MCE_Update_Platforming_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalDoor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_PortalDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalDoor");

	UMission_Takedown2_C_Obj_PortalDoor_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Door
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_Door(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Door");

	UMission_Takedown2_C_MCE_Update_Door_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalSurprise_Badass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_PortalSurprise_Badass(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalSurprise_Badass");

	UMission_Takedown2_C_Obj_PortalSurprise_Badass_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_PortalSurprise_Badass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_PortalSurprise_Badass(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_PortalSurprise_Badass");

	UMission_Takedown2_C_MCE_Update_PortalSurprise_Badass_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_MiddlePad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_MiddlePad(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_MiddlePad");

	UMission_Takedown2_C_Obj_MiddlePad_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnMiddle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_SpawnMiddle(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnMiddle");

	UMission_Takedown2_C_MCE_Update_SpawnMiddle_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_LeftPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_LeftPad(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_LeftPad");

	UMission_Takedown2_C_Obj_LeftPad_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_SpawnLeft(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnLeft");

	UMission_Takedown2_C_MCE_Update_SpawnLeft_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_RightPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_RightPad(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_RightPad");

	UMission_Takedown2_C_Obj_RightPad_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_SpawnRight(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnRight");

	UMission_Takedown2_C_MCE_Update_SpawnRight_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_CrystalChargeRight(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeRight");

	UMission_Takedown2_C_MCE_Update_CrystalChargeRight_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeMiddle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_CrystalChargeMiddle(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeMiddle");

	UMission_Takedown2_C_MCE_Update_CrystalChargeMiddle_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalLeft(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalLeft");

	UMission_Takedown2_C_Obj_ChargeCrystalLeft_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalMiddle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalMiddle(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalMiddle");

	UMission_Takedown2_C_Obj_ChargeCrystalMiddle_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalRight(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalRight");

	UMission_Takedown2_C_Obj_ChargeCrystalRight_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_ClearGuardians
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_ClearGuardians(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_ClearGuardians");

	UMission_Takedown2_C_Set_ClearGuardians_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_DefeatGuardians
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_DefeatGuardians(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_DefeatGuardians");

	UMission_Takedown2_C_Obj_DefeatGuardians_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_GuardiansDefeated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_GuardiansDefeated(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_GuardiansDefeated");

	UMission_Takedown2_C_MCE_Update_GuardiansDefeated_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_StartCrystalTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_StartCrystalTutorial(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_StartCrystalTutorial");

	UMission_Takedown2_C_Set_StartCrystalTutorial_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_UseLever
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_UseLever(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_UseLever");

	UMission_Takedown2_C_Obj_UseLever_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_TutorialSwitchUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_TutorialSwitchUsed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_TutorialSwitchUsed");

	UMission_Takedown2_C_MCE_Update_TutorialSwitchUsed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeRightCrystalTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeRightCrystalTutorial(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeRightCrystalTutorial");

	UMission_Takedown2_C_Obj_ChargeRightCrystalTutorial_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_RightTutorialCrystal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_RightTutorialCrystal(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_RightTutorialCrystal");

	UMission_Takedown2_C_MCE_Update_RightTutorialCrystal_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeLeftCrystalTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeLeftCrystalTutorial(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeLeftCrystalTutorial");

	UMission_Takedown2_C_Obj_ChargeLeftCrystalTutorial_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_LeftTutorialCrystal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_LeftTutorialCrystal(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_LeftTutorialCrystal");

	UMission_Takedown2_C_MCE_Update_LeftTutorialCrystal_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_LocateTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_LocateTemple(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_LocateTemple");

	UMission_Takedown2_C_Set_LocateTemple_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_LocateTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_LocateTemple(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_LocateTemple");

	UMission_Takedown2_C_Obj_LocateTemple_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_TempleLocated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_TempleLocated(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_TempleLocated");

	UMission_Takedown2_C_MCE_Update_TempleLocated_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_CrystalChallengeThree
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_CrystalChallengeThree(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_CrystalChallengeThree");

	UMission_Takedown2_C_Set_CrystalChallengeThree_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalsSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalsSec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalsSec2");

	UMission_Takedown2_C_Obj_ChargeCrystalsSec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeLeftSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_CrystalChargeLeftSec2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeLeftSec2");

	UMission_Takedown2_C_MCE_Update_CrystalChargeLeftSec2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeMiddleSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_CrystalChargeMiddleSec2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeMiddleSec2");

	UMission_Takedown2_C_MCE_Update_CrystalChargeMiddleSec2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeRightSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_CrystalChargeRightSec2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_CrystalChargeRightSec2");

	UMission_Takedown2_C_MCE_Update_CrystalChargeRightSec2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalRightSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalRightSec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalRightSec2");

	UMission_Takedown2_C_Obj_ChargeCrystalRightSec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalMiddleSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalMiddleSec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalMiddleSec2");

	UMission_Takedown2_C_Obj_ChargeCrystalMiddleSec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalLeftSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_ChargeCrystalLeftSec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_ChargeCrystalLeftSec2");

	UMission_Takedown2_C_Obj_ChargeCrystalLeftSec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_StartCrystalSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_StartCrystalSec2(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_StartCrystalSec2");

	UMission_Takedown2_C_Set_StartCrystalSec2_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_StartCrystalSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_StartCrystalSec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_StartCrystalSec2");

	UMission_Takedown2_C_Obj_StartCrystalSec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_StartCrystalSec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_StartCrystalSec2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_StartCrystalSec2");

	UMission_Takedown2_C_MCE_StartCrystalSec2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_FailMission_Section2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_FailMission_Section2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_FailMission_Section2");

	UMission_Takedown2_C_MCE_FailMission_Section2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_Section2Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_Section2Start(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_Section2Start");

	UMission_Takedown2_C_Set_Section2Start_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Section2_Explore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Section2_Explore(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Section2_Explore");

	UMission_Takedown2_C_Obj_Section2_Explore_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Sec2Explored
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_Sec2Explored(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Sec2Explored");

	UMission_Takedown2_C_MCE_Update_Sec2Explored_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_LastLeg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_LastLeg(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_LastLeg");

	UMission_Takedown2_C_Set_LastLeg_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_LastLeg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_LastLeg(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_LastLeg");

	UMission_Takedown2_C_Obj_LastLeg_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Section2_Door
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Section2_Door(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Section2_Door");

	UMission_Takedown2_C_Obj_Section2_Door_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Sec2Door
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_Sec2Door(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_Sec2Door");

	UMission_Takedown2_C_MCE_Update_Sec2Door_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_BossTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_BossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_BossTitleCard");

	UMission_Takedown2_C_Set_BossTitleCard_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.OBJ_BossTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::OBJ_BossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.OBJ_BossTitleCard");

	UMission_Takedown2_C_OBJ_BossTitleCard_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_TitleCardFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_TitleCardFinished(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_TitleCardFinished");

	UMission_Takedown2_C_MCE_TitleCardFinished_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.SET_DefeatBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::SET_DefeatBoss(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.SET_DefeatBoss");

	UMission_Takedown2_C_SET_DefeatBoss_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.OBJ_DefeatBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::OBJ_DefeatBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.OBJ_DefeatBoss");

	UMission_Takedown2_C_OBJ_DefeatBoss_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_BossDefeated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_BossDefeated(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_BossDefeated");

	UMission_Takedown2_C_MCE_BossDefeated_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_BossReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_BossReached(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_BossReached");

	UMission_Takedown2_C_MCE_BossReached_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_MiddlePad_Sec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_MiddlePad_Sec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_MiddlePad_Sec2");

	UMission_Takedown2_C_Obj_MiddlePad_Sec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnMiddle_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_SpawnMiddle_4(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnMiddle_4");

	UMission_Takedown2_C_MCE_Update_SpawnMiddle_4_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_LeftPad_Sec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_LeftPad_Sec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_LeftPad_Sec2");

	UMission_Takedown2_C_Obj_LeftPad_Sec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnLeft_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_SpawnLeft_4(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnLeft_4");

	UMission_Takedown2_C_MCE_Update_SpawnLeft_4_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_RightPad_Sec2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_RightPad_Sec2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_RightPad_Sec2");

	UMission_Takedown2_C_Obj_RightPad_Sec2_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnRight_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_SpawnRight_4(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_SpawnRight_4");

	UMission_Takedown2_C_MCE_Update_SpawnRight_4_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_TempleReveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_TempleReveal(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_TempleReveal");

	UMission_Takedown2_C_Obj_TempleReveal_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_TempleRevealed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_TempleRevealed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_TempleRevealed");

	UMission_Takedown2_C_MCE_Update_TempleRevealed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal1Boss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Portal1Boss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal1Boss");

	UMission_Takedown2_C_Obj_Portal1Boss_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_IslandPortal_2(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_2");

	UMission_Takedown2_C_MCE_Update_IslandPortal_2_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal2Boss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Portal2Boss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal2Boss");

	UMission_Takedown2_C_Obj_Portal2Boss_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_IslandPortal_3(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_3");

	UMission_Takedown2_C_MCE_Update_IslandPortal_3_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal3Boss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Portal3Boss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal3Boss");

	UMission_Takedown2_C_Obj_Portal3Boss_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_IslandPortal_4(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_4");

	UMission_Takedown2_C_MCE_Update_IslandPortal_4_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal4Boss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_Portal4Boss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_Portal4Boss");

	UMission_Takedown2_C_Obj_Portal4Boss_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_IslandPortal_5(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandPortal_5");

	UMission_Takedown2_C_MCE_Update_IslandPortal_5_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalMainBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_PortalMainBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_PortalMainBoss");

	UMission_Takedown2_C_Obj_PortalMainBoss_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandMainPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_Update_IslandMainPortal(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_Update_IslandMainPortal");

	UMission_Takedown2_C_MCE_Update_IslandMainPortal_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Obj_EnterPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Obj_EnterPortal(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Obj_EnterPortal");

	UMission_Takedown2_C_Obj_EnterPortal_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.Set_EnterPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::Set_EnterPortal(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.Set_EnterPortal");

	UMission_Takedown2_C_Set_EnterPortal_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_EnergyReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_EnergyReached(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_EnergyReached");

	UMission_Takedown2_C_MCE_EnergyReached_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.MCE_CrystalDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::MCE_CrystalDeath(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.MCE_CrystalDeath");

	UMission_Takedown2_C_MCE_CrystalDeath_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Takedown2.Mission_Takedown2_C.ExecuteUbergraph_Mission_Takedown2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Takedown2_C::ExecuteUbergraph_Mission_Takedown2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Takedown2.Mission_Takedown2_C.ExecuteUbergraph_Mission_Takedown2");

	UMission_Takedown2_C_ExecuteUbergraph_Mission_Takedown2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
