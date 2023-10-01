#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_TPSHud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TPSHud.TPSHud_C.ClearLocalPlayerAimTarget
struct ATPSHud_C_ClearLocalPlayerAimTarget_Params
{
};

// Function TPSHud.TPSHud_C.ClearAllCheckpointNotifications
struct ATPSHud_C_ClearAllCheckpointNotifications_Params
{
};

// Function TPSHud.TPSHud_C.RemoveCheckpointNotification
struct ATPSHud_C_RemoveCheckpointNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.IsCheckpointNotificationActive
struct ATPSHud_C_IsCheckpointNotificationActive_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.AddCheckpointNotification
struct ATPSHud_C_AddCheckpointNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TimeOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.AddNotifications
struct ATPSHud_C_AddNotifications_Params
{
};

// Function TPSHud.TPSHud_C.RemoveNotifications
struct ATPSHud_C_RemoveNotifications_Params
{
};

// Function TPSHud.TPSHud_C.ShowCinematicMenu
struct ATPSHud_C_ShowCinematicMenu_Params
{
	class ULevelSequence**                             LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerGunfire*>                      RelevantPlayers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.ShouldShowCinematicMenu
struct ATPSHud_C_ShouldShowCinematicMenu_Params
{
	struct FSequencerPlayerSettings*                   SequencerSettings;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShouldShow;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.ToggleHUDVisibilityAndPinnedWidgets
struct ATPSHud_C_ToggleHUDVisibilityAndPinnedWidgets_Params
{
};

// Function TPSHud.TPSHud_C.DisplayCinematicUI
struct ATPSHud_C_DisplayCinematicUI_Params
{
	struct FSequencerPlayerSettings*                   SequenceSettings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ULevelSequence**                             LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.ShowJoinSpectate
struct ATPSHud_C_ShowJoinSpectate_Params
{
};

// Function TPSHud.TPSHud_C.ClearHealthBarOnModeChange
struct ATPSHud_C_ClearHealthBarOnModeChange_Params
{
	bool*                                              IsUsingRangedWeapon;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.ValidateCurrentHealthBar
struct ATPSHud_C_ValidateCurrentHealthBar_Params
{
	class ACharacterGunfire**                          OwningCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             MaximumHealthBarDistance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             MinimumHealthBarDistance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.TryUpdateHealthBar
struct ATPSHud_C_TryUpdateHealthBar_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          OwningCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             MaximumHealthBarDistance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             MinimumHealthBarDistance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.FadeInHUD
struct ATPSHud_C_FadeInHUD_Params
{
};

// Function TPSHud.TPSHud_C.FadeOutHUD
struct ATPSHud_C_FadeOutHUD_Params
{
};

// Function TPSHud.TPSHud_C.ClearHealthBar
struct ATPSHud_C_ClearHealthBar_Params
{
};

// Function TPSHud.TPSHud_C.UpdateWidgetVisibility
struct ATPSHud_C_UpdateWidgetVisibility_Params
{
};

// Function TPSHud.TPSHud_C.ShowUtilityRadial
struct ATPSHud_C_ShowUtilityRadial_Params
{
};

// Function TPSHud.TPSHud_C.ShowConsumableRadial
struct ATPSHud_C_ShowConsumableRadial_Params
{
};

// Function TPSHud.TPSHud_C.FadeIn
struct ATPSHud_C_FadeIn_Params
{
	struct FName*                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.FadeOut
struct ATPSHud_C_FadeOut_Params
{
	struct FName*                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.UpdateAimTarget
struct ATPSHud_C_UpdateAimTarget_Params
{
};

// Function TPSHud.TPSHud_C.ShowDeathScreen
struct ATPSHud_C_ShowDeathScreen_Params
{
};

// Function TPSHud.TPSHud_C.EvaluateHudVisibility
struct ATPSHud_C_EvaluateHudVisibility_Params
{
};

// Function TPSHud.TPSHud_C.SetHUDVisibility
struct ATPSHud_C_SetHUDVisibility_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.RemoveHud
struct ATPSHud_C_RemoveHud_Params
{
};

// Function TPSHud.TPSHud_C.IsRelevant
struct ATPSHud_C_IsRelevant_Params
{
	class ACharacterGunfire**                          Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.Show Loading
struct ATPSHud_C_Show_Loading_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.ForceHideHUD
struct ATPSHud_C_ForceHideHUD_Params
{
	bool*                                              Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.HideSubtitle
struct ATPSHud_C_HideSubtitle_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.ShowSubtitle
struct ATPSHud_C_ShowSubtitle_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TPSHud.TPSHud_C.UpdateRelevantBoss
struct ATPSHud_C_UpdateRelevantBoss_Params
{
};

// Function TPSHud.TPSHud_C.UnregisterBoss
struct ATPSHud_C_UnregisterBoss_Params
{
	class ACharacterGunfire**                          Boss;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.RegisterBoss
struct ATPSHud_C_RegisterBoss_Params
{
	class ACharacterGunfire**                          Boss;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.ShowInGameMenu
struct ATPSHud_C_ShowInGameMenu_Params
{
	class ADialog_InGameMenu_C*                        Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_Menu_K2Node_InputActionEvent_10
struct ATPSHud_C_InpActEvt_Menu_K2Node_InputActionEvent_10_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9
struct ATPSHud_C_InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_Menu_Traits_K2Node_InputActionEvent_8
struct ATPSHud_C_InpActEvt_Menu_Traits_K2Node_InputActionEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_Menu_Options_K2Node_InputActionEvent_7
struct ATPSHud_C_InpActEvt_Menu_Options_K2Node_InputActionEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_MiniMap_K2Node_InputActionEvent_6
struct ATPSHud_C_InpActEvt_MiniMap_K2Node_InputActionEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5
struct ATPSHud_C_InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4
struct ATPSHud_C_InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3
struct ATPSHud_C_InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2
struct ATPSHud_C_InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnLoaded_11518D56437970EB654D3DBB78C12EA1
struct ATPSHud_C_OnLoaded_11518D56437970EB654D3DBB78C12EA1_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_Menu_Character_K2Node_InputActionEvent_1
struct ATPSHud_C_InpActEvt_Menu_Character_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
struct ATPSHud_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnStartPendingTravel
struct ATPSHud_C_OnStartPendingTravel_Params
{
};

// Function TPSHud.TPSHud_C.OnStopPendingTravel
struct ATPSHud_C_OnStopPendingTravel_Params
{
};

// Function TPSHud.TPSHud_C.ShowCharacterMenu
struct ATPSHud_C_ShowCharacterMenu_Params
{
};

// Function TPSHud.TPSHud_C.ShowDethMenu
struct ATPSHud_C_ShowDethMenu_Params
{
};

// Function TPSHud.TPSHud_C.Held Mini Map
struct ATPSHud_C_Held_Mini_Map_Params
{
};

// Function TPSHud.TPSHud_C.ReceiveTick
struct ATPSHud_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature
struct ATPSHud_C_BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      InteractiveState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.PawnChanged
struct ATPSHud_C_PawnChanged_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnHudEvent
struct ATPSHud_C_OnHudEvent_Params
{
	struct FName*                                      EventID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.ReceiveBeginPlay
struct ATPSHud_C_ReceiveBeginPlay_Params
{
};

// Function TPSHud.TPSHud_C.OnDialogBegin
struct ATPSHud_C_OnDialogBegin_Params
{
	class AUIActor**                                   Dialog;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnDialogEnd
struct ATPSHud_C_OnDialogEnd_Params
{
	class AUIActor**                                   Dialog;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnSetVisbility
struct ATPSHud_C_OnSetVisbility_Params
{
	bool*                                              bIsVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TPSHud.TPSHud_C.ReceiveEndPlay
struct ATPSHud_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnPrimaryWeaponChanged
struct ATPSHud_C_OnPrimaryWeaponChanged_Params
{
};

// Function TPSHud.TPSHud_C.CustomEvent_1
struct ATPSHud_C_CustomEvent_1_Params
{
	struct FSequencerPlayerSettings*                   Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ULevelSequence**                             CurrentSequence;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.ManualUpdateAmmoCounts
struct ATPSHud_C_ManualUpdateAmmoCounts_Params
{
};

// Function TPSHud.TPSHud_C.ClearNotifications
struct ATPSHud_C_ClearNotifications_Params
{
};

// Function TPSHud.TPSHud_C.ExecuteUbergraph_TPSHud
struct ATPSHud_C_ExecuteUbergraph_TPSHud_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnHudWidgetAssigned__DelegateSignature
struct ATPSHud_C_OnHudWidgetAssigned__DelegateSignature_Params
{
};

// Function TPSHud.TPSHud_C.OnBossNotRelevant__DelegateSignature
struct ATPSHud_C_OnBossNotRelevant__DelegateSignature_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnBossRelevant__DelegateSignature
struct ATPSHud_C_OnBossRelevant__DelegateSignature_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnHideSubtitle__DelegateSignature
struct ATPSHud_C_OnHideSubtitle__DelegateSignature_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TPSHud.TPSHud_C.OnShowSubtitle__DelegateSignature
struct ATPSHud_C_OnShowSubtitle__DelegateSignature_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
