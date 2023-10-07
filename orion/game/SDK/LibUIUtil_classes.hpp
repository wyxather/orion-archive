#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibUIUtil.LibUIUtil_C
class ULibUIUtil_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibUIUtil_C* GetDefaultObj();

	void SpActMerchantResutToText(struct FSpActMerchantResult& SpActMerchantResult, class UObject* __WorldContext, class FText* OutText);
	void Is_Check_Use_Field_Command(const struct FPlacementData& PlacementData, class UObject* __WorldContext, bool* Enable);
	void MakeEquipmentDetailText(const struct FItemData& ItemData, int32 CharacterID, bool InvMinus, class UObject* __WorldContext, class FText* NewParam);
	void MakeItemDetailText(const struct FItemData& ItemData, int32 CharacterID, bool InvMinus, class UObject* __WorldContext, class FText* Text);
	void PlayPartyChatFromStoryRecord(class FName PartyChatLabel, class UObject* __WorldContext, bool* Success);
	void GetEquipIcon(int32 ID, class UObject* __WorldContext, class UTexture2D** IconTex);
	void GetCanEquipmentPart(int32 PlayerID, enum class EEQUIPMENT_PART Part, class UObject* __WorldContext, bool* Output);
	void GetPartLabel(int32 ID, class UObject* __WorldContext, class FName* Label);
	void OpenConfirmAbilityUI(TArray<int32>& AbilitySetID, class UObject* __WorldContext);
	void ScrollAxisHelpWindow(float AxisValue, class UObject* __WorldContext);
	void GetBalloonBundle(class UObject* __WorldContext, class UBalloonBundleWidgetBase** BalloonBundle);
	void GetMapEmblemTexture(class FName EmblemLabel, class UObject* __WorldContext, class UTexture2D** EmblemTexture);
	void MapNameNotificationEvent(class FName LevelName, class UObject* __WorldContext);
	void GetPartyChatTextList(class UObject* __WorldContext, TArray<class FText>* PartyChatList);
	void GetPartyChatList(class UObject* __WorldContext, TArray<class FName>* PartyChatList);
	void OnPlayerInput(class UObject* __WorldContext);
	void GetTimeZoneChangeUI(class UObject* __WorldContext, class UTimeZoneChangeWidget_C** TimeZoneChangeUI);
	void GetForgetAbilityUI(class UObject* __WorldContext, class UAbilityForgetWidgetBase** Ref);
	void CloseForgetAbilityUI(class UObject* __WorldContext);
	void OpenForgetAbilityUI(TArray<int32>& AbilitySetID, FDelegateProperty_& Event, class UObject* __WorldContext);
	void OpenMainHelpForce(class UObject* __WorldContext);
	void OpenExBar(class UObject* __WorldContext);
	void ClearCommonNotification(class UObject* __WorldContext);
	void PauseCommonNotification(bool Pause, class UObject* __WorldContext);
	void SetupListItemWidgetText(struct FMJListWidgetItemData& InputPin, class UObject* __WorldContext);
	void CloseNote(bool IsForceClose, class UObject* __WorldContext);
	void OpenNote(class FName& NoteTextLabel, bool UseBackground, class UObject* __WorldContext);
	void SetMainHelpPositionByWidget(class UUserWidget* TargetWidget, bool ForceFlip, class UObject* __WorldContext);
	void SetMainHelpGameText(class FName TextLabel, class UObject* __WorldContext);
	void SetMainHelpText(class FText Text, class UObject* __WorldContext);
	void CloseMainHelp(bool HideImmediately, class UObject* __WorldContext);
	void OpenMainHelp(class UObject* __WorldContext);
	void CloseSingleMenu(class UObject* __WorldContext);
	void IsOpenSingleMenu(class UObject* __WorldContext, bool* IsOpen);
	void OpenEventFieldCommandBattle(class FName NPCLabel, class UObject* __WorldContext, class UEventFieldCommandBattleBase** CreateWidget);
	void LevelChangeNotificationEnd(bool IsDelay, class UObject* __WorldContext);
	void LevelChangeNotificationStart(class FName LevelName, class FName NextLevelNameLabel, class UObject* __WorldContext);
	void OpenPartyCharacterChangeMenu(bool IsAddFriendMode, enum class EPlayableCharacterID NewCharacterID, bool IsIgnoreFade, bool IsBar, class UObject* __WorldContext);
	void CloseShopMenu(class UObject* __WorldContext);
	void IsStorySelectMode(class UObject* __WorldContext, bool* BarMenuMode);
	void CloseStorySelect(class UObject* __WorldContext);
	void OpenEquipmentMenu(bool IsBar, class UObject* __WorldContext);
	void OpenSingleMenu(class UObject* __WorldContext, class USingleMenuWidgetBase** CreateWidget);
	void OpenStorySelect(class FName WorldMapLabel, bool IsBarMenu, class UObject* __WorldContext, class UBarMenuStorySelectBase** CreateWidget);
	void EventPlayEnable(bool IsEnable, class UObject* __WorldContext);
	void CommonNotificationWithParam(const struct FCommonNotificationParam& Param, class UObject* __WorldContext);
	void CommonNotification(class FText InText, class UObject* __WorldContext);
	void MapNameNotification(class FName RegionName, class FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, class UTexture* EmblemTexture, class FName NotificationFormat, enum class EMAP_NAME_NOTIFICATION_OPEN_OWNER OpenOwner, class UObject* __WorldContext);
	void SetPartyChatVisible(bool IsVisibility, class UObject* __WorldContext);
	void CheckRadarMapEventIcon(const class FString& EventName, class UObject* __WorldContext);
	void CheckRadarMapHiddenPointIcon(int32 HiddenPointIndex, class UObject* __WorldContext);
	void CheckTreasureBoxOpen(int32 TreasureIndex, class UObject* __WorldContext);
	void ClearRadarMapIcon(class UObject* __WorldContext);
	void SetupRadarMap(class UObject* __WorldContext);
	void RadarMapNextSwitch(class UObject* __WorldContext, bool* IsVisible);
	void GetSaveLoadResult(class UObject* __WorldContext, enum class ESAVELOAD_RESULT* SaveLoadResult);
	void CloseSaveLoadMenu(class UObject* __WorldContext);
	void Open_Save_Load_Menu(bool SaveMode, bool FromDebugMenu, class UObject* __WorldContext);
	void CloseNarration(bool IsForceClose, class UObject* __WorldContext, class UNarrationWidgetBase** NarrationWidget);
	void OpenNarration(class UObject* __WorldContext, class UNarrationWidgetBase** NarrationWidget);
	void OpenEnterShopPopup(class AActor* TriggerActor, class UObject* __WorldContext);
	void OpenShopMenu(class FName ShopLabel, bool ForceDefaultBar, bool FromNPC, class UObject* __WorldContext);
	void Close_Field_Command_Menu(bool OpenJudgeWindow, bool StateCheck, class UObject* __WorldContext);
	void Open_Field_Command_Menu(class AKSCharacterBase* TargetNpc, bool DrawLeft, TArray<enum class EMJFieldCommandType>& CommandList, class UObject* __WorldContext, bool* IsSuccess);
	void CloseFieldCommandJudge(class UObject* __WorldContext);
	void Open_Field_Command_Popup(class AKSCharacterBase* TargetCharacter, TArray<enum class EMJFieldCommandType>& CommandList, class UObject* __WorldContext, bool* IsOpen);
	void OpenGameOverUI(enum class EGAMEOVER_TYPE Type, class UObject* __WorldContext, class UGameoverWidgetBase** UIGameOver);
	void CloseStatusMenu(class UObject* __WorldContext);
	void Open_Status_Menu(class UObject* __WorldContext);
};

}


