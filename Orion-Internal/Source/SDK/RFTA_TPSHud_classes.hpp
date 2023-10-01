#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_TPSHud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TPSHud.TPSHud_C
// 0x01E8 (0x0660 - 0x0478)
class ATPSHud_C : public ARemnantHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUIHudDamageNumberComponent*                 UIHudDamageNumber;                                        // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUIHudHitIndicatorComponent*                 UIHudHitIndicator;                                        // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUIHudInteractComponent*                     UIHudInteract;                                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUIHudTutorialComponent*                     UIHudTutorial;                                            // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUIHudReticuleComponent*                     UIHudReticule;                                            // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidget_HUD_C*                               HudWidget;                                                // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      AimTarget;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacterGunfire*>                   Bosses;                                                   // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACharacterGunfire*>                   RelevantBosses;                                           // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnShowSubtitle;                                           // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHideSubtitle;                                           // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnBossRelevant;                                           // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnBossNotRelevant;                                        // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget_Loading_C*                           LoadingScreen;                                            // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceHide;                                                // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class AMiniMapDisplayActor*                        MiniMap;                                                  // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadialHoldTime;                                           // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FTimerHandle                                RadialConsumableTimer;                                    // 0x0540(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                RadialUtilityTimer;                                       // 0x0548(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       CheatDialog;                                              // 0x0550(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_HealthBar_C*                             CurrentHealthBar;                                         // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFadedIn;                                                // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WasUsingRangedWeapon;                                     // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0582(0x0006) MISSED OFFSET
	TArray<class APlayerGunfire*>                      RelevantPlayers;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ULevelSequence*                              CurrentSequence;                                          // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WaitingToPushCinematicMenu;                               // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceUnpinWidgets;                                        // 0x05A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData03[0x6];                                       // 0x05A2(0x0006) MISSED OFFSET
	struct FSequencerPlayerSettings                    CurrentSequenceSettings;                                  // 0x05A8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget_HUD_Notifications_C*                 NotificationsWidget;                                      // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CurrentSequenceInstigator;                                // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OpenedMiniMap;                                            // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	struct FTimerHandle                                MiniMapHandle;                                            // 0x0648(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHudWidgetAssigned;                                      // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TPSHud.TPSHud_C");
		return ptr;
	}


	void ClearLocalPlayerAimTarget();
	void ClearAllCheckpointNotifications();
	void RemoveCheckpointNotification(struct FName* NameID);
	void IsCheckpointNotificationActive(struct FName* NameID, bool* Out);
	void AddCheckpointNotification(struct FName* NameID, float* TimeOverride);
	void AddNotifications();
	void RemoveNotifications();
	void ShowCinematicMenu(class ULevelSequence** LevelSequence, class AActor** Instigator, TArray<class APlayerGunfire*>* RelevantPlayers);
	void ShouldShowCinematicMenu(struct FSequencerPlayerSettings* SequencerSettings, bool* ShouldShow);
	void ToggleHUDVisibilityAndPinnedWidgets();
	void DisplayCinematicUI(struct FSequencerPlayerSettings* SequenceSettings, class ULevelSequence** LevelSequence, class AActor** Instigator);
	void ShowJoinSpectate();
	void ClearHealthBarOnModeChange(bool* IsUsingRangedWeapon);
	void ValidateCurrentHealthBar(class ACharacterGunfire** OwningCharacter, float* MaximumHealthBarDistance, float* MinimumHealthBarDistance);
	void TryUpdateHealthBar(class AActor** Target, class ACharacterGunfire** OwningCharacter, float* MaximumHealthBarDistance, float* MinimumHealthBarDistance);
	void FadeInHUD();
	void FadeOutHUD();
	void ClearHealthBar();
	void UpdateWidgetVisibility();
	void ShowUtilityRadial();
	void ShowConsumableRadial();
	void FadeIn(struct FName* Reason);
	void FadeOut(struct FName* Reason, bool* Instant);
	void UpdateAimTarget();
	void ShowDeathScreen();
	void EvaluateHudVisibility();
	void SetHUDVisibility(bool* Visible);
	void RemoveHud();
	void IsRelevant(class ACharacterGunfire** Actor, bool* Out);
	void Show_Loading(bool* Show);
	void ForceHideHUD(bool* Hide);
	void HideSubtitle(class AActor** Context);
	void ShowSubtitle(class AActor** Context, struct FName* Speaker, struct FText* Text);
	void UpdateRelevantBoss();
	void UnregisterBoss(class ACharacterGunfire** Boss);
	void RegisterBoss(class ACharacterGunfire** Boss);
	void ShowInGameMenu(class ADialog_InGameMenu_C** Out);
	void InpActEvt_Menu_K2Node_InputActionEvent_10(struct FKey* Key);
	void InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9(struct FKey* Key);
	void InpActEvt_Menu_Traits_K2Node_InputActionEvent_8(struct FKey* Key);
	void InpActEvt_Menu_Options_K2Node_InputActionEvent_7(struct FKey* Key);
	void InpActEvt_MiniMap_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2(struct FKey* Key);
	void OnLoaded_11518D56437970EB654D3DBB78C12EA1(class UClass** Loaded);
	void InpActEvt_Menu_Character_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(struct FKey* Key);
	void OnStartPendingTravel();
	void OnStopPendingTravel();
	void ShowCharacterMenu();
	void ShowDethMenu();
	void Held_Mini_Map();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature(class AActor** Actor, struct FName* InteractiveState);
	void PawnChanged(class APawn** Pawn);
	void OnHudEvent(struct FName* EventID, class UObject** Context);
	void ReceiveBeginPlay();
	void OnDialogBegin(class AUIActor** Dialog);
	void OnDialogEnd(class AUIActor** Dialog);
	void OnSetVisbility(bool* bIsVisible);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnPrimaryWeaponChanged();
	void CustomEvent_1(struct FSequencerPlayerSettings* Settings, class ULevelSequence** CurrentSequence, class AActor** Instigator);
	void ManualUpdateAmmoCounts();
	void ClearNotifications();
	void ExecuteUbergraph_TPSHud(int* EntryPoint);
	void OnHudWidgetAssigned__DelegateSignature();
	void OnBossNotRelevant__DelegateSignature(class ACharacterGunfire** Character);
	void OnBossRelevant__DelegateSignature(class ACharacterGunfire** Character);
	void OnHideSubtitle__DelegateSignature(class AActor** Context);
	void OnShowSubtitle__DelegateSignature(class AActor** Context, struct FName* Speaker, struct FText* Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
