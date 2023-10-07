#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B9 (0xBE9 - 0x830)
// BlueprintGeneratedClass EventManagerBP.EventManagerBP_C
class AEventManagerBP_C : public AEventManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x830(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x838(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UJsonFieldData*                        EventJson;                                         // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TempControlled;                                    // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitCameraPos;                                     // 0x850(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TalkPostStartAlpha;                                // 0x85C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TalkPostFinishAlpha;                               // 0x860(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TalkPostTimerNow;                                  // 0x864(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TalkPostTimerFinish;                               // 0x868(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTalkPostRequest;                                 // 0x86C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPostFaded;                                       // 0x86D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTalkPostDepthUpdate;                             // 0x86E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1199[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAddBalloonParam                      BalloonParam;                                      // 0x870(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsAddMain;                                         // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EADD_MEMBER_STATUS                AddMemberStatus;                                   // 0x911(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_119A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              PartyPanelRoot;                                    // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              PartyFooterRoot;                                   // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyCharacterListBase*               PartsPartyList;                                    // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           PartsMenuHeader;                                   // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SameSpeaker;                                       // 0x938(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_119B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      PrevSpeaker;                                       // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEndrollInit;                                     // 0x948(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMainSeqStop;                                     // 0x949(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_119C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASwitchIndoorTriggerBP_C*              SwitchIndoorTrigger;                               // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DialogSelectIndex;                                 // 0x958(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSetUpEventData;                                  // 0x95C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EADD_MEMBER_END_STATUS            AddMemberEndStatus;                                // 0x95D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_119D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DecideIndex;                                       // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CancelIndex;                                       // 0x964(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextSplitIndex;                                    // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextMainStoryTask;                                 // 0x96C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_119E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        TempLevelSequence;                                 // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInventorEventState               InventorParam;                                     // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_119F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventionData                        TargetInventionData;                               // 0x988(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          RequestInventionItemDetail;                        // 0x9B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EInventorLearnAbility             InventorAbilityParam;                              // 0x9C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPlayableCharacterID>      CharacterList;                                     // 0x9D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  InventorItemName;                                  // 0x9E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        InventorArg;                                       // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RequestInventionItemNum;                           // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEncountTriggerData                   RestoreEncountTrigger;                             // 0xA18(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          ZenithColor;                                       // 0xA70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CloudColor;                                        // 0xA80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SunBrightness;                                     // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyLightIntensity;                                 // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FogStartDistance;                                  // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeepThinking;                                      // 0xA9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EREMINISCENE_STATE                ReminiscenceState;                                 // 0xAA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkipStartCounter;                                  // 0xAA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMapChange;                                       // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EPARTY_SPLIT_CLOSE_REASON         KSPartySplitCloseReason;                           // 0xAA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SelectPartyIndexList;                              // 0xAB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectMemberIndex;                                 // 0xAC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                WPMIndex;                                          // 0xAC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_WeaponMasterEventFlowV2_C*         WPM_Flow;                                          // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetUpMaterialEnv;                                  // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUIPartnerSelectBase*                  PartnerSelectWidget;                               // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TheaterTimeZonePos;                                // 0xAF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EquippedReasonItemList;                            // 0xAF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         RequestEquipItemDialog;                            // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EKSCharacterMoveMode              BackupPlayerMoveMode;                              // 0xB09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReminiscenceRestorePlacement         BackupPlayerPlacement_PChat;                       // 0xB10(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ExistBackupPlayerPlacement_PChat;                  // 0xB78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReminiscenceRestorePlacement         BackupPlayerPlacement_Theater;                     // 0xB80(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ExistBackupPlayerPlacement_Theater;                // 0xBE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AEventManagerBP_C* GetDefaultObj();

	bool StartFullRecoveryAndPotentiality(struct FEventData& RefEventData);
	bool IsPlayReferenceSequencerDeepDirecting();
	void CheckOutputAtomData();
	bool MemberCountJump(float DeltaTime);
	void GetThiefLabel(class FName MissionLabel, class FName* ActionLabel);
	bool RestoreEventSkip();
	bool StartNotificationMessage(struct FEventData& RefEventData);
	bool StartRadarMap(struct FEventData& RefEventData);
	bool CreateDialogEpilogue(struct FEventData& RefEventData);
	bool UpdateGetJobDialog(float DeltaTime);
	bool StartGetJobDialog(struct FEventData& RefEventData);
	void CreateMessageText(class AKSFieldNPCCharacter_C* TargetCharacter, class FName LineLabel, class FName MessageLabel, class FText* Text);
	bool UpdateCharaMoveStart(float DeltaTime);
	bool StartCharaMoveStart(struct FEventData& RefEventData);
	bool UpdateSpawnCharacterThief(float DeltaTime);
	bool SpawnCharacterThief(struct FEventData& RefEventData);
	bool StartOpenEndCardEpilogueUI(struct FEventData& RefEventData);
	bool UpdateCharaFadeOut(float DeltaTime);
	bool UpdateCharaFadeIn(float DeltaTime);
	bool StartCharaFadeOut(struct FEventData& RefEventData);
	bool StartCharaFadeIn(struct FEventData& RefEventData);
	void ExecCameraMoving();
	bool RandomNumberJump(float DeltaTime);
	bool CreateRandomNumber(struct FEventData& RefEventData);
	bool StartCancelSwoon(struct FEventData& RefEventData);
	void Update_CameraMove(float DeltaTime);
	void ReferenceSequencerDeepDirectingAttachPlayer();
	bool UpdateWPMEventReflection(float DeltaTime);
	bool UpdateWPMEventEnd(float DeltaTime);
	bool UpdateWPMEventCheck(float DeltaTime);
	bool UpdateWPMEvent(float DeltaTime);
	bool StartWPMEventReflection(struct FEventData& RefEventData);
	bool StartWPMEventEnd(struct FEventData& RefEventData);
	bool StartWPMEventCheck(struct FEventData& RefEventData);
	bool StartWPMEvent(struct FEventData& RefEventData);
	bool UpdateSelectMemberDialog(float DeltaTime);
	bool StartSelectMemberJump(struct FEventData& RefEventData);
	bool StartSelectMemberDialog(struct FEventData& RefEventData);
	bool UpdateEventFadeOut(float DeltaTime);
	bool UpdateEventFadeIn(float DeltaTime);
	bool StartEventFadeOut(struct FEventData& RefEventData);
	bool StartEventFadeIn(struct FEventData& RefEventData);
	void GetAnimationLabelPartyPosition(int32 PartyPosition, class FName* AnimationLabel);
	bool SpawnCharacterPartyPosition(struct FEventData& RefEventData);
	void GetSpawnNPCAnimationLabel(enum class ESPAWN_CHARA_TYPE SpawnType, const class FString& SpawnLabel, bool* Found, class FName* AnimationLabel);
	bool SpawnCharacterPlacement(struct FEventData& RefEventData);
	bool SpawnCharacterNPC(struct FEventData& RefEventData);
	void GetLevelTrigger(enum class ELevelTriggerID* TriggerID);
	void CheckEventPlayBGM(class FName PlayBGMl, class ASoundManagerBP_C* SoundManagerBP, bool* ChangeBGM);
	void OnClosedKSPartySplit(enum class EPARTY_SPLIT_CLOSE_REASON Reason);
	bool StartSetSwoonEventObject(struct FEventData& RefEventData);
	bool StartSetSwoon(struct FEventData& RefEventData);
	bool StartRecoverSwoonEventChara(struct FEventData& RefEventData);
	bool StartSuccsessFCTypeLabelJump(struct FEventData& RefEventData);
	bool HaveMeatItemJump(float DeltaTime);
	bool StartOpenEndCardUI(struct FEventData& RefEventData);
	void SetEnableEventObject(int32 Flag, bool Value);
	void SetEventObjectEnableTheater(class FName EventName);
	void OnFinishAutoSave(const class FString& SlotName, int32 UserIndex, bool IsSuccesss);
	bool StartFinalBattleStart(struct FEventData& RefEventData);
	void ReferenceSequencerStartDeepDirecting();
	void ReferenceSequencerEndDeepDirecting();
	bool StartPreparationBattleStart(struct FEventData& RefEventData);
	bool StartSubTitleNextBlock(struct FEventData& RefEventData);
	bool StartSubTitle(struct FEventData& RefEventData);
	bool HaveItemJump(float DeltaTime);
	bool GetFinishEncountWipe();
	void SetTalkDataGeneral(class AKSCharacterBase* TalkTarget, class AKSCharacterBase* OwnerCharacter, const struct FEventData& Param, enum class EEventBalloonDir BalloonDir, bool* Ret);
	bool StartTalkGeneral(struct FEventData& RefEventData);
	int32 GetSwitchIndoorTriggerIndex(const class FString& TriggerName);
	void SetMaterialEnvParams();
	void GetMaterialEnvParams();
	bool StartGetTameMonster(struct FEventData& RefEventData);
	bool UpdateGetItemDialog(float DeltaTime);
	bool StartGetItemDialog(struct FEventData& RefEventData);
	void FindLegendSeaMonsterIndex(const class FString& Normal, const class FString& Awake, const class FString& AwakeAfter, int32* FindIndex);
	bool SetLegendMonsterAwakening(enum class EAWAKENING_MONSTER_PARAM EAwake);
	bool StartCameraRotation(struct FEventData& RefEventData);
	void LearnInventorSupportAbility(bool* IsLearned, class FName* AbilityLabel, int32* AbilityIndex);
	void UpdateInventorLearnAbilityFrow(enum class ESequenceResult* NewParam);
	void CheckInventorItemList(bool* EnoughItem, bool* EquipItem);
	bool StartShipPutUpSail(struct FEventData& RefEventData);
	void IsHaveInventItem(const struct FInventionMaterial& TargetMaterial, bool IsFind, int32 NewParam, bool* IsCheck);
	void UpdateInventorFrow(enum class ESequenceResult* ReturnParam);
	bool UpdateInventorLearnAbility(float DeltaTime);
	bool UpdateInventorEventDialog(float DeltaTime);
	bool StartInventorLearnAbility(struct FEventData& RefEventData);
	bool StartInventorEventDialog(struct FEventData& RefEventData);
	bool UpdateOpenPartySquadWidget(float DeltaTime);
	bool StartOpenPartySquadWidget(struct FEventData& RefEventData);
	bool StartWeaponMasterFrow(struct FEventData& RefEventData);
	void CheckDifferentTimeSequencer(class ULevelSequence* Sequencer, bool* Equal);
	void StartEventFade();
	bool StartTalkPartner(struct FEventData& RefEventData);
	bool PartnerCharacterJump(float DeltaTime);
	void SetTimeZoneTheater(class FName EventName, int32 OverrideTimeZone);
	bool StartTopCharaTypeLabelJump(struct FEventData& RefEventData);
	void CallbackTheaterPrologueEnd(enum class EREQUEST_RESULT Result);
	bool StartChangePartySet(struct FEventData& RefEventData);
	void FinishPartySplitUI(const struct FOnClosedPartySplitParam& Param);
	bool UpdateOpenPartySplitWidget(float DeltaTime);
	bool StartOpenPartySplitWidget(struct FEventData& RefEventData);
	bool UpdateFieldCommandDialog(float DeltaTime);
	bool UpdateSubStoryLabelJump(float DeltaTime);
	bool StartSubStoryLabelJump(struct FEventData& RefEventData);
	bool StartFinishTempPartySetting(struct FEventData& RefEventData);
	bool StartTempPartySetting(struct FEventData& RefEventData);
	bool UpdatePartnerSelectDialog(float DeltaTime);
	bool StartPartnerSelectDialog(struct FEventData& RefEventData);
	bool FollowCharacterJump(float DeltaTime);
	bool StartEndPlayReminiscene(struct FEventData& RefEventData);
	bool StartBeginPlayReminiscene(struct FEventData& RefEventData);
	void AddReminiscenceDialogFinishCallback(int32 SelectIndex);
	bool UpdateReminiscenceDialog(float DeltaTime);
	bool StartReminisceneDialog(struct FEventData& RefEventData);
	void SetResumeGamePlaySystem();
	bool SetPartnerNumber(struct FEventData& RefEventData);
	bool StartSequencerStop();
	bool StartHouseInSettingPlaySeq(struct FEventData& RefEventData);
	bool SetOpenCloseDoorFunction(struct FEventData& RefEventData);
	bool LoadSubSequencer(struct FEventData& InEventData);
	bool StartLeaveMember(struct FEventData& RefEventData);
	void AddMemberFinishCallback(int32 SelectIndex);
	void SubDeliMessageFinishCallback(int32 SelectIndex);
	void AddMemberDialogFinishCallback(int32 SelectIndex);
	void DialogFinishCallback(int32 SelectIndex);
	void SubDeliveryFinishCallback(int32 SelectIndex);
	void GetSwitchIndoorTrigger(const class FString& Name, class ASwitchIndoorTriggerBP_C** SwitchIndoorTrigger);
	bool StartPlaySE(struct FEventData& RefEventData);
	bool StartCameraLock(struct FEventData& RefEventData);
	bool SetPostProcessDeepThink(bool Enable, class AKSCharacterBase* RefTarget, float Time);
	bool StartUIPartyEdit(struct FEventData& RefEventData);
	bool UpdateEndroll(float DeltaTime);
	bool StartEndroll(struct FEventData& RefEventData);
	bool UpdateEndrollInit(float DeltaTime);
	bool StartEndrollInit(struct FEventData& RefEventData);
	void UpdateMainMissionProgress(bool* IsMainMission);
	bool StartNotificationCountShow(struct FEventData& RefEventData);
	bool PlayEventTheater(class FName& EventName);
	void NextPurposeMessage();
	bool UpdateUIStorySelect(float DeltaTime);
	bool StartUIStorySelect(struct FEventData& RefEventData);
	bool StartAutoSave(struct FEventData& RefEventData);
	bool SetEventCheckFlag(struct FEventData& RefEventData);
	bool StartUnlockFasttravel(struct FEventData& RefEventData);
	bool EventLoadLevel(class FName InLevelID, class FName EventSoundLabel, enum class EEventPlayBGM InEventPlayBGM, const class FString& PlayBGMLabel);
	bool StartUINote(struct FEventData& RefEventData);
	bool UpdateExPartyChange(float DeltaTime);
	bool StartEnableEventObject(struct FEventData& RefEventData);
	bool StartOKDialog(struct FEventData& RefEventData);
	bool StartFullRecovery(struct FEventData& RefEventData);
	bool StartChangeArea(struct FEventData& RefEventData);
	bool UpdateSubDelivMessageDialog(float DeltaTime);
	bool StartSubDelivMessageDialog(struct FEventData& RefEventData);
	bool UpdateAddMemberEnd(float DeltaTime);
	bool StartAddMemberEnd(struct FEventData& RefEventData, bool* AddMember);
	void ClosePartyWidget();
	void CheckPartyMember(enum class EPlayableCharacterID ChkID, bool* Find);
	bool StartUIShop(struct FEventData& RefEventData);
	bool StartEndReminiscene(struct FEventData& RefEventData);
	bool StartBeginReminiscene(struct FEventData& RefEventData);
	bool UpdateAddMemberDialog(float DeltaTime);
	bool StartAddMemberDialog(struct FEventData& RefEventData);
	bool StartRefreshEventObject();
	void RecoverCameraLock();
	bool RestoreTheater();
	bool StartOpenDoor(struct FEventData& RefEventData);
	bool FinishTheater();
	bool UpdateChallengeDialog(float DeltaTime);
	bool StartChallengeDialog(struct FEventData& RefEventData);
	bool StartTalkParty(struct FEventData& RefEventData);
	bool SetPChatCharacterDir(struct FEventData& RefEventData);
	bool StartTalkPChat(struct FEventData& RefEventData);
	bool SpawnPChatCharacter(struct FEventData& RefEventData);
	bool StartPChatMode(struct FEventData& RefEventData);
	bool FinishPre();
	bool StartChangePlayerResource(struct FEventData& RefEventData);
	bool StartUIBar(struct FEventData& RefEventData);
	bool StartFlashbackStart(struct FEventData& RefEventData);
	bool StartTalkPos(struct FEventData& RefEventData);
	bool PlayAfterFadeOut();
	bool SetCharacterPosition(struct FEventData& RefEventData);
	bool StartChangeMap(struct FEventData& RefEventData);
	bool StartMovePos(struct FEventData& RefEventData);
	bool DialogFinish(class FString* OutNextEventName);
	bool CreateDialog(struct FEventData& RefEventData);
	void GetEventCharacterBP(int32 Index, class AKSFieldCharacter_C** EventCharacter);
	void CommonBalloonOpenAnimEvent(class AKSCharacterBase* TargetCharacter);
	void BalloonNotFadeInEvent(enum class EBalloonEventType EventType, enum class EBalloonType BalloonType, class AKSCharacterBase* TargetType);
	bool CreateEventCharacter(enum class ESPAWN_CHARA_TYPE EType, struct FEventData& InEventData);
	bool StartRecoverSwoon(struct FEventData& RefEventData);
	void UpdateTalkPostFade(float DeltaTime);
	void RequestTalkPostFade(float StartAlpha, float FinishAlpha, float FadeTime, bool IsUpdateDepth);
	void BalloonEvent(enum class EBalloonEventType EventType, enum class EBalloonType BalloonType, class AKSCharacterBase* TargetCharacter);
	bool UpdateAddMember(float DeltaTime);
	void RemoveBalloonAll();
	bool StartAddMember(struct FEventData& RefEventData);
	bool StartDelFollow(struct FEventData& RefEventData);
	bool StartStopEmotionIconAll();
	bool RemoveEventEffect(int32 ID);
	bool StartPlayEmotionIcon(struct FEventData& RefEventData);
	bool SpawnEventEffect(int32 ID, class FName& Label, float LifeTime, struct FVector& Pos, int32 TargetCharacter);
	bool StartCharacterPhysics(struct FEventData& RefEventData);
	bool StartHouseInSetting(struct FEventData& RefEventData);
	bool FinishEvent();
	bool FinishEventSkip();
	bool BitFlagJump(float DeltaTime);
	void CreateDeliveryText(class AKSFieldNPCCharacter_C* TargetCharacter, class FName LineLabel, class FName MessageLabel, class FText* Text);
	bool UpdateSubDeliveryDialog(float DeltaTime);
	bool StartSubDeliveryDialog(struct FEventData& RefEventData);
	void ConvertEvent(bool* Success);
	void IsExecEvent(bool* Exec);
	bool StartJudgeMoney(struct FEventData& RefEventData);
	bool StartModifyMP(struct FEventData& RefEventData);
	bool StartModifyHP(struct FEventData& RefEventData);
	bool SpawnPlayerCharacter(struct FEventData& RefEventData);
	bool StartObjectSpawn(struct FEventData& RefEventData);
	bool StartChangeItem(struct FEventData& RefEventData);
	bool StartChangeMoeny(struct FEventData& RefEventData);
	bool StartChangeTitle(struct FEventData& RefEventData);
	bool StartNarration(struct FEventData& RefEventData);
	bool UpdateBattleStart(float DeltaTime);
	bool StartBattleStart(struct FEventData& RefEventData);
	void EventSetup();
	bool StartCameraSpawn(struct FEventData& RefEventData);
	void SetTalkData(class AKSCharacterBase* TalkTarget, const struct FEventData& Param, enum class EEventBalloonDir BalloonDir, bool* Ret);
	bool StartCameraTarget(struct FEventData& RefEventData);
	bool UpdateMove(float DeltaTime);
	bool StartMove(struct FEventData& RefEventData);
	bool SpawnCharacter(struct FEventData& RefEventData);
	bool StartTalk(struct FEventData& RefEventData);
	bool PlayEvent(const class FString& EventName, class AKSCharacterBase* TargetCharacter);
	bool UpdateTalk(float DeltaTime);
	void Update_EventSkipFadeOut(float DeltaTime);
	void Update_EventSkipFadeIn(float DeltaTime);
	void Update_StartFadeOut(float DetalTime);
	void ReceiveTick(float DeltaSeconds);
	void Activate();
	void RemoveEventEffectAll();
	void SetEventSkipInput(bool IsSkipInput);
	void RemoveEmotionIcon(int32 Index);
	void OnBeginPlay();
	void EventSkipUIReset();
	void ActivateTheater();
	void SetTheaterTimeZonePos();
	void FinishEventSkipCallback_CharaReActive(enum class EREQUEST_RESULT Result);
	void FinishEventCallback_CharaReActive(enum class EREQUEST_RESULT Result);
	void CharaReActive();
	void ExecuteUbergraph_EventManagerBP(int32 EntryPoint);
};

}


