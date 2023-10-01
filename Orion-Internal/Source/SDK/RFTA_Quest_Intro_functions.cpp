// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Quest_Intro.Quest_Intro_C.SetDeathDialogFlags
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SetDeathDialogFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SetDeathDialogFlags");

	AQuest_Intro_C_SetDeathDialogFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ResetManualDialogDeathFlags
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ResetManualDialogDeathFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ResetManualDialogDeathFlags");

	AQuest_Intro_C_ResetManualDialogDeathFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.CanPlayerBeRescued
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanBeRescued                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::CanPlayerBeRescued(bool* CanBeRescued)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.CanPlayerBeRescued");

	AQuest_Intro_C_CanPlayerBeRescued_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBeRescued != nullptr)
		*CanBeRescued = params.CanBeRescued;
}


// Function Quest_Intro.Quest_Intro_C.Player is in Zone_Intro
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AQuest_Intro_C::Player_is_in_Zone_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Player is in Zone_Intro");

	AQuest_Intro_C_Player_is_in_Zone_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Quest_Intro.Quest_Intro_C.Refresh Health Bar
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Refresh_Health_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Refresh Health Bar");

	AQuest_Intro_C_Refresh_Health_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Update Objectives
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Update_Objectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Update Objectives");

	AQuest_Intro_C_Update_Objectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Turn Off Merchant POIs
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Turn_Off_Merchant_POIs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Turn Off Merchant POIs");

	AQuest_Intro_C_Turn_Off_Merchant_POIs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Set POI Enabled
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URemnantQuestEntity**    POI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Set_POI_Enabled(bool* Enabled, class URemnantQuestEntity** POI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Set POI Enabled");

	AQuest_Intro_C_Set_POI_Enabled_Params params;
	params.Enabled = Enabled;
	params.POI = POI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SetPlayerReadyAfterTravel
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SetPlayerReadyAfterTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SetPlayerReadyAfterTravel");

	AQuest_Intro_C_SetPlayerReadyAfterTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.DetermineBaseState
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::DetermineBaseState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.DetermineBaseState");

	AQuest_Intro_C_DetermineBaseState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SetQuestCheckpoint
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestZoneLink**  ZoneLink                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          SaveImmediately                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::SetQuestCheckpoint(class URemnantQuestZoneLink** ZoneLink, bool* SaveImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SetQuestCheckpoint");

	AQuest_Intro_C_SetQuestCheckpoint_Params params;
	params.ZoneLink = ZoneLink;
	params.SaveImmediately = SaveImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Local Testing 
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Local_Testing_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Local Testing ");

	AQuest_Intro_C_Local_Testing__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Show Correct Armor on Rigs' Rack
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Show_Correct_Armor_on_Rigs__Rack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Show Correct Armor on Rigs' Rack");

	AQuest_Intro_C_Show_Correct_Armor_on_Rigs__Rack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.EnablePlayerNoFall
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::EnablePlayerNoFall(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EnablePlayerNoFall");

	AQuest_Intro_C_EnablePlayerNoFall_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Put Wally on his Path
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Path_Point_Tag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Put_Wally_on_his_Path(struct FName* Path_Point_Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Put Wally on his Path");

	AQuest_Intro_C_Put_Wally_on_his_Path_Params params;
	params.Path_Point_Tag = Path_Point_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Get Wally's State Machine
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStateMachineComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStateMachineComponent* AQuest_Intro_C::Get_Wally_s_State_Machine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Wally's State Machine");

	AQuest_Intro_C_Get_Wally_s_State_Machine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Quest_Intro.Quest_Intro_C.Instant Fade Out
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Instant_Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Instant Fade Out");

	AQuest_Intro_C_Instant_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Wally No Longer Needed
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Wally_No_Longer_Needed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Wally No Longer Needed");

	AQuest_Intro_C_Wally_No_Longer_Needed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Get Valid Ford
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URemnantQuestEntity*     Ford                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Get_Valid_Ford(class URemnantQuestEntity** Ford)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Valid Ford");

	AQuest_Intro_C_Get_Valid_Ford_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ford != nullptr)
		*Ford = params.Ford;
}


// Function Quest_Intro.Quest_Intro_C.Get Valid Ace
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URemnantQuestEntity*     Ace                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Get_Valid_Ace(class URemnantQuestEntity** Ace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Valid Ace");

	AQuest_Intro_C_Get_Valid_Ace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ace != nullptr)
		*Ace = params.Ace;
}


// Function Quest_Intro.Quest_Intro_C.Event Tree Trigger
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Trigger_Name                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EQuest_Intro_Speaker_Enum>* Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          AllowInterrupt                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::Event_Tree_Trigger(struct FName* Trigger_Name, TEnumAsByte<EQuest_Intro_Speaker_Enum>* Speaker, bool* AllowInterrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Event Tree Trigger");

	AQuest_Intro_C_Event_Tree_Trigger_Params params;
	params.Trigger_Name = Trigger_Name;
	params.Speaker = Speaker;
	params.AllowInterrupt = AllowInterrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Zone Player to Next Part of Quest
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EQuest_Intro_Zone_Enum>* Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Zone_Player_to_Next_Part_of_Quest(TEnumAsByte<EQuest_Intro_Zone_Enum>* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Zone Player to Next Part of Quest");

	AQuest_Intro_C_Zone_Player_to_Next_Part_of_Quest_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Remove Weapons
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Remove_Weapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Remove Weapons");

	AQuest_Intro_C_Remove_Weapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Replace_Ford
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Replace_Ford()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Replace_Ford");

	AQuest_Intro_C_Replace_Ford_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Player Wake Up in Base & Interactive Setup
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Player_Wake_Up_in_Base___Interactive_Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Player Wake Up in Base & Interactive Setup");

	AQuest_Intro_C_Player_Wake_Up_in_Base___Interactive_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Remove Tutorial Prompts
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Remove_Tutorial_Prompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Remove Tutorial Prompts");

	AQuest_Intro_C_Remove_Tutorial_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.WallaceShouldBark
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AQuest_Intro_C::WallaceShouldBark()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.WallaceShouldBark");

	AQuest_Intro_C_WallaceShouldBark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Quest_Intro.Quest_Intro_C.Send Ace Upstairs
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Send_Ace_Upstairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Send Ace Upstairs");

	AQuest_Intro_C_Send_Ace_Upstairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Update Power Sources - End of Fight
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Update_Power_Sources___End_of_Fight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Update Power Sources - End of Fight");

	AQuest_Intro_C_Update_Power_Sources___End_of_Fight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SFX Start Reacter Idle Active Loop
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SFX_Start_Reacter_Idle_Active_Loop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SFX Start Reacter Idle Active Loop");

	AQuest_Intro_C_SFX_Start_Reacter_Idle_Active_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SFX Start Lights
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SFX_Start_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SFX Start Lights");

	AQuest_Intro_C_SFX_Start_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SFX Reactor Powerdown
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SFX_Reactor_Powerdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SFX Reactor Powerdown");

	AQuest_Intro_C_SFX_Reactor_Powerdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SFX Start Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SFX_Start_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SFX Start Init");

	AQuest_Intro_C_SFX_Start_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Move Ace to IntroEnd Interactive Position
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestEntity*     OutputPin                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Move_Ace_to_IntroEnd_Interactive_Position(class URemnantQuestEntity** OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Move Ace to IntroEnd Interactive Position");

	AQuest_Intro_C_Move_Ace_to_IntroEnd_Interactive_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function Quest_Intro.Quest_Intro_C.Teleport NPC
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestEntity**           Quest_Entity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Destination_Actor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Teleport_NPC(class UQuestEntity** Quest_Entity, class AActor** Destination_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Teleport NPC");

	AQuest_Intro_C_Teleport_NPC_Params params;
	params.Quest_Entity = Quest_Entity;
	params.Destination_Actor = Destination_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Gather Reactor Sounds
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Gather_Reactor_Sounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Gather Reactor Sounds");

	AQuest_Intro_C_Gather_Reactor_Sounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SFX Start Reactor
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Fade_In                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::SFX_Start_Reactor(bool* Fade_In)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SFX Start Reactor");

	AQuest_Intro_C_SFX_Start_Reactor_Params params;
	params.Fade_In = Fade_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Zone to Main Game Instance
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Zone_to_Main_Game_Instance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Zone to Main Game Instance");

	AQuest_Intro_C_Zone_to_Main_Game_Instance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PlayerSawCutscene
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SawCutscene                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::PlayerSawCutscene(bool* SawCutscene)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PlayerSawCutscene");

	AQuest_Intro_C_PlayerSawCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SawCutscene != nullptr)
		*SawCutscene = params.SawCutscene;
}


// Function Quest_Intro.Quest_Intro_C.Holdout Success
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Holdout_Success()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Holdout Success");

	AQuest_Intro_C_Holdout_Success_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Rescue Player - Ace
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Rescue_Player___Ace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Rescue Player - Ace");

	AQuest_Intro_C_Rescue_Player___Ace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Gather Cutscene Lights
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Gather_Cutscene_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Gather Cutscene Lights");

	AQuest_Intro_C_Gather_Cutscene_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Update Reactor Terminal
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Update_Reactor_Terminal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Update Reactor Terminal");

	AQuest_Intro_C_Update_Reactor_Terminal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Gather Lights & FX in Player Base
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Gather_Lights___FX_in_Player_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Gather Lights & FX in Player Base");

	AQuest_Intro_C_Gather_Lights___FX_in_Player_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PB - Intro Lighting
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::PB___Intro_Lighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PB - Intro Lighting");

	AQuest_Intro_C_PB___Intro_Lighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Rescue Player - Ford
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Rescue_Player___Ford()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Rescue Player - Ford");

	AQuest_Intro_C_Rescue_Player___Ford_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Get Nearest Player Saved Point
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Nearest_Safe_Point             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Get_Nearest_Player_Saved_Point(class AActor** Nearest_Safe_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Nearest Player Saved Point");

	AQuest_Intro_C_Get_Nearest_Player_Saved_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nearest_Safe_Point != nullptr)
		*Nearest_Safe_Point = params.Nearest_Safe_Point;
}


// Function Quest_Intro.Quest_Intro_C.Move Player to Safe Loc
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Move_Player_to_Safe_Loc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Move Player to Safe Loc");

	AQuest_Intro_C_Move_Player_to_Safe_Loc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.fade
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFadeDirection*                Fade_Direction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::fade(EFadeDirection* Fade_Direction, struct FName* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.fade");

	AQuest_Intro_C_fade_Params params;
	params.Fade_Direction = Fade_Direction;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Deactivate Player Spawn Point
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Exterior                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::Deactivate_Player_Spawn_Point(bool* Exterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Deactivate Player Spawn Point");

	AQuest_Intro_C_Deactivate_Player_Spawn_Point_Params params;
	params.Exterior = Exterior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Set Player State
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Only_Set_if_Valid              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::Set_Player_State(struct FName* Name_ID, bool* Only_Set_if_Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Set Player State");

	AQuest_Intro_C_Set_Player_State_Params params;
	params.Name_ID = Name_ID;
	params.Only_Set_if_Valid = Only_Set_if_Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Get Local Player's State Machine Component
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStateMachineComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStateMachineComponent* AQuest_Intro_C::Get_Local_Player_s_State_Machine_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Local Player's State Machine Component");

	AQuest_Intro_C_Get_Local_Player_s_State_Machine_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Quest_Intro.Quest_Intro_C.Replace Ace
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Replace_Ace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Replace Ace");

	AQuest_Intro_C_Replace_Ace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PlayerSavedOutside
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SavedOutside                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::PlayerSavedOutside(bool* SavedOutside)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PlayerSavedOutside");

	AQuest_Intro_C_PlayerSavedOutside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SavedOutside != nullptr)
		*SavedOutside = params.SavedOutside;
}


// Function Quest_Intro.Quest_Intro_C.Get Local Remnant_PlayerController
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARemnant_PlayerController_C* AsRemnant_Player_Controller    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Get_Local_Remnant_PlayerController(class ARemnant_PlayerController_C** AsRemnant_Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Local Remnant_PlayerController");

	AQuest_Intro_C_Get_Local_Remnant_PlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsRemnant_Player_Controller != nullptr)
		*AsRemnant_Player_Controller = params.AsRemnant_Player_Controller;
}


// Function Quest_Intro.Quest_Intro_C.EnablePlayerNoKill
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::EnablePlayerNoKill(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EnablePlayerNoKill");

	AQuest_Intro_C_EnablePlayerNoKill_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.On Before Player Killed
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::On_Before_Player_Killed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.On Before Player Killed");

	AQuest_Intro_C_On_Before_Player_Killed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PlayerSavedByAce
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SavedByAce                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::PlayerSavedByAce(bool* SavedByAce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PlayerSavedByAce");

	AQuest_Intro_C_PlayerSavedByAce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SavedByAce != nullptr)
		*SavedByAce = params.SavedByAce;
}


// Function Quest_Intro.Quest_Intro_C.Remove Tutorial Prompt
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Tutorial_ID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::Remove_Tutorial_Prompt(struct FName* Tutorial_ID, bool* Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Remove Tutorial Prompt");

	AQuest_Intro_C_Remove_Tutorial_Prompt_Params params;
	params.Tutorial_ID = Tutorial_ID;
	params.Remove = Remove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Add Loot Notification
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Add_Loot_Notification(class UClass** Item, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Add Loot Notification");

	AQuest_Intro_C_Add_Loot_Notification_Params params;
	params.Item = Item;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Deactivate Power (Lights)
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Activation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::Deactivate_Power__Lights_(bool* Activation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Deactivate Power (Lights)");

	AQuest_Intro_C_Deactivate_Power__Lights__Params params;
	params.Activation = Activation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Check Holdout Completion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AQuest_Intro_C::Check_Holdout_Completion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Check Holdout Completion");

	AQuest_Intro_C_Check_Holdout_Completion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Quest_Intro.Quest_Intro_C.Deactivate Crystal
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Deactivate_Crystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Deactivate Crystal");

	AQuest_Intro_C_Deactivate_Crystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Get Player as Remnant Character
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARemnantCharacter*       AsRemnant_Character            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::Get_Player_as_Remnant_Character(class ARemnantCharacter** AsRemnant_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Player as Remnant Character");

	AQuest_Intro_C_Get_Player_as_Remnant_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsRemnant_Character != nullptr)
		*AsRemnant_Character = params.AsRemnant_Character;
}


// Function Quest_Intro.Quest_Intro_C.Add Archetype UI to Screen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Add_Archetype_UI_to_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Add Archetype UI to Screen");

	AQuest_Intro_C_Add_Archetype_UI_to_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Get Local Player's Inventory Component
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UInventoryComponent* AQuest_Intro_C::Get_Local_Player_s_Inventory_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Get Local Player's Inventory Component");

	AQuest_Intro_C_Get_Local_Player_s_Inventory_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Quest_Intro.Quest_Intro_C.Add & Equip Item
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Hide_Loot_Notification         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_C::Add___Equip_Item(class UClass** Item, bool* Hide_Loot_Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Add & Equip Item");

	AQuest_Intro_C_Add___Equip_Item_Params params;
	params.Item = Item;
	params.Hide_Loot_Notification = Hide_Loot_Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Equip Player per Tutorial Start
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Equip_Player_per_Tutorial_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Equip Player per Tutorial Start");

	AQuest_Intro_C_Equip_Player_per_Tutorial_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Timeline_0__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Timeline_0__FinishedFunc");

	AQuest_Intro_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Timeline_0__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Timeline_0__UpdateFunc");

	AQuest_Intro_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnFailure_778E930B40FF1B87D8703095A2AB5AC6
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnFailure_778E930B40FF1B87D8703095A2AB5AC6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnFailure_778E930B40FF1B87D8703095A2AB5AC6");

	AQuest_Intro_C_OnFailure_778E930B40FF1B87D8703095A2AB5AC6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnSuccess_778E930B40FF1B87D8703095A2AB5AC6
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnSuccess_778E930B40FF1B87D8703095A2AB5AC6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnSuccess_778E930B40FF1B87D8703095A2AB5AC6");

	AQuest_Intro_C_OnSuccess_778E930B40FF1B87D8703095A2AB5AC6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivatePower
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivatePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivatePower");

	AQuest_Intro_C_ActivatePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivateReturn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivateReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivateReturn");

	AQuest_Intro_C_ActivateReturn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivateKey
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivateKey");

	AQuest_Intro_C_ActivateKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivateTalk
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivateTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivateTalk");

	AQuest_Intro_C_ActivateTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Complete
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Complete");

	AQuest_Intro_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivateUpgrade
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivateUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivateUpgrade");

	AQuest_Intro_C_ActivateUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivateReturn2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivateReturn2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivateReturn2");

	AQuest_Intro_C_ActivateReturn2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OpenArchetype
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::OpenArchetype()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OpenArchetype");

	AQuest_Intro_C_OpenArchetype_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Ace_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Ace_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Ace_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Ace_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Key_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Key_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Key_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Key_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Ward13_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Zone_Ward13_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Ward13_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Zone_Ward13_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Intro_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Zone_Intro_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Intro_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Zone_Intro_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivateCrystal
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivateCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivateCrystal");

	AQuest_Intro_C_ActivateCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Return_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Return_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Return_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Return_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Power_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Defend_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Defend_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Defend_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Defend_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Crouch_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Crouch_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__CrouchComplete_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__CrouchComplete_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__CrouchComplete_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__CrouchComplete_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Vault_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Vault_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Vault_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Vault_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__VaultComplete_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__VaultComplete_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__VaultComplete_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__VaultComplete_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Cutscene_K2Node_ComponentBoundEvent_5_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Cutscene_K2Node_ComponentBoundEvent_5_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Cutscene_K2Node_ComponentBoundEvent_5_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Cutscene_K2Node_ComponentBoundEvent_5_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Player Died
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Player_Died()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Player Died");

	AQuest_Intro_C_Player_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__FirstBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__FirstBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__FirstBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__FirstBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_MoreBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_MoreBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_MoreBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_MoreBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_GroundBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_GroundBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_GroundBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_GroundBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnArchetypeSelected
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantArchetype**      Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnArchetypeSelected(class URemnantArchetype** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnArchetypeSelected");

	AQuest_Intro_C_OnArchetypeSelected_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Intro_Ford_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Intro_Ford_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Intro_Ford_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Intro_Ford_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Show Melee Combat Tutorial Prompts
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Show_Melee_Combat_Tutorial_Prompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Show Melee Combat Tutorial Prompts");

	AQuest_Intro_C_Show_Melee_Combat_Tutorial_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Player Died In Reactor Room
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Player_Died_In_Reactor_Room()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Player Died In Reactor Room");

	AQuest_Intro_C_Player_Died_In_Reactor_Room_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnPlayerDead
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::OnPlayerDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnPlayerDead");

	AQuest_Intro_C_OnPlayerDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_01_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Lightning_01_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_01_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Lightning_01_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Lightning_02
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Lightning_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Lightning_02");

	AQuest_Intro_C_Lightning_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Lightning_03
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Lightning_03()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Lightning_03");

	AQuest_Intro_C_Lightning_03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_04_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Lightning_04_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_04_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Lightning_04_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_05_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Lightning_05_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_05_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Lightning_05_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_06_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Lightning_06_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_06_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Lightning_06_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Lerp Skylight
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Lerp_Skylight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Lerp Skylight");

	AQuest_Intro_C_Lerp_Skylight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Intro_Ace_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Intro_Ace_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Intro_Ace_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Intro_Ace_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.GeneratorsInitialized
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::GeneratorsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.GeneratorsInitialized");

	AQuest_Intro_C_GeneratorsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__PowerSource_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__PowerSource_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__PowerSource_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__PowerSource_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Cutscene_1_Finish
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Cutscene_1_Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Cutscene_1_Finish");

	AQuest_Intro_C_Cutscene_1_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Cutscene_1_Start
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Cutscene_1_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Cutscene_1_Start");

	AQuest_Intro_C_Cutscene_1_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Power_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Return_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Return_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Return_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Return_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Key_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Key_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Key_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Key_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_4_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Defend_K2Node_ComponentBoundEvent_4_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_4_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Defend_K2Node_ComponentBoundEvent_4_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Ace_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Ace_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Ace_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Ace_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Terminal_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Terminal_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Terminal_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Terminal_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnQuestComplete
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// EQuestResult*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnQuestComplete(EQuestResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnQuestComplete");

	AQuest_Intro_C_OnQuestComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.CompleteKey
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::CompleteKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.CompleteKey");

	AQuest_Intro_C_CompleteKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Zone
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Zone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Zone");

	AQuest_Intro_C_Zone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Talk_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Talk_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Talk_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Talk_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Initialize_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Initialize_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Initialize_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Initialize_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Kill_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Kill_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Kill_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Kill_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnCharacterEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnCharacterEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnCharacterEvent");

	AQuest_Intro_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnFordRescueEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnFordRescueEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnFordRescueEvent");

	AQuest_Intro_C_OnFordRescueEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnRigsRescueEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnRigsRescueEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnRigsRescueEvent");

	AQuest_Intro_C_OnRigsRescueEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.EventTreeFadeOut
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::EventTreeFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EventTreeFadeOut");

	AQuest_Intro_C_EventTreeFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.EventTreeFadeIn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::EventTreeFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EventTreeFadeIn");

	AQuest_Intro_C_EventTreeFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.TestLighting
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::TestLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.TestLighting");

	AQuest_Intro_C_TestLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Footsteps_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Footsteps_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Footsteps_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Footsteps_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Ramp_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Ramp_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Ramp_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Ramp_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Lightning 07
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Lightning_07()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Lightning 07");

	AQuest_Intro_C_Lightning_07_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Lightning_08
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Lightning_08()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Lightning_08");

	AQuest_Intro_C_Lightning_08_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Lightning 09
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Lightning_09()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Lightning 09");

	AQuest_Intro_C_Lightning_09_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.CutsceneLighting-Wallace-Start
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::CutsceneLighting_Wallace_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.CutsceneLighting-Wallace-Start");

	AQuest_Intro_C_CutsceneLighting_Wallace_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.CutsceneLighting-Wallace-End
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::CutsceneLighting_Wallace_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.CutsceneLighting-Wallace-End");

	AQuest_Intro_C_CutsceneLighting_Wallace_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PickupItemCollected
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::PickupItemCollected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PickupItemCollected");

	AQuest_Intro_C_PickupItemCollected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__PowerSource_StartUp_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__PowerSource_StartUp_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__PowerSource_StartUp_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__PowerSource_StartUp_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Crouch_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Crouch_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Vault_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Vault_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Vault_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Vault_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnDead_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AQuest_Intro_C::OnDead_Event_1(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnDead_Event_1");

	AQuest_Intro_C_OnDead_Event_1_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.WakeUp_Intro
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::WakeUp_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.WakeUp_Intro");

	AQuest_Intro_C_WakeUp_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.End of Fight SFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::End_of_Fight_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.End of Fight SFX");

	AQuest_Intro_C_End_of_Fight_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Trigger Holdout Success
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Trigger_Holdout_Success()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Trigger Holdout Success");

	AQuest_Intro_C_Trigger_Holdout_Success_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Reggie_K2Node_ComponentBoundEvent_10_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Reggie_K2Node_ComponentBoundEvent_10_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Reggie_K2Node_ComponentBoundEvent_10_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Reggie_K2Node_ComponentBoundEvent_10_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.AceStay
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::AceStay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.AceStay");

	AQuest_Intro_C_AceStay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Start Reactor SFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Start_Reactor_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Start Reactor SFX");

	AQuest_Intro_C_Start_Reactor_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Rigs_K2Node_ComponentBoundEvent_11_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Rigs_K2Node_ComponentBoundEvent_11_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Rigs_K2Node_ComponentBoundEvent_11_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Rigs_K2Node_ComponentBoundEvent_11_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.RigsWeaponUpgrade
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::RigsWeaponUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.RigsWeaponUpgrade");

	AQuest_Intro_C_RigsWeaponUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.RigsGiveArmor
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::RigsGiveArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.RigsGiveArmor");

	AQuest_Intro_C_RigsGiveArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Upgrade_K2Node_ComponentBoundEvent_15_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Upgrade_K2Node_ComponentBoundEvent_15_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Upgrade_K2Node_ComponentBoundEvent_15_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Upgrade_K2Node_ComponentBoundEvent_15_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ResetFordTrigger
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ResetFordTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ResetFordTrigger");

	AQuest_Intro_C_ResetFordTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.VaultDoorComplete
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::VaultDoorComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.VaultDoorComplete");

	AQuest_Intro_C_VaultDoorComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.GiveWeaponMod
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::GiveWeaponMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.GiveWeaponMod");

	AQuest_Intro_C_GiveWeaponMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__SeeAva_K2Node_ComponentBoundEvent_16_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__SeeAva_K2Node_ComponentBoundEvent_16_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__SeeAva_K2Node_ComponentBoundEvent_16_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__SeeAva_K2Node_ComponentBoundEvent_16_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.AceDefault
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::AceDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.AceDefault");

	AQuest_Intro_C_AceDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ZoneToIntro
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ZoneToIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ZoneToIntro");

	AQuest_Intro_C_ZoneToIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Closed_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Closed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Closed_Event_1");

	AQuest_Intro_C_Closed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.IntroSetup
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::IntroSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.IntroSetup");

	AQuest_Intro_C_IntroSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.IntroWardSetup
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::IntroWardSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.IntroWardSetup");

	AQuest_Intro_C_IntroWardSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_HowToConsumable_K2Node_ComponentBoundEvent_17_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_HowToConsumable_K2Node_ComponentBoundEvent_17_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_HowToConsumable_K2Node_ComponentBoundEvent_17_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_HowToConsumable_K2Node_ComponentBoundEvent_17_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Tutorial Window Closed_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Tutorial_Window_Closed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Tutorial Window Closed_Event_1");

	AQuest_Intro_C_Tutorial_Window_Closed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.CatchTutorialWindow
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::CatchTutorialWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.CatchTutorialWindow");

	AQuest_Intro_C_CatchTutorialWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Show Dragon Heart ToolTip
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Show_Dragon_Heart_ToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Show Dragon Heart ToolTip");

	AQuest_Intro_C_Show_Dragon_Heart_ToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Screamer_K2Node_ComponentBoundEvent_20_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Screamer_K2Node_ComponentBoundEvent_20_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Screamer_K2Node_ComponentBoundEvent_20_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Screamer_K2Node_ComponentBoundEvent_20_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnStateChange_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnStateChange_Event_1(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnStateChange_Event_1");

	AQuest_Intro_C_OnStateChange_Event_1_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ResetHealth
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ResetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ResetHealth");

	AQuest_Intro_C_ResetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.WallyCine
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::WallyCine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.WallyCine");

	AQuest_Intro_C_WallyCine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.RemoveRewardWidget
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::RemoveRewardWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.RemoveRewardWidget");

	AQuest_Intro_C_RemoveRewardWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.CinematicFord
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::CinematicFord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.CinematicFord");

	AQuest_Intro_C_CinematicFord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.FadeHordeLoop
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::FadeHordeLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.FadeHordeLoop");

	AQuest_Intro_C_FadeHordeLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Talk_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Talk_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Talk_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Talk_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.WaitForNotifications
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::WaitForNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.WaitForNotifications");

	AQuest_Intro_C_WaitForNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Queue Empty_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Queue_Empty_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Queue Empty_Event_1");

	AQuest_Intro_C_Queue_Empty_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_21_QuestTriggerPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_21_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_21_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_21_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Show Ranged Combat Tutorial Prompts
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Show_Ranged_Combat_Tutorial_Prompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Show Ranged Combat Tutorial Prompts");

	AQuest_Intro_C_Show_Ranged_Combat_Tutorial_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Upgrade_K2Node_ComponentBoundEvent_22_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Upgrade_K2Node_ComponentBoundEvent_22_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Upgrade_K2Node_ComponentBoundEvent_22_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Upgrade_K2Node_ComponentBoundEvent_22_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Rigs_K2Node_ComponentBoundEvent_23_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__Rigs_K2Node_ComponentBoundEvent_23_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Rigs_K2Node_ComponentBoundEvent_23_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Rigs_K2Node_ComponentBoundEvent_23_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnLeveledUp_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnLeveledUp_Event_1(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnLeveledUp_Event_1");

	AQuest_Intro_C_OnLeveledUp_Event_1_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.CinematicRigs
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::CinematicRigs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.CinematicRigs");

	AQuest_Intro_C_CinematicRigs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ActivateUpgradeObj
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ActivateUpgradeObj()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ActivateUpgradeObj");

	AQuest_Intro_C_ActivateUpgradeObj_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__DragonCrystal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__DragonCrystal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__DragonCrystal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__DragonCrystal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.UpgradeTutorialClosed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::UpgradeTutorialClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.UpgradeTutorialClosed");

	AQuest_Intro_C_UpgradeTutorialClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Ford1NextObjective
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Ford1NextObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Ford1NextObjective");

	AQuest_Intro_C_Ford1NextObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Prologue_K2Node_ComponentBoundEvent_18_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Intro_C::BndEvt__Zone_Prologue_K2Node_ComponentBoundEvent_18_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Prologue_K2Node_ComponentBoundEvent_18_QuestVoidDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__Zone_Prologue_K2Node_ComponentBoundEvent_18_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SetFordArmsCrossed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SetFordArmsCrossed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SetFordArmsCrossed");

	AQuest_Intro_C_SetFordArmsCrossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.EventTreeFadeOutInstant
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::EventTreeFadeOutInstant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EventTreeFadeOutInstant");

	AQuest_Intro_C_EventTreeFadeOutInstant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__EventRegion_K2Node_ComponentBoundEvent_19_EventRegionPlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FEventRegionCharacter*  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AQuest_Intro_C::BndEvt__EventRegion_K2Node_ComponentBoundEvent_19_EventRegionPlayerDelegate__DelegateSignature(struct FEventRegionCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__EventRegion_K2Node_ComponentBoundEvent_19_EventRegionPlayerDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__EventRegion_K2Node_ComponentBoundEvent_19_EventRegionPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.StartPrologue
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::StartPrologue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.StartPrologue");

	AQuest_Intro_C_StartPrologue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PlayerReadyForWally
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::PlayerReadyForWally()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PlayerReadyForWally");

	AQuest_Intro_C_PlayerReadyForWally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PlayerSit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::PlayerSit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PlayerSit");

	AQuest_Intro_C_PlayerSit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.PlayerDefault
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::PlayerDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.PlayerDefault");

	AQuest_Intro_C_PlayerDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ExitTerminal
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::ExitTerminal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ExitTerminal");

	AQuest_Intro_C_ExitTerminal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.EquipSword
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::EquipSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EquipSword");

	AQuest_Intro_C_EquipSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnPlayerEnteredIntroZone
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnPlayerEnteredIntroZone(class APlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnPlayerEnteredIntroZone");

	AQuest_Intro_C_OnPlayerEnteredIntroZone_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.OnPlayerEnteredWard13
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::OnPlayerEnteredWard13(class APlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.OnPlayerEnteredWard13");

	AQuest_Intro_C_OnPlayerEnteredWard13_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AQuest_Intro_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ReceiveBeginPlay");

	AQuest_Intro_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.Show Message - Can't Join
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::Show_Message___Can_t_Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.Show Message - Can't Join");

	AQuest_Intro_C_Show_Message___Can_t_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.SetRigs
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::SetRigs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.SetRigs");

	AQuest_Intro_C_SetRigs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.EngageRigs
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::EngageRigs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EngageRigs");

	AQuest_Intro_C_EngageRigs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.BndEvt__ReactorTerminal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::BndEvt__ReactorTerminal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.BndEvt__ReactorTerminal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature");

	AQuest_Intro_C_BndEvt__ReactorTerminal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.EnableSaving
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_C::EnableSaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.EnableSaving");

	AQuest_Intro_C_EnableSaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro.Quest_Intro_C.ExecuteUbergraph_Quest_Intro
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_C::ExecuteUbergraph_Quest_Intro(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro.Quest_Intro_C.ExecuteUbergraph_Quest_Intro");

	AQuest_Intro_C_ExecuteUbergraph_Quest_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
