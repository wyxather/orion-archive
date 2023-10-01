#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Remnant_PlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Remnant_PlayerController.Remnant_PlayerController_C.RemoveStartingLevelEquipment
struct ARemnant_PlayerController_C_RemoveStartingLevelEquipment_Params
{
	TSoftObjectPtr<class UClass>*                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.PlaySurvivalNotification
struct ARemnant_PlayerController_C_PlaySurvivalNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DurationOverride;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShouldShowQuestInventory
struct ARemnant_PlayerController_C_ShouldShowQuestInventory_Params
{
	bool                                               ShouldShow;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnSurvivalEndPlay
struct ARemnant_PlayerController_C_OnSurvivalEndPlay_Params
{
	class AActor**                                     EndingActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EEndPlayReason>*                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ResetSurvivalCvars
struct ARemnant_PlayerController_C_ResetSurvivalCvars_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.InitializeSurvivalCvars
struct ARemnant_PlayerController_C_InitializeSurvivalCvars_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ResetSurvivalPawn
struct ARemnant_PlayerController_C_ResetSurvivalPawn_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.NotifySurvivalQuestPendingEnd
struct ARemnant_PlayerController_C_NotifySurvivalQuestPendingEnd_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.CompleteSurvivalQuest
struct ARemnant_PlayerController_C_CompleteSurvivalQuest_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.InitializeSurvivalPawn
struct ARemnant_PlayerController_C_InitializeSurvivalPawn_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.RevertSurvivalPawn
struct ARemnant_PlayerController_C_RevertSurvivalPawn_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.CheckSurvivalTransition
struct ARemnant_PlayerController_C_CheckSurvivalTransition_Params
{
	int*                                               Travel_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetPresence
struct ARemnant_PlayerController_C_SetPresence_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.PollHighlights
struct ARemnant_PlayerController_C_PollHighlights_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.DisableHighlightsPolling
struct ARemnant_PlayerController_C_DisableHighlightsPolling_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.TogglePollHighlights
struct ARemnant_PlayerController_C_TogglePollHighlights_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.InitShadowPlay
struct ARemnant_PlayerController_C_InitShadowPlay_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.fade
struct ARemnant_PlayerController_C_fade_Params
{
	EFadeDirection*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.CanRespawnPlayers
struct ARemnant_PlayerController_C_CanRespawnPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.UpdateWorldReset
struct ARemnant_PlayerController_C_UpdateWorldReset_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Lock Player Position
struct ARemnant_PlayerController_C_Lock_Player_Position_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowInGameMenu
struct ARemnant_PlayerController_C_ShowInGameMenu_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADialog_InGameMenu_C*                        InGameMenu;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Update Minimap Scale
struct ARemnant_PlayerController_C_Update_Minimap_Scale_Params
{
	float*                                             Scale_Delta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.CloseDialogs
struct ARemnant_PlayerController_C_CloseDialogs_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.HideLoadScreen
struct ARemnant_PlayerController_C_HideLoadScreen_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowLoadScreen
struct ARemnant_PlayerController_C_ShowLoadScreen_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.WorldReset__FinishedFunc
struct ARemnant_PlayerController_C_WorldReset__FinishedFunc_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.WorldReset__UpdateFunc
struct ARemnant_PlayerController_C_WorldReset__UpdateFunc_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_ToggleHUD_K2Node_InputActionEvent_1
struct ARemnant_PlayerController_C_InpActEvt_ToggleHUD_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_F4_K2Node_InputKeyEvent_2
struct ARemnant_PlayerController_C_InpActEvt_F4_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_Alt_X_K2Node_InputKeyEvent_1
struct ARemnant_PlayerController_C_InpActEvt_Alt_X_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerCheckSurvivalTransition
struct ARemnant_PlayerController_C_ServerCheckSurvivalTransition_Params
{
	int*                                               TravelID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.MultiRevertSurvivalPawn
struct ARemnant_PlayerController_C_MultiRevertSurvivalPawn_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.MultiCompleteSurvivalQuest
struct ARemnant_PlayerController_C_MultiCompleteSurvivalQuest_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.MultiResetSurvivalPawn
struct ARemnant_PlayerController_C_MultiResetSurvivalPawn_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientPlaySurvivalNotification
struct ARemnant_PlayerController_C_ClientPlaySurvivalNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DurationOverride;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnDeceased
struct ARemnant_PlayerController_C_OnDeceased_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.HandleSkipIntro
struct ARemnant_PlayerController_C_HandleSkipIntro_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseConsumable
struct ARemnant_PlayerController_C_ServerUseConsumable_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ValidateItemRemoval
struct ARemnant_PlayerController_C_ValidateItemRemoval_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerItemRemoval
struct ARemnant_PlayerController_C_ServerItemRemoval_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientValidItemRemoval
struct ARemnant_PlayerController_C_ClientValidItemRemoval_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnInitChroma
struct ARemnant_PlayerController_C_OnInitChroma_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaDefault
struct ARemnant_PlayerController_C_SetChromaDefault_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaTravel
struct ARemnant_PlayerController_C_SetChromaTravel_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaLowHealth
struct ARemnant_PlayerController_C_SetChromaLowHealth_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaRest
struct ARemnant_PlayerController_C_SetChromaRest_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaDamage
struct ARemnant_PlayerController_C_SetChromaDamage_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaTravelFinished
struct ARemnant_PlayerController_C_SetChromaTravelFinished_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnChromaDamageEnd
struct ARemnant_PlayerController_C_OnChromaDamageEnd_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnBeginTravel
struct ARemnant_PlayerController_C_OnBeginTravel_Params
{
	int*                                               PendingZoneID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishTravel
struct ARemnant_PlayerController_C_OnFinishTravel_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishTravelLoad
struct ARemnant_PlayerController_C_OnFinishTravelLoad_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnServerFinalizeTravel
struct ARemnant_PlayerController_C_OnServerFinalizeTravel_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.PostUseWaypoint
struct ARemnant_PlayerController_C_PostUseWaypoint_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Set Rich Presence
struct ARemnant_PlayerController_C_Set_Rich_Presence_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetSoftwareOcclusionOverride
struct ARemnant_PlayerController_C_SetSoftwareOcclusionOverride_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.DoCreditsFade
struct ARemnant_PlayerController_C_DoCreditsFade_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnReadyToTravel
struct ARemnant_PlayerController_C_OnReadyToTravel_Params
{
	int*                                               PendingZoneID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.DoPostCreditFadeIn
struct ARemnant_PlayerController_C_DoPostCreditFadeIn_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Server Inspectable Next
struct ARemnant_PlayerController_C_Server_Inspectable_Next_Params
{
	class ABP_Inspectable_C**                          Inspectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Server Inspectable Prev
struct ARemnant_PlayerController_C_Server_Inspectable_Prev_Params
{
	class ABP_Inspectable_C**                          Inspectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseItem
struct ARemnant_PlayerController_C_ServerUseItem_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientUseItemFail
struct ARemnant_PlayerController_C_ClientUseItemFail_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerBeginInspect
struct ARemnant_PlayerController_C_ServerBeginInspect_Params
{
	class ABP_Inspectable_C**                          Inspectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerEndInspect
struct ARemnant_PlayerController_C_ServerEndInspect_Params
{
	class ABP_Inspectable_C**                          Inspectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientRequestEndInspect
struct ARemnant_PlayerController_C_ClientRequestEndInspect_Params
{
	class ABP_Inspectable_C**                          Inspectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerNotifyCompleteInspect
struct ARemnant_PlayerController_C_ServerNotifyCompleteInspect_Params
{
	class ABP_Inspectable_C**                          Inspectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.EquipMod
struct ARemnant_PlayerController_C_EquipMod_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char*                                     Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ModItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.UnequipMod
struct ARemnant_PlayerController_C_UnequipMod_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char*                                     Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerCreateQuest
struct ARemnant_PlayerController_C_ServerCreateQuest_Params
{
	int*                                               SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString*                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerActivateQuest
struct ARemnant_PlayerController_C_ServerActivateQuest_Params
{
	class ARemnantQuest**                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerDestroyQuest
struct ARemnant_PlayerController_C_ServerDestroyQuest_Params
{
	class ARemnantQuest**                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowDialogue
struct ARemnant_PlayerController_C_ShowDialogue_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowLootContainer
struct ARemnant_PlayerController_C_ShowLootContainer_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowCraftingMenu
struct ARemnant_PlayerController_C_ShowCraftingMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueSelectOptionByName
struct ARemnant_PlayerController_C_DialogueSelectOptionByName_Params
{
	class AActor**                                     ContextActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueAdvance
struct ARemnant_PlayerController_C_DialogueAdvance_Params
{
	class AActor**                                     ContextActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowUpgradingMenu
struct ARemnant_PlayerController_C_ShowUpgradingMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.EndDialog
struct ARemnant_PlayerController_C_EndDialog_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OpenLootContainer
struct ARemnant_PlayerController_C_OpenLootContainer_Params
{
	class ALootContainer**                             LootContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowInfusionMenu
struct ARemnant_PlayerController_C_ShowInfusionMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Join In Progress Dialog Client
struct ARemnant_PlayerController_C_Join_In_Progress_Dialog_Client_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Server State Machine Interation
struct ARemnant_PlayerController_C_Server_State_Machine_Interation_Params
{
	class UStateMachineComponent**                     State_Machine;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueSelectOption
struct ARemnant_PlayerController_C_DialogueSelectOption_Params
{
	class AActor**                                     ContextActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char*                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.EndPlayerDialog
struct ARemnant_PlayerController_C_EndPlayerDialog_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerDialogue
struct ARemnant_PlayerController_C_ShowPlayerDialogue_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerCraftingMenu
struct ARemnant_PlayerController_C_ShowPlayerCraftingMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerInfusionMenu
struct ARemnant_PlayerController_C_ShowPlayerInfusionMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerLootContainer
struct ARemnant_PlayerController_C_ShowPlayerLootContainer_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerUpgradingMenu
struct ARemnant_PlayerController_C_ShowPlayerUpgradingMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Event Show Character Select
struct ARemnant_PlayerController_C_Event_Show_Character_Select_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.EventClosedCharacterSelect
struct ARemnant_PlayerController_C_EventClosedCharacterSelect_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowTutorial
struct ARemnant_PlayerController_C_ShowTutorial_Params
{
	class UClass**                                     Tutorial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     ContextActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowJoinSessionCharacterSelect
struct ARemnant_PlayerController_C_ShowJoinSessionCharacterSelect_Params
{
	class ABP_Multispawn_Waypoint_C**                  BP_Multispawn_Waypoint;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.FinishedJoinSessionCharacterSelect
struct ARemnant_PlayerController_C_FinishedJoinSessionCharacterSelect_Params
{
	class ABP_Multispawn_Waypoint_C**                  BP_Multispawn_Waypoint;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Server_SpectateCharacterSelected
struct ARemnant_PlayerController_C_Server_SpectateCharacterSelected_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Client_SpectateSwapCharacter
struct ARemnant_PlayerController_C_Client_SpectateSwapCharacter_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Join In Progress Dialog Server
struct ARemnant_PlayerController_C_Join_In_Progress_Dialog_Server_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToWaypoint
struct ARemnant_PlayerController_C_ServerTravelToWaypoint_Params
{
	class AActor**                                     Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZoneLinkInfo*                              WaypointInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToDestination
struct ARemnant_PlayerController_C_ServerTravelToDestination_Params
{
	class AActor**                                     Link;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTransitionToMenu
struct ARemnant_PlayerController_C_ServerTransitionToMenu_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTransitionFromMenu
struct ARemnant_PlayerController_C_ServerTransitionFromMenu_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUpgradeCheckpoint
struct ARemnant_PlayerController_C_ServerUpgradeCheckpoint_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToWaypointName
struct ARemnant_PlayerController_C_ServerTravelToWaypointName_Params
{
	class AActor**                                     Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      WaypointName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseCheckpoint
struct ARemnant_PlayerController_C_ServerUseCheckpoint_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientBeginUseCheckpoint
struct ARemnant_PlayerController_C_ClientBeginUseCheckpoint_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientEndUseCheckpoint
struct ARemnant_PlayerController_C_ClientEndUseCheckpoint_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerLeaveDungeon
struct ARemnant_PlayerController_C_ServerLeaveDungeon_Params
{
	class AActor**                                     Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerActivateWaypoint
struct ARemnant_PlayerController_C_ServerActivateWaypoint_Params
{
	class ACheckpoint**                                Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnBeginWorldReset
struct ARemnant_PlayerController_C_OnBeginWorldReset_Params
{
	class ACheckpoint**                                ActivatedCheckpoint;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bWasDead;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishWorldReset
struct ARemnant_PlayerController_C_OnFinishWorldReset_Params
{
	class ACheckpoint**                                ActivatedCheckpoint;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetWorldFadeOut
struct ARemnant_PlayerController_C_SetWorldFadeOut_Params
{
	TEnumAsByte<EWorldResetState>*                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.PlayWorldReset
struct ARemnant_PlayerController_C_PlayWorldReset_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.StopWorldReset
struct ARemnant_PlayerController_C_StopWorldReset_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.SetWorldResetTime
struct ARemnant_PlayerController_C_SetWorldResetTime_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerSetInCheckpointMenu
struct ARemnant_PlayerController_C_ServerSetInCheckpointMenu_Params
{
	bool*                                              InMenu;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ReceiveBeginPlay
struct ARemnant_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnTimeout_Event_1
struct ARemnant_PlayerController_C_OnTimeout_Event_1_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnDead
struct ARemnant_PlayerController_C_OnDead_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Check DLC
struct ARemnant_PlayerController_C_Check_DLC_Params
{
	class ACharacter_Master_Player_C**                 Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.Server Remove DLC Item
struct ARemnant_PlayerController_C_Server_Remove_DLC_Item_Params
{
	class URemnantPlayerInventoryComponent**           Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>*                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.ExecuteUbergraph_Remnant_PlayerController
struct ARemnant_PlayerController_C_ExecuteUbergraph_Remnant_PlayerController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnDialogueStarted__DelegateSignature
struct ARemnant_PlayerController_C_OnDialogueStarted__DelegateSignature_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.OnUseItemFail__DelegateSignature
struct ARemnant_PlayerController_C_OnUseItemFail__DelegateSignature_Params
{
};

// Function Remnant_PlayerController.Remnant_PlayerController_C.FinishedTravel__DelegateSignature
struct ARemnant_PlayerController_C_FinishedTravel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
