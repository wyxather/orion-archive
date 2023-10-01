#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Intro_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Quest_Intro.Quest_Intro_C.SetDeathDialogFlags
struct AQuest_Intro_C_SetDeathDialogFlags_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ResetManualDialogDeathFlags
struct AQuest_Intro_C_ResetManualDialogDeathFlags_Params
{
};

// Function Quest_Intro.Quest_Intro_C.CanPlayerBeRescued
struct AQuest_Intro_C_CanPlayerBeRescued_Params
{
	bool                                               CanBeRescued;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Player is in Zone_Intro
struct AQuest_Intro_C_Player_is_in_Zone_Intro_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Refresh Health Bar
struct AQuest_Intro_C_Refresh_Health_Bar_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Update Objectives
struct AQuest_Intro_C_Update_Objectives_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Turn Off Merchant POIs
struct AQuest_Intro_C_Turn_Off_Merchant_POIs_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Set POI Enabled
struct AQuest_Intro_C_Set_POI_Enabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class URemnantQuestEntity**                        POI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.SetPlayerReadyAfterTravel
struct AQuest_Intro_C_SetPlayerReadyAfterTravel_Params
{
};

// Function Quest_Intro.Quest_Intro_C.DetermineBaseState
struct AQuest_Intro_C_DetermineBaseState_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SetQuestCheckpoint
struct AQuest_Intro_C_SetQuestCheckpoint_Params
{
	class URemnantQuestZoneLink**                      ZoneLink;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              SaveImmediately;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Local Testing 
struct AQuest_Intro_C_Local_Testing__Params
{
};

// Function Quest_Intro.Quest_Intro_C.Show Correct Armor on Rigs' Rack
struct AQuest_Intro_C_Show_Correct_Armor_on_Rigs__Rack_Params
{
};

// Function Quest_Intro.Quest_Intro_C.EnablePlayerNoFall
struct AQuest_Intro_C_EnablePlayerNoFall_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Put Wally on his Path
struct AQuest_Intro_C_Put_Wally_on_his_Path_Params
{
	struct FName*                                      Path_Point_Tag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Get Wally's State Machine
struct AQuest_Intro_C_Get_Wally_s_State_Machine_Params
{
	class UStateMachineComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Instant Fade Out
struct AQuest_Intro_C_Instant_Fade_Out_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Wally No Longer Needed
struct AQuest_Intro_C_Wally_No_Longer_Needed_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Get Valid Ford
struct AQuest_Intro_C_Get_Valid_Ford_Params
{
	class URemnantQuestEntity*                         Ford;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Get Valid Ace
struct AQuest_Intro_C_Get_Valid_Ace_Params
{
	class URemnantQuestEntity*                         Ace;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Event Tree Trigger
struct AQuest_Intro_C_Event_Tree_Trigger_Params
{
	struct FName*                                      Trigger_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EQuest_Intro_Speaker_Enum>*            Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              AllowInterrupt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Zone Player to Next Part of Quest
struct AQuest_Intro_C_Zone_Player_to_Next_Part_of_Quest_Params
{
	TEnumAsByte<EQuest_Intro_Zone_Enum>*               Destination;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Remove Weapons
struct AQuest_Intro_C_Remove_Weapons_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Replace_Ford
struct AQuest_Intro_C_Replace_Ford_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Player Wake Up in Base & Interactive Setup
struct AQuest_Intro_C_Player_Wake_Up_in_Base___Interactive_Setup_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Remove Tutorial Prompts
struct AQuest_Intro_C_Remove_Tutorial_Prompts_Params
{
};

// Function Quest_Intro.Quest_Intro_C.WallaceShouldBark
struct AQuest_Intro_C_WallaceShouldBark_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Send Ace Upstairs
struct AQuest_Intro_C_Send_Ace_Upstairs_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Update Power Sources - End of Fight
struct AQuest_Intro_C_Update_Power_Sources___End_of_Fight_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SFX Start Reacter Idle Active Loop
struct AQuest_Intro_C_SFX_Start_Reacter_Idle_Active_Loop_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SFX Start Lights
struct AQuest_Intro_C_SFX_Start_Lights_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SFX Reactor Powerdown
struct AQuest_Intro_C_SFX_Reactor_Powerdown_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SFX Start Init
struct AQuest_Intro_C_SFX_Start_Init_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Move Ace to IntroEnd Interactive Position
struct AQuest_Intro_C_Move_Ace_to_IntroEnd_Interactive_Position_Params
{
	class URemnantQuestEntity*                         OutputPin;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Teleport NPC
struct AQuest_Intro_C_Teleport_NPC_Params
{
	class UQuestEntity**                               Quest_Entity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Destination_Actor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Gather Reactor Sounds
struct AQuest_Intro_C_Gather_Reactor_Sounds_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SFX Start Reactor
struct AQuest_Intro_C_SFX_Start_Reactor_Params
{
	bool*                                              Fade_In;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Zone to Main Game Instance
struct AQuest_Intro_C_Zone_to_Main_Game_Instance_Params
{
};

// Function Quest_Intro.Quest_Intro_C.PlayerSawCutscene
struct AQuest_Intro_C_PlayerSawCutscene_Params
{
	bool                                               SawCutscene;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Holdout Success
struct AQuest_Intro_C_Holdout_Success_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Rescue Player - Ace
struct AQuest_Intro_C_Rescue_Player___Ace_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Gather Cutscene Lights
struct AQuest_Intro_C_Gather_Cutscene_Lights_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Update Reactor Terminal
struct AQuest_Intro_C_Update_Reactor_Terminal_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Gather Lights & FX in Player Base
struct AQuest_Intro_C_Gather_Lights___FX_in_Player_Base_Params
{
};

// Function Quest_Intro.Quest_Intro_C.PB - Intro Lighting
struct AQuest_Intro_C_PB___Intro_Lighting_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Rescue Player - Ford
struct AQuest_Intro_C_Rescue_Player___Ford_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Get Nearest Player Saved Point
struct AQuest_Intro_C_Get_Nearest_Player_Saved_Point_Params
{
	class AActor*                                      Nearest_Safe_Point;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Move Player to Safe Loc
struct AQuest_Intro_C_Move_Player_to_Safe_Loc_Params
{
};

// Function Quest_Intro.Quest_Intro_C.fade
struct AQuest_Intro_C_fade_Params
{
	EFadeDirection*                                    Fade_Direction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Deactivate Player Spawn Point
struct AQuest_Intro_C_Deactivate_Player_Spawn_Point_Params
{
	bool*                                              Exterior;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Set Player State
struct AQuest_Intro_C_Set_Player_State_Params
{
	struct FName*                                      Name_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Only_Set_if_Valid;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Get Local Player's State Machine Component
struct AQuest_Intro_C_Get_Local_Player_s_State_Machine_Component_Params
{
	class UStateMachineComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Replace Ace
struct AQuest_Intro_C_Replace_Ace_Params
{
};

// Function Quest_Intro.Quest_Intro_C.PlayerSavedOutside
struct AQuest_Intro_C_PlayerSavedOutside_Params
{
	bool                                               SavedOutside;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Get Local Remnant_PlayerController
struct AQuest_Intro_C_Get_Local_Remnant_PlayerController_Params
{
	class ARemnant_PlayerController_C*                 AsRemnant_Player_Controller;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.EnablePlayerNoKill
struct AQuest_Intro_C_EnablePlayerNoKill_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.On Before Player Killed
struct AQuest_Intro_C_On_Before_Player_Killed_Params
{
};

// Function Quest_Intro.Quest_Intro_C.PlayerSavedByAce
struct AQuest_Intro_C_PlayerSavedByAce_Params
{
	bool                                               SavedByAce;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Remove Tutorial Prompt
struct AQuest_Intro_C_Remove_Tutorial_Prompt_Params
{
	struct FName*                                      Tutorial_ID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Remove;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Add Loot Notification
struct AQuest_Intro_C_Add_Loot_Notification_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Deactivate Power (Lights)
struct AQuest_Intro_C_Deactivate_Power__Lights__Params
{
	bool*                                              Activation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Check Holdout Completion
struct AQuest_Intro_C_Check_Holdout_Completion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Deactivate Crystal
struct AQuest_Intro_C_Deactivate_Crystal_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Get Player as Remnant Character
struct AQuest_Intro_C_Get_Player_as_Remnant_Character_Params
{
	class ARemnantCharacter*                           AsRemnant_Character;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Add Archetype UI to Screen
struct AQuest_Intro_C_Add_Archetype_UI_to_Screen_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Get Local Player's Inventory Component
struct AQuest_Intro_C_Get_Local_Player_s_Inventory_Component_Params
{
	class UInventoryComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Add & Equip Item
struct AQuest_Intro_C_Add___Equip_Item_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Hide_Loot_Notification;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.Equip Player per Tutorial Start
struct AQuest_Intro_C_Equip_Player_per_Tutorial_Start_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Timeline_0__FinishedFunc
struct AQuest_Intro_C_Timeline_0__FinishedFunc_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Timeline_0__UpdateFunc
struct AQuest_Intro_C_Timeline_0__UpdateFunc_Params
{
};

// Function Quest_Intro.Quest_Intro_C.OnFailure_778E930B40FF1B87D8703095A2AB5AC6
struct AQuest_Intro_C_OnFailure_778E930B40FF1B87D8703095A2AB5AC6_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnSuccess_778E930B40FF1B87D8703095A2AB5AC6
struct AQuest_Intro_C_OnSuccess_778E930B40FF1B87D8703095A2AB5AC6_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.ActivatePower
struct AQuest_Intro_C_ActivatePower_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ActivateReturn
struct AQuest_Intro_C_ActivateReturn_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ActivateKey
struct AQuest_Intro_C_ActivateKey_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ActivateTalk
struct AQuest_Intro_C_ActivateTalk_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Complete
struct AQuest_Intro_C_Complete_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ActivateUpgrade
struct AQuest_Intro_C_ActivateUpgrade_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ActivateReturn2
struct AQuest_Intro_C_ActivateReturn2_Params
{
};

// Function Quest_Intro.Quest_Intro_C.OpenArchetype
struct AQuest_Intro_C_OpenArchetype_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Ace_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Ace_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Key_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Key_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Ward13_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Zone_Ward13_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Intro_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Zone_Intro_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ActivateCrystal
struct AQuest_Intro_C_ActivateCrystal_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Return_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Return_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Defend_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Defend_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Crouch_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__CrouchComplete_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__CrouchComplete_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Vault_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Vault_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__VaultComplete_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__VaultComplete_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Cutscene_K2Node_ComponentBoundEvent_5_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Cutscene_K2Node_ComponentBoundEvent_5_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Player Died
struct AQuest_Intro_C_Player_Died_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__FirstBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__FirstBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_MoreBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_MoreBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_GroundBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_GroundBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnArchetypeSelected
struct AQuest_Intro_C_OnArchetypeSelected_Params
{
	class URemnantArchetype**                          Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Intro_Ford_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Intro_Ford_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Show Melee Combat Tutorial Prompts
struct AQuest_Intro_C_Show_Melee_Combat_Tutorial_Prompts_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Player Died In Reactor Room
struct AQuest_Intro_C_Player_Died_In_Reactor_Room_Params
{
};

// Function Quest_Intro.Quest_Intro_C.OnPlayerDead
struct AQuest_Intro_C_OnPlayerDead_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_01_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Lightning_01_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Lightning_02
struct AQuest_Intro_C_Lightning_02_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Lightning_03
struct AQuest_Intro_C_Lightning_03_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_04_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Lightning_04_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_05_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Lightning_05_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Lightning_06_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Lightning_06_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Lerp Skylight
struct AQuest_Intro_C_Lerp_Skylight_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Intro_Ace_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Intro_Ace_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.GeneratorsInitialized
struct AQuest_Intro_C_GeneratorsInitialized_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__PowerSource_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__PowerSource_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Cutscene_1_Finish
struct AQuest_Intro_C_Cutscene_1_Finish_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Cutscene_1_Start
struct AQuest_Intro_C_Cutscene_1_Start_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Return_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Return_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Key_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Key_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Defend_K2Node_ComponentBoundEvent_4_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Defend_K2Node_ComponentBoundEvent_4_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Ace_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Ace_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Terminal_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Terminal_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.OnQuestComplete
struct AQuest_Intro_C_OnQuestComplete_Params
{
	EQuestResult*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.CompleteKey
struct AQuest_Intro_C_CompleteKey_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Zone
struct AQuest_Intro_C_Zone_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Talk_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Talk_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Initialize_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Initialize_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Kill_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Kill_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.OnCharacterEvent
struct AQuest_Intro_C_OnCharacterEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnFordRescueEvent
struct AQuest_Intro_C_OnFordRescueEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnRigsRescueEvent
struct AQuest_Intro_C_OnRigsRescueEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.EventTreeFadeOut
struct AQuest_Intro_C_EventTreeFadeOut_Params
{
};

// Function Quest_Intro.Quest_Intro_C.EventTreeFadeIn
struct AQuest_Intro_C_EventTreeFadeIn_Params
{
};

// Function Quest_Intro.Quest_Intro_C.TestLighting
struct AQuest_Intro_C_TestLighting_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Footsteps_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Footsteps_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Ramp_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Ramp_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Lightning 07
struct AQuest_Intro_C_Lightning_07_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Lightning_08
struct AQuest_Intro_C_Lightning_08_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Lightning 09
struct AQuest_Intro_C_Lightning_09_Params
{
};

// Function Quest_Intro.Quest_Intro_C.CutsceneLighting-Wallace-Start
struct AQuest_Intro_C_CutsceneLighting_Wallace_Start_Params
{
};

// Function Quest_Intro.Quest_Intro_C.CutsceneLighting-Wallace-End
struct AQuest_Intro_C_CutsceneLighting_Wallace_End_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.PickupItemCollected
struct AQuest_Intro_C_PickupItemCollected_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__PowerSource_StartUp_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__PowerSource_StartUp_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Crouch_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Vault_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Vault_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnDead_Event_1
struct AQuest_Intro_C_OnDead_Event_1_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Quest_Intro.Quest_Intro_C.WakeUp_Intro
struct AQuest_Intro_C_WakeUp_Intro_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.End of Fight SFX
struct AQuest_Intro_C_End_of_Fight_SFX_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Trigger Holdout Success
struct AQuest_Intro_C_Trigger_Holdout_Success_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Reggie_K2Node_ComponentBoundEvent_10_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Reggie_K2Node_ComponentBoundEvent_10_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.AceStay
struct AQuest_Intro_C_AceStay_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Start Reactor SFX
struct AQuest_Intro_C_Start_Reactor_SFX_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Rigs_K2Node_ComponentBoundEvent_11_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Rigs_K2Node_ComponentBoundEvent_11_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.RigsWeaponUpgrade
struct AQuest_Intro_C_RigsWeaponUpgrade_Params
{
};

// Function Quest_Intro.Quest_Intro_C.RigsGiveArmor
struct AQuest_Intro_C_RigsGiveArmor_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Upgrade_K2Node_ComponentBoundEvent_15_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Upgrade_K2Node_ComponentBoundEvent_15_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ResetFordTrigger
struct AQuest_Intro_C_ResetFordTrigger_Params
{
};

// Function Quest_Intro.Quest_Intro_C.VaultDoorComplete
struct AQuest_Intro_C_VaultDoorComplete_Params
{
};

// Function Quest_Intro.Quest_Intro_C.GiveWeaponMod
struct AQuest_Intro_C_GiveWeaponMod_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__SeeAva_K2Node_ComponentBoundEvent_16_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__SeeAva_K2Node_ComponentBoundEvent_16_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.AceDefault
struct AQuest_Intro_C_AceDefault_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ZoneToIntro
struct AQuest_Intro_C_ZoneToIntro_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Closed_Event_1
struct AQuest_Intro_C_Closed_Event_1_Params
{
};

// Function Quest_Intro.Quest_Intro_C.IntroSetup
struct AQuest_Intro_C_IntroSetup_Params
{
};

// Function Quest_Intro.Quest_Intro_C.IntroWardSetup
struct AQuest_Intro_C_IntroWardSetup_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_HowToConsumable_K2Node_ComponentBoundEvent_17_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_HowToConsumable_K2Node_ComponentBoundEvent_17_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Tutorial Window Closed_Event_1
struct AQuest_Intro_C_Tutorial_Window_Closed_Event_1_Params
{
};

// Function Quest_Intro.Quest_Intro_C.CatchTutorialWindow
struct AQuest_Intro_C_CatchTutorialWindow_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Show Dragon Heart ToolTip
struct AQuest_Intro_C_Show_Dragon_Heart_ToolTip_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Screamer_K2Node_ComponentBoundEvent_20_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Screamer_K2Node_ComponentBoundEvent_20_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnStateChange_Event_1
struct AQuest_Intro_C_OnStateChange_Event_1_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.ResetHealth
struct AQuest_Intro_C_ResetHealth_Params
{
};

// Function Quest_Intro.Quest_Intro_C.WallyCine
struct AQuest_Intro_C_WallyCine_Params
{
};

// Function Quest_Intro.Quest_Intro_C.RemoveRewardWidget
struct AQuest_Intro_C_RemoveRewardWidget_Params
{
};

// Function Quest_Intro.Quest_Intro_C.CinematicFord
struct AQuest_Intro_C_CinematicFord_Params
{
};

// Function Quest_Intro.Quest_Intro_C.FadeHordeLoop
struct AQuest_Intro_C_FadeHordeLoop_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Talk_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Talk_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.WaitForNotifications
struct AQuest_Intro_C_WaitForNotifications_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Queue Empty_Event_1
struct AQuest_Intro_C_Queue_Empty_Event_1_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_21_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_21_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.Show Ranged Combat Tutorial Prompts
struct AQuest_Intro_C_Show_Ranged_Combat_Tutorial_Prompts_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Upgrade_K2Node_ComponentBoundEvent_22_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Upgrade_K2Node_ComponentBoundEvent_22_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Rigs_K2Node_ComponentBoundEvent_23_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Rigs_K2Node_ComponentBoundEvent_23_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnLeveledUp_Event_1
struct AQuest_Intro_C_OnLeveledUp_Event_1_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.CinematicRigs
struct AQuest_Intro_C_CinematicRigs_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ActivateUpgradeObj
struct AQuest_Intro_C_ActivateUpgradeObj_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__DragonCrystal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__DragonCrystal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.UpgradeTutorialClosed
struct AQuest_Intro_C_UpgradeTutorialClosed_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Ford1NextObjective
struct AQuest_Intro_C_Ford1NextObjective_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__Zone_Prologue_K2Node_ComponentBoundEvent_18_QuestVoidDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__Zone_Prologue_K2Node_ComponentBoundEvent_18_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SetFordArmsCrossed
struct AQuest_Intro_C_SetFordArmsCrossed_Params
{
};

// Function Quest_Intro.Quest_Intro_C.EventTreeFadeOutInstant
struct AQuest_Intro_C_EventTreeFadeOutInstant_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__EventRegion_K2Node_ComponentBoundEvent_19_EventRegionPlayerDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__EventRegion_K2Node_ComponentBoundEvent_19_EventRegionPlayerDelegate__DelegateSignature_Params
{
	struct FEventRegionCharacter*                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Quest_Intro.Quest_Intro_C.StartPrologue
struct AQuest_Intro_C_StartPrologue_Params
{
};

// Function Quest_Intro.Quest_Intro_C.PlayerReadyForWally
struct AQuest_Intro_C_PlayerReadyForWally_Params
{
};

// Function Quest_Intro.Quest_Intro_C.PlayerSit
struct AQuest_Intro_C_PlayerSit_Params
{
};

// Function Quest_Intro.Quest_Intro_C.PlayerDefault
struct AQuest_Intro_C_PlayerDefault_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ExitTerminal
struct AQuest_Intro_C_ExitTerminal_Params
{
};

// Function Quest_Intro.Quest_Intro_C.EquipSword
struct AQuest_Intro_C_EquipSword_Params
{
};

// Function Quest_Intro.Quest_Intro_C.OnPlayerEnteredIntroZone
struct AQuest_Intro_C_OnPlayerEnteredIntroZone_Params
{
	class APlayerController**                          Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.OnPlayerEnteredWard13
struct AQuest_Intro_C_OnPlayerEnteredWard13_Params
{
	class APlayerController**                          Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.ReceiveBeginPlay
struct AQuest_Intro_C_ReceiveBeginPlay_Params
{
};

// Function Quest_Intro.Quest_Intro_C.Show Message - Can't Join
struct AQuest_Intro_C_Show_Message___Can_t_Join_Params
{
};

// Function Quest_Intro.Quest_Intro_C.SetRigs
struct AQuest_Intro_C_SetRigs_Params
{
};

// Function Quest_Intro.Quest_Intro_C.EngageRigs
struct AQuest_Intro_C_EngageRigs_Params
{
};

// Function Quest_Intro.Quest_Intro_C.BndEvt__ReactorTerminal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature
struct AQuest_Intro_C_BndEvt__ReactorTerminal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Intro.Quest_Intro_C.EnableSaving
struct AQuest_Intro_C_EnableSaving_Params
{
};

// Function Quest_Intro.Quest_Intro_C.ExecuteUbergraph_Quest_Intro
struct AQuest_Intro_C_ExecuteUbergraph_Quest_Intro_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
