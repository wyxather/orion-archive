#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Majesty.DataTableUtilityBase
class UDataTableUtilityBase : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDataTableUtilityBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.AbilityDataTableUtility
class UAbilityDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UAbilityDataTableUtility* GetDefaultObj();

	bool IsDivineAbilitySet(class FName TargetLabel, bool LogEnable);
	bool GetAbilitySetRowData(struct FAbilitySetDataBase* OutData, class FName TargetLabel, bool LogEnable);
	bool GetAbilityRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetAbilityRowData(enum class EBPFuncReturnCode* ReturnCode, struct FAbilityDataBase* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x60 (0x2C0 - 0x260)
// Class Majesty.AcqUserWidget
class UAcqUserWidget : public UUserWidget
{
public:
	class UWidgetAnimation*                      ResetToDefaultAnim;                                // 0x260(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EWidgetAnimationGroup, struct FWidgetAnimationGroupData> WidgetAnimationGroup;                              // 0x268(0x50)(Protected, NativeAccessSpecifierProtected)
	bool                                         StopTickWhenWidgetPaused;                          // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_695[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAcqUserWidget* GetDefaultObj();

	void StopAnimsImmediately(TArray<class UWidgetAnimation*>& Anims);
	void StopAnimImmediately(class UWidgetAnimation* Anim);
	void StopAllAnimImmediatelyByGroup(enum class EWidgetAnimationGroup Group);
	void StopAllAnimImmediately();
	void ResetAppearance();
	void GroupingAnimations();
	float GetNormalizedElapsedTime(class UWidgetAnimation* Anim);
	bool GetAllAnimations(TArray<class UWidgetAnimation*>* OutAllAnims);
	void EvaluateAnimationSpecificFrame(class UWidgetAnimation* Anim, int32 Frame, bool IsStopAllAnimBeforeEval);
	void EvaluateAnimationLastFrame(class UWidgetAnimation* Anim, bool IsStopAllAnimBeforeEval);
	void AddNonGroupingAnimationsToDefaultGroup();
	void AddAnimationsToGroup(enum class EWidgetAnimationGroup Group, const TArray<class UWidgetAnimation*>& Anims);
	class UUMGSequencePlayer* AcqPlayAnimationDefault(class UWidgetAnimation* Anim, float StartAtTime, bool IsStopAllAnimBeforePlay, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
	class UUMGSequencePlayer* AcqPlayAnimationAtTime(class UWidgetAnimation* Anim, float StartAtTime, bool IsStopAllAnimBeforePlay);
	class UUMGSequencePlayer* AcqPlayAnimation(class UWidgetAnimation* Anim, bool IsStopAllAnimBeforePlay, bool IsFast);
};

// 0x98 (0x358 - 0x2C0)
// Class Majesty.KSUserWidgetBase
class UKSUserWidgetBase : public UAcqUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnOpenCallback;                                    // 0x2C0(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpenFinishCallback;                              // 0x2D0(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCloseCallback;                                   // 0x2E0(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCloseFinishCallback;                             // 0x2F0(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnCloseFinishCallbackBP;                           // 0x300(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        M_TemporaryHideUser;                               // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      OpenAnim;                                          // 0x318(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      CloseAnim;                                         // 0x320(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UWidgetAnimation*>              AnimationList;                                     // 0x328(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_6D7[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSUserWidgetBase* GetDefaultObj();

	void UpdateOpening();
	void UpdateMain();
	void UpdateClosing();
	void UIOpen();
	void UIClose();
	void TurnOffTemporaryHiddenFlag(enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	void TickUpdateState(float FDeltaTime);
	bool SetReference();
	void SetManualAnimationUpdate(bool bManual);
	void ResetInputAllowed();
	void ResetFromTitle();
	void ResetForceUIClose();
	void RefreshLanguage(enum class EKSLanguage NewLanguage);
	void OnResetHiddenFlag();
	void OnOpenFinish();
	void OnCloseFinish();
	void NoticeCreatedWidget(enum class EWIDGET_CREATE_PHASE CreatePhase);
	void ManualAnimationUpdate(struct FGeometry& MyGeometry, float InDeltaTime);
	bool IsWait();
	bool IsUpdate();
	bool IsTemporaryHidden();
	bool IsRunning();
	bool IsForceClosing();
	bool IsChangeStateOpenFinish();
	bool IsChangeStateCloseFinish();
	bool Init();
	void HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	void HideTemporary(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	bool GetPlayingAnimation(class UWidgetAnimation** Animation);
	bool GetManualAnimationUpdate();
	float GetDeltaTime();
	void ForceUIClose();
	class UUserWidget* FindWidget(class FName& WidgetName);
	class FString Debug_GetStateInfoAsString();
	void Debug_DecideUI(int32 Param);
	bool CheckInputAllowed();
};

// 0x10 (0x368 - 0x358)
// Class Majesty.AbilityForgetWidgetBase
class UAbilityForgetWidgetBase : public UKSUserWidgetBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectForgetAbility;                             // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityForgetWidgetBase* GetDefaultObj();

	bool SetAbilityList(TArray<int32>& AbilityList);
	bool OpenList();
	bool OpenConfirmList();
	bool CloseList();
	void CallOnSelectForgetAbility(int32 SelectCursorPosition, bool IsDecide);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.AchievementDataTableUtility
class UAchievementDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UAchievementDataTableUtility* GetDefaultObj();

	void NotifyAchievementDb(class FName DbName, enum class EDBNoticeType Notice);
	TArray<class FName> GetAchievementAllLabels();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.AchievementDebugUtility
class UAchievementDebugUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAchievementDebugUtility* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Majesty.AcqManagerBase
class AAcqManagerBase : public AActor
{
public:
	uint8                                        Pad_71F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAcqManagerBase* GetDefaultObj();

	void UpdateManager(float DeltaSeconds);
	void StartManager();
	bool ResetManagerFromTitle();
	bool ResetManager();
	bool PrepareManager();
	void PostInitManager();
	void OnBeginPlay();
	bool IsAvailable();
	bool DestroyManager();
};

// 0x8 (0x238 - 0x230)
// Class Majesty.AchievementManager
class AAchievementManager : public AAcqManagerBase
{
public:
	class UServiceConnecter*                     M_Service;                                         // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AAchievementManager* GetDefaultObj();

	void OnWorldMapOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnUnLockAchievement();
	void OnTitleScene(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnSwoonNpcByFc(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnSubStoryRecordOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnSubStoryClear(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnStoryRecordReOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnStoryRecordOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnStartFieldMainSequenceAfterExBoss(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnRefreshFollowCharacter(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnPartyMemberChangeMenuOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnOpenEndCardEpilogue(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnOpenEndCard(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnMusicRecordOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnMainStoryTaskClear(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnMainStoryClear(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnJoinedCharacter(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnJobMenuOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnItemMenuOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnInformationFieldCommandOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnGetItem(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnFinishFieldCommand(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnEquipMenuOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnCreatedPlayerController(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnChangeVisitedLevel(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnBreak(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnBoostAttack(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnBeginLinerShip(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnAttack(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnAcquisitionAdvancedAbility(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnAcquisitionAbility(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnAbilityMenuOpen(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	class AAchievementManager* GetInstance();
	enum class EAchievementStatus GetAchievementStatus(class FName AchiveLabel);
	void DelayOnEpilogueEndCardUnlockAchievement(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void DelayOnEndCardUnlockAchievement(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void Debug_ShowDebugInfo(bool bEnable);
	void Debug_SetFieldCommandSuccessCount(enum class EMJFieldCommandType FCType, int32 Count);
	bool Debug_ResetAllAchievement();
	bool Debug_ForceUnlockAchievement(class FName AchieveLabel);
	bool Debug_ForceLockAchievement(class FName AchieveLabel);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SaveDataUtilBase
class USaveDataUtilBase : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USaveDataUtilBase* GetDefaultObj();

	class UMJSaveData* GetSaveData();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.AchievementSaveDataUtil
class UAchievementSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UAchievementSaveDataUtil* GetDefaultObj();

	int32 GetSwoonNpcUniqueCount();
	int32 GetMaxAttackDamage();
	int32 GetLinerShipCount();
	int32 GetFieldCommandSuccessCount(enum class EMJFieldCommandType FCType);
	int32 GetDivineAbilityCount();
	int32 GetBreakAttackCount();
	int32 GetBoostAttackCount(enum class EBOOST_LEVEL BoostLevel);
	int32 GetAdvancedAbilityCount();
	int32 GetAbilityCount();
	void Debug_SetSwoonNpcUniqueCount(int32 NewCount);
	void Debug_SetMaxAttackDamage(int32 NewCount);
	void Debug_SetLinerShipCount(int32 NewCount);
	void Debug_SetFieldCommandSuccessCount(enum class EMJFieldCommandType FCType, int32 Count);
	void Debug_SetDivineAbilityCount(int32 NewCount);
	void Debug_SetBreakAttackCount(int32 NewCount);
	void Debug_SetBoostAttackCount(enum class EBOOST_LEVEL BoostLevel, int32 NewCount);
	void Debug_SetAdvancedAbilityCount(int32 NewCount);
	void Debug_SetAbilityCount(int32 NewCount);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.AchievementTypeDataTableUtility
class UAchievementTypeDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UAchievementTypeDataTableUtility* GetDefaultObj();

	void NotifyAchievementTypeDb(class FName DbName, enum class EDBNoticeType Notice);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.AchievementUtility
class UAchievementUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAchievementUtility* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.AcqGameplayStatics
class UAcqGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAcqGameplayStatics* GetDefaultObj();

};

// 0x90 (0x2A0 - 0x210)
// Class Majesty.AcqImage
class UAcqImage : public UImage
{
public:
	enum class EAcqImageResourceType             ResourceType;                                      // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         SetResourceFromOnRebuilt;                          // 0x211(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_81B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Acq_TextureForPreview;                             // 0x218(0x28)(Edit, BlueprintVisible, EditConst, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  Acq_TextureLabelForRuntime_AutoFill;               // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  Acq_TextureLabelForRuntime;                        // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FMateriaTextureLabel> Acq_MaterialTextureParams;                         // 0x250(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAcqImage* GetDefaultObj();

	void ResetBrushResource();
};

// 0x0 (0x858 - 0x858)
// Class Majesty.AcqListView
class UAcqListView : public UListView
{
public:

	static class UClass* StaticClass();
	static class UAcqListView* GetDefaultObj();

	void SetNumDesignerPreviewEntries(int32 Num);
	void SetEntryWidgetClass(TSubclassOf<class UAcqUserWidget> NewEntryWidgetClass);
	class UUserWidget* GetSelectItemWidget(class UObject* Item);
};

// 0x10 (0x38 - 0x28)
// Class Majesty.AcqListViewEntryItemBase
class UAcqListViewEntryItemBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnChangedEntryItem;                                // 0x28(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAcqListViewEntryItemBase* GetDefaultObj();

};

// 0x48 (0x308 - 0x2C0)
// Class Majesty.AcqListViewWidget
class UAcqListViewWidget : public UAcqUserWidget
{
public:
	FMulticastInlineDelegateProperty_            DecideEventDelegate;                               // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CancelEventDelegate;                               // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UAcqListView*                          M_ListView;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_CurrentCursorIndex;                              // 0x2E8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             M_CurrentDisplayItemRange;                         // 0x2EC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_866[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAcqUserWidget>            M_EntryWidgetClass;                                // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_ItemDisplayNum;                                  // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_867[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAcqListViewWidget* GetDefaultObj();

	void Setup(TArray<class UAcqListViewEntryItemBase*>& EntryItems);
	void SetSelectedIndex(int32 Index);
	void SetScrollOffset(float ScrollOffset);
	void SetEntryItems(TArray<class UAcqListViewEntryItemBase*>& EntryItems);
	int32 GetSelectedIndex();
	float GetScrollOffset();
	class UAcqListView* GetListView();
	TArray<class UAcqListViewEntryItemBase*> GetEntryItems();
	int32 GetEntryItemNum();
	void DecideEvent__DelegateSignature(const struct FAcqListViewWidgetEventPayload& Payload);
	void ClearEntryItems();
	void CancelEvent__DelegateSignature();
	float AddScrollOffset(float Delta);
};

// 0x2F0 (0x510 - 0x220)
// Class Majesty.AcqManagerFactory
class AAcqManagerFactory : public AActor
{
public:
	uint8                                        Pad_889[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            M_ManagerList;                                     // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_88A[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UClass*>             M_NameToClass;                                     // 0x2E0(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, class UClass*>             M_NameToBaseClass;                                 // 0x330(0x50)(NativeAccessSpecifierPrivate)
	TMap<class UClass*, class FName>             M_BaseClassToName;                                 // 0x380(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, TWeakObjectPtr<class AAcqManagerBase>> M_apManagerTable;                                  // 0x3D0(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_88B[0xF0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAcqManagerFactory* GetDefaultObj();

	void StartManagers(enum class EMANAGER_CREATE_PHASE CreatePhase);
	void SetInitAfterSpawn(class FName ManagerName, FDelegateProperty_& InitAfterSpawn);
	void ResetTables();
	void ResetManagersFromTitle();
	void ResetManagersAll();
	void ResetManagers(enum class EMANAGER_CREATE_PHASE CreatePhase);
	void PostInitManagers(enum class EMANAGER_CREATE_PHASE CreatePhase);
	void OnLoadedClassObject(TArray<class UObject*>& ObjList);
	bool IsExist(class FName ManagerName);
	bool IsAvailableByCategory(enum class EMANAGER_CREATE_PHASE CreatePhase);
	void Initialize(TSoftObjectPtr<class UDataTable> ManagerTable);
	class AAcqManagerBase* GetManagerInstance(class UClass* ManagerClass);
	class AAcqManagerBase* GetManager(class FName ManagerName);
	class AAcqManagerFactory* GetInstance();
	void DestroyManagers(enum class EMANAGER_CREATE_PHASE CreatePhase);
	void DestroyManager(class FName ManagerName);
	void Debug_ShowManagerInfo(bool bShow);
	void Debug_GetManagerInfo(class FString& OutDebugInfo);
	bool CreateManagersSequentially(enum class EMANAGER_CREATE_PHASE CreatePhase);
	void CreateManagers(enum class EMANAGER_CREATE_PHASE CreatePhase);
	bool CreateManagerClassesSequentially(enum class EMANAGER_CREATE_PHASE CreatePhase);
};

// 0xD8 (0x2F8 - 0x220)
// Class Majesty.ActionCommandBase
class AActionCommandBase : public AActor
{
public:
	class FName                                  M_strActionLabel;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABattleCharacterBase*                  M_cEnforcer;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ABattleCharacterBase*>          M_acSubEnforcerList;                               // 0x230(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ABattleCharacterBase*>          M_acTarget;                                        // 0x240(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ABattleCharacterBase*>          M_acSubTargetList;                                 // 0x250(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        M_nOptionIndex;                                    // 0x260(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_strOptionData;                                   // 0x264(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          M_astrOptionDataList;                              // 0x270(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         M_bEnableRandomTarget;                             // 0x280(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bEnableSkillALL;                                 // 0x281(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bEnableDamageUpWithFullHP;                       // 0x282(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bSettledPlayOnce_OnRecovered;                    // 0x283(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bAblityHit;                                      // 0x284(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bAttackHitFailed;                                // 0x285(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsLastHit;                                      // 0x286(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bEnableRandomCover;                              // 0x287(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bExecRandomCover;                                // 0x288(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  M_cRandomCoverEnforcer;                            // 0x290(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bExecutedCounterTrap;                            // 0x298(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsForceWeakness;                                // 0x299(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nAdditiveBreakDamage;                            // 0x29C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActionCommandBase*                    M_cSummonOwnerAbility;                             // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsSummonAbility;                                // 0x2A8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsSummonLastHit;                                // 0x2A9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsSettledAutoTameMonster;                       // 0x2AA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A23[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequencePlayer*                  M_cActionCommandSequencePlayer;                    // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABattleAbilitySequenceActor*           M_cActionCommandSequenceActor;                     // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        M_cCommandSequence;                                // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bEnableCommandSequence;                          // 0x2C8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bReadyCommandSequence;                           // 0x2C9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nTotalSlideFrame;                                // 0x2CC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bExecCommandSequence;                            // 0x2D0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsInfomation;                                   // 0x2D1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsOnHitSE;                                      // 0x2D2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A25[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_strOnHitSEID;                                    // 0x2D4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsSessionSupport;                               // 0x2DC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsBusinessSupport;                              // 0x2DD(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  M_strBusinessSupportInfo;                          // 0x2E0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AActionCommandBase* GetDefaultObj();

	bool WeaponChangeCommand(enum class EWEAPON_CATEGORY WeaponType);
	bool WaitSummonAbilityCommand();
	void WaitSummonAbility();
	bool WaitSessionSupporterCommand();
	bool WaitSessionAbilityCommand();
	void WaitLoadCommandSequence();
	bool WaitEnemyActionCommand();
	void WaitCaptureMainPartyCommand();
	void WaitCallSubPartyCommand();
	bool WaitBusinessSupporterCommand();
	void SuspendActionCommand();
	void StartCommandSequence();
	bool ShowInfomationCommand(class FName TextID);
	bool ShowBusinessSupportInfomationCommand();
	bool SetupRandomAbilityEffect();
	void SetTargetList(TArray<class ABattleCharacterBase*>& AcTargetList);
	bool SetSummonAbility(bool bEnable, bool bLastHit, class FName StrActionLabel, class AActionCommandBase* COwnerAbility);
	void SetSubTargetList(TArray<class ABattleCharacterBase*>& AcSubTargetList);
	void SetSubEnforcerList(TArray<class ABattleCharacterBase*>& AcSubEnforcerList);
	void SetSettledPlayOnce_OnRecovered(bool bEnable);
	void SetSettledAutoTameMonster(bool bExec);
	void SetOptionDataList(TArray<class FName>& AstrOptionDataList, class FName StrActionLabel, int32 NOptionIndex, bool bUseGrowMagicBuff);
	void SetOptionData(class FName StrOptionData, int32 NOptionIndex);
	void SetExecutedCounterTrap(bool bExec);
	void SetEnforcer(class ABattleCharacterBase* CEnforcer);
	void SetBusinessSupportInfomationText(class FText& StrInfoText);
	void SetAttackHitFailed(bool bFailed);
	void SetAdditiveBreakDamage(int32 NBreakDamage);
	void SetActionCommandSequenceActor(class ABattleAbilitySequenceActor* CSequenceActor);
	bool ReturnSummonCharacterCommand();
	bool ReturnSessionSupporterCommand();
	bool ReturnBusinessSupporterCommand();
	void ResumeActionCommandSequencer();
	void RequestLoadCommandSequence(TSoftObjectPtr<class ULevelSequence>& CCommandSequence);
	bool RegisterOnHitSECommand(class FName SEID);
	bool PlayWeaponAttackCommand(class ABattleCharacterBase* ActionCharacter);
	bool PlayVoiceCommand(enum class EBATTLE_VOICE_TYPE VoiceID, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceID);
	bool PlayVibrationCommand(class FName VibrationID, enum class EVibrationPower Power);
	bool PlaySessionActionCommand(enum class EKSCharacterAction BattleActionID);
	bool PlaySECommand(class FName SEID);
	bool PlayBusinessSupportActionCommand(enum class EKSCharacterAction BattleActionID);
	bool PlayActionForSelfOnlyCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleSelfActionID, enum class EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer);
	bool PlayActionCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool bExceptEnforcer);
	bool PlayAbilitySECommand(int32 Index);
	void PauseActionCommandSequencer();
	bool OnAttackDamageSP(class ABattleCharacterBase* CEnforcer);
	bool OnAttackDamageHP(class ABattleCharacterBase* CEnforcer);
	void IsUseItemCommand(bool* bIsUseItemCommand, bool* bIsMeatItem);
	bool IsSettledAutoTameMonster();
	bool IsSessionSupportCommand();
	bool IsPlayOnHitDamageVoice();
	void IsMusicalCommand(bool* bIsSong, bool* bIsDance);
	bool IsForceWeakness();
	bool IsBusinessSupportCommand();
	bool HideInfomationCommand();
	TArray<class ABattleCharacterBase*> GetTargetList();
	TArray<class ABattleCharacterBase*> GetSubTargetList();
	TArray<class ABattleCharacterBase*> GetSubEnforcerList();
	bool GetSettledPlayOnce_OnRecovered();
	void GetInvadeMonsterSize(enum class ECHARACTER_SIZE* OutCharacterSize);
	bool GetExecutedCounterTrap();
	class ABattleCharacterBase* GetEnforcer();
	void GetCriticalPower(bool bCritical, float* OutRatio);
	bool GetAttackHitFailed();
	class FName GetActionLabel();
	class FName GetAbilityEffect(int32 NIndex);
	void FinishCommandSequence();
	bool ExecSummonCharacterCommand(int32 NSummonIndex, bool bRandom);
	bool ExecSummonAbilityCommand(int32 NSummonIndex);
	bool ExecStepCounter();
	bool ExecStartCharacterWarpCommand(const struct FVector& CCommandOffset);
	bool ExecSpecialAilmentCommand();
	bool ExecSessionAbilityCommand();
	bool ExecPlayDiseaseMissUI();
	bool ExecEndCharacterWarpCommand();
	void ExecCaptureMainPartyCommand();
	void ExecCallSubPartyCommand();
	bool ExecAilmentCommand(int32 Index, bool AllAilment, bool LastHit);
	float ConvertFrameToSecondByFrameRate(int32 NFrameNumber, const struct FFrameRate& CFrameRate);
	bool CheckStealMoney(class ABattleCharacterBase* CStealTarget, int32 NStealRateMin);
	bool CheckStealItem(class ABattleCharacterBase* CStealTarget, int32 NStealRateMin);
	enum class EBATTLE_SEQUENCE_PATTERN_TYPE CheckSequencePattern();
	bool CheckLastHit(class ABattleCharacterBase* CTarget);
	bool CheckEnableExcitementBuff();
	bool CheckEnableAutoTameMonster();
	bool CheckBoostLevelLess(int32 NBorderLevel, bool bContainEqual);
	bool CheckBoostLevelGreater(int32 NBorderLevel, bool bContainEqual);
	bool CheckAttackCounter();
	bool CheckAbilityHit();
	bool CallSessionSupporterCommand();
	bool CallBusinessSupporterCommand();
	void CalcBreakDamage(enum class EATTRIBUTE_RESIST EAttributeWeak, enum class EATTRIBUTE_RESIST EWeaponWeak, int32* OutBreakDamage);
};

// 0x8 (0x40 - 0x38)
// Class Majesty.ActionCommandDirector
class UActionCommandDirector : public ULevelSequenceDirector
{
public:
	uint8                                        Pad_BA0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActionCommandDirector* GetDefaultObj();

	void WeaponChange_Implementation(enum class EWEAPON_CATEGORY WeaponType);
	void WaitSummonAbility_Implementation();
	void WaitSessionSupporter_Implementation();
	void WaitSessionAbility_Implementation();
	void WaitEnemyAction_Implementation();
	void WaitCaptureMainParty_Implementation();
	void WaitCallSubParty_Implementation();
	void WaitBusinessSupporter_Implementation();
	void ShowInfomation_Implementation(class FName TextID);
	void ShowBusinessSupportInfomation_Implementation();
	void SetMaterialParameter_Vector_Implementation(class AEmitter* Emitter, class FName ParameterName, const struct FVector& Value);
	void SetMaterialParameter_Float_Implementation(class AEmitter* Emitter, class FName ParameterName, float Value);
	void SetActionCommand(class AActionCommandBase* CActionCommand);
	void ReturnSummonCharacter_Implementation();
	void ReturnSessionSupporter_Implementation();
	void ReturnBusinessSupporter_Implementation();
	void RegisterOnHitSE_Implementation(class FName SEID);
	void RandomJumpToMarker_Implementation(float Rate, const class FString& Marker);
	void RandomJumpToFrame_Implementation(float Rate, int32 Frame);
	void PlayWeaponAttack_Implementation(class ABattleCharacterBase* ActionCharacter);
	void PlayVoiceWithAbilityHit_Implementation(enum class EBATTLE_VOICE_TYPE VoiceType, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceType, bool OnHit);
	void PlayVoice_Implementation(enum class EBATTLE_VOICE_TYPE VoiceType, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceType);
	void PlayVibration_Implementation(class FName VibrationID, enum class EVibrationPower Power);
	void PlaySEWithAbilityHit_Implementation(class FName SEID, bool OnHit);
	void PlaySessionAction_Implementation(enum class EKSCharacterAction BattleActionID);
	void PlaySE_Implementation(class FName SEID);
	void PlayBusinessSupportAction_Implementation(enum class EKSCharacterAction BattleActionID);
	void PlayActionWithAbilityHit_Implementation(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool OnHit);
	void PlayActionForSelfOnly_Implementation(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleSelfActionID, enum class EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer);
	void PlayAction_Implementation(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool bExceptEnforcer);
	void PlayAbilitySEWithAbilityHit_Implementation(int32 Index, bool OnHit);
	void PlayAbilitySE_Implementation(int32 Index);
	void JumpToMarker_Implementation(const class FString& StrMarker);
	void JumpToFrame_Implementation(int32 Frame);
	void HideInfomation_Implementation();
	void ExecSummonCharacter_Implementation(int32 SummonIndex, bool Random);
	void ExecSummonAbility_Implementation(int32 SummonIndex);
	void ExecStepCounter_Implementation();
	void ExecStartCharacterWarp_Implementation(const struct FVector& CCommandOffset);
	void ExecSpecialAilment_Implementation();
	void ExecSessionAbility_Implementation();
	void ExecPlayDiseaseMissUI_Implementation();
	void ExecEndCharacterWarp_Implementation();
	void ExecCaptureMainParty_Implementation();
	void ExecCallSubParty_Implementation();
	void ExecAilmentWithAbilityHit_Implementation(int32 Index, bool AllAilment, bool LastHit, bool OnHit);
	void ExecAilment_Implementation(int32 Index, bool AllAilment, bool LastHit);
	void CheckPattern3JumpToMarker_Implementation(const class FString& PatternB, const class FString& PatternC);
	void CheckPattern3JumpToFrame_Implementation(int32 PatternB, int32 PatternC);
	void CheckPattern2JumpToMarker_Implementation(const class FString& PatternB);
	void CheckPattern2JumpToFrame_Implementation(int32 PatternB);
	void CheckMultiPatternJumpToMarker_Implementation(const TArray<class FString>& MarkerList);
	void CheckMultiPatternJumpToFrame_Implementation(const TArray<int32>& FrameList);
	bool CheckGPUEmitter(class UParticleSystem* CTarget, int32 NIndex);
	void CheckCounterJumpToMarker_Implementation(const class FString& Marker);
	void CheckCounterJumpToFrame_Implementation(int32 Frame);
	void CheckBoostLevelLessJumpToMarker_Implementation(int32 BorderLevel, bool ContainEqual, const class FString& Marker);
	void CheckBoostLevelLessJumpToFrame_Implementation(int32 BorderLevel, bool ContainEqual, int32 Frame);
	void CheckBoostLevelGreaterJumpToMarker_Implementation(int32 BoostLevel, bool ContainEqual, const class FString& Marker);
	void CheckBoostLevelGreaterJumpToFrame_Implementation(int32 BoostLevel, bool ContainEqual, int32 Frame);
	void CheckAbilityHitJumpToMarker_Implementation(bool OnHit, const class FString& Marker);
	void CheckAbilityHitJumpToFrame_Implementation(bool OnHit, int32 Frame);
	void CallSessionSupporter_Implementation();
	void CallBusinessSupporter_Implementation();
};

// 0x8 (0xB8 - 0xB0)
// Class Majesty.ActionOrderComponent
class UActionOrderComponent : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UActionOrderComponent* GetDefaultObj();

};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.ActionOrderIcon
class UActionOrderIcon : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UActionOrderIcon* GetDefaultObj();

	bool ResetParam();
	bool ImmediateHidden();
	bool ImmediateDettach();
	bool End();
	bool DettachSubIcon();
	bool AttachSubIcon();
};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.ActionOrderTimeLineBase
class UActionOrderTimeLineBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UActionOrderTimeLineBase* GetDefaultObj();

};

// 0x0 (0x358 - 0x358)
// Class Majesty.ActionPopupWidgetBase
class UActionPopupWidgetBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UActionPopupWidgetBase* GetDefaultObj();

	bool TemporaryClose();
	bool ReOpen();
	bool Open(class AActor* TargetActor, class FName ActionTextLabel);
	bool Close();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ActivityDataUtility
class UActivityDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UActivityDataUtility* GetDefaultObj();

	void RequestResetAllActiveActivities();
	void RequestRefreshActivity();
	void RequestNewGame();
	void NotifyActivityDB(class FName DbName, enum class EDBNoticeType Notice);
	bool IsNotClearedAnyActivityTask();
	bool IsAllActivityTaskCleared();
	TArray<class FName> GetAllMainStoryLabelRelatedActivity();
	void Debug_SetActivityAvailability(const class FString& ActivityId, bool bEnabled);
	void Debug_ResumeActivity(const class FString& ActivityId);
	void Debug_ResetAllMainStory();
	void Debug_OutputAllMainStory();
	void Debug_ClearAllMainStory();
};

// 0x8 (0x238 - 0x230)
// Class Majesty.ActivityManager
class AActivityManager : public AAcqManagerBase
{
public:
	class UKSSaveSystem*                         M_CacheSaveDataForMerge;                           // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AActivityManager* GetDefaultObj();

	void SetSystemSaveDataForMerge(class UKSSaveSystem* SaveDataOther);
	void MergeActivitySaveDataOnPostLoadSlot();
	void MergeActivitySaveData(class UKSSaveSystem* SaveDataOther);
	void ClearSystemSaveDataForMerge();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ActorUtil
class UActorUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UActorUtil* GetDefaultObj();

	void ChangeOutLinerName(class AActor* Actor, const class FString& NewName);
};

// 0x10 (0xC0 - 0xB0)
// Class Majesty.AISACControlComponent
class UAISACControlComponent : public UActorComponent
{
public:
	TArray<struct FAISACCtrlParam>               M_acAISACData;                                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAISACControlComponent* GetDefaultObj();

	void SetupAISAC();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.AreaInfoTableUtility
class UAreaInfoTableUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAreaInfoTableUtility* GetDefaultObj();

	void GetAreaInfoTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetAreaInfoData(struct FAreaInfoData* OutData, class FName TargetLabel);
};

// 0x8 (0x268 - 0x260)
// Class Majesty.ArrowButtonBase
class UArrowButtonBase : public UUserWidget
{
public:
	bool                                         M_bUseGameText;                                    // 0x260(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UArrowButtonBase* GetDefaultObj();

	void SetUseGameText(bool UseGameText);
	void SetTextList(TArray<class FName>& TextList);
};

// 0xE0 (0x3A0 - 0x2C0)
// Class Majesty.BalloonBase
class UBalloonBase : public UAcqUserWidget
{
public:
	enum class EBalloonType                      BalloonType;                                       // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EndFlag;                                           // 0x2C1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         DrawTextEnd;                                       // 0x2C2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsReady;                                        // 0x2C3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bPause;                                          // 0x2C4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAddBalloonParam                      BalloonParam;                                      // 0x2C8(0xA0)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int32                                        BalloonIndex;                                      // 0x368(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             FontSize;                                          // 0x36C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MinWH;                                             // 0x374(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             TextBoxSize;                                       // 0x37C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FinishBalloonEvent;                                // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBalloonBase* GetDefaultObj();

	bool UnPausedBalloon();
	void SetTextAnimationWait(enum class EKSLanguage NewLanguage);
	bool PauseBalloon();
	bool IsReady();
	bool IsPauseBalloon();
	bool IsEnd();
	bool IsDrawTextEnd();
	bool Init(struct FAddBalloonParam& InParam, bool bAutoTalk);
	enum class EBalloonType GetType();
	bool GetPlayedVoice();
	struct FAddBalloonParam GetBalloonParam();
	bool GetAutoBalloon();
	bool CloseBalloon();
	bool CallNext(bool AutoNext);
	bool CallBalloonEvent(enum class EBalloonEventType EventType);
};

// 0x80 (0x3D8 - 0x358)
// Class Majesty.BalloonBundleWidgetBase
class UBalloonBundleWidgetBase : public UKSUserWidgetBase
{
public:
	TArray<class UBalloonBase*>                  RefBalloons;                                       // 0x358(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UBalloonBase*>                  RefAutoBalloons;                                   // 0x368(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UBalloonBase*>                  UnUseBalloons;                                     // 0x378(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UBalloonBase*>                  UnUseAutoBalloons;                                 // 0x388(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UBalloonBase*>                  UseBalloons;                                       // 0x398(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UBalloonBase*>                  UseAutoTalkBalloons;                               // 0x3A8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UBalloonBase*                          RefDeepThink;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBalloonBase*                          RefDeepThinkFixedText;                             // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBalloonBase*                          M_cBalloonActive;                                  // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C20[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBalloonBundleWidgetBase* GetDefaultObj();

	bool UnPausedAutoTalkBalloonAll();
	void SetAutoTimer(float FTimer);
	void RestoreEventSkip(bool Skip);
	bool PauseAutoTalkBalloonAll();
	void OnEventSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs);
	void OnBattleSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs);
	void Next(bool AutoNext);
	bool IsReady();
	bool IsEnd();
	bool IsAllEnd();
	float GetTextWaitTime();
	float GetAutoTimer();
	float GetAutoTime();
	bool GetAutoEventMessage();
	class UBalloonBase* GetActive();
	bool DeleteBalloonAll();
	bool DeleteBalloon(class UBalloonBase* PcDelete);
	bool DeleteAutoBalloonAll();
	bool DeleteAutoBalloon(class UBalloonBase* PcDelete);
	void Debug_SetMessageFullSkip(bool bSkip);
	bool CloseAll();
	void ChangeTextSpeed(enum class EKSLanguage Language);
	bool CallBalloonEvent(enum class EBalloonEventType EventType);
	class UBalloonBase* AddBalloon(struct FAddBalloonParam& InAddParam);
	class UBalloonBase* AddAutoTalkBalloon(struct FAddBalloonParam& InAddParam, float FDispTime);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.BarMenuStorySelectBase
class UBarMenuStorySelectBase : public UKSUserWidgetBase
{
public:
	uint8                                        Pad_C28[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         BarMenuMode;                                       // 0x359(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C29[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBarMenuStorySelectBase* GetDefaultObj();

	void SetWidgetState(enum class ESTORY_SELECT_STATE Val);
	bool SetupStoryData(class FName& WorldMapLabel);
	bool Setup(class FName& WorldMapLabel, bool bIsBarMode);
	bool SetUIParts();
	bool SetBarUIParts(class FName TownNameLabel);
	bool OpenEvent(class FName WorldMapLabel, bool IsBarMenu);
	enum class ESTORY_SELECT_STATE GetWidgetState();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.BarTalkUtility
class UBarTalkUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBarTalkUtility* GetDefaultObj();

	void GetBarTalkDataByLevelInfo(enum class EBPFuncReturnCode* ReturnCode, struct FBarTalkDefine* OutBarTalkData, struct FLevelInfoData& LevelInfoData);
};

// 0x28 (0x2D0 - 0x2A8)
// Class Majesty.BattleAbilitySequenceActor
class ABattleAbilitySequenceActor : public ALevelSequenceActor
{
public:
	TArray<class ABattleSequenceEmitter*>        M_acAbilityHitEffectList;                          // 0x2A8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ABattleSequenceEmitter*>        M_acSupportRotationEffectList;                     // 0x2B8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         M_bPauseAbilitySequenceUpdate;                     // 0x2C8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C46[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABattleAbilitySequenceActor* GetDefaultObj();

	void SetSupportRotationEffectList(TArray<class ABattleSequenceEmitter*>& AcEffectList);
	void SetAbilitySequencePause(bool bPauseEnable);
	void SetAbilityHitEffectList(TArray<class ABattleSequenceEmitter*>& AcEffectList);
	bool GetAbilitySequencePause();
};

// 0xF8 (0x318 - 0x220)
// Class Majesty.BattleActionOrder
class ABattleActionOrder : public AActor
{
public:
	TArray<struct FActionOrderData>              M_acActionOrderPool;                               // 0x220(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acCurrentOrder;                                  // 0x230(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acReserveCurrentOrder;                           // 0x240(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acCurrentCharacter;                              // 0x250(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acEstimateCurrentOrder;                          // 0x260(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acNextOrder;                                     // 0x270(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acReserveNextOrder;                              // 0x280(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acNextCharacter;                                 // 0x290(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acEstimateNextOrder;                             // 0x2A0(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acCurrentCharacterForSubParty;                   // 0x2B0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acNextCharacterForSubParty;                      // 0x2C0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acCurrentOrderForSubParty;                       // 0x2D0(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActionOrderData>              M_acNextOrderForSubParty;                          // 0x2E0(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acSubPartyPlayerList;                            // 0x2F0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acSubEnemyList;                                  // 0x300(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        M_nActionCharacterCount;                           // 0x310(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CDF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABattleActionOrder* GetDefaultObj();

	bool UpdateNextOrderIndex();
	bool UpdateNextOrder();
	bool UpdateCurrentOrderIndex();
	bool SubActionCharacterCount();
	bool SortPredicateByWaitTime(struct FActionOrderData& CElementA, struct FActionOrderData& CElementB);
	bool SortPredicateByNextTime(struct FActionOrderData& CElementA, struct FActionOrderData& CElementB);
	bool SortActionOrderByWaitTime(TArray<struct FActionOrderData>& AcTargetOrder);
	bool SortActionOrderByNextTime(TArray<struct FActionOrderData>& AcTargetOrder);
	bool ShuffleActionOrder(TArray<struct FActionOrderData>& AcTargetOrder);
	bool SetupSubPartyPlayer(TArray<class ABattleCharacterBase*>& AcSubPartyPlayer);
	bool SetupFirstTurnPlayer();
	bool SetNextOrderChange(class ABattleCharacterBase* CTargetCharacter);
	void SetEstimateActionOrderChange(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, bool bBuffOrder, bool* FindCharacter);
	bool SetCurrentOrderChange(class ABattleCharacterBase* CTargetCharacter);
	bool SetBattleFirstActionTurn(TArray<class ABattleCharacterBase*>& AcFirstActionCharacter);
	bool SetActionOrderChange(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter);
	bool SealActionOrder(class ABattleCharacterBase* CTarget, struct FActionOrderData* CTargetOrder, bool* bSealNextOrder);
	bool ResetNextOrderForIsOrderChange();
	bool ResetEstimateNextOrder();
	bool ResetEstimateCurrentOrder();
	bool ResetCurrentOrderForIsOrderChange();
	bool ResetCurrentCharacterWaitTime();
	bool ResetActionOrderForIsOrderChange(TArray<struct FActionOrderData>& AcTargetOrder);
	bool ReplaceActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, enum class EACTION_ORDER_TYPE EType, class ABattleCharacterBase* CReplaceCharacter, int32 NReplaceIndex, bool bReturnOrderToReserve, struct FActionOrderData* CReplaceOrder);
	bool RemoveNextOrderForSubParty(class ABattleCharacterBase* CTargetCharacter);
	bool RemoveNextOrder(class ABattleCharacterBase* CTargetCharacter, bool bEverSince);
	bool RemoveCurrentOrderForSubParty(class ABattleCharacterBase* CTargetCharacter);
	bool RemoveCurrentOrder(class ABattleCharacterBase* CTargetCharacter);
	bool RemoveBreakStyleOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList);
	bool RemoveBreakStyle();
	bool RemoveActionOrderForEstimate(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter);
	bool RemoveActionOrderByIndex(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, int32 NRemoveIndex);
	bool RemoveActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, class ABattleCharacterBase* CTargetCharacter);
	void PopOrder(class ABattleCharacterBase** CNextCharacter, struct FActionOrderData* CNextOrderData);
	bool PlaySubIconOpenAnim(TArray<struct FActionOrderData>& OrderData);
	bool PlaySubIconCloseAnim(TArray<struct FActionOrderData>& OrderData);
	bool MoveActionOrderByIndex(TArray<struct FActionOrderData>& AcTargetOrder, int32 NTargetIndex, int32 NToIndex);
	bool MoveActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, enum class EACTION_ORDER_TYPE EType, int32 NMoveCount, bool bIsNextOrder);
	bool IsSettledOrderForEightBattle();
	bool IsNextCharacterCross();
	bool IsNextCharacterContinue(class ABattleCharacterBase* CCheckCharacter);
	bool IsCurrentOrderComplete();
	bool InsertNextOrderForSubParty(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter);
	bool InsertNextOrder(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EType, float FDelay, bool bUseIcon);
	bool InsertCurrentOrderForSubParty(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter);
	bool InsertCurrentOrder(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EType, float FDelay, bool bUseIcon);
	bool InsertActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, struct FActionOrderData& CInsertOrder, int32* NInsetIndex);
	bool InitializeActionOrder(TArray<class ABattleCharacterBase*>& AcBattlePlayer, TArray<class ABattleCharacterBase*>& AcBattleEnemy, enum class EBATTLE_START_TYPE EStartType);
	bool GetOrderIconFromCharaRef(TArray<struct FActionOrderData>& SearchArray, class ABattleCharacterBase* TargetRef, struct FActionOrderData* Data);
	void GetOrder(class ABattleCharacterBase** CNextCharacter, struct FActionOrderData* CNextOrderData);
	void GetEstimateActionOrderList(TArray<struct FActionOrderData>* AcCurrentOrder, TArray<struct FActionOrderData>* AcNextOrder);
	void GetActionOrderList(TArray<struct FActionOrderData>* AcCurrentOrder, TArray<struct FActionOrderData>* AcNextOrder);
	bool FindNextOrderByCharacter(class ABattleCharacterBase* CTargetCharacter, TArray<struct FActionOrderData>* AcFindOrderList);
	bool FindCurrentOrderByCharacter(class ABattleCharacterBase* CTargetCharacter, TArray<struct FActionOrderData>* AcFindOrderList);
	bool ExecMoveNextOrder(enum class EACTION_ORDER_TYPE EType, int32 NMoveCount);
	bool ExecMoveCurrentOrder(enum class EACTION_ORDER_TYPE EType, int32 NMoveCount);
	bool ExecEstimateNextOrder(TArray<class ABattleCharacterBase*>& AcTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, int32 NMoveCount);
	bool ExecEstimateCurrentOrder(TArray<class ABattleCharacterBase*>& AcTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, int32 NMoveCount);
	bool ExecEstimateActionOrder(TArray<class ABattleCharacterBase*>& AcTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, int32 NMoveCount, bool bContainCurrentOrder, bool bContinueEstimate);
	bool EndCharacterOrderForEightBattle();
	bool Debug_OutputOrderLogFromBodyList(const class FString& Title, const TArray<class FString>& BodyList);
	bool Debug_OutputOrderLog(const class FString& Title, const class FString& Body);
	bool Debug_OutputOrderIconLog(class UActionOrderIcon* CIcon, const class FString& Title);
	bool Debug_GetCommonOrderDataLog(const struct FActionOrderData& CTarget, bool IsCurrent, class FString* OutBody);
	bool CreateSubPartyOrder(TArray<class ABattleCharacterBase*>& AcSubPartyCharacter, TArray<struct FActionOrderData>& AcOriginalOrder, TArray<struct FActionOrderData>& AcOrderResult, TArray<struct FActionOrderData>& AcReserveList, TArray<struct FActionOrderData>& AcBribeOrderList, bool IsNextOrder);
	bool CreateSubPartyCharacterList(TArray<class ABattleCharacterBase*>& AcSubPartyCharacter, TArray<struct FActionOrderData>& AcOrderResult, bool IsNextOrder);
	bool CreateMainPartyCharacterList(TArray<struct FActionOrderData>& AcOriginalOrder, TArray<struct FActionOrderData>& AcOrderResult);
	bool CreateActionOrder(TArray<class ABattleCharacterBase*>& AcBattleCharacter, TArray<struct FActionOrderData>& AcOrderResult, TArray<struct FActionOrderData>& AcReserveList);
	bool ClearCurrentOrder();
	bool CheckSpecialOrderAllAGIUp(int32 AbilityID);
	bool CheckSpecialOrderAGIUpSelfDown(int32 AbilityID);
	bool CheckShuffleEnable(const struct FActionOrderData& CTargetOrder);
	bool CheckEnablePartyChangeOrder(enum class EACTION_ORDER_TYPE EOrderType);
	bool ChangeBattleTurn();
	bool ChangeBattleSubParty(class ABattleCharacterBase* CActiveCharacter, bool DefeatChange);
	bool ChangeBattlePartyMember(TArray<class ABattleCharacterBase*>& AcChangePlayerList);
	bool BribeActionOrder(class ABattleCharacterBase* CEnforcer, class ABattleCharacterBase* CTarget, struct FActionOrderData* CReplaceOrder, struct FActionOrderData* CTargetOrder, bool* bReplaceNextOrder);
	bool BreakActionOrder(class ABattleCharacterBase* CTargetCharacter);
	void AssignNextOrderIndex();
	void AssignCurrentOrderIndex();
	bool AddNextOrderCharacter(class ABattleCharacterBase* CAddCharacter);
	bool AddLastActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, struct FActionOrderData& CInsertOrder, int32* NInsetIndex);
};

// 0x70 (0x120 - 0xB0)
// Class Majesty.BattleAIBase
class UBattleAIBase : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerCharacter;                                 // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBATTLE_AI_STATE                  M_ePreState;                                       // 0xB8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBATTLE_AI_STATE                  M_eCurrentState;                                   // 0xB9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CFA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        M_astrStateNameList;                               // 0xC0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EBATTLE_AI_STATE, enum class EBATTLE_AI_SUB_STATE> M_anAISubState;                                    // 0xD0(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBattleAIBase* GetDefaultObj();

	void UpdateThinkForConfusion(class FName* CommandName);
	void UpdateThink(class FName* CommandName);
	void SetOwnerCharacter(class ABattleCharacterBase* COwner);
	void SetBattleCommandTable(TArray<struct FBattleAICommandData>& AcCommandTable);
	void SelectBattleTarget(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, enum class EBATTLE_TARGET_TYPE TargetType, TArray<class ABattleCharacterBase*>* TargetList);
	bool PreUpdateThink();
	bool PreTurnStart();
	bool PreOrderStart(class ABattleCharacterBase* ActionCharacter);
	bool PostUpdateThink();
	bool PostSignOfBoost();
	bool PostOrderEnd(class ABattleCharacterBase* ActionCharacter);
	bool PostBattleEvent();
	bool OnRevive();
	bool OnDead();
	bool OnDamage();
	bool OnBreak();
	void GetCounterAbility(class FName* CommandName);
	void GetBattleAISubState(enum class EBATTLE_AI_SUB_STATE* CurrentSubState);
	class FString GetBattleAIStateName();
	void GetBattleAIState(enum class EBATTLE_AI_STATE* CurrentState, enum class EBATTLE_AI_STATE* PrevState);
	void ChangeBattleAISubState(enum class EBATTLE_AI_SUB_STATE NewSubState);
	void ChangeBattleAIState(enum class EBATTLE_AI_STATE NewState, bool ResetSubState);
	bool AIInitialize();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.BattleAIUtility
class UBattleAIUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBattleAIUtility* GetDefaultObj();

};

// 0x150 (0x980 - 0x830)
// Class Majesty.BattleCamera
class ABattleCamera : public ACineCameraActor
{
public:
	struct FBattleCameraInitData                 M_cCameraInitData;                                 // 0x830(0x48)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EBATTLE_CAMERA_TYPE               M_eCameraType;                                     // 0x878(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D24[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            M_cResumeTransform;                                // 0x880(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            M_cStartTransformForTargetFocus;                   // 0x8B0(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            M_cGoalTransformForTargetFocus;                    // 0x8E0(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            M_sBaseTransform;                                  // 0x910(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            CameraTransform;                                   // 0x940(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCameraWaitMove;                                   // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D25[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABattleCamera* GetDefaultObj();

	void StartResulttCamera(enum class EBATTLE_RESULT_TYPE EResultType, bool bIsFront);
	void StartEnemyDeadCamera(enum class EBREAK_CAMERA_TYPE EBreakType);
	void StartEncountCamera();
	void StartBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType);
	void StartAbilityCamera(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	void SetupBaseTransform();
	void SetTargetFocusCamera(enum class EBATTLE_TARGET_TYPE ETargetType, class ABattleCharacterBase* CTarget);
	void SetInterpolationCurveForAbilityCamera(class UCurveFloat* CInterpolationCurve);
	void SetCameraWaitMove(bool bEnable);
	void SetCameraTransform(const struct FTransform& CTransform);
	void ResumeWaitMove();
	void ResetTargetFocusCamera();
	void ResetCameraTransform();
	void PostCameraTick(float DeltaTime);
	void InterpolationResultCamera(float FRatio, class ACineCameraActor* CTargetCamera);
	void InterpolationBattleCamera(class UCurveFloat* CInterpolationCurve, float FRatio, class ACineCameraActor* CTargetCamera);
	void InterpolationAbilityCamera(float FRatio, class ACineCameraActor* CTargetCamera);
	struct FRotator GetLastLookatTrackingRotation(class ACineCameraActor* CTargetCamera);
	struct FVector GetLastLookatTrackingPosition(class ACineCameraActor* CTargetCamera);
	void GetCameraInitParameterForAbilityCamera(struct FPostProcessSettings* OutPostSetting, struct FCameraFocusSettings* OutFocusSetting, struct FCameraFilmbackSettings* OutFilmbackSetting, struct FCameraLensSettings* OutLensSetting, float* OutCurrentAperture, float* OutFOV);
	void GetAudioListenerPosition(struct FVector* OutLocation, struct FVector* OutFrontDir, struct FVector* OutRightDir);
	void FixBattleCamera();
	void FinishResultCamera();
	void FinishEncountCamera();
	void FinishBreakCamera();
	void FinishAbilityCamera();
	bool CheckZeroRotator(const struct FRotator& CRotator);
};

// 0x410 (0x630 - 0x220)
// Class Majesty.BattleCharacterBase
class ABattleCharacterBase : public AActor
{
public:
	int32                                        M_nCharacterID;                                    // 0x220(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      M_cAnimationCharacter;                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AKSCharacterBase*>              M_acSubAnimationCharacter;                         // 0x230(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterParam                       M_cMasterParameter;                                // 0x240(0x34)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        M_nCurrentHP;                                      // 0x274(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nDecreaseHPMax;                                  // 0x278(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsChangedHPMax;                                 // 0x27C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E65[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nCurrentMP;                                      // 0x280(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nCurrentBP;                                      // 0x284(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nCurrentBPMax;                                   // 0x288(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nCurrentShieldPoint;                             // 0x28C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nShieldPointMax;                                 // 0x290(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E66[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0x298(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nUseBPInCurrentOrder;                            // 0x2A0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseBoost;                                       // 0x2A4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bBreakEnemyInCurrentOrder;                       // 0x2A5(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bExecBreakAct;                                   // 0x2A6(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bCharacterReady;                                 // 0x2A7(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bAbilityHitFlag;                                 // 0x2A8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bAbilityHitInvisible;                            // 0x2A9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseDamageCutShield;                             // 0x2AA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bJustKillInAilment;                              // 0x2AB(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bReflectionEnforcer;                             // 0x2AC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E67[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EDISEASE_TYPE, enum class EATTRIBUTE_RESIST> M_aeDiseaseResist;                                 // 0x2B0(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bHitDiseaseInAction;                             // 0x300(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsExceptField;                                  // 0x301(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E68[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nDragInIndex;                                    // 0x304(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nDragInIndexTest;                                // 0x308(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_vForceMovementStart;                             // 0x30C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_vForceMovementGoal;                              // 0x318(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsExecForceMovement;                            // 0x324(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bResumeIdleAction;                               // 0x325(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bResumeIdleActionFixed;                          // 0x326(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBATTLE_ACTION_TYPE               M_eResumeIdleActionType;                           // 0x327(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsAutoTameMonster;                              // 0x328(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bEnableBlind;                                    // 0x329(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E69[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionOrderComponent*                 M_cActionOrderComponent;                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nOrderCountMax;                                  // 0x338(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nCurrentOrderCountMax;                           // 0x33C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nCurrentOrderCounter;                            // 0x340(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nCurrentActionTimeBase;                          // 0x344(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nNextActionTimeBase;                             // 0x348(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E6A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionOrderData>              M_acNextActionOrderData;                           // 0x350(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UBattleVoiceComponent*                 M_cBattleVoiceComponent;                           // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bPlayOnRecoveredVoice;                           // 0x368(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bSettledPlayOnce_OnRecovered;                    // 0x369(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E6B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       M_cDefaultEffectSocket;                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       M_cGroundEffectSocket;                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       M_cChargeActionEffectSocket;                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            M_sBaseTransform;                                  // 0x390(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsCharacterWarpMode;                            // 0x3C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bEnableDeadCharacterControl;                     // 0x3C1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E72[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CharaTransform;                                    // 0x3D0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            CanoeTransform;                                    // 0x400(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         VisibleCanoe;                                      // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EnableCanoeTrace;                                  // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E74[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CharacterOpacity;                                  // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         DisableBattleCameraOpacity;                        // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E76[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          PotentialityAction_BodyColor;                      // 0x43C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PotentialityAction_EyesColor;                      // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class ESUPPORT_AILMENT_TYPE>     M_aeSupportAilment;                                // 0x450(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<enum class ESUPPORT_AILMENT_TYPE, struct FSupportAbilityDataBase> M_acSupportAbilityData;                            // 0x460(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	enum class EWEAPON_STANCE                    M_eWeaponStance;                                   // 0x4B0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E79[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EWEAPON_CATEGORY>          M_aeEquipmentWeaponList;                           // 0x4B8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EWEAPON_CATEGORY                  M_eMainWeapon;                                     // 0x4C8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nMainWeaponIndex;                                // 0x4CC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWEAPON_CATEGORY                  M_eNormalAttackWeapon;                             // 0x4D0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nNormalAttackWeaponIndex;                        // 0x4D4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nSwitchWeaponIndex;                              // 0x4D8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWEAPON_CATEGORY                  M_eForteWeapon;                                    // 0x4DC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_strForteWeaponID;                                // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPotentialityActionComponent*          M_cPotentialityActionComponent;                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bPotentialityActionEnable;                       // 0x4F0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nExcitementPoint;                                // 0x4F4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bMasqueradeEnable;                               // 0x4F8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMasqueradeComponent*                  M_cMasqueradeComponent;                            // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bInventorEnable;                                 // 0x508(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventorComponent*                    M_cInventorComponent;                              // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bChargeActionEnable;                             // 0x518(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E80[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBattleAdditiveOrderData>      M_acChargeActionDataList;                          // 0x520(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UBattleAIBase*                         M_cBattleAIComponent;                              // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bBattleAIReady;                                  // 0x538(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsPreparation;                                  // 0x539(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsWeakIconFullOpen;                             // 0x53A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E81[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeakLockData                         M_cCurrentWeakLockData;                            // 0x540(0x18)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FWeakLockData                         M_cRequestWeakLockData;                            // 0x558(0x18)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsUpdateWeakLockData;                           // 0x570(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeakChangeData                       M_cCurrentWeakChangeData;                          // 0x578(0x18)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FWeakChangeData                       M_cRequestWeakChangeData;                          // 0x590(0x18)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsUpdateWeakChangeData;                         // 0x5A8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E84[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShieldChangeData                     M_cCurrentShieldChangeData;                        // 0x5B0(0x18)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FShieldChangeData                     M_cRequestShieldChangeData;                        // 0x5C8(0x18)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsUpdateShieldChangeData;                       // 0x5E0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsUpdateShieldChangeDataTest;                   // 0x5E1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E85[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EATTRIBUTE_TYPE>           M_aeOpenedAttributeList;                           // 0x5E8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        M_nBribeCounter;                                   // 0x5F8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fBribeRatio;                                     // 0x5FC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bRequestSettingNextOrder;                        // 0x600(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRequestActionOrderData>       M_RequestSettingNextOrderData;                     // 0x608(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bRequestSettingNextTurnOnly;                     // 0x618(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E88[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABattleCharacterBase* GetDefaultObj();

	TArray<bool> WeakTypeToWeaponType(int32 EWeakLockType);
	TArray<bool> WeakTypeToMagicType(int32 EWeakLockType);
	bool UpdateWeakLock_PostOrder();
	bool UpdateWeakChange_PostOrder();
	bool UpdateSubStatusParam(bool UpdateBoost, bool UpdatePotential);
	bool UpdateStatusParam(bool UpdateBoost, bool UpdatePotential);
	bool UpdateShieldChange_PostOrder();
	bool UpdateRequestSettingNextOrder_PostOrder();
	bool UpdateChargeActionCount();
	bool TurnONStatusUI();
	bool TurnOffStatusUI();
	bool SwitchNormalAttackWeapon(bool bDirNext, int32* NWeaponIndex);
	bool SwitchMainWeapon(bool bDirNext, int32* NWeaponIndex);
	bool SwitchCatapultWeapon(bool bDirNext, int32* NWeaponIndex);
	bool SurveyOpenedWeakPoint(int32* NOpenedNum, int32* NWeakPointMax);
	void StopForceMovementTimeline();
	void StartForceMovementTimeline();
	void SetWeaponStance(enum class EWEAPON_STANCE EStance);
	bool SetWeakIconFullOpen(bool bIsFullOpen);
	void SetVisibleCanoe(bool bVisible);
	void SetUseDamageCutShield(bool bUseShield);
	bool SetupSubAnimationCharacter(TArray<class ABattleCharacterBase*>& AcTarget, const struct FVector& CCommandOffset);
	void SetupBaseTransform(enum class EBATTLE_CHARA_POSITION_RESET_TYPE EResetType, bool bEnableDeadCharacterControl);
	bool SetupActionOrderSealAction(bool bEnable);
	bool SetupActionOrderBribe(bool bEnable);
	bool SetupActionOrderBlindFast(bool bEnable);
	bool SetupActionOrderBlind(bool bEnable);
	bool SetSupportAilment(const struct FSupportAbilityDataBase& CSupportAbilityData);
	bool SetShieldPointMax(int32 NShieldMax);
	void SetReflactionEnforcer(bool bEnable);
	void SetPotentialityAction_EyesColor(float FAlpha);
	void SetPotentialityAction_BodyColor(const struct FLinearColor& CColor);
	void SetGetBackBoostPoint(int32 NGetBackBoostPoint);
	void SetForceMovementTimelineCurve(class UCurveFloat* CMovementRatio, class UCurveVector* CMovementOffset, class UCurveFloat* COpacityCurve, float FTimelineLength);
	void SetForceMovementParameter(const struct FVector& VStartPoint, const struct FVector& VGoalPoint, bool bResumeIdle, enum class EBATTLE_ACTION_TYPE EResumeIdleType, bool bResumeIdleFixed);
	void SetExcitementPoint(class ABattleCharacterBase* CEnforcer, int32 NBoostLevel);
	bool SetEnableWeakLockData();
	bool SetEnableWeakChangeData();
	bool SetEnableShieldChangeData();
	void SetEnablePlayOnRecoveredVoice(bool bEnable);
	void SetEnableCanoeTrace(bool bEnable);
	void SetDisableBattleCameraOpacity(bool bDisable);
	void SetDefaultLocation(bool bInMainParty);
	void SetDecreaseHPMax(int32 DecreaseValue);
	void SetDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType, bool bValue);
	void SetDeadFlagForReplay(bool bDeadFlag);
	void SetCharaTransform(const struct FTransform& CTransform);
	void SetCharacterOpacityForActionCommand(float FOpacity);
	void SetCharacterOpacity(float FOpacity);
	void SetCharacterName(class FName StrCharacterNameLabel);
	void SetCanoeTransform(const struct FTransform& CTransform);
	bool SetBoostPointMax(int32 NBoostMax);
	void SetAbilityHitFlag(bool bAbilityHit, bool bAbilityHitInvisible);
	bool SearchDiseaseForAI(enum class EDISEASE_TYPE DiseaseType);
	bool SearchDiseaseByCategoryForAI(enum class EDISEASE_CATEGORY DiseaseCategory);
	bool SaveCharacterParameter();
	void ReturnCaptureMove();
	bool RestoreGroggy();
	bool RestoreBreak();
	void ResetVoiceFlagForPreAction();
	bool ResetSelectWeaponForMasquerade(enum class EWEAPON_CATEGORY ETargetWeapon);
	void ResetHitDiseaseForPreAction();
	void ResetExcitementPoint();
	void ResetCanoeTransform();
	void ResetBattleCharacterForReplay();
	bool RequestWeakLock(const struct FWeakLockData& CNewWeakLockData);
	bool RequestWeakChange(const struct FWeakChangeData& CNewWeakChangeData);
	bool RequestShieldChange(const struct FShieldChangeData& CNewShieldChangeData);
	bool RemoveDiseaseForSequencer(class FName DiseaseName);
	bool RemoveDiseaseForAI(enum class EDISEASE_TYPE DiseaseType);
	void ReleasePotentialityAction();
	void RecoveryPotentialityActionPoint(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem);
	void RecoveryMP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void RecoveryHP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void RecoveryBP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem);
	struct FBattleAdditiveOrderData PopChargeActionData();
	void PlayCaptureMove();
	bool PlayBattleVoiceForDamage(int32 NDamageValue, class AActionCommandBase* CActionCommand);
	bool PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition, bool bIsSkipDiseaseCheck);
	bool OpenWeakIcon(int32 NIndex, bool bRandom, bool bPreparation, bool bPlay2nd, int32* bOpenIndex);
	bool OnTakeNewDisease(enum class EDISEASE_TYPE EDiseaseType);
	bool OnTakeDisease(class ABattleCharacterBase* CEnforcer, enum class EDISEASE_TYPE EDiseaseType, enum class EDISEASE_CATEGORY EDiseaseCategory, int32 NInvocationValue, int32 NBoostLevel, bool bIsNewDisease);
	bool OnPotentialityAction();
	bool OnHitDamageSP(bool bIsBreakAttack);
	bool OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, enum class EATTRIBUTE_RESIST ETotalResist, enum class EATTRIBUTE_RESIST EWeaponResist);
	void OnFinish_CreateBattleAI();
	bool OffPotentialityAction(bool bCancel);
	void MoveLastNextOrder();
	bool IsWeakIconFullOpen();
	bool IsSupporterComplete();
	bool IsSelecterEffectVisibleSealAction();
	bool IsSelecterEffectVisibleNormal();
	bool IsSelecterEffectVisibleBribe();
	bool IsPotentialityActionEnable();
	bool IsMasqueradeEnable();
	void IsJustKillInAilment(bool* bJustKill);
	bool IsInventorEnable();
	bool IsHitDiseaseInAction();
	bool IsGarderaAbility(class FName AbilityName);
	bool IsExecForceMovement();
	bool IsExecBreakAct();
	bool IsExceptField();
	bool IsCharacterTameMonster();
	bool IsCharacterSupporter();
	bool IsCharacterReady();
	bool IsCharacterPinch();
	bool IsCharacterNPC();
	bool IsCharacterNonPartsBattle();
	void IsCharacterGroggy(bool* bIsGroggy, bool* bEnableCurrentAction, bool* bEnableNextAction);
	bool IsCharacterEnemy();
	bool IsCharacterDisableAction();
	bool IsCharacterDecondition();
	bool IsCharacterDeadlySense();
	bool IsCharacterDead();
	bool IsCharacterBreak();
	bool IsAutoTameMonster();
	void InterruptCurrentOrder(const struct FRequestActionOrderData& CActionOrderData);
	void InitUseDamageCutShield();
	bool InitializeBattleVoiceDataData(class FName StrVoiceCharacterID);
	bool InitializeActionOrderData();
	enum class EWEAPON_STANCE GetWeaponStance();
	void GetWeaponResist(enum class EWEAPON_CATEGORY EAttackWeapon, bool bCheckWeakLock, enum class EATTRIBUTE_RESIST* EResistResult);
	void GetWaitEnemyActionFrame(int32* NWaitFrame);
	void GetTameMonsterData(bool* bTameEnable, float* FTameRateBase);
	int32 GetSwitchWeaponIndex();
	enum class ESESSION_SE_TYPE GetSessionSEType();
	void GetReplayStatus(bool bIsSelfTurn, enum class EBATTLE_REPLAY_CHARA_STATUS* EReplayStatus);
	void GetReplayDiseaseMask(int32* NDiseaseMask);
	class UPotentialityActionComponent* GetPotentialityActionComponent();
	void GetPlayableCharacterID(enum class EPlayableCharacterID* ECharaID);
	class ABattleCharacterBase* GetOwnerPlayer();
	bool GetOpenedAttribute(int32 NIndex, enum class EATTRIBUTE_TYPE* EResult);
	int32 GetNormalAttackWeaponIndex();
	enum class EWEAPON_CATEGORY GetNormalAttackWeaponCategory();
	struct FActionOrderData GetNextActionOrderData(int32 NOrderIndex);
	class UMasqueradeComponent* GetMasqueradeComponent();
	enum class EWEAPON_CATEGORY GetMainWeaponCategory();
	class UInventorComponent* GetInventorComponent();
	class FName GetForteWeaponID();
	int32 GetExcitementPoint();
	TArray<enum class EWEAPON_CATEGORY> GetEquipmentWeaponCategory();
	TArray<struct FItemData> GetEquipmentList();
	TArray<class FName> GetEquipmentLabelList();
	bool GetEnchantAttribute(enum class EWEAPON_CATEGORY ECheckWeapon, enum class EATTRIBUTE_TYPE* EEnchantAttribute);
	bool GetEnablePlayOnRecoveredVoice();
	bool GetEnableBlind();
	void GetDiseaseResist(enum class EDISEASE_TYPE EDiseaseType, enum class EATTRIBUTE_RESIST* EResistResult);
	void GetDelayEnemyActionSE(TArray<struct FActionDelaySEData>* AcActionDelaySEData, bool* bEnable);
	struct FVector GetDefaultWarpPosition();
	int32 GetDecreaseHPMax();
	class UDebugBattleCharaComponent* GetDebugComponent();
	struct FVector GetCursorPosition();
	struct FVector GetCurrentPosition();
	class FName GetCharmEnemyLabel();
	void GetCharacterVoice_BattleStart(class FName* StrVoiceID, bool* bFindVoiceID);
	void GetCharacterName(class FText* StrCharacterName);
	void GetCharacterJobByRowID(int32* NFirstJob, int32* NSecondJob);
	void GetCharacterJob(enum class EJOB_TYPE* EFirstJob, enum class EJOB_TYPE* ESecondJob, bool* bEnableSecondJob);
	void GetCharacterID(int32* NCharaID);
	void GetCharacterEvation(int32* Result, float* Ratio);
	void GetCharacterDefence(enum class EAILMENT_CALC_TYPE CalcType, int32* Result, float* Ratio);
	void GetCharacterConcentrate(int32* Result, float* Ratio);
	void GetCharacterAttack(enum class EAILMENT_CALC_TYPE CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio);
	void GetCharacterAgility(int32* Result, float* Ratio);
	void GetCharacterAccuracy(int32* Result, float* Ratio);
	bool GetBribeData(bool* BribeEnable, int32* BribeMoney);
	class UBattleVoiceComponent* GetBattleVoiceComponent();
	class USceneComponent* GetBattleEffectSocket(bool bGround);
	class UBattleAIBase* GetBattleAIComponent();
	void GetAttributeResist(enum class EATTRIBUTE_TYPE EAttackAttribute, bool bCheckWeakLock, enum class EATTRIBUTE_RESIST* EResistResult);
	class AKSCharacterBase* GetAnimationCharacter();
	class AActor* GetAnimationActorForAttach();
	int32 GetActionTimeForNextTurn(enum class EACTION_ORDER_TYPE EType, float FDelayRatio);
	int32 GetActionTimeForCurrentTurn(enum class EACTION_ORDER_TYPE EType, float FDelayRatio);
	class UActionOrderComponent* GetActionOrderComponent();
	class FName GetAbilityData(int32 NIndex);
	bool FinishPotentialityAction(bool bCheckResume);
	void FinishChangePartySequence();
	void ExecSwitchSlidePartySubToMain();
	void ExecSwitchSlidePartyMainToSub();
	bool ExecStartCharacterWarp();
	void ExecSettingNextOrder(TArray<struct FRequestActionOrderData>& AcActionOrderData, bool bNextTurnOnly, bool bRequest);
	void ExecRevive(class ABattleCharacterBase* CEnforcer, int32 NReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice);
	void ExecReturnSupporterAction(bool bWithReturnText);
	void ExecReturnCharmAction();
	bool ExecEndCharacterWarp();
	void ExecDragInAction(class ABattleCharacterBase* Enforcer, int32 NInvocationTurn, enum class EBATTLE_DRAG_IN_TYPE EDragInType);
	void ExecCharmAction(class ABattleCharacterBase* Enforcer);
	void ExecBlowAwayAction(class ABattleCharacterBase* Enforcer, int32 NInvocationTurn);
	bool EndCharacterOrder(float* FWaitTime);
	bool EndBattleTurnForSubParty(float* FWaitTime);
	bool DecideActionForSubParty(float* FWaitTime);
	bool Debug_SetActionDelaySEData(TArray<struct FActionDelaySEData>& CSEData);
	bool Debug_GetActionDelaySEData(TArray<struct FActionDelaySEData>* CSEData);
	void CreateSubAnimationCharacter(int32 NCreateNum);
	bool CreateOpenedAttributeList(int32* NAttributeNum, int32* NAttributeMax);
	void CreateBattleEffectSocket(const struct FVector& VEffectOffset);
	void CreateBattleAI(TSoftClassPtr<class UBattleAIBase>& CBattleAIClass, bool bAutoInitialize);
	bool CheckWrapAroundEnable(const struct FActionOrderData& CTargetOrderData, enum class EACTION_ORDER_TYPE ERequestType, bool bIsNextTurn, bool bMoveForward);
	void CheckWeaponWeakOpen(enum class EWEAPON_CATEGORY EWeaponCategory, bool* bOpened);
	void CheckUseDamageCutShield(bool* bUseShield);
	bool CheckSupportAilment(enum class ESUPPORT_AILMENT_TYPE ESupportAilment, struct FSupportAbilityDataBase* CSupportAbilityData);
	bool CheckShuffleEnable();
	bool CheckReflactionEnforcer();
	bool CheckPreparationSealing(enum class ECOMMAND_SUB_MENU_TYPE ESubMenuType);
	bool CheckPotentialityActionExec(enum class EPOTENTIALITY_ACTION_TYPE EActionType);
	bool CheckOverTakeEnable(const struct FActionOrderData& CTargetOrderData, enum class EACTION_ORDER_TYPE ERequestType, bool bIsNextTurn);
	bool CheckLastOrderInTurn();
	bool CheckFirstOrderInTurn();
	bool CheckExecedPreparation();
	void CheckExecDiseaseForPostOrder(bool* bEnable);
	bool CheckEquipmentWeapon(enum class EWEAPON_CATEGORY ECheckWeapon);
	bool CheckEnableStealthTarget();
	bool CheckEnableStealthCursor();
	bool CheckEnableStealthActionOrder();
	bool CheckDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType);
	bool CheckCharacterReviveEnable(bool bReviveAndRecovery);
	bool CheckBoostPointMax();
	void CheckAttributeWeakOpen(enum class EATTRIBUTE_TYPE EAttributeType, bool* bOpened);
	void CheckAbilityHitFlag(bool* bAbilityHitFlag, bool* bAbilityHitInvisible);
	bool ChangeMainWeapon(enum class EWEAPON_CATEGORY ETargetWeapon, bool bUseWeaponTexture);
	bool ChangeActionModeForGaldera();
	bool ChangeActionMode(bool bIsSpecial, int32 NModeIndex, bool bUseTransition);
	bool BeginCharacterOrder(float* FWaitTime);
	bool ApplyChangeActionMode();
	bool AddPotentialityActionPoint(int32 NAddPoint, bool bIgnore);
	bool AddMaxHP(int32 NAdditiveMaxHP);
	bool AddDiseaseForSequencer(class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn);
	bool AddDiseaseForAI(class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn, class ABattleCharacterBase* Enforcer);
	bool AddChargeActionData(class FName StrAbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddBribeCounter();
	class UActorComponent* AddActorComponent(class UClass* CActorComponentClass);
};

// 0x30 (0x250 - 0x220)
// Class Majesty.BattleCommandMenuActor
class ABattleCommandMenuActor : public AActor
{
public:
	bool                                         M_bIsTargetEnemySide;                              // 0x220(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          M_astrOptionDataList;                              // 0x228(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  M_strUseActionLabel;                               // 0x238(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 M_acCommandSealingList;                            // 0x240(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ABattleCommandMenuActor* GetDefaultObj();

	void SetupCommandSealingList();
	void SetCommandSealing(enum class ECOMMAND_SEALING_TYPE EType, bool bSealing);
	bool OnStyleChange();
	bool OnPotentialityAction();
	bool OnBreakStyle();
	bool OnBoostStyle();
	bool OffPotentialityAction();
	bool OffBreakStyle();
	bool OffBoostStyle();
	bool IsCommandSealing(enum class ECOMMAND_SEALING_TYPE EType);
	void GetOptionDataList(TArray<class FName>* AstrOptionDataList, class FName* StrUseActionLabel);
	void GetEventFlag(class FName FlagName, bool* Value);
	bool ExecPotentialityAction();
	void ClearCommandSealing();
	void CheckCommandSealingListForItem(class ABattleCharacterBase* CEnforceer, const struct FItemData& CItemData, enum class EACTION_COMMAND_USEABLE* ECommandUseable);
	void CheckCommandSealingListForInvade(class ABattleCharacterBase* CEnforceer, const struct FInvadeData& CInvadeData, enum class EACTION_COMMAND_USEABLE* ECommandUseable);
	void CheckCommandSealingList(class ABattleCharacterBase* CEnforceer, const struct FAbilitySetDataBase& CAbilitySet, enum class EACTION_COMMAND_USEABLE* ECommandUseable);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.BattleDamageNumberBase
class UBattleDamageNumberBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UBattleDamageNumberBase* GetDefaultObj();

	void UpdatePosition();
	void OnBattleSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs);
};

// 0x8 (0x40 - 0x38)
// Class Majesty.BattleEventDirector
class UBattleEventDirector : public ULevelSequenceDirector
{
public:
	uint8                                        Pad_EE3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattleEventDirector* GetDefaultObj();

	void WaitReturnCapture_Implementation();
	void StopBGM_Implementation(float FadeOutTime);
	void SetWhiteOutFlag_Implementation(bool bEnable);
	void SetEventFlag_Implementation(class FName FlagName, bool Value);
	void SetBattleSequenceDirector(class ABattleSequenceDirector* CSequenceDirector);
	void SetBattleEnemyVisibility_Implementation(bool bVisible);
	void SetAdvancedAbility_Implementation(enum class EPlayableCharacterID CharacterID, int32 NIndex, bool bEnable);
	void ReturnCapture_Implementation();
	void RemoveBoostEffect_Implementation();
	void ReleasePotentialityAction_Implementation(enum class EPlayableCharacterID CharacterID);
	void RandomJumpToFrame_Implementation(float Rate, int32 Frame);
	void PlayVibration_Implementation(class FName VibrationID, enum class EVibrationPower Power);
	void PlaySE_Implementation(class FName SEID);
	void PlayBGM_Implementation(class FName BgmLabel, float FadeOutTime, float FadeInTime);
	void PlayAction_Implementation(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID);
	void OpenTutorial_Implementation(enum class ETUTORIAL_TYPE TutorialType, bool bForcedDisplay);
	void OpenTalk_Implementation(class FName TalkTextID, const struct FVector2D& Offset, bool WaitFinish);
	void OpenActionInfoFromAdvancedAbility_Implementation(class FName TextID, enum class EPlayableCharacterID CharaID, int32 NAbilityIndex);
	void OpenActionInfoForEightBattle_Implementation(class FName TextID);
	void OpenActionInfo_Implementation(class FName TextID);
	void JumpToFrame_Implementation(int32 Frame);
	void InstantDeath_EnemyAll_Implementation();
	void FixBattleCamera_Implementation();
	void ExecPotentialityAction_Implementation(class ABattleCharacterBase* ActionCharacter);
	void ExecExtendBGM_Implementation(int32 NIndex);
	void ExecBattleSuspend_Implementation();
	void ControlDisease_Implementation(class ABattleCharacterBase* TargetCharacter, bool Remove, class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn);
	void CloseTalk_Implementation();
	void CloseActionInfo_Implementation();
	void ChangeCharacterName_Implementation(class ABattleCharacterBase* TargetCharacter, class FName CharacterNameID);
	void ChangeBoostLevel_Implementation(class ABattleCharacterBase* ActionCharacter, int32 BoostLevel);
	void ChangeActionMode_Implementation(class ABattleCharacterBase* ActionCharacter, bool bIsEnable, int32 NModeIndex, bool bUseTransition);
};

// 0x348 (0x578 - 0x230)
// Class Majesty.BattleManager
class ABattleManager : public AAcqManagerBase
{
public:
	enum class EBATTLE_ENCOUNT_TYPE              M_eBattleMode;                                     // 0x230(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsViewerMode;                                   // 0x231(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F77[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nBattleTurnCount;                                // 0x234(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nEnemyBreakCount;                                // 0x238(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bUsedRepeatAbility;                              // 0x23C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F79[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRareEnemyParam                       M_cRareCatlinParam;                                // 0x240(0x14)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRareEnemyParam                       M_cRareOctlinParam;                                // 0x254(0x14)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsWaterSideMode;                                // 0x268(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nBattleOrderCount;                               // 0x26C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nBattleOrderCountMax;                            // 0x270(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bUseSubPartyBattle;                              // 0x274(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          M_acBattleCharacter;                               // 0x278(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acBattlePlayer;                                  // 0x288(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acBattleEnemy;                                   // 0x298(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acBattleSupporter;                               // 0x2A8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acSubBattlePlayer;                               // 0x2B8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acSubBattleSupporter;                            // 0x2C8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bEnableSyncAnimationCharacter;                   // 0x2D8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  M_cSyncAnimationCharacter_Parent;                  // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acSyncAnimationCharacter_Childs;                 // 0x2E8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class ABattleCharacterBase*                  M_cPrevNoticeCharacter_Pinch;                      // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleCharacterBase*                  M_cPrevNoticeCharacter_JustBreak;                  // 0x300(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acReflectionEnforcerList;                        // 0x308(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class ABattleCamera*                         M_cBattleCamera;                                   // 0x318(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleSequenceDirector*               M_cBattleDirector;                                 // 0x320(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bExecutedReturnDragInEffect_Sea;                 // 0x328(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 M_abDragInIndex;                                   // 0x330(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<int32, class UTexture2D*>               M_acPlayerIconTexture;                             // 0x340(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FBattleVoiceSetList> M_acBattleVoiceSetList;                            // 0x390(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBattleAdditiveOrderData              M_cCurrentAdditiveOrderData;                       // 0x3E0(0x38)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bExecSessionAbility;                             // 0x418(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F86[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActionCommandBase*                    M_cCurrentActionCommand;                           // 0x420(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelSequence*                        M_cBattleEventSequence;                            // 0x428(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsBattleEvent;                                  // 0x430(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bReadyBattleEvent;                               // 0x431(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bExecBattleEvent;                                // 0x432(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bExecBattleStartDash;                            // 0x433(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F87[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCommandMenuActor*               M_cBattleCommandMenuActor;                         // 0x438(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          M_acUsedOnceMonsterList;                           // 0x440(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          M_acUsedAwakingMonsterList;                        // 0x450(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsAutoTameMonster;                              // 0x460(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F88[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  M_cAutoTameTarget;                                 // 0x468(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleActionOrder*                    M_cBattleActionOrder;                              // 0x470(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ABattleCharacterBase*>          M_acFirstActionCharacter;                          // 0x478(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsFirstActionCharacter;                         // 0x488(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bExecFirstActionTurn;                            // 0x489(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F89[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  M_cActiveCharacter;                                // 0x490(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleCharacterBase*                  M_cActionCharacter;                                // 0x498(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleCharacterBase*                  M_cAdditiveCharacter;                              // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FActionOrderData                      M_cCurrentOrderData;                               // 0x4A8(0x40)(BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        M_nTotalRewardMoney;                               // 0x4E8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nTotalRewardExp;                                 // 0x4EC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nTotalRewardJP;                                  // 0x4F0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nRewardLuckyMoney;                               // 0x4F4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nRewardLuckyExp;                                 // 0x4F8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nRewardLuckyJP;                                  // 0x4FC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fMoneyRatioByAbility;                            // 0x500(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fExpRatioByAbility;                              // 0x504(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fJPRatioByAbility;                               // 0x508(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fMoneyRatioByEquipment;                          // 0x50C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fExpRatioByEquipment;                            // 0x510(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fJPRatioByEquipment;                             // 0x514(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fMoneyRatioBySupport;                            // 0x518(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fExpRatioBySupport;                              // 0x51C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fJPRatioBySupport;                               // 0x520(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fExpRatioBySupportInNight;                       // 0x524(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fJPRatioBySupportInNight;                        // 0x528(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bOverrideBattleSpeed;                            // 0x52C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bAllowChangeBattleSpeed;                         // 0x52D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bMainPartyIsFrontMember;                         // 0x52E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bOnePartyDead;                                   // 0x52F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bExecChangePartySequencer;                       // 0x530(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nSettledPlayerNum;                               // 0x534(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FWeaponTexutreUnloadManage            M_WeaponUnloadManage;                              // 0x538(0x28)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F98[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bDebugRelaseWeaponTexture;                       // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F99[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABattleManager* GetDefaultObj();

	void UpdateBattleNumberUI();
	bool UpdateBattleFieldDisease();
	bool SwapBattlePlayerForEightBattle();
	void StartBattleRequest();
	void SetUsedRepeatAbility(bool bEnable);
	bool SetupAutoTameMonster(class ABattleCharacterBase* CTarget);
	void SetUnloadWeaponGCType(enum class EWEAPON_UNLOAD_GC_TYPE EType);
	void SetUnloadWeaponCntMax(uint8 UMax);
	void SetSyncAnimationCharacterParent(class ABattleCharacterBase* CCharacter);
	void SetPrevNoticeCharacter_Pinch(class ABattleCharacterBase* CPinchCharacter);
	void SetPrevNoticeCharacter_JustBreak(class ABattleCharacterBase* CJustBreakCharacter);
	bool SetMoneyRatioBySupport(float FRatio);
	bool SetMoneyRatioByEquipment(float FRatio);
	bool SetMoneyRatioByAbility(float FRatio);
	bool SetJPRatioBySupportInNight(float FRatio);
	bool SetJPRatioBySupport(float FRatio);
	bool SetJPRatioByEquipment(float FRatio);
	bool SetJPRatioByAbility(float FRatio);
	bool SetExpRatioBySupportInNight(float FRatio);
	bool SetExpRatioBySupport(float FRatio);
	bool SetExpRatioByEquipment(float FRatio);
	bool SetExpRatioByAbility(float FRatio);
	void SetExecSessionAbilityForTutorial(bool bEnable);
	void SetEnableRelaseWeaponTexture(bool bRelease);
	void SetDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType, bool bValue);
	void SetDebugParameter(enum class EBATTLE_DEBUG_SWITCH EType, int32 NValue);
	bool SetBattleStartType(enum class EBATTLE_START_TYPE StartType, bool WaterSide);
	void SearchPlayerCharacter(enum class EPlayableCharacterID ECharaID, class ABattleCharacterBase** PlayerCharacter, bool* bFindCharacter, bool* bCharacterAlive);
	void SearchEnemyCharacter(class FName StrEnemyID, class ABattleCharacterBase** EnemyCharacter, bool* bFindCharacter, bool* bCharacterAlive);
	bool SearchBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType);
	void ReturnDragInIndex(int32 NIndex);
	void ResetDragInIndex();
	bool RequestPlayActionWaitTime(float FWaitTime);
	void RequestLoadForEndroll(enum class EEndRollSegmentSet ESegment);
	void RequestLoadBattleEvent(TSoftObjectPtr<class ULevelSequence>& CEventSequence);
	bool RequestChangeBattleParty();
	void RequestBattleEvent(TSoftObjectPtr<class ULevelSequence>& EventSequence, class ABattleCharacterBase* MainActor, class ABattleCharacterBase* EventEnforcer);
	bool RemoveBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType);
	void ReleasePotentialityAction();
	void PlayReturnDragInEffect(class ABattleCharacterBase* CReturnCharacter, enum class EBATTLE_DRAG_IN_TYPE EDragInType);
	void OpenMultiLineInfomation(class FText& StrFirstText, class FText& StrSecondText);
	void OpenChainInfomation(TArray<class FText>& AstrInfomationText, float FShowTime);
	void OpenActionInfomation(class FText& StrInfomationText);
	bool IsItemCommandSeal();
	bool IsItemCommandEnable();
	bool IsGuardCommandEnable();
	bool IsFirstActionTurn();
	bool IsExecBattleStartDash();
	bool IsEscapeCommandEnable();
	bool IsEndrollReplayMode();
	bool IsEnableRelaseWeaponTexture();
	bool IsEightBattleMode();
	void IsChangeBattlePartyEnable(bool* bEnable, bool* bExecutable);
	bool IsBoostCommandEnable();
	bool IsBattleSpeedOverride();
	bool IsAutoTameMonster();
	bool IsAllowChangeBattleSpeed();
	bool InitUsedInvadeMonster();
	void InitSyncAnimationCharacter();
	void InitPrevNoticeCharacter();
	void InitializeResultValue();
	void InitBattleOrderCount();
	bool InitBattleFirstActionCharacter();
	bool GetWaterSideMode();
	bool GetUsedRepeatAbility();
	bool GetSyncAnimationCharacter(class ABattleCharacterBase** CParent, TArray<class ABattleCharacterBase*>* AcChilds);
	TArray<class ABattleCharacterBase*> GetSubBattlePlayerList();
	int32 GetSettledPlayerNum();
	float GetResultMoneyRatio();
	float GetResultJPRatio();
	float GetResultExpRatio();
	TArray<class ABattleCharacterBase*> GetRespawnableEnemyList(bool* bFindEnemy);
	void GetRespawnableEnemy(int32 NIndex, class ABattleCharacterBase** CRespawnableEnemy, bool* bFindEnemy);
	bool GetPrevNoticeCharacter_Pinch(class ABattleCharacterBase** CPinchCharacter);
	bool GetPrevNoticeCharacter_JustBreak(class ABattleCharacterBase** CJustBreakCharacter);
	bool GetOnePartyDead();
	void GetMapObjectRoot(class AActor** CMapObjectRoot);
	bool GetMainPartyIsFrontMember();
	class ABattleManager* GetInstance();
	void GetEventFlag(class FName FlagName, bool* Value);
	class FName GetEnemyGroupID();
	int32 GetEnemyBreakCount();
	int32 GetDebugParameter(enum class EBATTLE_DEBUG_SWITCH EType);
	class UDebugBattleLogComponent* GetDebugLogComponent();
	class UDebugBattleManagerComponent* GetDebugComponent();
	bool GetCurrentAdditiveOrderData(struct FBattleAdditiveOrderData* CAdditiveOrderData);
	void GetCurrentActionOrderData(struct FActionOrderData* CActionData);
	bool GetCurrentActionCommand(class AActionCommandBase** CActionCommand);
	class ABattleCommandMenuActor* GetCommandMenuActor();
	bool GetBattleVoiceSetList(class FName StrCharacterID, TArray<class FName>* AstrBattleVoiceLabel);
	bool GetBattleViewerMode();
	int32 GetBattleTurnCount();
	TArray<class ABattleCharacterBase*> GetBattleSupporterList();
	enum class EBATTLE_START_TYPE GetBattleStartType();
	void GetBattleSequencerObject_SteamEffect(class AEmitter** CSteamAuraA, class AEmitter** CSteamFieldA);
	void GetBattleSequencerObject_AntlionSand(class AStaticMeshActor** CAntlionSandA, class AStaticMeshActor** CAntlionSandB);
	class ABattleSequenceDirector* GetBattleSequenceDirector();
	void GetBattlePlayerListForSequencer(TArray<class ABattleCharacterBase*>* AcFrontParty, TArray<class ABattleCharacterBase*>* AcBackParty);
	TArray<class ABattleCharacterBase*> GetBattlePlayerListForEightBattle();
	TArray<class ABattleCharacterBase*> GetBattlePlayerList();
	void GetBattleOrderCount(int32* NOrderCount, int32* NOrderCountMax);
	enum class EBATTLE_ENCOUNT_TYPE GetBattleMode();
	bool GetBattleInfomation(class FName* StrEnemyGroupID, bool* bBossBattle, bool* bFieldCommandBattle);
	TArray<class ABattleCharacterBase*> GetBattleEnemyList();
	TArray<class ABattleCharacterBase*> GetBattleCharacterList();
	class ABattleCamera* GetBattleCamera();
	void GetBattleBoostMode(bool* bBoostMode);
	void GetBattleActiveCharacter(class ABattleCharacterBase** CActiveCharacter);
	class ABattleActionOrder* GetBattleActionOrder();
	bool GetAutoTameTarget(class ABattleCharacterBase** CAutoTameTarget);
	int32 GetAddDragInIndex();
	void FinishChangePartySequencer();
	void FinishBattleStartDash();
	void FinishBattleEvent();
	bool ExecInitializeEnemyResourceList();
	void ExecDebugPlayBattleEvent(TSoftObjectPtr<class ULevelSequence>& CEventSequence, class ABattleCharacterBase* CMainActor, class ABattleCharacterBase* CEventEnforcer);
	bool ExecDebugPlayAbility(class FName StrAbilityLabel, int32 NBoostLevel, bool bPlayerSide);
	bool ExecChangeBattleSpeed();
	void ExecBattleSuspend();
	bool ExecBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType);
	bool ExecActionOrderBlind(bool bEnable, bool bPlayerOnly);
	bool Debug_IsReadyBattleSuspend();
	bool CreateStationaryBattleUI();
	void CloseActionInfomation();
	bool CheckUsedOnceMonster(class FName StrCheckMonsterLabel);
	bool CheckUsedAwakingMonster(class FName StrCheckMonsterLabel);
	bool CheckSupportAilmentInParty(enum class ESUPPORT_AILMENT_TYPE EAilmentType, struct FSupportAbilityDataBase* CAbilityData);
	bool CheckDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType);
	bool CheckBattleVictory();
	bool CheckBattleTutorial_OpenCommandMenu();
	bool CheckBattlePlayerInMainParty(class ABattleCharacterBase* CTargetPlayer);
	void CheckBattleDefeat(bool* bBattleDefeat, bool* bEightBattleChange);
	void ChangeBattlePartyForAbility();
	void ApplyAllDebugSwitch();
	bool AddUsedOnceMonster(class FName StrUsedMonsterLabel);
	bool AddUsedAwakingMonster(class FName StrUsedMonsterLabel);
	void AddUnloadWeaponTextureLabel(TArray<class FName>& WeaponList);
	void AddSyncAnimationCharacterChilds(class ABattleCharacterBase* CCharacter);
	bool AddRewardLuckyMoney(int32 NValue);
	bool AddRewardLuckyJP(int32 NValue);
	bool AddRewardLuckyExp(int32 NValue);
	void AddReflectionEnforcerList(class ABattleCharacterBase* CCharacter);
	void AddloadWeaponTextureLabel(TArray<class FName>& WeaponList);
	void AddEnemyBreakCount();
	void AddBattleTurnCount();
	void AddBattleOrderCount();
	void AddBattleLogForOneLine(const class FString& StrBattleLog);
	void AddBattleLog(const struct FDebugBattleLog& CBattleLog);
	bool AddBattleFirstActionCharacter(class ABattleCharacterBase* CActionCharacter);
	bool AddBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType, int32 InvocationValue, int32 InvocationTurn, int32 DiseaseLevel, class ABattleCharacterBase* Enforcer);
	bool AddAdditiveOrderForSong(class ABattleCharacterBase* Enforcer, class FName AbilityName);
	bool AddAdditiveOrderForSignOfBoost(class ABattleCharacterBase* Enforcer, class FName AbilityName);
	bool AddAdditiveOrderForReraise(class ABattleCharacterBase* Enforcer);
	bool AddAdditiveOrderForRepeat(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForReflection(class ABattleCharacterBase* Enforcer, class FName StrAbilityName, class FName StrAilmentName, int32 NInvocationValue, enum class EATTRIBUTE_TYPE EAttribute, class ABattleCharacterBase* CTargetList);
	bool AddAdditiveOrderForLastAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForFirstAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForEnchant(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForCounter(class ABattleCharacterBase* Enforcer, class FName AbilityName, bool bOnDead, bool bCounterOnce, class ABattleCharacterBase* CTargetList);
	bool AddAdditiveOrderForChaseAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForAutoTameMonster(class ABattleCharacterBase* CEnforcer, class ABattleCharacterBase* CTarget);
};

// 0x28 (0x50 - 0x28)
// Class Majesty.StateDataBase
class UStateDataBase : public UObject
{
public:
	enum class EMAINSEQ_TYPE                     M_SeqType;                                         // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMAINSEQ_TYPE                     M_BeforeSeqType;                                   // 0x29(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMAINSEQ_TYPE                     M_NextSeqType;                                     // 0x2A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EREQUEST_TYPE                     M_ExecRequestType;                                 // 0x2B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EREQUEST_TYPE>             M_RequestList;                                     // 0x30(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMainSequenceStateParam               M_Param;                                           // 0x40(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStateDataBase* GetDefaultObj();

	bool UpdateState();
	void SetStateParam(const struct FMainSequenceStateParam& Param);
	enum class EPRIORITY GetPriority();
	bool ChangeState(enum class EMAINSEQ_TYPE Type);
};

// 0x8 (0x58 - 0x50)
// Class Majesty.BattleReadyStateData
class UBattleReadyStateData : public UStateDataBase
{
public:
	uint8                                        Pad_FAA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattleReadyStateData* GetDefaultObj();

};

// 0x170 (0x390 - 0x220)
// Class Majesty.BattleSequenceDirector
class ABattleSequenceDirector : public AActor
{
public:
	TArray<class ALevelSequenceActor*>           M_acManualUpdateSequencerList;                     // 0x220(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cBoostSequenceActor;                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cAbilityCameraSequenceActor;                     // 0x238(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cWeatherSequenceActor;                           // 0x240(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cEncountSequenceActor;                           // 0x248(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cBreakSequenceActor;                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleAbilitySequenceActor*           M_cActionCommandSequenceActor;                     // 0x258(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ABattleAbilitySequenceActor*>   M_acSubActionCommandSequenceActor;                 // 0x260(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cBattleEventSequenceActor;                       // 0x270(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cBattleDashSequenceActor;                        // 0x278(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cBattleResultSequenceActor;                      // 0x280(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_cBattlePartyChangeSequenceActor;                 // 0x288(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleCamera*                         M_cBattleCamera;                                   // 0x290(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APostProcessVolume*                    M_cPostProcessVolume;                              // 0x298(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nBoostLevel;                                     // 0x2A0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1017[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                M_cBattleDustEffectActor;                          // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleSequenceEmitter*                M_cBoostEffectLv1Actor;                            // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleSequenceEmitter*                M_cBoostEffectLv2Actor;                            // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleSequenceEmitter*                M_cBoostEffectLv3Actor;                            // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleSequencePointLight*             M_cPointLightActor;                                // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1018[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBATTLE_CAMERA_SEQUENCE           M_eAbilityCameraSlideSequence;                     // 0x2E8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1019[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            M_cAbilityCameraSlideStartFrame;                   // 0x2EC(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                            M_cAbilityCameraSlideEndFrame;                     // 0x2F4(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBATTLE_CAMERA_SEQUENCE           M_eAbilityCameraBackSequence;                      // 0x2FC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            M_cAbilityCameraBackStartFrame;                    // 0x300(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                            M_cAbilityCameraBackEndFrame;                      // 0x308(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActionCommandBase*                    M_cActionCommand;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SUB_ACTION_COMMAND_MAX;                            // 0x318(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nSubActionCommandCounter;                        // 0x31C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActionCommandBase*>            M_acSubActionCommand;                              // 0x320(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        ABILITY_POINT_LIGHT_MAX;                           // 0x330(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleSequencePointLight*>     M_acAbilityPointLightActor;                        // 0x338(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AActor*                                M_cPartyAreaMounter;                               // 0x348(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                M_cEnemyAreaMounter;                               // 0x350(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ABattleSequenceEmitter*>        M_acAbilityEffectList;                             // 0x358(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleSequenceEmitter*>        M_acAbilityHitEffectList;                          // 0x368(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ABattleSequenceEmitter*>        M_acSupportRotationEffectList;                     // 0x378(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UBalloonBase*                          M_cEventBalloon;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ABattleSequenceDirector* GetDefaultObj();

	void WaitTutorialFinish();
	void WaitTalkBalloonFinish();
	void WaitReturnCaptureCommand();
	void WaitResultUIFinishCommand();
	void WaitResultUIFinish();
	void WaitActionCommandDirector();
	void UpdateAbilityCameraSlideSegment(class ULevelSequencePlayer* CPlayer, float FSlideRate);
	void UpdateAbilityCameraBackSegment(class ULevelSequencePlayer* CPlayer, float FBackRate);
	void UnRegisterSequenceUpdated(class ULevelSequencePlayer* CPlayer);
	void UnRegisterAbilitySequenceUpdated(class ABattleAbilitySequenceActor* CAbilitySequence);
	void TickManualSequencerUpdate(float FDeltaSeconds);
	bool SuspendBoostSequencer(int32 NBoostLevel);
	void SuspendActionCommand();
	void StartBattleFade();
	class UParticleSystemComponent* SpawnBoostEffect(int32 NBoostLevel);
	void SetWeatherSequencerRestoreFlag(bool bRestoreState);
	bool SetSequenceTrackDisable(class ALevelSequenceActor* CSequenceActor, const struct FMovieSceneObjectBindingID& CTrackID, bool bDisable);
	void SetBattleWipeWhiteOutFlag(bool bEnable);
	void SetBattleEnemyVisibility(bool bVisible);
	void SetAdvancedAbility(enum class EPlayableCharacterID CharacterID, int32 NIndex, bool bEnable);
	void ReturnCaptureCommand();
	void ResumeActionCommandDirector();
	bool ResetActionCommandDirector(class ABattleAbilitySequenceActor* CSequenceActor, bool bIsSubCommand);
	void RemoveBoostEffect();
	void ReleasePotentialityAction(enum class EPlayableCharacterID CharacterID);
	void RegisterSequenceUpdated(class ULevelSequencePlayer* CPlayer, FDelegateProperty_ CDelegate);
	void RegisterAbilitySequenceUpdated(class ABattleAbilitySequenceActor* CAbilitySequence);
	void PlayVibrationCommand(class FName VibrationID, enum class EVibrationPower Power);
	void PlaySECommand(class FName SEID);
	void PlayActionCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID);
	void OpenTutorialCommand(enum class ETUTORIAL_TYPE ETutorialType, bool bForcedDisplay);
	void OpenTalkCommand(class FName TalkTextID, const struct FVector2D& Offset, bool WaitFinish);
	void OpenResultUICommand();
	void OpenActionInfoFromAdvancedAbility(class FName TextID, enum class EPlayableCharacterID CharaID, int32 AbilityIndex);
	void OpenActionInfoForEightBattle(class FName TextID);
	void OpenActionInfo(class FName TextID);
	void NotifyCameraCut(class ACineCameraActor* CTargetCamera);
	void InterpolationResultCamera(float FRatio);
	void InterpolationAbilityCamera(float FRatio);
	void InstantDeath_EnemyAll();
	class ULevelSequence* GetWeatherSequence(enum class ETimeZoneType ETimeZone, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	class FName GetPlayerLabelByIntID(int32 NPlayerID);
	class ULevelSequence* GetPartyChangeSequence(bool bFrontToBack);
	class ULevelSequenceDirector* GetLevelSequenceDirector(class ULevelSequencePlayer* CPlayer);
	class ULevelSequence* GetEscapeDashSequence(bool bSuccess);
	class ULevelSequence* GetEncountSequence(enum class EBATTLE_CAMERA_TYPE ECameraType);
	class ULevelSequence* GetBreakSequence(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType);
	class ULevelSequence* GetBoostSequence(int32 NBoostLevel, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	class ULevelSequence* GetBattleStartDashSequence(enum class EBATTLE_START_DASH_TYPE EStartDashType);
	class ULevelSequence* GetBattleResultSequence(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront);
	bool GetAbilityCameraSlideSegment(class ULevelSequencePlayer* CPlayer, float* FLength);
	class ULevelSequence* GetAbilityCameraSequence(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	bool GetAbilityCameraBackSegment(class ULevelSequencePlayer* CPlayer, float* FLength);
	void FixBattleCameraCommand();
	void FinishSubActionCommandDirector();
	void FinishResultDash();
	void FinishPartyChange();
	void FinishEscapeDash();
	void FinishEncountCamera();
	void FinishBreaktCamera();
	void FinishBoostShutDown();
	void FinishBattleStartDash();
	void FinishBattleResult();
	void FinishBattleEvent();
	void FinishActionCommandDirector();
	void FinishAbilityCamera();
	bool FindTrackAttachInfoByTag(class ALevelSequenceActor* CSequenceActor, class FName StrTag, enum class EBATTLE_EFFECT_ATTACH_TYPE* EAttachType);
	bool FindEventActorTrackByTag(class ALevelSequenceActor* CSequenceActor, class FName StrTag);
	bool FindEmitterTemplateByTag(class ALevelSequenceActor* CSequenceActor, class FName StrTag, TArray<class UParticleSystem*>* AcEmitterTemplate, TArray<struct FMovieSceneObjectBindingID>* AcBindingID);
	bool ExecWeatherSequencer(enum class ETimeZoneType ETimeZone, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	void ExecWeatherLoop();
	void ExecSubActionCommandDirector(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence);
	bool ExecResultDashSequencer();
	void ExecResultDash();
	void ExecPotentialityAction(class ABattleCharacterBase* ActionCharacter);
	bool ExecPartyChangeSequencer(bool bFrontToBack);
	void ExecPartyChange(bool bFrontToBack);
	void ExecNextBoostEvent();
	void ExecForceTickForRigRail(class ACameraRig_Rail* CTargetCameraRig);
	void ExecForceTickForCineCamera(class ACineCameraActor* CTargetCamera);
	bool ExecEscapeDashSequencer(bool bSuccess);
	void ExecEscapeDash(bool bSuccess);
	bool ExecEncountCameraSequencer(enum class EBATTLE_CAMERA_TYPE ECameraType);
	void ExecEncountCamera(enum class EBATTLE_CAMERA_TYPE ECameraType);
	bool ExecBreakCameraSequencer(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType);
	void ExecBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType);
	void ExecBoostStart(int32 NBoostLevel);
	void ExecBoostShutDown(bool bWithWeather);
	bool ExecBoostSequencer(int32 NBoostLevel, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	void ExecBoostLoop();
	void ExecBattleSuspendCommand();
	bool ExecBattleStartDashSequencer(enum class EBATTLE_START_DASH_TYPE EStartDashType);
	void ExecBattleStartDash(enum class EBATTLE_START_DASH_TYPE EStartDashType);
	bool ExecBattleResultSequencer(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront);
	void ExecBattleResult(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront);
	bool ExecBattleEventSequencer(class ULevelSequence* CExecSequence, class ABattleCharacterBase* CEventActor, enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType);
	void ExecBattleEvent(class ULevelSequence* CExecSequence, class ABattleCharacterBase* CEventActor, enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType);
	bool ExecActionCommandSequencer(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence, class ABattleAbilitySequenceActor* CSequenceActor, bool bIsSubCommand);
	void ExecActionCommandDirector(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence);
	bool ExecAbilityCameraSequencer(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	void ExecAbilityCamera(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	void EnableAbilityHitEffect();
	class ULevelSequencePlayer* CreateAbilitySequencePlayer(class UObject* WorldContextObject, class ULevelSequence* CLevelSequence, const struct FMovieSceneSequencePlaybackSettings& CSettings, class ABattleAbilitySequenceActor** OutActor);
	TArray<class ABattleSequenceEmitter*> CreateAbilityEffect(class UParticleSystem* CTemplate, enum class EBATTLE_EFFECT_ATTACH_TYPE EAttachType, class AActionCommandBase* CActionCommand, bool bGroundEffect, bool bReviveEffect, bool bAttachSocket);
	void CloseTalkCommand();
	void CloseActionInfo();
	bool CheckTrackHaveSpecifiedTag(class ALevelSequenceActor* CSequenceActor, const struct FMovieSceneObjectBindingID& CTrackID, class FName StrCheckTag);
	bool CheckSequencerHaveSpecifiedTag(class ALevelSequenceActor* CSequenceActor, class FName StrCheckTag);
	void ChangeBoostLevelCommand(class ABattleCharacterBase* ActionCharacter, int32 BoostLevel);
	void ChangeBoostLevel(int32 NBoostLevel, bool bAddLevel);
};

// 0x20 (0x290 - 0x270)
// Class Majesty.BattleSequenceEmitter
class ABattleSequenceEmitter : public AEmitter
{
public:
	class UParticleSystemComponent*              M_cOriginalEffect;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bEmitterTrigger;                                 // 0x278(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bEnableAttachTarget;                             // 0x279(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_102D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnforcerOffsetComponent*              M_cEnforcerOffsetComponent;                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleCharacterBase*                  M_cAttachBattleCharacter;                          // 0x288(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ABattleSequenceEmitter* GetDefaultObj();

	void UpdateBattleEmitterVisibility(bool bVisible);
	void SetParticleSystemTemplate(class UParticleSystem* CTemplate);
	void SetParticleSystemComponent(class UParticleSystemComponent* CComponent);
	void SetEnableAttachTarget(bool bEnable);
	void SetEmitterTrigger(bool bTrigger);
	void SetAttachBattleCharacter(class ABattleCharacterBase* CCharacter);
	void ReleaseParticleSystemComponent();
	bool IsEnableAttachTarget();
	bool IsEmitterTrigger();
	class ABattleCharacterBase* GetAttachBattleCharacter();
};

// 0x10 (0x230 - 0x220)
// Class Majesty.BattleSequencePointLight
class ABattleSequencePointLight : public AActor
{
public:
	class UPointLightComponent*                  PointLightComponent;                               // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowResolutionScale;                             // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1032[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABattleSequencePointLight* GetDefaultObj();

	void SetShadowResolutionScale(float FValue);
};

// 0x8 (0x58 - 0x50)
// Class Majesty.BattleStateData
class UBattleStateData : public UStateDataBase
{
public:
	uint8                                        Pad_1035[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattleStateData* GetDefaultObj();

};

// 0xB8 (0x168 - 0xB0)
// Class Majesty.BattleVoiceComponent
class UBattleVoiceComponent : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bReadyBattleVoice;                               // 0xB8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_103C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EBATTLE_VOICE_TYPE, struct FBattleVoiceDataList> M_acBattleVoiceDataList;                           // 0xC0(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FBattleVoiceDataList> M_acAbilityVoiceDataList;                          // 0x110(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bSettledPlayOnce_OnTakeDamage;                   // 0x160(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bEnableDetailLog;                                // 0x161(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_103D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattleVoiceComponent* GetDefaultObj();

	void SetSettledPlayOnce_OnTakeDamage(bool bEnable);
	void ResetVoiceFlagForPreAction();
	bool PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition);
	bool IsReadyBattleVoice();
	bool IsBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType);
	bool InitBattleVoice(class FName StrBattleVoiceID);
	bool GetSettledPlayOnce_OnTakeDamage();
	void GetEventFlag(class FName FlagName, bool* Value);
};

// 0x10 (0x2D0 - 0x2C0)
// Class Majesty.BattleWipeBase
class UBattleWipeBase : public UAcqUserWidget
{
public:
	bool                                         M_bBattleEndWipeOut;                               // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bEnableWhiteOut;                                 // 0x2C1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bExecWipe;                                       // 0x2C2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBATTLE_WIPE_STATE                M_eState;                                          // 0x2C3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bDebugWipeColorEnable;                           // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1044[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                M_DebugWipeColor;                                  // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1045[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattleWipeBase* GetDefaultObj();

	void WipeOutAtBattleStart();
	void WipeOutAtBattleEnd();
	void WipeInAtBattleStart();
	void WipeInAtBattleEnd();
	void SetWhiteOut(bool Enable);
	void SetupDebugWipeColor();
	bool IsReadyAnimation();
	bool IsExecWipe();
	bool IsEnableWhiteOut();
	bool IsBattleEndWipeOut();
	void HideWipeAtBattleEnd_Immediately();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.BitFlagSaveDataUtil
class UBitFlagSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UBitFlagSaveDataUtil* GetDefaultObj();

	bool IsFixedFollowNPC_Placate();
	bool IsFixedFollowNPC_Lure();
	bool IsFixedFollowNPC_Lead();
	bool IsFixedFollowNPC_Hire();
};

// 0x8 (0x260 - 0x258)
// Class Majesty.BlockingVolumeFootStep
class ABlockingVolumeFootStep : public AVolume
{
public:
	enum class EPhysicalSurface                  M_eFootStepType;                                   // 0x258(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABlockingVolumeFootStep* GetDefaultObj();

};

// 0x58 (0x3B0 - 0x358)
// Class Majesty.BusinessWithNpcNotificationBase
class UBusinessWithNpcNotificationBase : public UKSUserWidgetBase
{
public:
	bool                                         M_bIsOpening;                                      // 0x358(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1053[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpActMerchantResult                  M_SpActMerchantResult;                             // 0x360(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBusinessWithNpcNotificationBase* GetDefaultObj();

	void OpenNotificationAnimal(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
	void OpenNotification(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
	void CloseNotification(bool bIsFast);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ButtonTextDataTable
class UButtonTextDataTable : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UButtonTextDataTable* GetDefaultObj();

	bool GetButtonTextTableRowData(enum class EBPFuncReturnCode* ReturnCode, struct FButtonTextData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x18 (0x238 - 0x220)
// Class Majesty.CalcBillboard
class ACalcBillboard : public AActor
{
public:
	uint8                                        Pad_1057[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      M_pCineCamComp;                                    // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1058[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACalcBillboard* GetDefaultObj();

};

// 0x10 (0x238 - 0x228)
// Class Majesty.KSTriggerBase
class AKSTriggerBase : public ATriggerBase
{
public:
	enum class EKSTriggerType                    M_eTriggerType;                                    // 0x228(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1067[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nProcessOrder;                                   // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1068[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSTriggerBase* GetDefaultObj();

	void Update(float DeltaSeconds);
	void SetDebugTextColor(const struct FLinearColor& Color);
	void SetDebugText(const class FString& DebugStr);
	void Reset();
	void Initialize();
	enum class EKSTriggerType GetTriggerType();
	bool CanActivateTrigger();
};

// 0x0 (0x238 - 0x238)
// Class Majesty.MJBoxTrigger
class AMJBoxTrigger : public AKSTriggerBase
{
public:

	static class UClass* StaticClass();
	static class AMJBoxTrigger* GetDefaultObj();

};

// 0x30 (0x268 - 0x238)
// Class Majesty.CameraLockTrigger
class ACameraLockTrigger : public AMJBoxTrigger
{
public:
	bool                                         M_bLock;                                           // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUnlock;                                         // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bLockX;                                          // 0x23A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bLockY;                                          // 0x23B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bLockZ;                                          // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1073[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               M_LimitLock;                                       // 0x240(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_LimitLockFar;                                    // 0x24C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_LimitUnlock;                                     // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1075[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACameraLockTrigger* GetDefaultObj();

	void SetLimitPosition(struct FVector& LimitLock, struct FVector& LimitLockFar, struct FVector& LimitUnlock);
	class UBoxComponent* GetCollision();
	struct FVector ClamptLockPositionInRange(struct FVector& LockPosition);
};

// 0x8 (0x228 - 0x220)
// Class Majesty.CameraLockTriggerHolder
class ACameraLockTriggerHolder : public AActor
{
public:
	uint8                                        Pad_1078[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACameraLockTriggerHolder* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class Majesty.CanoeDockTrigger
class ACanoeDockTrigger : public AMJBoxTrigger
{
public:

	static class UClass* StaticClass();
	static class ACanoeDockTrigger* GetDefaultObj();

};

// 0x80 (0x540 - 0x4C0)
// Class Majesty.CharacterFlipbookComponent
class UCharacterFlipbookComponent : public UPaperFlipbookComponent
{
public:
	uint8                                        Pad_1088[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UMaterialInstanceDynamic*> M_FlipbookMaterialList;                            // 0x4E8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1089[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCharacterFlipbookComponent* GetDefaultObj();

	void SetFlipbookVisibility(bool bVisibility);
	void SetFlipbookOffset(struct FVector& Offset);
	void SetCharacterDir(enum class EKSCharacterDir Dir);
	void SetCharacterActionLabel(class FName CharaActionLabel);
	void PlayCurrentAnimation();
	void PlayAnimation(enum class EKSCharacterAction EAction);
	bool IsFlipbookVisibile();
	class UMaterialInstanceDynamic* GetCurrentFlipbookMaterial();
	class UMaterialInstanceDynamic* GetCachedFlipbookMaterial(class FName FlipbookName);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharacterGrowTableUtility
class UCharacterGrowTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UCharacterGrowTableUtility* GetDefaultObj();

	int32 GetTotalExpFromLevel(int32 Level);
	bool GetCharacterGrowTableRowDataByLevel(enum class EBPFuncReturnCode* ReturnCode, struct FCharacterGrowData* OutData, int32 Level, bool LogEnable);
	bool GetCharacterGrowTableRowData(enum class EBPFuncReturnCode* ReturnCode, struct FCharacterGrowData* OutData, class FName TargetLabel, bool LogEnable);
	int32 CalcLevelFromTotalExp(int32 Exp);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharacterParamUtility
class UCharacterParamUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCharacterParamUtility* GetDefaultObj();

	struct FCharacterParam Sub_CharacterParam_CharacterParam(const struct FCharacterParam& A, const struct FCharacterParam& B);
	void SetCharacterParamProperty(struct FCharacterParam& CharaParam, enum class ECHARACTER_PARAM_TYPE ParamType, int32 Value);
	struct FCharacterParam Multiply_CharacterParam_RevisionParam(const struct FCharacterParam& Base, const struct FCharacterParam& Revision);
	struct FCharacterParam Multiply_CharacterParam_Float_ExceptMinus(const struct FCharacterParam& Base, float Revision);
	struct FCharacterParam Multiply_CharacterParam_Float(const struct FCharacterParam& Base, float Revision);
	void MinusParamFromBool(const struct FCharacterParam& Base, TArray<bool>* RetList);
	struct FCharacterParam InversionMinusParameter(const struct FCharacterParam& Base);
	int32 GetCharacterParamProperty(struct FCharacterParam& CharaParam, enum class ECHARACTER_PARAM_TYPE ParamType);
	void Debug_OutputCharacterParam(struct FCharacterParam& Val);
	class FString Debug_MakeCharacterParamString(struct FCharacterParam& Val);
	struct FCharacterParam Add_CharacterParam_CharacterParam(const struct FCharacterParam& A, const struct FCharacterParam& B);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharacterResource_BattleReductionDataUtility
class UCharacterResource_BattleReductionDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UCharacterResource_BattleReductionDataUtility* GetDefaultObj();

	bool GetCharRes_BattleReductionRowData(struct FCharResource_BattleReductionTable* OutData, class FName TargetLabel, bool EnableLog);
	bool GetCharRes_BattleReductionLabelNames(TArray<class FName>* OutData);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharacterResourceDataUtility
class UCharacterResourceDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UCharacterResourceDataUtility* GetDefaultObj();

	bool GetCharacterResourceRowData(struct FCharacterResourceData* OutData, class FName TargetLabel, bool EnableLog);
	bool GetCharacterResourceLabelNames(TArray<class FName>* OutData);
};

// 0x90 (0x2C0 - 0x230)
// Class Majesty.CharacterResourceManager
class ACharacterResourceManager : public AAcqManagerBase
{
public:
	TArray<class ULoadCharaAssetQueue*>          M_LoadQueue;                                       // 0x230(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10B2[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FLoadedObject>      M_LoadedFlipbookResource;                          // 0x260(0x50)(NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       M_SubPartyMemberResource;                          // 0x2B0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACharacterResourceManager* GetDefaultObj();

	void RequestUnLoadCharactersAsset(const TArray<class FName>& CharaResourceIds);
	bool RequestLoadSubPartyCharactersAsset();
	bool RequestLoadCharactersAsset(const TArray<class FName>& CharaResourceIds);
	bool RequestLoadCharactersActionAsset(TArray<struct FSimpleActionLoad>& CharaResourceIds);
	bool RequestLoadCharacterAssetSync_SelectAction(class FName CharaResLabel, FDelegateProperty_ LoadedCallback, const TArray<enum class EKSCharacterAction>& ActionLabels);
	bool RequestLoadCharacterAssetSync(class FName CharaResLabel, FDelegateProperty_ LoadedCallback);
	bool RequestLoadCharacterAsset(class FName CharaResLabel, FDelegateProperty_ LoadedCallback, const TArray<enum class EKSCharacterAction>& ActionLabels, bool bBattle);
	bool RefreshLoadCharacters(const TArray<class FName>& NewCharactersResourceId);
	void OnLoadedSubPartyResource(TArray<class UObject*>* LoadedResource);
	void OnLoadedMainPartyResource(TArray<class UObject*>* LoadedResource);
	bool IsLoading();
	void Debug_SetAlwaysEnableTick(bool Enable);
	bool Debug_LoadCharacterAssetSync(const TArray<class FName>& CharacterResourceIds);
	void Debug_GetDebugInfo(class FString* OutDebugInfo);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharacterResourceUtility
class UCharacterResourceUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCharacterResourceUtility* GetDefaultObj();

	void GetNPCResourceLabelFromLevelName(TArray<class FName>* OutData, class FName LevelName);
	void GetCurrentSubPartyResourceLabel(TArray<class FName>* OutData, class UObject* WorldContextObject);
	void GetCurrentPartyResourceLabel(TArray<class FName>* OutData, class UObject* WorldContextObject);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharactersActionTableUtility
class UCharactersActionTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UCharactersActionTableUtility* GetDefaultObj();

	bool GetCharactersActionRowData(struct FCharacterActionResource* OutData, class FName TargetLabel, bool EnableLog);
	bool GetCharactersActionLabels(TArray<class FName>* LabelList);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharacterSaveDataUtil
class UCharacterSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UCharacterSaveDataUtil* GetDefaultObj();

	bool UpdateFollowNpcSupportLimit(enum class EMJFieldCommandType FieldCommandType, int32 SupportLimit);
	void SubPlayerMoney(int32 SubMoney);
	void SetTameMonsterMode(enum class ETameMonsterMode Mode);
	void SetTameMonsterData(int32 Index, const struct FTameMonsterData& NewTameMonster);
	void SetPlayerMoney(int32 Money);
	void SetMyShipCustomFirstChoice(enum class EMYSHIP_CUSTOM_PART Part, enum class EMYSHIP_CUSTOM_TYPE Type);
	void SetMyShipCustom(enum class EMYSHIP_CUSTOM_PART Part, enum class EMYSHIP_CUSTOM_TYPE Type);
	void SetLegendMonsterData(int32 Index, const struct FTameMonsterData& NewLegendMonster);
	void SetHunterPartner(enum class EHUNTER_PARTNER_ID PartnerID);
	bool SetFollowWaitingNpc(int32 NPCID, int32 SupportLimitCount, enum class EMJFieldCommandType FieldCommandType, enum class EPlayableCharacterID CharaID);
	bool SetFollowNpc(int32 NPCID, int32 SupportLimitCount, enum class EMJFieldCommandType FieldCommandType, enum class EPlayableCharacterID CharaID);
	void SetFirstEquipment(enum class EPlayableCharacterID PlayerCharaId);
	void SetCharacterRawMP(int32 PlayerCharaId, int32 MP);
	void SetCharacterRawHP(int32 PlayerCharaId, int32 HP);
	void SetCharacterLevelAndExp(int32 PlayerCharaId, int32 Level, int32 Exp);
	void SetCharacterJobPoint(int32 PlayerCharaId, int32 JP);
	void SetCharacterData(int32 CharacterIndex, struct FSavePlayerCharacterData& CharacterData);
	void SetBackpackItemList(TArray<struct FSaveBackPackItem>& ItemList);
	void SetAdvancedAbility(int32 CharacterID, int32 AbilityIndex, bool IsLearn);
	void SetAbility(int32 CharacterID, int32 JobID, int32 AbilityIndex, bool IsLearn);
	void MergePlayerMoney(int32 ReminiMoney);
	bool IsLearnAdvancedAbility(int32 CharacterID, int32 AbilityIndex);
	int32 GetTameMonsterNum();
	enum class ETameMonsterMode GetTameMonsterMode();
	int32 GetSecondJobID_FromSaveCharacterData(int32 CharacterID);
	int32 GetRawPOT_FromSaveCharacterData(int32 CharacterID);
	int32 GetRawMP_FromSaveCharacterData(int32 CharacterID);
	int32 GetRawHP_FromSaveCharacterData(int32 CharacterID);
	int32 GetPriorityJobID_FromSaveCharacterData(int32 CharacterID);
	int32 GetPlayerMoney();
	enum class EMYSHIP_CUSTOM_TYPE GetMyShipCustomFirstChoice(enum class EMYSHIP_CUSTOM_PART Part);
	enum class EMYSHIP_CUSTOM_TYPE GetMyShipCustom(enum class EMYSHIP_CUSTOM_PART Part);
	int32 GetLevel_FromSaveCharacterData(int32 CharacterID);
	int32 GetLegendMonsterNum();
	int32 GetJobPoint_FromSaveCharacterData(int32 CharacterID);
	enum class EHUNTER_PARTNER_ID GetHunterPartner();
	void GetFollowWaitingNpcUniqueId(TArray<int32>* OutUniqId);
	bool GetFollowWaitingNPCDataByType(int32* NPCID, int32* SupportLimit, enum class EMJFieldCommandType FieldCommandType);
	bool GetFollowWaitingNpcByFieldCommandType(enum class EMJFieldCommandType FieldCommandType, struct FSaveFollowNpcData* Output);
	void GetFollowNpcUniqueId(TArray<int32>* OutUniqId);
	bool GetFollowNPCDataByType(int32* NPCID, int32* SupportLimit, enum class EMJFieldCommandType FieldCommandType);
	bool GetFollowNpcByNpcUniqueId(int32 NPCID, struct FSaveFollowNpcData* Output);
	bool GetFollowNpcByFieldCommandType(enum class EMJFieldCommandType FieldCommandType, struct FSaveFollowNpcData* Output);
	bool GetFollowNpcByCharacterIdAndFieldCommandType(enum class EPlayableCharacterID CharaID, enum class EMJFieldCommandType Type, struct FSaveFollowNpcData* Output);
	bool GetFollowNpcByCharacterID(enum class EPlayableCharacterID CharaID, struct FSaveFollowNpcData* Output);
	void GetFollowNpcAndWaitingNpcUniqueId(TArray<int32>* OutUniqId);
	TArray<struct FSaveFollowNpcData> GetFollowNpc();
	int32 GetFirstJobID_FromSaveCharacterData(int32 CharacterID);
	int32 GetExp_FromSaveCharacterData(int32 CharacterID);
	TArray<int32> GetEquipSupportSkill_FromSaveCharacterData(int32 CharacterID);
	struct FSaveEquipmentDataID GetEquipment_FromSaveCharacterData(int32 CharacterID);
	int32 GetCharacterID_FromSaveCharacterData(int32 CharacterID);
	bool GetCharacterFixedEquipment(int32 CharacterID, enum class EEQUIPMENT_PART Part);
	class FName GetCharacterEquipmentPartLabel(int32 CharacterID, enum class EEQUIPMENT_PART Part);
	TArray<class FName> GetCharacterEquipmentLabels(int32 CharacterID);
	struct FSaveEquipmentData GetCharacterEquipmentLabel(int32 CharacterID);
	struct FSavePlayerCharacterData GetCharacterData(int32 CharacterID);
	bool FindCharacterFromPlayerMember(int32 CharacterID, int32* FoundIndex, struct FSavePlayerCharacterData* FoundCharacter, enum class EBPFuncReturnCode* ReturnCode);
	bool DeleteTameMonsterInvadeID(int32 TargetInvadeID);
	bool DeleteTameMonster(int32 Index);
	bool DeleteLegendMonster(int32 Index);
	bool DeleteFollowWaitingNpc(enum class EMJFieldCommandType FieldCommandType);
	bool DeleteFollowNpcByCharacterID(enum class EPlayableCharacterID CharaID);
	bool DeleteFollowNpc(enum class EMJFieldCommandType FieldCommandType);
	void Debug_SetAllAbility(int32 CharacterID, bool FullOpen);
	bool CheckCharacterAlive_SpecialActionType(int32 SpecialActionType);
	bool CanShowHunterPartnerInParty();
	bool AddTameMonster(const struct FTameMonsterData& TameMonster);
	void AddPlayerMoney(int32 AddMoney);
	bool AddLegendMonster(const struct FTameMonsterData& LegendMonster);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CharactersFlipbookUtility
class UCharactersFlipbookUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UCharactersFlipbookUtility* GetDefaultObj();

	bool IsIdleAction(enum class EKSCharacterAction Action);
	bool GetThiefMissionFlipbookToSaveLoad(class FName* OutLabel, class UObject* WorldContextObject, int32 CharaID, int32 JobID, int32 Form, enum class EPLAYER_JOB_FB_TYPE Type);
	bool GetMissionFlipbookLabelToSaveLoad(class FName* OutLabel, class UObject* WorldContextObject, int32 CharaID, int32 Form, int32 JobID);
	bool GetMissionFlipbookLabelToPlayerSelect(class FName* OutLabel, int32 CharaID, enum class EPLAYER_SELECT_FB_TYPE SelectType, enum class EPLAYER_SELECT_FB_PATTERN Pattern);
	bool GetMissionFlipbookLabelToJob(class FName* OutLabel, class UObject* WorldContextObject, int32 CharaID, int32 JobID, enum class EPLAYER_JOB_FB_TYPE Type, bool CheckTou);
	bool GetMissionCustomFlipbookRowData(struct FKSUIFlipbookData* OutData, class FName TargetLabel, bool EnableLog);
	bool GetMissionCustomFlipbookNames(TArray<class FName>* OutNames);
	bool GetMissionCustomFlipbookListRowDataFromCharaID(struct FCustomMissionFlipbookList* OutData, int32 CharaID);
	bool GetMissionCustomFlipbookListRowData(struct FCustomMissionFlipbookList* OutData, class FName TargetLabel);
	bool GetCustomFlipbookRowData(struct FKSFlipbookData* OutData, class FName TargetLabel, bool EnableLog);
	bool GetCharactersFlipbookRowData(struct FKSCharaFlipbook* OutData, class FName TargetLabel, bool EnableLog);
	bool GetActionSocket(class FName TargetCharaLabel, enum class EKSCharacterAction EAction, enum class EKSCharacterDir EDir, TMap<class FName, struct FMJSpriteSocketData>* OutSocketData, bool* OutIsReverse);
	bool GetActionFlipbookName(class UPaperFlipbookComponent* FbComp, class FName CharaActionLabel, enum class EKSCharacterAction EAction, enum class EKSCharacterDir EDir, class FName* OutFlipbookName, bool* OutIsReverse);
};

// 0x108 (0x368 - 0x260)
// Class Majesty.CharactersGridPanelBase
class UCharactersGridPanelBase : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnOpenedCallback;                                  // 0x260(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClosedCallback;                                  // 0x270(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectedCharacter;                               // 0x280(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class ECHARACTER_GRID_PANEL_WIDGET_STATE M_WidgetState;                                     // 0x290(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_110C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             M_CursorPosition;                                  // 0x294(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             M_GridSize;                                        // 0x29C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_110D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPartyCharacterPanelBase*>      M_PartyCharacterPanelRefs;                         // 0x2A8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UPartyCharPanelSelectBackBase*> M_PartyCharacterPanelSelectBackRefs;               // 0x2B8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<struct FIntPoint, class UPartyCharacterPanelBase*> M_PartyCharacterPanelPositions;                    // 0x2C8(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<struct FIntPoint, class UPartyCharPanelSelectBackBase*> M_PartyCharacterPanelSelectBackPositions;          // 0x318(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCharactersGridPanelBase* GetDefaultObj();

	void SetWidgetState(enum class ECHARACTER_GRID_PANEL_WIDGET_STATE NewState);
	void SetTitleText(class FName& TextLabel);
	void SetMember(TArray<struct FCharacterGridPanelParam>& NewMember);
	void SetCursorPosition(struct FIntPoint& NewPos);
	void Open();
	void MoveCursor(struct FIntPoint& Delta);
	TArray<class UPartyCharPanelSelectBackBase*> GetPartyCharacterPanelSelectBackRefs();
	TArray<class UPartyCharacterPanelBase*> GetPartyCharacterPanelRefs();
	bool GetPartyCharacterPanelByPos(struct FIntPoint& Pos, class UPartyCharacterPanelBase** OutPanel, class UPartyCharPanelSelectBackBase** OutSelectBack);
	struct FIntPoint GetCursorPosition();
	void Decide();
	void Close();
	void BroadcastOnSelectedCharacter(enum class EPlayableCharacterID PlayerID);
	void BroadcastOnOpenedDelegate();
	void BroadcastOnClosedDelegate();
};

// 0x10 (0x140 - 0x130)
// Class Majesty.CircularDayNightParentWidgetBase
class UCircularDayNightParentWidgetBase : public UCanvasPanel
{
public:
	class UWidget*                               ChildWidget;                                       // 0x130(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsChildKeepHorizontal;                             // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1110[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotationAngle;                                     // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCircularDayNightParentWidgetBase* GetDefaultObj();

	void SetRotationAngle(float NewRotationAngle);
};

// 0xD0 (0x428 - 0x358)
// Class Majesty.CommonDialog
class UCommonDialog : public UKSUserWidgetBase
{
public:
	struct FMJUICommonDialogParam                CurrentParam;                                      // 0x358(0xC8)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        ButtonIndex;                                       // 0x420(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_111A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonDialog* GetDefaultObj();

	bool SettingSelectSE(TArray<class FName>& SelectSE);
	void SelectButton(int32 buttonIdx);
	bool OpenPlayerMoney();
	bool OpenDialog(struct FMJUICommonDialogParam& Param);
	void OnSelectCallback();
	void ExecCloseFinishCallback();
	bool ClosePlayerMoney();
	bool CloseDialog();
	bool ButtonVisible(bool Visible);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.CommonNotificationBase
class UCommonNotificationBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UCommonNotificationBase* GetDefaultObj();

};

// 0x0 (0x858 - 0x858)
// Class Majesty.CustomListView
class UCustomListView : public UListView
{
public:

	static class UClass* StaticClass();
	static class UCustomListView* GetDefaultObj();

	class UUserWidget* GetSelectItemWidget(class UObject* Item);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.CustomSpriteDataTableUtility
class UCustomSpriteDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UCustomSpriteDataTableUtility* GetDefaultObj();

	bool GetMissionCustomSpriteRowData(enum class EBPFuncReturnCode* ReturnCode, struct FKSSpriteData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetCustomSpriteRowData(enum class EBPFuncReturnCode* ReturnCode, struct FKSSpriteData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.DarkAreaDataUtility
class UDarkAreaDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UDarkAreaDataUtility* GetDefaultObj();

	void SetIsDarkendDarkArea(class FName& DarkAreaLabel, bool IsDarkend);
	void SetIsDarkendAllDarkArea(bool IsDarkend);
	bool IsLevelDarkend(class FName& LevelLabel);
	bool IsLevelBelongDarkArea(class FName& LevelLabel);
	bool IsDarkendDarkAreaLabel(class FName& DarkAreaLabel);
	bool IsDarkendAnyDarkArea();
	bool IsAllowLostWayLevel(class FName& LevelLabel);
	bool GetDarkendWorldMapLabels(TArray<class FName>* OutWorldMapLabel);
	bool GetDarkendLevelLabels(TArray<class FName>* OutLevelLabel);
	bool GetDarkendDarkAreaLabels(TArray<class FName>* OutDarkAreaLabel);
	bool GetDarkAreaLabelByLevel(enum class EBPFuncReturnCode* ReturnCode, class FName& LevelLabel, class FName* OutDarkAreaLabel);
	bool GetDarkAreaByLevel(enum class EBPFuncReturnCode* ReturnCode, class FName& LevelLabel, struct FDarkAreaData* OutDarkArea);
	void GetAllDarkAreaLabels(TArray<class FName>* OutDarkAreaLabel);
};

// 0x78 (0x720 - 0x6A8)
// Class Majesty.DarkAreaParticleComponent
class UDarkAreaParticleComponent : public UParticleSystemComponent
{
public:
	struct FVector                               M_BaseLocation;                                    // 0x6A8(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_LocationOffset;                                  // 0x6B4(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              M_RotationOffset;                                  // 0x6C0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               M_ScaleOffset;                                     // 0x6CC(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FWorldMapDarkAreaEffectParam          M_DarkAreaEffectParam;                             // 0x6D8(0x40)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_114A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDarkAreaParticleComponent* GetDefaultObj();

	void SetTransformOffset(struct FVector& LocationOffset, struct FRotator& RotationOffset, struct FVector& ScaleOffset);
	void SetEnableEffect(bool Enable);
	void SetDarkAreaEffectParam(struct FWorldMapDarkAreaEffectParam& NewParam);
	void SetBaseLocation(struct FVector& baseLocation);
	class FName GetWorldMapLabel();
	class FName GetDarkAreaLabel();
	struct FWorldMapDarkAreaEffectParam GetDarkAreaEffectParam();
	void ApplyTransform();
};

// 0x1F8 (0x428 - 0x230)
// Class Majesty.DatabaseManager
class ADatabaseManager : public AAcqManagerBase
{
public:
	class UDataTable*                            M_DatabaseInfo;                                    // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1151[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UScriptStruct*, class FName>      M_StructToName;                                    // 0x288(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, class UDataTable*>         M_DatabaseTable;                                   // 0x2D8(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FRowNameIdSet>      M_RowNameIdSet;                                    // 0x328(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, class FString>             M_AsyncLoading;                                    // 0x378(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1152[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADatabaseManager* GetDefaultObj();

	void Static_Unload(class FName DbName);
	bool Static_LoadSyncSingle(class FName DbName);
	bool Static_LoadSyncByTiming(enum class EDB_LOAD_TIMING LoadTiming);
	bool Static_LoadAsyncSingle(class FName DbName);
	bool Static_LoadAsyncByTiming(enum class EDB_LOAD_TIMING LoadTiming);
	bool Static_IsLoading(class FName DbName);
	bool Static_IsLoaded(class FName DbName);
	bool Static_IsAnythingLoading();
	bool Static_GetRowNames(TArray<class FName>* OutRowNames, class FName DbName);
	class FName Static_GetRowName(class FName DbName, int32 RowId);
	int32 Static_GetRowID(class FName DbName, class FName RowName);
	class UDataTable* Static_GetDBPtr(class FName DbName);
	bool SetDbInfoTable(TSoftObjectPtr<class UDataTable> DbInfo);
	void OnLoaded(TArray<class UObject*>& ObjList);
	void Debug_ShowDBInfo(bool bEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.DatabaseMisc
class UDatabaseMisc : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDatabaseMisc* GetDefaultObj();

	void SetDatabaseNoticeDelegate();
};

// 0xA0 (0x2C0 - 0x220)
// Class Majesty.DBAccessManager
class ADBAccessManager : public AActor
{
public:
	TMap<class FName, class FName>               M_SupporterLabelToNpcLableTable;                   // 0x220(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class FName>               M_EnemyLabelToNpcLableTable;                       // 0x270(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ADBAccessManager* GetDefaultObj();

	bool SearchAbilitySetFromRestricWeapon(class FName& WeaponLabel, class FName* AbilitySetLabel);
	bool PrepareDBAccess(int32 Index);
	class FText MakeItemDetailText(struct FItemData& ItemData, int32 CharacterID);
	bool GetNpcLabelBySupporterLabel(class FName* OutLabel, class FName SupporterLabel);
	bool GetNpcLabelByEnemyLabel(class FName* OutLabel, class FName EnemyLabel);
	bool GetNpcDataBySupporterLabel(struct FNPCData* OutData, class FName SupporterLabel);
	bool GetNpcDataByEnemyLabel(struct FNPCData* OutData, class FName EnemyLabel);
	void GetMenuJobLabelList(TArray<class FName>* OutJobList);
	void GetMenuJobIDList(TArray<int32>* OutIDList);
	bool GetItemDataForMenu(class FName& ItemLabel, struct FItemDataForMenu* Value);
	class ADBAccessManager* GetInstance();
	bool ConvertUniqueIDToLabel(int32 NPCUniqID, class FName* NPCLabel);
	bool ConvertSupportAbilityIdToLabel(int32 SuportAbilityId, class FName* SuportAbilityLabel);
	bool ConvertLabelToAbilitySetID(class FName AbilitySetLabel, int32* AbilitySetID);
};

// 0x18 (0xC8 - 0xB0)
// Class Majesty.DebugBattleCharaComponent
class UDebugBattleCharaComponent : public UActorComponent
{
public:
	uint8                                        Pad_1164[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDebugBattleCharaComponent* GetDefaultObj();

	void SetMasterParameter(enum class ECHARACTER_PARAM_TYPE EType, int32 NValue);
	void SetDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType, bool bValue);
	void SetCurrentMP(int32 NValue);
	void SetCurrentHP(int32 NValue);
	int32 GetTotalParameter(enum class ECHARACTER_PARAM_TYPE EType);
	int32 GetMasterParameter(enum class ECHARACTER_PARAM_TYPE EType);
	int32 GetCurrentShield();
	bool GetCurrentPOT(int32* OutActionPoint, int32* OutActionPointMax);
	int32 GetCurrentMP();
	int32 GetCurrentHP();
	int32 GetCurrentBP();
	void GetCharacterName(class FText* StrCharacterName);
	TArray<struct FItemData> GetCharacterEquipmentList();
	class AKSCharacterBase* GetAnimationCharacter();
	bool CheckDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType);
};

// 0x28 (0xD8 - 0xB0)
// Class Majesty.DebugBattleLogComponent
class UDebugBattleLogComponent : public UActorComponent
{
public:
	uint8                                        Pad_1166[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDebugBattleLogComponent* GetDefaultObj();

	int32 GetBattleLogListNumMax();
	TArray<struct FDebugBattleLog> GetBattleLogList();
	bool GetBattleLogDirty();
	int32 GetBattleLogCount();
	void ClearBattleLogDirty();
};

// 0xC8 (0x178 - 0xB0)
// Class Majesty.DebugBattleManagerComponent
class UDebugBattleManagerComponent : public UActorComponent
{
public:
	uint8                                        Pad_116D[0xC8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDebugBattleManagerComponent* GetDefaultObj();

	void SetFixedWonderAbility(class FName StrAbilityName);
	void SetDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType, bool bValue);
	void SetDebugParameter(enum class EBATTLE_DEBUG_SWITCH EType, int32 NValue);
	bool SetConvertPlayerIDList(bool bEnable, TMap<int32, class FName>& AcConvertPlayerIDList);
	bool IsEnableConvertPlayerID();
	class FName GetFixedWonderAbility();
	int32 GetDebugParameter(enum class EBATTLE_DEBUG_SWITCH EType);
	class FName ConvertPlayerIDForBattleEventDebug(int32 NPlayerID);
	bool CheckDebugSwitch(enum class EBATTLE_DEBUG_SWITCH EType);
};

// 0x10 (0xC0 - 0xB0)
// Class Majesty.DebugCanvasComponent
class UDebugCanvasComponent : public UActorComponent
{
public:
	bool                                         AutoArrangement;                                   // 0xB0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1172[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AutoID;                                            // 0xB4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             StartPos;                                          // 0xB8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDebugCanvasComponent* GetDefaultObj();

	void SetVisible(bool bVisible);
	void SetAutoArrangement(bool Enable, const struct FVector2D& Pos);
	void RemoveTextWithID(int32 ID);
	void RemoveText();
	void RemovePrimitiveWithID(int32 ID);
	void RemovePrimitive();
	void RemoveAllText();
	void RemoveAllPrimitive();
	bool IsVisible();
	void AddTextWithID(int32 ID, struct FDebugTextData& TextData);
	void AddText(struct FDebugTextData& TextData);
	void AddRowPartText(class FText Text, const struct FLinearColor& Color);
	void AddPrimitiveWithID(int32 ID, struct FDebugPrimitiveData& PrimData);
	void AddPrimitive(struct FDebugPrimitiveData& PrimData);
};

// 0xF8 (0x1A8 - 0xB0)
// Class Majesty.DebugListMenuComponent
class UDebugListMenuComponent : public UActorComponent
{
public:
	uint8                                        Pad_1178[0xF8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDebugListMenuComponent* GetDefaultObj();

	void SetDelegateOnDecided(FDelegateProperty_ OnDecided);
	void SetDelegateOnClosed(FDelegateProperty_ OnClosed);
	void OpenMenu();
	bool IsRunning();
	void InitMenu(int32 FilterColNum, int32 ItemColNum);
	void CloseMenu();
	void ClearDelegateOnDecided();
	void AddItemDataArray(TArray<struct FDebugListMenuItem>& Data);
	void AddItemData(struct FDebugListMenuItem& Data);
	void AddFilterDataArray(TArray<struct FDebugListMenuFilter>& Data);
	void AddFilterData(struct FDebugListMenuFilter& Data);
	void AddFilter(int32 Index, class FText* Text, bool bChecked);
};

// 0x48 (0x268 - 0x220)
// Class Majesty.DebugLoadCheatCommand
class ADebugLoadCheatCommand : public AActor
{
public:
	uint8                                        Pad_117D[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADebugLoadCheatCommand* GetDefaultObj();

};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.DebugMenuParamPanelWidgetBase
class UDebugMenuParamPanelWidgetBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UDebugMenuParamPanelWidgetBase* GetDefaultObj();

};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.DebugMenuParamWidgetBase
class UDebugMenuParamWidgetBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UDebugMenuParamWidgetBase* GetDefaultObj();

	void SetInformationValue(class FText& InText);
	void OnTickFunc(struct FDebugParam& Param);
};

// 0x178 (0x228 - 0xB0)
// Class Majesty.DebugMenuSupportBase
class UDebugMenuSupportBase : public UActorComponent
{
public:
	uint8                                        Pad_11B7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RootMenuName;                                      // 0xC0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDebugParam>                   DebugParamList;                                    // 0xD8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDebugParam                           CCurrentParamData;                                 // 0xE8(0x130)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsSubMenuActive;                                   // 0x218(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nCurrentHierarchy;                               // 0x21C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nMaxHierarchy;                                   // 0x220(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nParentHierarchy;                                // 0x224(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDebugMenuSupportBase* GetDefaultObj();

	void OnPreInitWidgetFunc(struct FDebugParam& Param);
	void OnDecideFunc(struct FDebugParam& Param);
	void OnChangeFunc(struct FDebugParam& Param);
	void Initialize();
	TArray<struct FDebugParam> GetSubMenuParam(int32 Index);
	TArray<struct FDebugParam> GetDebugSubMenuList(struct FDebugParam& baseManuItem);
	TArray<struct FDebugParam> GetDebugParamFromHierarchy(int32 NHierarcy);
	void DebugPrintScreenMessage(const class FString& Str, const struct FColor& Col);
	void CreateMenu_Implementation();
	void CreateMenu();
	void CloseMenu_Implementation();
	int32 BackParentHierarchy();
	void AddToggleVal_Change(const class FString& MenuName, bool Enable, FDelegateProperty_ OnChangeFunc, FDelegateProperty_ OnDecideFunc);
	void AddToggleVal(const class FString& MenuName, bool Enable, FDelegateProperty_ OnDecideFunc);
	void AddSubMenuEnd();
	void AddSubMenuBegin(const class FString& MenuName, FDelegateProperty_ OnDecideFunc);
	void AddListVal_Change_PreInitWidget(const class FString& MenuName, const TArray<class FText>& StrList, int32 StartIndex, FDelegateProperty_ OnChangeFunc, FDelegateProperty_ OnDecideFunc, FDelegateProperty_ OnPreInitWidgetFunc);
	void AddListVal_Change(const class FString& MenuName, const TArray<class FText>& StrList, int32 StartIndex, FDelegateProperty_ OnChangeFunc, FDelegateProperty_ OnDecideFunc);
	void AddListVal(const class FString& MenuName, const TArray<class FText>& StrList, int32 StartIndex, FDelegateProperty_ OnDecideFunc);
	void AddIntVal_Change(const class FString& MenuName, int32 DefaultValue, int32 IntMin, int32 IntMax, FDelegateProperty_ OnChangeFunc, FDelegateProperty_ OnDecideFunc);
	void AddIntVal(const class FString& MenuName, int32 DefaultValue, int32 IntMin, int32 IntMax, FDelegateProperty_ OnDecideFunc);
	void AddInfomationWithCallback(const class FString& MenuName, const class FString& InformationStr, FDelegateProperty_ OnTickFunc, enum class EDEBUG_INFORMATION_COLOR_TYPE ColorType);
	void AddInfomation(const class FString& MenuName, const class FString& InfomationStr, enum class EDEBUG_INFORMATION_COLOR_TYPE ColorType);
	void AddFloatVal_Change(const class FString& MenuName, float DefaultValue, float FloatMin, float FloatMax, FDelegateProperty_ OnChangeFunc, FDelegateProperty_ OnDecideFunc);
	void AddFloatVal(const class FString& MenuName, float DefaultValue, float FloatMin, float FloatMax, FDelegateProperty_ OnDecideFunc);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.DebugParamFunction
class UDebugParamFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDebugParamFunction* GetDefaultObj();

	void SetDebugFlag(enum class EDEBUG_FLAG EFlag, bool Enable);
	void SetAutoTalkTimer(float FAutoTimer);
	bool GetDebugFlag(enum class EDEBUG_FLAG EFlag);
	float GetAutoTalkTimer();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.DebugSaveDataUti
class UDebugSaveDataUti : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UDebugSaveDataUti* GetDefaultObj();

	void Debug_ActivateAllEventFlagsWithoutSaveBanFlag();
};

// 0x10 (0x38 - 0x28)
// Class Majesty.ServiceConnecter
class UServiceConnecter : public UObject
{
public:
	FDelegateProperty_                           OnUnLockedAchievement;                             // 0x28(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UServiceConnecter* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Majesty.DebugServiceConnecter
class UDebugServiceConnecter : public UServiceConnecter
{
public:
	uint8                                        Pad_11E8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDebugServiceConnecter* GetDefaultObj();

};

// 0xD8 (0x308 - 0x230)
// Class Majesty.DialogManager
class ADialogManager : public AAcqManagerBase
{
public:
	TArray<class UCommonDialog*>                 DialogList;                                        // 0x230(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FMJUICommonDialogParam                RequestParam;                                      // 0x240(0xC8)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ADialogManager* GetDefaultObj();

	void SetSelectSE(TArray<class FName>& SelectSE);
	bool SetReference();
	void SetButtonVisible(bool Visible);
	class UCommonDialog* OpenRequestDialog(struct FMJUICommonDialogParam& Param);
	void OnDialogCloseFinishCallback();
	bool IsDialogRunning();
	bool Initialize();
	class UCommonDialog* GetTopDialog();
	bool CloseRequestDialog();
};

// 0x8 (0xB8 - 0xB0)
// Class Majesty.DiseaseComponent
class UDiseaseComponent : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDiseaseComponent* GetDefaultObj();

};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.DiseaseListItem
class UDiseaseListItem : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UDiseaseListItem* GetDefaultObj();

	void Setup(struct FDiseaseListItemData& Data);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.DiseaseListWidget
class UDiseaseListWidget : public UKSUserWidgetBase
{
public:
	enum class EDiseaseListState                 M_WidgetState;                                     // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDiseaseListWidget* GetDefaultObj();

	void SortDiseaseList(TArray<struct FDiseaseListItemData>& List);
	void SetWidgetState(enum class EDiseaseListState State);
	enum class EDiseaseListState GetWidgetState();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EffectDataTableUtility
class UEffectDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UEffectDataTableUtility* GetDefaultObj();

	bool GetEffectRowNames(TArray<class FName>* OutRowNames);
	bool GetEffectRowData(enum class EBPFuncReturnCode* ReturnCode, struct FEffectData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EncountDataTableUtility
class UEncountDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UEncountDataTableUtility* GetDefaultObj();

	bool GetEncountVolumeRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FEncountVolume* OutData, int32 TargetID, bool LogEnable);
	bool GetEncountVolumeRowData(enum class EBPFuncReturnCode* ReturnCode, struct FEncountVolume* OutData, class FName TargetLabel, bool LogEnable);
	bool GetEncountTriggerRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FEncountTriggerData* OutData, int32 TargetID, bool LogEnable);
	bool GetEncountTriggerRowData(enum class EBPFuncReturnCode* ReturnCode, struct FEncountTriggerData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetEncountTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames, enum class EEncountTableType Type);
	int32 EncountTriggerLabelToId(class FName EncountTriggerLabel);
	class FName EncountTriggerIdToLabel(int32 EncountTriggerId);
};

// 0x70 (0x2A0 - 0x230)
// Class Majesty.EncountManager
class AEncountManager : public AAcqManagerBase
{
public:
	bool                                         M_bIsViewerMode;                                   // 0x230(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_121F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EncountPosition;                                   // 0x234(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKSCharacterDir                   EncountDir;                                        // 0x240(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1220[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TressaSpeialStepLevel;                             // 0x244(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_RequestRestoreEncountVolume;                     // 0x24C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayableCharacterID              M_eFixFirstOrderPlayerID;                          // 0x24D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBATTLE_VIEWER_MODE               Debug_BattleViewerMode;                            // 0x24E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1221[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Debug_EnemyGroupID;                                // 0x250(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Debug_EnemyIDList;                                 // 0x258(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Debug_PlacementID;                                 // 0x268(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Debug_UseBattleViewerParty;                        // 0x270(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Debug_UseBattleRandomParty;                        // 0x271(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Debug_UseExtraJob;                                 // 0x272(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1222[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Debug_RandomPartyLevel;                            // 0x274(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Debug_RandomPartyLevelRange;                       // 0x278(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Debug_RandomPartyNum;                              // 0x27C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPlayableCharacterID>      Debug_BattleViewePartyList;                        // 0x280(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Debug_UseBattleViewerMap;                          // 0x290(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1223[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Debug_BattleViewerMapID;                           // 0x294(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Debug_IsWaterSide;                                 // 0x29C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Debug_UseFixedSituation;                           // 0x29D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBATTLE_START_TYPE                Debug_FixedSituation;                              // 0x29E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBATTLE_ENCOUNT_TYPE              Debug_FixedBattleMode;                             // 0x29F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AEncountManager* GetDefaultObj();

	bool StartRobBattle(class FName EnemyGroupID, enum class EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool StartRevealBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool StartPreparationBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool StartInvadeBattle(class FName EnemyGroupID, enum class EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool StartEventBattle(class FName EncountVolumeID, bool IsEventBGM, bool SingleBattle, enum class EPlayableCharacterID CharacterID, bool IsNextEvent, enum class EPlayableCharacterID FixFirstOrderPlayer);
	bool StartEightBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex, TArray<enum class EPlayableCharacterID>& MainParty, TArray<enum class EPlayableCharacterID>& SubParty);
	bool StartBoutBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex, enum class EPlayableCharacterID EBattleCHaraID);
	bool SettingBattleParam();
	bool SetLiquidationSkip(bool SkipLiquidation);
	bool SetForceStopEncountStep(int32 NForceStopEncountStepCount);
	bool SetEncountVolume(const struct FEncountTriggerData& TriggerData);
	bool SetAfterMainMenu();
	bool RestoreEncountVolumeFromSaveData();
	bool RestoreEncount();
	bool ResetTrigger();
	bool ResetEncountVolume();
	bool ResetEncountStep();
	void RequestRestoreEncountVolumeFromSaveData();
	bool RefleshEncountVolume();
	void OnLevelChanged(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	bool IsChkEncountFlagStartEndData(struct FEncountFlagStartEndData& ChkEncountData);
	bool GetViewerParameter(enum class EBATTLE_VIEWER_MODE* EViewerMode, TArray<class FName>* AstrEnemyIDList, class FName* StrPlacementID);
	bool GetReplaceEncountFlagData(struct FEncountFlagData& ChkData, class FName& EncountTriggerLabel);
	void GetLiquidationSkip(bool* SkipLiquidation);
	enum class EPlayableCharacterID GetFixFirstOrderPlayer();
	void GetEncountType(enum class EBATTLE_ENCOUNT_TYPE* EncountType);
	void GetEncountTriggerID(int32* TriggerID);
	bool GetEncountParameter(class FName* StrEnemyGroupID, bool* bIsEventBGM, enum class EBATTLE_ENCOUNT_TYPE* EEncountType);
	int32 GetEncounterLevel();
	void GetEncountCameraRotation(struct FRotator* EncountSign);
	int32 GetDangerLevel();
	struct FEncountTriggerData GetCurrentEncountTrigger();
	bool GetBattleViewerMode();
	bool GeRareEnemyParameter(struct FRareEnemyParam* CRareCatlinParam, struct FRareEnemyParam* CRareOctlinParam, enum class EAreaID* EArea);
	bool Debug_StartViewerBattle();
	bool Debug_SetFixedSituation(int32 Situation);
	bool Debug_SetFixedEnemyGroupID(class FName GrounpID);
	bool Debug_SetFixedEncount(bool Fixed);
	bool Debug_SetEncountSoon(bool Enable);
	bool Debug_SetEightBattle(int32 PartyLevel, int32 LevelRange, bool bEnableEightBattle);
	bool Debug_SetDisableStepRandom(bool Enable);
	bool Debug_SetBattleViewerSituation(enum class EBATTLE_START_TYPE FixedSituation, bool UseFixedSituation);
	bool Debug_SetBattleViewerParty(TArray<enum class EPlayableCharacterID>& PartyList, bool UseBattleViewerParty);
	bool Debug_SetBattleViewerMode(enum class EBATTLE_VIEWER_MODE ViewerMode);
	bool Debug_SetBattleViewerMap(class FName ViewerMapID, bool IsWaterSide, bool UseBattleViewerMap);
	bool Debug_SetBattleViewerEnemy(class FName EnemyGroupID, TArray<class FName>& EnemyIDList, class FName PlacementID);
	bool Debug_SetBattleRandomParty(int32 PartyLevel, int32 LevelRange, int32 PartyNum, bool UseExtraJob, bool UseRandomParty);
	bool Debug_SetBattleMode(enum class EBATTLE_ENCOUNT_TYPE EBattleMode);
	void Debug_GetFixedEncount(bool* Fixed);
	void Debug_GetEncountSoon(bool* Enable);
	void Debug_GetEncountInfo(class FString* OutDebugInfo);
	void Debug_GetDisableStepRandom(bool* Enable);
	bool Debug_GetBattleRandomParty();
	class FName Debug_GetActiveEncountVolumeLabel();
	bool Debug_CreateRandomPartyData(int32 CharacterID, int32 PartyLevel, bool UseExtraJob);
	void CalcEncounterLevel(int32 LevelId, int32* EncounterLevel, int32* DangerLevel);
	bool BattleStartExec();
	bool BackupEncount();
	bool AddEncountTrigger(class AKSTriggerBase* Trigger);
};

// 0x8 (0x240 - 0x238)
// Class Majesty.EncountTriggerBase
class AEncountTriggerBase : public AMJBoxTrigger
{
public:
	bool                                         bDisableTrigger;                                   // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1224[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEncountTriggerBase* GetDefaultObj();

	void SetEncountVolume();
	class FString Debug_GetDebugInfo_BP();
};

// 0x20 (0x240 - 0x220)
// Class Majesty.EndRollFlowManager
class AEndRollFlowManager : public AActor
{
public:
	enum class EEndRollFlowState                 CurrentState;                                      // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1234[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StagingTimer;                                      // 0x224(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1235[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEndRollSegmentPlayData*>       SegmentList;                                       // 0x230(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AEndRollFlowManager* GetDefaultObj();

	void UpdateStagingTime(float DeltaTime);
	void UpdateSegments();
	void UpdateManager(float DeltaSeconds);
	void StopEndRoll();
	void StartEndroll();
	void SegmentTransitionCallback(class UEndRollSegmentPlayData* Segment);
	void ResetEndRoll();
	void OnStop();
	void OnStart();
	void OnReset();
	void OnBeginPlay();
	bool IsSegmentsCompleted();
	bool IsReadyEndRoll();
	bool IsPlayingEndRoll();
	bool IsDisplayDebugInfo();
	enum class EEndRollSegmentSet GetNextPlaySegmentID();
	void DebugUpdate();
	bool CreateSegmentPlayData();
	void ChangeState(enum class EEndRollFlowState NextState);
	bool ChangeSegmentTransition(enum class EEndRollSegmentState State, class UEndRollSegmentPlayData* Segment);
	void AddSegment(struct FEndRollSegmentData& SegmentData, enum class EEndRollSegmentSet SegSetID, bool IsEnable, float StartEvImageTime, float StartBattleTime, float EndTime, float WipeTime);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EndRollSaveDataUtil
class UEndRollSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UEndRollSaveDataUtil* GetDefaultObj();

	enum class EEndRollSegmentSet GetClearedEndRollSegmentByIndex(int32 Index);
	bool AddClearedMainStory(enum class EEndRollSegmentSet Segment);
};

// 0x38 (0x60 - 0x28)
// Class Majesty.EndRollSegmentPlayData
class UEndRollSegmentPlayData : public UObject
{
public:
	uint8                                        Pad_1242[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEndRollSegmentPlayData* GetDefaultObj();

	enum class EEndRollSegmentSet GetSegmentSetID();
	class FName GetEventImage();
	bool GetBattleRevivalFlag();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EndRollUtil
class UEndRollUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEndRollUtil* GetDefaultObj();

	void StopEndRoll(class UObject* WorldContextObject);
	void StartEndroll(class UObject* WorldContextObject);
	void SetupEndRoll();
	void ResetEndRoll(class UObject* WorldContextObject);
	bool IsReadyEndRoll(class UObject* WorldContextObject);
	bool IsPlayingEndRoll(class UObject* WorldContextObject);
	bool GetEndRollManager(class UObject* WorldContextObject, class AEndRollFlowManager** Out);
};

// 0x40 (0xF0 - 0xB0)
// Class Majesty.EnforcerOffsetComponent
class UEnforcerOffsetComponent : public UActorComponent
{
public:
	struct FTransform                            EnforcerOffset;                                    // 0xB0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bIsEnforcerTarget;                               // 0xE0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1248[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnforcerOffsetComponent* GetDefaultObj();

	void SetEnforcerTarget(bool bEnable);
	void SetEnforcerOffset(const struct FTransform& CTransform);
};

// 0x50 (0x278 - 0x228)
// Class Majesty.EnvSound
class AEnvSound : public AAtomSound
{
public:
	float                                        M_FirstWaitTime;                                   // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCue*                         M_NightEnvSound;                                   // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundAtomCue*                         M_DayTimeEnvSound;                                 // 0x238(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124F[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEnvSound* GetDefaultObj();

	void UpdateFade(float DeltaSeconds);
	void StopEnvSound(int32 NFadeOutTime);
	void PlayEnvSound(enum class ETimeZoneType ETimeZoneType, int32 NFadeInTime);
	void PauseSE(bool bPause);
	bool IsFade();
	void Init();
	class UAtomComponent* GetAtomComponent();
	bool ChangeEnvSound(enum class ETimeZoneType ETimeZone);
	void BattleChange_SavePlayingState();
	void BattleChange_RestorePlayingState();
	bool ApplyOptionVolume();
};

// 0x10 (0x230 - 0x220)
// Class Majesty.EnvSoundObjectBase
class AEnvSoundObjectBase : public AActor
{
public:
	class UAtomComponent*                        M_cpAtomComponent;                                 // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1251[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEnvSoundObjectBase* GetDefaultObj();

	void BattleChange_SavePlayingState();
	void BattleChange_RestorePlayingState();
};

// 0x10 (0x368 - 0x358)
// Class Majesty.KSUserWidgetWithState
class UKSUserWidgetWithState : public UKSUserWidgetBase
{
public:
	uint8                                        Pad_1253[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSUserWidgetWithState* GetDefaultObj();

	void UpdateState();
	void SetNextState(int32 NextState);
	void OnUpdateState(int32 CurrentState);
	void OnEndState(int32 CurrentState, int32 NextState);
	void OnBeginState(int32 PrevState, int32 CurrentState);
	bool IsClosingState(int32 State);
	void InitState();
	int32 GetPrevState();
	int32 GetNextState();
	int32 GetCurrentState();
};

// 0x0 (0x368 - 0x368)
// Class Majesty.EquipmentMenuWidgetBase
class UEquipmentMenuWidgetBase : public UKSUserWidgetWithState
{
public:

	static class UClass* StaticClass();
	static class UEquipmentMenuWidgetBase* GetDefaultObj();

	bool SetBarMode(bool IsBar);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EquipmentTextureUtility
class UEquipmentTextureUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEquipmentTextureUtility* GetDefaultObj();

	class FName GetResourceLabel(struct FEquipmentTextureData& EquipmentTextureData, enum class EWEAPON_STANCE Stance, bool bGetNPC);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EquipmentTextureTableUtility
class UEquipmentTextureTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UEquipmentTextureTableUtility* GetDefaultObj();

	bool GetEquipmentTextureRowData(enum class EBPFuncReturnCode* ReturnCode, struct FEquipmentTextureData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EvaluateAchievementFunctions
class UEvaluateAchievementFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEvaluateAchievementFunctions* GetDefaultObj();

	bool EvaluateVisitLevelCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateSwoonNpcUniqueCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateSubStoryClearCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateSpecifySpecialItemCount_MusicRecord(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateSpecifySpecialItemCount_BattleTestedWeapon(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateSpecifySpecialItemCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateOwnShip(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateOpenEndCard(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateMaxDamage(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateMainStoryRecordReOpen(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateMainStoryClearCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateMainStoryClear(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateLinerShipCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateJoinedPlayerCharacterCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateJobItemCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateInformationFieldCommandSuccessCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateFollowingCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateExtraStoryRecordReOpen(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateEpilogueClear(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateClearExBoss(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateBreakCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateBoostAttackCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateAllAchievement(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateAcquisitonDivineAbilityCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateAcquisitonAdvancedAbilityCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateAcquisitonAbilityCount(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool EvaluateAcquisitonAbility(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
	bool CalculateMainStoryProgress(struct FAchievementData& Achieve, struct FNoticeArgs& NoticeArgs, float* OutProgress);
};

// 0xB0 (0xE8 - 0x38)
// Class Majesty.EventCommandBase
class UEventCommandBase : public ULevelSequenceDirector
{
public:
	class ULevelSequencePlayer*                  M_pTargetMainSequencePlayer;                       // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsStopMainSequence;                             // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fPlaybackSubSeqPosition;                         // 0x44(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fFadeTime;                                       // 0x48(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequencePlayer*                  M_pTargetSubSequencePlayer;                        // 0x50(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsStopSubSequence;                              // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A2[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FEventEmotion>      EventEmotionList;                                  // 0x70(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12A3[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEventCommandBase* GetDefaultObj();

	void TitlePauseFunction();
	void SubSequencePlayIndexFunction(int32 NNumLoops, float FSubSeqPlayPosition, int32 NIndex);
	void SubSequencePlayFunction(int32 NNumLoops, float FSubSeqPlayPosition);
	void StopRichEventBgmFunction(float FFadeOutTime);
	void StopEmotionFunction(class FName TagName);
	void StartPlayEmotionFunction(class FName TagName, enum class EEMOTION_TYPE EmotionType, float LifeTime, const struct FVector& Offset);
	void StartCameraSpawnFunction(enum class EKSCameraType CameraType, float FBlend);
	void SpawnCharaFunction(class AKSCharacterBase* EventChara, class FName CharaLabelName, enum class EKSCharacterDir SetDir, class FName AddTagName);
	void ShowDebugInfoTextFunction(const class FString& Text, float Time);
	void SetPlayerPositionFunction(const struct FVector& Position, bool PlaySkip);
	void SetLateFadeParam(enum class ERICHEVENT_CMD Command, float EndTime, const struct FLinearColor& Color);
	void SetHouseModeFunction(bool In, class FName TargetBP, bool DoorOpen);
	void PlayRichEventSeFunction(class FName StrSeLabel);
	void PlayRichEventBgmMapFunction(float FFadeOutTime, float FFadeInTime);
	void PlayRichEventBgmFunction(class FName StrBgmLabel, float FFadeOutTime, float FFadeInTime);
	void PlayRichEventBgmBlockFunction(int32 NBlockId);
	void NarrationPlayFunction(class FName StrNarrationLabel, bool StopMainSequence, float FPlaybackSubSeqPosition);
	void InitSeqData();
	bool GetAllInvokeMode();
	void FinishBattleWipe(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	void FadeOutFunction(float EndTime, const struct FLinearColor& Color);
	void FadeInFunction(float EndTime, const struct FLinearColor& Color);
	void End();
	void DetachCharacterFunction(class AKSCharacterBase* EventChara);
	bool CheckActiveMessage();
	void ChangeVolumeEnvFunction(float FVolume, float FFadeTime);
	bool ChangeUpdateCommand(enum class ERICHEVENT_CMD EType);
	void ChangeCameraFunction(enum class EKSCameraType CameraType, float FBlend);
	void ChangeActionFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir);
	void BalloonOpenLabelPlayerFunction(enum class EBalloonType BalloonType, enum class EEventBalloonDir BalloonDir, class FName TalkTargetName, class FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, bool WithoutTail);
	void BalloonOpenLabelFunction(class FName TalkTargetTag, enum class EBalloonType BalloonType, enum class EEventBalloonDir BalloonDir, class FName TalkTargetName, class FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, const struct FVector2D& Offset, bool WithoutTail);
	void BalloonOpenFunction(class FName TalkTargetTag, enum class EBalloonType BalloonType, enum class EEventBalloonDir BalloonDir, class FName TalkTargetName, const class FString& TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, const struct FVector2D& Offset, bool WithoutTail, const struct FTalkVoice& TalkVoiceData);
	void AttachPlayerFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterDir SetDir, class FName MemoryLabelName);
	void AttachCharacterActionFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.EventFieldCommandBattleBase
class UEventFieldCommandBattleBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UEventFieldCommandBattleBase* GetDefaultObj();

	bool Open(class FName NPCLabel);
};

// 0x18 (0x238 - 0x220)
// Class Majesty.EventFlagObjectBase
class AEventFlagObjectBase : public AActor
{
public:
	TArray<struct FEventFlagData>                M_anEventFlagData;                                 // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         PrologueForceHidden;                               // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         SwitchVisibilityOnPostTick;                        // 0x231(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12AA[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEventFlagObjectBase* GetDefaultObj();

	void SetVisible(bool bEnable);
	bool SetupEventFlagVisible();
	void SetupEnable(int32 NFlagIndex, bool bStatusFlag);
	TArray<struct FEventFlagData> GetEventFlagArray();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.EventFunction
class UEventFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEventFunction* GetDefaultObj();

	bool SetTheaterEventData(FDelegateProperty_ Delegate);
	void SetNpcTalkDir(class AKSCharacterBase* TargetNpc, int32 ParamDir);
	bool SetJsonData(TArray<class FString>* OutEventData, class UJsonFieldData* JsonData, const class FString& Command, const class FString& EventJsonName);
	bool SetEventData(FDelegateProperty_ Delegate);
	bool PlayEventTheater(class FName EventName, int32 OverrideTimeZone);
	void MakeActiveEventLabelList(TArray<class FName>* OutEventLabelList, struct FPlacementData& PlaceData);
	bool IsEventSkipEnable();
	bool IsEventPlayTheater();
	bool IsEventPlaying();
	bool IsEventBattleDefeatNextEvent();
	bool IsEventActive(int32 StartFlag, int32 EndFlag);
	bool IsActiveByEventFlag(int32 StartFlag, int32 EndFlag);
	int32 GetThiefChokerFlag();
	class FName GetThiefActionLabelPartyChat(int32 PartyChatId, bool bTheater);
	class FName GetThiefActionLabelName(bool Flag);
	class FName GetThiefActionLabelMainStory(int32 StoryTaskID, bool bTheater);
	class FString GetPlayingEventName();
	int32 GetMovieSectionsCount(class UMovieScene* Movie);
	class UMovieSceneEventTriggerSection* GetMovieSectionData(class UMovieScene* Movie, int32 Count);
	class UMovieSceneAtomSection* GetMovieSectionAtomData(class UMovieScene* Movie, int32 Count);
	struct FMovieSceneEvent GetEventTriggerParam(class UMovieSceneEventTriggerSection* Section, int32 Count);
	int32 GetEventTriggerNum(class UMovieSceneEventTriggerSection* Section);
	class AKSCharacterBase* GetEventTargetCharacter();
	bool GetEventMemoryObjectFlag(int32 StoryTaskID, int32 FlagID);
	enum class EKSCharacterDir GetEventDir(int32 ParamDir);
	bool EventPlay(class FName EventName, class AKSCharacterBase* TargetCharacter);
	void EventFlagRefresh(class UObject* WorldContextObject);
	bool CheckCurrentTimeByTimeZoneTriggerType(enum class ETIMEZONE_TRIGGER_TYPE TimeZoneTrgType);
};

// 0x600 (0x830 - 0x230)
// Class Majesty.EventManager
class AEventManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_13EC[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEventAtomSoundData>           AtomCueArray;                                      // 0x248(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          M_pMPC;                                            // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EE[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                JsonFilename;                                      // 0x278(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventData>                    EventData;                                         // 0x288(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        EventIndex;                                        // 0x298(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndIndex;                                          // 0x29C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            EventListDb;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSCharacterBase*                      PlayerCharacter;                                   // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSCharacterBase*                      PlayActionCharacter;                               // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSObjectBase*                         TargetObject;                                      // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSCharacterBase*                      EventTargetCharacter;                              // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        EventArgs;                                         // 0x2C8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        CommandTime;                                       // 0x2D8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WaitTime;                                          // 0x2DC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TalkIndex;                                         // 0x2E0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ActiveTalkIndex;                                   // 0x2E4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                PlayEventName;                                     // 0x2E8(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                NextEventName;                                     // 0x2F8(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          DialogEventName;                                   // 0x308(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        BattleEndNextEventID;                              // 0x318(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BattleEndNextEventName;                            // 0x320(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                BattleEndDefeatNextEventName;                      // 0x330(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AEventTargetBase*                      CameraTarget;                                      // 0x340(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                      ActiveCamera;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CameraTrackStartPos;                               // 0x350(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CameraTrackEndPos;                                 // 0x35C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CameraTrackPos;                                    // 0x368(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CameraTrackEndTime;                                // 0x374(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CameraTrackTime;                                   // 0x378(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bCameraDecelerate;                               // 0x37C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AKSObjectBase*>                 ObjectArray;                                       // 0x380(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FEventListData                        PlayEventData;                                     // 0x390(0x98)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int32                                        TempPlayEventSkip;                                 // 0x428(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBalloonBase*                          EventBalloon;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIFlashbackBase*                      EventFlashback;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMaterial*>                     PostProcessMaterial;                               // 0x440(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceDynamic*>      PostProcessMaterialDynamic;                        // 0x450(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FEventEffect>             EventEffectList;                                   // 0x460(0x50)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FEventEmotion>            EventEmotionList;                                  // 0x4B0(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         EventBattle;                                       // 0x500(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         BeforEventBattle;                                  // 0x501(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IgnoreFootStepSound;                               // 0x502(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13FE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyChatBase*                        PartyChatWidget;                                   // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsRichEventLoadResourceData;                       // 0x510(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomNumber;                                      // 0x514(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsCreateRandomNumber;                              // 0x518(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ExecFinishPre;                                     // 0x519(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RefreshEventFlag;                                  // 0x51A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RefreshEventObject;                                // 0x51B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EditPlayerPosition;                                // 0x51C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EditCameraLock;                                    // 0x51D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EditPlayerCharacterEnable;                         // 0x51E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1401[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FirstCharacterSpawn;                               // 0x520(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastFlagChangeIndex;                               // 0x524(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastFadeOutIndex;                                  // 0x528(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RefreshPlayerFlag;                                 // 0x52C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ContinueEvent;                                     // 0x52D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1402[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TempTime;                                          // 0x530(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TempVector;                                        // 0x534(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSCharacterBase*                      EventMoveTarget;                                   // 0x540(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UTexture2D>>     FlashBackTexture;                                  // 0x548(0x10)(BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FVector                               CameraLockPos;                                     // 0x558(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CameraLockFlag;                                    // 0x564(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1403[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEndRollFlowManager*                   TempEndrollManager;                                // 0x568(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EndrollFlow;                                       // 0x570(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEventTheater                     TheaterStatus;                                     // 0x574(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1404[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EventStartLevelID;                                 // 0x578(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PlayerLocation;                                    // 0x57C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSCharacterDir                   PlayerDir;                                         // 0x588(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1405[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RestoreHouseName;                                  // 0x58C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RestoreBGMLabel;                                   // 0x594(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1406[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsPlayEventForce;                                  // 0x59D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsSequencerSkip;                                   // 0x59E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsTempChangeTimeZone;                              // 0x59F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1407[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              SepiaLUT;                                          // 0x5B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               GRAY_SCALE;                                        // 0x5B8(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               GRAY_ALPHA;                                        // 0x5C4(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SEPIA;                                             // 0x5D0(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1408[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   M_pcMainSeqActor;                                  // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ALevelSequenceActor*>           M_apcSubSeqActor;                                  // 0x5E8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1409[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ALevelSequenceActor*>           M_apSeqList;                                       // 0x608(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class URichEventCommandBase*                 M_pcEventCommandData;                              // 0x618(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_140A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URichEventCommandBase*                 M_pcSubEventCommandData;                           // 0x628(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class ULevelSequence>> M_acResList;                                       // 0x630(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_140B[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        M_pcCacheTimeSequencer;                            // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelSequence*                        M_ReplaceTimeSequencer;                            // 0x668(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_140C[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EventFinish;                                       // 0x6A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_140E[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class AKSCharacterBase*>         M_EventCharacter;                                  // 0x720(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<int32, class AKSObjectBase*>            M_EventObject;                                     // 0x770(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<int32, class AKSCharacterBase*>         M_MoveList;                                        // 0x7C0(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_140F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubSeqData>                   M_DeepThinkParams;                                 // 0x818(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1410[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEventManager* GetDefaultObj();

	bool UpdateWPMEventReflection(float DeltaTime);
	bool UpdateWPMEventEnd(float DeltaTime);
	bool UpdateWPMEventCheck(float DeltaTime);
	bool UpdateWPMEvent(float DeltaTime);
	bool UpdateUIStorySelect(float DeltaTime);
	bool UpdateTalk(float DeltaTime);
	bool UpdateSubStoryLabelJump(float DeltaTime);
	bool UpdateSubDelivMessageDialog(float DeltaTime);
	bool UpdateSubDeliveryDialog(float DeltaTime);
	bool UpdateSpawnCharacterThief(float DeltaTime);
	bool UpdateSpawnCharacterPlacement(float DeltaTime);
	bool UpdateSpawnCharacterPartyPosition(float DeltaTime);
	bool UpdateSpawnCharacterNPC(float DeltaTime);
	bool UpdateSpawnCharacter(float DeltaTime);
	bool UpdateSelectMemberDialog(float DeltaTime);
	void UpdateResetBattleWipeMPC_PlayingEvent(bool bWipe);
	bool UpdateReminiscenceDialog(float DeltaTime);
	bool UpdatePChatMode(float DeltaTime);
	bool UpdatePartnerSelectDialog(float DeltaTime);
	bool UpdateOpenPartySquadWidget(float DeltaTime);
	bool UpdateOpenPartySplitWidget(float DeltaTime);
	bool UpdateMove(float DeltaTime);
	bool UpdateInventorLearnAbility(float DeltaTime);
	bool UpdateInventorEventDialog(float DeltaTime);
	bool UpdateGetJobDialog(float DeltaTime);
	bool UpdateGetItemDialog(float DeltaTime);
	bool UpdateFinishTheater(float DeltaTime);
	bool UpdateFieldCommandDialog(float DeltaTime);
	bool UpdateExPartyChange(float DeltaTime);
	bool UpdateEventFadeOut(float DeltaTime);
	bool UpdateEventFadeIn(float DeltaTime);
	void UpdateEventEmotion(float DeltaTime);
	void UpdateEventEffect(float DeltaTime);
	bool UpdateEndrollInit(float DeltaTime);
	bool UpdateEndroll(float DeltaTime);
	bool UpdateDialogJumpEpilogue(float DeltaTime);
	bool UpdateDialogJump(float DeltaTime);
	bool UpdateCharaMoveStart(float DeltaTime);
	bool UpdateCharaFadeOut(float DeltaTime);
	bool UpdateCharaFadeIn(float DeltaTime);
	bool UpdateCharacterForce(float DeltaTime);
	bool UpdateCharacterAction(float DeltaTime);
	bool UpdateChallengeDialog(float DeltaTime);
	bool UpdateCameraDecelerate(float DeltaTime);
	bool UpdateBattleStart(float DeltaTime);
	bool UpdateAddMemberEnd(float DeltaTime);
	bool UpdateAddMemberDialog(float DeltaTime);
	bool UpdateAddMember(float DeltaTime);
	void Update_StartFadeOut(float DetalTime);
	void Update_EventSkipFadeOut(float DeltaTime);
	void Update_EventSkipFadeIn(float DeltaTime);
	void Update_CameraMove(float DeltaTime);
	bool TempEventSkip(bool NewEventSkip);
	bool StopSubSequencer(int32 NIndex);
	bool StartWPMEventReflection(struct FEventData& RefEventData);
	bool StartWPMEventEnd(struct FEventData& RefEventData);
	bool StartWPMEventCheck(struct FEventData& RefEventData);
	bool StartWPMEvent(struct FEventData& RefEventData);
	bool StartWeaponMasterFrow(struct FEventData& RefEventData);
	bool StartUnlockFasttravel(struct FEventData& RefEventData);
	bool StartUIStorySelect(struct FEventData& RefEventData);
	bool StartUIShop(struct FEventData& RefEventData);
	bool StartUIPartyEdit(struct FEventData& RefEventData);
	bool StartUINote(struct FEventData& RefEventData);
	bool StartUIBar(struct FEventData& RefEventData);
	bool StartTopCharaTypeLabelJump(struct FEventData& RefEventData);
	bool StartTempPartySetting(struct FEventData& RefEventData);
	bool StartTalkPos(struct FEventData& RefEventData);
	bool StartTalkPChat(struct FEventData& RefEventData);
	bool StartTalkParty(struct FEventData& RefEventData);
	bool StartTalkPartner(struct FEventData& RefEventData);
	bool StartTalkGeneral(struct FEventData& RefEventData);
	bool StartTalk(struct FEventData& RefEventData);
	bool StartSuccsessFCTypeLabelJump(struct FEventData& RefEventData);
	bool StartSubTitleNextBlock(struct FEventData& RefEventData);
	bool StartSubTitle(struct FEventData& RefEventData);
	bool StartSubStoryLabelJump(struct FEventData& RefEventData);
	bool StartSubDelivMessageDialog(struct FEventData& RefEventData);
	bool StartSubDeliveryDialog(struct FEventData& RefEventData);
	bool StartStopEmotionIconAll();
	bool StartSpawnEffect(struct FEventData& RefEventData);
	bool StartShipPutUpSail(struct FEventData& RefEventData);
	bool StartSetSwoonEventObject(struct FEventData& RefEventData);
	bool StartSetSwoon(struct FEventData& RefEventData);
	bool StartSetNextLevelTriggerID(struct FEventData& RefEventData);
	bool StartSetFastTravel(struct FEventData& RefEventData);
	bool StartSequencerStart(struct FEventData& RefEventData);
	bool StartSequencerSkip();
	bool StartSequencerPause();
	bool StartSequencerLabelJump(const class FString& StrLabel);
	bool StartSelectMemberJump(struct FEventData& RefEventData);
	bool StartSelectMemberDialog(struct FEventData& RefEventData);
	bool StartResidentSubSequencerStopIndex(int32 NIndex);
	bool StartResidentSubSequencerStop();
	bool StartResidentSubSequencerStart(struct FEventData& InEventData);
	bool StartReminisceneDialog(struct FEventData& RefEventData);
	bool StartRefreshEventObject();
	bool StartRecoverSwoonEventChara(struct FEventData& RefEventData);
	bool StartRecoverSwoon(struct FEventData& RefEventData);
	bool StartRadarMap(struct FEventData& RefEventData);
	bool StartPreparationBattleStart(struct FEventData& RefEventData);
	bool StartPostEffectSetting(class UCameraComponent* TargetCamera, struct FEventData& RefEventData);
	bool StartPlaySE(struct FEventData& RefEventData);
	bool StartPlayerCharacterEnable(struct FEventData& RefEventData);
	bool StartPlayEmotionIcon(struct FEventData& RefEventData);
	bool StartPChatMode(struct FEventData& RefEventData);
	bool StartPartnerSelectDialog(struct FEventData& RefEventData);
	bool StartOpenPartySquadWidget(struct FEventData& RefEventData);
	bool StartOpenPartySplitWidget(struct FEventData& RefEventData);
	bool StartOpenEndCardUI(struct FEventData& RefEventData);
	bool StartOpenEndCardEpilogueUI(struct FEventData& RefEventData);
	bool StartOpenDoor(struct FEventData& RefEventData);
	bool StartOKDialog(struct FEventData& RefEventData);
	bool StartObjectSpawn(struct FEventData& RefEventData);
	bool StartNotificationMessage(struct FEventData& RefEventData);
	bool StartNotificationCountShow(struct FEventData& RefEventData);
	bool StartNarration(struct FEventData& RefEventData);
	bool StartMovePos(struct FEventData& RefEventData);
	bool StartMove(struct FEventData& RefEventData);
	bool StartModifyMP(struct FEventData& RefEventData);
	bool StartModifyHP(struct FEventData& RefEventData);
	bool StartLeaveMember(struct FEventData& RefEventData);
	bool StartJudgeMoney(struct FEventData& RefEventData);
	bool StartInventorLearnAbility(struct FEventData& RefEventData);
	bool StartInventorEventDialog(struct FEventData& RefEventData);
	bool StartHouseInSettingPlaySeq(struct FEventData& RefEventData);
	bool StartHouseInSetting(struct FEventData& RefEventData);
	bool StartGetTameMonster(struct FEventData& RefEventData);
	bool StartGetJobDialog(struct FEventData& RefEventData);
	bool StartGetItemDialog(struct FEventData& RefEventData);
	bool StartFullRecoveryAndPotentiality(struct FEventData& RefEventData);
	bool StartFullRecovery(struct FEventData& RefEventData);
	bool StartFlashbackStart(struct FEventData& RefEventData);
	bool StartFlashbackEnd(struct FEventData& RefEventData);
	bool StartFinishTheater(struct FEventData& RefEventData);
	bool StartFinishTempPartySetting(struct FEventData& RefEventData);
	bool StartFinalBattleStart(struct FEventData& RefEventData);
	bool StartFieldCommandDialog(struct FEventData& RefEventData);
	bool StartEventFadeOut(struct FEventData& RefEventData);
	bool StartEventFadeIn(struct FEventData& RefEventData);
	bool StartEndrollInit(struct FEventData& RefEventData);
	bool StartEndroll(struct FEventData& RefEventData);
	bool StartEndReminiscene(struct FEventData& RefEventData);
	bool StartEndPlayReminiscene(struct FEventData& RefEventData);
	bool StartEnableFieldObject(struct FEventData& RefEventData);
	bool StartEnableEventObject(struct FEventData& RefEventData);
	bool StartEmotionEnable(struct FEventData& RefEventData);
	bool StartDelFollow(struct FEventData& RefEventData);
	bool StartCommand(struct FEventData& RefEventData);
	bool StartCharaMoveStart(struct FEventData& RefEventData);
	bool StartCharaFadeOut(struct FEventData& RefEventData);
	bool StartCharaFadeIn(struct FEventData& RefEventData);
	bool StartCharacterPhysics(struct FEventData& RefEventData);
	bool StartChangeTitle(struct FEventData& RefEventData);
	bool StartChangePlayerResource(struct FEventData& RefEventData);
	bool StartChangePartySet(struct FEventData& RefEventData);
	bool StartChangeMoeny(struct FEventData& RefEventData);
	bool StartChangeMap(struct FEventData& RefEventData);
	bool StartChangeItem(struct FEventData& RefEventData);
	bool StartChangeArea(struct FEventData& RefEventData);
	bool StartChallengeDialog(struct FEventData& RefEventData);
	bool StartCancelSwoon(struct FEventData& RefEventData);
	bool StartCameraTargetEvent(struct FEventData& RefEventData);
	bool StartCameraTarget(struct FEventData& RefEventData);
	bool StartCameraSpawn(struct FEventData& RefEventData);
	bool StartCameraRotation(struct FEventData& RefEventData);
	bool StartCameraPos(struct FEventData& RefEventData);
	bool StartCameraLock(struct FEventData& RefEventData);
	bool StartCameraDecelerate(struct FEventData& RefEventData);
	bool StartBeginReminiscene(struct FEventData& RefEventData);
	bool StartBeginPlayReminiscene(struct FEventData& RefEventData);
	bool StartBattleStart(struct FEventData& RefEventData);
	bool StartAutoSave(struct FEventData& RefEventData);
	bool StartAddMemberEnd(struct FEventData& RefEventData, bool* AddMember);
	bool StartAddMemberDialog(struct FEventData& RefEventData);
	bool StartAddMember(struct FEventData& RefEventData);
	bool SpawnPlayerCharacter(struct FEventData& RefEventData);
	bool SpawnPChatCharacter(struct FEventData& RefEventData);
	bool SpawnEventEffect(int32 ID, class FName& Label, float LifeTime, struct FVector& Pos, int32 TargetCharacter);
	bool SpawnEventCharacterList();
	bool SpawnCharacterThief(struct FEventData& RefEventData);
	bool SpawnCharacterPlacement(struct FEventData& RefEventData);
	bool SpawnCharacterPartyPosition(struct FEventData& RefEventData);
	bool SpawnCharacterNPC(struct FEventData& RefEventData);
	bool SpawnCharacter(struct FEventData& RefEventData);
	void SkipPositionSequencer(const struct FFrameTime& Time);
	void SetUpSeamlessMode(bool bSeamless);
	void SetUpdateType(enum class EEventUpdateType Type);
	void SetTimeZoneTheater(class FName EventName, int32 OverrideTimeZone);
	void SetSubSequenceDirector(class URichEventCommandBase* PEvent);
	void SetSkipOpenDoorLabel(class FName TargetName, bool bOpen);
	void SetRichEventLoadData(bool IsLoad);
	void SetResumeGamePlaySystem();
	bool SetPostProcessDeepThink(bool Enable, class AKSCharacterBase* RefTarget, float Time);
	bool SetPChatCharacterDir(struct FEventData& RefEventData);
	bool SetPartnerNumber(struct FEventData& RefEventData);
	bool SetOpenCloseDoorFunction(struct FEventData& RefEventData);
	void SetMaxSkipInputTime(float MaxTime);
	void SetMaterialEnvParams();
	bool SetLegendMonsterAwakening(enum class EAWAKENING_MONSTER_PARAM EAwake);
	void SetLastSoundBlock(int32 bLock);
	void SetFinishBattleWipe(bool Enable);
	void SetFinish(bool Finish);
	void SetEventSkipInput(bool IsSkipInput);
	void SetEventPlayMode(enum class EKSEVENT_PLAY Mode);
	void SetEventObjectEnableTheater(class FName EventName);
	void SetEventDataWithLevelIDForPartyChat(class FName EventLabel, class AKSCharacterBase* TargetChara, class FName MapLabel, bool TheaterMode);
	void SetEventDataWithLevelID(class FName EventLabel, class AKSCharacterBase* TargetChara, class FName MapLabel, bool TheaterMode);
	void SetEventDataForce(class FName Name, class AKSCharacterBase* TargetChara, bool TheaterMode);
	void SetEventData(class FName Name, class AKSCharacterBase* TargetChara, bool TheaterMode);
	bool SetEventCheckFlag(struct FEventData& RefEventData);
	void SetEnvTimeZoneMPC_PlayingEvent(bool bPlayingEvent);
	bool SetEndrollManager();
	void SetDeepThinkParameter(class FName TagName, const struct FVector& Offset, int32 NIndex);
	bool SetDeepThinkMaterialEnable(bool InEnable);
	bool SetCharacterPosition(struct FEventData& RefEventData);
	void SetCacheMapData(class ULevelSequence* TimeSequencer);
	void SetBanEventSkip(bool bBan);
	void SetAllCharacterEnable(bool Enable);
	void RevertTimeZoneSequencer();
	void RevertPlayerCollision();
	bool RestoreTheater();
	bool RestoreEventSkip();
	bool ResetPostProcess();
	void ResetEventSkip();
	void RequestRefreshSpawnOnEndEvent();
	void RequestPlayEvent();
	void RemoveObject(int32 Index);
	bool RemoveEventEffectList(int32 ID);
	void RemoveEventEffectAll();
	bool RemoveEventEffect(int32 ID);
	void RemoveEmotionIcon(int32 Index);
	bool RemoveCharacterAll();
	void RemoveCharacter(int32 Index);
	void ReferenceSequencerStartDeepDirecting();
	void ReferenceSequencerEndDeepDirecting();
	void ReferenceSequencerDeepDirectingAttachPlayer();
	bool RandomNumberJump(float DeltaTime);
	bool PlayEventTheater(class FName& EventName);
	bool PlayEventForce(const class FString& EventName, class AKSCharacterBase* TargetCharacter);
	bool PlayEvent(const class FString& EventName, class AKSCharacterBase* TargetCharacter);
	void PlayDeepDirection(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	bool PartnerCharacterJump(float DeltaTime);
	bool MemberCountJump(float DeltaTime);
	class FString MakeJsonDataPath(class FName& EventName);
	bool MakeEventData(TArray<struct FEventData>& OutEventData, const class FString& EventJsonName);
	bool LoadSubSequencer(struct FEventData& InEventData);
	bool IsTheaterMode();
	bool IsSeqDebugPlay();
	bool IsPlayReferenceSequencerDeepDirecting();
	bool IsPlaying();
	bool IsFinish();
	bool IsExecutingFinishPre();
	bool IsEventBattleDefeatNextEvent();
	bool IsCheckEventPlayMode();
	bool IsBanEventSkip();
	bool HaveMeatItemJump(float DeltaTime);
	bool HaveItemJump(float DeltaTime);
	enum class EEventUpdateType GetUpdateType();
	enum class EEventTheater GetTheaterStatus();
	class FName GetTalkGeneralText();
	int32 GetSwitchIndoorTriggerIndex(const class FString& TriggerName);
	TArray<class ALevelSequenceActor*> GetSubSequenceActor();
	class ALevelSequenceActor* GetSubSequeceActor(int32 NIndex);
	class FString GetSubSeqFileName();
	class FName GetSubOptionValue(int32 NIndex);
	void GetSubEventBattleParty(enum class EKSPartySet MainSet, enum class EKSPartySet SubSet, TArray<enum class EPlayableCharacterID>* MainParty, TArray<enum class EPlayableCharacterID>* SubParty);
	float GetSkipInputTime();
	bool GetSequencerSkip();
	class FString GetSeqFileName();
	bool GetRichEventLoadData();
	class FName GetResidentTagData(class ULevelSequencePlayer* SequencePlayer);
	class ALevelSequenceActor* GetResidentSequenceActor(int32 NIndex);
	bool GetPlaySequencer();
	class FString GetPlayingEventName();
	struct FEventListData GetPlayEventData();
	class AKSObjectBase* GetObject(int32 Index);
	struct FEventData GetNowEventData();
	float GetMaxSkipInputTime();
	void GetMaterialEnvParams();
	class ALevelSequenceActor* GetMainSequeceActor();
	class AWeaponMasterEventFlow* GetLoadWeaponMasterAssetClass(const class FString& StrPass);
	bool GetFinishEncountWipe();
	bool GetFinishBattleWipe();
	void GetFinalBattleParty(TArray<enum class EPlayableCharacterID>* MainParty, TArray<enum class EPlayableCharacterID>* SubParty);
	bool GetEventSkip();
	enum class EKSEVENT_PLAY GetEventPlayMode();
	struct FEventPlayData GetEventPlayData();
	class UUIFlashbackBase* GetEventFlashbackData();
	TMap<int32, struct FEventEffect> GetEventEffectList();
	class AKSCharacterBase* GetEventCharacter(int32 Index);
	bool GetEventBattleFlag();
	class FName GetDeepThinkTagName(class ULevelSequencePlayer* SequencePlayer);
	struct FVector GetDeepThinkOffset(class ULevelSequencePlayer* SequencePlayer);
	class ALevelSequenceActor* GetDeepThinkActor(int32 NIndex, int32* ArrayNum);
	bool GetDebugPlay();
	class ULevelSequence* GetCacheTimeSequencer();
	int32 GetCacheMapID();
	bool FollowCharacterJump(float DeltaTime);
	bool FinishTheater();
	bool FinishPre();
	bool FinishEventSkip();
	bool FinishEvent();
	bool FinishDialog();
	void ExecCameraMoving();
	void EventSkipUIReset();
	bool EventRemoveCharacterAll();
	void EventRemoveCharacter(int32 Index);
	bool EventLoadLevel(class FName InLevelID, class FName EventSoundLabel, enum class EEventPlayBGM InEventPlayBGM, const class FString& PlayBGMLabel);
	bool End(float DeltaTime);
	bool DialogFinish(class FString* OutNextEventName);
	void DeletePlaySequencer(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	void DeleteDeepDirection(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	void DebugAwakeningPartner(int32 Type, int32 Index);
	void Debug_DumpEventFlagToFile();
	bool CreateRandomNumber(struct FEventData& RefEventData);
	bool CreateEventCharacter(enum class ESPAWN_CHARA_TYPE EType, struct FEventData& InEventData);
	bool CreateDialogEpilogue(struct FEventData& RefEventData);
	bool CreateDialog(struct FEventData& RefEventData);
	bool CommandInit(int32 Index, struct FEventData& InEventData);
	void ClearReplaceTimeSequencer();
	void ClearCacheTimeSequencer();
	void CheckOutputAtomSound();
	void ChangeTimeZoneSequencer(class ULevelSequence* ReplaceSequencer);
	bool BitFlagJump(float DeltaTime);
	bool AttachSequencerSub(class ULevelSequence* SubSeq);
	bool AttachSequencerResidentSub(class ULevelSequence* SubSeq);
	bool AttachSequencerMain(class ULevelSequence* MainSeq);
	bool AttachPlaySequenceSub(class ULevelSequence* SubSeq, int32 NumLoop, class FName TagName);
	bool AttachPlaySequencerResidentSub(class ULevelSequence* SubSeq, int32 NIndex, class FName TagName, const struct FVector& VOffset);
	void AddObject(int32 Index, class AKSObjectBase* Object);
	bool AddEventEffectList(int32 ID, struct FEventEffect& EffectData);
	void AddEventCharacter(int32 Index, class AKSCharacterBase* Character);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.EventSkipBase
class UEventSkipBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UEventSkipBase* GetDefaultObj();

	bool UpdateProgress(float CurrentTime, float MaxTime);
	void OnEventSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs);
	void Debug_SetForceSkip(bool bforceSkip);
};

// 0x8 (0x58 - 0x50)
// Class Majesty.EventStateData
class UEventStateData : public UStateDataBase
{
public:
	uint8                                        Pad_1435[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEventStateData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.EventTableUtility
class UEventTableUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEventTableUtility* GetDefaultObj();

	void GetEventSoundDataFromName(enum class EBPFuncReturnCode* ReturnCode, struct FEventSoundData* OutEventSound, class FName Label);
	void GetEventListDataFromName(enum class EBPFuncReturnCode* ReturnCode, struct FEventListData* OutEventData, class FName Label);
};

// 0x40 (0x2C0 - 0x280)
// Class Majesty.EventTargetBase
class AEventTargetBase : public APawn
{
public:
	struct FVector                               EventCameraLocation;                               // 0x280(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               EventCameraLocationInHouse;                        // 0x28C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              EventCameraRotation;                               // 0x298(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               PlayerCameraLocation;                              // 0x2A4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              PlayerCameraRotation;                              // 0x2B0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        PlayerManualFocusDistance;                         // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AEventTargetBase* GetDefaultObj();

	void SwitchCamera(struct FEventData& RefEventData, bool InHouse);
	void SetPlayerManualFocusDistance(float ManualDistance);
	void FollowingCamera(struct FEventData& RefEventData);
};

// 0x738 (0x970 - 0x238)
// Class Majesty.EventTriggerBox
class AEventTriggerBox : public AMJBoxTrigger
{
public:
	class FString                                EventName;                                         // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredNPCIndex;                                  // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RequiredItemLabel;                                 // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_PlacementLabel;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPlacementData                        M_PlacementData;                                   // 0x268(0x700)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         M_IsSubStory;                                      // 0x968(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERADARMAP_ICON_TYPE               M_RadarMapIconType;                                // 0x969(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1445[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEventTriggerBox* GetDefaultObj();

	void SetupTriggerAfterSpawn(class FName PlacementLabel);
	bool PlayEvent(const class FString& TalkEventName);
	bool IsTalkEventCheck(class FString* TalkEventName);
	bool IsSubStoryTrigger();
	bool GetTriggerEnable();
	enum class ERADARMAP_ICON_TYPE GetRadarMapIconType();
	class FName GetPlacementLabel();
};

// 0x18 (0x248 - 0x230)
// Class Majesty.FadeManager
class AFadeManager : public AAcqManagerBase
{
public:
	class UKSFade*                               M_FadeWidget;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattleWipeBase*                       M_BattleWipeWidget;                                // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_FadeUser;                                        // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1467[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFadeManager* GetDefaultObj();

	void WipeOut(enum class EWIPE_KIND WipeKind);
	void WipeInAtBattleEndFromEvent();
	void WipeIn(enum class EWIPE_KIND WipeKind);
	void SetIsCancelWipeOutAtBattleEnd(bool Val);
	bool IsFadeUser(enum class EFADE_USER User);
	bool IsFadeEnd();
	bool IsBattleWipeActive();
	bool IsBattleEndWipeOut();
	void HideBattleEndWipe_Immediately();
	bool GetIsCancelWipeOutAtBattleEnd();
	class UKSFade* GetFadeWidget(enum class EFADE_KIND FadeKind);
	int32 GetFadeUser();
	enum class EFADE_TYPE GetFadeType(enum class EFADE_KIND FadeKind);
	class UBattleWipeBase* GetBattleWipeWidget();
	class UKSFade* FadeOut(enum class EFADE_KIND FadeKind, float EndTime, const struct FLinearColor& Color, enum class EFADE_USER FadeUser);
	class UKSFade* FadeInImmediately(enum class EFADE_KIND FadeKind, enum class EFADE_USER FadeUser);
	class UKSFade* FadeIn(enum class EFADE_KIND FadeKind, float EndTime, const struct FLinearColor& Color, enum class EFADE_USER FadeUser);
	class UKSFade* ClearFadeForcibly(enum class EFADE_KIND FadeKind);
};

// 0x8 (0x228 - 0x220)
// Class Majesty.FadeNpcVolumeBase
class AFadeNpcVolumeBase : public AActor
{
public:
	float                                        M_NpcFadeTime;                                     // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_AdditionalNpcFadeTime;                           // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFadeNpcVolumeBase* GetDefaultObj();

	float GetTotalFadeTime();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.FastTravelChangeDestTableUtil
class UFastTravelChangeDestTableUtil : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UFastTravelChangeDestTableUtil* GetDefaultObj();

	bool GetChangedDestinationByEventFlag(class FName LevelLabel, struct FFastTravelChangeDestination* NewDestination);
};

// 0x58 (0x268 - 0x210)
// Class Majesty.FBImage
class UFBImage : public UImage
{
public:
	TArray<class UKSPaperFlipbook*>              CustomFlipbook;                                    // 0x210(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_147E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperFlipbook*                        Flipbook;                                          // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFlipbookCalcData                     CalcData;                                          // 0x230(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoSizeUpdate;                                    // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLayout;                                       // 0x251(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableOffset;                                      // 0x252(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1483[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DrawSize;                                          // 0x254(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timer;                                             // 0x25C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnimationLoop;                                     // 0x260(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1484[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFBImage* GetDefaultObj();

	void Tick(float InDeltaTime);
	void SwitchFlipbookModifyTarget();
	bool SetFlipbook(class UPaperFlipbook* Flipbook);
	void SetFBSize(class UPaperSprite* TargetSprite);
	void SetDrawSize(const struct FVector2D& Size);
	void SetAnimationLoop(bool bLoop);
	bool IsFlipbookAnimeFinish();
	struct FVector2D GetSpriteOffset();
	struct FVector2D GetMaxFBSize();
	class UKSPaperFlipbook* GetFlipbookModifyTarget();
	void CalcSprite();
};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.FBPart
class UFBPart : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFBPart* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class Majesty.FieldChangeStateData
class UFieldChangeStateData : public UStateDataBase
{
public:
	uint8                                        Pad_1485[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldChangeStateData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.FieldCommandDataUtility
class UFieldCommandDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandDataUtility* GetDefaultObj();

	class FName GetFieldCommandStatusMenuIconLabel(enum class EMJFieldCommandType FCType);
	class FName GetFieldCommandNameLabel(enum class EMJFieldCommandType FCType);
	class FName GetFieldCommandIconLabel(enum class EMJFieldCommandType FCType);
	bool GetFieldCommandFlowClassType(enum class EBPFuncReturnCode* ReturnCode, TSubclassOf<class AFieldCommandFlowBase>* FlowClass, enum class EMJFieldCommandType FCType);
	class FName GetFieldCommandDetailLabel(enum class EMJFieldCommandType FCType);
	bool GetFieldCommandDataByType(enum class EBPFuncReturnCode* ReturnCode, struct FFieldCommandData* OutData, enum class EMJFieldCommandType FCType);
	bool GetFieldCommandDataByRowName(enum class EBPFuncReturnCode* ReturnCode, struct FFieldCommandData* OutData, class FName RowName);
	float GetFieldCommandActionWaitTime(enum class EMJFieldCommandType FCType);
};

// 0x10 (0x230 - 0x220)
// Class Majesty.FieldCommandFlowBase
class AFieldCommandFlowBase : public AActor
{
public:
	uint8                                        Pad_14BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMJFieldCommandType               M_FieldCommandType;                                // 0x228(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14BF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFieldCommandFlowBase* GetDefaultObj();

	void PrintToVLog(const class FString& Str);
	bool IsImpossibleSucceed(class AKSCharacterBase* TargetNpc);
	TMap<class FString, class FString> GrabStateSnapshot_Internal();
	class FString GetRunningStatus();
	bool GetIsGameOverWhenLoose();
	enum class EMJFieldCommandType GetFieldCommandType();
	class AKSCharacterBase* GetFieldCommandTargetNpc();
	class AKSCharacterBase* GetFieldCommandOwner();
	bool Debug_ExecAutoPlayProcess();
};

// 0x78 (0x2A8 - 0x230)
// Class Majesty.FieldCommandManager
class AFieldCommandManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_14E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EMJFieldCommandType, struct FFieldCommandResult> LastFieldCommandResults;                           // 0x238(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         IsFieldCommandEvent;                               // 0x288(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestBadConnectionInfo;                          // 0x289(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InterruptPlay;                                     // 0x28A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInFcOpeningPeriod;                                // 0x28B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Debug_WaitReason;                                  // 0x290(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AFieldCommandManager* GetDefaultObj();

	bool StartSwoonTalk(class AKSCharacterBase* TargetNpc);
	bool StartFieldCommand();
	bool StartBadConnectionTalk();
	void SetupFlowBase(class AKSCharacterBase* TargetChara, enum class EMJFieldCommandType FCType);
	bool SetupCommand(TArray<enum class EMJFieldCommandType>& FieldCommand);
	bool SetStartParam(class AKSCharacterBase* TargetChara, enum class EMJFieldCommandType Type);
	void SetLastFieldCommandResults(enum class EMJFieldCommandType FCType, enum class EFieldCommandStatus FcStatus);
	void SetIsInterruptPlay(bool Val);
	void SetIsIgnoreSwoonProcessFromEventCommand(bool Val);
	void SetIsIgnoreFollowProcessFromEventCommand(bool Val);
	bool RecoveryConnectionValue(int32 TownID);
	void PrintToVLog(const class FString& Str);
	bool IsPlayingBadConnectionFlow();
	bool IsPlaying();
	bool IsImpossibleSucceed(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc);
	bool IsCompleteFieldCommand(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc);
	bool IsBattleType();
	bool IsAvailableFieldCommand(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc);
	TMap<class FString, class FString> GrabStateSnapshot_Internal();
	class AKSCharacterBase* GetTargetNpc();
	class FString GetState();
	TArray<struct FPurchaseItemInfoData> GetPurchaseItemList(class FName NPCLabel);
	class AFieldCommandFlowBase* GetPlayingCommand();
	TMap<enum class EMJFieldCommandType, struct FFieldCommandResult> GetLastFieldCommandResults();
	bool GetIsInterruptPlay();
	bool GetIsGameOverWhenLoose();
	bool GetIsFieldCommandEvent();
	class AFieldCommandManager* GetInstance();
	class AFieldCommandFlowBase* GetFlowBase(enum class EMJFieldCommandType FCType);
	bool FinishFieldCommand();
	void Debug_SetWaitReason(class FText Reason);
	bool ConnectionBadNotification();
	bool CanExecFieldCommand(class FName NPCLabel, enum class EMJFieldCommandType FCType);
	bool AddEventBalloon(class FName RowName, class AActor* Target);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.FieldCommandMenuBase
class UFieldCommandMenuBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandMenuBase* GetDefaultObj();

	bool Open(class AKSCharacterBase* TargetChara, bool DrawLeft, TArray<enum class EMJFieldCommandType>& CommandList);
	bool IsInputEnableMode();
	bool Close(bool StateCheck);
	bool CheckUniqueCommandFlow();
};

// 0x8 (0x58 - 0x50)
// Class Majesty.FieldCommandMenuStateData
class UFieldCommandMenuStateData : public UStateDataBase
{
public:
	uint8                                        Pad_14F2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldCommandMenuStateData* GetDefaultObj();

};

// 0x0 (0x358 - 0x358)
// Class Majesty.FieldCommandPopupWidgetBase
class UFieldCommandPopupWidgetBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandPopupWidgetBase* GetDefaultObj();

	bool Open(class AKSCharacterBase* TargetCharacter, TArray<enum class EMJFieldCommandType>& Commands);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.FieldCommandPreviewMenu
class UFieldCommandPreviewMenu : public UKSUserWidgetBase
{
public:
	int32                                        M_CurrentTabCursorIndex;                           // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFieldCommandPreviewMenuState     WidgetState;                                       // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1535[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldCommandPreviewMenu* GetDefaultObj();

	void SetState(enum class EFieldCommandPreviewMenuState NextState);
	void SetCurrentTabCursorIndex(int32 Index);
	void OnUpdateState(enum class EFieldCommandPreviewMenuState CurrentState);
	void OnEndState(enum class EFieldCommandPreviewMenuState CurrentState);
	void OnDecide_Internal();
	void OnCursorUp_Internal();
	void OnCursorDown_Internal();
	void OnCancel_Internal();
	void OnBeginState(enum class EFieldCommandPreviewMenuState CurrentState);
	enum class EFieldCommandPreviewMenuState GetState();
	int32 GetCurrentTabCursorIndex();
};

// 0x8 (0x2C8 - 0x2C0)
// Class Majesty.FieldCommandPreviewPanelBase
class UFieldCommandPreviewPanelBase : public UAcqUserWidget
{
public:
	int32                                        M_CurrentCursorIndex;                              // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        M_BanInput;                                        // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFieldCommandPreviewPanelBase* GetDefaultObj();

	void SetCurrentCursorIndex(int32 Index);
	void SetBanInput(int32 Allow);
	int32 GetCurrentCursorIndex();
	bool GetBanInput(enum class EUI_INPUT_TYPE Type);
};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.FieldCommandPreviewTabIconBase
class UFieldCommandPreviewTabIconBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandPreviewTabIconBase* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class Majesty.FieldCommandStateData
class UFieldCommandStateData : public UStateDataBase
{
public:
	uint8                                        Pad_154B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldCommandStateData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.FieldCommandUtil
class UFieldCommandUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandUtil* GetDefaultObj();

	void SetIsFcV2(bool Val);
	void OpenFieldCommandPreviewMenu();
	void OpenFieldCommandMenu();
	bool IsUseFieldCommandsAllwaysTimeZone(const TArray<enum class EMJFieldCommandType>& Type, class AKSCharacterBase* TargetChara, bool IsDayTime);
	bool IsUseFieldCommandAllwaysTimeZone(enum class EMJFieldCommandType Type, class AKSCharacterBase* TargetChara, bool IsDayTime);
	bool IsSwoonFc(enum class EMJFieldCommandType Type);
	bool IsPlayingFieldCommand();
	bool IsPlayingBadConnectionFieldCommand();
	bool IsOpenFieldCommandMenu(class UObject* WorldContextObject, class AKSCharacterBase* RefTalk);
	bool IsItemFc(enum class EMJFieldCommandType Type);
	bool IsInformationFc(enum class EMJFieldCommandType Type);
	bool IsFollowFc(enum class EMJFieldCommandType Type);
	bool IsFieldCommandTargetNpc(class AKSCharacterBase* NPC);
	bool IsBadConnectionNPC(class FName NPCLabel);
	bool IsBadConnection(int32 TownID);
	TArray<enum class EMJFieldCommandType> GetSwoonFcTypes();
	void GetPartyFieldCommand(bool AvaiableOnly, class AKSCharacterBase* TargetChara, bool* CanUseCommand, TArray<enum class EMJFieldCommandType>* FieldCommandList);
	TArray<enum class EMJFieldCommandType> GetItemFcTypes();
	bool GetIsGameOverWhenLoose();
	bool GetIsFcV2();
	TArray<enum class EMJFieldCommandType> GetInformationFcTypes();
	TArray<enum class EMJFieldCommandType> GetFollowFcTypes();
	void Debug_SetIsForceSuccessFC(bool Val);
	void Debug_SetIsForceFailureFC(bool Val);
	bool Debug_GetIsForceSuccessFC();
	bool Debug_GetIsForceFailureFC();
	bool CanExecFieldCommand(class FName NPCLabel, enum class EMJFieldCommandType FCType);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.FieldCommandWidgetBase
class UFieldCommandWidgetBase : public UKSUserWidgetBase
{
public:
	class UBackgroundBlur*                       Blur;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFieldCommandWidgetBase* GetDefaultObj();

};

// 0x0 (0x360 - 0x360)
// Class Majesty.FieldCommandWidgetSwoonBase
class UFieldCommandWidgetSwoonBase : public UFieldCommandWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandWidgetSwoonBase* GetDefaultObj();

	bool OpenNPCDialog(class FName NPCLabel);
	bool OpenFailedDialog(class FName NPCLabel);
	int32 GetDialogInput();
};

// 0x8 (0x368 - 0x360)
// Class Majesty.FieldCommandWidgetBattleBase
class UFieldCommandWidgetBattleBase : public UFieldCommandWidgetSwoonBase
{
public:
	int32                                        ForgetAbilityIndex;                                // 0x360(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldCommandWidgetBattleBase* GetDefaultObj();

	bool OpenLearnAbilityDialog(class FName NPCLabelName, bool IsAbilityFull);
	bool OpenForgetAbilityDialog(class FName NPCLabel, TArray<int32>& SelectAbilityList);
	bool OpenConfirmAbilityDialog(TArray<int32>& SelectAbilityList);
	void IsExecLearnAbility(bool* ExecLearnAbility);
};

// 0x0 (0x360 - 0x360)
// Class Majesty.UFieldCommandWidgetFollowBase
class UUFieldCommandWidgetFollowBase : public UFieldCommandWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UUFieldCommandWidgetFollowBase* GetDefaultObj();

	bool OpenSwapDialog();
	bool OpenReleaseDialog();
	bool OpenFollowDialog();
	bool OpenFixedFollowNPCReleaseDialog();
	bool OpenFixedFollowNPCDialog();
	bool OpenFailedDialog();
	void GetDialogInput(int32* DialogInput);
	bool CloseDialog();
};

// 0x0 (0x360 - 0x360)
// Class Majesty.FieldCommandWidgetInfoBase
class UFieldCommandWidgetInfoBase : public UFieldCommandWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandWidgetInfoBase* GetDefaultObj();

	bool OpenInformationDialog(class FName NPCLabel);
	bool OpenFailedDialog(class FName NPCLabel);
	bool OpenConfirmDialog(class FName NPCLabel);
	bool GetResult(bool* WasExece, bool* WasSuccess);
};

// 0x20 (0x380 - 0x360)
// Class Majesty.FieldCommandWidgetItemBase
class UFieldCommandWidgetItemBase : public UFieldCommandWidgetBase
{
public:
	bool                                         IsExecuted;                                        // 0x360(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsSucceeded;                                       // 0x361(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1570[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ItemLabels;                                        // 0x368(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  PlayEventLabel;                                    // 0x378(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFieldCommandWidgetItemBase* GetDefaultObj();

	bool OpenDialog(class FName NPCLabel);
	class FName GetPlayEventLabel();
	TArray<class FName> GetItemLabels();
	bool GetIsSucceeded();
	bool GetIsExecuted();
};

// 0x0 (0x360 - 0x360)
// Class Majesty.FieldCommandWidgetMonsterBase
class UFieldCommandWidgetMonsterBase : public UFieldCommandWidgetSwoonBase
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandWidgetMonsterBase* GetDefaultObj();

	bool OpenMonsterReleaseDialogInBattle(TArray<struct FMonsterListData>& ShowMonsterList);
	bool OpenMonsterReleaseDialog(TArray<struct FMonsterListData>& ShowMonsterList);
	void GetReleaseMonsterList(TArray<int32>* ReleaseMonsterList);
	bool CloseMonsterReleaseDialog();
};

// 0x0 (0x360 - 0x360)
// Class Majesty.FieldCommandWidgetRobBase
class UFieldCommandWidgetRobBase : public UFieldCommandWidgetSwoonBase
{
public:

	static class UClass* StaticClass();
	static class UFieldCommandWidgetRobBase* GetDefaultObj();

	bool OpenResultDialog(TArray<struct FPurchaseItemInfoData>& GotItems, TArray<struct FPurchaseItemInfoData>& CouldNotGetItems);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.FieldPathTableUtility
class UFieldPathTableUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFieldPathTableUtility* GetDefaultObj();

	void GetFieldPathTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetFieldPathData(struct FFieldPathInfoData* OutData, class FName TargetLabel);
};

// 0x8 (0x58 - 0x50)
// Class Majesty.FieldStateData
class UFieldStateData : public UStateDataBase
{
public:
	uint8                                        Pad_1576[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldStateData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.FlagOverrideUtility
class UFlagOverrideUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UFlagOverrideUtility* GetDefaultObj();

	void NotifyFlagOverrideDB(class FName DbName, enum class EDBNoticeType Notice);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.FlagRandomControlDbUtil
class UFlagRandomControlDbUtil : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UFlagRandomControlDbUtil* GetDefaultObj();

};

// 0x0 (0x230 - 0x230)
// Class Majesty.FlagRandomControlManager
class AFlagRandomControlManager : public AAcqManagerBase
{
public:

	static class UClass* StaticClass();
	static class AFlagRandomControlManager* GetDefaultObj();

	void OnStartTimeZoneChange(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnStartLevelChange(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.FontDataUtility
class UFontDataUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFontDataUtility* GetDefaultObj();

	class UDataTable* GetTalkFontStyleDB();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.FootStepTableUtility
class UFootStepTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UFootStepTableUtility* GetDefaultObj();

	bool GetFootStepTableRowData(struct FFootStepData* OutData, class FName TargetLabel, bool EnableLog);
};

// 0x68 (0x298 - 0x230)
// Class Majesty.FrameGrabberManager
class AFrameGrabberManager : public AAcqManagerBase
{
public:
	class UMaterialInstanceDynamic*              MaterialInstanceDynamic;                           // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                CaptureFrameData;                                  // 0x238(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            CaptureFrameTexture;                               // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NoiseAnimation;                                    // 0x250(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x1B];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bCaptureSuccess;                                 // 0x26C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_157C[0x2B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFrameGrabberManager* GetDefaultObj();

	void StopFrameGrab();
	bool StartFrameGrab();
	void SetMaterialInstanceDynamic(class UMaterialInstanceDynamic* MaterialInstance);
	void SetCaptureEnable(bool Enable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GameColorTableUtility
class UGameColorTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UGameColorTableUtility* GetDefaultObj();

	void NotifyGameColorDb(class FName DbName, enum class EDBNoticeType Notice);
	void GetGameColorAsSlateColor(enum class EGameColor GameColor, struct FSlateColor* OutSlateColor);
	struct FLinearColor GetGameColor(enum class EGameColor GameColor);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GameConditionUtility
class UGameConditionUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameConditionUtility* GetDefaultObj();

	bool CheckGameCondition(enum class EGAME_CONDITION_TYPE Type, struct FGameConditionInfo* Param);
};

// 0x10 (0x230 - 0x220)
// Class Majesty.GameDataClearnupWorker
class AGameDataClearnupWorker : public AActor
{
public:
	class UKSSaveSystem*                         M_targetSystemData;                                // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1583[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameDataClearnupWorker* GetDefaultObj();

	void StartClearnup(class UKSSaveSystem* SystemData);
	bool GetIsDeleted();
	bool GetIsComplete();
};

// 0xE8 (0x318 - 0x230)
// Class Majesty.GameMainSequenceManager
class AGameMainSequenceManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_158C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStateDataBase*>                M_SequenceList;                                    // 0x240(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EMAINSEQ_TYPE                     M_CurrentState;                                    // 0x250(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMAINSEQ_TYPE                     M_BeforeState;                                     // 0x251(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_158D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_RequestFlowIndex;                                // 0x254(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EREQUEST_TYPE, struct FMainSequneceRequestParam> M_RequestList;                                     // 0x258(0x50)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMainSequneceRequestParam>     M_HoldingRequestList;                              // 0x2A8(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EREQUEST_TYPE, struct FTransitionData> M_TrandisitonSeqType;                              // 0x2B8(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<class UStateDataBase*>                M_BackGroundData;                                  // 0x308(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGameMainSequenceManager* GetDefaultObj();

	bool RequestCheck(enum class EMAINSEQ_TYPE* Type, enum class EREQUEST_TYPE* PassingRequest);
	bool IsBattleMode();
	TArray<struct FMainSequneceRequestParam> GetHoldingRequestList();
	void Debug_ShowMainSequenceInfo(bool bEnable);
	void Debug_ChangeState(enum class EMAINSEQ_TYPE Type);
	bool CheckNextFlow(enum class EMAINSEQ_TYPE* Type);
	void CheckHoldingRequest();
	bool CheckCurrentState(enum class EMAINSEQ_TYPE CheckType);
	void AddRequest(enum class EREQUEST_TYPE Type, const struct FMainSequneceRequestParam& Param);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GameMainSequenceUtility
class UGameMainSequenceUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameMainSequenceUtility* GetDefaultObj();

	struct FMainSequneceRequestParam CreateDefaultParamWithStateParam(const struct FMainSequenceStateParam& StateParam);
};

// 0x0 (0x50 - 0x50)
// Class Majesty.GameOverStateData
class UGameOverStateData : public UStateDataBase
{
public:

	static class UClass* StaticClass();
	static class UGameOverStateData* GetDefaultObj();

};

// 0x20 (0x388 - 0x368)
// Class Majesty.GameoverWidgetBase
class UGameoverWidgetBase : public UKSUserWidgetWithState
{
public:
	FMulticastInlineDelegateProperty_            FinishEvent;                                       // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OpenFinish;                                        // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameoverWidgetBase* GetDefaultObj();

	void SetGameOverType(enum class EGAMEOVER_TYPE Type);
	int32 IsCursorSelect();
	void DecideEvent();
	void CursorUpEvent();
	void CursorDownEvent();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GameParamTableUtility
class UGameParamTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UGameParamTableUtility* GetDefaultObj();

	bool GetGameParamTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetGameParamTableRowData(enum class EBPFuncReturnCode* ReturnCode, struct FGameParamInfo* OutData, class FName TargetLabel, bool LogEnable);
	bool GetBattleParamRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetBattleParamData(enum class EBPFuncReturnCode* ReturnCode, struct FGameParamInfo* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x8 (0x238 - 0x230)
// Class Majesty.GameSpeedManager
class AGameSpeedManager : public AAcqManagerBase
{
public:
	bool                                         b_mBattleSpeedChange;                              // 0x230(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         b_mEventSpeedChange;                               // 0x231(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEVENT_MODE                       M_eEventMode;                                      // 0x232(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_159B[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameSpeedManager* GetDefaultObj();

	void ResetEventSpeedUp(class UObject* WorldContextObject);
	enum class EEVENT_MODE GetEventMode();
	enum class ECHANGE_TIME_DILATION GetEventDilation();
	void EventSpeedUpInit(class UObject* WorldContextObject);
	void EventSpeedUpFinish(class UObject* WorldContextObject);
	void EventSpeedUp(class UObject* WorldContextObject, bool Enable);
	void ChangeEventMode(bool bIsUp);
	void BattleSpeedUpInit(class UObject* WorldContextObject);
	void BattleSpeedUpFinish(class UObject* WorldContextObject);
	void BattleSpeedUp();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GiftDataTableUtility
class UGiftDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UGiftDataTableUtility* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.GiftUtility
class UGiftUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGiftUtility* GetDefaultObj();

	bool TryReceiveGift(struct FGiftData& GIFT, TArray<class FName>* OutFailedReceiveItems);
	bool GetIsPreOrdered();
	bool GetAvailablePreOrderGiftData(struct FGiftData* OutData);
	void Debug_SetIsForcePreOrdered(bool Val);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GraphicsUtility
class UGraphicsUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGraphicsUtility* GetDefaultObj();

	void SetVSyncEnable(bool bEnable);
	void SetViewDistanceQuality(int32 NQuality);
	void SetTextureQuality(int32 NQuality);
	void SetShadowQuality(int32 NQuality);
	void SetShaderQuality(int32 NQuality);
	void SetResolutionQuality(int32 NQuality);
	void SetPostProcessQuality(int32 NQuality);
	void SetMaxFPS(int32 NMaxFPS);
	void SetGraphicsPreset(class UObject* WorldContextObject, int32 NQuality);
	void SetFoloageQuality(int32 NQuality);
	void SetEyeAdaptationEnable(bool bEnable);
	void SetEffectQuality(int32 NQuality);
	void SetAntiAliasingQuality(int32 NQuality);
	bool IsEnableGraphicsPreset(class UObject* WorldContextObject);
	int32 GetViewDistanceQuality();
	int32 GetShaderQuality();
	int32 GetResolutionQuality();
	int32 GetFoliageQuality();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GuildDataUtility
class UGuildDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UGuildDataUtility* GetDefaultObj();

	void SetAcquiredJobLicense(int32 GuildId, int32 LicenseIndex, bool bAcquired);
	bool IsAcquiredJobLicense(int32 GuildId, int32 LicenseIndex);
	void GetGuildNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	void GetGuildDataByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FGuildData* OutGuildData, class FName GuildLabel);
	void FindGuildInWorldMapLocation(TArray<int32>* OutGuildId, class FName WorldMapLabel);
	void FindGuildDataByNpcLabel(enum class EBPFuncReturnCode* ReturnCode, struct FGuildData* OutGuildData, class FName NPCLabel);
	bool CheckAchievedJobLicense(int32 GuildId, int32 LicenseIndex);
};

// 0x90 (0x3E8 - 0x358)
// Class Majesty.GuildMenuBase
class UGuildMenuBase : public UKSUserWidgetBase
{
public:
	struct FGuildData                            GuildData;                                         // 0x358(0x88)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FName                                  GuildLabel;                                        // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGuildMenuBase* GetDefaultObj();

	void SetGuildData(class FName Label);
	bool ReOpenGuildMenu();
	bool GetReOpenFlag();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.GuildSaveDataUtil
class UGuildSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UGuildSaveDataUtil* GetDefaultObj();

	void SetVisitedGuild(int32 GuildId, bool bVisited);
	void SetAcquiredLicense(int32 GuildId, int32 LicenseIndex, bool bAcquired);
	bool IsVisitedGuild(int32 GuildId);
	bool IsAcquiredLicense(int32 GuildId, int32 LicenseIndex);
};

// 0x10 (0x368 - 0x358)
// Class Majesty.HelpWindowBase
class UHelpWindowBase : public UKSUserWidgetBase
{
public:
	class UPanelWidget*                          M_WidgetRoot;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_CurrentOffset;                                   // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHelpWindowBase* GetDefaultObj();

	void SetPositionByWidget(class UUserWidget* Widget, bool ForceFlip);
	void SetPosition(struct FVector2D& NewPosition);
	void SetOffset(struct FVector2D& Offset);
	struct FVector2D GetCurrentOffset();
};

// 0x30 (0x268 - 0x238)
// Class Majesty.HolyTorchItemTriggerBase
class AHolyTorchItemTriggerBase : public AMJBoxTrigger
{
public:
	enum class EHOLY_TORCH_TYPE                  HolyTorchType;                                     // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EventLabels;                                       // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<enum class EPlayableCharacterID>      RequiredCharaId;                                   // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        TriggerStartFlag;                                  // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TriggerEndFlag;                                    // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AHolyTorchItemTriggerBase* GetDefaultObj();

	void SwitchShiningMirror(bool bEnable);
	bool IsTriggerEnabled();
	bool GetShiningMirrorFlag();
	class FName GetPlayEvent();
	bool GetCharacterConditon(int32 NIndex);
	bool CheckReburnCondition();
	void CheckLuminusStatue();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.HolyTorchSaveDataUtil
class UHolyTorchSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UHolyTorchSaveDataUtil* GetDefaultObj();

	void SetHolyTorchState(enum class EHOLY_TORCH_TYPE TorchType, enum class EHOLY_TORCH_STATE TorchState);
	bool IsAllHolyTorchReBurn();
	enum class EHOLY_TORCH_STATE GetHolyTorchState(enum class EHOLY_TORCH_TYPE TorchType);
	int32 GetBurnOutNum();
	int32 GetBurnNum();
};

// 0x10 (0x248 - 0x238)
// Class Majesty.HouseEnterTrigger
class AHouseEnterTrigger : public AKSTriggerBase
{
public:
	int32                                        M_nInFloor;                                        // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nOutFloor;                                       // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fManualFocusDistance_Room;                       // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AHouseEnterTrigger* GetDefaultObj();

	void SetupFocalLength(bool bIsHouseIn);
	int32 GetOutFloor();
	int32 GetInFloor();
};

// 0x10 (0x550 - 0x540)
// Class Majesty.HunterPartnerFbComponent
class UHunterPartnerFbComponent : public UCharacterFlipbookComponent
{
public:
	uint8                                        Pad_15CF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHunterPartnerFbComponent* GetDefaultObj();

	void SetPartnerVisibility(bool bVisibility);
	bool IsPartnerVisibile();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.AcqUserObjectListEntry
class IAcqUserObjectListEntry : public IUserObjectListEntry
{
public:

	static class UClass* StaticClass();
	static class IAcqUserObjectListEntry* GetDefaultObj();

	void OnScrolled();
};

// 0x8 (0x268 - 0x260)
// Class Majesty.InitialLaunchOptionMenu
class UInitialLaunchOptionMenu : public UUserWidget
{
public:
	enum class EINITIAL_OPTION_WIDGET_STATE      M_WidgetState;                                     // 0x260(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15D1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInitialLaunchOptionMenu* GetDefaultObj();

	void UpdateWidgetState(enum class EINITIAL_OPTION_WIDGET_STATE WidgetState);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.InvadeDataUtility
class UInvadeDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UInvadeDataUtility* GetDefaultObj();

	int32 InvadeDataLabelToId(class FName Label);
	class FName InvadeDataIdToLabel(int32 ID);
	bool InvadeDataExistsByLabel(class FName Label);
	TArray<class FName> GetInvadeDataLabelList();
	void GetInvadeDataByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FInvadeData* OutInvadeData, class FName Label);
};

// 0x50 (0x100 - 0xB0)
// Class Majesty.InventorComponent
class UInventorComponent : public UActorComponent
{
public:
	TMap<class FName, struct FInventorItemData>  M_acInventorItemData;                              // 0xB0(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventorComponent* GetDefaultObj();

	bool UseInventorItem(class FName StrInventorItemLabel);
	bool UpdateCreateInventorItem(int32 NTurnCount, bool bRandom, bool bUseText);
	bool StartCreateInventorItem(class FName StrInventorItemLabel);
	bool StartCreateAllInventorItem();
	bool IsInventorItemReady(class FName StrLabel);
	bool IsInventorItemExecCreate(class FName StrLabel);
	bool IsInventorItemAllReady();
	bool IsExecutableInventorItem();
	bool InitInventorItemData();
	void GetInventorItemCreateTurn(class FName StrLabel, int32* NRestTurn, int32* NCreateTurnMax);
	bool AddInventorItemData(class FName StrInventorItemLabel, int32 NInventorTurn);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.InventorInventionDbUtil
class UInventorInventionDbUtil : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UInventorInventionDbUtil* GetDefaultObj();

	bool GetInventionDataByRowName(struct FInventionData* OutData, class FName& RowName);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ItemDataUtility
class UItemDataUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemDataUtility* GetDefaultObj();

	void SaveEquipmentDataLabelToId(struct FSaveEquipmentData& SaveEquipDataLabel, struct FSaveEquipmentDataID& OutSaveEquipDataId);
	void SaveEquipmentDataIdToLabel(struct FSaveEquipmentDataID& SaveEquipDataId, struct FSaveEquipmentData& OutSaveEquipDataLabel);
	void NotifyItemDataDB(class FName DbName, enum class EDBNoticeType Notice);
	int32 ItemLabelToID(class FName ItemLabel);
	class FName ItemIDToLabel(int32 ItemId);
	bool IsUsableSpecialItemInMenu(class FName SpItemLabel);
	bool IsSpecialItem(class FName ItemLabel);
	bool IsMeatItem(class FName SpItemLabel);
	bool IsItemExistsInDB(class FName ItemLabel);
	bool IsHolyTorchItem(class FName SpItemLabel);
	bool IsDisplaySpecialItemInMenuByLabel(class FName SpItemLabel);
	bool IsDisplaySpecialItemInMenu(struct FSpecialItemData& SpecialItem);
	void GetSpesialItemDataByItemLabel(enum class EBPFuncReturnCode* ReturnCode, struct FSpecialItemData* OutSpItemData, class FName ItemLabel);
	void GetSpesialItemData(enum class EBPFuncReturnCode* ReturnCode, struct FSpecialItemData* OutSpItemData, class FName SpItemLabel);
	void GetSpecialItemLabelList(enum class ESPECIAL_ITEM_TYPE SpType, TArray<class FName>* OutList);
	enum class EBATTLE_TARGET_TYPE GetItemTarget(class FName ItemLabel);
	void GetItemPossesionMaxTableByCategory(TMap<enum class EItemCategoryData, int32>* OutMaxTable);
	int32 GetItemPossesionMaxByItemLabel(class FName ItemLabel);
	int32 GetItemPossesionMaxByItemId(int32 ItemId);
	int32 GetItemPossesionMaxByCategory(enum class EItemCategoryData Category);
	bool GetItemNameTextWithIcon(class FText* OutItemName, class FName ItemLabel);
	bool GetItemNameText(class FText* OutItemName, class FName ItemLabel);
	class FName GetItemNameID(class FName ItemLabel);
	int32 GetItemMaxNum(class FName ItemLabel);
	bool GetItemLabelTextList(TArray<class FText>& OutLabelList);
	TArray<class FName> GetItemLabelList();
	int32 GetItemID(class FName ItemLabel);
	void GetItemFontData(enum class EBPFuncReturnCode* ReturnCode, struct FItemIconText* OutItemFontTextData, class FName ItemIconTextLabel);
	class FName GetItemEquipmentTextureLabel(class FName ItemLabel);
	enum class EEquipmentCategory GetItemEquipmentCategory(class FName ItemLabel);
	enum class EITEM_DISPLAY_TYPE GetItemDisplayType(class FName ItemLabel);
	class FName GetItemDetailTextID(class FName ItemLabel);
	bool GetItemDataByItemID(struct FItemData& OutItemData, int32 ItemId);
	bool GetItemData(struct FItemData* OutItemData, class FName ItemLabel);
	class UDataTable* GetItemCommandEffecter(class FName ItemLabel);
	void GetItemCategoryDataByEnum(enum class EBPFuncReturnCode* ReturnCode, struct FItemCategory* OutItemCategoryData, enum class EItemCategoryData ItemCategory);
	enum class EItemCategoryData GetItemCategory(class FName ItemLabel);
	enum class EATTRIBUTE_TYPE GetItemAttribute(class FName ItemLabel);
	bool GetItemAilment(TArray<struct FAilmentHandler>& OutAilment, class FName ItemLabel);
	void GetEquipmentCategoryDataByEnum(enum class EBPFuncReturnCode* ReturnCode, struct FEquipmentCategoryBase* OutEquipCategoryData, enum class EEquipmentCategory EquipCategory);
	class FName EquipmentCategoryIDToLabel(int32 EquipCategoryID);
	bool CheckItemCategory(class FName ItemLabel, enum class EItemCategoryData Category);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ItemSaveDataUtil
class UItemSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UItemSaveDataUtil* GetDefaultObj();

	void SetSoldOutShopItemDataByLabel(class FName& PurchaseItemLabel, struct FSoldOutShopItemData& Data);
	void SetSoldOutShopItemDataById(int32 PurchaseItemId, struct FSoldOutShopItemData& Data);
	bool IsSoldOutShopItemByLabel(class FName& PurchaseItemLabel);
	bool IsSoldOutShopItemById(int32 PurchaseItemId);
	void GetSortedBackpackItemsForSale(TArray<struct FBackPackItemData>* OutItems);
	void GetSortedBackpackItemsForBattle(TArray<struct FBackPackItemData>* OutItems);
	void GetSortedBackpackItems(TArray<struct FBackPackItemData>* OutItems);
	int32 GetMeetNum();
	int32 GetItemNumInBackpackByLabel(class FName& ItemLabel);
	int32 GetItemNumInBackpackById(int32 ID);
	void GetItemAcquisitionHistory(TArray<int32>* OutHistory);
	void GetBackpackItems(TArray<struct FBackPackItemData>* OutItems);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ItemUtility
class UItemUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemUtility* GetDefaultObj();

	void SortSaleItemByShopItemOrder(TArray<struct FSaveBackPackItem>& ItemList);
	void SortPurchaseItemByShopItemOrderForAnimalShop(TArray<struct FItemData>& ItemList);
	void SortPurchaseItemByShopItemOrder(TArray<struct FItemData>& ItemList);
	void SortItemByIdAndPriority(TArray<struct FSaveBackPackItem>& ItemList);
	void SortBattleItemById(TArray<struct FSaveBackPackItem>& ItemList);
	bool IsMusicRecord(class FName& ItemLabel);
	int64 CalcShopItemOrder(int64 ItemId, int64 SortCategory, int64 ItemPrice);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.JobDataTableUtility
class UJobDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UJobDataTableUtility* GetDefaultObj();

	void NotifyJobDataDB(class FName DbName, enum class EDBNoticeType Notice);
	TArray<class FName> GetObtainJobItem();
	bool GetJobDataTableRowData(enum class EBPFuncReturnCode* ReturnCode, struct FJobData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetJobDataByJobID(enum class EBPFuncReturnCode* ReturnCode, struct FJobData* OutData, int32 JobID);
	bool GeJobDataTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.JobEvalautionValueTableUtility
class UJobEvalautionValueTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UJobEvalautionValueTableUtility* GetDefaultObj();

	bool GetJobEvalautionValueTableRowData(enum class EBPFuncReturnCode* ReturnCode, struct FJobEvalautionValueData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetJobEvalautionValueTableRomDataFromJobType(enum class EBPFuncReturnCode* ReturnCode, struct FJobEvalautionValueData* OutData, enum class EJOB_TYPE JobType, bool LogEnable);
	bool GeJobEvalautionValueTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
};

// 0x0 (0x260 - 0x260)
// Class Majesty.KeyConfigButton1Base
class UKeyConfigButton1Base : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UKeyConfigButton1Base* GetDefaultObj();

	void SetDescriptionText(class FName Text);
};

// 0x0 (0x298 - 0x298)
// Class Majesty.KSAIControllerBase
class AKSAIControllerBase : public AController
{
public:

	static class UClass* StaticClass();
	static class AKSAIControllerBase* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class Majesty.KSAutoSavingWidget
class UKSAutoSavingWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UKSAutoSavingWidget* GetDefaultObj();

	bool SetText(bool ForOptionMenu);
	bool OpenUI();
	bool CloseUI();
};

// 0x0 (0x220 - 0x220)
// Class Majesty.KSBattleCharacterBase
class AKSBattleCharacterBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class AKSBattleCharacterBase* GetDefaultObj();

	class UActorComponent* AddActorComponent(class UClass* CActorComponentClass);
};

// 0x78 (0x2A8 - 0x230)
// Class Majesty.KSCameraManager
class AKSCameraManager : public AAcqManagerBase
{
public:
	bool                                         EncountCapture;                                    // 0x230(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKSCameraType                     ActiveType;                                        // 0x231(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSCameraType                     OldType;                                           // 0x232(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1647[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CameraTargets;                                     // 0x238(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UCameraComponent*>              CameraComponents;                                  // 0x248(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class USpringArmComponent*>           SpringArmComponents;                               // 0x258(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       RelativeCameraLocation;                            // 0x268(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        M_fDefaultFieldFocusDistance;                      // 0x278(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1648[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSCameraManager* GetDefaultObj();

	void SetFieldFoucusDistance(float FFoucusDistance);
	void SetComponent(enum class EKSCameraType EType, class AActor* Target, class UCameraComponent* Camera, class USpringArmComponent* SpringArm);
	bool SetCameraActive(enum class EKSCameraType EType, float FBlend);
	void ResetFieldFoucusDistance();
	void OnLevelChangeCompleted(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	class AActor* GetTarget(enum class EKSCameraType EType);
	class USpringArmComponent* GetSpringArm(enum class EKSCameraType EType);
	struct FVector GetRelativeCameraLocation(enum class EKSCameraType EType);
	enum class EKSCameraType GetCurrentCameraType();
	class UCameraComponent* GetCameraComponent(enum class EKSCameraType EType);
	class USpringArmComponent* GetActiveSpringArm();
	class AActor* GetActiveCameraTarget();
	class UCameraComponent* GetActiveCameraComponent();
	void ForceUpdatePlayerCameraManager(float InDeltaTime);
	void BattleEndScreenShot();
};

// 0x630 (0xAF0 - 0x4C0)
// Class Majesty.KSCharacterBase
class AKSCharacterBase : public APaperCharacter
{
public:
	enum class ECharacterState                   CharaState;                                        // 0x4C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsFadeInWait;                                    // 0x4C1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1693[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionLabel;                                       // 0x4C4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentFlipbookName;                               // 0x4CC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSCharacterDir                   Dir;                                               // 0x4D4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HouseChangeVisibleFlag;                            // 0x4D5(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsAnimEndOnce;                                     // 0x4D6(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSCharacterAnimationLoop         ManualLoop;                                        // 0x4D7(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         FixAnimation;                                      // 0x4D8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bReverseSprite;                                  // 0x4D9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1694[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayAction                           NextActionData;                                    // 0x4DC(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EKSCharacterAction                NowActionID;                                       // 0x4E8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1695[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterActionResource              ActionResource;                                    // 0x4F0(0xC0)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FKSCharaFlipbook                      ActionFlipbook;                                    // 0x5B0(0x58)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FVector                               TempLocation;                                      // 0x608(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1696[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            M_CurrentWeaponTexture;                            // 0x618(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<float>                                MoveSpeed;                                         // 0x620(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                InitMoveSpeed;                                     // 0x630(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                MoveSpeed_EventPlayer;                             // 0x640(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                InitMoveSpeed_EventPlayer;                         // 0x650(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EKSCharacterCategory              CharacterCategory;                                 // 0x660(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CharacterEnable;                                   // 0x661(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         LoadedCharacterEnableCancel;                       // 0x662(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSCharacterMoveMode              MoveMode;                                          // 0x663(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               MovePoint;                                         // 0x664(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsMoveUpdate;                                      // 0x670(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Moving;                                            // 0x671(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1697[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UKSPaperFlipbook*                      CustomFlipbook;                                    // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UMaterialInstanceDynamic*> M_CustomFlipbookMaterialList;                      // 0x680(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MoveDir;                                           // 0x6D0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Loaded;                                            // 0x6DC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bChangeDirLock;                                  // 0x6DD(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1698[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       LanternRoot;                                       // 0x6E0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASpotLight*                            M_pcLanternLight;                                  // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUsingLantern;                                   // 0x6F0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1699[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEquipLanternData                     EquipLanternData;                                  // 0x6F8(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_169A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     NpcFadeCollision;                                  // 0x720(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NpcFadeCollisionRadius;                            // 0x728(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NpcFadeCollisionLengthRate;                        // 0x72C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         FormCollision;                                     // 0x730(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStopLen;                                       // 0x738(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MoveLadderPosition;                                // 0x73C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              LoopEmotionParticle;                               // 0x748(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayEmotionType;                                   // 0x750(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169B[0x11];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_IsNpcTalking;                                    // 0x765(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         FirstFootStep;                                     // 0x766(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FirstCanoeFootStep;                                // 0x767(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstStepCanoeDeltaTime;                           // 0x768(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            M_FinishMoveEventDispather;                        // 0x770(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         M_IsOpeningGuildMenu;                              // 0x780(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169D[0x9F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           M_CanoeCurveData;                                  // 0x820(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsCanoeIdle;                                       // 0x828(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_169E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DefaultCanoePosition;                              // 0x82C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       M_CanoeLocationOffset;                             // 0x838(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FRotator>                      M_CanoeRotationOffset;                             // 0x848(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       M_CanoeScaleOffset;                                // 0x858(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  CanoeComponent;                                    // 0x868(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           CanoeMeshA;                                        // 0x870(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           CanoeMeshB;                                        // 0x878(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  CanoeLanternComponent;                             // 0x880(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UParticleSystemComponent*>      M_CanoeEffects;                                    // 0x888(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_169F[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FootStepDeltaTime;                                 // 0x8AC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSCharacterMoveMode              OldMoveMode;                                       // 0x8B0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsPlayFootStep;                                    // 0x8B3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fFootStepCheckStartOffset;                       // 0x8B4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fFootStepCheckEndOffset;                         // 0x8B8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ForcedPlayFootStepTypeLabelName;                   // 0x8BC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ActionFootStepLabelList;                           // 0x8C8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                ActionFootStepLabelIntervalList;                   // 0x8D8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  CharacterFootstep;                                 // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsBreakAnimation;                                  // 0x8F0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       LoadedResource;                                    // 0x8F8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsLadderIdle;                                      // 0x908(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpritePlayRate;                                    // 0x918(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               DefaultSpritePosition;                             // 0x91C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAtomComponent*                        SoundComponent;                                    // 0x928(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       PCListenerPoint;                                   // 0x930(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bShoudTickEnable;                                // 0x938(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bCalcBillboard;                                  // 0x939(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERADARMAP_ICON_TYPE               M_RadarMapIconType;                                // 0x93A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EHUNTER_PARTNER_OFFSET_TYPE, struct FVector> HunterPartnerOffsetA;                              // 0x940(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class EHUNTER_PARTNER_OFFSET_TYPE, struct FVector> HunterPartnerOffsetB;                              // 0x990(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class EKSCharacterDir, struct FVector> HunterPartnerFieldOffsetA;                         // 0x9E0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class EKSCharacterDir, struct FVector> HunterPartnerFieldOffsetB;                         // 0xA30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               DefaultFBRelativePos;                              // 0xA80(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A6[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    M_PlayerTorchMaterial;                             // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A7[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nChangeDirCntDef;                                // 0xABC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nChangeDirCnt;                                   // 0xAC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nDebugType;                                      // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_vDebugOffset;                                    // 0xAD0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fDebugSize;                                      // 0xADC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSCharacterBase* GetDefaultObj();

	void VisibleEmotion(bool IsVisible);
	void UpdateNpcFadeCollisionSize(float CameraDist);
	void UpdateMove(float DeltaTime);
	void UpdateFootStep(float DeltaTime);
	void UpdateFirstStepDeltaTime(float DeltaTime);
	void UpdateCanoeDir(enum class EKSCharacterDir CurrentDir);
	void UpdateAction();
	void ToggleMoveMode();
	void StopTransportEffectOnStartBattle();
	void StopMusicRecorad();
	void StopCharacter();
	void StopCanoePitching();
	void StopAllCanoeEffect(enum class ECANOE_MOVE_EFFECT ExclusionType);
	bool SpawnEmotionWithOffset(enum class EEMOTION_TYPE EmotionType, const struct FVector& SpawnOffset);
	bool SpawnEmotion(enum class EEMOTION_TYPE EmotionType, const struct FVector& SpawnOffset);
	void SetVisibleHouseChange(bool bEnable);
	void SetVisibilityToPartnerFB(bool bVisibility);
	void SetupWeaponTextureInMaterial(class UMaterialInstanceDynamic** TargetMaterial);
	void SetUpMoveSpeedData(enum class EMovementMode EMovementMode, int32 NMode);
	void SetupFlipbookMaterialInstance();
	void SetUpFadeMaterialData(class UPaperFlipbookComponent* PPaperFlip, class UPlacementFadeComponent* PPlecementComponent, class UMaterialInstance* Material);
	void SetupCanoeEffect();
	bool SetupCameraLockPosDirectly(const struct FVector& CameraLockPos, class UCapsuleComponent* CharaCapsule);
	bool SetupCameraLock(const struct FVector& LockPos, bool bLock, bool bUnlock, bool bEnableX, bool bEnableY, bool bEnableZ, bool bAfterLevelChange);
	void SetTempLocation(struct FVector& BeforLocation);
	void SetTargetDir(class AKSCharacterBase* DirTarget);
	void SetStateGuard(bool Guard);
	void SetStateBoost(int32 BoostLevel);
	void SetSocketBit(enum class EDEBUFF_ATTACHSOCKET_TYPE ESocket);
	void SetReverseSpriteFlag(bool bReverse);
	bool SetReturnCameraOffset(bool LockFlag);
	bool SetResetCameraPos(struct FVector& ResetPos);
	void SetPlayFootStep(bool bIsPlayFootStep);
	void SetPlayAnimationFrame(int32 NFrame);
	void SetPartyLadderOffset(enum class EKSCharacterDir NewDir);
	bool SetMovePoint(const struct FVector& InLocation);
	void SetMoveMode(int32 Mode);
	bool SetMapinPlayerLocation(const struct FVector& Location, enum class EKSCharacterDir CharaDir);
	void SetLoadedCharacterEnableCancel(bool Val);
	bool SetLevelLightParam_InDebug(float Intencity, float AttenuationRadius, const struct FLinearColor& LightColor, float SourceRadius);
	bool SetLevelLightParam(bool bEnable, class FName LevelName);
	void SetLantern(bool bEnable);
	void SetLadderMoveParams(struct FVector& UpEndPos, struct FVector& DownEndPos, struct FVector& MoveLadderPos);
	void SetLadderIdle();
	void SetIsOpeningGuild(bool Val);
	void SetIsMoveUpdate(bool bMoveUpdate);
	void SetIsDisableCharacterMovementFlag(bool Val);
	void SetIndoorFocusDistance(float FocusDistance);
	void SetIndoorFloor(int32 FloorNum);
	void SetIndoorFlag(bool Indoor);
	void SetHouseChangeVisibleFlag(bool IsVisble);
	void SetHideMode();
	void SetForcedPlayFootStep(class FName ForcedPlayFootStepType);
	void SetFollowOffset(int32 Offset);
	void SetFixAnimation(bool Eanble, enum class EKSCharacterAction EAction, enum class EKSCharacterAnimationLoop ELoop);
	void SetFinishMove(bool Force);
	void SetEquipmentLanternData(struct FEquipLanternData& LanternData);
	void SetEnablePlayAction(bool Enable);
	void SetEmotionVisibility(bool IsVisible);
	void SetDirTargetActor(class AKSCharacterBase* TargetCharacter);
	void SetDir(enum class EKSCharacterDir EDir, bool SetIdle);
	void SetDebugTouchLockTrigger(const class FString& TriggerName);
	void SetDamageAction(enum class EBATTLE_DAMAGE_TYPE DamageType);
	void SetCurrentWeaponTexture(class UTexture2D* WeaponTexture);
	bool SetCineCameraRelativeRotation(struct FRotator& Rotator);
	void SetCharacterState(enum class ECharacterState State);
	void SetCharacterLocation(struct FVector& InLocation, enum class EKSCharacterDir InDir);
	void SetCharacterEnable(bool Enable);
	void SetCharacterCollision(bool Enable);
	void SetChangeDirLock(bool bChangeDirLock);
	void SetCanoeVisibility(bool bVisible);
	void SetCanoePitchingEnabled(bool bEnable);
	void SetCanoeMeshOffset(const struct FVector& CanoeOffset);
	void SetCanoeIdle();
	bool SetCameraLockPos(struct FVector& CameraLockPos);
	bool SetCameraDistanceRateToOperationCameraComp(float CameraDistanceRate);
	void SetBattleSelectMaterial(bool Select, bool Boost);
	void SetBattleAlphaMode(bool Enable);
	bool SetActorHiddenInGameBP(bool bNewHidden);
	void ResumeSpritePlayRateByLadder();
	bool RespawnEmotion();
	bool ResetSelf();
	void ResetOnLevelBeginPlay();
	void ResetForceLadder();
	void ResetFootStep();
	bool ResetCameraPosition();
	bool ResetCameraLock();
	void RequestRespawnEmotionAfterTalk();
	void RemoveEmotion();
	void RefreshLocationHistoryIndex();
	void RefreshFadeMaterial(bool bClearMaterialParam);
	void RefreshCurrentLocation();
	void RefreshCanoeObject();
	void PlayMusicRecorad();
	void PlayFootStep(class FName SELabel);
	void PlayerReplace();
	void PlayEncountCamera();
	void PlayCharacterAction(enum class EKSCharacterAction Label, enum class EKSCharacterDir Direction, bool StackClear);
	void PlayCanoePitching();
	bool PlayCanoeEffectByMoveMode(enum class EKSCharacterMoveMode Mode);
	bool PlayCanoeEffect(enum class ECANOE_MOVE_EFFECT EffType);
	void PlayBreakAnimation(bool Break);
	void PlayBattleAction(enum class EBATTLE_ACTION_TYPE BattleAction, bool StackClear);
	void PlayAnimationDir(enum class EKSCharacterAction EAction, enum class EKSCharacterDir EDir, int32 NFrame);
	void PlayAnimation(enum class EKSCharacterAction EAction, int32 NFrame);
	bool PlayAction(enum class EKSCharacterAction ActionID, bool Force, int32 NFrame, enum class EKSCharacterAnimationLoop LoopSetting);
	void OverwriteTemplateSpriteSockets(enum class EKSCharacterAction EAction, enum class EKSCharacterDir EDir);
	void OverwriteSpriteSockets(TMap<class FName, struct FMJSpriteSocketData> SocketData);
	bool OpenFieldCommandPopupWidget(bool IgnoreEvent);
	bool OnFinishAutoBalloon();
	void OnEndOverlapFromPlayerChara();
	void OnBeginOverlapFromPlayerChara();
	void OnAnimationFinish();
	void MoveSpeedInHouse(float Scale);
	void MoveBP(const struct FVector& VMove);
	void LoadedCharacterEnableCancelRequest();
	void LadderOffset(int32 PartyIndex, enum class EKSCharacterDir NewDir);
	bool IsSpawnedEmotion();
	bool IsRunningFade();
	bool IsPlayingCanoePitching();
	bool IsPlayingCanoeEffect(enum class ECANOE_MOVE_EFFECT EffType);
	bool IsPlayerCharacter();
	bool IsPlayBattleAction();
	bool IsPartyCharacter();
	bool IsNpcTalking();
	bool IsMoving();
	bool IsMoveCanoeMode();
	bool IsMove();
	bool IsLadderMoveMode(enum class EKSCharacterMoveMode Mode);
	bool IsLadder();
	bool IsIdle();
	bool IsHunterPartner();
	bool IsFollowNpcCharacter();
	bool IsFieldNpcCharacter();
	bool IsFCAction();
	bool IsFadeInWait();
	bool IsChangeWalkLadderCanoe(enum class EKSCharacterMoveMode NowMode, enum class EKSCharacterMoveMode NextMode);
	bool IsCanoeMoveMode(enum class EKSCharacterMoveMode Mode);
	bool IsCanoe();
	bool IsAfterIdle();
	bool IsActionLooping();
	void InitAction(class FName ActionLabelName, bool bBattle);
	bool Idle(bool Force);
	class FName GetTextInfo();
	class USplineMoveComponent* GetSplineObject();
	bool GetSocketPos(enum class EDEBUFF_ATTACHSOCKET_TYPE EType, struct FVector* VOutPos);
	bool GetReverseSpriteFlag();
	bool GetReturnCameraOffset();
	bool GetRespawnEmotionAfterTalk();
	enum class ERADARMAP_ICON_TYPE GetRadarMapIconType();
	enum class EKSCharacterMoveMode GetPrevMoveMode();
	class UPlayerPropertyComponent* GetPlayerPropertyComponent();
	struct FVector GetPlayerCameraPosition();
	int32 GetPlayAnimationFrame();
	enum class EPlayableCharacterID GetPlayableCharacterID();
	class UPlacementFadeComponent* GetPlacementFadeComponent();
	class USceneComponent* GetPCListenerPoint();
	class UPartyCharaPropertyComponent* GetPartyCharaPropertyComponent();
	struct FVector GetPartnerOffset();
	struct FVector GetPartnerFieldOffset();
	class UOperationPlayerCameraComponentBase* GetOperationPlayerCameraComponent();
	class UNpcPropertyComponent* GetNpcPropertyComponent();
	enum class EKSCharacterAction GetNowActionID();
	float GetMoveSpeed(enum class EKSCharacterMoveMode MoveMode);
	enum class EKSCharacterMoveMode GetMoveMode();
	enum class EKSCharacterDir GetMoveDir(const struct FVector& InMoveDir, float AdjustX, float AdjustY);
	enum class EKSCharacterAction GetMoveAction();
	enum class ECHARACTER_MODE GetMode();
	void GetLadderMoveParams(struct FVector* OutUpEndPos, struct FVector* OutDownEndPos, struct FVector* OutMoveLadderPos);
	bool GetIsUsingLantern();
	bool GetIsOpeningGuild();
	bool GetIsMoveUpdate();
	bool GetIsDisableCharacterMovementFlag();
	float GetIndoorFocusDistance();
	int32 GetIndoorFloor();
	bool GetIndoorFlag();
	enum class EKSCharacterAction GetIdleAction();
	class UHunterPartnerFbComponent* GetHunterPartnerFbComponent();
	bool GetHouseChangeVisibleFlag();
	int32 GetFollowOffset();
	class UMaterialInterface* GetFlipbookOverrideMaterial();
	class UMaterialInstanceDynamic* GetFlipbookMaterial(class FName CustomFlipbookName, bool bClearParameter);
	struct FEquipLanternData GetEquipmentLanternData();
	bool GetEmotionVisibility();
	struct FVector GetEmotionLocation(const struct FVector& Offset);
	class FString GetEmotionEffectLabel(enum class EEMOTION_TYPE EmotionType);
	struct FVector GetDirVector();
	enum class EKSCharacterDir GetDir();
	struct FVector GetDefaultFlipbookRelativePos();
	class UTexture2D* GetCurrentWeaponTexture();
	enum class ETRANSPORTATION_TYPE GetCurrentTransportType();
	float GetCurrentMoveSpeed();
	struct FVector GetCineCameraWorldLocation();
	struct FTransform GetCineCameraRelativeTransform();
	enum class ECharacterState GetCharacterState();
	bool GetCharacterEnable();
	class UCapsuleComponent* GetCharacterCollision();
	enum class EKSCharacterCategory GetCharacterCategory();
	class UPaperFlipbook* GetCharacterAction(enum class EKSCharacterAction ActionID, enum class EKSCharacterDir InDir);
	bool GetChangeDirLock();
	struct FVector GetCameraLockPos();
	struct FVector GetCameraInitOffset();
	enum class EKSCharacterAction GetBattleIdle(enum class EKSCharacterAction EChkIdleAction, enum class EKSCharacterDir EDir);
	class UTexture2D* GetAnimationTexture(int32 FrameIndex, struct FVector2D* VUV);
	class FName GetActionLabel();
	bool GetActionFlipbookName(enum class EKSCharacterAction EAction, enum class EKSCharacterDir EDir, class FName* OutFlipbookName, bool* OutIsReverse);
	void ForceMovePoint(const struct FVector& InLocation);
	void FirstMoveStep();
	void FinishCallbackLoaded();
	void DetachDebuffEffect(class UParticleSystemComponent* PTargetParticle);
	void DebugShowInfoUpdate();
	void Debug_ShowSocketInfo(bool bEnable);
	void Debug_SetForceUpdateFootStep(bool Enable);
	void Debug_SetBarItemHandRate(int32 Rate);
	void Debug_MoveFallingReturnLocation();
	bool Debug_GetForceUpdateFootStep();
	void Debug_GetEquipmentLanternData(class FString* OutInfo);
	class FString Debug_GetDebugInfo();
	class FString Debug_GetDebugFollowInfo();
	int32 Debug_GetBarItemHandRate();
	void CreateSoundComponent();
	void ClearSocketBit(enum class EDEBUFF_ATTACHSOCKET_TYPE ESocket);
	void ClearRespawnEmotionAfterTalk();
	void ClearActionReferenceObject();
	bool CheckFlipbookMaterialKey(class FName CustomFlipbookName);
	bool ChangeTransport(enum class ETRANSPORTATION_TYPE Type);
	bool ChangeSwoonState(struct FVector& SwoonOffsetPos, enum class EKSCharacterAction SwoonAction, enum class ENpcSwoonType SwoonType);
	void ChangeFlipbook(class FName FlipbookName, class UMaterialInstanceDynamic* PMatInst);
	void ChangeCharacterModelOnly(class FName ResourceLabel);
	void ChangeCanoeEffectOnStop();
	bool CanOpenAutoBalloon();
	void CanoeTimelineUpdate(float Offset);
	void CanoeTimelineFinish();
	bool CallTalkEvent();
	void CallbackLoaded(TArray<class UObject*>& ObjList);
	struct FVector CalcLandLocation();
	struct FVector CalcEmotionOffset();
	bool AttachDebuffEffect(class UParticleSystemComponent* PTargetParticle, enum class EDEBUFF_ATTACHSOCKET_TYPE EType);
	void AddRegistMusicRecordDeleagete();
	void AddMoveSpeed(float InAddSpeed);
	void AddFlipbookMaterial(class FName CustomFlipbookName, class UMaterialInstanceDynamic* PNewMaterial);
	bool ActionSearch();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSCharacterFunction
class UKSCharacterFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKSCharacterFunction* GetDefaultObj();

	void SubPlayerCharacterFirstEquipment(enum class EPlayableCharacterID CharacterID);
	enum class ELEVEL_AREA_TYPE Static_GetPlayerCurrentArea();
	bool StartPlayerLadderUp(class AActor* LadderActor, class UBoxComponent* LadderUpTrigger, struct FVector& StartPosition);
	bool StartPlayerLadderDown(class AActor* LadderActor, class UBoxComponent* LadderUpTrigger, struct FVector& StartPosition);
	void StartEpilogueParty();
	class AKSCharacterBase* SpawnPlayerCharacter(enum class EPlayableCharacterID PlayerID, struct FVector& Location, enum class EKSCharacterDir Dir);
	class AKSCharacterBase* SpawnNPCCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir);
	class AKSCharacterBase* SpawnEventCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir);
	class AKSCharacterBase* SpawnBarCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir, int32 CharIndex);
	void SortCharacterIDFromJobDisplay(const TArray<int32>& CharaID, TArray<int32>* OutCharaID);
	bool SetUpLadderUpStart(class AActor* LadderActor, class UBoxComponent* UpCollision, const struct FVector& VPosition, enum class EKSCharacterMoveMode ECheckMode, enum class EKSCharacterMoveMode ESetMode, bool bEnable);
	bool SetUpLadderDownStart(class AActor* LadderActor, class UBoxComponent* DownCollision, const struct FVector& VPosition, enum class EKSCharacterMoveMode ECheckMode, enum class EKSCharacterMoveMode ESetMode, bool bEnable);
	void SetupFirstLearnAbility();
	void SetPlayerCharacterInput(class UObject* WorldContextObject, bool Enable);
	void SetPartyHouseIn(float Scale, float OffsetHeight, bool HouseOut, bool bNotPartyRefresh);
	void SetMyShipSail(bool bOpen);
	void SetLadderMoveParamsToPlayer(struct FVector& UpEndPos, struct FVector& DownEndPos);
	void SetLadderCharacterPosition(const struct FVector& VPosition, enum class EKSCharacterMoveMode EMoveMode);
	void SetKSInputMode(class UObject* WorldContextObject, enum class EKSInputMode Mode);
	void SetCharacterEnable(bool Enable);
	void ResetPartyCharacterForOutGame();
	void ResetLadderMode();
	void RemoveCharacter(class AKSCharacterBase* Character);
	void RegisterCharacterToManageList(class AKSCharacterBase* Character);
	void RefreshPartyCharacterFormation();
	void RefreshPartyAfterChangeMember(class UObject* WorldContextObject);
	void RefreshCharacterVoice(class UObject* WorldContextObject, TArray<int32>* CharacterIDs);
	void RefreshCharacterResource(bool ContainNPC);
	void RefreshCharacterLantern();
	void NotifyCharaFormDB(class FName DbName, enum class EDBNoticeType Notice);
	bool IsRegisteredInManageList(class AKSCharacterBase* Character);
	bool IsPlayerCharacterInput(class UObject* WorldContextObject);
	bool IsPlayerCharacter(class AActor* CharaActor);
	bool IsPlacateFollowNPC();
	bool IsMainPlayerCharacter(enum class EPlayableCharacterID PlayerID);
	bool IsLureFollowNPC();
	bool IsLoaded();
	bool IsLearnedAbility();
	bool IsLeadFollowNPC();
	bool IsHireFollowNPC();
	bool IsGuestPlayerCharacterFromID(int32 CharaID);
	bool IsGuestPlayerCharacter(enum class EPlayableCharacterID PlayerID);
	bool IsFieldCommandActionEnd(class AKSCharacterBase* Character);
	bool IsEquipedSupportAbility(int32 CharacterID, enum class ESUPPORT_AILMENT_TYPE SupportAilment, struct FSupportAbilityDataBase* OutEquipedSupportAbility);
	bool IsEightParty();
	void InitPlayerAfterSetSaveData(class UObject* WorldContextObject);
	struct FVector GetTargetRearLocation(class AKSCharacterBase* TargetCharacter, float Scale);
	enum class EKSCharacterDir GetReverseDirByPosition(class AKSCharacterBase* CharaA, class AKSCharacterBase* CharB);
	enum class EKSCharacterDir GetReverseDir(enum class EKSCharacterDir& Dir);
	class UPlayerPropertyComponent* GetPlayerProperty();
	class AKSCharacterBase* GetPlayerObject();
	bool GetPlayerDataByIntID(int32 CharacterID, struct FPlayableCharacterData* CharacterData);
	bool GetPlayerDataByID(enum class EPlayableCharacterID PlayerID, struct FPlayableCharacterData* CharacterData);
	class FName GetPlayerCharacterLabelWithForm(class UObject* WorldContextObject, enum class EPlayableCharacterID PlayerID, uint8 CharaForm);
	uint8 GetPlayerCharacterForm(class UObject* WorldContextObject, enum class EPlayableCharacterID PlayerID);
	void GetNPCResourceLabelFromLevelName_NoReaction(TArray<struct FSimpleActionLoad>* OutData, class FName LevelName);
	void GetNPCResourceLabelFromLevelName_ExceptNoReaction(TArray<class FName>* OutData, class FName LevelName);
	void GetNPCResourceLabelFromLevelName(TArray<class FName>* OutData, class FName LevelName);
	bool GetMyShipSail();
	enum class EKSCharacterMoveMode GetMoveModeForAction(enum class EKSCharacterAction Action);
	bool GetLandLocation(class UObject* WorldContextObject, struct FVector* OutNewLocation, struct FVector& Location, float Length, const struct FVector& AddOffset);
	class AKSPlayerController* GetKSPlayerController(class UObject* WorldContextObject);
	enum class EKSInputMode GetKSInputMode(class UObject* WorldContextObject);
	struct FVector GetDirVector(enum class EKSCharacterDir Dir);
	void GetCurrentPartyResourceLabel(TArray<class FName>* OutData, class UObject* WorldContextObject);
	TArray<enum class ESpecialActionType> GetCharacterSpecialActionTypeList(int32 CharacterID);
	enum class ESpecialActionType GetCharacterSpecialActionType(int32 CharacterID, int32 Index);
	TArray<class FName> GetCharacterSpecialActionTextLabelsForMenuName(int32 CharacterID);
	TArray<class FName> GetCharacterSpecialActionTextLabelsForMenuDetail(int32 CharacterID);
	TArray<class FName> GetCharacterSpecialActionTextLabelsForBattleCommandName(int32 CharacterID);
	TArray<class FName> GetCharacterSpecialActionTextLabelsForBattleCommandDetail(int32 CharacterID);
	TArray<class FName> GetCharacterSpecialActionTextLabelsForAbilityLabel(int32 CharacterID);
	class FName GetCharacterSpecialActionTextLabelForPlayerSelectDetail(int32 CharacterID);
	class FName GetCharacterSpecialActionTextLabelForMenuName(int32 CharacterID, int32 Index);
	class FName GetCharacterSpecialActionTextLabelForMenuDetail(int32 CharacterID, int32 Index);
	class FName GetCharacterSpecialActionTextLabelForBattleCommandName(int32 CharacterID, int32 Index);
	class FName GetCharacterSpecialActionTextLabelForBattleCommandDetail(int32 CharacterID, int32 Index);
	TArray<class FName> GetCharacterSpecialActionTextLabelForAbilityLabel(int32 CharacterID, int32 Index);
	class FName GetCharacterLabelNameForSaveLoad(class UObject* WorldContextObject, enum class EPlayableCharacterID PlayerID, enum class EJOB_TYPE JobID, int32 CharaForm);
	class FName GetCharacterLabelNameForJob(class UObject* WorldContextObject, enum class EPlayableCharacterID PlayerID, enum class EJOB_TYPE JobID);
	class FName GetCharacterLabelNameForEventFlag(class UObject* WorldContextObject, enum class EPlayableCharacterID PlayerID);
	class FName GetCharacterLabelNameForBaseJob(class UObject* WorldContextObject, enum class EPlayableCharacterID PlayerID);
	class FName GetCharacterLabelName(class UObject* WorldContextObject, enum class EPlayableCharacterID PlayerID, enum class EJOB_TYPE JobID, bool IsEventFlagCheck);
	enum class EPlayableCharacterID GetCharacterID(class AKSCharacterBase* Target, bool* IsPlayableCharacter);
	bool GetCharacterFormData(struct FCharacterFormData* OutData, class FName Label, enum class EKSCharacterAction Action, enum class EKSCharacterDir Dir);
	TArray<enum class EMJFieldCommandType> GetCharacterFieldCommandType(enum class EPlayableCharacterID PlayerID);
	void GetAllPlayerCharacterIdList(TArray<int32>* OutCharaIdList);
	void GetAllPlayerCharacterEnumList(TArray<enum class EPlayableCharacterID>* OutCharaEnumList);
	class FName GetActionLabelNameByResourceLabel(class FName ResourceLabel);
	void FullRecoveryAllPartyMember();
	bool FinishLadderModeWithoutPosition(enum class EKSCharacterMoveMode ECheckMode, enum class EKSCharacterMoveMode ESetMode, bool bEnable);
	bool FinishLadderMode(const struct FVector& VPosition, enum class EKSCharacterMoveMode ECheckMode, enum class EKSCharacterMoveMode ESetMode, bool bEnable);
	bool EndPlayerLadderUp(struct FVector& EndPosition);
	bool EndPlayerLadderDown(struct FVector& EndPosition);
	void EndEpilogueParty();
	bool EnablePartyCharaRemove();
	TArray<class FString> Debug_GetPlayableCharacterIdNameList();
	class FString Debug_GetPlayableCharacterIdName(enum class EPlayableCharacterID CharaID);
	void ClearActionReferenceObject();
	bool CheckStopAction(class FName ActionLabel, enum class EKSCharacterAction Action);
	bool CheckLadderState(enum class EKSCharacterMoveMode EMoveMode, bool bEnable);
	bool CheckHaveLantern();
	bool CheckCharacterHaveSpecialAction(int32 CharacterID, enum class ESpecialActionType Type, int32* OutputIndex);
	void AddPlayerCharacterFirstEquipment(enum class EPlayableCharacterID CharacterID);
};

// 0x2C0 (0x4F0 - 0x230)
// Class Majesty.KSCharacterManager
class AKSCharacterManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1754[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      PlayerCharacter;                                   // 0x238(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AKSCharacterBase*>              PartyCharacterList;                                // 0x240(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AKSCharacterBase*>              UsePartyCharacterList;                             // 0x250(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                PartyFollowOffsetBase;                             // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                PartyFollowOffsetLadderUp;                         // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                PartyFollowOffsetLadderDown;                       // 0x280(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                PartyFollowOffsetCanoe;                            // 0x290(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                PartyFollowOffset;                                 // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class AKSCharacterBase*>              BarCharacterList;                                  // 0x2B0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFollowNpcObjectData>          FollowCharacterList;                               // 0x2C0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1755[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FollowNpcID;                                       // 0x2D8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AKSCharacterBase*>              PartnerCharacterList;                              // 0x2E8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AKSCharacterBase*                      PlayFCActionCharacter;                             // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PartyCharacterEnable;                              // 0x300(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1756[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastPartyMemberIndex;                              // 0x304(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSCharacterBase*                      LastPartyMember;                                   // 0x308(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FollowDistance;                                    // 0x310(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocationTimeMax;                                   // 0x314(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocationTimer;                                     // 0x318(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsLeadCharacterEnable;                             // 0x31C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsLureCharacterEnable;                             // 0x31D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsHireCharacterEnable;                             // 0x31E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPlacateCharacterEnable;                          // 0x31F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         BarCharacterEnable;                                // 0x320(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         OpenMyShipSail;                                    // 0x321(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1758[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class AKSCharacterBase*>         M_CharacterList;                                   // 0x330(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1759[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerLocationTrace*                  M_PlayerLocationTrace;                             // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AKSCharacterBase*>              PartyFollowCharaList;                              // 0x3A0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_175A[0xA8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AKSCharacterBase*>              EpiloguePartyChara;                                // 0x458(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<enum class EPlayableCharacterID>      EpiloguePartyCharaId;                              // 0x468(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_175B[0x6C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocationTimeMaxWork;                               // 0x4E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSCharacterManager* GetDefaultObj();

	void UpdatePartyFollowOffset();
	void UnregisterFromCharacterList(class AKSCharacterBase* Character);
	void SetupPlayers();
	void SetupPartyCharacter();
	void SetupEpilogueParty();
	void SetSkipPartyCharacterEnableFromCallbackLoaded();
	void SetShowDebugInfo(bool Enable);
	bool SetPartyHouseIn(float Scale, float OffsetHeight, bool HouseOut, bool bNotPartyRefresh);
	void SetPartyGravity(bool Enable);
	void SetPartyFollowOffset();
	void SetPartyCharacterInstance(int32 PartyIndex, class AKSCharacterBase* Chara);
	void SetPartyCharacterEnable(bool InEnable);
	void SetPartnerCharacterInstance(int32 PartnerIndex, class AKSCharacterBase* Chara);
	void SetMyShipSail(bool bOpen);
	void SetFollowCharacterInstance(int32 FollowIndex, class AKSCharacterBase* Chara, enum class EMJFieldCommandType FCType);
	void SetCharacterMoveMode_AlsoPlayer(enum class EKSCharacterMoveMode EMoveMode, bool ExcludeDash);
	void SetCharacterMoveMode(enum class EKSCharacterMoveMode EMoveMode);
	void SetCharacterEnable(int32 Category, bool Enable);
	void SetBarCharacterEnableAll(bool InEnable);
	bool SetBarCharacterEnable(int32 Index, bool IsEnable);
	void SavePlayerPlacementFromTheater();
	void SavePlayerPlacementFromPChat();
	void RestorePlayerPlacement();
	void ResetPlayerLocationHistory(const struct FVector& InLocation, enum class EKSCharacterDir InDir);
	void ResetPartyCharacterForOutGame();
	void ResetPartyCharacter();
	void ResetNewFollowMove();
	void ResetFollowMasterCharacterID();
	void ResetFollowerLocation();
	void ResetCanoeEffect();
	void RemoveTemporaryEnemyResourceLabel(class FName EnemyResLabel);
	void RemoveEpiloguePartyCharacter();
	void RemoveCharacter(class AKSCharacterBase* Character);
	bool RemoveBarCharacterAll();
	void RemoveAllTemporaryEnemyResourceLabel();
	bool RemoveAllEquipment(enum class EPlayableCharacterID CharacterID);
	void RegisterToCharacterList(class AKSCharacterBase* Character);
	bool RegisterNpcToFollowNPCList(enum class EMJFieldCommandType FCType);
	void RefreshPartyLocation();
	void RefreshPartyFollowOffset();
	bool RefreshPartyCharacter(bool bSkipLoadResource);
	void RefreshPartyAfterChangeMember();
	bool RefreshPartnerCharacters();
	void RefreshHunterPartnerVisibility();
	void RefreshFollowFormation();
	bool RefreshFollowCharacters();
	bool RefreshFollowCharacter(class AKSCharacterBase* Target);
	void PushPlayerLocationToHistory(float DeltaSeconds);
	void LoadCharacterResource(const TArray<class FName>& CharaResourceLabels);
	bool IsEnabledCharacter_HunterPartner();
	bool InitPartyLocation();
	bool InitParams(const struct FVector& MovePoint, enum class EKSCharacterDir Dir);
	void InitAfterLoadSaveData(class UMJSaveData* SaveData);
	TArray<class AKSCharacterBase*> GetUsePartyCharacterList();
	TArray<class FName> GetTemporaryEnemyResourceLabelList();
	int32 GetRunMode();
	void GetResidentResourceLabelList(TArray<class FName>* LabelList, bool ContainNpcResource);
	class AKSCharacterBase* GetPlayerObject();
	void GetPlayerMoveHistoryParams(int32 Index, struct FVector* Location, uint8* Dir, enum class EKSCharacterMoveMode* Mode, bool* Success);
	void GetPlayerLocationHistory(int32 Index, struct FVector* Out_Location, enum class EKSCharacterDir* Out_Dir, enum class EKSCharacterMoveMode* OutMoveMode);
	enum class ELEVEL_AREA_TYPE GetPlayerCurrentArea();
	class AKSCharacterBase* GetPlacateFollowNPC();
	TArray<class AKSCharacterBase*> GetPartyCharacterList();
	class AKSCharacterBase* GetPartyCharacterInstance(int32 PartyIndex);
	class AKSCharacterBase* GetPartyCharacterIndex(int32 InIndex);
	bool GetPartyCharacterEnable();
	class AKSCharacterBase* GetPartyCharacter(enum class EPlayableCharacterID CharacterID);
	class AKSCharacterBase* GetPartnerCharacterInstance(int32 PartnerIndex);
	class AKSCharacterBase* GetPartnerCharacter(int32 Index);
	bool GetMyShipSail();
	class AKSCharacterBase* GetLureFollowNPC();
	int32 GetLocationIndex(int32 InOffset);
	class AKSCharacterBase* GetLeadFollowNPC();
	class AKSCharacterBase* GetLastPartyMember();
	class AKSCharacterBase* GetHireFollowNPC();
	int32 GetFollowNpcNum();
	void GetFollowNpcIdList(TArray<int32>* OutFollowIds, TArray<int32>* OutSubIds);
	class AKSCharacterBase* GetFollowMember(enum class EMJFieldCommandType Type);
	int32 GetFollowMasterNum();
	enum class EPlayableCharacterID GetFollowMasterCharacterID(int32 Index);
	class AKSCharacterBase* GetFollowCharacterInstance(int32 FollowIndex);
	enum class EKSCharacterMoveMode GetCharacterMoveMode();
	class AKSCharacterBase* GetBarCharacterIndex(int32 InIndex);
	void FullRecoveryCharacter(int32 CharacterID);
	void FullRecoveryAllPartyMember();
	bool EquipItem(enum class EPlayableCharacterID CharacterID, class FName ItemLabel);
	void DelegateForShipMovingSE(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void Debug_ShowFollowInfo(bool bShow);
	void Debug_SetTempDisableFallPrevention();
	void Debug_SetPushPlayerPosCountPerSec(int32 Count);
	void Debug_SetPartyLoad(bool Enable);
	void Debug_SetFallLimit(int32 FallLimit);
	void Debug_SetEnableNewFollow(bool bEnable);
	void Debug_SetEnableFallPrevention(bool bEnable);
	void Debug_OutputPlayerLocationHistory();
	bool Debug_IsEnableFallPrevention();
	int32 Debug_GetPushPlayerPosCountPerSec();
	bool Debug_GetPartyLoad();
	int32 Debug_GetFallLimit();
	bool Debug_GetEnableNewFollow();
	void Debug_DrawFollowFormation();
	bool CheckPartyCharaLadderAnimation();
	bool BeginPlayers();
	void AddTemporaryEnemyResourceLabel(class FName EnemyResLabel);
	class AKSCharacterBase* AddPlayerCharacter(enum class EPlayableCharacterID PlayerID, struct FVector& Location, enum class EKSCharacterDir Dir);
	class AKSCharacterBase* AddPartyCharacter(class AKSCharacterBase* Follow, int32 PartyIndex);
	class AKSCharacterBase* AddPartnerCharacter(class AKSCharacterBase* Follow);
	void AddFollowMasterCharacterID(enum class EPlayableCharacterID CharacterID);
	class AKSCharacterBase* AddFieldCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir);
	class AKSCharacterBase* AddEventCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir);
	class AKSCharacterBase* AddEpiloguePartyCharacter(enum class EPlayableCharacterID PlayerCharaId);
	class AKSCharacterBase* AddBarCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir, int32 CharIndex);
};

// 0x10 (0xB00 - 0xAF0)
// Class Majesty.KSCharacterMovementComponent
class UKSCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	uint8                                        Pad_175F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSCharacterMovementComponent* GetDefaultObj();

};

// 0x20 (0xA8 - 0x88)
// Class Majesty.KSCheatManager
class UKSCheatManager : public UCheatManager
{
public:
	uint8                                        Pad_1790[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADebugLoadCheatCommand*                M_pLoadCheatCommand;                               // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ADebugLoadCheatCommand*>        M_CheatCommandList;                                // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UKSCheatManager* GetDefaultObj();

	void TameAlwaysSuccess(bool bEnable);
	void StartLastChapter(bool Enable);
	void StartEpilogue(bool Enable);
	void ShowGameMainSequenceLog(bool bEnable);
	void ShowEventTextData(bool Enable, float TextSize);
	void SetSystemDataVibrationEnable(bool bEnable);
	void SetRandomParticipationOrder();
	void SetMyShipCustom(int32 Parts, int32 Type);
	void SetHunterPartnerID(int32 PartnerID);
	void SetEventCounter(int32 Index, int32 Value);
	void SetEnableWorldMapDebugDraw(bool IsEnable);
	void SetEnableFlatEarthMode(bool IsEnable);
	void SetDarkArea(bool IsEnable);
	void SetBitFlagLabel(const class FString& BitFlagLabel, bool Flag);
	void SetAllAbility(int32 CharaID, bool IsLearn);
	void SetAdvancedAbility(int32 CharaID, int32 AbilityIndex, bool IsLearn);
	void ResumeNormalPartySet();
	void ReleasePotentialityAction(int32 CharaID, bool AllChara);
	void PlaySequenceEvent(const class FString& SequenceName, const class FString& SubSequenceName);
	void PlayAbility(const class FString& StrAbilityLabel, int32 NBoostLevel, bool bPlayerSide);
	void PartyNoKO(bool bEnable);
	void PartyNoDamage(bool bEnable);
	void PartyFullPower(bool bEnable);
	void OpenFCViewer(bool bEnable);
	void OnFinishSaveGame(const class FString& SlotName, int32 UserIndex, bool IsSuccesss);
	void OnFinishLoadGame(const class FString& SlotName, int32 UserIndex, class UMJSaveData* SaveGame);
	void MJWipeColorChange(bool bEnable, uint8 R, uint8 G, uint8 B);
	void MJTutorialAutoCapture(const class FString& ResourceName);
	void MJTimeZoneLock(bool bEnable);
	void MJStartAutoPlay(const class FString& Filename);
	void MJSoundPlayVoice(class FName VoiceLabel);
	void MJSoundPlaySe(class FName SELabel);
	void MJSoundPlayBgm(class FName BgmLabel, float FadeOutTime, float FadeInTime);
	void MJSoundBlockIndex(int32 NBlockIndex);
	void MJShowTextSizeInfo(bool Enable);
	void MJShowStoryDebugInfo(bool bEnable);
	void MJShowSoundListeningPoint(bool bDraw);
	void MJShowSoundListenerPoint(bool bDraw);
	void MJShowSoundAISACParam(bool bDraw);
	void MJShowLevelManagerInfo(bool bShow);
	void MJShowDebugInfoStoryMemory(bool bEnable);
	void MJShowDebugInfoEvent(bool bEnable);
	void MJShowDebugInfo(bool bEnable, int32 PageIndex);
	void MJShowDebugGuildInfo(bool bEnable);
	void MJShowDBManagerInfo(bool bShow);
	void MJShowDarkAreaStatus();
	void MJShowCharacterSocket(bool Enable);
	void MJShowCharacterMoveMode(bool Enable);
	void MJShowCharacterFootStep(bool Enable);
	void MJShowAllTutorialList(bool bEnable);
	void MJSetupAtlantisPartyRandom();
	void MJSetTutorialViewFlag(bool bEnable);
	void MJSettingEncountInfoFromEnemyGroup(class FName EnemyGroupID);
	void MJSetSubParty(int32 Char1, int32 Char2, int32 Char3, int32 Char4);
	void MJSetSimpleActionLoad(bool Enable);
	void MJSetShowLoadedCharacterResource(bool Enable);
	void MJSetPartyResourceOnlyFlag(bool Enable);
	void MJSetParty(int32 Char1, int32 Char2, int32 Char3, int32 Char4);
	void MJSetMoney(int32 Money);
	void MJSetMainStoryConfirmedFlag(int32 MainStoryId, bool Confirmed);
	void MJSetIsOldWorldMapTexure(bool IsOld);
	void MJSetIsForceTrialMode(bool bEnable);
	void MJSetIsForceSkipNoticeScreen(bool bEnable);
	void MJSetIsDarkend(class FName DarkAreaLabel, bool IsDarkend);
	void MJSetIsAllDarkend(bool IsDarkend);
	void MJSetIgnorePlaceNoReactionNPC(bool IsIgnore);
	void MJSetForceFastTravel(bool IsEnable);
	void MJSetFixMoveMode(int32 FixMoveMode);
	void MJSetFieldIgnoreBattleResourceLoad(bool Enable);
	void MJSetExcludeSpecifiyMapVisited(bool IsVisited, class FName LevelLabel);
	void MJSetEnableTitleMovieCurrentTime(bool Enable);
	void MJSetEnableDebugAchievementNotification(bool bEnable);
	void MJSetDebugTargetActorName(const class FString& TargetActorName);
	void MJSetAutoBalloonTimer(float FAutoTimer);
	void MJSetAllMapVisited(bool IsVisited);
	void MJSEList(bool Enable);
	void MJScreenshot(const class FString& InFilename);
	void MJSaveGameBySlotId(int32 ID);
	void MJRequestBattleMap(class FName battleMapName);
	void MJReleaseAllStoryRecord(bool bEnable);
	void MJRefreshFlagObject();
	void MJPlacementRefresh();
	void MJPlacementAllRemove();
	void MJOutputAnimationPlayerLog(bool Enable);
	void MJOutputAnimationOtherLog(bool Enable);
	void MJOpenScreenCapture();
	void MJOpenGuildMenu(class FName GuildLabel);
	void MJMemReport(bool bFull);
	void MJLoadGameBySlotId(int32 ID);
	void MJInvisibleDebugCharacter(bool Enable);
	void MJHideDebugTargetActor(bool Hidden);
	void MJForceBattleEnemyNameOpen(bool Enable);
	void MJFallPrevention(bool bEnable);
	void MJFadeColorChange(bool bEnable, uint8 R, uint8 G, uint8 B);
	void MJEnemyWeaknessFullOpen();
	void MJEndAtlantisParty();
	void MJEnableSafetyBalloon(bool Enable);
	void MJEmotionDisable(bool Enable);
	void MJCloseScreenCapture();
	void MJClearFadeForcibly();
	void MJClearBattleMap();
	void MJChangeTimeZone(int32 NType);
	void MJChangeParty(int32 PartyIdx);
	void MJApplyOldKeyConfig(bool OldApply);
	void MJAddAllItemToBackpack(int32 Num);
	void KSShowUserWidgetState(bool Show);
	void KSShowTimeLockTrigger(bool Enable);
	void KSShowShopTrigger(bool Enable);
	void KSShowLoadLogStartEnd(bool Enable);
	void KSShowLoadFilename(bool Enable);
	void KSShowLevelTrigger(bool Enable);
	void KSShowLadderTrigger(bool Enable);
	void KSShowInputMode(bool Enable);
	void KSShowHouseInTrigger(bool Enable);
	void KSShowEventTrigger(bool Enable);
	void KSShowEndRollDebugInfo_Segment(bool Enable);
	void KSShowEndRollDebugInfo_Credit(bool Enable);
	void KSShowCollision(bool Enable);
	void KSShowCharacterPos(bool Enable);
	void KSShowCharacterMovePoint(bool Enable);
	void KSShowCharacterMoveLocation(bool Enable);
	void KSShowCharacterList();
	void KSShowCharacterLaycast(int32 Type);
	void KSShowCharacterDir(bool Enable);
	void KSShowCharacterAction(bool Enable);
	void KSShowCanoeDockTrigger(bool Enable);
	void KSShowCameraLockTrigger(bool Enable);
	void KSShowCameraLockTiggerInfo(bool Enable);
	void KSSetUseCustomFlipbook(bool Enable);
	void KSSetRunMode(int32 Mode);
	void KSSetPlayerMoveSpeed(float AddSpeed);
	void KSSetPlayerLocation(float X, float Y, float Z);
	void KSSetCharacterFlag(int32 PlayerID, int32 Sequence, bool Enable);
	void KSPlayEventTheater(const class FString& EventName, int32 TimeZone);
	void KSPlayEvent(const class FString& EventName, int32 FrameNum);
	void KSPlayBalloon(class FName Label, int32 NType);
	void KSPerformanceCheck(bool Enable);
	void KSLevelTriggerCheck(bool Enable);
	void KSLevelChangeList(bool Enable);
	void KSLevelChange(class FName LevelName, uint8 TriggerIndex);
	void KSForceGarbageCollection();
	void KSFlagEditor(bool Enable, bool Label);
	void KSEventTriggerEnable(bool Enable);
	void KSEventCameraMode(bool Enable);
	void KSAllowLoadDisabledSaveData(bool Enable);
	void KSAddItemToBackpack(class FName ItemLabel, int32 Num);
	void GetEventCounter(int32 Index);
	void FullPotentialityAction();
	void FixedRandomDamage(bool bEnable);
	void FixedRandomAilment(bool bEnable);
	void ExecCheatCommandFromSaved(const class FString& FilePath);
	void ExecCheatCommand(const class FString& FilePath);
	void EscapeAlwaysSuccess(bool bEnable);
	void EnemyNoKO(bool bEnable);
	void EnemyNoDamage(bool bEnable);
	void EnemyFullPower(bool bEnable);
	void EnableManualSequencerUpdate(bool bEnable);
	void EnableBusinessSupport(bool bEnable);
	void EnableBattleVictory(bool bEnable);
	void EnableBattleDefeat(bool bEnable, bool bOnce);
	void EnableAutoBattle(bool bEnable);
	void EnableAllLearnAbilityOpen(bool bEnable);
	void EnableAllInvadeMonsterOpen(bool bEnable);
	void EnableAllAbilityOpen(bool bEnable);
	void DeleteTameMonster(int32 InvadeID);
	void ClearParticipationOrder();
	void ChangeGameSpeed(float ChangeSpeed);
	void ChangeBattleSpeed();
	void AwakeningMonster(int32 Awake);
	void AddEventCounter(int32 Index, int32 Value);
};

// 0x10 (0x230 - 0x220)
// Class Majesty.KSDebugMenuManager
class AKSDebugMenuManager : public AActor
{
public:
	enum class EDEBUGMENU_STATE                  DebugMenuState;                                    // 0x220(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1799[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CurrentWidget;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AKSDebugMenuManager* GetDefaultObj();

	bool ToggleFCViewer();
	void StartTutorialAutoCapture(const class FString& ResourceName, int32 TargetLang, int32 TargetPlatform, const class FString& FileName_TutorialType, const class FString& FileName_ImageNo, const class FString& FileName_Character);
	void ReLocateNPC(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	bool OpenFCViewer(bool IsOpen);
	class AKSDebugMenuManager* GetInstance();
	void CloseMenu();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSDebugMenuStatics
class UKSDebugMenuStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKSDebugMenuStatics* GetDefaultObj();

	void NextBattleCalcText();
	bool IsOutputPlayerAnimLog();
	bool IsOutputOtherAnimLog();
	bool IsLevelTriggerIntercept();
	bool IsEditor();
	bool IsDisableEmotion();
	bool IsDebugMenuOpen();
	TArray<class FString> GetSpawnNpcListFromTextFile();
	bool GetPlacementLabelsForDebug(TArray<class FName>* PlacementLabels, TArray<class FText>* PlacementLabels_FText);
	class FString GetEventFalgLabel(int32 ID);
	class FString GetDebugMenuSortList();
	uint8 GetDebugDrawCounter();
	class UUserWidget* GetCurrentDebugMenuWidget();
	class FString GetBattleCalcText(int32 NIndex);
	bool ExportUObjectAsJson(class UObject* Obj, class FString* OutExportedFilePath);
	void ExportTextFile(const class FString& FilePath, const class FString& Filename);
	bool ExportSaveData(class UObject* Obj);
	void DebugDrawSwitch();
	void CloseDebugMenu();
	void ClearBattleCalcText();
	void AppendBattleCalcText(const class FString& PushText);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSDPICustomScalingRule
class UKSDPICustomScalingRule : public UDPICustomScalingRule
{
public:

	static class UClass* StaticClass();
	static class UKSDPICustomScalingRule* GetDefaultObj();

};

// 0x28 (0x258 - 0x230)
// Class Majesty.KSEffectManager
class AKSEffectManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_179F[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEffectComponentList>          M_EffectComponentList;                             // 0x240(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         M_IsEffectManagerReady;                            // 0x250(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17A0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSEffectManager* GetDefaultObj();

	void SuspendEffect(class UParticleSystemComponent* EFFECT);
	void SpawnEffect(class FName EffectName, class AActor* TargetActor, const struct FVector& Location, const struct FRotator& Rotate, bool ForceSpawn, class UParticleSystemComponent** EFFECT, bool* Success, bool* LoopEffect, const struct FVector& Scale);
	void SetEffectSetupFlag(bool Flag);
	void SetEffectList(const TArray<class FName>& EffectList);
	void SetDebugMode(bool IsDebug);
	void ResumeEffect(class UParticleSystemComponent* EFFECT);
	bool IsEffectManagerReady();
	bool IsDebugMode();
	uint8 GetDebugAddCnt();
	void DestroyEffect(class UParticleSystemComponent* EFFECT);
	void DebugSpawnEffect(class FName EffectLabel, uint8 SpawnCnt);
	void CallbackSystemFinished(class UParticleSystemComponent* Component);
	void CallbackParticleSpawn(class FName Name, float Float, const struct FVector& VectorA, const struct FVector& VectorB);
};

// 0x58 (0x2B8 - 0x260)
// Class Majesty.KSFade
class UKSFade : public UUserWidget
{
public:
	enum class EFADE_TYPE                        FadeType;                                          // 0x260(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TickType;                                          // 0x264(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsEnd;                                             // 0x268(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timer;                                             // 0x26C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndTime;                                           // 0x270(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          FadeColor;                                         // 0x274(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartAlpha;                                        // 0x284(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  EndSlateVisible;                                   // 0x288(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFinishFadeOut;                                   // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinishFadeIn;                                    // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FColor                                M_DebugFadeColor;                                  // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bDebugFadeColorEnable;                           // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSFade* GetDefaultObj();

	void SetupDebugFadeColor();
	bool IsFadeVisible();
	bool IsFadeEnd();
	enum class EFADE_TYPE GetFadeType();
	bool FadeOut(struct FLinearColor& InColor, float InEndTime);
	bool FadeInit(struct FLinearColor& RColor, float InEndTime);
	bool FadeIn(struct FLinearColor& InColor, float InEndTime);
	bool FadeEnd();
};

// 0x18 (0x248 - 0x230)
// Class Majesty.KSFlipbookManager
class AKSFlipbookManager : public AAcqManagerBase
{
public:
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17AA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSFlipbookManager* GetDefaultObj();

	bool GetSpriteDataFromActionLabel(class FName CharacterName, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, struct FKSSpriteData* Data);
	bool GetSpriteData(class FName SpriteName, struct FKSSpriteData& SpriteData);
	bool GetMissionSpriteData(class FName SpriteName, struct FKSSpriteData& SpriteData);
	bool GetMissionFlipbookData(class FName FlipbookName, struct FKSUIFlipbookData& FlipbookData);
	void GetFlipbookTexAssetPtrs(class FName FlipbookName, bool ResetArray, TArray<TSoftObjectPtr<class UTexture2D>>* OutTexAssetPtrs);
	bool GetFlipbookData(class FName FlipbookName, struct FKSFlipbookData& FlipbookData);
	class UMaterialInterface* GetDefaultMaterial();
	bool GetCharacterTextureAndAddtionalFirstFrame_SoftObjectPtr(class FName CharacterName, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, TArray<TSoftObjectPtr<class UTexture2D>>* OutArray);
	void GetCharacterTexAssetPtrs(class FName CharacterName, TArray<TSoftObjectPtr<class UTexture2D>>* OutTexAssetPtrs);
	void GetCharacterMaterialAssetPtrs(class FName CharacterName, TArray<TSoftObjectPtr<class UMaterialInterface>>* OutMatAssetPtrs);
	bool GetCharacterFlipbookNames(class FName CharacterName, TArray<class FName>& FlipbookNames);
	bool GetCharacterFlipbookName(class FName CharacterName, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, class FName* FlipbookName);
	bool GetCharacterData(class FName CharacterName, struct FKSCharaFlipbook& CharacterData);
	bool GetAllSpriteDataFromActionLabel(class FName CharacterName, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, TMap<class FName, struct FMJSpriteSocketData>* DataList, bool bIsReverseSocket);
	class UKSPaperFlipbook* CreateFlipbook(class UObject* Outer);
	bool ContainsFlipbookData(class FName FlipbookName);
	bool ChangeMissionFlipbook(class FName FlipbookName, class UKSPaperFlipbook* PaperFlipbook, class UMaterialInstanceDynamic* SetMaterial);
	bool ChangeFlipbook(class FName FlipbookName, class UKSPaperFlipbook* PaperFlipbook, class UMaterialInstanceDynamic* SetMaterial, bool bReverseSprite);
};

// 0xA8 (0x250 - 0x1A8)
// Class Majesty.KSGameInstance
class UKSGameInstance : public UGameInstance
{
public:
	uint8                                        Pad_17AD[0x1A];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bDebugMode;                                      // 0x1C2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17AE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FFontItemData>            FontMap;                                           // 0x1C8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       FontJA;                                            // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       FontEN;                                            // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AF[0x11];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsCreateFCv2;                                      // 0x249(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSGameInstance* GetDefaultObj();

	void SetStartLevel(class FName LevelName);
	void SetPlayInTestLevel(bool bInTestLevel);
	void SetGameSuspend(bool IsSuspend);
	void SetFirstSpawn(bool FirstSpawn);
	void SetDisableWorldRendering(bool bDisable);
	void SetDebugMode(bool IsDebug);
	void SetDebugLoadLevel(bool DebugLoadLebel);
	void LoadFonts();
	void LoadFont(enum class EKSLanguage Lang);
	void KSSetLang(enum class EKSLanguage ELang);
	bool IsPlayInTestLevel();
	bool IsGamePlayMode();
	class FName GetStartLevel();
	bool GetIsDebugLoadLevel();
	class UKSGameInstance* GetInstance();
	bool GetFirstSpawn();
	bool GetDebugMode();
	class AKSCharacterManager* GetCharacterManager();
	void Debug_SetOverwritePlatformFontType(int32 Type);
};

// 0x2E0 (0x5E8 - 0x308)
// Class Majesty.KSGameMode
class AKSGameMode : public AGameMode
{
public:
	class UKSLoadingWidget*                      LoadingWidget;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSAutoSavingWidget*                   AutoSavingWidget;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17BB[0x2D0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSGameMode* GetDefaultObj();

	void SetTheaterEndMainMenu(bool IsEnable);
	void SetPaused(enum class EPauseType PauseType, bool IsPaused);
	void SetHouseEnterActor(class AActor* HouseEnter);
	void SetHouseCharacterScale(float InScale);
	void SetDirectLoadGame(bool bDirectLoadGame);
	void SetDebugMessage(const class FString& Message);
	void SetDebugInfoVisibility(bool bVisible, int32 PageIndex);
	void SetDebugInfoStoryMemoryVisibility(bool bVisible);
	void SetDebugInfoEventVisibility(bool bVisible);
	void SetBrightnessOffset_ForSwitch(float Val);
	void SetAutoSaveEnable(bool InEnable);
	class FString ParseStoryMemoryData(const struct FEventListData& EventData, int32 MemoryIndex);
	void KSToggleEncount();
	void KSShowMultilingualGuide(bool Flag);
	void KSSetEncount(bool Encount);
	void KSSetBitFlag(int32 BitIndex, bool Flag);
	void KSDrawBitFlag(int32 StartIndex, int32 Num);
	bool IsPaused();
	bool GetTheaterEndMainMenu();
	enum class EPauseType GetPauseFlags();
	bool GetPaused(enum class EPauseType PauseType);
	class AActor* GetHouseEnterActor();
	float GetHouseCharacterScale();
	bool GetDirectLoadGame();
	float GetBrightnessOffset_ForSwitch();
	bool GetAutoSaveEnable();
	void Debug_SetInfoText(enum class EGameModeDebugPage Page, const class FString& Text);
	void Debug_SetFixMoveMode(enum class EDebugFixMoveMode FixMoveMode);
	void Debug_SetCompletedGamePreparation(bool bCompleted);
	void Debug_SetAutoPlaying(bool bAutoPlay);
	void Debug_ResetEncountWipeFlag();
	bool Debug_IsCompletedGamePreparation();
	bool Debug_IsAutoPlaying();
	void Debug_GetStoryMemoryData(TArray<class FString>* TextList, int32 MemoryIndex);
	enum class EDebugFixMoveMode Debug_GetFixMoveMode();
	void Debug_GetEventText(class FString* Text);
	bool Debug_GetAutoPlayingArgument(class FString* OutScenarioName);
	bool CanLoadDisabledSaveData();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSGameStatics
class UKSGameStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKSGameStatics* GetDefaultObj();

	void WipeOutAtBattleStart(class UObject* WorldContextObject);
	void WipeOutAtBattleEnd(class UObject* WorldContextObject);
	void WipeInAtBattleStart(class UObject* WorldContextObject);
	void WipeInAtBattleEnd(class UObject* WorldContextObject);
	class UKSLoadingWidget* StopLoadingUI(class UObject* WorldContextObject, enum class ELOADING_REASON Reason);
	void StartTimer();
	class UKSLoadingWidget* StartLoadingUI(class UObject* WorldContextObject, enum class ELOADING_REASON Reason);
	void SetUseCustomFlipbook(class UObject* WorldContextObject, bool Enable);
	void SetTransitionFromLoadGame(class UObject* WorldContextObject, bool Enable);
	struct FTimerHandle SetTimerForNextTick(class UObject* WorldContextObject, FDelegateProperty_& InDynDelegate);
	void SetTimeDilation(class UObject* WorldContextObject, enum class ECHANGE_TIME_DILATION EType);
	void SetTagVisibleStaticMesh(class UObject* WorldContextObject, class FName Tag, bool Enable);
	void SetTagVisible(class UObject* WorldContextObject, class FName Tag, bool Enable);
	void SetShowMultilingualGuide(class UObject* WorldContextObject, bool Enable);
	void SetResolution(enum class ERESOLUTION_TYPE Type);
	void SetPlayerDash(class UObject* WorldContextObject, bool InEnable);
	void SetPartyChatEnable(class UObject* WorldContextObject, bool InEnable);
	void SetMainMenuEnable(class UObject* WorldContextObject, bool InEnable);
	void SetLastBattleResult(enum class EBATTLE_RESULT InResult);
	void SetLanguage(enum class EKSLanguage InLang);
	void SetInHouse(class UObject* WorldContextObject, bool InHouse);
	void SetHiddenCollisionComponentChild(class USceneComponent* PRootComp, bool bHidden);
	void SetHiddenCollisionActorChild(class AActor* PRootActor, bool bHidden);
	void SetHiddenActorChild(class AActor* PRootActor, bool bHidden);
	void SetEventSpeedUpMode(class UObject* WorldContextObject, int32 State, bool IsInputChange);
	void SetEncountSignMode(class UObject* WorldContextObject, bool InEncountSign);
	void SetEncount(class UObject* WorldContextObject, bool InEncount);
	void SetBattleSpeed();
	void SetBattleMode(class UObject* WorldContextObject, bool InBattleMode);
	void ResetGameOnGameOver(class UObject* WorldContextObject);
	void ResetBattleSpeedUp();
	enum class EKSLanguage PS_GetSystemLanguage();
	bool PS4IsEnterAssingCircle();
	void PrintCurrentRealTime(class UObject* WorldContextObject, const class FString& Comment);
	class UKSAutoSavingWidget* OpenOptionAutoSavingUI(class UObject* WorldContextObject);
	class UKSAutoSavingWidget* OpenAutoSavingUI(class UObject* WorldContextObject);
	void KSSetPerformanceModeChangedNotificationEnabled(bool IsEnable);
	bool IsUseCharacterResourceDB();
	bool IsTrialEdition(class UObject* WorldContextObject);
	bool IsTransitionFromLoadGame(class UObject* WorldContextObject);
	bool IsReleaseMusicPlayer();
	bool IsPlayerActiveMode(class UObject* WorldContextObject);
	bool IsPlayBalloonVoice(class UObject* WorldContextObject);
	bool IsPlatformSwitch();
	bool IsPlatformPS5();
	bool IsPlatformPS4();
	bool IsPlatformPC(class UObject* WorldContextObject);
	bool IsNoticeScreenSkip(class UObject* WorldContextObject);
	bool IsMainMenuOpen(class UObject* WorldContextObject);
	bool IsFadeUser(class UObject* WorldContextObject, enum class EFADE_USER User);
	bool IsFadeEnd(class UObject* WorldContextObject);
	bool IsCheckInputEventFunction(class UObject* WorldContextObject);
	bool IsCheckInputBattleFunction(class UObject* WorldContextObject);
	void HideWipeAtBattleEnd_Immediately(class UObject* WorldContextObject);
	bool GetUseCustomFlipbook(class UObject* WorldContextObject);
	bool GetTitlePlaying(class UObject* WorldContextObject);
	bool GetShowMultilingualGuide(class UObject* WorldContextObject);
	enum class ERESOLUTION_TYPE GetResolution();
	enum class EMJRegion GetRegion_Switch();
	class FName GetPlayVoiceWaitTimeLabel();
	bool GetPlayerDash(class UObject* WorldContextObject);
	enum class EMJRegion GetPlatformRegion();
	enum class EKSLanguage GetPlatformDefaultLanguage();
	bool GetPartyChatEnable(class UObject* WorldContextObject);
	bool GetOpenMainMenuDisable(class UObject* WorldContextObject);
	enum class EKSLanguage GetOldLanguage();
	class FName GetNoVoiceWaitTimeLabel();
	bool GetMainMenuEnable(class UObject* WorldContextObject);
	enum class EBATTLE_RESULT GetLastBattleResult();
	enum class EKSLanguage GetLanguage();
	class AKSGameMode* GetKSGameMode(class UObject* WorldContextObject);
	bool GetInHouse(class UObject* WorldContextObject);
	bool GetFieldCommandDisable(class UObject* WorldContextObject);
	bool GetFCMode();
	class UKSFade* GetFadeWidget(class UObject* WorldContextObject);
	enum class EFADE_TYPE GetFadeType(class UObject* WorldContextObject);
	bool GetEventSpeedUpMode();
	enum class EEVENT_MODE GetEventMode();
	bool GetEventAutoMode();
	bool GetEncountSignMode(class UObject* WorldContextObject);
	bool GetEncount(class UObject* WorldContextObject);
	bool GetElapsedTimeZoneDisable(class UObject* WorldContextObject);
	bool GetChangeTimeZoneDisable(class UObject* WorldContextObject);
	float GetCalcBaseBattleSpeed();
	bool GetBuildRegionJP();
	int32 GetBitFlagIndexByName(class FName FlagName);
	bool GetBitFlagByName(class FName FlagName);
	bool GetBattleMode(class UObject* WorldContextObject);
	float GetBalloonThinkingTextWaitValue(class UObject* WorldContextObject, bool PlayVoice);
	float GetBalloonTextWaitValue(class UObject* WorldContextObject, bool PlayVoice);
	float GetBalloonSpeedValue(class UObject* WorldContextObject);
	bool GetActivatedWindow(class APlayerController* PlayerController);
	class UKSFade* FadeOut(class UObject* WorldContextObject, float EndTime, const struct FLinearColor& Color, enum class EFADE_USER FadeUser);
	void FadeInImmediately(class UObject* WorldContextObject, enum class EFADE_USER FadeUser);
	class UKSFade* FadeIn(class UObject* WorldContextObject, float EndTime, const struct FLinearColor& Color, enum class EFADE_USER FadeUser);
	void EndTimerToComment(const class FString& Reason);
	void EndTimer();
	void Debug_SetFixMoveMode(class UObject* WorldContextObject, enum class EDebugFixMoveMode FixMoveMode);
	enum class EDebugFixMoveMode Debug_GetFixMoveMode(class UObject* WorldContextObject);
	class UKSAutoSavingWidget* CloseAutoSavingUI(class UObject* WorldContextObject);
	void ClearFadeForcibly(class UObject* WorldContextObject);
	float CheckTimer();
	void ChangBattleSpeedUp();
	void AddSequenceRequestForHolding(enum class EREQUEST_TYPE Type, const struct FMainSequneceRequestParam& Param);
	void AddSequenceRequest(enum class EREQUEST_TYPE Type, const struct FMainSequneceRequestParam& Param);
	void AcqQuitGame(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x8 (0x238 - 0x230)
// Class Majesty.KSGCManager
class AKSGCManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_17D9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSGCManager* GetDefaultObj();

	void SetKSGCTimer(enum class EKSGC_TYPE GcType);
	void ResetKSGCTimer();
};

// 0x0 (0x260 - 0x260)
// Class Majesty.KSListColumnWidgetBase
class UKSListColumnWidgetBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UKSListColumnWidgetBase* GetDefaultObj();

	void SetText_Column3(class FName Col1, class FName Col2, class FName Col3);
	void SetText_Column2(class FName Col1, class FName Col2);
	void SetText_Column1(class FName Col1);
};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.KSListItemWidgetBase
class UKSListItemWidgetBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UKSListItemWidgetBase* GetDefaultObj();

};

// 0x20 (0x2E0 - 0x2C0)
// Class Majesty.KSListWidgetBase
class UKSListWidgetBase : public UAcqUserWidget
{
public:
	TSubclassOf<class UKSListColumnWidgetBase>   M_ColumnWidgetClass;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UKSListItemWidgetBase>     M_ItemWidgetClass;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSListColumnWidgetBase*               M_ColumnWidget;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_ContainerName;                                   // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKSListWidgetBase* GetDefaultObj();

};

// 0x8 (0x2C8 - 0x2C0)
// Class Majesty.KSLoadingWidget
class UKSLoadingWidget : public UAcqUserWidget
{
public:
	uint8                                        Pad_17FF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSLoadingWidget* GetDefaultObj();

	bool StopLoading_Inner();
	bool StopLoading(enum class ELOADING_REASON Reason);
	bool StartLoading_Inner();
	bool StartLoading(enum class ELOADING_REASON Reason);
	enum class ERESOLUTION_TYPE GetLoadingResourceResolution();
};

// 0x8 (0x228 - 0x220)
// Class Majesty.KSManagerDirector
class AKSManagerDirector : public AActor
{
public:
	class UBalloonBundleWidgetBase*              BalloonBundleWidget;                               // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AKSManagerDirector* GetDefaultObj();

	class AKSManagerDirector* GetInstance();
	class UBalloonBundleWidgetBase* GetBalloonBundleWidget();
};

// 0x38 (0x258 - 0x220)
// Class Majesty.KSObjectBase
class AKSObjectBase : public AActor
{
public:
	bool                                         IsMoveEnd;                                         // 0x220(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKSCharacterDir                   Dir;                                               // 0x221(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1801[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   LoadedMeshes;                                      // 0x228(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1802[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         HouseChangeVisibleFlag;                            // 0x239(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1803[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EOBJ_TYPE                         M_ObjType;                                         // 0x23B(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_PlacementLabel;                                  // 0x23C(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_SpawnPos;                                        // 0x244(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_ObjUniqueID;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1804[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSObjectBase* GetDefaultObj();

	void SetupObjectAfterSpawn(class FName PlacementLabel, enum class EOBJ_TYPE ObjType, const struct FVector& SpawnPos);
	void SetupAfterLoad();
	void SetObjectUniqueID(int32 UniqueId);
	void SetObjectEnable(bool Enable);
	void SetMoveEnd();
	void SetHouseChangeVisibleFlag(bool IsVisble);
	void SetDir(enum class EKSCharacterDir EDir);
	bool Move(struct FVector& Location, float Sec);
	bool IsOpenedTreasureBox();
	class FName GetPlacementLabel();
	class FName GetOpenText();
	int32 GetObjectUniqueID();
	enum class EOBJ_TYPE GetObjectType();
	bool GetHouseChangeVisibleFlag();
	void CbLoadedAssets(TArray<class UObject*>& ObjList);
	void ActionEnter_Implementation();
	void ActionEnter();
};

// 0x28 (0x78 - 0x50)
// Class Majesty.KSPaperFlipbook
class UKSPaperFlipbook : public UPaperFlipbook
{
public:
	TArray<class UKSPaperSprite*>                M_PaperSpritePool;                                 // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UKSPaperSprite*                        M_pPrevSprite;                                     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1805[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSPaperFlipbook* GetDefaultObj();

	void ResetKeyFrames(bool ReleaseSprite);
	struct FVector2D GetMaxSpriteSize();
	void CalcFlipbookData(struct FFlipbookCalcData* Data);
};

// 0x8 (0xB0 - 0xA8)
// Class Majesty.KSPaperSprite
class UKSPaperSprite : public UPaperSprite
{
public:
	struct FVector2D                             CharaFootPivot;                                    // 0xA8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKSPaperSprite* GetDefaultObj();

	struct FVector2D GetOffset();
	struct FVector2D GetDimension();
};

// 0x10 (0x378 - 0x368)
// Class Majesty.KSPartySplitWidgetBase
class UKSPartySplitWidgetBase : public UKSUserWidgetWithState
{
public:
	FMulticastInlineDelegateProperty_            OnClosedKSPartySplitWithResult;                    // 0x368(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKSPartySplitWidgetBase* GetDefaultObj();

	void SetIsDisplayWarning(bool IsDisplay);
	enum class EPARTY_SPLIT_CLOSE_REASON GetCloseReason();
};

// 0x68 (0x5D8 - 0x570)
// Class Majesty.KSPlayerController
class AKSPlayerController : public APlayerController
{
public:
	enum class EKSInputMode                      InputMode;                                         // 0x570(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPlayerCharacterInput;                            // 0x571(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_180E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputAxisX;                                        // 0x574(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InputAxisY;                                        // 0x578(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AxisX;                                             // 0x57C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AxisY;                                             // 0x580(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RAxisX;                                            // 0x584(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RAxisY;                                            // 0x588(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RSholderHold;                                      // 0x58C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         FrameInputFlag;                                    // 0x58D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_180F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SwitchMode;                                        // 0x590(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsGamePadAttached;                               // 0x5A0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSUseInputType                   UseInputType;                                      // 0x5A1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EControllerInputType              UseControllerInputType;                            // 0x5A2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bChangeUseInputType;                               // 0x5A3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1810[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        InputNotificationList;                             // 0x5A8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         EnableMouseMove;                                   // 0x5B8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1811[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_IsSystemUiOverlaid;                              // 0x5BA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1812[0x1D];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSPlayerController* GetDefaultObj();

	void SetPlayerCharacterInput(bool Enable);
	void SetKSInputMode(enum class EKSInputMode Mode);
	void SetDefaultControllerKeyConfig();
	bool SetConfigKey(enum class EKSKeyConfigElement Elem, const struct FKey& Key);
	void ResetToDefaultKeyConfig(enum class EKSKeyConfigType Type);
	void ResetKeyRepeat();
	void ResetConfigKeyList();
	void ReflectSystemDataKeyConfig();
	void ReflectKeyboardLayoutType();
	void RebuildKeyMappings(struct FKSKeyConfigMappingDatum& MappingData);
	void RebuildInputKeyMappingsByKeyConfigElement(enum class EKSKeyConfigElement Elem);
	void OnOptionApplyComplete(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	bool MouseEventY(float Axis);
	bool MouseEventX(float Axis);
	bool IsSetConfigKey(enum class EKSKeyConfigElement Elem, const struct FKey& Key);
	bool IsPressedEventSkip();
	bool IsPressedEventDoubleSpeed();
	bool IsKeyConfigCancelKey(enum class EKSKeyConfigElement Elem, const struct FKey& Key);
	bool IsChangeUseInputType();
	void InitializeConfigKeyList();
	void Initialize();
	enum class EKSUseInputType GetUseInputType();
	int32 GetTypeHashByKeyConfigElement(enum class EKSKeyConfigElement Elem);
	bool GetRSholderHold();
	struct FVector2D GetRAxis();
	bool GetPlayerCharacterInput();
	struct FVector2D GetLAxis();
	enum class EKSInputMode GetKSInputMode();
	class FName GetKeyNameByKeyConfigElement(enum class EKSKeyConfigElement Elem);
	struct FKey GetKeyByKeyConfigElement(enum class EKSKeyConfigElement Elem);
	bool GetGamePadAttached();
	bool GetFrameInputFlag();
	void GetDirectInputKey(const struct FKey& XInputKey, struct FKey* DirectInputKey);
	struct FKey GetDefaultKeyConfigElement(enum class EKSKeyConfigElement Elem);
	void DebugSetFixedInputMode(enum class EKSUseInputType InputType, bool IsFixed);
	void DebugRemoveOldKeyConfig();
	void DebugEnableMouseInput(bool Enable);
	void DebugChangeOldKeyConfigList(bool ChangeOldSetting);
	void DebugAddOldKeyConfig();
	void CleanMoveParam();
	bool CheckInputType();
	void ChangeDefaultKeyboardConfigKey();
	void ApplyDefaultKeyConfigToSystemData();
	void ApplyDefaultKeyConfig();
	void AddInputNotificationActor(class AActor* TargetActor);
};

// 0x98 (0x2C8 - 0x230)
// Class Majesty.KSSaveDataManager
class AKSSaveDataManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1817[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJSaveData*                           SaveGame;                                          // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSSaveSystem*                         SaveSystem;                                        // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           M_TemporaryBackpackItemList;                       // 0x260(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1818[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_IsCreatedsystemSaveData;                         // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1819[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSSaveDataManager* GetDefaultObj();

	bool ValidateAtlantisPartySet();
	void UpdateSlotData(enum class EKSSaveSlotName SlotIdx);
	bool SubItemFromBackpack(class FName ItemLabel, int32 Num);
	bool StartAutoSave(FDelegateProperty_& AutoSavedDelegate);
	bool SetupReminiscenceParty(enum class EPlayableCharacterID CharacterID);
	bool SetupLastDungeonParty(TArray<int32>& Party1, TArray<int32>& Party2);
	bool SetupLastDungeonMode(TArray<int32>& Party1, TArray<int32>& Party2);
	bool SetupFixedParty(TArray<enum class EPlayableCharacterID>& FixedCharaList);
	void SetupBackpackItemList(TArray<struct FSaveBackPackItem>& SaveBackpackItemList);
	void SetupAtlantisPartySet(enum class EKSPartySet PartySetID, TArray<int32>& MainMember, TArray<int32>& SubMember);
	void SetNewGame(bool IsNewGame);
	void SetLastAccessSlotIndex(enum class EKSSaveSlotName SlotIdx);
	void SetIsCreatedsystemSaveData(bool IsCreatedsystemSaveData);
	void SetGameSaveData_Native(class UMJSaveData* SaveData);
	void SetGameSaveData_BP(class UMJSaveData* SaveData);
	void SetGameSaveData(class UMJSaveData* SaveData);
	void SetEventPlayedFlag(int32 Index, bool Flag);
	void SetEventFlag(int32 Index, bool Flag);
	void SetEventCounter(int32 Index, int32 Value);
	void SetEndrollSegmentBattleReplay(enum class EEndRollSegmentSet SegmentID);
	void SetBattleSpeed();
	void SetBackpackItem(int32 ItemId, int32 ItemNum);
	void SetAutoSavePlayerLocation(const struct FVector& PlayerLocation);
	void SetAutoSaveEnable(bool Enable);
	void SetAutoSaved(bool IsAutoSaved);
	bool ResumeNormalPartySet();
	bool RestoreParty();
	bool ResetPartySet();
	void ResetBattleSpeed();
	void RefreshBackpackSaveData();
	bool PrepareAtlantisPartySet();
	void OnFinishAutoSaveSystemData(const class FString& SlotName, int32 UserIndex, bool IsSuccesss);
	void OnFinishAutoSaveGameData(const class FString& SlotName, int32 UserIndex, bool IsSuccesss);
	void OnEndAutoSave();
	bool MergePartyData();
	bool IsValidEventFlag(enum class EBPIsValidReturnCode* ReturnCode, int32 Index);
	bool IsNewGame();
	bool IsAutoSaved();
	bool InitSystemData();
	bool InitPartyData(enum class EPlayableCharacterID CharacterID);
	bool InitGameData();
	class UKSSaveSystem* GetSysSaveData();
	void GetSaveBackpackDataWithBuffer(int32 BufferSize, TArray<struct FSaveBackPackItem>* OutBackPackitemsWithBuffer);
	void GetSaveBackpackData(TArray<struct FSaveBackPackItem>* OutBackPackItems);
	enum class EKSSaveSlotName GetLastAccessSlotIndex();
	class AKSSaveDataManager* GetInstance();
	class UMJSaveData* GetGameSaveData();
	bool GetEventPlayedFlag(int32 Index);
	bool GetEventFlagByName(class FName FlagLabel);
	bool GetEventFlag(int32 Index);
	int32 GetEventCounter(int32 Index);
	enum class EKSPartySet GetCurrentPartySet();
	float GetCalcBaseBattleSpeed();
	bool GetBackpackItem(int32* ItemNum, int32 ItemId);
	struct FVector GetAutoSavePlayerLocation();
	bool FinishLastDungeonMode();
	bool FinishFixedParty();
	void FindItemFromBackpack(class FName ItemLabel, bool* IsFind, int32* Num);
	void Debug_SetupAtlantisPartySetRandom();
	void Debug_SetRandomParticipationOrder();
	void Debug_ResumeNormalPartySet();
	void Debug_PrintItemAcquisitionHistory();
	void Debug_ClearParticipationOrder();
	bool CheckEventFlag(int32 Index);
	bool ChangePartySet(enum class EKSPartySet PartySetID);
	void ChangeBattleSpeed();
	bool AddItemToBackpack(class FName ItemLabel, int32 Num);
	bool AddItemsToBackpack(TMap<class FName, int32>& ItemAndNum);
	void AddEventCounter(int32 Index, int32 Value);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSSaveDataStatics
class UKSSaveDataStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKSSaveDataStatics* GetDefaultObj();

	bool StartAutoSave(FDelegateProperty_& AutoSavedDelegate);
	void SetSysSaveDataParam(class UObject* WorldContextObject, enum class EKSSaveDataParamType ParamType, int32 Param);
	void SetSysSaveDataKeyConfigParam(class UObject* WorldContextObject, enum class EKSKeyConfigElement ParamType, int32 Param);
	void SetSysSaveDataFlag(class UObject* WorldContextObject, enum class EKSSaveDataFlagType FlagType, bool Flag);
	void SetSysSaveData(class UObject* WorldContextObject, class UKSSaveSystem* SysSaveData);
	void SetNextLoadTarget(enum class ESaveDataLoadTarget Target);
	void SetGameSaveData(class UObject* WorldContextObject, class UMJSaveData* GameSaveData);
	void SetDefaultOptionParam(class UObject* WorldContextObject);
	void SetDefaultGraphicsOptionParam(class UObject* WorldContextObject);
	void SetActivitySubTaskStatus(int32 MainStoryId, int32 Status);
	TArray<int32> ResizeArraywithBlank(const TArray<int32>& InputPin, int32 ReturnArrayLength, int32 InitValue);
	class FString MakeSystemDataFileName();
	class FString MakeGameDataFileNameByEnum(enum class EKSSaveSlotName SlotNo);
	class FString MakeGameDataFileName(int32 SlotNo);
	bool IsVoiceLangJapanese(class UObject* WorldContextObject);
	bool IsAutoSaving();
	void GetSysSaveDataParamArray(TArray<int32>* OutParam, class UObject* WorldContextObject);
	int32 GetSysSaveDataParam(class UObject* WorldContextObject, enum class EKSSaveDataParamType ParamType);
	void GetSysSaveDataKeyConfigArray(TArray<int32>* OutParam, class UObject* WorldContextObject);
	void GetSysSaveDataFlagArray(TArray<int32>* OutFlag, class UObject* WorldContextObject);
	bool GetSysSaveDataFlag(class UObject* WorldContextObject, enum class EKSSaveDataFlagType FlagType);
	class UKSSaveSystem* GetSysSaveData(class UObject* WorldContextObject);
	enum class ESaveDataLoadTarget GetNextLoadTarget();
	class UMJSaveData* GetGameSaveData(class UObject* WorldContextObject);
	int32 GetCurrentPlayTime();
	int32 GetActivitySubTaskStatus(int32 MainStoryId);
	bool DoesExistsTrialGameData();
	bool DoesExistsPS4GameData();
	void Debug_OutputActivitySaveData();
	void Debug_CheckContainerSizeInSaveData();
};

// 0x98 (0xC0 - 0x28)
// Class Majesty.KSSaveSystem
class UKSSaveSystem : public USaveGame
{
public:
	struct FKSSysSaveData                        SystemSaveData;                                    // 0x28(0x38)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FKSSaveSlotData>               SaveSlotData;                                      // 0x60(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FMJActivitySaveData                   ActivitySaveData;                                  // 0x70(0x50)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UKSSaveSystem* GetDefaultObj();

	void SetSlotdata(enum class EKSSaveSlotName SlotNo, const struct FKSSaveSlotData& SlotData);
	void SetParam(enum class EKSSaveDataParamType ParamType, int32 Param);
	void SetKeyConfigParam(enum class EKSKeyConfigElement ParamType, int32 Param);
	void SetKeyboardLayoutParam(enum class EKeyboardLayoutType Param);
	void SetFlag(enum class EKSSaveDataFlagType FlagType, bool Flag);
	void MergeActivitySaveData(class UKSSaveSystem* Other);
	void GetSlotdata(enum class EKSSaveSlotName SlotNo, struct FKSSaveSlotData* OutSlotData);
	void GetParamArray(TArray<int32>* OutParam);
	int32 GetParam(enum class EKSSaveDataParamType ParamType);
	void GetKeyConfigParamArray(TArray<int32>* OutParam);
	int32 GetKeyConfigParam(enum class EKSKeyConfigElement ParamType);
	enum class EKeyboardLayoutType GetKeyboardLayoutParam();
	void GetFlagArray(TArray<int32>* OutFlag);
	bool GetFlag(enum class EKSSaveDataFlagType FlagType);
	void Debug_OutputAllData();
};

// 0x20 (0x240 - 0x220)
// Class Majesty.KSSimpleLevelLoader
class AKSSimpleLevelLoader : public AActor
{
public:
	uint8                                        Pad_183A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKSSimpleLevelLoader* GetDefaultObj();

	void StreamingLevelLoaded();
	class ULevelStreamingDynamic* SimpleLoadKSLevel(class UObject* WorldContextObject, const class FString& LevelName, struct FVector& Location, struct FRotator& Rotation, bool* bOutSuccess);
	void SetStreaming(class ULevelStreamingDynamic* Stream);
	bool IsLoaded();
	class AKSSimpleLevelLoader* GetInstance();
};

// 0x400 (0x528 - 0x128)
// Class Majesty.KSTextBlock
class UKSTextBlock : public UTextLayoutWidget
{
public:
	uint8                                        Pad_183C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x130(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	FDelegateProperty_                           TextDelegate;                                      // 0x148(0x10)(ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x158(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x180(0x10)(ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                        Font;                                              // 0x190(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             ShadowOffset;                                      // 0x1E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x1F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x200(0x10)(ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        MinDesiredWidth;                                   // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_183D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UKSTextBlockDecorator*>         Decorators;                                        // 0x218(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_183E[0x280];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Debug_InitializeText;                              // 0x4A8(0x18)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_183F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EKSLanguage                       M_Language;                                        // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKSFontType                       M_FontType;                                        // 0x4C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1840[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_GameTextLabel;                                   // 0x4C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_GameTextFormatLabel;                             // 0x4CC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1841[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          M_GameTextList;                                    // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         DisableRefreshFont;                                // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1842[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRefreshFont;                                     // 0x508(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1843[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bUpdateOutlineSize;                              // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1844[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKSTextBlock* GetDefaultObj();

	void UpdateFontOutlineSize();
	void SetWrapTextAt(float Value);
	void SetText(class FText InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetGameTextWithFormatText(class FName GameTextFormatLabel, class FName GameTextLabel);
	void SetGameTextWithFormatNumber(class FName GameTextLabel, int32 LabelNum);
	void SetGameTextWithFormatKey(class FName GameTextLabel, class FText Key);
	void SetGameText(class FName GameTextLabel);
	void SetFontStyle(enum class EKSFontType InFontType, const struct FSlateColor& InColorAndOpacity, int32 InFontSize);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void RefreshGameText();
	class FText GetText();
	struct FSlateFontInfo GetFont();
	void Debug_ShowTextSizeInfo(bool Enable);
	void Debug_ApplyDebugText();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSTextBlockDecorator
class UKSTextBlockDecorator : public URichTextBlockDecorator
{
public:

	static class UClass* StaticClass();
	static class UKSTextBlockDecorator* GetDefaultObj();

};

// 0xD8 (0x308 - 0x230)
// Class Majesty.KSTextManager
class AKSTextManager : public AAcqManagerBase
{
public:
	bool                                         IsLoaded;                                          // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsLoadedVoice;                                     // 0x231(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1846[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UDataTable>             GameText;                                          // 0x238(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             TalkText;                                          // 0x260(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             TalkVoice;                                         // 0x288(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             TextCharaInfo;                                     // 0x2B0(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             TextItemInfo;                                      // 0x2D8(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextOperationComponent*               TextOperationComponent;                            // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AKSTextManager* GetDefaultObj();

	void SetLanguageConditonParam_Talk(class FName TargetLabel);
	void SetLanguageConditonParam_Solo(bool IsSolo);
	void SetConditonParam_Item(class FName ItemLabel, int32 Count);
	bool LoadTextVoice(enum class EKSLanguage ELang);
	bool LoadText(enum class EKSLanguage ELang);
	class FString ExecMacroOperation(const class FString& InputStr);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSTextStatics
class UKSTextStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKSTextStatics* GetDefaultObj();

	bool LoadTextVoice(enum class EKSLanguage ELang);
	bool LoadText(enum class EKSLanguage ELang);
	bool IsKSTextLoaded();
	void GetTextItemInfo(class FName Label, struct FGameTextItemInfo* OutText);
	void GetTextCharaInfo(class FName Label, struct FGameTextCharaInfo* OutText);
	void GetTalkVoice(class FName Label, struct FTalkVoice* OutText);
	bool GetTalkText(class FName Label, struct FTalkText* OutText);
	void GetGameTextString(class FName Label, class FString* OutText);
	void GetGameTextMacroOperation(class FName Label, class FText* OutText);
	void GetGameText(class FName Label, class FText* OutText);
	class FName GetFallbackTalkTextLabel();
	class FText GetButtonTextFromKeyConfig(class UObject* WorldContextObject, enum class EKSKeyConfigElement Type);
	class FText GetButtonText(class UObject* WorldContextObject, enum class ECONTROL_GUIDE_BUTTON_TYPE Type);
};

// 0x1E0 (0x410 - 0x230)
// Class Majesty.KSUIManager
class AKSUIManager : public AAcqManagerBase
{
public:
	class UWidgetTemporaryHiddenComponent*       M_WidgetTemporalyHiddenComponent;                  // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUserWidget*>                   ActiveStackUI;                                     // 0x238(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UUserWidget*>                   ClosingStackUI;                                    // 0x248(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_186C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UKSUserWidgetBase*>  M_WidgetTable;                                     // 0x268(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EKSUIKind, class FName>      M_TypeToName;                                      // 0x2B8(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_186D[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EWIDGET_CREATE_PHASE, class ULoadAssetHandle*> M_LoadHandles;                                     // 0x368(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_186E[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULetterBoxBase*                        M_LetterWidget;                                    // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AKSUIManager* GetDefaultObj();

	void UnLockInputMode();
	void SetLetterWidget(class ULetterBoxBase* LetterWidget);
	void SetHelpOpen(bool IsOpen);
	void ResetHiddenFlag();
	void ResetFromTitle();
	void RemoveUIPartsList(enum class EKSUIPartsKind Kind);
	void RemoveList(enum class EKSUIKind Kind);
	void RefreshWidget();
	void RefreshTextLanguageAllWidget();
	void RefreshTextLanguage();
	int32 PushActive(class UUserWidget* PushUI);
	void PopActiveUIWith(class UUserWidget* UI, bool* IsPop, class UUserWidget** PopUI);
	void PopActive(class UUserWidget** PopUI);
	int32 OpenRequest(class UUserWidget* PushUI, bool UseStack);
	class UKSUserWidgetBase* OpenDialog(struct FKSUICommonDialogParam& InParam);
	class UKSUserWidgetBase* Open(enum class EKSUIKind Kind);
	bool NoticeCreatedWidget(enum class EWIDGET_CREATE_PHASE CreatePhase);
	void LockInputMode();
	void IsWidgetRunning(bool* IsRunning, enum class EKSUIKind Kind);
	bool IsStack(class UUserWidget* CheckUI);
	bool IsCreatedWidget(enum class EKSUIKind UIType);
	bool IsClosingStackFromWidget(class UUserWidget* CheckUI);
	bool IsClosingStack();
	bool IsBulkLoadedWidgets(enum class EWIDGET_CREATE_PHASE CreatePhase);
	TMap<class FName, class UKSUserWidgetBase*> GetWidgetTable();
	class UKSUserWidgetBase* GetWidgetInstance(enum class EKSUIKind UIType);
	class UKSUserWidgetBase* GetWidget(class FName WidgetName);
	class UUserWidget* GetUIPartsList(enum class EKSUIPartsKind Kind);
	class UWidgetTemporaryHiddenComponent* GetTemporayHiddenComponent();
	TSoftClassPtr<class UUserWidget> GetPartsWidgetClass(enum class EKSUIPartsKind Kind);
	class UKSUserWidgetBase* GetList(enum class EKSUIKind Kind);
	class ULetterBoxBase* GetLetterWidget();
	bool GetInputModeLock();
	bool GetHelpOpen();
	int32 GetActiveStackCount();
	class UUserWidget* GetActiveStack();
	bool ForceCloseMenuCommon(enum class EKSUIKind Kind);
	void DeleteStack(class UUserWidget* DeleteUI);
	void Debug_ShowDebugInfo(bool bEnable);
	void Debug_ShowActiveUI_Stack();
	void Debug_ForceClearActiveUI_Stack();
	void Debug_EnableTextSizeInfo(bool bEnable);
	void Debug_CreateWidget(class FName WidgetName);
	class UUserWidget* CreateUIParts(enum class EKSUIPartsKind Kind);
	class UKSUserWidgetBase* CreateTemporaryWidgets(enum class EKSUIKind UIType);
	class UUserWidget* CreateNonManagedWidgetByClassPtr(TSoftClassPtr<class UUserWidget>& Class, int32 ZOrder, enum class ESlateVisibility InVisibility);
	void CloseRequestFromKind(enum class EKSUIKind Kind, bool ForceClose);
	void CloseRequest(class UUserWidget* PopUI, bool ForceClose);
	bool CloseMenuCommon(enum class EKSUIKind Kind);
	bool CloseDialog(bool* OutIsSelected, int32* OutFocusIndex);
	class UKSUserWidgetBase* Close(enum class EKSUIKind Kind);
	bool BulkLoadWidgets(enum class EWIDGET_CREATE_PHASE CreatePhase);
	bool BulkCreateWidgets(enum class EWIDGET_CREATE_PHASE CreatePhase);
	bool AddUIPartsList(enum class EKSUIPartsKind Kind, class UUserWidget* UIParts);
	void AddToViewport(class UUserWidget* Target, int32 ZOrder);
	void AddToPlayerScreen(class UUserWidget* Target, int32 ZOrder);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.KSUIStatics
class UKSUIStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKSUIStatics* GetDefaultObj();

	void ReloadUIResources();
	int32 PushActive(class UUserWidget* PushUI);
	void PopActiveUIWith(class UUserWidget* UI, bool* IsPop, class UUserWidget** PopUI);
	void PopActive(class UUserWidget** PopUI);
	int32 OpenRequest(class UUserWidget* PushUI, bool UseStack);
	void OpenMainMenu(bool FastWorldMap);
	bool IsUIResManagerLoading();
	bool IsStack(class UUserWidget* CheckUI);
	bool IsKSUserWidgetRunning(enum class EKSUIKind InKind);
	bool IsClosingStack();
	class UTexture2D* GetUIResTexture2D(class FName ResName);
	class UStaticMesh* GetUIResStaticMesh(class FName ResName);
	class UUserWidget* GetUIPartsWidget(enum class EKSUIPartsKind Kind);
	class UBalloonBundleWidgetBase* GetBalloonBundle();
	class UUserWidget* GetActiveStack();
	struct FVector2D GetAbsoluteSize(class UWidget* Target);
	void DeleteStackUI(class UUserWidget* DeleteUI);
	void Debug_SetEventForceSkip(bool bforceSkip);
	void Debug_SetBalloonMessageFullSkip(bool bSkip);
	class FText ConvertMoneyToText_int64(int64 Money, int32 MinDigit, int32 MaxDigit);
	class FText ConvertMoneyToText(int32 Money, int32 MinDigit, int32 MaxDigit);
	void CloseRequestFromKind(enum class EKSUIKind Kind, bool ForceClose);
	void CloseRequest(class UUserWidget* PopUI, bool ForceClose);
	bool CloseMainMenuFromMissionRecordPartyChat(bool FastClose);
	bool CloseMainMenu(bool FastClose);
	void AddToScreen(class UUserWidget* Target, int32 ZOrder, bool UsePlayer);
};

// 0x0 (0x220 - 0x220)
// Class Majesty.LadderObjectBase
class ALadderObjectBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALadderObjectBase* GetDefaultObj();

};

// 0x0 (0x358 - 0x358)
// Class Majesty.LetterBoxBase
class ULetterBoxBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class ULetterBoxBase* GetDefaultObj();

	bool HiddenLetterWidget();
	bool ApplyLetterSize();
};

// 0x10 (0x230 - 0x220)
// Class Majesty.LevelAreaCollisionBase
class ALevelAreaCollisionBase : public AActor
{
public:
	enum class ELEVEL_AREA_TYPE                  AreaType;                                          // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1875[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartEventFlag;                                    // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EndEventFlag;                                      // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1876[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALevelAreaCollisionBase* GetDefaultObj();

	bool IsCollisionEnable();
	class UBoxComponent* GetCollision();
	enum class ELEVEL_AREA_TYPE GetAreaType();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LevelFunction
class ULevelFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULevelFunction* GetDefaultObj();

	struct FPlayerLocation MakeCurrentPlayerLocation();
	bool IsSameLevelArea(class UObject* WorldContextObject, const struct FVector& Pos, enum class ELEVEL_AREA_TYPE AreaType);
	bool IsPlayableLevelChange();
	class FName GetTimeZoneChangeSeLabelInCurrentLevel();
	struct FCameraLockParams GetLevelTriggerCameraLockParams(class UObject* WorldContextObject, enum class ELevelTriggerID LevelTriggerID);
	enum class ELEVEL_AREA_TYPE GetLevelArea(class UObject* WorldContextObject, const struct FVector& CheckPos);
	void GetLandObject(class UObject* WorldContextObject, const struct FVector& StartLocation, float Length, class AActor** HitActor, struct FHitResult* OutHit);
	class ALevelTriggerActor* FindLevelTriggerByTriggerId(class UObject* WorldContextObject, enum class ELevelTriggerID LevelTriggerID);
	void Debug_SetExcludeSpecifiyMapVisited(bool bVisited, class FName LevelLabel);
	void Debug_SetAllMapVisited(bool bVisited);
	void Debug_GetAllMapLabels(TArray<class FName>* OutMapLabels);
	enum class ELEVEL_AREA_TYPE CheckContainedLevelArea(struct FVector& CheckPos);
};

// 0xC8 (0xF0 - 0x28)
// Class Majesty.LevelLoader
class ULevelLoader : public UObject
{
public:
	uint8                                        Pad_187A[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSet*                             M_TargetLevelSet;                                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_187B[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class ULevelSet*>          M_LoadedLevel;                                     // 0x90(0x50)(NativeAccessSpecifierPrivate)
	class UClass*                                M_LevelSetClass;                                   // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_187C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelLoader* GetDefaultObj();

};

// 0x348 (0x568 - 0x220)
// Class Majesty.LevelManager_Others
class ALevelManager_Others : public AActor
{
public:
	TMap<class FName, struct FKSLevelPostProcessData> M_PostProcessData;                                 // 0x220(0x50)(Protected, NativeAccessSpecifierProtected)
	float                                        M_PostParam_VignetteWeakRate;                      // 0x270(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_PostParam_VignetteNormalRate;                    // 0x274(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_PostParam_FocalRegionWideAdd;                    // 0x278(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_PostParam_DofScaleWeakRate;                      // 0x27C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_PostParam_DofScaleNormalRate;                    // 0x280(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_PostParam_GainRateMin;                           // 0x284(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_PostParam_GainRateMax;                           // 0x288(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_Debug_BarNotPlaceCharaRate;                      // 0x28C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_Debug_BarPlaceCharaRateOne;                      // 0x290(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1894[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                M_Debug_BarCharaList;                              // 0x298(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, TWeakObjectPtr<class AKSCharacterBase>> NPCList;                                           // 0x2A8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<int32, TWeakObjectPtr<class AKSCharacterBase>> NPCIDList;                                         // 0x2F8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1895[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class AKSCharacterBase>> ReserveDestroyNpcList;                             // 0x358(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<class FName, class AKSObjectBase*>      MapObjectList;                                     // 0x368(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class AEventTriggerBox*>   EventTriggerList;                                  // 0x3B8(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class ALevelSequenceActor*> PlacedSequencerList;                               // 0x408(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<class AMJPathSplineObject*>           M_apNPCPathList;                                   // 0x458(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         ChangeBGM;                                         // 0x468(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nTreasureBoxCounter;                             // 0x470(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsGameOverPlaying;                               // 0x474(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bTransitionToGameOver;                           // 0x475(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_LevelChangeByLinerShip;                          // 0x476(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1897[0xE2];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bForceSpawn;                                     // 0x559(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1898[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          M_MPC_PGControl;                                   // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ALevelManager_Others* GetDefaultObj();

	void VisibleEmotionAllNPC(bool IsVisible);
	void VisibleCategoryAll(enum class EPLACEMENT_TYPE EType, bool IsVisible);
	void VisibleBarCharacter();
	void VisibleAll(bool IsVisible);
	void Visible(enum class EPLACEMENT_TYPE EType, class FName Label, bool IsVisible);
	void SpawnPlacementObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, const struct FVector& VSpawnPos, bool bRefreshFollowNPC, struct FPlacementData& PPlacementData, bool bFadeChara, bool bForceSpawn);
	bool Spawn_TimeZoneChange(enum class EPLACEMENT_TYPE EType, class FName Label);
	void SetVisibleBarChangeCharacter();
	void SetupNPCPathList();
	void SetLevelChangeByLinerShip(bool bLinerShip);
	void SetChangeBGM(bool Change);
	void SetBgmIdFromOuter(int32 BGMID);
	void ResetInHouseSettings();
	void ResetCameraLockParam();
	void RequestRestorePlayerPlacement(struct FReminiscenceRestorePlacement& RestorePlacement);
	void RequestMapInLocation(struct FPlayerLocation& Location);
	void RequestMapInEquipLantern(struct FEquipLanternData& EquipLantern);
	void RequestMapInCameraLock(struct FVector& CameraLockPos, enum class ELevelTriggerID LevelTriggerID);
	void RemoveTargetNPC_ByID(int32 NpdUniqID);
	bool RemoveObjectFromList(enum class EPLACEMENT_TYPE EType, class FName ObjLabel);
	bool RemoveList_TimeZoneChange(enum class EPLACEMENT_TYPE EType, class FName Label);
	bool RemoveList_TargetNPC(class AKSCharacterBase* PNPC);
	bool RemoveList(enum class EPLACEMENT_TYPE EType, class FName ObjLabel);
	void RemoveAllType();
	void RemoveAll(enum class EPLACEMENT_TYPE EType);
	bool RefreshSwoon(int32 NPCUniqID);
	bool RefreshSpawn(class UObject* WorldContextObject, class FName LevelName, bool FadeChara, bool ForceSpawn, bool NextTimeZone, bool bUpdateSwoon);
	void RefreshPostProcess(bool bCheckEventPlaying);
	void RefreshPlacedObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, bool bRefreshFollowNPC, bool bUpdateSwoon);
	void RefreshCurrentCameraLock_Delay(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void RefreshCurrentCameraLock();
	void RefreshCameraLockByLevelTriggerId(enum class ELevelTriggerID TriggerID);
	void RefreshBarChangeCharacter();
	void RecalcCollectedPostProcessVolumes();
	void Proc_OnFinishLoadFieldLevel();
	void Proc_OnFinishFadeOut_Field_Last();
	void Proc_OnFinishFadeOut_Field_First();
	void Proc_OnFinishFadeIn();
	void Proc_OnFieldLevelShown_Last();
	void Proc_OnFieldLevelShown_First();
	void Proc_OnBeginLevelChangeFadeOut();
	void OnStartGameOver();
	void OnStartBattle();
	bool OnShownField_AfterBattle();
	void OnFinishFadeIn_AfterBattle();
	void OnFinishFadeIn();
	void OnFinishBattle();
	void NotifyGameParamDB(class FName DbName, enum class EDBNoticeType Notice);
	bool IsTimeZoneThatCanPlaced(struct FPlacementData& CPlaceData, bool NextTimeZone);
	bool IsTimeZoneCheck(struct FPlacementData& CPlaceInfo);
	bool IsRequestedMapInLocation();
	bool IsRequestedMapInEquipLantern();
	bool IsGameOverLevelLoad();
	bool IsFindList(enum class EPLACEMENT_TYPE EType, class FName Label);
	void InitOnBP();
	void HouseChangeVisible(bool InHouse, int32 Floor);
	struct FReminiscenceRestorePlacement GetRestorePlayerPlacement();
	class ALevelSequenceActor* GetPlacedSequencer(class FName Label);
	class AKSCharacterBase* GetNPCUniqID(int32 UniqID);
	TArray<class AMJPathSplineObject*> GetNPCPathList();
	TArray<class FName> GetNpcLabels();
	class AKSCharacterBase* GetNPC(class FName ObjLabel);
	void GetMJLevelManager(enum class EBPFuncReturnCode* ReturnCode, class AMJLevelManager** OutLevelManager);
	TArray<class FName> GetMapObjectLabels();
	class AKSObjectBase* GetMapObject(class FName Label);
	struct FPlayerLocation GetMapInLocation();
	struct FEquipLanternData GetMapInEquipLantern();
	struct FVector GetMapInCameraLockPos();
	bool GetLevelChangeByLinerShip();
	TArray<class FName> GetEventTriggerLabels();
	class AEventTriggerBox* GetEventTrigger(class FName Label);
	TArray<class FName> GetDelayedSpawnNpcLabelList();
	int32 GetBgmIdFromOuter();
	class FName GetBattleEnemyGroupID();
	TArray<class AKSCharacterBase*> GetAllNPC();
	void FloorVisibleChangeCheck(class FName& PlacementLabel, int32 NCheckFloor);
	void EndBattleWipe(int32 GameOverCursor);
	void DestroyDontPlaceObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, bool bFadeChara, TArray<int32>& AnFollowNPCID, int32 NUniqUndex);
	void Debug_ShowPostProcessVolumeInfo();
	void Debug_ChangeBarChara();
	void CollectPostProcessVolumes();
	void ClearRestorePlayerPlacement();
	void ClearPostProcessVolumes();
	void ClearMapInLocation();
	void ClearMapInEquipLantern();
	void ClearMapInCameraLock();
	void ClearForciblyPostProcessVolumes();
	void ClearCollisionDisabledNPC();
	void CheckLevelTriggerEnable();
	bool CheckExtendedSpawnByEndDelayCount(struct FPlacementData& PlacementData, int32 NUnqIndex);
	bool CheckEventParamCondition(struct FPlacementEventParamSet& EventParamSet);
	void ChangeMapPreProcess(int32 NextMapID);
	bool ApplyScreenBrightness(int32 Level);
	bool ApplyCornerDarkness(bool bIsNormal, bool CheckEventPlaying);
	bool AddPlacedSequencerList(class FName ObjLabel, class ALevelSequenceActor* PObj);
	bool AddNPCList(class FName ObjLabel, class AKSCharacterBase* PObj);
	bool AddMapObjectList(class FName ObjLabel, class AKSObjectBase* PObj);
	bool AddEventTriggerList(class FName ObjLabel, class AEventTriggerBox* PObj);
	void AddCollisionDisabledNPC(int32 NPCUniqID);
};

// 0x20 (0x250 - 0x230)
// Class Majesty.LevelManagerBase
class ALevelManagerBase : public AAcqManagerBase
{
public:
	uint8                                        Pad_1899[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULevelLoader*>                  M_LevelLoader;                                     // 0x240(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ALevelManagerBase* GetDefaultObj();

	void RegisterSubLevelSuffix(class FName SubLevelSuffix);
	bool IsLevelShown(class FName LevelName);
	bool IsLevelLoaded(class FName LevelName);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LevelManagerUtility
class ULevelManagerUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULevelManagerUtility* GetDefaultObj();

	bool SwitchBattleLevel(int32 MapIndex);
	void SetVisibleObjects(enum class EPLACEMENT_TYPE EType, class FName Label, bool IsVisible);
	void SetVisibleEmotionAllNPC(bool IsVisible);
	void SetVisibleBarChangeCharacter();
	void SetVisibleAllObjects(bool IsVisible);
	void SetVignetteWeakRate(float Param);
	void SetVignetteNormalRate(float Param);
	void SetRequestedLevelTriggerID(enum class ELevelTriggerID TriggerID);
	void SetLevelChangeByLinerShip(bool bLinerShip);
	void SetGainRateMin(float Param);
	void SetGainRateMax(float Param);
	void SetFocalRegionWideAdd(float Param);
	void SetBgmIdFromOuter(int32 BGMID);
	void SaveVisitedMap(class FName SaveLevel);
	void ResetCameraLockParam();
	void RequestRestorePlayerPlacement(struct FReminiscenceRestorePlacement& RestorePlacement);
	void RequestMapInLocation(struct FPlayerLocation& Location);
	void RequestMapInEquipLantern(struct FEquipLanternData& EquipLantern);
	void RequestMapInCameraLock(struct FVector& CameraLockPos, enum class ELevelTriggerID LevelTriggerID);
	bool RequestLoadFieldLevel(class FName Map, enum class ELevelTriggerID TriggerID, bool Fade, bool ChangeBGM);
	void RemoveTargetNPC_ByID(int32 NPCUniqID);
	bool RemoveObjectFromList(enum class EPLACEMENT_TYPE EType, class FName ObjLabel);
	void RemoveAllType();
	bool RefreshSwoon(int32 NPCUniqID);
	bool RefreshSpawnCurrentLevel(bool FadeChara, bool IsForceSpawn, bool NextTimeZone, bool bUpdateSwoon);
	void RefreshFlagObjectRenderStateDirty();
	void RefreshFlagObject();
	void RefreshBarChangeCharacter();
	void RecalcCollectedPostProcessVolumes();
	bool PlayLevelBGM();
	void ModifyActorSoftReference(TSoftObjectPtr<class AActor>& SoftRef);
	bool IsValidLevelManager_Inner();
	void IsValidLevelManager(enum class EBPIsValidReturnCode* ReturnCode);
	bool IsTransitionToGameOver();
	bool IsTownById(int32 LevelId);
	bool IsSameLevelChanging();
	bool IsRequestedMapInLocation();
	bool IsPrevLevelSea();
	bool IsPrevLevelInGame();
	bool IsNowLevelTown();
	bool IsNowLevelSea();
	bool IsNowLevelInGame();
	bool IsNextLevelInGame();
	bool IsLevelChanging();
	bool IsImmovableByFieldChanging();
	bool IsGameOverPlaying();
	bool IsGameOverLevelLoad();
	bool IsFirstVisitLevel();
	bool IsDungeonById(int32 LevelId);
	bool IsCompletedLevelChanging();
	void HouseChangeVisible(bool InHouse, int32 Floor);
	float GetVignetteWeakRate();
	float GetVignetteNormalRate();
	class FName GetShowLevelName();
	struct FReminiscenceRestorePlacement GetRestorePlayherPlacement();
	bool GetRestoreEncountDataAfterReminiscence(struct FEncountTriggerData* OutEncountTriggerData);
	enum class ELevelTriggerID GetRequestedLevelTriggerID();
	int32 GetPrevTownID(bool UseSubTownID);
	class FName GetPrevLevelName();
	int32 GetPrevLevelDataID();
	bool GetPrevLevelData(struct FLevelInfoData* OutLevelData);
	enum class ELEVEL_DARK_STATE GetPrevLevelDarkState();
	class AKSCharacterBase* GetNPCUniqID(int32 UniqID);
	void GetNPCPathList(TArray<class AMJPathSplineObject*>& OutNpcPathList);
	class AKSCharacterBase* GetNPC(class FName ObjLabel);
	int32 GetNowTownID(bool UseSubTownID);
	class FName GetNowLevelName();
	int32 GetNowLevelDataID();
	bool GetNowLevelData(struct FLevelInfoData* OutLevelData);
	int32 GetNextTownID(bool UseSubTownID);
	class FName GetNextLevelName();
	int32 GetNextLevelDataID();
	bool GetNextLevelData(struct FLevelInfoData* OutLevelData);
	struct FPlayerLocation GetMapInLocation();
	struct FEquipLanternData GetMapInEquipLantern();
	class ALevelManager_Others* GetLevelManageOthersActor();
	bool GetLevelChangeByLinerShip();
	float GetGainRateMin();
	float GetGainRateMax();
	float GetFocalRegionWideAdd();
	enum class ELEVEL_DARK_STATE GetCurrentLevelDarkState();
	class FName GetBattleEnemyGroupID();
	enum class ELEVEL_TYPE GetActiveLevelType();
	bool FinishBattleLevel();
	void Debug_ShowPostProcessVolumeInfo();
	void Debug_SetBarPlaceCharaRateOne(int32 Param);
	void Debug_SetBarNotPlaceCharaRate(int32 Param);
	void Debug_SetBarCharaList(TArray<int32>& Param);
	bool Debug_LevelChange(class FName LevelName, uint8 TriggerIndex);
	int32 Debug_GetBarPlaceCharaRateOne();
	int32 Debug_GetBarNotPlaceCharaRate();
	TArray<int32> Debug_GetBarCharaList();
	void Debug_ChangeBarChara();
	void ClearRestorePlayherPlacement();
	void ClearMapInLocation();
	void ClearMapInEquipLantern();
	void ClearCollisionDisabledNPC();
	int32 CalcLostWayProbability();
	bool ApplyScreenBrightness(int32 Level);
	void ApplyRestorePlayerPlacement();
	void ApplyPostProcessCurrentParam(bool bCheckEventPlaying);
	bool ApplyCurrentLevelResolution(class UObject* WorldContextObject);
	bool ApplyCornerDarkness(bool IsNormal, bool CheckEventPlaying);
	void AddCollisionDisabledNPC(int32 NPCUniqID);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LevelResolutionUtility
class ULevelResolutionUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class ULevelResolutionUtility* GetDefaultObj();

	void SetFixCurrentLevelResolution(class UObject* WorldContextObject, class FName& LevelName);
	void GetLevelScreenParcentage(class FName& LevelName, float* FSceenPercent, float* FSeparateTranslucencyScreenPercent);
	bool GetLevelResolutionLabelNames(TArray<class FName>* OutData);
	bool GetLevelResolution(struct FLevelResolutioData* OutData, class FName TargetLabel, bool EnableLog);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LevelSaveDataUtil
class ULevelSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class ULevelSaveDataUtil* GetDefaultObj();

	void SetVisitedMap(bool bVisited, int32 MapID);
	void SetShowMapIcon(bool bVisited, int32 MapID);
	bool SetMapData(int32 LevelId, const struct FMapData& NewMapData);
	void SetIsVisitedWorldMapPrologueMaskArea(enum class EWorldMapPrologueMaskArea MaskArea, bool IsVisited);
	void SetIsVisitedWorldMapMaskArea(enum class EWorldMapMaskArea MaskArea, bool IsVisited);
	void SetIsVisitedWorldMapIslandLayerArea(enum class EWorldMapIslandLayerArea Area, bool IsVisited);
	void SetCurrentLevelDarkState(enum class ELEVEL_DARK_STATE DarkState);
	void SetConnectionValue(int32 TownID, int32 ConnectionValue);
	void ResetLostWayCount();
	bool OpenTreasureBox(int32 LevelId, int32 ObjectUniqueID);
	void IncreaseLostWayCount();
	bool GetVisitedMap(int32 MapID);
	bool GetShowMapIcon(int32 MapID);
	int32 GetLostWayCount();
	bool GetIsVisitedWorldMapPrologueMaskArea(enum class EWorldMapPrologueMaskArea MaskArea);
	bool GetIsVisitedWorldMapMaskArea(enum class EWorldMapMaskArea MaskArea);
	bool GetIsVisitedWorldMapIslandLayerArea(enum class EWorldMapIslandLayerArea Area);
	enum class ELEVEL_DARK_STATE GetCurrentLevelDarkState();
	int32 GetConnectionValue(int32 TownID);
	bool FindMapData(int32 LevelId, struct FMapData* FoundMapData);
	bool DEBUG_CloseTreasureBox(int32 LevelId, int32 ObjectUniqueID);
	void AddOrOverrideRevivalObjectSaveData(struct FRevivalObjectSaveData& NewData);
};

// 0x68 (0x90 - 0x28)
// Class Majesty.LevelSet
class ULevelSet : public UObject
{
public:
	class ULevelStreamingCustom*                 M_ParentLevelStreaming;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, class ULevelStreamingCustom*> M_SubLevelStreaming;                               // 0x30(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_18CF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelSet* GetDefaultObj();

	void OnUnloaded();
	void OnShown();
	void OnLoaded();
	void OnHidden();
};

// 0x10 (0x160 - 0x150)
// Class Majesty.LevelStreamingCustom
class ULevelStreamingCustom : public ULevelStreamingDynamic
{
public:
	uint8                                        Pad_18D0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelStreamingCustom* GetDefaultObj();

	void OnUnloaded();
	void OnShown();
	void OnLoaded();
	void OnHidden();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LevelTableUtility
class ULevelTableUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULevelTableUtility* GetDefaultObj();

	class FName MakeLevelTriggerLabel(class FName LevelName, enum class ELevelTriggerID TriggerID);
	int32 LevelLabelToID(class FName LevelLabel);
	class FName LevelIDToLabel(int32 LevelId);
	bool IsSeaLevel(class FName LevelName);
	bool IsInGameLevel(struct FLevelInfoData& LevelData);
	void GetLevelTriggerParamsByRowName(enum class EBPFuncReturnCode* ReturnCode, struct FLevelTriggerParams* OutLevelTrgData, class FName RowName);
	enum class ELevelTriggerID GetLevelTriggerID(class FName LevelTriggerLabel);
	bool GetLevelRowNames(TArray<class FName>* OutRowNames);
	void GetLevelInfoDataByRowName(enum class EBPFuncReturnCode* ReturnCode, struct FLevelInfoData* OutLevelData, class FName RowName);
	void GetLevelInfoDataByLevelName(enum class EBPFuncReturnCode* ReturnCode, struct FLevelInfoData* OutLevelData, class FName LevelName);
	void GetLevelInfoDataByLevelID(enum class EBPFuncReturnCode* ReturnCode, struct FLevelInfoData* OutLevelData, int32 LevelId);
	bool ExistsInLevelDb(class FName LevelLabel);
	void Debug_OutputRegionVisited();
	void Debug_OutputMapVisited();
	bool Debug_ContainsInLevelDB(class FName LevelName);
};

// 0x148 (0x368 - 0x220)
// Class Majesty.LevelTriggerActor
class ALevelTriggerActor : public AActor
{
public:
	class USceneComponent*                       M_SpawnPointObj;                                   // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class ACameraLockTrigger>     TargetCameraLockTriggerX;                          // 0x228(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ACameraLockTrigger>     TargetCameraLockTriggerY;                          // 0x250(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ACameraLockTrigger>     TargetCameraLockTriggerZ;                          // 0x278(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLockParams                     CameraLockParams;                                  // 0x2A0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ELevelTriggerID                   MyLevelTriggerID;                                  // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentTransitionDataFlagID;                       // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NextMapName;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELevelTriggerID                   NextLevelTriggerID;                                // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKSCharacterDir                   MapInCharaDir;                                     // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEquipLanternData                     EquipLanternData;                                  // 0x2C8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                StrNextMapName;                                    // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutoSave;                                    // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedButtonInput;                                   // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ButtonInputCollisionMatchToTrigger;                // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLevelTransitionData>          ConditionalTransitionData;                         // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ASwitchIndoorTrigger>   M_MapInSwitchIndoorTrigger;                        // 0x310(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AProceduralLinePlace>   M_MapInUseLadder;                                  // 0x338(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterMoveModeForDB           M_MapInMoveMode;                                   // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_IsTriggerActive;                                 // 0x361(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18DA[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALevelTriggerActor* GetDefaultObj();

	void SetupDataOnLevelShown();
	void SetupBGMControl();
	void SetCollisionComponent(class UShapeComponent* PComp, const struct FVector& VPos);
	bool SetAttachLadderPlayer();
	void RefreshTransitionalData();
	bool IsTriggerActive();
	bool IsIgnoreShowOnRadarMap();
	struct FVector GetTriggerCollisionLocation();
	struct FVector GetSpawnLocation();
	enum class ECharacterMoveModeForDB GetMapInMoveMode();
	struct FEquipLanternData GetEquipLanternData();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibAsset
class ULibAsset : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAsset* GetDefaultObj();

	bool LevelExists(const class FString& AssetPath);
	bool AssetExistsFromSoftReference(TSoftObjectPtr<class UObject> SoftAssetData);
	bool AssetExists(const class FString& AssetPath);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibAsyncLoad
class ULibAsyncLoad : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAsyncLoad* GetDefaultObj();

	void UnloadAssets(TArray<TSoftObjectPtr<class UObject>>& AssetsPtrList);
	void LoadAssetsAsync(class UObject* WorldContextObject, TArray<TSoftObjectPtr<class UObject>>& AssetsPtrList, FDelegateProperty_ Callback);
	void LoadAssetList(TArray<class UObject*>* OutList, const TArray<TSoftObjectPtr<class UObject>>& AssetPtrList);
	void LoadAssetAsyncByReference(class UObject* WorldContextObject, TArray<struct FSoftObjectPath>& AssetRefList, FDelegateProperty_ Callback);
	class UObject* LoadAsset(TSoftObjectPtr<class UObject> AssetPtr);
	bool InitLoadAsync();
	int32 GetAcyncLoadRequestNum();
	void DestroyLoadAsync();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibBalloon
class ULibBalloon : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibBalloon* GetDefaultObj();

	class UBalloonBundleWidgetBase* GetBalloonBundleWidget();
	struct FAddBalloonParam CreateBalloonParam_Auto(class FName TalkLabel, const struct FVector2D& balloonOffset, enum class EEventBalloonDir BalloonDir, bool EnableTail, class AActor* TargetActor, float Scale);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibColor
class ULibColor : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibColor* GetDefaultObj();

	class FString ToHtmlStringRGBA(struct FColor& CColor, bool Lower);
	class FString ToHtmlString(uint8 Val, bool Lower);
	class FString GetTextColorChangeCodeToGameColor(const class FString& TargetSource, enum class EGameColor ColorType);
	class FString GetTextColorChangeCode(const class FString& TargetSource, const struct FColor& Color);
	struct FLinearColor GetColor(enum class EColor EColor);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibDataTable
class ULibDataTable : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibDataTable* GetDefaultObj();

	bool GetDataTableRowByName(class UDataTable* Table, class FName RowName, struct FTableRowBase* OutRow, enum class EGET_DATATABLE_RESULT* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibDialog
class ULibDialog : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibDialog* GetDefaultObj();

	class UCommonDialog* OpenDialog(struct FMJUICommonDialogParam& Param);
	void IsDialogRunning(bool* IsRunning);
	struct FMJUICommonDialogParam CreateSelectWidgetParam(class FText Caption, class FText Detail, const TArray<class UUserWidget*>& SelectWidgetList, int32 SelectIndex, bool OnTop, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateEventParam_OpenSe(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, class FName OpenSeLabel);
	struct FMJUICommonDialogParam CreateEventParam_FinishCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateEventParam_EnableBlood(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool EnableCancel, const TArray<bool>& BloodList, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateEventParam_CancelKey_FinishCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool EnableCancel, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateEventParam_CancelKey_DefaultButton_FinishCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool EnableCancel, int32 DefaultButton, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateEventParam(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText);
	struct FMJUICommonDialogParam CreateDefaultParam_OpenSe_FinishCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, class FName OpenSeLabel, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_FinishCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_Duplication(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool DuplocationFlag);
	struct FMJUICommonDialogParam CreateDefaultParam_Detail_AutoClose_Cancel_Input_SelectCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, class UUserWidget* AttachDetail, bool AutoClose, bool EnableCancel, bool InputReception, FDelegateProperty_ SelectCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_DefaultButton_FinishCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, int32 DefaultButton, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_AutoSelectClose_Callback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool AutoSelectClose, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_AutoSelectClose(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool AutoSelectClose);
	struct FMJUICommonDialogParam CreateDefaultParam_AutoClose_Cancel_InputReception(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool AutoClose, bool EnableCancel, bool InputReception);
	struct FMJUICommonDialogParam CreateDefaultParam_AutoClose_Cancel_Callback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool AutoSelectClose, bool Cancel, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_AutoClose_AttachCaption_SelectCallback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, bool AutoClose, class UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FDelegateProperty_ SelectCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_AttachDetail_Callback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, class UUserWidget* AttachDetail, bool OnTop, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_AttachDetail_AttachCaption_Callback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, class UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, class UUserWidget* AttachDetail, bool DetailTop, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_AttachCaption_OpenSe_Callback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, class UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, class FName OpenSeLabel, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam_AttachCaption_Callback(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText, class UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FDelegateProperty_ CloseFinishCallback);
	struct FMJUICommonDialogParam CreateDefaultParam(class FText Caption, class FText Detail, const TArray<class FText>& ButtonText);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibDisplay
class ULibDisplay : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibDisplay* GetDefaultObj();

	bool SetWindowResolution(enum class EWindowMode InFullScreenMode, const struct FIntPoint& Resolution);
	bool SetFPS(float Fps);
	void RefreshDisplayInformation();
	struct FVector2D GetWindowLetterBoxSize(class UObject* WorldContextObject, bool IsRemoveDpiScale);
	void GetWindowedResolutions(TArray<struct FIntPoint>* Resolutions);
	struct FVector2D GetWidgetSpaceSize(class UObject* WorldContextObject);
	void GetFullscreenResolutions(TArray<struct FIntPoint>* Resolutions);
	enum class EWindowMode GetCurrentWindowMode();
	struct FIntPoint GetCurrentScreenResolutionFromConfig();
	struct FIntPoint GetCurrentScreenResolutionEx();
	struct FIntPoint GetCurrentScreenResolution();
	float GetCurrentFPS();
	bool DisplayLog();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibEnum
class ULibEnum : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibEnum* GetDefaultObj();

	int32 NameEnumLabel(const class FString& EnumName, TArray<class FText>* OutStringList);
	int32 NameEnumDisplayName(const class FString& EnumName, TArray<class FText>* OutStringList);
	int32 GetMaxEnumValue(const class FString& EnumName);
	class UEnum* GetEnumType(const class FString& EnumName);
	void GetEnumNameStringByValue(const class FString& EnumName, int32 Value, class FString* OutString);
	void GetEnumLabel(const class FString& EnumName, int32 Key, class FString* OutValueName);
	int32 GetEnumEntryNum(const class FString& EnumName);
	void GetEnumDisplayNameByValue(const class FString& EnumName, int32 Value, class FString* OutString);
	void GetEnumDisplayName(const class FString& EnumName, int32 Key, class FString* OutValueName);
	int32 BuildEnumStrings(class UEnum* EnumType, TArray<class FString>* OutStringList);
	int32 BuildEnumNameStrings(class UEnum* EnumType, TArray<class FString>* OutStringList);
	int32 BuildEnumLabel(class UEnum* EnumType, TArray<class FText>* OutStringList);
	int32 BuildEnumFNameLabel(class UEnum* EnumType, TArray<class FName>* OutStringList);
	int32 BuildEnumDisplayName(class UEnum* EnumType, TArray<class FText>* OutStringList);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibEvent
class ULibEvent : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibEvent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibGetParam
class ULibGetParam : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibGetParam* GetDefaultObj();

	bool GetGameParamToVector4(struct FVector4* OutData, class FName RowName, bool LogEnable);
	bool GetGameParamToVector2D(struct FVector2D* OutData, class FName RowName, bool LogEnable);
	bool GetGameParamToVector(struct FVector* OutData, class FName RowName, bool LogEnable);
	void GetGameParamToInt(class FName RowName, int32* Min, int32* Max, int32* Init, int32* Param);
	bool GetGameParamToFName(class FName* Min, class FName* Max, class FName* Init, class FName* Param, class FName RowName, bool LogEnable);
	void GetGameParamToFloatV4(class FName RowName, struct FVector4* OutParams);
	void GetGameParamToFloat(class FName RowName, float* Min, float* Max, float* Init, float* Param);
	void GetGameParamOnlyToInt(class FName RowName, int32* Param);
	float GetGameParamOnlyToFloat(class FName& RowName);
	bool GetGameParamMinToInt32(int32* OutData, class FName RowName, bool LogEnable);
	bool GetGameParamMaxToInt32(int32* OutData, class FName RowName, bool LogEnable);
	bool GetGameParamDataToGuid(struct FGuid* OutData, class FName RowName, bool LogEnable);
	bool GetBattleParamMinToInt32(int32* OutData, class FName RowName, bool LogEnable);
	bool GetBattleParamMaxToInt32(int32* OutData, class FName RowName, bool LogEnable);
	bool GetBattleParamDataToGuid(struct FGuid* OutData, class FName RowName, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibHolyTorch
class ULibHolyTorch : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibHolyTorch* GetDefaultObj();

	void ReburnHolyTorch(enum class EHOLY_TORCH_TYPE TorchType);
	enum class EHOLY_TORCH_SHINING_STATE GetShiningState();
	void BurnOutHolyTorch(enum class EHOLY_TORCH_TYPE TorchType);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibImage
class ULibImage : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibImage* GetDefaultObj();

	bool SaveImageToByteArray(class UTextureRenderTarget2D* RenderTarget, const struct FLinearColor& ClearColour, TArray<uint8>* OutByteArray);
	class UTexture2D* LoadImageFromByteArray(TArray<uint8>& ByteArray, int32 Width, int32 Height, bool* IsValid);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibKey
class ULibKey : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibKey* GetDefaultObj();

	void SaveInputSetting();
	void RemoveAxisMappingByName(class FName InAxisName);
	void RemoveActionMappingByName(class FName InActionName);
	class FName KeyToName(const struct FKey& Key);
	bool IsInputKeyDownByActionMappings(class APlayerController* PlayerController, class FName InActionName);
	int32 GetTypeHashFromFKey(const struct FKey& Key);
	enum class EKeyboardLayoutType GetKeyboardLayoutType();
	class FString GetKeyBoardCode();
	struct FKey GetInputKeyDownFKeyConfigFilter(class APlayerController* PlayerController);
	struct FKey GetInputKeyDownFKey(class APlayerController* PlayerController);
	struct FKey GetFKeyFromTypeHash(int32 TypeHash);
	enum class EControllerInputType GetControllerInputType();
	enum class EControllerInputType GetControllerInputCurrentType();
	void DebugLogTypeHashFromKey();
	void DebugLogCodesFromKey();
	void DebugLogAxisMappingByName(class FName InAxisName);
	void DebugLogAllAxisMapping();
	void DebugLogAllActionMapping();
	void DebugLogActionMappingByName(class FName InActionName);
	struct FKey CheckInputKeyDown(class APlayerController* PlayerController);
	bool CheckInputAnyKeyboardKeyJustPressed(class APlayerController* PlayerController);
	void AddAxisMapping(class FName InAxisName, const struct FKey& Key, float Scale);
	void AddActionMapping(class FName InActionName, const struct FKey& Key);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibMainScenario
class ULibMainScenario : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibMainScenario* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibMath
class ULibMath : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibMath* GetDefaultObj();

	void ToggleBit(int32 Index, TArray<int32>& BitArray);
	void SetBit(int32 Index, TArray<int32>& BitArray);
	bool GetBit(int32 Index, TArray<int32>& BitArray);
	void ClearBit(int32 Index, TArray<int32>& BitArray);
	int32 BitShiftRight(int32 Value, int32 Shift);
	int32 BitShiftLeft(int32 Value, int32 Shift);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibMisc
class ULibMisc : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibMisc* GetDefaultObj();

	class AActor* SpawnActorByClassAssetId(class UObject* WorldContextObject, TSoftClassPtr<class UObject>& ClassAssetId, const struct FTransform& Transform);
	void SortNameArrayInt64Order(TArray<class FName>& NameArray, TArray<int64>& OrderArray, bool IsAscending);
	void SortNameArrayByFloatOrder(TArray<class FName>& NameArray, TArray<float>& OrderArray, bool IsAscending);
	void SortNameArray(TArray<class FName>& NameArray, TArray<int32>& OrderArray, bool IsAscending);
	void SortIntArray(TArray<int32>& IntArray, TArray<int32>& OrderArray, bool IsAscending);
	void SetShowCollision(class UObject* WorldContextObject, bool bShow);
	void SetGamma(float Value);
	void Reserve_NameArray(TArray<class FName>& TaregtArray, int32 Size);
	void Reserve_Map(TMap<int32, int32>& TargetMap, int32 Size);
	void Reserve_IntArray(TArray<int32>& TargetArray, int32 Size);
	void ReleaseSlateResource(class UWidget* Widget);
	void PrintBPCallstack();
	void OutputMessageLog(enum class ELogErrorType ErrorType, const class FString& Message);
	void OutputLog(enum class ELogErrorType ErrorType, const class FString& Log, float TimeToDisplay);
	void LogError(const class FString& Log, float TimeToDisplay);
	bool IsDebugCameraRunning(class UObject* WorldContextObject);
	struct FSoftObjectPath GetSpriteAssetPath(TSoftObjectPtr<class UObject>& CSoftObject);
	bool GetShowCollision(class UObject* WorldContextObject);
	float GetGamma();
	int32 GetDataTableRowNum(const class FString& AssetPath);
	class FString GetCommandLineValue(const class FString& Key, bool* bSucceeded);
	class UUserWidget* CreateUserWidgetByClassAssetId(class APlayerController* OwningPlayer, TSoftClassPtr<class UObject>& ClassAssetId);
	class UActorComponent* AddActorComponent(class AActor* CSelf, class UClass* CActorComponentClass);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibReflection
class ULibReflection : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibReflection* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibSound
class ULibSound : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibSound* GetDefaultObj();

	class FName ReplaceBattleResultBgmByCondition(class FName CurrentBattleBgmLabel, class FName JingleBgmLabel);
	class FName ReplaceBattleBgmByCondition(class FName BgmLabel);
	bool PlaySeByLabel(class FName SELabel);
	bool IsCheckNormalMapInOverAllChapterAndBgmNull();
	bool IsAtomPlaying(enum class EKSAudioComponentType CompType);
	class FName CheckShouldPlayBgm(struct FLevelInfoData& RLevelInfo, bool bCheckReserveTimeZone, bool ForceNonDarkening);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibString
class ULibString : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibString* GetDefaultObj();

	void SortFText(TArray<class FText>& TargetArrayRef, bool IsDescending);
	class FString ReplaceFStringWithRegex(const class FString& SourceString, const class FString& RegexString, const class FString& To);
	class FString JoinFTextArray(TArray<class FText>& SourceArray, const class FString& Separator);
	class FString JoinFNameArray(TArray<class FName>& SourceArray, const class FString& Separator, bool IsIgnoreNone);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibTutorial
class ULibTutorial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibTutorial* GetDefaultObj();

	void SetTutorialFinishFlag(enum class ETUTORIAL_TYPE Type);
	void OpenTutorialWithCloseCallback(enum class ETUTORIAL_TYPE Type, bool ForceOpen, int32 CharaID, FDelegateProperty_ CloseFinishCallback, bool* IsOpen);
	void OpenTutorial(enum class ETUTORIAL_TYPE Type, bool ForceOpen, int32 CharaID, bool* IsOpen);
	bool IsRunningTutorial();
	bool CheckProlouge(int32* CharaID);
	bool CheckMultiStory(int32* CharaID);
	bool CheckMerchant(int32* CharaID);
	bool CheckCoupling_Sin(int32* CharaID);
	bool CheckCoupling_Odo(int32* CharaID);
	bool CheckCoupling_Kus(int32* CharaID);
	bool CheckCoupling_Gak(int32* CharaID);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibUI
class ULibUI : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibUI* GetDefaultObj();

	void UpdateProgress(float CurrentTime, float MaxTime);
	void TurnOffTemporaryHiddenFlag(enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	void TemporaryCloseActionPopup();
	void SetWidgetVisible(enum class EKSUIKind Type, enum class ESlateVisibility Visible);
	void SetWidgetPaused(bool IsPause);
	void SetSupportAbilityMenuEnable(bool Enable);
	void SetRadarForceHidden(bool ForceHidden);
	void SetLetterBoxWidget(class ULetterBoxBase* LetterWidget);
	void SetJobMenuEnable(bool Enable);
	void SetIsOpeningPartyChatNotification(bool IsOpening);
	void SetHelpWindowPositionByWidget(class UUserWidget* Widget);
	void SetHelpWindowPosition(struct FVector2D& NewPosition);
	void SetHelpWindowOffset(struct FVector2D& Offset);
	void SetAbilityMenuEnable(bool Enable);
	void ResetMapNameNotification();
	void ReOpenSubTitle();
	void ReOpenGuildMenu();
	void ReOpenEnterActionPopup();
	void PushMapNameNotification(class FName RegionName, class FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, class UTexture* EmblemTexture, class FName NotificationFormat);
	void OpenTutorialUI(TArray<struct FDataTableTutorialPageData>& PageData, enum class ETUTORIAL_TYPE Type, class UUITutorialBase** UITutorial, bool IsEndCard, bool IsEpilouge);
	void OpenSubTitle(class FName SubTitleLabel, bool RequestEvent, class FName AfterEventLabel);
	void OpenStoryNotificationSubStory(class FName TitleLabel, class FName FormatTextLabel);
	void OpenStoryNotificationMarchant(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel);
	void OpenStoryNotificationCoupling(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel);
	void OpenScreenCaputreWithTexture(class FName ResourceLabel);
	void OpenScreenCapture(bool PlayNoice);
	void OpenSaveLoadMenu(bool SaveMode, bool FromDebugMenu);
	class UPartySplitWidgetBase* OpenPartySplitWidget();
	class UMusicPlayerWidget* OpenMusicPlayer();
	void OpenMissionRecord();
	class UKSPartySplitWidgetBase* OpenKSPartySplitWidget();
	void OpenHelpWindowWithOffset(struct FVector2D& Offset);
	void OpenHelpWindow();
	void OpenGuildMenu(class FName GuildLabel, bool* IsOpen);
	void OpenFieldCommandPreviewMenu(class AKSCharacterBase* TargetNpc);
	void OpenFieldCommandMenu(class AKSCharacterBase* TargetNpc, bool DrawLeft, const TArray<enum class EMJFieldCommandType>& CommandList);
	bool OpenFieldCommandJudge(class AKSCharacterBase* TargetChara, const TArray<enum class EMJFieldCommandType>& CommandList);
	void OpenEnterActionPopup(class AActor* TargetActor, class FName ActionTextLabel);
	class UDiseaseListWidget* OpenDiseaseListUI();
	void OpenBusinessWithNpcNotificationAnimal(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
	void OpenBusinessWithNpcNotification(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
	bool IsRunningPartySplitWidget();
	bool IsRunningMusicPlayer();
	bool IsRunningKSPartySplitWidget();
	bool IsRunningFieldCommandPreviewMenu();
	bool IsOpeningGuildMenu();
	bool IsMainMenuFastWorldMapMode();
	bool IsActiveSubTitle();
	void HideWidgetTemporary(bool IsHide, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	class UTexture2D* GetSourceTextureFromPaperSprite(class UPaperSprite* Target);
	bool GetNoiceFinish();
	class ULetterBoxBase* GetLetterBoxWidget();
	enum class EPARTY_SPLIT_CLOSE_REASON GetKSPartySplitWidgetCloseReason();
	bool GetGuildReOpenFlag();
	bool GetFCMenuUniqueCommandFlow();
	bool GetFCMenuInputEnableMode();
	bool GetEnableSafetyBalloon();
	class FName GetAfterEventLabel();
	void Debug_SetIsForceHideQuitGameMenu(bool Val);
	void Debug_SetIsForceAvailableTrialData(bool Val);
	void Debug_SetEnableSafetyBalloon(bool Enable);
	bool Debug_GetIsForceHideQuitGameMenu();
	bool Debug_GetIsForceAvailableTrialData();
	void CloseSubTitle(bool* IsNext);
	void CloseScreenCapture();
	void ClosePartySplitWidget();
	void CloseMusicPlayer();
	void CloseKSPartySplitWidget();
	void CloseFieldCommandPreviewMenu(bool OpenJudgeWindow);
	void CloseFieldCommandMenu(bool OpenJudgeWindow, bool StateCheck);
	void CloseEnterActionPopup();
	void CloseDiseaseListUI();
	void CloseBusinessWithNpcNotification(bool bIsFast);
	bool CanMainMenuOpen();
	bool CanMainMenuClose();
	void ApplyLetterBoxSize();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.LibVibration
class ULibVibration : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibVibration* GetDefaultObj();

	bool GetDefaultVibrationEnable();
};

// 0x78 (0x298 - 0x220)
// Class Majesty.LightStage
class ALightStage : public AActor
{
public:
	class UMaterialParameterCollection*          M_pMPC;                                            // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseFog;                                         // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseSkyDome;                                     // 0x229(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1957[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    M_pSkyMaterial;                                    // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseSkyLight;                                    // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1958[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    M_pLightFunctionMaterial;                          // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fShadowDistance;                                 // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fShadowBias;                                     // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseSun;                                         // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUpdate;                                         // 0x251(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1959[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureCube*                          M_pcCubemap;                                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIndoorPreview;                                  // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fIndoorSunBrightness;                            // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fIndoorSkyLightIntensity;                        // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fIndoorFogDensity;                               // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*            M_pMainDirectionalLight;                           // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UExponentialHeightFogComponent*        M_pFog;                                            // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkyLightComponent*                    M_pSkyLight;                                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  M_pSkyMesh;                                        // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_195C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALightStage* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.LinerShipUtility
class ULinerShipUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class ULinerShipUtility* GetDefaultObj();

	void GetRouteDataByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FLinerShipRouteData* OutRouteData, class FName RouteLabel);
	void GetAllRouteDataInTown(TArray<struct FLinerShipRouteData>* OutRouteData, class FName LevelName, bool SwapLevelAB);
};

// 0x0 (0x368 - 0x368)
// Class Majesty.ListCharacterWidgetBase
class UListCharacterWidgetBase : public UKSUserWidgetWithState
{
public:

	static class UClass* StaticClass();
	static class UListCharacterWidgetBase* GetDefaultObj();

	bool SetupJoinNewMember(bool IsAddFriendMode, enum class EPlayableCharacterID NewCharacterID);
	void SetIsRefreshPartyCharacter(bool IsRefreshPartyCharacter);
	void SetIsOpenInBar(bool IsBar);
	void SetIsIgnoreFadeOnCloseWidget(bool IsIgnoreFade);
	class UOverlay* GetPartyPanelRool();
	class UOverlay* GetMenuFooterRoot();
};

// 0x0 (0x260 - 0x260)
// Class Majesty.ListItemDetailWidgetBase
class UListItemDetailWidgetBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UListItemDetailWidgetBase* GetDefaultObj();

	void Show();
	void Hide();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ListItemExWidgetInterface
class IListItemExWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IListItemExWidgetInterface* GetDefaultObj();

	void OnInputRight();
	void OnInputLeft();
	void InitExWidget();
};

// 0x138 (0x3F8 - 0x2C0)
// Class Majesty.MJListItemWidget
class UMJListItemWidget : public UKSListItemWidgetBase
{
public:
	class UKSTextBlock*                          RefText_Col1;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSTextBlock*                          RefText_Col2;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSTextBlock*                          RefText_Col3;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSTextBlock*                          RefText_Unit;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RefIcon_Cursor;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RefIcon_Item;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RefIcon_Item_0;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RefImg_StrikeThrough;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RefImg_BackGround;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RefFixedIcon;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                          RefVBox_Detail;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RefColumnExtension;                                // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                          RefTitle;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      RefAnim_Focus;                                     // 0x328(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      RefAnim_OutFocus;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      RefAnim_Decide;                                    // 0x338(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      RefAnim_DisableFocus;                              // 0x340(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      RefAnim_DisableOutFocus;                           // 0x348(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultBackColor;                                  // 0x350(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultTextColor;                                  // 0x360(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultVisibility;                                 // 0x370(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFirstSetup;                                      // 0x371(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           RefSpacer;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           RefDivider;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URankWidgetBase*                       RefRankWidget;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextCol_Enable;                                    // 0x390(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextCol_Disable;                                   // 0x3A0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          IconCol_Enable;                                    // 0x3B0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          IconCol_Disable;                                   // 0x3C0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      CurrentAnimation;                                  // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndxInAll;                                         // 0x3D8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnit;                                          // 0x3DC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ColumnExtension;                                   // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TextCol2_Dark;                                     // 0x3E8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELIST_ITEM_STATUS                 ItemStatus;                                        // 0x3E9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      ResetToDefaultAnimDisable;                         // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMJListItemWidget* GetDefaultObj();

	void UpdateCheckIcon(bool StrikeThrough);
	void StopAnim();
	void Setup(struct FMJListWidgetItemData& ItemmData, enum class ELIST_NUM_UNIT_TYPE UnitType, bool* Success);
	void SetTitleWidget(class UUserWidget* TitleWidget);
	void SetTextToColumn1(class FName TextLabel);
	void SetTextColor(struct FSlateColor& Color);
	void SetSpacer(enum class ELIST_ITEM_NEXT_SPACE SpacerType);
	void SetShining(bool ShiningFlag);
	void SetNumUnit(enum class ELIST_NUM_UNIT_TYPE UnitType);
	void SetItemDataIsRank(class UTexture2D* ItemTexture, class FText& Name, class FText& Value_0, class FText& Value_1, int32 RankNum, class FText& Detail, enum class ELIST_ITEM_STATUS Status);
	void SetItemData(class UTexture2D* IconTex, class UTexture2D* IconTex0, class FText& Name, class FText& Value0, class FText& Value1, class FText& Detail, enum class ELIST_ITEM_STATUS Status);
	void SetIconColor(struct FSlateColor& Color);
	void SetFixedIcon(class UTexture2D* Tex);
	void SetDetailWidget(class UListItemDetailWidgetBase* DetailWidget);
	void SetDarkToTextCol2(bool Dark);
	void SetCursorVisibility(bool IsVisible);
	void SetColumnExWidget(class UUserWidget* ExtensionWidget);
	void SetColorByStatus(enum class ELIST_ITEM_STATUS NewPram);
	void SetCol1Icon(class UTexture2D* IconTex);
	void RemoveDetailWidget();
	void RemoveColumnExWidget();
	void PlayAnim(class UWidgetAnimation* Anim, bool IsFast);
	void OutFocus(bool IsFast);
	void InitInstance(bool* Success);
	void Init(int32 IndexInAll, bool ShowColumn2, bool ShowColumn3, enum class ELIST_ITEM_STATUS ItemStatus, bool StrikeThrough);
	int32 GetItemIndexAll();
	float GetHeight();
	struct FVector2D GetCursorRelativePosition();
	class UUserWidget* GetColumnExWidget();
	void Focus(bool IsFast);
	void FirstSetup();
	void Decide();
};

// 0x50 (0x448 - 0x3F8)
// Class Majesty.ListItemWidget_Opt_Base
class UListItemWidget_Opt_Base : public UMJListItemWidget
{
public:
	uint8                                        Pad_1986[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOptionItemData                       M_OptionItemData;                                  // 0x400(0x48)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UListItemWidget_Opt_Base* GetDefaultObj();

	bool SetupWindowResolution(const struct FIntPoint& CurrentResolution);
	void SetSpacerEnable(bool Enable);
	void SetOptionItemData(struct FOptionItemData& OptionItemData);
	void RefreshUI();
	bool RefreshGuideData();
	struct FOptionItemData GetOptionItemData();
};

// 0x48 (0x70 - 0x28)
// Class Majesty.LoadAssetHandle
class ULoadAssetHandle : public UObject
{
public:
	uint8                                        Pad_1987[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       LoadedObjects;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1988[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadAssetHandle* GetDefaultObj();

	void CallLoadFinish();
	void Callback(TArray<class UObject*>* LoadedObjects);
};

// 0x30 (0x58 - 0x28)
// Class Majesty.LoadCharaAssetQueue
class ULoadCharaAssetQueue : public UObject
{
public:
	uint8                                        Pad_1989[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       M_FlipbookResources;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_198A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadCharaAssetQueue* GetDefaultObj();

	void CallbackLoadResource();
	void CallbackLoadFlipbook(TArray<class UObject*>& LoadObjList);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.MainMenuBase
class UMainMenuBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UMainMenuBase* GetDefaultObj();

	bool PreCloseActionFromPartyChat();
	bool PreCloseAction();
	bool OpenMissionRecordReOpen();
	bool OpenFastWorldMap();
	void IsFastWorldMapMode(bool* FastWorldMapMode);
	class UMainMenuListBase* GetMainMenuList();
	bool CanMainMenuClose();
	void CanCloseMainMenu(bool* CanClose);
};

// 0x0 (0x260 - 0x260)
// Class Majesty.MainMenuListBase
class UMainMenuListBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMainMenuListBase* GetDefaultObj();

	void OnPartyRefresh(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void Init();
};

// 0x0 (0x50 - 0x50)
// Class Majesty.MainMenuStateDataBase
class UMainMenuStateDataBase : public UStateDataBase
{
public:

	static class UClass* StaticClass();
	static class UMainMenuStateDataBase* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class Majesty.MainMenuStateData
class UMainMenuStateData : public UMainMenuStateDataBase
{
public:

	static class UClass* StaticClass();
	static class UMainMenuStateData* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class Majesty.MainMenuWorldMapStateData
class UMainMenuWorldMapStateData : public UMainMenuStateDataBase
{
public:

	static class UClass* StaticClass();
	static class UMainMenuWorldMapStateData* GetDefaultObj();

};

// 0x0 (0x358 - 0x358)
// Class Majesty.MainTitleBase
class UMainTitleBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UMainTitleBase* GetDefaultObj();

	void SetupNewGameForAutoPlay(int32 PlayerCharaId);
	void SetTitleScene(class UTitleBase* Scene, enum class EUITitleFlow Flow);
};

// 0x28 (0x248 - 0x220)
// Class Majesty.MapDoorObjectBase
class AMapDoorObjectBase : public AActor
{
public:
	TSoftObjectPtr<class ALevelTriggerActor>     M_TargetLevelTrigger;                              // 0x220(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMapDoorObjectBase* GetDefaultObj();

	void RefreshDoor();
	void OpenDoor();
	void OnCloseMainMenu(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs);
	void CloseDoor();
};

// 0x8 (0x360 - 0x358)
// Class Majesty.MapNameNotificationBase
class UMapNameNotificationBase : public UKSUserWidgetBase
{
public:
	enum class EMAP_NAME_NOTIFICATION_OPEN_OWNER M_OpenOwner;                                       // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_199B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapNameNotificationBase* GetDefaultObj();

	void SetOpenOwner(enum class EMAP_NAME_NOTIFICATION_OPEN_OWNER Owner);
	bool SetLevelChangeVisible(enum class ESlateVisibility IsVisible);
	bool ResetNotification();
	bool OpenEventAreaUI(class FName RegionName, class FName MapName, class UTexture* EmblemTexture);
	bool OpenAreaUI(class FName RegionName, class FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, class UTexture* EmblemTexture, class FName NotificationFormat);
	bool CloseAreaUIDelay();
	bool CloseAreaUI();
};

// 0x58 (0x278 - 0x220)
// Class Majesty.MapShipObject2Base
class AMapShipObject2Base : public AActor
{
public:
	class UStaticMeshComponent*                  M_MyShipMesh;                                      // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EMYSHIP_CUSTOM_TYPE, class UMaterialInterface*> M_ColorMaterialTable;                              // 0x228(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMapShipObject2Base* GetDefaultObj();

	void ApplyShipCustomize();
};

// 0x38 (0x258 - 0x220)
// Class Majesty.MapShipObjectBase
class AMapShipObjectBase : public AActor
{
public:
	float                                        RelativeDir_Go;                                    // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RelativeOffset_Go;                                 // 0x224(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RelativeDir_Return;                                // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RelativeOffset_Return;                             // 0x234(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ShipMesh;                                          // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         MyShipFlag;                                        // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EventFlag_ForceDir_Go;                             // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EventFlag_ForceDir_Return;                         // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMapShipObjectBase* GetDefaultObj();

	void ResetRelativeTransform();
	void ApplySailTexture(bool FirstChoice);
	void ApplyRelativeTransform(bool bGo);
	void ApplyMyShipCustomizeFirstChoice();
	void ApplyMyShipCustomize();
};

// 0x18 (0xC8 - 0xB0)
// Class Majesty.MasqueradeComponent
class UMasqueradeComponent : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABattleCharacterBase*                  M_cMasqueradeTarget;                               // 0xB8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bExecMasquerade;                                 // 0xC0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19AB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMasqueradeComponent* GetDefaultObj();

	bool ResumeMasquerade();
	bool PlayMasqueradeBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition);
	bool IsExecMasquerade();
	TArray<enum class EWEAPON_CATEGORY> GetMasqueradeEquipWeaponList();
	class FName GetMasqueradeCommandNameSecondJob();
	class FName GetMasqueradeCommandNameFirstJob();
	TArray<class FName> GetMasqueradeCommandListSecondJob();
	TArray<class FName> GetMasqueradeCommandListFirstJob();
	class FName GetMasqueradeCommandDetailSecondJob();
	class FName GetMasqueradeCommandDetailFirstJob();
	void GetMasqueradeCharacterID(enum class EPlayableCharacterID* ECharaID);
	bool ExecMasquerade(class ABattleCharacterBase* CTarget, int32 NInvocationTurn);
};

// 0x8 (0x370 - 0x368)
// Class Majesty.MenuSaveLoadBase
class UMenuSaveLoadBase : public UKSUserWidgetWithState
{
public:
	enum class ESaveDataLoadTarget               M_LoadTarget;                                      // 0x368(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMenuSaveLoadBase* GetDefaultObj();

	void SetLoadTarget(enum class ESaveDataLoadTarget Target);
	bool OpenMenu(bool IsSaveMode, bool FromDebugMenu);
	class UKSSaveSystem* GetTargetSystemData();
	void GetResult(enum class ESAVELOAD_RESULT* Result);
	enum class ESaveDataLoadTarget GetLoadTarget();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.MillionaireModeUtility
class UMillionaireModeUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UMillionaireModeUtility* GetDefaultObj();

	bool IsActiveMillionaireMode(class FName& MillionaireModeLabel);
	int64 GetMillionaireModePrice(class FName& MillionaireModeLabel);
	bool GetMillionaireModeData(class FName& MillionaireModeLabel, struct FMillionaireModeData* OutMillionaireModeData);
	bool GetActiveMillionaireModeData(struct FMillionaireModeData* OutMillionaireModeData);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.MissionSaveDataUtil
class UMissionSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UMissionSaveDataUtil* GetDefaultObj();

	bool SetSubStoryState(int32 AreaID, int32 MissionSaveDataIndex, int32 State);
	bool SetSubStoryOrder(int32 MissionIndex);
	void SetSubStoryNewFlag(int32 AreaID, int32 MissionSaveDataIndex, bool bNewFlag);
	bool SetSubStoryMarker(int32 AreaID, int32 MissionSaveDataIndex, int32 MapID, const struct FVector& MarkerPos);
	bool SetSubStoryClearIndex(int32 AreaID, int32 MissionSaveDataIndex, int32 ClearIndex);
	bool SetSubMissionData(int32 AreaID, const struct FSaveMissionData& NewSubMissionData);
	void SetMainMissionProgressCount(int32 CharacterID, int32 ProgressCount);
	void SetExtraStoryProgressCount(int32 ExStoryCategory, int32 ProgressCount);
	bool ResetSubStoryOrder();
	int32 GetSubStoryState(int32 AreaID, int32 MissionSaveDataIndex);
	bool GetSubStoryOrder(TArray<int32>* OutSubMissionOrder);
	bool GetSubStoryNewFlag(int32 AreaID, int32 MissionSaveDataIndex);
	void GetSubStoryMarkerInMap(int32 MapID, TArray<int32>* OutAreaID, TArray<int32>* OutMissionSaveDataIndex, TArray<struct FVector>* OutMarkerPos);
	int32 GetSubStoryClearIndex(int32 AreaID, int32 MissionSaveDataIndex);
	bool GetSubMissionData(int32 AreaID, struct FSaveMissionData* OutSubMissionData);
	int32 GetMainMissionProgressCount_FromSaveCharacterData(int32 CharacterID);
	int32 GetExtraStoryProgressCount(int32 ExStoryCategory);
};

// 0x18 (0x210 - 0x1F8)
// Class Majesty.MJBillboardComponent
class UMJBillboardComponent : public USceneComponent
{
public:
	class UCameraComponent*                      M_pCineCamComp;                                    // 0x1F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19C6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMJBillboardComponent* GetDefaultObj();

};

// 0x0 (0x360 - 0x360)
// Class Majesty.MJGameViewportClient
class UMJGameViewportClient : public UGameViewportClient
{
public:

	static class UClass* StaticClass();
	static class UMJGameViewportClient* GetDefaultObj();

};

// 0x550 (0x7A0 - 0x250)
// Class Majesty.MJLevelManager
class AMJLevelManager : public ALevelManagerBase
{
public:
	FMulticastInlineDelegateProperty_            OnNotifyLevelTransition;                           // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyLevelLoader;                               // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DB[0x4EE];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELevelTriggerID                   M_RequestLevelTrigger;                             // 0x75E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_ChangeBGM;                                       // 0x75F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_UseFadeUI;                                       // 0x760(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_FadeInTime;                                      // 0x764(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_FadeOutTime;                                     // 0x768(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_PrevLevelInGame;                                 // 0x76C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_PrevLevelSea;                                    // 0x76D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsGameOver;                                      // 0x76E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19DD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelManager_Others*                  M_LvlMng_Others;                                   // 0x770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNextMapInfo                          M_NextMapInfo;                                     // 0x778(0x14)(BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_IsFirstVisitLevel;                               // 0x78C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelLoader*                          M_Debug_BattleLevelLoader;                         // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19DF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMJLevelManager* GetDefaultObj();

	bool SwitchActiveLevel(enum class ELEVEL_TYPE LevelType, int32 MapIndex, bool UseFade);
	bool StartFadeOut();
	bool StartFadeIn();
	void SetSwitchActiveParam(int32 MapIndex, enum class ELEVEL_TYPE NextLevelType);
	void SetRequestedLevelTriggerID(enum class ELevelTriggerID TriggerID);
	void SetNextMapInfoByName(class FName NextMapName, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, enum class ELEVEL_TYPE NextLevelType);
	void SetNextMapInfoByID(int32 NextMapID, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, enum class ELEVEL_TYPE NextLevelType);
	void SetFirstVisited(bool bFirstVisited);
	void SaveVisitedMap(class FName SaveLevel);
	void RequestRevealBattle(bool bReveal);
	bool RequestLoadFieldLevel(class FName Map, enum class ELevelTriggerID TriggerID, bool Fade, bool ChangeBGM);
	void RequestLevelChange();
	void Proc_AfterUnloadLevel();
	void OnLevelLoaderCommandCompleted(int32 LoaderId, struct FLevelLoaderRequest& Request);
	void NotifyLevelTransition(class FName LevelId, enum class ELEVEL_TYPE LevelType, enum class ELevelTransitionNotice Notice);
	void NotifyLevelLoader(class FName LevelName, enum class ELEVEL_TYPE LevelType, enum class ELevelLoaderNotice Notice);
	bool IsSameLevelChanging();
	bool IsRunningFadeOut();
	bool IsRunningFadeIn();
	bool IsPrevLevelSea();
	bool IsPrevLevelInGame();
	bool IsLevelChangeFinishFadeIn();
	bool IsImmovableByFieldChanging();
	bool IsFadeOutState();
	bool IsFadeInAllowed();
	bool IsChanging();
	bool GetUseFadeUI();
	enum class ELevelTransitionType GetTransitionType();
	enum class ELevelTriggerID GetRequestedLevelTriggerID();
	class FName GetNextLevelId();
	class ALevelManager_Others* GetLevelManagerOthers();
	class ULevelStreaming* GetFieldLevelStreaming();
	bool GetChangeBGM();
	enum class ELEVEL_TYPE GetActiveLevelType();
	bool FinishBattleLevel();
	void Debug_ShowManagerInfo(bool bEnable);
	void Debug_SetMemProf_OnUnloadLevel(bool bEnabled);
	void Debug_SetMemProf_OnEndChangeLevel(bool bEnabled);
	void Debug_SetMemProf_OnBattleEnd(bool bEnabled);
	void Debug_SetForceRevealBattleMap(bool bForce);
	void Debug_SetForceLostWay(bool bFlag);
	void Debug_RequestSimulatedChangLevel();
	void Debug_RequestOverrideBattleMap(class FName battleMapName);
	void Debug_OnTransitionEvent(class FName LevelId, enum class ELEVEL_TYPE LevelType, enum class ELevelTransitionNotice Notice);
	bool Debug_ChangeLevelOnDecided(struct FDebugListMenuItem& MenuItem);
	void Debug_ChangeLevelOnClosed();
	bool ChangeFieldLevelWithParams(class FName LevelId, enum class ELevelTriggerID LevelTrgId, bool UseFade, bool ChangeBGM);
	bool ChangeFieldLevel(class FName LevelId);
	void CallLevelTransision(enum class ELEVEL_TYPE LevelType, enum class ELevelTransitionNotice Notice);
};

// 0x8 (0x98 - 0x90)
// Class Majesty.MJLevelSet
class UMJLevelSet : public ULevelSet
{
public:
	uint8                                        Pad_19E0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMJLevelSet* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class Majesty.MJLODActor
class AMJLODActor : public AActor
{
public:
	float                                        M_fMaxDrawDistance;                                // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMJLODActor* GetDefaultObj();

	void SetLODSettings(class UPrimitiveComponent* PrimComp);
};

// 0x0 (0x220 - 0x220)
// Class Majesty.MJPathSplineObject
class AMJPathSplineObject : public AActor
{
public:

	static class UClass* StaticClass();
	static class AMJPathSplineObject* GetDefaultObj();

	void DebugShowSplineObject(class USplineComponent* USpline, class UTextRenderComponent* CTextRender, int32 NIndex);
	void DebugCreateSplineObject(class USplineComponent* USpline, class UTextRenderComponent* CTextRender, int32 NIndex);
};

// 0x20 (0x810 - 0x7F0)
// Class Majesty.MJPostProcessVolume
class AMJPostProcessVolume : public APostProcessVolume
{
public:
	int32                                        M_nIndex;                                          // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBattleMap;                                        // 0x7F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             M_pAddPostProcessMaterial;                         // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMJPostProcessVolume* GetDefaultObj();

	void AddPostProcessMaterial(class UMaterial* PPM);
};

// 0x58 (0x6D0 - 0x678)
// Class Majesty.MJRichTextBlock
class UMJRichTextBlock : public URichTextBlock
{
public:
	enum class EKSLanguage                       M_Language;                                        // 0x678(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideFontSize;                                 // 0x679(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverrideDefaultFontSize;                           // 0x67C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultFontColor;                         // 0x680(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          OverrideDefaultFontColor;                          // 0x684(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultOutlineSize;                       // 0x694(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverrideDefaultOutLineSize;                        // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultOutlineColor;                      // 0x69C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          OverrideOutlineColor;                              // 0x6A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultShadowColor;                       // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          OverrideShadowColor;                               // 0x6B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBanOverrideStyle;                                 // 0x6C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUpdateOutlineSize;                              // 0x6C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bOutlineCalcRoundingDown;                        // 0x6C6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EF[0x9];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMJRichTextBlock* GetDefaultObj();

	void UpdateFontOutlineSize();
	void SetMJText(class FText& InText);
	bool RefreshFontSet(bool ForceRefresh);
	void OverrideDefaultStyleParameter();
};

// 0xBC0 (0xBE8 - 0x28)
// Class Majesty.MJSaveData
class UMJSaveData : public USaveGame
{
public:
	TArray<int32>                                BitFlag;                                           // 0x28(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                EventPlayedFlag;                                   // 0x38(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                EventValueParam;                                   // 0x48(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                EventCounter;                                      // 0x58(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FPlayerLocation                       PlayerLocation;                                    // 0x68(0x1C)(Edit, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               LadderUpPos;                                       // 0x84(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LadderDownPos;                                     // 0x90(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LadderMovePos;                                     // 0x9C(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimeZoneSaveData                     TimeZoneData;                                      // 0xA8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EKSLanguage                       Voice;                                             // 0xB0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 PreparationKnown;                                  // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsTressaInParty;                                   // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalMoneyByTressa;                                // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                LearnAbilityList;                                  // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTameMonsterData>              TameMonsterList;                                   // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTameMonsterData>              LegendMonsterList;                                 // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        HunterPartner;                                     // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        TameMonsterMode;                                   // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SubMissionOrder;                                   // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FPartyChatSaveData>       PartyChatSaveData;                                 // 0x118(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                MapChangeHistory;                                  // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        LevelChangeCounterForFinalChapterHintPartyChat;    // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           FixedFieldBgmMainStoryTaskIdTable;                 // 0x180(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int32                                        LastBgmID;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FirstSelectCharacterID;                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                ParticipationOrderCharacterID;                     // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsRadarMapVisible;                                 // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 SupportAilmentSwitch;                              // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                ShowMapIcon;                                       // 0x200(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                VisitedMap;                                        // 0x210(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                VisitedWorldMapMaskArea;                           // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                VisitedWorldMapPrologueMaskArea;                   // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                VisitedWorldMapIslandLayerArea;                    // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                EnableSwitchIndoorTrigger;                         // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A16[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayingReminiscenceId;                             // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReminiscenceCharaId;                               // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EKSPartySet                       CurrentPartySet;                                   // 0x278(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerParty                          PlayerParty;                                       // 0x280(0x48)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                BackupMainMemberId;                                // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                BackupSubMemberId;                                 // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FPlayerBackpack                       PlayerBackpack;                                    // 0x2E8(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FItemAcquisitionHistory               ItemAcquitisionHistory;                            // 0x300(0x10)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSaveFollowNpcData>            FollowNpcSaveData;                                 // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSaveFollowNpcData>            FollowWaitingNpcSaveData;                          // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSaveFollowNpcData>            BackupFollowNpcList;                               // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSaveFollowNpcData>            BackupFollowWaitingNpcList;                        // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FPlayerParty                          PlayerParty_Set1;                                  // 0x350(0x48)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FPlayerParty                          PlayerParty_Set2;                                  // 0x398(0x48)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FPlayerParty                          PlayerParty_Set3;                                  // 0x3E0(0x48)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FPlayerParty                          PlayerParty_Set4;                                  // 0x428(0x48)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FPlayerParty                          PlayerParty_Set5;                                  // 0x470(0x48)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                LastAtlantisPartySet;                              // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferMoney              BackupMoney;                                       // 0x4C8(0x10)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferItem               BackupItem;                                        // 0x4D8(0x28)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferEquipment          BackupEquipment;                                   // 0x500(0x18)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferJob                BackupJob;                                         // 0x518(0x18)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferAbility            BackupAbility;                                     // 0x530(0x18)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferExp                BackupExp;                                         // 0x548(0x18)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferJP                 BackupJP;                                          // 0x560(0x28)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferDopingParam        BackupDopingParam;                                 // 0x588(0x18)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferLearnAbility       BackupLearnAbility;                                // 0x5A0(0x18)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferFollowNpc          BackupFollowNpc;                                   // 0x5B8(0x28)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferTameMonster        BackupTameMonster;                                 // 0x5E0(0x28)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferTimeZone           BackupTimeZone;                                    // 0x608(0x18)(Protected, NativeAccessSpecifierProtected)
	struct FReminiscenceBufferPOT                BackupPOT;                                         // 0x620(0x18)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A18[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DifficultyPoint;                                   // 0x648(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BackupDifficultyPoint;                             // 0x64C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                BackupCurrentHP;                                   // 0x650(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                BackupCurrentSP;                                   // 0x660(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FPlayerLocation                       ReminiPlayerLocation;                              // 0x670(0x1C)(Edit, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               ReminiCameraLockPos;                               // 0x68C(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        ReminiCameraLockLvTrigId;                          // 0x698(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReminiscenceRestorePlacement         ReminiRestoreData;                                 // 0x6A0(0x68)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSavePlayerCharacterData>      PlayerMember;                                      // 0x708(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBattleReplayData>             Endroll_BattleReplayData;                          // 0x718(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                Endroll_ClearedMS;                                 // 0x728(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         BattleHelpWindowOpen;                              // 0x738(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentEncountTriggerID;                           // 0x73C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BattleSpeedStep;                                   // 0x740(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FTownData>                TownData;                                          // 0x748(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FMenuData                             MenuData;                                          // 0x798(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FSaveEnemyData>           EnemyInfoData;                                     // 0x7A8(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FVector                               CameraLockPos;                                     // 0x7F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        GamePlaySecond;                                    // 0x804(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EquipEncountRevision;                              // 0x808(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSaveMissionData>              SubMissionData;                                    // 0x810(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FMapData>                 MapData;                                           // 0x820(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FRevivalObjectSaveData>        RevivalObjectSaveData;                             // 0x870(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EKSCharacterMoveMode              MoveMode;                                          // 0x880(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEquipLanternData                     EquipLanternData;                                  // 0x888(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FNpcEventData>            NPCEventList;                                      // 0x8A8(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FSoldOutShopItemData>     SoldOutShopItemDataList;                           // 0x8F8(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<int32, int8>                            NPCSpawnStartDelayCountList;                       // 0x948(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<int32, int8>                            NPCSpawnEndDelayCountList;                         // 0x998(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<int32, int8>                            NPCTZCangeSwoonRevivalCountList;                   // 0x9E8(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        CameraLockCurrentLevelTriggerID;                   // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CameraLockCurrentLevelID;                          // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMainStorySaveData>            MainStoryData;                                     // 0xA40(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FMainStoryTaskSaveData>   MainStoryTaskData;                                 // 0xA50(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int32                                        AutoInterruptMainStory;                            // 0xAA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AutoInterruptMainStory_Prologue;                   // 0xAA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                ExtraStoryProgress;                                // 0xAA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FAchievementSaveData                  AchievementSaveData;                               // 0xAB8(0xD0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSaveDataGuild>                GuildData;                                         // 0xB88(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSaveDataSubTitle>             SubTitleData;                                      // 0xB98(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                MyShipCustom;                                      // 0xBA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                MyShipCustomFirstChoice;                           // 0xBB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        LevelDarkState;                                    // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LostWayCount;                                      // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                HolyTorchState;                                    // 0xBD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        TutorialCanDisplayFlag;                            // 0xBE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A20[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMJSaveData* GetDefaultObj();

	void ToggleBitFlag(int32 Index);
	void SetVoice(enum class EKSLanguage ELang);
	void SetVisitedMap(bool SetBit, int32 Index);
	void SetupOnStartReminiscence();
	bool SetupFixedParty(TArray<enum class EPlayableCharacterID>& FixedCharaList);
	void SetupBackpackAndMoneyToInitial(int32 CharacterID);
	bool SetupBackpackAndEquipmentForReminiscence(int32 ReminisceceId);
	void SetTimeZoneData(struct FTimeZoneSaveData& TimeZoneData);
	void SetTameMonsterMode(enum class ETameMonsterMode Mode);
	void SetTameMonsterList(const TArray<struct FTameMonsterData>& NewTameMonsterList);
	void SetSubMissionRecordStartSelect(int32 StartSelect);
	void SetShowMapIcon(bool SetBit, int32 Index);
	void SetSaveEnemyData(int32 EnemyID, struct FSaveEnemyData& SaveEnemyData);
	void SetReminiscenceCharacterId(int32 CharacterID);
	void SetRecentCameraLockLevelTrigger(int32 LevelId, uint8 LevelTriggerID);
	void SetRadarMapVisible(bool bVisible);
	void SetPlayingReminiscenceId(int32 ReminiscenceId);
	void SetPlayerLocationBeforeReminiscence(struct FPlayerLocation& Location);
	void SetPlayerLocation(struct FPlayerLocation& PlayerLocation);
	void SetPartySupportAilmentSwitch(const TArray<bool>& SwitchList);
	void SetParticipationOrderCharacterID(const TArray<int32>& IDList);
	void SetNPCEventList(TMap<int32, struct FNpcEventData> NewNPCEventList);
	void SetMoveMode(enum class EKSCharacterMoveMode Mode);
	void SetMapChangeHistory(int32 MapID);
	int32 SetMainProgressPoint(int32 SetPoint);
	void SetMainMissionRecordStartSelect(int32 StartSelect);
	void SetLegendMonsterList(const TArray<struct FTameMonsterData>& NewLegendMonsterList);
	void SetLearnAbility(int32 Index, int32 AbilitySetID);
	void SetLastBgmId(int32 ID);
	void SetLadderPosition(struct FVector& LadderUpPos, struct FVector& LadderDownPos, struct FVector& LadderMovePos);
	void SetGamePlaySecond(int32 Second);
	void SetExtraMissionRecordStartSelect(int32 StartSelect);
	void SetEventValueParam(int32 Index, int32 Value);
	void SetEventtPlayedFlag(int32 Index, bool Flag);
	int32 SetEventCounter(int32 Index, int32 Value);
	void SetEquipLanternData(const struct FEquipLanternData& Equip);
	void SetEquipEncountRevision(int32 EquipEncountRevision);
	void SetEnableSwitchIndoorTriggerList(const TArray<int32>& List);
	int32 SetDifficultyPoint(int32 SetPoint);
	void SetCurrentPartySet(enum class EKSPartySet PartySet);
	void SetCurrentEncountTriggerID(int32 TriggerID);
	void SetCameraLockPos(struct FVector& Pos);
	void SetCameraLockBeforeReminiscence(struct FVector& CameraLockPos, uint8 TriggerID);
	void SetBitFlagRange(int32 InStart, int32 InEnd, bool Flag);
	void SetBitFlagArray(TArray<int32>& IndexArray, bool Flag);
	void SetBitFlag(int32 Index, bool Flag);
	void SetBattleSpeedStep(int32 Value);
	void SetBattleHelpWindowOpen(bool Open);
	bool ResumePartySetAfterAtlantis();
	void RestoreOriginalData();
	void RestoreDifficultyPoint();
	bool ResetPartySetToSet1();
	bool PreparePartySetBeforeAtlantis();
	void MergeReminiscenceData();
	void MergeDifficultyPoint();
	void JoinPlayerCharacterToParty(enum class EPlayableCharacterID CharacterID, bool* OutResult, bool* OutIsAddMainMember);
	bool IsRadarVisible();
	void InitTownConnectionValue();
	void InitTimezone();
	void InitPlayerParty(const TArray<int32>& MainMember, const TArray<int32>& SubMember);
	void InitPlayerMembers();
	void InitNewGameData();
	void InitFollowNPC();
	void InitEndroll();
	void InitBackpackAndMoneyBuffer();
	enum class EKSLanguage GetVoice();
	bool GetVisitedMap(int32 Index);
	struct FTimeZoneSaveData GetTimeZoneData();
	enum class ETameMonsterMode GetTameMonsterMode();
	TArray<struct FTameMonsterData> GetTameMonsterList();
	TArray<struct FSaveDataSubTitle> GetSubTitleData();
	int32 GetSubMissionRecordStartSelect();
	TMap<int32, struct FSoldOutShopItemData> GetSoldOutShopitemDataList();
	bool GetShowMapIcon(int32 Index);
	struct FSaveEnemyData GetSaveEnemyData(int32 EnemyID);
	TArray<struct FRevivalObjectSaveData> GetRevivalObjectSaveData();
	int32 GetReminiscenceCharacterId();
	uint8 GetRecentCameraLockLevelTriggerID();
	int32 GetRecentCameraLockLevelID();
	int32 GetPlayingReminiscenceId();
	struct FPlayerParty GetPlayerPartySet(enum class EKSPartySet PartySet);
	struct FPlayerParty GetPlayerParty();
	TArray<struct FSavePlayerCharacterData> GetPlayerMember();
	struct FPlayerLocation GetPlayerLocationBeforeReminiscence();
	struct FPlayerLocation GetPlayerLocation();
	TArray<struct FSaveBackPackItem> GetPlayerBackpackItemList();
	TArray<bool> GetPartySupportAilmentSwitch();
	TArray<int32> GetParticipationOrderCharacterID();
	TMap<int32, struct FNpcEventData> GetNPCEventList();
	enum class EKSCharacterMoveMode GetMoveMode();
	TArray<int32> GetMapChangeHistory();
	TMap<int32, struct FMainStoryTaskSaveData> GetMainStoryTaskSaveData();
	TArray<struct FMainStorySaveData> GetMainStory();
	int32 GetMainProgressPoint();
	int32 GetMainMissionRecordStartSelect();
	int32 GetLevelChangeCounterForFinalChapterHintPartyChat();
	TArray<struct FTameMonsterData> GetLegendMonsterList();
	TArray<int32> GetLearnAbility();
	int32 GetLastPlayedBgmID();
	void GetLadderPosition(struct FVector* OutLadderUpPos, struct FVector* OutLadderDownPos, struct FVector* OutLadderMovePos);
	TArray<struct FSaveDataGuild> GetGuildData();
	int32 GetGamePlaySecond();
	void GetFirstSelectCharacterID(int32* FirstSelectCharaID);
	TArray<int32> GetExtraStoryProgressBuffer();
	int32 GetExtraMissionRecordStartSelect();
	int32 GetEventValueParam(int32 Index);
	bool GetEventtPlayedFlag(int32 Index);
	TArray<int32> GetEventPlayedFlag();
	int32 GetEventCounter(int32 Index);
	struct FEquipLanternData GetEquipLanternData();
	int32 GetEquipEncountRevision();
	TArray<int32> GetEnableSwitchIndoorTriggerListRef();
	TArray<int32> GetEnableSwitchIndoorTriggerList();
	int32 GetDifficultyPoint();
	enum class EKSPartySet GetCurrentPartySet();
	int32 GetCurrentEncountTriggerID();
	struct FVector GetCameraLockPosBeforeReminiscence();
	struct FVector GetCameraLockPos();
	uint8 GetCameraLockLvTriggerIdBeforeReminiscence();
	bool GetBitFlag(int32 Index);
	TArray<int32> GetBit();
	int32 GetBattleSpeedStep();
	bool GetBattleHelpWindowOpen();
	TMap<int32, struct FTownData> GetAllTownData();
	TMap<int32, struct FMapData> GetAllMapData();
	bool DeleteTameMonsterList(int32 Index);
	struct FAcquisitionAbilityData CreateAcquitisionAdvancedAbilityData(int32 ArraySize);
	TArray<struct FAcquisitionAbilityData> CreateAcquitisionAbilityData(int32 ArraySize);
	void CopyPartySetDataOtherThanMember(enum class EKSPartySet PartySetID);
	void ClearReminiscenceCharacterId();
	void ClearRecentCameraLockLevelTrigger();
	void ClearPlayingReminiscenceId();
	void ClearPlayerLocationBeforeReminiscence();
	void ClearCameraLockBeforeReminiscence();
	bool CheckLearnAbilityFull(int32* OutEmptyIndex);
	void ChangePartySet(enum class EKSPartySet PartySet);
	void BackupDataBeforeReminiscence();
	void BackupAndResetDifficultyPoint();
	int32 AddMainProgressPoint(int32 AddPoint);
	int32 AddEventValueParam(int32 Index, int32 Value);
	int32 AddEventCounter(int32 Index, int32 Value);
	int32 AddDifficultyPoint(int32 AddPoint);
};

// 0x8 (0x200 - 0x1F8)
// Class Majesty.MJSoundListenerComponent
class UMJSoundListenerComponent : public USceneComponent
{
public:
	uint8                                        Pad_1A22[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMJSoundListenerComponent* GetDefaultObj();

	void ChangeListenerPoint(enum class ELISTENER_TYPE EListenerType, class USceneComponent* PParentComponent);
};

// 0x0 (0x238 - 0x238)
// Class Majesty.MJSphereTrigger
class AMJSphereTrigger : public AKSTriggerBase
{
public:

	static class UClass* StaticClass();
	static class AMJSphereTrigger* GetDefaultObj();

};

// 0x8 (0x360 - 0x358)
// Class Majesty.MusicPlayerWidget
class UMusicPlayerWidget : public UKSUserWidgetBase
{
public:
	enum class EMUSIC_PLAYER_WIDGET_STATE        M_WidgetState;                                     // 0x358(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A23[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMusicPlayerWidget* GetDefaultObj();

	void UpdateWidgetState(enum class EMUSIC_PLAYER_WIDGET_STATE WidgetState);
	void OnEndState(enum class EMUSIC_PLAYER_WIDGET_STATE CurrentState);
	void OnBeginState(enum class EMUSIC_PLAYER_WIDGET_STATE CurrentState);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.MyShipUtility
class UMyShipUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMyShipUtility* GetDefaultObj();

	class FName GetSailTextureResourceLabel(enum class EMYSHIP_CUSTOM_TYPE SailType);
	class FName GetMyShipMeshResourceLabel();
	class FName GetMyShipFlipbook();
	class FName GetMyShipFirstChoiceMeshResourceLabel();
	void ApplyMyShipCustomizeFirstChoice();
	void ApplyMyShipCustomize();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.NarrationDataTableUtility
class UNarrationDataTableUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNarrationDataTableUtility* GetDefaultObj();

	int32 NarrationDataLabelToID(class FName NarrationDataLabel);
	class FName NarrationDataIDToLabel(int32 NarrationDataID);
	bool GetNarrationDataRowNames(TArray<class FName>* OutRowNames);
	bool GetNarrationData(class FName RowName, struct FNarrationDataBase* OutRowData);
};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.NarrationMessageWidgetBase
class UNarrationMessageWidgetBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UNarrationMessageWidgetBase* GetDefaultObj();

	void SkipDraw();
	void SetNottingLine();
	void SetBlankLine();
	void Reset();
	bool PlayMessage(class FText& Text, int32 TextJustification, bool DisableAnimation, float DrawTime, const struct FTalkVoice& VoiceData);
	void PlayFadeOut();
};

// 0x0 (0x358 - 0x358)
// Class Majesty.NarrationWidgetBase
class UNarrationWidgetBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UNarrationWidgetBase* GetDefaultObj();

	void UpdateDrawMessage(bool* IsEnd);
	bool SetPlayPageMessage(struct FNarrationDataBase& Page);
	void SetAnimationMode(bool PassBGOpen, bool PassBGClose);
	void PlayNote(class FName NoteLabel, bool UseBackground);
	void PlayNarration(class FName NarrationSetLabel);
	void PhraseMessageDraw();
	void OpenInner();
	bool OneLineDraw(class UNarrationMessageWidgetBase* TargetObject, class FName TalkLabel, int32 TextJustification, bool DisableAnimation, bool IsVoiceSkip);
	void NextPage(bool* IsEnd);
	void CloseMessage();
	void Close(bool IsForceClose);
	void AllDrawMessage();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.NextPurposeDataUtility
class UNextPurposeDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UNextPurposeDataUtility* GetDefaultObj();

	void NotifyNextPurposeDataDB(class FName DbName, enum class EDBNoticeType Notice);
	bool GetNextPurposeTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames, enum class ENextPurposeDataType Type);
	bool GetNextPurposeRowDataByID(struct FNextPurposeData* OutData, int32 TargetID);
	bool GetNextPurposeRowData(struct FNextPurposeData* OutData, class FName TargetLabel);
	bool GetNextPurposeLabelsByMainStory(TArray<class FName>* OutLabels, class FName MainStoryLabel);
	void GetNextPurposeDataByMainStoryTaskLabel(enum class EBPFuncReturnCode* ReturnCode, struct FNextPurposeData* OutData, class FName MainStoryTaskLabel);
};

// 0xF0 (0x320 - 0x230)
// Class Majesty.NoticeDelegateManager
class ANoticeDelegateManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1A2E[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANoticeDelegateManager* GetDefaultObj();

	bool Static_BroadcastNotice(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs);
	void RemoveOneShotNoticeDelegate(enum class ENOTICE_TYPE NoticeType, FDelegateProperty_ NoticeDelegate);
	void RegisterOneShotNoticeDelegate(enum class ENOTICE_TYPE NoticeType, FDelegateProperty_ NoticeDelegate);
	void RegisterNoticeDelegate(enum class ENOTICE_TYPE NoticeType, FDelegateProperty_ NoticeDelegate);
	void BroadcastNotice(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.NPCDataBaseUtility
class UNPCDataBaseUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UNPCDataBaseUtility* GetDefaultObj();

	bool GetNPCPurchaseData(class FName RowName, struct FNPCPurchaseDataBase* OutPurchaseData);
	bool GetNPCLeadData(class FName RowName, struct FNPCLeadDataBase* OutLeadData);
	bool GetNPCHearInfoData(class FName RowName, struct FNPCHearInfoDataBase* OutHearInfoData);
	bool GetNPCHearData(class FName RowName, struct FNPCHearDataBase* OutHearData);
	bool GetNPCDataBaseRowNames(enum class ENPC_DB_TYPE Type, TArray<class FName>* OutRowNames);
	bool GetNPCBattleData(class FName RowName, struct FNPCBattleData* OutBattleData);
};

// 0x0 (0x230 - 0x230)
// Class Majesty.NPCManager
class ANPCManager : public AAcqManagerBase
{
public:

	static class UClass* StaticClass();
	static class ANPCManager* GetDefaultObj();

	bool RecoverSwoonNPC_TZChange(int32 NPCIndex);
	bool RecoverSwoonNPC(class FName& NPCLabel);
	bool RecoverAllSwoonNPC();
	bool CreateSwoonNPCList();
	bool AddSwoonNPC(class FName& NPCLabel, enum class ENpcSwoonType SwoonType);
};

// 0x20 (0xD0 - 0xB0)
// Class Majesty.NpcPropertyComponent
class UNpcPropertyComponent : public UActorComponent
{
public:
	class FName                                  M_NpcLabel;                                        // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_NpcUniqueID;                                     // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_RequestID;                                       // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsEnableMove;                                    // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsMoveNPC;                                       // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsNoReactionNPC;                                 // 0xC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsEnableFieldCommand;                            // 0xC3(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsPlayingAutoTalk;                               // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_AutoBalloonDistance;                             // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A31[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNpcPropertyComponent* GetDefaultObj();

	void SetRequestID(int32 Val);
	void SetPlayingAutoTalk(bool Val);
	int32 SetNpcUniqueID(int32 Value);
	class FName SetNpcLabel(class FName Value);
	void SetIsNoReactionNPC(bool Val);
	void SetIsMoveNPC(bool Val);
	void SetIsEnableMove(bool Val);
	void SetIsEnableFieldCommand(bool Val);
	void SetAutoBalloonDistance(float Distance);
	bool IsSwoon();
	bool IsSignBoard();
	bool IsPlayingAutoTalk();
	bool IsGramoPhone();
	int32 GetRequestID();
	bool GetPurchaseData(struct FNPCPurchaseDataBase* OutData);
	int32 GetNpcUniqueID();
	class FName GetNpcLabel();
	bool GetLeadData(struct FNPCLeadDataBase* OutData);
	bool GetIsNoReactionNPC();
	bool GetIsMoveNPC();
	bool GetIsEnableMove();
	bool GetIsEnableFieldCommand();
	bool GetHearData(struct FNPCHearDataBase* OutData);
	bool GetBattleData(struct FNPCBattleData* OutData);
	float GetAutoBalloonDistance();
	bool CheckFieldCommandEnable();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.NPCSaveDataUtil
class UNPCSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UNPCSaveDataUtil* GetDefaultObj();

	bool SetNPCTZChangeSwoonRevivalCount(int32 NNPCIndex, int32 NTimeZoneCnt);
	bool SetNPCSwoonFlag(class FName NPCLabel, bool Flag, enum class ENpcSwoonType SwoonType, int32* NPCIndex);
	bool SetNPCEventData(int32 NPCID, const struct FNpcEventData& NpcEventData);
	bool IsSwoonNPC(class FName NPCLabel);
	int32 GetNPCTZChangeSwoonRevivalCount(int32 NNPCIndex);
	bool GetNPCEventDataByLabel(class FName NPCLabel, struct FNpcEventData* NpcEventData, int32* NPCID);
	bool GetNPCEventDataByID(int32 NPCID, struct FNpcEventData* Out);
	void DEBUG_ClearNpcPurchasedItems(class FName NPCLabel);
	void DEBUG_ClearNpcHearFlag(class FName NPCLabel);
	void DEBUG_ClearAllNpcPurchasedItems();
	TArray<int32> DEBUG_ClearAllNpcHearFlag();
};

// 0x30 (0x250 - 0x220)
// Class Majesty.NPCSpawnTarget
class ANPCSpawnTarget : public ATargetPoint
{
public:
	class AKSCharacterBase*                      NPCCharacter;                                      // 0x220(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSObjectBase*                         SpawnObject;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCID;                                             // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ObjectId;                                          // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKSCharacterDir                   Dir;                                               // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNPCSpawnData>                 SpawnData;                                         // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ANPCSpawnTarget* GetDefaultObj();

	bool IsSpawn(TArray<int32>& EventFlag, struct FNPCSpawnData& CheckData);
};

// 0x0 (0x38 - 0x38)
// Class Majesty.NullServiceConnecter
class UNullServiceConnecter : public UServiceConnecter
{
public:

	static class UClass* StaticClass();
	static class UNullServiceConnecter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.ObjectControlInterface
class IObjectControlInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IObjectControlInterface* GetDefaultObj();

	void OnShown();
	void OnHidden();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ObjectDataTableUtility
class UObjectDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UObjectDataTableUtility* GetDefaultObj();

	class FName GetObjectLabelById(int32 ID);
	bool GetObjectDataRow(struct FKSObjectData* OutData, class FName TargetLabel);
};

// 0xB0 (0x2E0 - 0x230)
// Class Majesty.ObjectVisibilityManager
class AObjectVisibilityManager : public AAcqManagerBase
{
public:
	TMap<class FName, struct FObjectVisibilityData> M_ObjectVisibilityRequest;                         // 0x230(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FObjectVisibilityData> M_ObjectVisibilityDataCashe;                       // 0x280(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A53[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AObjectVisibilityManager* GetDefaultObj();

	void OnLevelChangeStart(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
};

// 0x10 (0xC0 - 0xB0)
// Class Majesty.OpenSpeechUIComponent
class UOpenSpeechUIComponent : public UActorComponent
{
public:
	uint8                                        Pad_1A58[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_SubTitleLabel;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOpenSpeechUIComponent* GetDefaultObj();

	void OpenSpeechUI();
	void CloseSpeechUI();
	bool CheckCanBegin();
};

// 0x28 (0xD8 - 0xB0)
// Class Majesty.OperationPlayerCameraComponentBase
class UOperationPlayerCameraComponentBase : public UActorComponent
{
public:
	float                                        M_PosInterpTimer;                                  // 0xB0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_PosInterpOffsetStart;                            // 0xB4(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_PosInterpOffsetEnd;                              // 0xC0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_PosInterpOffset;                                 // 0xCC(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UOperationPlayerCameraComponentBase* GetDefaultObj();

	bool UpdateCameraInterpolationByPlayerPos(float DeltaTime);
	bool StartCameraInterpolationByPlayerPos(const struct FVector& StartPlayerPos);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.OptionGroupTableUtility
class UOptionGroupTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UOptionGroupTableUtility* GetDefaultObj();

	int32 OptionGroupLabelToID(class FName OptionGroupLable);
	class FName OptionGroupIDToLabel(int32 OptionGroupID);
	bool GetOptionGroupTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetOptionGroupRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FOptionGroupData* OutData, int32 TargetID, bool LogEnable);
	bool GetOptionGroupRowData(enum class EBPFuncReturnCode* ReturnCode, struct FOptionGroupData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x368 - 0x368)
// Class Majesty.OptionMenuWBPBase
class UOptionMenuWBPBase : public UKSUserWidgetWithState
{
public:

	static class UClass* StaticClass();
	static class UOptionMenuWBPBase* GetDefaultObj();

	bool SetFromTitleScene(bool FromTitleScene);
	void IsSaving(bool* Saving);
};

// 0x18 (0x50 - 0x38)
// Class Majesty.OssServiceConnecter
class UOssServiceConnecter : public UServiceConnecter
{
public:
	uint8                                        Pad_1ADC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOssServiceConnecter* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class Majesty.OutGameStateData
class UOutGameStateData : public UStateDataBase
{
public:

	static class UClass* StaticClass();
	static class UOutGameStateData* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class Majesty.PartnerDetailWidget
class UPartnerDetailWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UPartnerDetailWidget* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class Majesty.PartyCharacterListBase
class UPartyCharacterListBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UPartyCharacterListBase* GetDefaultObj();

	void ResetPartyPanel();
	void Init(bool EnableStatusSpacer);
	class UPartyCharacterPanelBase* GetMainMemberPanel(int32 MainMemberIndex);
};

// 0xF8 (0x3B8 - 0x2C0)
// Class Majesty.PartyCharacterPanelBase
class UPartyCharacterPanelBase : public UAcqUserWidget
{
public:
	bool                                         IsUseUiResource;                                   // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavePlayerCharacterData              M_CharacterData;                                   // 0x2C8(0xF0)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPartyCharacterPanelBase* GetDefaultObj();

	void SetVisibleEquipmentInfo(int32 ShowCount);
	void SetVisibleEquipIcon(bool IsVisible);
	void SetParamRange(int32 ParamMin, int32 ParamMax);
	void SetIsUseUiResource(bool Val);
	bool SetEquipmentInfo(int32 Index, enum class EEQUIPMENT_ITEM_PARAM ParamType, int32 ParamBefore, int32 ParamAfter);
	void SetEquipmentAnim(bool CanEquip);
	void SetCharacterData(struct FSavePlayerCharacterData& CharacterData);
	void OutFocus();
	bool GetIsUseUiResource();
	struct FSavePlayerCharacterData GetCharacterData();
	void Focus();
	void Decide();
};

// 0x8 (0xB8 - 0xB0)
// Class Majesty.PartyCharaPropertyComponent
class UPartyCharaPropertyComponent : public UActorComponent
{
public:
	enum class EPlayableCharacterID              M_PlayerCharacterID;                               // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AE5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyCharaPropertyComponent* GetDefaultObj();

	enum class EPlayableCharacterID SetPlayerID(enum class EPlayableCharacterID ID);
	enum class EPlayableCharacterID GetPlayerID();
};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.PartyCharPanelSelectBackBase
class UPartyCharPanelSelectBackBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UPartyCharPanelSelectBackBase* GetDefaultObj();

	void StayAnim();
	void OutFocus();
	void Focus();
	void FastOutFocus();
};

// 0x0 (0x358 - 0x358)
// Class Majesty.PartyChatBase
class UPartyChatBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UPartyChatBase* GetDefaultObj();

	bool VisibleBackGround(bool IsVisible);
	bool SetupPartyChatWidget(struct FPartyChat& PartyChatData, bool UseBackgroundImage);
	bool SetCharaDir(int32 Index, enum class EKSCharacterDir Dir);
	bool SetCharacterIndex(int32 Index, enum class EPlayableCharacterID Character, enum class EKSCharacterDir Dir);
	bool OutFocusPartyChatCharactr(bool IsFast);
	void GetCharacterPos(struct FVector2D* Pos, int32 Index);
	bool FocusPartyChatCharactr(TArray<int32>& FocusCharacters, bool IsFast);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.PartyChatFunction
class UPartyChatFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPartyChatFunction* GetDefaultObj();

	bool IsWithinMainStoryProgress(struct FPartyChat& PartyChat);
	bool IsValidPartyChatData(struct FPartyChat& PartyChat);
	bool IsTraveledUniqueMapEnoughTimes();
	bool IsSameLevel(struct FPartyChat& PartyChat);
	bool IsPlayingFinalChapterPartyChat();
	bool IsChokerDetachPartyChat();
	bool IsChokerAttachPartyChat();
	bool IsAnyCharacterPlayingMainStory();
	bool IsAllRequiredCharactersInParty(struct FPartyChat& PartyChat, bool ContainSubMember);
};

// 0xD0 (0x300 - 0x230)
// Class Majesty.PartyChatManager
class APartyChatManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1AFE[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_IsInBar;                                         // 0x280(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AFF[0x7F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APartyChatManager* GetDefaultObj();

	bool Static_PlayPartyChatFromMissionRecord(class FName& PartyChatLabel);
	bool Static_PlayAvailablePartyChat();
	bool Static_IsAvailablePartyChat();
	bool PlayPartyChatFromMissionRecord(class FName& PartyChatLabel);
	bool PlayAvailablePartyChat();
	void OnUpdateMainStoryTask(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnUpdateMainStory(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnStartEvent(enum class EREQUEST_RESULT Result);
	void OnRefreshPartyCharacter(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnLevelChanged(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnJoinPlayerCharacter(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnFinishPartyChat(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnEnterOrExitBar(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnCompleteMainStory(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnChangeHolyTorchState();
	void OnCalledEventEndProcess();
	bool IsAvailablePartyChat();
	bool GetPlayingPartyChatData(struct FPartyChat* OutData);
	void Debug_ForcePlayPartyChat(class FName& PartyChatLabel);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.PartyChatNotificationBase
class UPartyChatNotificationBase : public UKSUserWidgetBase
{
public:
	bool                                         M_IsOpening;                                       // 0x358(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsTemporaryHidden;                               // 0x359(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B00[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyChatNotificationBase* GetDefaultObj();

	void SetIsOpening(bool IsOpening);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.PartyChatSaveDataUtil
class UPartyChatSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UPartyChatSaveDataUtil* GetDefaultObj();

	void SetState(int32 PartyChatId, enum class EPARTY_CHAT_STATE State);
	bool SetPartyChatTimeZoneOnPlayed(int32 PartyChatId, int32 TimezoneType, int32 TimeZonePosition);
	void SetPartyChatLevelOnPlayed(int32 PartyChatId, int32 LevelId);
	bool SetPartyChatEventObjectFlag(int32 PartyChatId, int32 FlagID, bool Val);
	void SetNewFlag(int32 PartyChatId, bool bNew);
	bool IsPartyChatFlag(int32 PartyChatId);
	enum class EPARTY_CHAT_STATE GetState(int32 PartyChatId);
	int32 GetPartyChatTimeZoneTypeOnPlayed(int32 PartyChatId);
	int32 GetPartyChatTimeZonePositionOnPlayed(int32 PartyChatId);
	int32 GetPartyChatLevelOnPlayed(int32 PartyChatId);
	TArray<class FName> GetPartyChatLabelsRelatedMainStoryWithReleasedState(class FName MainStoryLabel);
	void GetPartyChatEventObjectFlag(int32 PartyChatId, int32* FlagID, bool* Val);
	bool GetNewFlag(int32 PartyChatId);
	int32 GetLevelChangeCounterForFinalChapterHintPartyChat();
	bool GetIsUnRelease(int32 PartyChatId);
	bool GetIsRelease(int32 PartyChatId);
	void Debug_SetLevelChangeCounterForFinalChapterHintPartyChat(int32 NewCount);
};

// 0x8 (0x58 - 0x50)
// Class Majesty.PartyChatStateData
class UPartyChatStateData : public UStateDataBase
{
public:
	uint8                                        Pad_1B0C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyChatStateData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.PartyChatTableUtility
class UPartyChatTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UPartyChatTableUtility* GetDefaultObj();

	int32 PartyChatLabelToID(class FName PartyChatLable);
	class FName PartyChatIDToLabel(int32 PartyChatId);
	void NotifyPartyChatDB(class FName DbName, enum class EDBNoticeType Notice);
	bool GetPartyChatTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetPartyChatRowDataFromEventLabel(enum class EBPFuncReturnCode* ReturnCode, struct FPartyChat* OutData, class FName EventLabel, bool LogEnable);
	bool GetPartyChatRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FPartyChat* OutData, int32 TargetID, bool LogEnable);
	bool GetPartyChatRowData(enum class EBPFuncReturnCode* ReturnCode, struct FPartyChat* OutData, class FName TargetLabel, bool LogEnable);
	TArray<class FName> GetPartyChatLabelsRelatedMainStory(class FName MainStoryLabel);
	TArray<class FName> GetPartyChatLabelsOthers();
	TArray<class FName> GetPartyChatLabelsByType(enum class EPARTY_CHAT_TYPE Type);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.PartySaveDataUtil
class UPartySaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UPartySaveDataUtil* GetDefaultObj();

	bool UpdateCurrentPartySet();
	bool IsPartySolo();
	bool IsBattleMember(enum class EPlayableCharacterID CharaID);
	TArray<int32> GetSubMemberCharacterIDs();
	TArray<int32> GetSubMemberArrayIndex();
	TArray<struct FSavePlayerCharacterData> GetSubMember();
	enum class EPlayableCharacterID GetPartyTopCharacterID();
	TArray<struct FSavePlayerCharacterData> GetMemberFromMainMenu();
	TArray<int32> GetMainMemberCharacterIDs();
	TArray<int32> GetMainMemberArrayIndex();
	TArray<int32> GetLastAtlantisPartySet(enum class EKSPartySet PartySet);
	TArray<struct FSavePlayerCharacterData> GetBattleMember();
	bool CheckInSubParty(enum class EPlayableCharacterID CharaID);
	bool CheckInPartySet(enum class EPlayableCharacterID CharaID, enum class EKSPartySet PartySet);
	bool CheckInParty(enum class EPlayableCharacterID CharaID);
};

// 0x0 (0x260 - 0x260)
// Class Majesty.PartySplitCharacterPanelBase
class UPartySplitCharacterPanelBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UPartySplitCharacterPanelBase* GetDefaultObj();

	void SetCharacterFlpBook(enum class EPlayableCharacterID CharacterID);
};

// 0x10 (0x270 - 0x260)
// Class Majesty.PartySplitCharacterPlacementBoxBase
class UPartySplitCharacterPlacementBoxBase : public UUserWidget
{
public:
	enum class EPlayableCharacterID              M_PlacedCharacter;                                 // 0x260(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsInFocus;                                         // 0x261(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B22[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_TitleTextLabel;                                  // 0x264(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B23[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartySplitCharacterPlacementBoxBase* GetDefaultObj();

	void SetPlacedCharacter(enum class EPlayableCharacterID CharacterID);
	void OutFocus(bool IsFast);
	void InFocus(bool IsFast);
	enum class EPlayableCharacterID GetPlacedCharacter();
};

// 0x28 (0x288 - 0x260)
// Class Majesty.PartySplitMainPartyBoxBase
class UPartySplitMainPartyBoxBase : public UUserWidget
{
public:
	TArray<class UPartySplitCharacterPanelBase*> M_CharacterPanels;                                 // 0x260(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<enum class EPlayableCharacterID>      M_MainMember;                                      // 0x270(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  M_TitleTextLabel;                                  // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPartySplitMainPartyBoxBase* GetDefaultObj();

	void SetMemberList(TArray<enum class EPlayableCharacterID>& NewMainMember);
};

// 0xD0 (0x330 - 0x260)
// Class Majesty.PartySplitResultBase
class UPartySplitResultBase : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnStartedOpenCallback;                             // 0x260(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpenedCallback;                                  // 0x270(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStartedCloseCallback;                            // 0x280(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClosedCallback;                                  // 0x290(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UPartyCharacterPanelBase*>      M_MainParty;                                       // 0x2A0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EPARTY_SPLIT_PLACEMENT_POSITION, class UPartyCharacterPanelBase*> M_PlacedCharacter;                                 // 0x2B0(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class FName                                  M_TitleTextLabel;                                  // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_MainPartyTextLabel;                              // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_WildernessPlaceTextLabel;                        // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_DesertPlaceTextLabel;                            // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_MountainPlaceTextLabel;                          // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_IslandPlaceTextLabel;                            // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPartySplitResultBase* GetDefaultObj();

	void SetMember(TMap<enum class EPlayableCharacterID, enum class EPARTY_SPLIT_PLACEMENT_POSITION>& Member);
	void Open();
	void Close();
	void BroadcastOnStartOpenDelegate();
	void BroadcastOnStartCloseDelegate();
	void BroadcastOnOpenedDelegate();
	void BroadcastOnClosedDelegate();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.PartySplitUiUtil
class UPartySplitUiUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPartySplitUiUtil* GetDefaultObj();

	bool SavePartySplitResult(TMap<enum class EPlayableCharacterID, enum class EPARTY_SPLIT_PLACEMENT_POSITION>& Party);
	bool IsCompletePartySplit(TMap<enum class EPlayableCharacterID, enum class EPARTY_SPLIT_PLACEMENT_POSITION>& Party);
};

// 0x1A0 (0x4F8 - 0x358)
// Class Majesty.PartySplitWidgetBase
class UPartySplitWidgetBase : public UKSUserWidgetBase
{
public:
	FMulticastInlineDelegateProperty_            OnClosedPartySplitWithResult;                      // 0x358(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EPARTY_SPLIT_WIDGET_STATE         M_WidgetState;                                     // 0x368(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             M_CursorPosition;                                  // 0x36C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartySplitMainPartyBoxBase*           M_MainPartyBox;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCharactersGridPanelBase*              M_CharacterGrid;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPartySplitResultBase*                 M_PartySplitResult;                                // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FIntPoint, class UPartySplitCharacterPlacementBoxBase*> M_CursorPosToPlacementBox;                         // 0x390(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EPARTY_SPLIT_PLACEMENT_POSITION, class UPartySplitCharacterPlacementBoxBase*> M_PlacementPosToPlacementBoxe;                     // 0x3E0(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EPlayableCharacterID, enum class EPARTY_SPLIT_PLACEMENT_POSITION> M_CharacterPlacementPositions;                     // 0x430(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	enum class EPARTY_SPLIT_CLOSE_REASON         M_CloseReason;                                     // 0x480(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_HeaderTextLabel;                                 // 0x484(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_FooterSelectPlaceTextLabel;                      // 0x48C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_FooterSelectCharacterTextLabel;                  // 0x494(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_FooterConfirmButtonTextLabel;                    // 0x49C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_FooterResetButtonTextLabel;                      // 0x4A4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_CharacterGridTitleTextLabel;                     // 0x4AC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_WildernessPlaceTextLabel;                        // 0x4B4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_DesertPlaceTextLabel;                            // 0x4BC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_MountainPlaceTextLabel;                          // 0x4C4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_IslandPlaceTextLabel;                            // 0x4CC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_BackDialogTextLabel;                             // 0x4D4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_FailedDialogTextLabel;                           // 0x4DC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_ResetDialogTextLabel;                            // 0x4E4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_ConfirmDialogTextLabel;                          // 0x4EC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Debug_IsLoggingMode;                               // 0x4F4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B50[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartySplitWidgetBase* GetDefaultObj();

	void SetWidgetState(enum class EPARTY_SPLIT_WIDGET_STATE NewState);
	void SetCursorPosition(struct FIntPoint& NewPos);
	void SetCharacterPlacementPosition(TMap<enum class EPlayableCharacterID, enum class EPARTY_SPLIT_PLACEMENT_POSITION>& NewPositions);
	void OnInputPlus();
	void OnInputMinus();
	void OnInputDecide();
	void OnInputCursor(struct FIntPoint& Input);
	void OnInputCancel();
	void OnChangedWidgetState(enum class EPARTY_SPLIT_WIDGET_STATE NextState, enum class EPARTY_SPLIT_WIDGET_STATE PrevState);
	enum class EPARTY_SPLIT_WIDGET_STATE GetWidgetState();
	class UPartySplitCharacterPlacementBoxBase* GetPlacementBoxByPlacementPos(enum class EPARTY_SPLIT_PLACEMENT_POSITION KeyPos);
	class UPartySplitCharacterPlacementBoxBase* GetPlacementBoxByCursorPos(struct FIntPoint& KeyPos);
	struct FIntPoint GetCursorPosition();
	enum class EPARTY_SPLIT_PLACEMENT_POSITION GetCurrentSelectedPlacementPosition();
	class UPartySplitCharacterPlacementBoxBase* GetCurrentSelectedPlacementBox();
	enum class EPARTY_SPLIT_CLOSE_REASON GetCloseReason();
	TMap<enum class EPlayableCharacterID, enum class EPARTY_SPLIT_PLACEMENT_POSITION> GetCharacterPositions();
	void BroadcastOnClosedPartySplitWithResultDelegate();
};

// 0x8 (0x550 - 0x548)
// Class Majesty.PathSplineComponent
class UPathSplineComponent : public USplineComponent
{
public:
	enum class EPATH_TYPE                        M_ePathType;                                       // 0x548(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B52[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPathSplineComponent* GetDefaultObj();

	enum class EPATH_TYPE GetPathType();
};

// 0x0 (0x38 - 0x38)
// Class Majesty.PlacedSequencerBase
class UPlacedSequencerBase : public ULevelSequenceDirector
{
public:

	static class UClass* StaticClass();
	static class UPlacedSequencerBase* GetDefaultObj();

	float SetUpFrameNumber(float Time);
	void OpenAutoBalloonWithNPCFunction(class FName TalkDataLabel, class FName PlacementLabel, const struct FVector2D& balloonOffset, float DispTime, float DispDistance, enum class EEventBalloonDir BalloonDir, bool EnableTail);
	void OpenAutoBalloonFunction(class FName TalkTargetTag, class FName TalkDataLabel, const struct FVector2D& balloonOffset, float DispTime, float DispDistance, enum class EEventBalloonDir BalloonDir, bool EnableTail);
	void InitSeqData();
	void Initialize();
	void Finalize();
};

// 0x80 (0x130 - 0xB0)
// Class Majesty.PlacementFadeComponent
class UPlacementFadeComponent : public UActorComponent
{
public:
	uint8                                        Pad_1B66[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                M_pOwnerAct;                                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fFadeTimer;                                      // 0xC8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              M_pMaterialInstance;                               // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnFadeInEvent;                                     // 0xD8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnFadeOutEvent;                                    // 0xE8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B69[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlacementFadeComponent* GetDefaultObj();

	void StartFadeOutWithFadeTime(float FFadeTime);
	void StartFadeOut();
	void StartFadeInWithFadeTime(float FFadeTime);
	void StartFadeInWait();
	void StartFadeIn();
	void SetUpMaterialInstance(class UMaterialInstanceDynamic* CMaterial);
	void SetExFactorFadeTime(float FadeTime);
	void SetExFactorFadeRate(float FadeRate);
	void SetCameraFactorFadeRate(float FadeRate);
	bool IsRunningExFactorFadeOut();
	bool IsRunningCameraFactorFadeOut();
	bool IsFadeOutFinish();
	bool IsFadeMode();
	bool IsFadeInWait();
	bool IsFadeInFinish();
	bool IsFadeFinish();
	bool IsCompletedExFactorFadeOut();
	bool IsCompletedCameraFactorFadeOut();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	void FadeInImmediately();
};

// 0x38 (0x270 - 0x238)
// Class Majesty.PlacementRefreshTrigger
class APlacementRefreshTrigger : public AMJBoxTrigger
{
public:
	class FName                                  M_strStartEventLabel;                              // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_strEndEventLabel;                                // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETIMEZONE_TRIGGER_TYPE            M_eTargetTimeZone;                                 // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRefereshFlagChangeParam>      M_acRefreshParam;                                  // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  M_strSELabel;                                      // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bPlacementRefresh;                               // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APlacementRefreshTrigger* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.PlacementUtility
class UPlacementUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UPlacementUtility* GetDefaultObj();

	bool IsMerchantSubStoryFromPlacementLabel(class FName PlacementLabel);
	void GetPlacementNameByLevelName(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutLabel, class FName LevelName);
	bool GetPlacementInfo(struct FLabelListData* OutLabelInfo, class FName RowName);
	void GetPlacementEventParamSetByIndex(struct FPlacementData& PlacementData, int32 Index, struct FPlacementEventParamSet* OutEventParamSet);
	void GetPlacementDataRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	void GetPlacementDataByLevelName(enum class EBPFuncReturnCode* ReturnCode, TArray<struct FPlacementData>* OutInfoData, class FName LevelName);
	bool GetPlacementData(struct FPlacementData* OutData, class FName TargetLabel);
	bool GetNPCDataByPlacementInfo(struct FNPCData* OutData, class FName PlacementLabel);
	bool GetNPCDataByNPCLabel(struct FNPCData* OutData, class FName NPCLabel);
	bool GetActivePlacementEventParamSet(struct FPlacementData& PlacementData, TArray<struct FPlacementEventParamSet>* OutEventParamSet);
	class FName GetActiveEventLabelFromEventTypeAndParam(class FName NPCLabel, enum class ENPCEVENT_TYPE EventType, class FName EventParam);
	void EventTypeStringToByte(const class FString& StrData, uint8* RetByte);
	void Debug_OutputPlacementInfo(class FName LevelName);
	void CharaDirStringToByte(const class FString& StrData, uint8* RetByte);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.PlayerDataUtility
class UPlayerDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UPlayerDataUtility* GetDefaultObj();

	int32 PlayerLabelToID(class FName Label);
	class FName PlayerIDToLabel(int32 ID);
	void GetPlayerText(int32 CharaID, class FText* NameText);
	bool GetPlayerTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetPlayerTableRowDataByID(struct FPlayableCharacterData* OutData, int32 TargetID);
	bool GetPlayerTableRowDataByEnum(struct FPlayableCharacterData* OutData, enum class EPlayableCharacterID TargetID);
	bool GetPlayerTableRowData(struct FPlayableCharacterData* OutData, class FName TargetLabel);
	bool GetPlayerTableAllRows(enum class EBPFuncReturnCode* ReturnCode, TArray<struct FPlayableCharacterData>* OutRows);
	bool GetPlayerPortraitNameImage(int32 CharaID, class UTexture2D** Image);
	bool GetPlayerPortraitImage(int32 CharaID, class UTexture2D** Image, bool IsNight);
	bool GetPlayerPortraitBgImage(int32 CharaID, class UTexture2D** Image, bool IsNight);
	void GetPlayerFieldCommandName(int32 CharaID, class FName* DayFcName, class FName* NightFcName);
	void GetPlayerFieldCommandDetailInPlayerSelect(int32 CharaID, class FName* DayFc, class FName* NightFC);
	void GetPlayerDetailText(int32 CharaID, class FText* DetailText);
	void GetFirstEquipmentLabels(int32 CharaID, TArray<class FName>* OutEquipmentLabels);
	void GetClassText(int32 CharaID, class FText* ClassText);
	void GetCharaVoice(int32 CharaID, bool IsJapanese, TArray<class FName>* VoiceSheet);
};

// 0x28 (0x50 - 0x28)
// Class Majesty.PlayerLocationTrace
class UPlayerLocationTrace : public UObject
{
public:
	uint8                                        Pad_1BC4[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerLocationTrace* GetDefaultObj();

};

// 0x48 (0xF8 - 0xB0)
// Class Majesty.PlayerPropertyComponent
class UPlayerPropertyComponent : public UActorComponent
{
public:
	uint8                                        Pad_1BC8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETRANSPORTATION_TYPE              M_CurrentTransportType;                            // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETRANSPORT_EFFECT                 M_CurrentTransportEffectType;                      // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELEVEL_AREA_TYPE                  M_CurrentLevelArea;                                // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayableCharacterID              M_PlayerCharacterID;                               // 0xBB(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_EnableFCJudge;                                   // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      M_RefTalkCharacter;                                // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AEventTriggerBox*                      M_RefEventTriger;                                  // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASwitchIndoorTrigger*                  M_RefSwitchIndoorTrigger;                          // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsPTC_CheckSwitchIndoorTrigger;                  // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsMissionRecord_CheckSwitchIndoorTrigger;        // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsPTC_SwitchIndoorTriggerEndOverlapIgnore;       // 0xDA(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BCA[0x1D];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerPropertyComponent* GetDefaultObj();

	void SetRefTalkCharacter(class AKSCharacterBase* Val);
	void SetRefSwitchIndoorTrigger(class ASwitchIndoorTrigger* Val);
	void SetRefEventTriger(class AEventTriggerBox* Val);
	enum class EPlayableCharacterID SetPlayerID(enum class EPlayableCharacterID ID);
	void SetMissionRecord_CheckSwitchIndoorTrigger(bool bIsTriiger);
	void SetEnableFCJudge(bool Val);
	enum class ETRANSPORTATION_TYPE SetCurrentTransportType(enum class ETRANSPORTATION_TYPE Value);
	enum class ETRANSPORT_EFFECT SetCurrentTransportEffectType(enum class ETRANSPORT_EFFECT Value);
	enum class ELEVEL_AREA_TYPE SetCurrentLevelArea(enum class ELEVEL_AREA_TYPE Value);
	bool IsMissionRecord_CheckSwitchIndoorTrigger();
	class AKSCharacterBase* GetRefTalkCharacter();
	class ASwitchIndoorTrigger* GetRefSwitchIndoorTrigger();
	class AEventTriggerBox* GetRefEventTriger();
	enum class EPlayableCharacterID GetPlayerID();
	bool GetEnableFCJudge();
	enum class ETRANSPORTATION_TYPE GetCurrentTransportType();
	enum class ETRANSPORT_EFFECT GetCurrentTransportEffectType();
	enum class ELEVEL_AREA_TYPE GetCurrentLevelArea();
	void ClearReferenceObject();
};

// 0xF0 (0x3B0 - 0x2C0)
// Class Majesty.WorldMapIconBase
class UWorldMapIconBase : public UAcqUserWidget
{
public:
	struct FWorldMapTable                        M_WorldMapData;                                    // 0x2C0(0x90)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FName                                  M_WorldMapDataLabel;                               // 0x350(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                M_GuildIds;                                        // 0x358(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_IsCurrentLocation;                               // 0x368(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsDestinationLocation;                           // 0x369(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsExistsGuild;                                   // 0x36A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWorldMapDestinationData>      M_OccurringStoryList;                              // 0x370(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_IsSelecting;                                     // 0x380(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsPlayingAnimation;                              // 0x381(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_StartOpacity;                                    // 0x384(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_FinishOpacity;                                   // 0x388(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_AnimDurationTime;                                // 0x38C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_AnimElapseTime;                                  // 0x390(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWorldMapStoryInfoDisplayBase*> M_StoryInfoDisplays;                               // 0x398(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UVerticalBox*                          M_StoryInfoVerticalBox;                            // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWorldMapIconBase* GetDefaultObj();

	bool UpdateVisibility(bool IsInScreen);
	void UpdateAnimation(float DeltaTime);
	void StartStoryInfoDisplayAnimIfNeeded(enum class EWorldMapZoomType ZoomType, bool IsFast);
	void StartIcconVisibilityTransitionByZoomType(enum class EWorldMapZoomType ZoomType);
	bool StartFocus(bool IsFocus, bool IsFast);
	bool StartEnable(bool IsFast);
	bool StartDisable(bool IsFast);
	void SetWorldMapData(class FName Label);
	void SetupStoryInfoDisplays(TArray<struct FWorldMapDestinationData>& StoryList);
	void SetupIconImage();
	void SetupIconColor();
	void SetupIcon();
	struct FVector2D SetPosition(struct FVector2D& NewPos);
	void SetIsSelecting(bool IsSelecting);
	void SetIsDestinationLocation(bool IsDestinationLocation);
	void ScrubAnimation(float ElapsedTime);
	bool IsVisitedGuild();
	bool IsVisited();
	bool IsDisplayableIcon(enum class EWorldMapZoomType ZoomType);
	bool InitVisibility(enum class EWorldMapZoomType ZoomType);
	void InitIsFocusOfStoryInfoDisplays(enum class EWorldMapZoomType ZoomType);
	float IconAnimInterpolation(float& Start, float& End, float Alpha);
	void HideAllStoryInfoWidget();
	struct FWorldMapIconData GetWorldMapIconData();
	class FName GetWorldMapDataLabel();
	struct FWorldMapTable GetWorldMapData();
	TArray<class UWorldMapStoryInfoDisplayBase*> GetVisibleStoryInfoWidget();
	struct FVector2D GetSnapPosition();
	struct FVector2D GetPosition();
	struct FVector2D GetOverlapArea();
	bool GetIsSelecting();
	bool GetIsPlayeingAnimation();
	bool GetIsOnlyOccurringMerchantSubStory();
	bool GetIsOccurringStoryByCategory(enum class EMAIN_STORY_CATEGORY StoryCategory);
	bool GetIsOccurringMainStory();
	bool GetIsOccurringAnyStory();
	bool GetIsDestinationLocation();
	bool GetIsCurrentLocation();
};

// 0x0 (0x3B0 - 0x3B0)
// Class Majesty.PlayerSelectIconBase
class UPlayerSelectIconBase : public UWorldMapIconBase
{
public:

	static class UClass* StaticClass();
	static class UPlayerSelectIconBase* GetDefaultObj();

	void UpdateFlipBook();
	struct FVector2D GetSnapPositionOffset();
};

// 0xB0 (0x160 - 0xB0)
// Class Majesty.PotentialityActionComponent
class UPotentialityActionComponent : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           M_cPlayerStatusUI;                                 // 0xB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           M_cPlayerSubStatusUI;                              // 0xC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nResumeBoostPoint;                               // 0xC8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nResumeActionPoint;                              // 0xCC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPotentialityActionData               M_cPotentialityActionData;                         // 0xD0(0x80)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	enum class EPOTENTIALITY_ACTION_TYPE         M_eUniqueActionType;                               // 0x150(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nActionPoint;                                    // 0x154(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nActionPointMax;                                 // 0x158(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bActionReady;                                    // 0x15C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bActionExec;                                     // 0x15D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bDoubleActionExec;                               // 0x15E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bIsExecBreakAct;                                 // 0x15F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPotentialityActionComponent* GetDefaultObj();

	void SetPotentialityActionPoint(int32 NNewActionPoint);
	void SetPlayerSubStatusUI(class UUserWidget* CPlayerStatusUI);
	void SetPlayerStatusUI(class UUserWidget* CPlayerStatusUI);
	void SetExecBreakAct(bool bExecBreakAct);
	bool ResumeUnusedPotentialityAction();
	bool RecoveryPotentialityActionPoint(int32 NValue);
	bool OnPotentialityAction_Common();
	bool OnPotentialityAction();
	bool OffPotentialityAction_Common(bool bCancel);
	bool OffPotentialityAction(bool bCancel);
	bool IsPotentialityActionReady();
	bool IsPotentialityActionPointMax();
	bool IsPotentialityActionExec();
	bool IsPotentialityActionAvailable();
	void InitPotentialityAction(const struct FPotentialityActionData& CActionData, int32 NActionPoint);
	enum class EPOTENTIALITY_ACTION_TYPE GetUniquePotentialityAction();
	void GetPotentialityActionPoint(int32* OutActionPoint, int32* OutActionPointMax);
	struct FPotentialityActionData GetPotentialityActionData();
	void GetPotentialityActionCommandText(class FName* OutActionCommandName, class FName* OutActionCommandDetail);
	TArray<class FName> GetPotentialityActionAbility();
	void FullPotentialityActionPoint();
	bool FinishPotentialityAction();
	bool ExecPotentialityAction();
	void Debug_SetPotentialityActionPointMax(int32 NValue);
	void Debug_SetPotentialityActionPoint(int32 NValue);
	bool CheckEnablePotentialityAction(enum class EPOTENTIALITY_ACTION_TYPE EActionType);
	void AddPotentialityActionPoint(int32 NAddActionPoint, bool bIgnoreAddAbility);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.PotentialityActionDataUtility
class UPotentialityActionDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UPotentialityActionDataUtility* GetDefaultObj();

	bool ReleasePotentialityAction(enum class EPlayableCharacterID CharacterID);
	bool IsReleasePotentialityAction(enum class EPlayableCharacterID CharacterID);
	bool GetPotentialityActionDataByPlayableCharacterID(struct FPotentialityActionData* OutData, enum class EPlayableCharacterID CharacterID, bool LogEnable);
	bool GetPotentialityActionData(struct FPotentialityActionData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x50 (0x3A8 - 0x358)
// Class Majesty.PotentialityActionDetailBase
class UPotentialityActionDetailBase : public UKSUserWidgetBase
{
public:
	class UKSTextBlock*                          M_pTitleText;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSTextBlock*                          M_pDetailText;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      M_pOpenAnimation;                                  // 0x368(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      M_pCloseAnimation;                                 // 0x370(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      M_pForceCloseAnimation;                            // 0x378(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      M_pForceOpenAnimation;                             // 0x380(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fCloseTime;                                      // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD9[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPotentialityActionDetailBase* GetDefaultObj();

	void SetText(class FName TitleLabel, class FName DetailLabel);
	void Open();
	void ForceOpen();
	void ForceClose();
	void Close();
};

// 0x10 (0x2D0 - 0x2C0)
// Class Majesty.PotentialityActionGageBase
class UPotentialityActionGageBase : public UAcqUserWidget
{
public:
	float                                        M_CurrentValue;                                    // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_MaxValue;                                        // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayableCharacterID              M_PlayableCharacterId;                             // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsDead;                                          // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BDA[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPotentialityActionGageBase* GetDefaultObj();

	void SetValue(float CurrentValue, float MaxValue, bool IsSkipAnim);
	void Setup(enum class EPlayableCharacterID PlayableCharacterId);
	void PlayOpenAnimation();
	void PlayCloseAnimation();
	void OnRevival();
	void OnDead();
};

// 0x20 (0x240 - 0x220)
// Class Majesty.ProceduralBuilding
class AProceduralBuilding : public AActor
{
public:
	TArray<struct FOptionalParts>                M_acOptionalPartsList;                             // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>          M_acStaticMeshComponentList;                       // 0x230(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralBuilding* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class Majesty.ProceduralBuildingMeshList
class UProceduralBuildingMeshList : public UObject
{
public:
	struct FProceduralBuildingMeshDataSet        M_cBuildingMesh;                                   // 0x28(0xE8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralBuildingMeshList* GetDefaultObj();

};

// 0xE8 (0x308 - 0x220)
// Class Majesty.ProceduralLinePlace
class AProceduralLinePlace : public AActor
{
public:
	TArray<class UStaticMeshComponent*>          M_acStaticMeshComponentList;                       // 0x220(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_Root_St;                                      // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_Root_Lp;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_Root_End;                                     // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_YZ_Top_St;                                    // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_YZ_Top_Lp;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_YZ_Top_End;                                   // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_YZ_Mdl_St;                                    // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_YZ_Mdl_Lp;                                    // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_YZ_Mdl_End;                                   // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XY_Top_St;                                    // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XY_Top_Lp;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XY_Top_End;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XY_Mdl_St;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XY_Mdl_Lp;                                    // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XY_Mdl_End;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ2_Top_St;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ2_Top_Lp;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ2_Top_End;                                 // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ2_Mdl_St;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ2_Mdl_Lp;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ2_Mdl_End;                                 // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ3_Top_St;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ3_Top_Lp;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ3_Top_End;                                 // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ3_Mdl_St;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ3_Mdl_Lp;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh_XYZ3_Mdl_End;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralLinePlace* GetDefaultObj();

	void ReleaseBase();
};

// 0x20 (0x240 - 0x220)
// Class Majesty.ProceduralPlant
class AProceduralPlant : public AActor
{
public:
	TArray<class UStaticMeshComponent*>          M_acStaticMeshComponentList;                       // 0x220(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FPlantResourceData>            M_ResourceData;                                    // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralPlant* GetDefaultObj();

	void ReleaseBase();
};

// 0x30 (0x250 - 0x220)
// Class Majesty.ProceduralRandomPlant
class AProceduralRandomPlant : public AActor
{
public:
	TArray<class UStaticMeshComponent*>          M_acStaticMeshComponentList;                       // 0x220(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         M_bCanUpdate;                                      // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bCanBackPlant;                                   // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bCanResetRandomSeed;                             // 0x232(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bCanIsNextPlant;                                 // 0x233(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nRandomSeedCount;                                // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRandomStream                         M_cRandomStream;                                   // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPlantResourceData>            M_ResourceData;                                    // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralRandomPlant* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Majesty.ProceduralStairs
class AProceduralStairs : public AActor
{
public:
	TArray<class UStaticMeshComponent*>          M_StaticMeshList;                                  // 0x220(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralStairs* GetDefaultObj();

	void ReleaseBase();
};

// 0x0 (0x210 - 0x210)
// Class Majesty.PureImage
class UPureImage : public UImage
{
public:

	static class UClass* StaticClass();
	static class UPureImage* GetDefaultObj();

};

// 0xA0 (0x3F8 - 0x358)
// Class Majesty.RadarMapBase
class URadarMapBase : public UKSUserWidgetBase
{
public:
	TMap<class FName, struct FRadarMapIconParam> M_DestinationIconParam;                            // 0x358(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct FRadarMapDisplayData>     M_PositionOverlapPrevention;                       // 0x3A8(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URadarMapBase* GetDefaultObj();

	bool SetRadarMapVisible(bool IsVisible);
	bool SetBackTitle();
	bool RemoveIcon_AllSubStoryEventTrigger();
	bool RemoveIcon_AllMapObject();
	bool RemoveIcon_AllLevelTrigger();
	bool RemoveIcon_AllFieldNpc();
	void RemoveDestinationIconParam(class FName DestinationLabel);
	void RemoveAllDestinationIconParam();
	bool RefreshLevelTriggerIcon();
	bool RefreshAllIcon();
	void OnRefreshSpawnComplete(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void NextSwitch(bool* IsVisible);
	void ModifyDestinationIconParam(class FName DestinationLabel, struct FRadarMapIconParam& IconParam);
	struct FRadarMapIconParam GetDestinationIconParam(class FName DestinationLabel);
	bool ExistsDestinationIconParam(class FName DestinationLabel);
	class FString Debug_GetAllDestinationIconParam();
	bool ClearIcon();
	bool CheckTreasureBoxIcon(int32 TreasureIndex);
	bool CheckHiddenPointIcon(int32 PointIndex);
	bool AddIcon(int32* AttachIndex, class FName DestinationLabel, enum class ERADARMAP_ICON_TYPE IconType, enum class ERADARMAP_ICON_OBJ_TYPE ObjType, uint8 LevelTriggerID, class FName NextFieldName, class FName TargetObjectName, const struct FVector& Position, int32 TreasureIndex, enum class EGameColor GameColor, enum class EGameColor RippleColor, int32 TargetCharaID);
	void AddDestinationIconParam(class FName DestinationLabel, struct FRadarMapIconParam& IconParam);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.RadarMapUtility
class URadarMapUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class URadarMapUtility* GetDefaultObj();

	bool Setup();
	void RefreshRadarMap();
	void NotifyRadarMapDb(class FName DbName, enum class EDBNoticeType Notice);
	void GetSubStoryDestinationLevelTriggerInLevel(TArray<enum class ELevelTriggerID>* OutMainStoryLvTrigIdList, TArray<enum class ELevelTriggerID>* OutSubStoryLvTrigIdList, class FName LevelName);
	void GetDestinationSubPlacementInLevel(TArray<struct FRadarMapDisplayData>* OutIconPlacement, class FName LevelName);
	void GetDestinationPlacementInLevel(TArray<struct FRadarMapDisplayData>* OutIconPlacement, class FName LevelName);
	void GetDestinationLevelTriggerInLevel(TArray<enum class ELevelTriggerID>* OutLevelTriggerIdList, class FName LevelName);
	bool GetDestinationDataByMainStory(struct FRadarMapDestinationData* OutRow, class FName MainStory, class FName LevelName, enum class ELEVEL_AREA_TYPE LevelAreaType);
	bool GetDestinationData(struct FRadarMapDestinationData* OutRow, class FName Label);
};

// 0x0 (0x260 - 0x260)
// Class Majesty.RankWidgetBase
class URankWidgetBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class URankWidgetBase* GetDefaultObj();

	void SetupRankList();
	void SetRank(int32 Rank);
};

// 0x40 (0x260 - 0x220)
// Class Majesty.ReferenceSequencer
class AReferenceSequencer : public AActor
{
public:
	class ALevelSequenceActor*                   M_pDeepThinkActor;                                 // 0x220(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   M_pDeepDirectingActor;                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BDF[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        M_pDeepDirecting;                                  // 0x250(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BE0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AReferenceSequencer* GetDefaultObj();

	void StopReferenceSequencer(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	void StartDeepThink(class FName TagName, const struct FVector& AddOffset);
	void StartDeepDirecting();
	void SetToolsTimeZone(enum class ETimeZoneType ETime);
	void SetDeepThinkParameter(class FName TagName, const struct FVector& Offset);
	void SetDeepDirectingAttachPlayer(class AActor* DeepDirectingActor, bool Enable);
	void SetDeepDirectingAttachCamera(class AActor* DeepDirectingActor, bool Enable);
	enum class ETimeZoneType GetToolsTimeZone();
	class FName GetDeepThinkTagName();
	struct FVector GetDeepThinkOffset();
	class ULevelSequence* GetDeepThink();
	class ULevelSequence* GetDeepDirecting();
	void EndDeepThink();
	void EndDeepDirecting();
	void CreateSequenceActor();
	void AllStopSequencer();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ReminiscenceDataUtility
class UReminiscenceDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UReminiscenceDataUtility* GetDefaultObj();

	void GetReminiscenceMergeByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FReminiscenceMergeSetting* OutReminiMergeData, class FName ReminiMergeLabel);
	void GetReminiscenceDataByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FReminiscenceSetting* OutReminiData, class FName ReminiLabel);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ReminiscenceUtility
class UReminiscenceUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UReminiscenceUtility* GetDefaultObj();

	bool StartPrologueReminiscenceFromMainMenu(enum class EPlayableCharacterID PlayerCharaId);
	bool StartPrologueReminiscenceFromBarMenu(enum class EPlayableCharacterID PlayerCharaId);
	bool StartPrologueReminiscence(enum class EPlayableCharacterID PlayerCharaId);
	bool StartPlayableReminiscenceByLabel(class FName ReminiscenceLabel);
	bool StartPlayableReminiscence(int32 ReminiscenceId);
	bool SkipPrologueReminiscence(enum class EPlayableCharacterID PlayerCharaId);
	bool SetupFirstEquipmentOnSkipReminiscence(int32 ReminisceceId, TArray<class FName>* AddedItemLabels);
	void SetReturnLevelAfterReminiscence();
	void SetPlayReminiscenceFromMainMenu(bool bFromMainMenu);
	void SetPlayingReminiscence(bool bPlaying);
	void SetCompletedPrologueReminiscence(enum class EPlayableCharacterID PlayerCharaId, bool bCompleted);
	void RestorePlayerPlacementForPartyChat(class UObject* WorldContextObject, struct FReminiscenceRestorePlacement& backupData);
	bool RestorePartyOnPrologueReminiscence();
	bool RestorePartyOnPlayableReminiscence();
	void JoinPlayerCharacter(enum class EPlayableCharacterID PlayerCharaId, bool* OutResult, bool* OutIsAddMainMember);
	bool IsPlayReminiscenceFromMainMenu();
	bool IsPlayingReminiscence();
	bool IsPlayingPrologueReminiscence();
	bool IsPlayingPastReminiscence();
	bool IsCompletedPrologueReminiscence(enum class EPlayableCharacterID PlayerCharaId);
	struct FPlayerLocation GetReturnLevelAfterReminiscence();
	bool ExistsReturnLevelAfterReminiscence();
	bool EndPrologueReminiscence();
	bool EndPlayableReminiscence();
	void Debug_GetReminiscenceDebugInfo(class FString* OutDebugInfo);
	void ClearReturnLevelAfterReminiscence();
	bool BackupPlayerPlacementForTheater(class UObject* WorldContextObject, struct FReminiscenceRestorePlacement& OutBackupData);
};

// 0x0 (0x220 - 0x220)
// Class Majesty.ResidentGameBase
class AResidentGameBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class AResidentGameBase* GetDefaultObj();

	class AActor* SpawnDebugAcor(const class FString& KSDebugPath);
};

// 0x0 (0xB0 - 0xB0)
// Class Majesty.RevivalObjectManageComponent
class URevivalObjectManageComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class URevivalObjectManageComponent* GetDefaultObj();

	void OnStartLevelChange(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.RevivalObjectManageHelper
class URevivalObjectManageHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URevivalObjectManageHelper* GetDefaultObj();

	void RegisterRevivalObject(struct FKSObjectData& ObjectData, struct FPlacementData& PlacementData);
};

// 0x50 (0x138 - 0xE8)
// Class Majesty.RichEventCommandBase
class URichEventCommandBase : public UEventCommandBase
{
public:
	uint8                                        Pad_1C3F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsGameOverFinish;                                  // 0xF0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEVENTGAMEOVER_STATE              EGameOverState;                                    // 0xF1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C40[0x1A];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeEndTime;                                       // 0x10C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          FadeEndColor;                                      // 0x110(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ParticipationIndex;                                // 0x120(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEVENTDIALOG_MODE                 DialogMode;                                        // 0x124(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectDialogIndex;                                 // 0x128(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SelectLabelName;                                   // 0x12C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C42[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URichEventCommandBase* GetDefaultObj();

	void VisibleTalkTaxtData(const class FString& Name, class FName NameLabel, const class FString& Message, class FName MessageLabel);
	void StopSubSequenceIndexFunction(int32 NIndex);
	void StopSubSequenceFunction();
	void StopSubSequenceAction(class ULevelSequencePlayer* Sequence);
	void StopResidentSubSequencerFunction();
	void StartResidentSubSequencerFunction(const class FString& Loop);
	void StartPreparationBattleFunction(const class FString& EnemyGroupID, const class FString& FinishEvent);
	void StartPreparationBattleExec(struct FEventData& EventData);
	void StartFlashbackFunciton(class FName ResourceName, float EndTime, const struct FLinearColor& FadeColor);
	void StartFinalBattleFunction(const class FString& EnemyGroupID, const class FString& FinishEvent);
	void StartFinalBattleExec(struct FEventData& EventData);
	void StartEventBattle(struct FEventData& EventData);
	void StartEndCardFunciton(enum class EPlayableCharacterID Character);
	void StartDeepThinkResidentFunction(int32 SeqIndex, class FName TagName, const struct FVector& Offset);
	void StartDeepThinkFunction(int32 NIndex, class FName TagName, const struct FVector& Offset);
	void StartDeepDirectingFunction();
	void StartCharaFadeFunction(class AKSCharacterBase* EventChara, bool Visible, float FadeTime);
	void StartBattleFunction(const class FString& EnemyGroup, const class FString& FinishEvent, bool EventBattle, bool SingleBattle, enum class EPlayableCharacterID EventBattleChara, enum class EPlayableCharacterID FixFirstOrderPlayer, bool DarkSurface);
	void StartBattleBitFlagFunction(const class FString& EnemyGroup, const class FString& FinishEvent, bool EventBattle, enum class EPlayableCharacterID EventBattleChara, enum class EPlayableCharacterID FixFirstOrderPlayer, int32 FlagIndex);
	void SpawnThiefActionFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EKSCharacterAction ActionLabelName, enum class EKSCharacterAnimationLoop LoopSetting);
	void SpawnPartyPositionCharaFunction(class AKSCharacterBase* EventChara, int32 PartyPosition, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EKSCharacterAction ActionLabelName, enum class EKSCharacterAnimationLoop LoopSetting);
	void SpawnPartnerCharaFunction(class AKSCharacterBase* EventChara, class FName CharaLabelName, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EHUNTER_PARTNER_ID PartnerID);
	void SpawnParticipationOrderCharaFunction(class AKSCharacterBase* EventChara, int32 Index, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EKSCharacterAction ActionLabelName, enum class EKSCharacterAnimationLoop LoopSetting);
	void SpawnFirstSelectCharaFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EKSCharacterAction ActionLabelName, enum class EKSCharacterAnimationLoop LoopSetting);
	void SpawnEventEffectPartnerFunction(int32 ID, class FName EffectLabel, float LifeTime, const struct FVector& Pos, const struct FRotator& Rotate, const struct FVector& Scale, class FName CharacterLabel, enum class EHUNTER_PARTNER_ID PartnerID);
	void SpawnEventEffectFunction(int32 ID, class FName EffectLabel, float LifeTime, const struct FVector& Pos, class FName CharacterLabel);
	void SpawnEventCharaEffectFunction(class AKSCharacterBase* EventChara, int32 ID, class FName EffectLabel, float LifeTime, const struct FVector& Pos);
	void SpawnCharaActionFunction(class AKSCharacterBase* EventChara, class FName CharaLabelName, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EKSCharacterAction ActionLabelName, enum class EKSCharacterAnimationLoop LoopSetting);
	void SpawnCharaActionFootStepFunction(class AKSCharacterBase* EventChara, class FName CharaLabelName, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EKSCharacterAction ActionLabelName, enum class EKSCharacterAnimationLoop LoopSetting, bool FootStep);
	void SpawnAtlantisPartyCharaFunction(class AKSCharacterBase* EventChara, enum class EKSPartySet PartySetID, int32 PartyPosition, enum class EKSCharacterDir SetDir, class FName AddTagName, enum class EKSCharacterAction ActionLabelName, enum class EKSCharacterAnimationLoop LoopSetting);
	float SetUpFrameNumber(float Time);
	void SetSubSequenceOptionFunction(int32 Index, class FName OptionName);
	void SetOpenEventGameOverUI();
	void SetOpenCloseDoorFunction(class FName TargetBP, bool DoorOpen, bool IgnoreSE);
	void SetHouseModeTheaterFunction(bool In, class FName TargetBP, bool DoorOpen);
	void SetGravityModeFunction(class AKSCharacterBase* EventChara, bool Enable);
	void SetFlipbookPlayRateFunction(class AKSCharacterBase* EventChara, float Rate);
	void SetFlipbookPlayRateAllFunction();
	void SetEnableFootStepSoundFunction(bool Enable);
	void SetEnableCharacterFootStepFunction(class AKSCharacterBase* EventChara, bool Enable);
	void SetEnableActorBillboardFunction(class FName TargetTag, bool Enable);
	void SetBitFlagFunction(int32 Index, bool Flag);
	void SequencerFrameJumpFunction(int32 FrameNumber);
	void SequencerFrameBitFlagJumpFunction(int32 FrameNumber, int32 FlagIndex);
	void RestartSubSequenceReditentFunction(int32 NIndex);
	void RestartSubSequenceFunction(int32 NIndex);
	void RestartMainSequencerFunction();
	void ResetFlipbookPlayRateFunction();
	bool RemoveEventEffectFunction(int32 ID);
	void PostEffectSepiaFunction(class UCameraComponent* TargetCamera, bool Enable);
	void PostEffectSepiaFadeFunction(class UCameraComponent* TargetCamera, bool Enable);
	void PostEffectMonochromeParamFunction(class UCameraComponent* TargetCamera, const struct FVector& Scale);
	void PostEffectMonochromeFunction(class UCameraComponent* TargetCamera, bool Enable);
	void PostEffectMonochromeFadeFunction(class UCameraComponent* TargetCamera, bool Enable);
	void PlayRichEventSeLabelFunction(enum class ESE_TYPE SELabel);
	void PlayRichEventPartnerSeFunction(class FName StrSeLabel, enum class EHUNTER_PARTNER_ID PartnerID);
	void PlayFieldCommandDialogFunction();
	void PlayEditorSound(class USoundAtomCue* SoundData);
	void ParticipationOrderFrameJumpFunction(const struct FJumpFrameSet& FrameSetData, int32 EndFrame);
	void OpenTutorialUIFunciton(enum class ETUTORIAL_TYPE TutorialType, bool Force);
	void OpenSelectDialogVariableTypeFunction(class FName TalkLabel, class FName SelectTextLabel1, class FName JumpLabelName1, class FName SelectTextLabel2, class FName JumpLabelName2, class FName SelectTextLabel3, class FName JumpLabelName3, class FName SelectTextLabel4, class FName JumpLabelName4);
	void OpenSelectDialogNextEventFunction(class FName TalkLabel, class FName SelectTextLabel1, int32 SelectSubSeqIndex1, class FName SelectTextLabel2, int32 SelectSubSeqIndex2);
	void OpenSelectDialogLabelJumpFunction(class FName TalkLabel, class FName SelectTextLabel1, class FName JumpLabelName1, class FName SelectTextLabel2, class FName JumpLabelName2);
	void OpenMapNotificationUIFunciton(class FName LevelLabel);
	void OpenKenshiTutorialUIFunciton();
	void OpenGetItemDialogFunction(class FName TalkLabel, class FName ItemLabel_1, int32 ItemNum_1, class FName ItemLabel_2, int32 ItemNum_2, class FName ItemLabel_3, int32 ItemNum_3, class FName ItemLabel_4, int32 ItemNum_4);
	void OpenEventGameOverUIFunciton(class FName JumpLabel);
	void OpenChoiceAnswerDialogFunction(class FName TalkLabel, class FName SelectTextLabel1, class FName JumpLabelName1, class FName SelectTextLabel2, class FName JumpLabelName2, int32 AnswerIndex);
	void NotificationEditorDrawText(const class FString& RegionName, const class FString& LevelName);
	void NarrationWaitFunction();
	void NarrationEditorDrawText(const TArray<class FString>& NarrationText, const class FString& AutoTime);
	void MoveSpotLightTargetFunction(class AActor* Actor, const struct FVector& AddOffset);
	void MoveSpotLightResidentFunction(class AActor* Actor, const struct FVector& AddOffset);
	void MessagePauseFunction();
	void MapObjectVisibleParentFunction(class FName TagName, bool Enable);
	void MapObjectVisibleFunction(class FName TagName, bool Enable);
	void MapObjectRefreshFunction();
	void LoadFlashbackDataFunciton(class FName ResourceName);
	bool IsEventFadeOutEnd();
	bool IsEventFadeInEnd();
	void Initialize();
	int32 GetTrackNum(int32 Count);
	class FName GetTrackName(class UMovieSceneTrack* Track);
	TArray<class UMovieSceneTrack*> GetTrackData(int32 Count);
	class FString GetTargetSequenceName(class UMovieSceneSubSection* Section);
	class FString GetMovieSectionsName(int32 Count);
	class UMovieSceneSection* GetMovieSectionsData(int32 Count);
	int32 GetMovieSectionsCount();
	class FString GetMovieBindingName(int32 Count);
	int32 GetMovieBindingCount();
	void FirstSelectCharaFrameJumpFunction(const struct FJumpFrameSet& FrameSetData);
	void Finalize();
	void FadeOutTypeSelectFunction(enum class EEVENT_FADE_TYPE FadeType, const struct FLinearColor& Color);
	void FadeInTypeSelectFunction(enum class EEVENT_FADE_TYPE FadeType, const struct FLinearColor& Color);
	void EventFadeOutUIFunction(float EndTime, const struct FLinearColor& Color);
	void EventFadeInUIFunction(float EndTime);
	void EndFlashbackFunciton(float EndTime);
	void EndDeepThinkResidentFunction(int32 SeqIndex);
	void EndDeepThinkFunction(int32 NIndex);
	void EndDeepDirectingFunction();
	bool DialogUpdate();
	void DeepDirectingStartEndAttachFunction(class AActor* Actor);
	void DeepDirectingAttachPlayerFunction(bool Enable);
	void DeepDirectingAttachCameraFunction(bool Enable);
	void DancerSongFrameJumpFunction(int32 ChapterIndex, int32 Frame1, int32 Frame2, int32 Frame3);
	bool CheckTimeZoneEditor(enum class ETimeZoneType Zone);
	void CheckObjectTimeZoneFunction(class USceneComponent* ActorComponent, enum class ETimeZoneType Zone);
	void ChangeTimeZoneFunction(enum class ETimeZoneType Zone);
	void ChangeActionCharaTagNameFunction(class FName TargetTag, enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir);
	void CallHideBattleWipeFunction();
	void BalloonOpenSubSequenceFunction(class FName TalkTargetTag, enum class EEventBalloonDir BalloonDir, class FName TalkText, float AutoTalkWait, const struct FVector2D& Offset, bool StopSubSeq);
	void BalloonOpenPartnerFunction(class FName TalkTargetTag, enum class EEventBalloonDir BalloonDir, class FName TalkTextA, class FName TalkTextB, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, const struct FVector2D& Offset, bool WithoutTail);
	void BalloonOpenLabelPositionFunction(class FName TalkTargetTag, enum class EEventBalloonDir BalloonDir, class FName TalkText, float AutoTalkWait, const struct FVector2D& Offset, bool StopMainSeq, float PlaybackSubSeqPosition, bool WithoutTail);
	void BalloonOpenDeepThinkingFixedFunction(enum class EBALLOON_TEXT_POS BalloonPos, class FName TalkText, float AutoTalkWait, bool IsCustomFadeTime, float FadeOutTime, bool StopMainSeq);
	void AttachCharacterChangeCollisionFunction(class AKSCharacterBase* EventChara, bool Enable);
	void AtlantisCharaFrameJumpFunction(enum class EKSPartySet PartySetID, int32 PartyPosition, const struct FJumpFrameSet& FrameSetData);
};

// 0x80 (0x130 - 0xB0)
// Class Majesty.RichEventCommandObject
class URichEventCommandObject : public UActorComponent
{
public:
	class ULevelSequencePlayer*                  M_pTargetMainSequencePlayer;                       // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsStopMainSequence;                             // 0xB8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fPlaybackSubSeqPosition;                         // 0xBC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fFadeTime;                                       // 0xC0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5B[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FEventEmotion>      EventEmotionList;                                  // 0xE0(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URichEventCommandObject* GetDefaultObj();

	void TitlePauseFunction();
	void SubSequencePlayIndexFunction(int32 NNumLoops, float FSubSeqPlayPosition, int32 NIndex);
	void SubSequencePlayFunction(int32 NNumLoops, float FSubSeqPlayPosition);
	void StopSubSequenceIndexFunction(int32 NIndex);
	void StopSubSequenceFunction();
	void StopSubSequenceAction(class ULevelSequencePlayer* Sequence);
	void StopRichEventBgmFunction(float FFadeOutTime);
	void StopEmotionFunction(class FName TagName);
	void StartPlayEmotionFunction(class FName TagName, enum class EEMOTION_TYPE EmotionType, float LifeTime, const struct FVector& Offset);
	void StartCameraSpawnFunction(enum class EKSCameraType CameraType, float FBlend);
	void StartBattleFunction(const class FString& EnemyGroup, const class FString& FinishEvent, bool EventBattle);
	void SpawnCharaFunction(class AKSCharacterBase* EventChara, class FName CharaLabelName, enum class EKSCharacterDir SetDir, class FName AddTagName);
	void ShowDebugInfoTextFunction(const class FString& Text, float Time);
	void SetSubSequenceOptionFunction(int32 Index, class FName OptionName);
	void SetPlayerPositionFunction(const struct FVector& Position);
	void SetHouseModeFunction(bool In, class FName TargetBP, bool DoorOpen);
	void RestartSubSequenceFunction(int32 NIndex);
	void PlayRichEventSeFunction(class FName StrSeLabel);
	void PlayRichEventBgmMapFunction(float FFadeOutTime, float FFadeInTime);
	void PlayRichEventBgmFunction(class FName StrBgmLabel, float FFadeOutTime, float FFadeInTime);
	void PlayRichEventBgmBlockFunction(int32 NBlockId);
	void NarrationPlayFunction(class FName StrNarrationLabel, bool StopMainSequence, float FPlaybackSubSeqPosition);
	class FName MoveSpotLightTargetFunction(class AActor* Actor, const struct FVector& AddOffset);
	void InitSeqData();
	void FadeOutTypeSelectFunction(enum class EEVENT_FADE_TYPE FadeType, const struct FLinearColor& Color);
	void FadeOutFunction(float EndTime, const struct FLinearColor& Color);
	void FadeInTypeSelectFunction(enum class EEVENT_FADE_TYPE FadeType, const struct FLinearColor& Color);
	void FadeInFunction(float EndTime, const struct FLinearColor& Color);
	void End();
	void DetachCharacterFunction(class AKSCharacterBase* EventChara);
	void ChangeVolumeEnvFunction(float FVolume, float FFadeTime);
	bool ChangeUpdateCommand(enum class ERICHEVENT_CMD EType);
	void ChangeCameraFunction(enum class EKSCameraType CameraType, float FBlend);
	void ChangeActionFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir);
	void BalloonOpenLabelPlayerFunction(enum class EBalloonType BalloonType, enum class EEventBalloonDir BalloonDir, class FName TalkTargetName, class FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition);
	void BalloonOpenLabelFunction(class FName TalkTargetTag, enum class EBalloonType BalloonType, enum class EEventBalloonDir BalloonDir, class FName TalkTargetName, class FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition);
	void BalloonOpenFunction(class FName TalkTargetTag, enum class EBalloonType BalloonType, enum class EEventBalloonDir BalloonDir, class FName TalkTargetName, const class FString& TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition);
	void AttachPlayerFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterDir SetDir);
	void AttachCharacterChangeCollisionFunction(class AKSCharacterBase* EventChara, bool Enable);
	void AttachCharacterActionFunction(class AKSCharacterBase* EventChara, enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir);
};

// 0x0 (0x4C0 - 0x4C0)
// Class Majesty.RichEventEditorComponent
class URichEventEditorComponent : public UPaperFlipbookComponent
{
public:

	static class UClass* StaticClass();
	static class URichEventEditorComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.RichEventSoundPreviewerObject
class URichEventSoundPreviewerObject : public UObject
{
public:

	static class UClass* StaticClass();
	static class URichEventSoundPreviewerObject* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Majesty.SaveDataObject
class USaveDataObject : public UObject
{
public:
	enum class EKSSaveSlotName                   SlotName;                                          // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USaveDataObject* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class Majesty.SaveDataTransfer_Ps4ToPs5
class ASaveDataTransfer_Ps4ToPs5 : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASaveDataTransfer_Ps4ToPs5* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.SaveLoadFunction
class USaveLoadFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USaveLoadFunction* GetDefaultObj();

	void Debug_SetIsForceSaveFailed(bool Val);
	void Debug_SetIsForceAsyncSaveWaitTime(float Val);
	void Debug_SetIsForceAsyncSave(bool Val);
	void Debug_SetIsForceAsyncLoadWaitTime(float Val);
	void Debug_SetIsForceAsyncLoad(bool Val);
	void Debug_AcqSaveGameByFileName(const class FString& Filename, FDelegateProperty_& SavedDelegate);
	void Debug_AcqLoadGameByFileName(const class FString& Filename, FDelegateProperty_& LoadedDelegate, enum class ESaveDataLoadTarget LoadTarget);
	void AcqSaveSystemData(FDelegateProperty_& SavedDelegate);
	void AcqSaveGame(enum class EKSSaveSlotName SlotNo, FDelegateProperty_& SavedDelegate);
	class UKSSaveSystem* AcqLoadSystemDataNoCallback(enum class ESaveDataLoadTarget LoadTarget);
	void AcqLoadSystemData(FDelegateProperty_& LoadedDelegate, enum class ESaveDataLoadTarget LoadTarget);
	void AcqLoadGame(enum class EKSSaveSlotName SlotNo, FDelegateProperty_& LoadedDelegate, enum class ESaveDataLoadTarget LoadTarget);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.ScreenCaptureBase
class UScreenCaptureBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UScreenCaptureBase* GetDefaultObj();

	void OpenUIWithTexture(class FName ResourceLabel);
	void OpenUI(bool PlayNoise);
	bool NoiseFinish();
	void CloseUI();
};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.SelectPlayerStatusBase
class USelectPlayerStatusBase : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class USelectPlayerStatusBase* GetDefaultObj();

	float GetBoostGaugeLoopTime();
};

// 0x10 (0x840 - 0x830)
// Class Majesty.SequencerCineCamera
class ASequencerCineCamera : public ACineCameraActor
{
public:
	enum class ESEQ_CAMERA_MODE                  M_ESeqMode;                                        // 0x830(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fLimitTime;                                      // 0x834(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fNowTime;                                        // 0x838(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C8F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASequencerCineCamera* GetDefaultObj();

	void UpdateSepiaStart(class UCameraComponent* TargetCamera, float DeltaTime);
	void UpdateSepiaEnd(class UCameraComponent* TargetCamera, float DeltaTime);
	void UpdateMonochromeStart(class UCameraComponent* TargetCamera, float DeltaTime);
	void UpdateMonochromeEnd(class UCameraComponent* TargetCamera, float Scale);
	void SetupCamera(class AActor* PTarget);
	void ChangeSepiaMode(float ChangeTime, bool Enable);
	void ChangeMonochromeMode(float ChangeTime, bool Enable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SequencerResourceDBUtility
class USequencerResourceDBUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USequencerResourceDBUtility* GetDefaultObj();

	bool GetSequencerResourceDataRow(struct FSequencerResourceData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SeVibrationTableUtility
class USeVibrationTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USeVibrationTableUtility* GetDefaultObj();

	bool GetSeVibrationTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetSeVibrationRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FSeVibrationData* OutData, int32 TargetID, bool LogEnable);
	bool GetSeVibrationRowData(enum class EBPFuncReturnCode* ReturnCode, struct FSeVibrationData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ShopDataUtility
class UShopDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UShopDataUtility* GetDefaultObj();

	bool GetShopTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames, enum class EShopDataType Type);
	bool GetShopListRowData(struct FLabelListData* OutData, class FName TargetLabel);
	bool GetShopInfoRowDataByID(struct FShopInfoData* OutData, int32 TargetID);
	bool GetShopInfoRowData(struct FShopInfoData* OutData, class FName TargetLabel);
	bool GetPurchaseItemRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FPurchaseItemInfoData* OutData, int32 TargetID);
	bool GetPurchaseItemRowData(enum class EBPFuncReturnCode* ReturnCode, struct FPurchaseItemInfoData* OutData, class FName TargetLabel);
	class FName GetPurchaseItemLabelById(int32 ID);
	int32 GetPurchaseItemIdByLable(class FName& Label);
};

// 0x0 (0x368 - 0x368)
// Class Majesty.ShopMenuWidgetBase
class UShopMenuWidgetBase : public UKSUserWidgetWithState
{
public:

	static class UClass* StaticClass();
	static class UShopMenuWidgetBase* GetDefaultObj();

	void SetParam(class FName ShopLabel, bool ForceDefaultBar, bool FromNPC);
	void OpenExBar();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.ShopUtility
class UShopUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UShopUtility* GetDefaultObj();

	bool IsLineUpItemInShop(struct FPurchaseItemInfoData& PurchaseItemData);
	enum class ESHOP_CATEGORY_TYPE GetShopCategoryByItemData(struct FItemData& ItemData);
	void CreateShopItemListDataForAnimalShop(class FName& ShopLabel, TArray<struct FMJListWidgetItemData>* OutListWidgetDataList, TArray<class FName>* OutItemLabelList, TArray<struct FPurchaseItemInfoData>* OutPurchaseItemDataList);
	void CreateShopItemListData(class FName& ShopLabel, TArray<struct FMJListWidgetItemData>* OutListWidgetDataList, TArray<class FName>* OutItemLabelList, TArray<struct FPurchaseItemInfoData>* OutPurchaseItemDataList);
};

// 0x8 (0x370 - 0x368)
// Class Majesty.SingleMenuWidgetBase
class USingleMenuWidgetBase : public UKSUserWidgetWithState
{
public:
	uint8                                        Pad_1CD6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleMenuWidgetBase* GetDefaultObj();

	bool StorySelectOpen(class FName WorldMapLabel);
	void SetPauseWhileRunning(bool bPause);
	bool GetPauseWhileRunning();
	bool EventFieldCommandBattleOpen(class FName NPCLabel);
};

// 0x0 (0x220 - 0x220)
// Class Majesty.SkillManager
class ASkillManager : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASkillManager* GetDefaultObj();

};

// 0x3C0 (0x5F0 - 0x230)
// Class Majesty.SoundManager
class ASoundManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1D2F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bPauseBattleGaya;                                // 0x238(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bPauseEventGaya;                                 // 0x239(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowMenuSeRequest;                                 // 0x23A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowSeRequest;                                     // 0x23B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowEnvSoundInfo;                                  // 0x23C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowBgmInfo;                                       // 0x23D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowCategoryVolume;                                // 0x23E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowLoadedCueSheet;                                // 0x23F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Show3DSeRequest;                                   // 0x240(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowListenerPoint;                                 // 0x241(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowListeningPoint;                                // 0x242(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowAISACParam;                                    // 0x243(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D31[0x44];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAtomComponent*>                M_AtomComponents;                                  // 0x288(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UAtomComponent>> M_3DSEComponents;                                  // 0x298(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, class USoundAtomCueSheet*> M_LoadedCueSheet;                                  // 0x2A8(0x50)(NativeAccessSpecifierPrivate)
	TArray<class FName>                          M_CueSheetsForEvent;                               // 0x2F8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, class USoundAtomCue*>      M_LoadedCue;                                       // 0x308(0x50)(NativeAccessSpecifierPrivate)
	class UMJSoundListenerComponent*             M_pcListenerComp;                                  // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D33[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAtomComponent*>                M_CommonSeAtom;                                    // 0x368(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D34[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAtomComponent*>                M_EventSeAtom;                                     // 0x380(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, class UAtomComponent*>     M_UsedEventSeAtom;                                 // 0x390(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D36[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         WaitFadeIn;                                        // 0x420(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AEnvSound*>                     M_pEnvSoundTriggers;                               // 0x428(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        M_pEnvSoundInterfaceObjects;                       // 0x438(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         M_bEndCollect;                                     // 0x448(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_PlayVoiceCueName;                                // 0x44C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundData                            M_CurentBGM;                                       // 0x458(0x48)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FSoundData                            M_NextChangeBGM;                                   // 0x4A0(0x48)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FSoundData                            M_PauseBGM;                                        // 0x4E8(0x48)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D41[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundData                            CurrentPlayingMusicRecord;                         // 0x540(0x48)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FSoundData                            LastPlayedNormalBGM;                               // 0x588(0x48)(BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPlayMusicRecorad;                                // 0x5D0(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStopMusicRecorad;                                // 0x5E0(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASoundManager* GetDefaultObj();

	void UpdateBgmChangeTimeZone(struct FLevelInfoData& RLevelInfo);
	void UnregisterLoadedSoundCue(class FName CueLabel);
	bool UnloadEventCueSheet();
	bool UnloadCueSheetByName(class FName CueSheetName);
	bool StopVoice(float FadeOutTime);
	void StopAllSe();
	void SetWaitFadeIn(bool WaitFadeIn);
	void SetVolume(enum class EKSVolumeType VolType, float Volume);
	void SetupSelector();
	void SetupEnvSoundOnCollect(enum class ETimeZoneType ETimeZone);
	bool SetupBattleChangeEnvSound(bool bIsBattle);
	bool SetFadeCategoryVolumeForEvent(enum class EACF_CATEGORY Category, float Volume, float Time);
	bool SetFadeCategoryVolume(enum class EACF_CATEGORY Category, float Volume, float Time);
	void SetDspBusToSeAndVoice(enum class EKSDspBusType DspBusType);
	void SetDspBusToComponent(enum class EKSDspBusType DspBusType, class UAtomComponent* Component);
	void SetDeviceVolume(enum class EKSDeviceVolumeType DevVolType, float DeviceVolume);
	void SetCurrentBGMSelector(bool bIsDayTime);
	bool SetCategoryVolumeByName(const class FString& CategoryName, float Volume);
	bool SetCategoryVolume(enum class EACF_CATEGORY Category, float Volume);
	bool SetBgmSelector(class FName SelectorName, class FName SelectorLabel);
	bool SetBgmNextBlockIndex(int32 BlockIndex);
	void SetAISACVolume(const class FString& StrAisacName, float FValue);
	void ResumeEnvGaya(bool bBattle, bool bEvent);
	bool RestoreBgmBeforePlayMusicRecord(float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	void ResetEnvCollect(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	bool RequestStopMusicRecord(float FadeOutTime);
	bool RequestStopLoopSe(int32 HandleId);
	bool RequestStopFadeBgm(float FadeOutTime, bool StopBoth);
	bool RequestStopBGM();
	void RequestStopAllEventSe();
	bool RequestPlayVoiceByLabel(class FName VoiceLabel);
	bool RequestPlayTitleBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool IsDayTime, bool bIsDebugPlay);
	bool RequestPlaySeByLabel(class FName SELabel);
	bool RequestPlayMusicRecord(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	bool RequestPlayLoopSe(int32 HandleId, class FName SELabel);
	bool RequestPlayInterruptBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority);
	bool RequestPlayFadeMapChangeBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	bool RequestPlayFadeBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	void RequestPlayEventSeByRowName(const class FString& SeName);
	void RequestPlayEventSeByLabel(class FName SELabel, bool* Success);
	void RequestPlayBgmByLabel(class FName BgmLabel, int32 Priority, bool* Success, struct FSoundData* BeforSoundData);
	void RequestPlayBgmById(int32 BGMID, int32 Priority, bool* Success, struct FSoundData* BeforSoundData);
	void RequestPlayBattleVoiceByLabel(class FName VoiceLabel, bool* Success, class FString* CueName, float* Duration);
	void RequestPlayBattleSeByLabel(class FName SELabel, bool* Success);
	bool RequestPlay3DSeWithComponent(class UAtomComponent* Component, class FName BgmLabel);
	void RequestFadeOutAllEventSe(float FadeOutTime);
	void RequestChangeEnvSound(enum class ETimeZoneType ETimeZone);
	void RegisterLoadedSoundCue(class FName CueSheetName, class FName CueLabel, class USoundAtomCue* SoundCue);
	bool RefreshCharacterVoiceResource(TArray<class FName>& TempCharaVoices);
	void PauseEnvGaya(bool bBattle, bool bEvent);
	bool OnLevelShown();
	void OnLevelHidden();
	bool LoadEventCueSheetByEventName(class FString& CueSheetName);
	bool LoadCueSheetByName(class FName CueSheetName);
	bool IsRequestChangeEnvSound();
	bool IsEventSeFadeOut();
	bool IsEndCollect();
	bool IsAtomPlaying(enum class EKSAudioComponentType CompType);
	bool IsAtomPaused(enum class EKSAudioComponentType CompType);
	float GetVolume(enum class EKSVolumeType VolType);
	class FName GetPlayingBgmLabelOnMusicPlayer();
	void GetLoopSeHandle(int32* HandleId, bool* Success);
	class USoundAtomCue* GetLoadedCue(class FName CueName);
	class FName GetLastPlayedNormalBGMLabel();
	class UAtomComponent* GetEventAtomComponent(class FName CueSheetName);
	float GetDeviceVolume(enum class EKSDeviceVolumeType DevVolType);
	class FName GetCurrentBgmLabel();
	void GetCurrentBgmData(struct FSoundData* PlayingBgmData);
	bool GetCueSheetAssetPath(class FName CueSheetName, class FName* OutAssetPath);
	float GetCategoryVolumeForEvent(enum class EACF_CATEGORY Category);
	float GetCategoryVolume(enum class EACF_CATEGORY Category);
	void GetBgmSelectorInfo();
	class FString GetAtomCueName(enum class EKSAudioComponentType EType);
	class UAtomComponent* GetAtomComponent(enum class EKSAudioComponentType CompType);
	void FinishChangeEnvSound();
	void Debug_UnregisterAllSoundCue();
	void Debug_ShowEnvSoundInfo(bool Show);
	void Debug_SetShowDeviceVolume(bool Show);
	void Debug_GetLoadedCueSheetNames(class FString* OutCueSheetNames);
	void Debug_GetCategoryInfo(class FString* OutDebugInfo);
	void Debug_GetAtomInfo(class FString* OutDebugInfo);
	void Debug_Get3DSoundInfo(class FString* Out3DSoundInfo);
	bool Debug_ChangeSEOnDecided(struct FDebugListMenuItem& MenuItem);
	void Debug_ChangeSEListClose();
	class UAtomComponent* CreateAndAttach3DSEComponent(class AActor* TargetActor);
	bool ChangeNextBgmFadeInTime(float FadeIn);
	void ChangeListenerPoint(enum class ELISTENER_TYPE EType, class USceneComponent* PParentComponent);
	void ChangeFocusPointDistanceLevel(float FDistanceLevel);
	bool ChangeCurrentBgmFadeOutTime(float FadeOut);
	float CalcSeEnvVolume();
	void BattleChange_SetupEnvSE(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	bool ApplyEnvVolume();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SoundTableUtility
class USoundTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USoundTableUtility* GetDefaultObj();

	bool GetVoiceJaRowData(enum class EBPFuncReturnCode* ReturnCode, struct FSoundVoiceData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetVoiceEnRowData(enum class EBPFuncReturnCode* ReturnCode, struct FSoundVoiceData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetSoundTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames, enum class ESoundTableType Type);
	bool GetSeRowData(enum class EBPFuncReturnCode* ReturnCode, struct FSoundSEData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetCueSheetRowData(enum class EBPFuncReturnCode* ReturnCode, struct FKSCueSheetData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetBgmRowData(enum class EBPFuncReturnCode* ReturnCode, struct FBgmInfoData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SpActMerchantUtility
class USpActMerchantUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USpActMerchantUtility* GetDefaultObj();

	bool MakeSpecialActionDataForMenu(class FName SpActLabel, struct FSpActionMerchant_MenuData* OutSpActData);
	class FText MakeDescriptionText(struct FSpActionMerchant_Data& SpActData);
	void GetSpActionTypeByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FSpActionMerchant_Type* OutType, class FName TypeLabel);
	void GetSpActionDataByNpcId(enum class EBPFuncReturnCode* ReturnCode, struct FSpActionMerchant_Data* OutData, int32 NPCID);
	void GetSpActionDataByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FSpActionMerchant_Data* OutData, class FName DataLabel);
	bool ExecMerchantSpecialAction_WithoutNpc(struct FSpActMerchantResult* OutResult, enum class ESPACT_MER_TRIGGER_TYPE Trigger, int32 OriginalPrice);
	bool ExecMerchantSpecialAction_WithNpc(struct FSpActMerchantResult* OutResult, int32 NPCID, enum class ESPACT_MER_TRIGGER_TYPE Trigger, int32 OriginalPrice);
	bool CheckMerchantSpecialAction_WithoutNpc(enum class ESPACT_MER_TRIGGER_TYPE Trigger);
};

// 0x0 (0x470 - 0x470)
// Class Majesty.SpawnPointBillboardComponent
class USpawnPointBillboardComponent : public UBillboardComponent
{
public:

	static class UClass* StaticClass();
	static class USpawnPointBillboardComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.SpecialActionDataUtility
class USpecialActionDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USpecialActionDataUtility* GetDefaultObj();

	int32 SpecialActionLabelToID(class FName Label);
	class FName SpecialActionIDToLabel(int32 ID);
	bool GetSpecialActionTableRowDataByEnum(struct FSpecialActionData* OutData, enum class ESpecialActionType SpecialActionType);
	bool GetSpecialActionTableRowData(struct FSpecialActionData* OutData, class FName Label);
	bool GetProcessItemNumData(struct FProcessItemNum* OutData, int32 ID);
	int32 GetProcessItemNum(int32 ID, int32 RemainCallNum);
	int32 GetLegendSeaMonsterIndex(int32 Normal, int32 Awake, int32 AwakeAfter);
	class FName GetHunterPartnerMonsterLabelById(enum class EHUNTER_PARTNER_ID PartnerID, bool IgnoreAwakening);
	class FName GetHunterPartnerMonsterLabel();
	class FName GetHunterPartnerActionLabelById(enum class EHUNTER_PARTNER_ID PartnerID);
	class FName GetHunterPartnerActionLabel();
};

// 0x140 (0x1F0 - 0xB0)
// Class Majesty.SplineMoveComponent
class USplineMoveComponent : public UActorComponent
{
public:
	uint8                                        Pad_1D97[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bNearPlayer;                                     // 0xB8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D98[0xF3];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fPathZ;                                          // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_fPow;                                            // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_fBaseCheck;                                      // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_fOverCheckDistance;                              // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        M_nChangeDirCnt;                                   // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        M_nChangeDirCntDef;                                // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        M_fArrivalDistance;                                // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_fPathDistance;                                   // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPathSplineComponent*                  M_pPath;                                           // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D9D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fMoveDiffCheck;                                  // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D9E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USplineMoveComponent* GetDefaultObj();

	bool SetUpSplineData(class UPathSplineComponent* UGetSpline, enum class EPATH_TYPE EType);
	void SetUpFieldPathData(const struct FFieldPathInfoData& InfoData);
	void SetSplineMovePointSetting(class USplineComponent* USpline);
	void SetMoveStopEvent(bool Enable);
	void SetFirstPosition(class USplineComponent* USpline);
	bool NPCCharacterMoving(class USplineComponent* USpline, float FDeltaTime, float FWaitTime, float FSearchRange);
	bool IsEndPointArrived(class USplineComponent* USpline);
	bool GetNowMoveSpeed(class USplineComponent* USpline);
	class FString GetDebugSplineMoveParam();
	float GetCurrentSplinePosition(class USplineComponent* USpline);
	bool CheckTalkEffectVisible();
	void CheckNearPlayer(float FWaitTime, float FSearchRange);
	bool CheckContactPlayerInterval(float FDeltaTime);
	bool CalcStartCheck(float FDelatTime);
};

// 0x28 (0x390 - 0x368)
// Class Majesty.StaffCreditParent
class UStaffCreditParent : public UKSUserWidgetWithState
{
public:
	TArray<class UStaffCreditWidgetBase*>        CreditPartsList;                                   // 0x368(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            CreditTable;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TotalStagingTime;                                  // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ViewportHeight;                                    // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DisolvePartsTime;                                  // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DB6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStaffCreditParent* GetDefaultObj();

	bool WipeOut(float PlayTime);
	bool WipeIn(float PlayTime);
	bool StartStaging();
	bool SetupStaffCredit();
	void SetTotalStagingTime(float TotalStagingTime);
	void SetNextState_Local(enum class EStaffCreditState NextState);
	void SetDataTable(class UDataTable* CreditTable);
	bool SetBackground(enum class ECreditBgType bgType, class FName ImageName);
	bool ReleaseAll();
	bool IsWidgetOutOfViewport(class UStaffCreditWidgetBase* CreditWidget);
	bool IsDisplayDebugInfo();
	enum class EStaffCreditState GetPrevState_Local();
	enum class EStaffCreditState GetCurrentState_Local();
	void DebugUpdate();
	class UStaffCreditWidgetBase* CreateCreditWidget(enum class ECreditWidgetType WidgetType);
	bool CheckCompleteScroll();
	bool AddCreditWidgetToScrollList(class UStaffCreditWidgetBase* CreditWidget);
};

// 0x28 (0x2E8 - 0x2C0)
// Class Majesty.StaffCreditWidgetBase
class UStaffCreditWidgetBase : public UAcqUserWidget
{
public:
	uint8                                        Pad_1DD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             WidgetSize;                                        // 0x2C4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DD1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_IsScrollWidget;                                  // 0x2CD(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DD2[0x1A];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStaffCreditWidgetBase* GetDefaultObj();

	bool UpdateStaging(float StagingTime);
	bool Setup(TArray<struct FStaffCreditTable>& ItemArray);
	void SetStagingTime(float StartTime, float StagingTime);
	void SetStagingPositionY(float StartY, float EndY);
	void SetScrollWidget(bool IsScroll);
	void SetCreditWidgetType(enum class ECreditWidgetType Type);
	void SetCanvasPosition(struct FVector2D& Pos);
	void SetActive(bool IsActive);
	bool IsScrollWidget();
	bool IsComplete();
	bool IsActive();
	float GetWidgetWidth();
	struct FVector2D GetWidgetSize();
	float GetWidgetHeight();
	float GetStartTime();
	enum class ECreditWidgetType GetCreditWidgetType();
	struct FVector2D GetCanvasPosition();
	void CalcWidgetSize();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SteamUtility
class USteamUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USteamUtility* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.StoryDataUtility
class UStoryDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UStoryDataUtility* GetDefaultObj();

	int32 SubStoryLabelToId(class FName SubStoryLabel);
	class FName SubStoryIdToLabel(int32 SubStoryId);
	bool StartMainStoryFromNewGame(int32 PlayerCharaId);
	void RefreshMainStoryRelease(int32 MainStoryId);
	void RefreshAllMainStoryState();
	void RefreshAllMainStoryRelease();
	void NotifySubStoryDB(class FName DbName, enum class EDBNoticeType Notice);
	void NotifyMainStoryDB(class FName DbName, enum class EDBNoticeType Notice);
	int32 MainStoryTaskLabelToId(class FName MainStoryTaskLabel);
	class FName MainStoryTaskIdToLabel(int32 MainStoryTaskId);
	int32 MainStoryLabelToId(class FName MainStoryLabel);
	class FName MainStoryIdToLabel(int32 MainStoryId);
	bool IsSubStoryDataExists(class FName SubStoryLabel);
	bool IsStorySealed(enum class EStoryState StoryState);
	bool IsStoryCompleted(enum class EStoryState StoryState);
	bool IsMerchantSubStory(class FName SubStoryLabel);
	bool IsMainStoryTaskDataExists(class FName MainStoryTaskLabel);
	bool IsMainStoryPrologue(int32 MainStoryId);
	bool IsMainStoryPlayableStateById(int32 MainStoryId);
	bool IsCompletedMainStoryCharacterFinalChapter(int32 PlayerCharaId);
	bool IsAnyCharacterPlayingMainStory();
	TArray<class FName> GetTutorailSubStoryLabels();
	class FName GetSubStoryTitleTextLabel(class FName SubStoryLabel);
	bool GetSubStoryRowNames(TArray<class FName>* OutRowNames);
	int32 GetSubStoryNumInAllArea();
	int32 GetSubStoryNumByAreaId_WithoutMerchantSubStory(int32 AreaID);
	int32 GetSubStoryNumByAreaId(int32 AreaID);
	int32 GetSubStoryMissionIndex(class FName SubStoryLabel);
	TArray<class FName> GetSubStoryLabelsInAllArea();
	TArray<class FName> GetSubStoryLabelsByAreaId(int32 AreaID);
	int32 GetSubStoryLabelsArrayIndex(class FName SubStoryLabel);
	class FName GetSubStoryLabelByAreaIdAndArrayIndex(int32 AreaID, int32 ArrayIndex);
	void GetSubStoryDataByRowName(enum class EBPFuncReturnCode* ReturnCode, struct FSubMissionData* OutStoryData, class FName SubStoryLabel);
	TArray<class FName> GetSubStoryCommonLabels();
	int32 GetSubStoryAreaId(class FName SubStoryLabel);
	class FName GetMainStoryTaskTitleTextLabel(class FName MainStoryTaskLabel);
	bool GetMainStoryTaskRowNames(TArray<class FName>* OutRowNames);
	int32 GetMainStoryTaskProgressValue(class FName MainStoryTaskLabel);
	void GetMainStoryTaskLabelsByCharaIdWithBranch(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutLabelList, int32 PlayerCharaId);
	TArray<class FName> GetMainStoryTaskLabelsByCharaId(int32 PlayerCharaId);
	void GetMainStoryTaskLabelList(TArray<class FName>* OutTaskLabelList, int32 MainStoryId, enum class ESTORY_TASK_TYPE TaskType);
	void GetMainStoryTaskDataByRowName(enum class EBPFuncReturnCode* ReturnCode, struct FMainMissionData* OutStoryData, class FName MainStoryTaskLabel);
	class FName GetMainStoryNextTask(class FName MainStoryTaskLabel);
	class FName GetMainStoryLabelFromTask(class FName MainStoryTaskLabel);
	void GetMainStoryIdListInWorldMap(TArray<int32>* OutMainStoryIdList, class FName WorldMapLabel);
	float GetMainStoryGaugeMaxValue(enum class EPlayableCharacterID CharacterID);
	int32 GetMainStoryDifficultyPoint(int32 MainStoryId);
	bool GetMainStoryDataById(int32 MainStoryId, struct FMainStoryData* OutData);
	void GetMainStoryCurrentTaskData(enum class EBPFuncReturnCode* ReturnCode, struct FMainMissionData* OutStoryData, int32 PlayerCharaId);
	int32 GetMainStoryCharacterPrologueId(int32 PlayerCharaId);
	int32 GetMainStoryCharacterFinalChapterId(int32 PlayerCharaId);
	void GetMainStoryCharacterAllPrologueId(TArray<int32>* OutPrologueId, int32 PlayerCharaId);
	TArray<class FName> GetMainStoryAllLabels();
	void GetFastTravelPermissionByCharaId(enum class EBPFuncReturnCode* ReturnCode, bool* OutUnavailableFastTravel, class FName* OutAuthorizationFastTravel, int32 PlayerCharaId);
	bool GetExtraStoryIdByExCategory(TArray<int32>* OutMainStoryId, enum class EEXTRA_STORY_CATEGORY ExCategory);
	float GetExtraStoryGaugeMaxValue(enum class EEXTRA_STORY_CATEGORY ExtraStory);
	bool GetExtraStoryAllId(TArray<int32>* OutMainStoryId);
	bool GetCharacterMainStoryIdForStoryRecord(TArray<int32>* OutMainStoryId, int32 PlayerCharaId);
	bool GetCharacterMainStoryAllId(TArray<int32>* OutMainStoryId, int32 PlayerCharaId);
	class FName GetChapterText(int32 MainStoryId);
	bool GetAllSubStoryIds(TArray<int32>* OutIds);
	void Debug_SetReleaseAllStoryRecord(bool bRelease);
	bool Debug_IsReleasedAllStoryRecord();
	bool Debug_IsIgnoreMainStoryReleased();
	void Debug_IgnoreMainStoryReleased(bool bIgnore);
	bool CheckMainStoryReleaseConditionById(int32 MainStoryId);
	bool CheckMainStoryReleaseConditionByData(struct FMainStoryData& MainStoryData);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.StoryFunction
class UStoryFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStoryFunction* GetDefaultObj();

	bool UpdateMainStoryProgressOnPlayEvent(class FName MainStoryTaskLabel);
	void UpdateMainStoryProgressCount(class FName MainStoryLabel, int32 ProgressCount);
	void UpdateFixedFieldBgmOnChangeLevel(class FName MainStoryTask);
	void UpdateExtraStoryProgressCount(enum class EEXTRA_STORY_CATEGORY ExStoryCategory, int32 ProgressCount);
	void UpdateCharaMainStoryProgressCount(int32 PlayerCharaId, int32 ProgressCount);
	bool StartSubStory(class FName SubStoryLabel);
	void SetPlayingEpilogue(bool bPlaying);
	bool SetMainStoryTaskViewFlag(class FName MainStoryTaskLabel, bool PlayingFlag);
	void SetMainStoryEventFlags(int32 MainStoryId, bool bFlag);
	void SetMainStoryAllTaskCleared(int32 MainStoryId, bool bCleared);
	bool ResumeMainStorySpecifiedChara(int32 PlayerCharaId);
	bool ResumeMainStory(int32 MainStoryId);
	void ResetMainStoryData(int32 MainStoryId);
	void RecoveryConnectionOnPrologueTown(enum class EPlayableCharacterID PlayerCharaId);
	void MakeWorldMapDestinationList(TArray<struct FWorldMapDestinationData>* OutDestData);
	class FText MakeSubStoryStartConditionFailedText(class FName SubStoryLabel);
	bool IsSubStoryRecordAreaOpend(int32 AreaID);
	bool IsReleasedMerchantShip();
	bool IsPlayingPrologue(int32 PlayerCharaId);
	bool IsPlayingOverallFinalChapter();
	bool IsPlayingMainScenarioInCurrentLevel(int32 CharacterScenarioType);
	bool IsPlayingEpilogue();
	bool IsOverallFinalChapterInProgress();
	bool IsMapRelatedCharaPrologue(class FName LevelName, enum class EPlayableCharacterID CharaID);
	bool IsCompletedSubStory(class FName SubStoryLabel);
	bool IsCompletedOverallFinalChapter();
	bool IsCompletedAllCouplingStory();
	bool IsAnyCharaPlayingPrologue();
	bool IsAnyCharaCompletedFinalChapter();
	bool IsAllCharaCompletedFinalChapter();
	bool Is1stSelectedCharaCompletedFinalChapter();
	bool InterruptMainStorySpecifiedChara(int32 PlayerCharaId);
	void InterruptMainStoryForSubMembers();
	bool InterruptMainStory(int32 MainStoryId);
	int32 GetSubStoryState(class FName SubStoryLabel);
	int32 GetPlayingPrologueReminiscenceIndex();
	void GetPlayingMainStoryInLevel(TArray<int32>& OutMainStoryIdList, class FName LevelName);
	int32 GetPlayingMainStoryID(int32 PlayerCharaId);
	bool GetPlayablePrologueList(TArray<int32>& OutPlayableCharaID);
	void GetPlayableMainStoryListInWorldMap(TArray<struct FBarMenuStoryItem>& OutMainStoryList, class FName WorldMapLabel);
	int32 GetMainStoryTaskTargetCharacterId(class FName MainStoryTaskLabel);
	enum class EBARMENU_STORY_SELECT_ITEM_TYPE GetMainStoryStateInStorySelectMenu(int32 MainStoryId);
	float GetMainStoryRecordGaugeLength(int32 PlayerCharaId);
	int32 GetMainStoryProgressCountFromStoryId(int32 MainStoryId);
	int32 GetMainStoryProgressCount(int32 PlayerCharaId);
	class FName GetFixedFieldBgm(class FName LevelName);
	float GetExtraStoryRecordGaugeLength(enum class EEXTRA_STORY_CATEGORY ExCategory);
	int32 GetExtraStoryProgressCount(enum class EEXTRA_STORY_CATEGORY ExStoryCategory);
	void GetCharaIdListPlayingMainStoryInLevel(TArray<int32>& OutCharaIdList, class FName LevelName, bool IncludeInterruption);
	void GetAllCompletedMainStoryIds(TArray<int32>* IDs);
	int32 GetActiveMainStoryID(int32 PlayerCharaId);
	void Debug_SetupJustBeforeFinalChapter(bool bPartnerA);
	void Debug_ModifyMainStoryState(int32 MainStoryId, enum class EStoryState StoryState, bool bPlayLastEvent);
	void Debug_CompleteMainStoryInProgress(int32 PlayerCharaId);
	void CreateSubStoryRecordDataListItem(TArray<struct FMAINMENU_MISSION_RECORD_DATA>& OutRecordData, int32 AreaID);
	void CreateSubStoryAllRecordDataListItem(TArray<struct FMAINMENU_MISSION_RECORD_DATA>& OutRecordData);
	void CreateMainStoryRecordDataListItemByStoryId(TArray<struct FMAINMENU_MISSION_RECORD_DATA>& OutTaskInfo, TArray<struct FMJListWidgetItemData>& OutListItemData, int32 MainStoryId, int32 CategoryId);
	void ControlMainStoryEventObjectOnInterruptFromBar(int32 MainStoryId, bool bInterrupt);
	void ControlMainStoryEventObjectOnInterrupt(class FName MainStoryLabel, bool bInterrupt, bool bRefreshObject);
	bool CompleteSubStory(class FName SubStoryLabel, int32 ClearIndex);
	bool CompleteFakeSubStory(class FName SubStoryLabel);
	bool CheckSubStoryStartCondition(class FName SubStoryLabel);
	bool CanPlayMainStory(int32 MainStoryId);
	bool CanOpenTutorialByMap(class FName WorldMapLabel);
	bool CanOpenStorySelectByBar(class FName WorldMapLabel);
	bool CanOpenMainStorySelectMenuByMap(class FName WorldMapLabel);
	int32 CalcRecoveryRelationshipCost(int32 TownID);
	float CalcMainStoryTotalProgress();
};

// 0x80 (0x2B0 - 0x230)
// Class Majesty.StoryManager
class AStoryManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1E98[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  M_StartSubStoryLabel;                              // 0x248(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E9A[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AStoryManager* GetDefaultObj();

	bool StartMainStory(class FName MainStoryLabel);
	void ShowSubStoryStartUI();
	void ShowSubStoryResult();
	void OnFinishSubStoryStartEvent();
	void OnFinishSubStoryCompleteEvent();
	void OnFinishMainStoryEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void Debug_StartAutoPlay(const class FString& ScenarioFileName);
	void Debug_ShowDebugInfo(bool bEnable);
	void Debug_PlayMainStoryTaskEvent(int32 MainStoryTaskId, bool bFromStartingTask);
	bool CompleteFakeSubStory(class FName SubStoryLabel);
	void CallbackOnDialogCloseFinish(int32 SelectIndex);
	void CallbackEventEnd(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
};

// 0x0 (0x358 - 0x358)
// Class Majesty.StoryNotificationBase
class UStoryNotificationBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UStoryNotificationBase* GetDefaultObj();

	bool OpenSubStory(class FName TitleLabel, class FName FormatTextLabel);
	bool OpenMarchant(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel);
	bool OpenCoupling(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.StoryRecordBase
class UStoryRecordBase : public UKSUserWidgetBase
{
public:
	bool                                         PlayPartyChat;                                     // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EAF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStoryRecordBase* GetDefaultObj();

	void SetPartyChatPlay(bool Flag);
	bool PreCloseAction();
	bool PartyChatStart();
	bool PartyChatReady();
	bool PartyChatFinish();
	bool GetPartyChatPlay();
};

// 0x68 (0xA0 - 0x38)
// Class Majesty.StoryRecordPartyChatListEntry
class UStoryRecordPartyChatListEntry : public UAcqListViewEntryItemBase
{
public:
	struct FPartyChat                            PartyChatData;                                     // 0x38(0x68)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStoryRecordPartyChatListEntry* GetDefaultObj();

};

// 0x0 (0x2C0 - 0x2C0)
// Class Majesty.StoryRecordPartyChatList
class UStoryRecordPartyChatList : public UAcqUserWidget
{
public:

	static class UClass* StaticClass();
	static class UStoryRecordPartyChatList* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.StorySaveDataUtil
class UStorySaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UStorySaveDataUtil* GetDefaultObj();

	void SetPlayingMainStoryID(int32 PlayerCharaId, int32 MainStoryId);
	bool SetMainStoryTaskTimeZoneOnPlayed(int32 MainStoryTaskId, int32 TimezoneType, int32 TimeZonePosition);
	bool SetMainStoryTaskEventObjectFlag(int32 MainStoryTaskId, int32 Index, int32 FlagID, bool Val);
	void SetMainStoryTaskCleared(int32 MainStoryTaskId, bool bCleared);
	void SetMainStoryState(int32 MainStoryId, enum class EStoryState State);
	void SetMainStoryRecordNew(int32 MainStoryTaskId, bool bNew);
	void SetMainStoryCurrentTaskID(int32 MainStoryId, int32 CurrentTaskID);
	void SetInterruptedMainStoryID(int32 PlayerCharaId, int32 MainStoryId);
	void SetConfirmedMainStory(int32 MainStoryId, bool Flag);
	void SetAutoInterruptMainStoryId_ByPrologue(int32 MainStoryId);
	void SetAutoInterruptMainStoryId(int32 MainStoryId);
	bool IsUnPlayedMainStory(int32 MainStoryId);
	bool IsMainStoryTaskCleared(int32 MainStoryTaskId);
	bool IsConfirmedMainStory(int32 MainStoryId);
	bool IsCompletedMainStory(int32 MainStoryId);
	int32 GetPlayingMainStoryID(int32 PlayerCharaId);
	int32 GetMainStoryTaskTimeZoneTypeOnPlayed(int32 MainStoryTaskId);
	int32 GetMainStoryTaskTimeZonePositionOnPlayed(int32 MainStoryTaskId);
	bool GetMainStoryTaskSaveData(int32 MainStoryTaskId, struct FMainStoryTaskSaveData* OutMainStoryTaskSaveData);
	void GetMainStoryTaskEventObjectFlag(int32 MainStoryTaskId, int32 Index, int32* FlagID, bool* Val);
	enum class EStoryState GetMainStoryState(int32 MainStoryId);
	bool GetMainStorySaveData(int32 MainStoryId, struct FMainStorySaveData* OutMainStorySaveData);
	bool GetMainStoryRecordNew(int32 MainStoryTaskId);
	int32 GetMainStoryCurrentTaskID(int32 MainStoryId);
	int32 GetInterruptedMainStoryID(int32 PlayerCharaId);
	int32 GetAutoInterruptMainStoryId_ByPrologue();
	int32 GetAutoInterruptMainStoryId();
	bool GetAllPlayingMainStoryIDs(TArray<int32>* OutMainStoryIds);
	void ClearPlayingMainStoryID(int32 PlayerCharaId);
	void ClearInterruptedMainStoryID(int32 PlayerCharaId);
};

// 0x20 (0x48 - 0x28)
// Class Majesty.StreamingLevels
class UStreamingLevels : public UObject
{
public:
	TArray<class ULevelStreamingDynamic*>        M_Field;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class ULevelStreamingDynamic*>        M_Battle;                                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UStreamingLevels* GetDefaultObj();

	bool SetStreamingLevel(enum class ELEVEL_TYPE ELevelType, class ULevelStreamingDynamic* Stream);
	void RemoveLevel(class ULevelStreamingDynamic* UnloadLevel);
	void RemoveAllLevel();
	void RemoveAllFieldLevel();
	void RemoveAllBattleLevel();
	void Init(int32 NFieldArrayBuffer, int32 NBattleArrayBuffer);
	class ULevelStreamingDynamic* GetStreamingLevel(enum class ELEVEL_TYPE ELevelType, int32 NIndex);
	TArray<class ULevelStreamingDynamic*> GetLevels(enum class ELEVEL_TYPE ELevelType);
};

// 0x28 (0xD8 - 0xB0)
// Class Majesty.StyleChangeComponent
class UStyleChangeComponent : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           M_cPlayerStatusUI;                                 // 0xB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBATTLE_STYLE_TYPE                M_eUniqueStyle;                                    // 0xC0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBATTLE_STYLE_TYPE                M_eCurrentStyle;                                   // 0xC1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nStyleChangePoint;                               // 0xC4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nStyleChangePointMax;                            // 0xC8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        M_nResumeBoostPoint;                               // 0xCC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bStyleChangeReady;                               // 0xD0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStyleChangeComponent* GetDefaultObj();

	void SetStyleChangePoint(int32 NNewStyleChangePoint, int32* OutCurrentPoint);
	void SetPlayerStatusUI(class UUserWidget* CPlayerStatusUI);
	bool RecoveryStyleChangePoint(int32 NValue);
	bool OnStyleChange();
	bool OnBreakStyle();
	bool OnBoostStyle();
	bool OffStyleChange(bool bCancel);
	bool OffBreakStyle(bool bCancel);
	bool OffBoostStyle(bool bCancel);
	bool IsStyleChangeReady();
	bool IsStyleChangePointMax();
	bool IsStyleChangeExec();
	bool IsStyleChangeAvailable();
	void InitStyleChange(enum class EBATTLE_STYLE_TYPE EUniqueStyle, int32 NStyleChangePoint, int32 NStyleChangePointMax);
	enum class EBATTLE_STYLE_TYPE GetUniqueStyle();
	void GetStyleChangePoint(int32* OutStyleChangePoint, int32* OutStyleChangePointMax);
	enum class EBATTLE_STYLE_TYPE GetCurrentStyle();
	bool FinishStyleChange();
	bool DecisionStyleChange();
	void Debug_SetStyleChangePointMax(int32 NValue);
	void Debug_SetStyleChangePoint(int32 NValue);
	bool CheckEnableBreakStyle();
};

// 0x148 (0x4A0 - 0x358)
// Class Majesty.SubTitleBase
class USubTitleBase : public UKSUserWidgetBase
{
public:
	struct FSubTitleDataBase                     SubTitleData;                                      // 0x358(0x40)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FName                                  SubTitleLabel;                                     // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EventRequest;                                      // 0x3A0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ECF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AfterEventLabel;                                   // 0x3A4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ED0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, bool>                      M_ChangeEventFlagOnBegin;                          // 0x3B0(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, bool>                      M_ChangeEventFlagOnEnd;                            // 0x400(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, bool>                      M_ChangeEventFlagOnPause;                          // 0x450(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USubTitleBase* GetDefaultObj();

	void Stop(bool* IsNext);
	void SetSubTitleLabel(class FName Label);
	void SetEventOpenRequest(bool IsEventRequest);
	void SetAfterEventLabel(class FName EventLabel);
	void OnFieldChangeFinishCallback(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	bool IsActive();
	int32 GetCurrentBlock();
	class FName GetAfterEventLabel();
	void ForceClose();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SubTitleSaveDataUtil
class USubTitleSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class USubTitleSaveDataUtil* GetDefaultObj();

	void SetViewFlag(int32 SubTitleId, bool Flag);
	void SetStartIndex(int32 SubTitleId, int32 Index);
	bool GetViewFlag(int32 SubTitleId);
	int32 GetStartIndex(int32 SubTitleId);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SubTitleTableUtility
class USubTitleTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USubTitleTableUtility* GetDefaultObj();

	void GetSubTitleTable(enum class EBPFuncReturnCode* ReturnCode, struct FSubTitleDataBase* OutData, class FName Label);
	bool GetSubTitleRowNames(TArray<class FName>* OutRowNames);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SupportAbilityDataTableUtility
class USupportAbilityDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USupportAbilityDataTableUtility* GetDefaultObj();

	bool GetSupportAbilityRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetSupportAbilityRowData(enum class EBPFuncReturnCode* ReturnCode, struct FSupportAbilityDataBase* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.SupportCharacterDataUtility
class USupportCharacterDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class USupportCharacterDataUtility* GetDefaultObj();

	bool GetSupportCharacterTableRowData(enum class EBPFuncReturnCode* ReturnCode, struct FSupportCharacterData* OutData, class FName Label);
	bool GeSupportCharacterTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
};

// 0xA0 (0xC8 - 0x28)
// Class Majesty.SupporterAndEnemyToNpcTableMaker
class USupporterAndEnemyToNpcTableMaker : public UObject
{
public:
	uint8                                        Pad_1ED6[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USupporterAndEnemyToNpcTableMaker* GetDefaultObj();

	bool GetTable(TMap<class FName, class FName>* OutSupporterLabelToNpcLableTable, TMap<class FName, class FName>* OutEnemyLabelToNpcLableTable);
	bool GetEnemyLabelsByEnemyGroup(TArray<class FName>* OutEnemeyLabels, class FName EnemyGroupLabel);
	void BeginMakeTable();
};

// 0x2F8 (0x530 - 0x238)
// Class Majesty.SwitchIndoorTrigger
class ASwitchIndoorTrigger : public AMJBoxTrigger
{
public:
	uint8                                        Pad_1ED9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bEnableGateKeeper;                               // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SwitchVisibilityOnPostTick;                        // 0x241(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Fix_Redmine9113;                                   // 0x242(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Fix_Redmine13664;                                  // 0x243(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AActor>>         M_apcActorIndoor;                                  // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         M_apcTranslucentActorListOnEnter;                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         M_apcActorOutdoor;                                 // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         M_apcTranslucentActorListOnExit;                   // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ASwitchIndoorTrigger>> M_HouseInLink;                                     // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ASwitchIndoorTrigger>> M_HouseOutCancel;                                  // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDB[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fAnimTime;                                       // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nIndoorFloor;                                    // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nOutdoorFloor;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bNotChangeVisible;                               // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bForceOutdoor;                                   // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bNotChangeRenderSetting;                         // 0x2C2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bForceIndoorAtStart;                             // 0x2C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bSkipInitializeProcess;                          // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsBar;                                          // 0x2C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nID;                                             // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseDoor;                                        // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fDoorAnimTime;                                   // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AActor>>         M_apcLightActorIndoor;                             // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         M_apcLightActorOutdoor;                            // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        M_fCharacterScaleIndoor;                           // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fCharacterScaleOutdoor;                          // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fCharacterHeightIndoor;                          // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fCharacterHeightOutdoor;                         // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLockParams                     M_CameraLockParams;                                // 0x308(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        M_fCameraDistanceRateIndoor;                       // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_fManualFocusDistanceIndoor;                      // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nStartEventFlag;                                 // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_nEndEventFlag;                                   // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipLanternData                     M_cEquipLanternDataIndoor;                         // 0x328(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEquipLanternData                     M_cEquipLanternDataOutdoor;                        // 0x348(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEncountFlagStartEndData              M_cEncounTriggerDataIndoor;                        // 0x368(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEncountFlagStartEndData              M_cEncounTriggerDataOutdoor;                       // 0x390(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        M_apcDebugActorIndoor;                             // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        M_apcDebugActorOutdoor;                            // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        M_apcDebugChangeLightChannnel;                     // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bIsOnlyHouseOutSetting;                          // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        M_astrHiddenObjLabelOnEnter;                       // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        M_astrHiddenObjLabelOnExit;                        // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          M_pMPC;                                            // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        M_apcActorIndoorWork;                              // 0x418(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        M_apcTranslucentActorListOnEnterWork;              // 0x428(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        M_apcActorOutdoorWork;                             // 0x438(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        M_apcTranslucentActorListOnExitWork;               // 0x448(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>      M_apcMaterialIndoor;                               // 0x458(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>      M_apcMaterialOutdoor;                              // 0x468(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         M_bIsIndoor;                                       // 0x478(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bIsIndoorPrev;                                   // 0x479(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESWITCH_INDOOR_ANIM_STATE         M_eMaterialAnimState;                              // 0x47A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fMaterialAnimElapsedTime;                        // 0x47C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bInitialized;                                    // 0x480(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         M_pcBorderBox;                                     // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bOverlapBegin;                                   // 0x490(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bOverlapEnd;                                     // 0x491(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_bCheckPartyChatFlag;                             // 0x492(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EE3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  M_pcDoorMeshComponent;                             // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              M_pcDoorMaterial;                                  // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EE5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULightComponent*>               M_apcLightIndoorWork;                              // 0x4B8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ULightComponent*>               M_apcLightOutdoorWork;                             // 0x4C8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<float>                                M_afLightOriginIntensityIndoor;                    // 0x4D8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                M_afLightOriginIntensityOutdoor;                   // 0x4E8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>      M_apcLightMaterialIndoor;                          // 0x4F8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>      M_apcLightMaterialOutdoor;                         // 0x508(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESWITCH_INDOOR_ANIM_STATE         M_eLightAnimState;                                 // 0x518(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fLightAnimElapsedTime;                           // 0x51C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAISACControlComponent*                M_pcSoundAisacIndoor;                              // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAISACControlComponent*                M_pcSoundAisacOutdoor;                             // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ASwitchIndoorTrigger* GetDefaultObj();

	void SetVisibleLightPreview(class AActor* PcActor, bool bVisible);
	void SetVisibleChild(class AActor* PcActor, bool bVisible);
	void SetupFocusLength(bool bIsIndoor);
	bool SetupExit(class AKSCharacterBase* PcPlayer, float FAnimTime, bool bModifyParty, bool bIsForceOutdoor);
	void SetupEnter(float FAnimTime, class AKSCharacterBase* PcPlayer, bool bModifyParty, bool bIsLevelChange);
	void Setup();
	void SetLightChannnelAllHierarchy(class AActor* PcRootActor, bool bIndoor);
	void SetGateKeeperNpc(class AKSCharacterBase* NPC);
	bool OpenDoor(bool PlaySE);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	bool IsVisibleChangeEnable();
	bool IsIndoor(class AKSCharacterBase* PcPlayer);
	bool IsHiddenObjLabelCheck(const class FString& PlaceLabel);
	void InitializeLight();
	int32 GetOutdoorFloor();
	class ASwitchIndoorTrigger* GetLinkHouseTrigger();
	int32 GetIndoorFloor();
	class AKSCharacterBase* GetGateKeeperNpc();
	void ForceOpenDoor();
	void CloseDoor();
	void CheckCollision();
	bool CanOpenDoor();
	void ApplyIndoorToMpcAndPostProcess(bool bIndoor);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.SwitchOverride_PointLightComponent
class USwitchOverride_PointLightComponent : public UPointLightComponent
{
public:
	float                                        M_OverrideAttenuationRadius;                       // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_OverrideLightFalloffExponent;                    // 0x35C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USwitchOverride_PointLightComponent* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Majesty.SystemDataCleanupWorker
class ASystemDataCleanupWorker : public AActor
{
public:
	class UKSSaveSystem*                         M_targetSystemData;                                // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EE7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASystemDataCleanupWorker* GetDefaultObj();

	void StartClearnup(class UKSSaveSystem* SystemData);
	bool GetIsComplete();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.TextDataUtility
class UTextDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UTextDataUtility* GetDefaultObj();

	bool GetTalkVoiceTextTableRowData(struct FTalkVoice* OutData, class FName TargetLabel);
	bool GetTalkVoiceLabel(class FName* OutLabel, class FName TargetLabel, class UObject* WorldContextObject);
	bool GetTalkTextTableRowData(struct FTalkText* OutData, class FName TargetLabel);
	bool GetItemTextTableRowData(struct FGameTextItemInfo* OutData, class FName TargetLabel);
	bool GetGameTextTableRowData(struct FGameTextInfoData* OutData, class FName TargetLabel);
	void GetGameTextString(class FName Label, class FString* OutText);
	class UDataTable* GetGameTextDB(enum class EKSLanguage Lang);
	void GetGameText(class FText* OutText, class FName TargetLabel);
	void GetDialogText(class FText* DetailText, TArray<class FText>* ButtonTexts, class FName TargetLabel, enum class EDIALOG_TEXT_TYPE DialogType);
	bool GetCharaTextTableRowData(struct FGameTextCharaInfo* OutData, class FName TargetLabel);
	bool Debug_SeachTargetText(class FName* OutLabel, class FText TargetText, enum class EKSLanguage Lang);
	void Debug_ResetText();
};

// 0x88 (0x138 - 0xB0)
// Class Majesty.TextOperationComponent
class UTextOperationComponent : public UActorComponent
{
public:
	uint8                                        Pad_1EE9[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMacroData*                            M_MacroData;                                       // 0x130(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTextOperationComponent* GetDefaultObj();

	class FString ExecMacroOperation(const class FString& InputText);
};

// 0x38 (0x60 - 0x28)
// Class Majesty.MacroData
class UMacroData : public UObject
{
public:
	uint8                                        Pad_1EEA[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMacroData*>                    M_ChildrenNodes;                                   // 0x50(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMacroData* GetDefaultObj();

};

// 0x8 (0x268 - 0x260)
// Class Majesty.TimeChangeButton
class UTimeChangeButton : public UUserWidget
{
public:
	class UKSTextBlock*                          M_pMainText;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTimeChangeButton* GetDefaultObj();

	void SetText(class FName ButtonLabel, class FName MainLabel);
};

// 0x10 (0x240 - 0x230)
// Class Majesty.TimeManager
class ATimeManager : public AAcqManagerBase
{
public:
	int32                                        M_nGamePlayTime;                                   // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         M_bGamePlayCountPause;                             // 0x234(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fMillisecond;                                    // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EEC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATimeManager* GetDefaultObj();

	void StartGamePlayTime(float FStartTime);
	void PauseGamePlayTime(bool bPause);
	float GetGamePlayTime();
};

// 0x68 (0x90 - 0x28)
// Class Majesty.TimeOperator
class UTimeOperator : public UObject
{
public:
	uint8                                        Pad_1EED[0x2C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETimeZoneType                     M_eTimeZoneType;                                   // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeZoneType                     M_eNextTimeZoneType;                               // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELEVEL_DARK_STATE                 M_eDarkAreaState;                                  // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeZoneType                     M_eTempTimeZoneType;                               // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelSequenceActor*                   M_pSequencer;                                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEE[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeOperator* GetDefaultObj();

	void SetTimeZoneChangeValueMax(int32 NNewValue);
	void SetTimeZoneChangeValue(int32 NNewValue);
	void SetManualAccelerationTime(float FNewValue);
	void SetAutoAccelerationTime(float FNewValue);
	enum class ETimeZoneType IsNextTimeZoneCheck();
	int32 GetTimeZoneChangeValueMax();
	int32 GetTimeZoneChangeValue();
	bool GetReserveAutoChange();
	float GetManualAccelerationTime();
	enum class ELEVEL_DARK_STATE GetDarkAreaState();
	float GetCurrentSeaquencerNormalizedTime();
	float GetAutoAccelerationTime();
};

// 0x38 (0x390 - 0x358)
// Class Majesty.TimeZoneChangeUI
class UTimeZoneChangeUI : public UKSUserWidgetBase
{
public:
	uint8                                        Pad_1EEF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimeChangeButton*                     M_pTimeChangeButton;                               // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      M_pOpenAnimation;                                  // 0x370(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      M_pForceCloseAnimation;                            // 0x378(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_fDeltaTime;                                      // 0x388(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_fStartTime;                                      // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTimeZoneChangeUI* GetDefaultObj();

	void StopAllAnimation();
	void OnPlayerInput();
	void ForceClose();
};

// 0x8 (0xB8 - 0xB0)
// Class Majesty.TimeZoneComponentBase
class UTimeZoneComponentBase : public UActorComponent
{
public:
	int32                                        M_nIndex;                                          // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeZoneObjectType               M_eType;                                           // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeZoneComponentBase* GetDefaultObj();

};

// 0xA0 (0x2C0 - 0x220)
// Class Majesty.TimeZoneDirector
class ATimeZoneDirector : public AActor
{
public:
	uint8                                        Pad_1EF2[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTimeZoneComponentBase*>        M_pcTimeZoneComponentList;                         // 0x248(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UTimeZoneLightComponent*>       M_pcLightList;                                     // 0x258(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ATimeZoneLightParam*>           M_pcLightParamList;                                // 0x268(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTimeZoneEmitterComponent*>     M_pcEmitterList;                                   // 0x278(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ATimeZoneEmitterParam*>         M_pcEmitterParamList;                              // 0x288(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTimeZoneSoundComponent*>       M_pcSoundList;                                     // 0x298(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ATimeZoneSoundParam*>           M_pcSoundParamList;                                // 0x2A8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATimeZoneDirector* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class Majesty.TimeZoneEmitterComponent
class UTimeZoneEmitterComponent : public UTimeZoneComponentBase
{
public:
	TArray<class UParticleSystemComponent*>      M_lstParticle;                                     // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ATimeZoneEmitterParam*                 M_pcParam;                                         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTimeZoneEmitterComponent* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class Majesty.TimeZoneParamBase
class ATimeZoneParamBase : public AActor
{
public:
	int32                                        M_nIndex;                                          // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeZoneObjectType               M_eType;                                           // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATimeZoneParamBase* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class Majesty.TimeZoneEmitterParam
class ATimeZoneEmitterParam : public ATimeZoneParamBase
{
public:
	bool                                         M_bActive;                                         // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATimeZoneEmitterParam* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class Majesty.TimeZoneLightComponent
class UTimeZoneLightComponent : public UTimeZoneComponentBase
{
public:
	TArray<class ULightComponent*>               M_apLightList;                                     // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ATimeZoneLightParam*                   M_cParam;                                          // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTimeZoneLightComponent* GetDefaultObj();

};

// 0x18 (0x240 - 0x228)
// Class Majesty.TimeZoneLightParam
class ATimeZoneLightParam : public ATimeZoneParamBase
{
public:
	float                                        M_fIntensity;                                      // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          M_cColor;                                          // 0x22C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATimeZoneLightParam* GetDefaultObj();

};

// 0x40 (0x270 - 0x230)
// Class Majesty.TimeZoneManager
class ATimeZoneManager : public AAcqManagerBase
{
public:
	class UTimeOperator*                         M_pTimeOperator;                                   // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelSequenceActor*                   M_pSequencer;                                      // 0x238(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequence*                        M_pcOriginalSequence;                              // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequence*                        M_pcReplaceSequence;                               // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequence*                        M_pcPrevSequence;                                  // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequence*                        M_TheaterCache_CurrentSequence;                    // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequence*                        M_TheaterCache_PrevSequence;                       // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EFB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bEnable;                                         // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EFC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATimeZoneManager* GetDefaultObj();

	void SetTimeZoneType(enum class ETimeZoneType ENewType);
	void SetTimeZoneDarkAreaForEditor(class UObject* WorldContextObject);
	void SetTempDarkSurfaceEnable(bool bEnable);
	void SetIndoorPostProcessEnableForEditor(class UObject* WorldContextObject, bool bIndoor);
	void SetIndoorPostProcessEnable(bool bIndoor);
	void SetFrameTimeZoneSequencer(int32 NFrame);
	void SetForcedChangeTimeDisable(bool bDisable);
	void SetEnable(bool bEnable);
	void SetChangeTimeEnable(bool bEnable);
	void SetAddChangeValueTime(float FNewValue);
	void RevertTimezoneSequencerAfterTheater();
	void RevertTimeZoneSequencer();
	void ResetTimeZoneSequencerForEditor(class UObject* WorldContextObject);
	void Reset();
	void RequestChangeTimezoneSequencer(class FName SequencerLabel);
	void Refresh(bool bNextTimeZone);
	void OnStartChangeLevel(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	void OnStartChangeFieldLevel(class FName LevelId, enum class ELEVEL_TYPE LevelType, enum class ELevelTransitionNotice Notice);
	void OnPreFinishChangeLevel(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	void OnFinishChangeLevel(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	void OnChangeDarkState(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	enum class ETimeZoneType IsNextTimeZoneCheck();
	bool IsDayTime();
	enum class ETimeZoneType GetTimeZoneType();
	int32 GetSequencerCurrentFrame();
	class ALevelSequenceActor* GetSequencer();
	enum class ETimeZoneType GetNextTimeZoneType();
	bool GetChangeTimeEnable();
	void ChangeTimeZoneSequencer(class ULevelSequence* PSequencer);
	void ChangeTimeZoneForEditor(class UObject* WorldContextObject, enum class ETimeZoneType ETimeZoneType);
	void ChangeNextTimeZone();
	void CacheTimezoneSequencerBeforeTheater();
	void ApplyReplaceTimezoneSequencer();
};

// 0x38 (0xF0 - 0xB8)
// Class Majesty.TimeZoneSoundComponent
class UTimeZoneSoundComponent : public UTimeZoneComponentBase
{
public:
	TArray<class USoundAtomCue*>                 M_apSoundCueList;                                  // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAtomComponent*                        M_apAtomSound;                                     // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATimeZoneSoundParam*                   M_pcParam;                                         // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTimeZoneEmitterComponent*             M_pcParentEmitterComp;                             // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                         M_pcCurrentSoundAtomCue;                           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeZoneSoundComponent* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class Majesty.TimeZoneSoundParam
class ATimeZoneSoundParam : public ATimeZoneParamBase
{
public:
	bool                                         M_bEnable;                                         // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATimeZoneSoundParam* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.TimeZoneUtility
class UTimeZoneUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTimeZoneUtility* GetDefaultObj();

	bool IsNightTime();
	bool IsDayTime();
	enum class ETimeZoneType GetTimeZoneTypeBeforeLostWay();
	enum class ETimeZoneType GetCurrentTimeZoneType();
};

// 0x8 (0x228 - 0x220)
// Class Majesty.TitleBackgroundMoviePlayerBase
class ATitleBackgroundMoviePlayerBase : public AActor
{
public:
	class UManaComponent*                        M_ManaComponent;                                   // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATitleBackgroundMoviePlayerBase* GetDefaultObj();

};

// 0x8 (0x2C8 - 0x2C0)
// Class Majesty.TitleBackSceneBase
class UTitleBackSceneBase : public UAcqUserWidget
{
public:
	enum class ETitleMovieState                  M_State;                                           // 0x2C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EFF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTitleBackSceneBase* GetDefaultObj();

	void SetState(enum class ETitleMovieState NewState);
	void Debug_SetPrintCurrentTimeText(const class FString& Text);
	bool Debug_GetIsPrintCurrentTime();
};

// 0x8 (0x2C8 - 0x2C0)
// Class Majesty.TitleBase
class UTitleBase : public UAcqUserWidget
{
public:
	uint8                                        Pad_1F00[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTitleBase* GetDefaultObj();

	void Start();
	void SetNextScene(enum class EUITitleFlow Scene);
	void SetCurrentScene(enum class EUITitleFlow Scene);
	void OnFinishedFadeOut();
	void OnFinishedFadeIn();
	bool IsEnd();
	enum class EUITitleFlow GetNextScene();
	enum class EUITitleFlow GetCurrentScene();
	void End();
	bool AllowPushToUIManager();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.TownTableUtility
class UTownTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UTownTableUtility* GetDefaultObj();

	int32 TownLabelToID(class FName Label);
	class FName TownIDToLabel(int32 ID);
	bool GetTownTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetTownTableRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FTownInfoData* OutData, int32 TargetID, bool LogEnable);
	bool GetTownTableRowData(enum class EBPFuncReturnCode* ReturnCode, struct FTownInfoData* OutData, class FName TargetLabel, bool LogEnable);
};

// 0x60 (0x290 - 0x230)
// Class Majesty.TriggerManager
class ATriggerManager : public AAcqManagerBase
{
public:
	TArray<class AKSTriggerBase*>                M_apTriggerList;                                   // 0x230(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F05[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_bReserveUpdateEnableSwitchIndoorTrigger;         // 0x260(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F06[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATriggerManager* GetDefaultObj();

	void SortTriggerList(TArray<class AKSTriggerBase*>* TriggerList);
	bool SetUpEncountTriggerByName(class FName TriggerName);
	bool SetUpCameraLockTriggerByName(class FName TriggerName);
	void SetReserveUpdateEnableSwitchIndoorTrigger(bool Val);
	void SetHolyTorchItemTrigger(class AHolyTorchItemTriggerBase* HolyTorchItemTrigger);
	void SetEnableSwitchIndoorTriggerList(const TArray<int32>& NewList);
	void SetEnableSwitchIndoorTrigger(bool bEnable);
	void RemoveEnableSwitchIndoorTriggerList(int32 NID);
	void OnFinishChangeLevel(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& Args);
	class AHolyTorchItemTriggerBase* GetHolyTorchItemTrigger();
	void Debug_SetShowLadderTrigger(bool bShow);
	void Debug_SetShowCanoeDockTrigger(bool bShow);
	void Debug_OutputTriggerInfo();
	bool Debug_GetShowLadderTrigger();
	bool Debug_GetShowCanoeDockTrigger();
	void ClearHolyTorchItemTrigger();
	void ClearEnableSwitchIndoorTriggerList();
	bool ApplyCameraLockTrigger(class ACameraLockTrigger* Trigger);
	void AddEnableSwitchIndoorTriggerList(int32 NID);
};

// 0x8 (0x228 - 0x220)
// Class Majesty.TutorialAutoCaptureActor
class ATutorialAutoCaptureActor : public AActor
{
public:
	enum class ETutorialAutoCaptureActorState    M_State;                                           // 0x220(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F07[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATutorialAutoCaptureActor* GetDefaultObj();

	void SetState(enum class ETutorialAutoCaptureActorState State);
	enum class ETutorialAutoCaptureActorState GetState();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.TutorialDataTableUtility
class UTutorialDataTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UTutorialDataTableUtility* GetDefaultObj();

	int32 TutorialPageLabelToID(class FName TutorialListLable);
	class FName TutorialPageIDToLabel(int32 TutorialListID);
	int32 TutorialListLabelToID(class FName TutorialListLable);
	class FName TutorialListIDToLabel(int32 TutorialListID);
	bool GetTutorialPageRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetTutorialPageRowDataByLabel_RC(enum class EBPFuncReturnCode* ReturnCode, struct FDataTableTutorialPageData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetTutorialPageRowDataByLabel(struct FDataTableTutorialPageData* OutData, class FName TargetLabel, bool LogEnable);
	bool GetTutorialPageRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FDataTableTutorialPageData* OutData, int32 TargetID, bool LogEnable);
	bool GetTutorialListRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetTutorialListRowDataByLabel_RC(enum class EBPFuncReturnCode* ReturnCode, struct FDataTableTutorialList* OutData, class FName TargetLabel, bool LogEnable);
	bool GetTutorialListRowDataByLabel(struct FDataTableTutorialList* OutData, class FName TargetLabel, bool LogEnable);
	bool GetTutorialListRowDataByID(enum class EBPFuncReturnCode* ReturnCode, struct FDataTableTutorialList* OutData, int32 TargetID, bool LogEnable);
	bool GetTutorialFlagPartRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetTutorialFlagPartByID(struct FTutorialFlagPart* OutData, int32 ID);
	bool GetTutorialFlagPart(struct FTutorialFlagPart* OutData, class FName Label);
	void GetOpenedTutorialFlagPart(TArray<class FName>* OutNames, bool CheckCharaSort);
	bool Debug_GetShowAllList();
};

// 0xA8 (0x2D8 - 0x230)
// Class Majesty.TutorialManager
class ATutorialManager : public AAcqManagerBase
{
public:
	FMulticastInlineDelegateProperty_            TutorialFinishEvent;                               // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class ETUTORIAL_TYPE                    TutorialType;                                      // 0x240(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RequestCharaID;                                    // 0x248(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<enum class ETUTORIAL_TYPE>            RequestTutorialType;                               // 0x258(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableTutorialList                TutorialListData;                                  // 0x268(0x28)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FTutorialFlagPart                     TutorialFlagPartData;                              // 0x290(0x28)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UUITutorialBase*                       UITutorial;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsEndCard;                                         // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsEpilouge;                                        // 0x2C1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F14[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATutorialManager* GetDefaultObj();

	void UpdateMain();
	void UpdateFinish();
	void SetTutorialData(enum class ETUTORIAL_TYPE Type, bool* FindData);
	void OpenTutorialListData(const struct FDataTableTutorialList& ListData, bool AutoPushPop, bool ForcedDisplay, bool* IsOpen, class UUITutorialBase** Tutorial);
	void OpenTutorialFromLabel(class FName Label, bool ForcedDisplay, bool* IsOpen, int32 CharaID);
	void OpenTutorial(enum class ETUTORIAL_TYPE Type, bool ForcedDisplay, bool* IsOpen, int32 CharaID);
	void OpenEndCardEpilogue(enum class ETUTORIAL_TYPE Type, bool ForcedDisplay, bool* IsOpen);
	void OpenEndCard(enum class ETUTORIAL_TYPE Type, bool ForcedDisplay, bool* IsOpen, int32 CharaID);
	void OnTutorialFinish();
	bool OnStateFinish();
	bool IsRunningTutorial();
	bool IsExsistRequest();
	void GetTutorialPageDataFromFlagPartLabels(const TArray<class FName>& FlagPartLabels, TArray<struct FDataTableTutorialPageData>* PageData);
	void GetTutorialPageData(TArray<struct FDataTableTutorialPageData>* PageData, bool CheckNextPage);
	int32 GetRequestCharaID();
	void GetPageLabelIndex(int32 CharacterID, int32* PageLabelIndex);
	void ForceTutorialClose(bool RequestClear);
	void ExecuteTutorialFinishEvent();
	bool CheckOpendTutorialList(TArray<class FName>* OpenedFlagPartLabels);
	void ChangeStateMain();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.TutorialSaveDataUtil
class UTutorialSaveDataUtil : public USaveDataUtilBase
{
public:

	static class UClass* StaticClass();
	static class UTutorialSaveDataUtil* GetDefaultObj();

	void SetTutorialListFlagFromLabel(class FName FlagPartLabel, bool Flag);
	void SetTutorialListFlag(enum class ETUTORIAL_TYPE Type, bool Flag);
	void SetOpenedTutorialFromLabel(class FName FlagPartLabel, bool Flag);
	void SetOpenedTutorial(enum class ETUTORIAL_TYPE Type, bool Flag);
	void SetCanDisplayBranchMainStory(int32 CharacterID, bool bDisplay);
	bool IsViewTutorialListFromLabel(class FName FlagPartLabel);
	bool IsViewTutorialList(enum class ETUTORIAL_TYPE Type);
	bool IsOpenedTutorial(enum class ETUTORIAL_TYPE Type);
	bool CanDisplayBranchMainStory(int32 CharacterID);
};

// 0x8 (0x58 - 0x50)
// Class Majesty.TutorialStateData
class UTutorialStateData : public UStateDataBase
{
public:
	uint8                                        Pad_1F15[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTutorialStateData* GetDefaultObj();

};

// 0x10 (0x368 - 0x358)
// Class Majesty.UIEventBackgroundFadeBase
class UUIEventBackgroundFadeBase : public UKSUserWidgetBase
{
public:
	enum class EINNER_SEQUENCE                   InnerSeq;                                          // 0x358(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EndTime;                                           // 0x35C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateTime;                                        // 0x360(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F17[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUIEventBackgroundFadeBase* GetDefaultObj();

	bool TickInternal(float DeltaTime);
	bool StartFadeOut(class FName ResourceLabel, float Time, const struct FLinearColor& BaseColor);
	bool StartFadeIn(float Time);
	void SetFadeMaterialParam(const struct FLinearColor& Color, class FName ResourceLabel);
	void Reset();
	bool IsFadeOutFinish();
	bool IsFadeInFinish();
	enum class EINNER_SEQUENCE GetInnerSquence();
	bool EndFadeOut();
	bool EndFadeIn();
};

// 0x20 (0x378 - 0x358)
// Class Majesty.UIFlashbackBase
class UUIFlashbackBase : public UKSUserWidgetBase
{
public:
	TArray<class FName>                          LabelList;                                         // 0x358(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EFlashbackSequence                SeqFlashback;                                      // 0x368(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EndTime;                                           // 0x36C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateTime;                                        // 0x370(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUIFlashbackBase* GetDefaultObj();

	bool TickInternal(float DeltaTime);
	bool Start(class FName StrName, float Time);
	void ResetParam();
	void Reset();
	bool LoadStart();
	bool IsInit();
	bool IsAnimFinish();
	bool InitFlashback(float Alpha, class UTexture2D* Texture, const struct FLinearColor& BackColor);
	enum class EFlashbackSequence GetFlashbackSeq();
	bool Finish(float Time);
	bool CheckResourceData(class FName ResorceLabel);
	bool AddImage(class FName ResourceName);
};

// 0x8 (0x360 - 0x358)
// Class Majesty.UIPartnerSelectBase
class UUIPartnerSelectBase : public UKSUserWidgetBase
{
public:
	int32                                        M_PartnerID;                                       // 0x358(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F1B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUIPartnerSelectBase* GetDefaultObj();

	int32 GetPartnerID();
};

// 0x80 (0x2B0 - 0x230)
// Class Majesty.UIResourceManager
class AUIResourceManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1F1D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UObject*>            LoadedAssets;                                      // 0x240(0x50)(NativeAccessSpecifierPrivate)
	TArray<class ULoadAssetHandle*>              LoadHandles;                                       // 0x290(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F1E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AUIResourceManager* GetDefaultObj();

	void UnloadAssetsByCategory(enum class EUIResCategory Category);
	void UnloadAssetList(const TArray<class FName>& LabelList);
	void UnloadAsset(class FName ResLabel);
	void SetDataTable(class UDataTable* DataTable);
	void ReloadResources();
	void OnCompletedLoadFirst();
	void OnCompletedLoadCommon();
	void NotifyUIResourceDB(class FName DbName, enum class EDBNoticeType Notice);
	void LoadFirstAssetsAsync();
	void LoadCommonAssetsAsync();
	void LoadAssetSyncByLabel(TArray<class FName>& AssetLabels, FDelegateProperty_ Cb);
	void LoadAssetsAsyncByLabel(TArray<class FName>& AssetLabels, FDelegateProperty_ Cb);
	void LoadAssetsAsyncByCategory(enum class EUIResCategory Category, FDelegateProperty_ Cb);
	bool IsLoading();
	bool IsLoadedFirst();
	bool IsLoadedCommon();
	class UTexture2D* GetTexture2D(class FName ResLabel);
	class UStaticMesh* GetStaticMesh(class FName ResLabel);
	int32 GetResourceCount();
	int32 GetLoadHandleCount();
};

// 0x0 (0x358 - 0x358)
// Class Majesty.UITutorialBase
class UUITutorialBase : public UKSUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UUITutorialBase* GetDefaultObj();

	bool OpenTutorial(TArray<struct FDataTableTutorialPageData>& TopPageData, enum class ETUTORIAL_TYPE TutorialType, bool IsEndCard, bool IsEpilouge);
	bool ForceTutorialClose();
};

// 0x40 (0x2A0 - 0x260)
// Class Majesty.UITutorialTemplateBase
class UUITutorialTemplateBase : public UUserWidget
{
public:
	class UWidgetAnimation*                      FocusAnimation;                                    // 0x260(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      OutFocusAnimation;                                 // 0x268(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAcqImage*>                     PageImage;                                         // 0x270(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UKSTextBlock*>                  PageText;                                          // 0x280(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                       VisibleList;                                       // 0x290(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUITutorialTemplateBase* GetDefaultObj();

	void SetVisibleList(enum class ESlateVisibility Visible, int32 Index);
	void SetUIFocus(bool Focus, bool Fast);
	void SetPageText(class FName TextLabel, int32 TextID);
	void SetPageImage(class UTexture2D* SetTexture, int32 TextID);
	void RefreshImage();
	void RefleshText();
	bool GetUseBackGround();
	int32 GetTemplateType();
	void CheckReplaceText(const struct FDataTableTutorialPageData& PageData);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.UIWidgetTableUtility
class UUIWidgetTableUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUIWidgetTableUtility* GetDefaultObj();

	void GetWidgetDataFromName(enum class EBPFuncReturnCode* ReturnCode, struct FUIWidgetReferenceData* OutWidgetData, class FName Label);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.VibrationDataTableUtil
class UVibrationDataTableUtil : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UVibrationDataTableUtil* GetDefaultObj();

	bool GetAllPs5VibrationDataRowNames(TArray<class FName>* OutRowNames);
	bool GetAllFfeVibrationDataRowNames(TArray<class FName>* OutRowNames);
};

// 0x50 (0x280 - 0x230)
// Class Majesty.VibrationManager
class AVibrationManager : public AAcqManagerBase
{
public:
	uint8                                        Pad_1F25[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayRequest                          LastPlayRequest;                                   // 0x258(0x18)(BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UAudioComponent*                       M_Ps5VibratonComp;                                 // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundSubmixBase*                      M_SoundSubmixForPS5Vibration;                      // 0x278(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AVibrationManager* GetDefaultObj();

	bool PlayVibrationByLabel(class FName VibLabel, float Power, bool Loop, int32 LoopInterval);
	bool PlayVibration2ByLabel(class FName VibLabel, enum class EVibrationPower Power, bool Loop, int32 LoopInterval);
	bool PlayVibration(class FName VibrationLabel, int32 PlayIndex, float Power, bool Loop, int32 LoopInterval);
	bool ForcePlayVibrationByLabel(class FName VibLabel, float Power, bool Loop, int32 LoopInterval);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.VibrationStatics
class UVibrationStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVibrationStatics* GetDefaultObj();

	void UnloadVibration();
	bool StopVibration();
	bool PlayVibrationByLabel(class FName VibLabel, float Power, bool Loop, int32 LoopInterval);
	bool PlayVibration2ByLabel(class FName VibLabel, enum class EVibrationPower Power, bool Loop, int32 LoopInterval);
	bool LoadVibration(const class FString& PathName);
};

// 0x8 (0xB8 - 0xB0)
// Class Majesty.WeakSystemComponent
class UWeakSystemComponent : public UActorComponent
{
public:
	class ABattleCharacterBase*                  M_cOwnerPlayer;                                    // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWeakSystemComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Majesty.WeaponMasterEventDbUtil
class UWeaponMasterEventDbUtil : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UWeaponMasterEventDbUtil* GetDefaultObj();

	bool GetWeaponMasterEventLabel(class FName* OutEventLabel, class FName& RowName);
	bool GetWeaponMasterEventDataByRowName(struct FWeaponMasterEventDataBase* OutData, class FName& RowName);
	bool GetWeaponMasterDialogTextLabel(class FName* OutTextLabel, class FName& RowName);
};

// 0x0 (0x220 - 0x220)
// Class Majesty.WeaponMasterEventFlow
class AWeaponMasterEventFlow : public AActor
{
public:

	static class UClass* StaticClass();
	static class AWeaponMasterEventFlow* GetDefaultObj();

	void Start();
	bool IsRunning();
	void ExecFlow();
};

// 0x58 (0x108 - 0xB0)
// Class Majesty.WidgetTemporaryHiddenComponent
class UWidgetTemporaryHiddenComponent : public UActorComponent
{
public:
	class AKSUIManager*                          M_UiManager;                                       // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F2A[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidgetTemporaryHiddenComponent* GetDefaultObj();

	void TurnOffTemporaryHiddenFlag(enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	void Setup(class AKSUIManager* UiManager);
	void ResetAllHiddenFlag();
	void OnStartBattle(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void OnEndBattle(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void HideWidgetTemporary(bool IsHide, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
};

// 0x170 (0x390 - 0x220)
// Class Majesty.WorldMapActorBase
class AWorldMapActorBase : public AActor
{
public:
	FMulticastInlineDelegateProperty_            OnFinishedSetup;                                   // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TArray<class UWorldMapPivotComponentBase*>   M_PivotComponents;                                 // 0x230(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class UWorldMapPivotComponentBase*> M_WorldMapLabelToPivotComponents;                  // 0x240(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             M_GlobeRotationLimit_Current;                      // 0x290(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EWorldMapZoomType, struct FVector2D> M_GlobeRotationLimit_Define;                       // 0x298(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        M_CurrentNormalizedTime;                           // 0x2E8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  M_SelectingPivotLabel;                             // 0x2EC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWorldMapGlobeState               M_WorldMapGlobeState;                              // 0x2F4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_BlurStrength;                                    // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_WidgetOpacity;                                   // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_WidgetScale;                                     // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_FrameWidgetScale;                                // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       M_DarkEffectParticleTemplate;                      // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       M_SacredFireParticleTemplate;                      // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       M_SacredFireLineParticleTemplate;                  // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UDarkAreaParticleComponent*> M_DarkAreaPartcleComponents;                       // 0x320(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                        M_AutoRotateCurrentTime;                           // 0x370(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_AutoRotateDurationTime;                          // 0x374(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           M_AutoRotateAnimCurve;                             // 0x378(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               M_AutoRotateTarget;                                // 0x380(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F2F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWorldMapActorBase* GetDefaultObj();

	void WorldMapActorNotice__DelegateSignature();
	bool UpdateZoom(float DeltaTime, bool IsMovedCursor, struct FVector2D* RotationDelta);
	bool StartCameraZoomIfPossible(enum class EWorldMapZoomType NewZoomType, const struct FVector2D& GazePoint);
	void SetWorldMapGlobeState(enum class EWorldMapGlobeState NewState);
	void SetupDarkAreaEffect();
	void SetSelectingPivotLable(class FName& WorldMapLabel);
	void SetGlobeRotation(struct FRotator& NewRotation, struct FRotator* OutClanpedNewRotation);
	void SetGlobeLocation(struct FVector& NewLocation, struct FVector* OutClanpedNewLocation);
	void SetCurrentNormalizedTime(float NewCurrentNormalizedTime);
	void RotateToCenterByLebelWithAnim(class FName WorldMapLabel, class UCurveFloat* AnimCurve, float Speed);
	void RotateToCenterByLebel(class FName WorldMapLabel);
	void RotateGlobe(const struct FVector2D& RotateDelta, struct FVector2D* OutClampedRotateDelta);
	void RequestStartCameraZoom(enum class EWorldMapZoomType NewZoomType, const struct FVector2D& GazePoint);
	void RefreshWorldMapMaskInPlayerSelect();
	void RefreshWorldMapMask();
	void PlayOpenSequencer();
	void PlayOpenPlayerSelectSequencer();
	void PlayCloseSequencer();
	void PlayClosePlayerSelectSequencer();
	void OverrideGazePoint(const struct FVector2D& GazePoint);
	void OpenWorldMapActor(enum class EWorldMapZoomType InitZoomType);
	void IsReachedGlobeInRotationLimit(bool* IsReachedX, bool* IsReachedY);
	bool IsPlayingZoomSequencer();
	bool IsPlayingTimeZoneSequencer();
	bool IsPlayingOpenSequencer();
	bool IsPlayingOpenPlayerSelectSequencer();
	bool IsPlayingCloseSequencer();
	bool IsPlayingClosePlayerSelectSequencer();
	bool IsPlayingAnySequencer();
	void HideAllDarkAreaEffect();
	float GetZoomAlpha();
	enum class EWorldMapGlobeState GetWorldMapGlobeState();
	float GetWidgetScale();
	float GetWidgetOpacity();
	TArray<class UWorldMapPivotComponentBase*> GetSortedPivotComponentsByYaw();
	enum class EWorldMapZoomType GetPrevZoomState();
	TArray<class UWorldMapPivotComponentBase*> GetPivotComponents();
	class UDarkAreaParticleComponent* GetOrCreateDarkAreaEffectComponent(class FName& RowName, struct FWorldMapDarkAreaEffectParam& EffectParam);
	enum class EWorldMapZoomType GetNextZoomState();
	bool GetIsZooming();
	struct FVector GetGlobeWorldPosition();
	struct FRotator GetGlobeRotation();
	struct FVector GetGlobeLocation();
	class USceneComponent* GetGlobeComponent();
	class AWorldMapGlobeActorBase* GetGlobeActor();
	float GetFrameWidgetScale();
	enum class EWorldMapZoomType GetCurrentZoomState();
	float GetClosePlayerSelectSequencerDuration();
	float GetBlurStrength();
	class UWorldMapPivotComponentBase* FindPivotComponent(class FName& WorldMapLabel);
	void CloseWorldMapActor();
};

// 0x8 (0x2C8 - 0x2C0)
// Class Majesty.WorldMapAreaLabelBase
class UWorldMapAreaLabelBase : public UAcqUserWidget
{
public:
	bool                                         IsOpenning;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F30[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWorldMapAreaLabelBase* GetDefaultObj();

	struct FVector2D GetPosition();
	struct FVector2D GetOverlapArea();
	bool GetIsOpenning();
};

// 0x38 (0x2F8 - 0x2C0)
// Class Majesty.WorldMapCursorBase
class UWorldMapCursorBase : public UAcqUserWidget
{
public:
	bool                                         M_IsSnapping;                                      // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                CursorImage;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_CursorPositionLimit;                             // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_FastRotaionLine;                                 // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_SnapTargetPos;                                   // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_SnapStartPos;                                    // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_SnapDurationTime;                                // 0x2F0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_SnapElapseTime;                                  // 0x2F4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWorldMapCursorBase* GetDefaultObj();

	bool UpdateSnap(float DeltaTime, struct FVector2D* OutCouldNotMoveValue);
	void StartSnap(const struct FVector2D& SnapTargetPos, float SnapDuration);
	struct FVector2D SnapInterpolation(struct FVector2D& Start, struct FVector2D& End, float Alpha);
	struct FVector2D SetPosition(struct FVector2D& NewPos, bool KeepDirection);
	void SetFastRotaionLinet(struct FVector2D& FastRotaionLine);
	void SetCursorPositionLimit(struct FVector2D& CursorPositionLimit);
	void OverrideSnapPosition(struct FVector2D& NewCursorPos, struct FVector2D& NewTargetPos);
	struct FVector2D MoveSursorToCenter();
	struct FVector2D GetPosition();
	void CancelSnap();
	struct FVector2D AddCursorPosition(struct FVector2D& DeltaPos);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.WorldMapDarkAreaEffectParamUtil
class UWorldMapDarkAreaEffectParamUtil : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UWorldMapDarkAreaEffectParamUtil* GetDefaultObj();

};

// 0xB0 (0x2D0 - 0x220)
// Class Majesty.WorldMapFastTraveler
class AWorldMapFastTraveler : public AActor
{
public:
	struct FWorldMapTable                        M_TargetWorldMapData;                              // 0x220(0x90)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	FDelegateProperty_                           M_OnCloseConfirmDialog;                            // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FDelegateProperty_                           M_OnCloseFailedDialog;                             // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWorldMapFastTraveler* GetDefaultObj();

	bool IsPossibleFastTravel(struct FWorldMapTable& WorldMapData);
	void ExecOnCloseFailedDialogCallback(int32 ButtonIndex);
	void ExecOnCloseConfirmDialogCallback(int32 ButtonIndex);
	enum class EJudgeFastTravelAvailableResponse ExecFastTravelIfPossible(struct FWorldMapTable& DestinationData, FDelegateProperty_& OnCloseConfirmDialog, FDelegateProperty_& OnCloseFailedDialog);
	bool DEBUG_GetIsForceFastTravel();
	bool CanFastTravelSomeWhere(TMap<class FName, class UWorldMapIconBase*>& Icons);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.WorldMapFunction
class UWorldMapFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWorldMapFunction* GetDefaultObj();

	float RoundByDigit(float A, int32 Digit);
	struct FRotator RotatorTo360(struct FRotator& Rot);
	struct FVector2D LerpVector2D(struct FVector2D& Start, struct FVector2D& End, float& Alpha);
	struct FFrameTime LerpFrameTime(struct FFrameTime& Start, struct FFrameTime& End, float& Alpha);
	bool IsVisitedLocation(class UObject* WorldContextObject, struct FWorldMapTable& WorldMapData);
	bool IsCurrentLocation(struct FWorldMapTable& WorldMapData);
	struct FFrameTime GetMarkedFrameNumberByLabel(class UMovieSceneSequence* MovieSceneSequence, const class FString& InLabel, bool* IsFound, float* AsSeconds);
	void Debug_SetIsFlatEarthMode(bool Val);
	void Debug_SetIsDrawDebugLine(bool Val);
	bool Debug_GetIsFlatEarthMode();
	bool Debug_GetIsDrawDebugLine();
	bool ConvertWorldPosToWidgetPosForZoom(class UObject* WorldContextObject, struct FVector& WorldPos, struct FVector2D* OutWidgetPos);
	bool ConvertWorldPosToWidgetPosForIcon(class UObject* WorldContextObject, struct FVector& WorldPos, struct FVector2D* OutWidgetPos);
	bool ConvertWidgetPosToWorldPosOnWorldMapForZoom(class UObject* WorldContextObject, struct FVector2D& WidgetPos, struct FVector* OutWorldPos, bool IsDebugDraw);
	bool CanDisplayLocation(class UObject* WorldContextObject, struct FWorldMapTable& WorldMapData);
};

// 0x168 (0x388 - 0x220)
// Class Majesty.WorldMapGlobeActorBase
class AWorldMapGlobeActorBase : public AActor
{
public:
	class UMaterialInstanceDynamic*              M_WorldMapDynamicMaterial;                         // 0x220(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class FName>               M_MaterialResourceLabel;                           // 0x228(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EWorldMapMaskArea, class FName> M_MaskAreaParamName;                               // 0x278(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EWorldMapPrologueMaskArea, class FName> M_PrologueMaskAreaParamName;                       // 0x2C8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EWorldMapIslandLayerArea, class FName> M_IslandLayerAreaParamName;                        // 0x318(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<enum class EWorldMapMaskArea>         M_DisableMaskInPlayerSelect;                       // 0x368(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<enum class EWorldMapPrologueMaskArea> M_DisablePrologueMaskInPlayerSelect;               // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWorldMapGlobeActorBase* GetDefaultObj();

	void SetIsMaskedPrologueArea(enum class EWorldMapPrologueMaskArea MaskArea, bool IsMasked);
	void SetIsMaskedArea(enum class EWorldMapMaskArea MaskArea, bool IsMasked);
	void SetIsEnableMasksForPlayerSelect(bool IsEnable);
	void SetIsEnableMask(bool IsEnable);
	void SetIsDisplayedIslandLayer(enum class EWorldMapIslandLayerArea MaskArea, bool IsDisplayed);
	class UMaterialInstanceDynamic* GetWorldMapDynamicMaterial();
};

// 0x0 (0x28 - 0x28)
// Class Majesty.WorldMapIconDataUtility
class UWorldMapIconDataUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UWorldMapIconDataUtility* GetDefaultObj();

	void NotifyWorldMapIconDb(class FName DbName, enum class EDBNoticeType Notice);
	class FName GetWorldMapIconTextureLabel(enum class EWorldMapIconType IcnoType);
	struct FWorldMapIconData GetWorldMapIconDataByType(enum class EWorldMapIconType IcnoType);
	bool GetIsWorldMapIconVisibe(enum class EWorldMapIconType IcnoType, enum class EWorldMapZoomType ZoomType);
};

// 0x18 (0x480 - 0x468)
// Class Majesty.WorldMapPivotComponentBase
class UWorldMapPivotComponentBase : public UArrowComponent
{
public:
	float                                        PivotLength;                                       // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PivotRadius;                                       // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WorldMapLabel;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWorldMapMode                     WorldMapMode;                                      // 0x478(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F36[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWorldMapPivotComponentBase* GetDefaultObj();

	void SetWorldMapMode(enum class EWorldMapMode Mode);
	void OnOpenWorldMap();
	class FName GetWorldMapLabel();
	struct FVector CalcWorldPositionOnGlobe();
	bool CalcScreenPositionOnMap(struct FVector2D* OutScreenPos);
};

// 0x0 (0x480 - 0x480)
// Class Majesty.WorldMapPivotComponent
class UWorldMapPivotComponent : public UWorldMapPivotComponentBase
{
public:

	static class UClass* StaticClass();
	static class UWorldMapPivotComponent* GetDefaultObj();

};

// 0x0 (0x480 - 0x480)
// Class Majesty.WorldMapPivotComponentV2
class UWorldMapPivotComponentV2 : public UWorldMapPivotComponentBase
{
public:

	static class UClass* StaticClass();
	static class UWorldMapPivotComponentV2* GetDefaultObj();

};

// 0x0 (0x480 - 0x480)
// Class Majesty.WorldMapShipPivotComponentV2
class UWorldMapShipPivotComponentV2 : public UWorldMapPivotComponentV2
{
public:

	static class UClass* StaticClass();
	static class UWorldMapShipPivotComponentV2* GetDefaultObj();

	void UpdateShipPosition();
};

// 0x10 (0x2D0 - 0x2C0)
// Class Majesty.WorldMapStoryInfoDisplayBase
class UWorldMapStoryInfoDisplayBase : public UAcqUserWidget
{
public:
	bool                                         M_IsFocus;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsForceHidden;                                   // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F37[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorldMapStoryInfoText*                M_StoryInfoTextWidget;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWorldMapStoryInfoDisplayBase* GetDefaultObj();

	void Setup(struct FWorldMapDestinationData& StoryInfo);
	void SetForceHidden(bool IsHidden);
	void ScrubAnimation(float ElapsedTime);
	void InitIsFocus(enum class EWorldMapZoomType ZoomType);
	bool GetIsForceHidden();
	bool GetIsFocus();
	void ChangeUIFocus(bool IsFocus, bool IsFast);
};

// 0x10 (0x2D0 - 0x2C0)
// Class Majesty.WorldMapStoryInfoText
class UWorldMapStoryInfoText : public UAcqUserWidget
{
public:
	bool                                         M_IsPlayingTextLoopAnim;                           // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      M_LoopAnim;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWorldMapStoryInfoText* GetDefaultObj();

	void SetIsPlayingTextLoopAnim(bool Val);
	void ScrubAnimation(float ElapsedTime);
};

// 0x0 (0x28 - 0x28)
// Class Majesty.WorldMapTableUtility
class UWorldMapTableUtility : public UDataTableUtilityBase
{
public:

	static class UClass* StaticClass();
	static class UWorldMapTableUtility* GetDefaultObj();

	void NotifyWorldMapDb(class FName DbName, enum class EDBNoticeType Notice);
	bool GetWorldMapTableRowNames(enum class EBPFuncReturnCode* ReturnCode, TArray<class FName>* OutRowNames);
	bool GetWorldMapRowDataByLabel(enum class EBPFuncReturnCode* ReturnCode, struct FWorldMapTable* OutData, class FName TargetLabel, bool LogEnable);
	class FName GetWorldMapLabelByLevelLabel(class FName LevelLabel);
};

// 0x190 (0x450 - 0x2C0)
// Class Majesty.WorldMapWidgetBase
class UWorldMapWidgetBase : public UAcqUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnOpenBeginEvent;                                  // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpenEndEvent;                                    // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCloseBeginEvent;                                 // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCloseEndEvent;                                   // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	enum class EWorldMapMode                     WorldMapMode;                                      // 0x300(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWorldMapState                    M_WorldMapState;                                   // 0x301(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWorldMapZoomType                 M_InitZoomType;                                    // 0x302(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UWorldMapIconBase*>  M_IconWidgets;                                     // 0x308(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FVectorsToIcon>     M_VectorsToIcon;                                   // 0x358(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class AWorldMapActorBase*                    M_WorldMapActor;                                   // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AWorldMapFastTraveler*                 M_WorldMapFastTraveler;                            // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         M_IsBackGroundMode;                                // 0x3B8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_ElapsedTime;                                     // 0x3BC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_CullingMargin;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorldMapCursorBase*                   M_CursorWidget;                                    // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorldMapAreaLabelBase*                M_AreaLabelWidget;                                 // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorldMapIconBase*                     M_SelectedIcon;                                    // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorldMapIconBase*                     M_LastActiveSelectedIcon;                          // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_CursorInputValue;                                // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_PrevCursorInputValue;                            // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_EasedCursorInputValue;                           // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_CursorMoveTime;                                  // 0x400(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_CursorStartMovingEaseDuration;                   // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           M_CursorStartMovingEaseCurve;                      // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_CursorStopTime;                                  // 0x410(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_CursorStopMovingEaseDuration;                    // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           M_CursorStopMovingEaseCurve;                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             M_LastMoveCursorVector;                            // 0x420(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_FastRotateTime;                                  // 0x428(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_StartFastRotationEaseDuration;                   // 0x42C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           M_StartFastRotationEaseCurve;                      // 0x430(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_NonFastRotateTime;                               // 0x438(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        M_StartNonFastRotationEaseDuration;                // 0x43C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           M_StartNonFastRotationEaseCurve;                   // 0x440(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           M_AutoRotateEaseCurve;                             // 0x448(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWorldMapWidgetBase* GetDefaultObj();

	void WorldMapEvent__DelegateSignature();
	void UpdateVectorsToIcon();
	void UpdateOverlapWidgetVisibility();
	void UpdateMapIcon();
	void UpdateAnimation();
	void SetWorldMapState(enum class EWorldMapState NewState);
	void SetupMapIconStoryInfo();
	void OutFocusWorldMap(bool IsFast);
	void OpenWorldMapInternal();
	void OpenWorldMap();
	void OnOpened();
	void OnClosed();
	bool IsOpening();
	bool IsClosing();
	bool IsClosed();
	struct FVector2D GetCenterPosition();
	void FocusWorldMap(bool IsFast);
	bool FindNearestIcon(class UWorldMapIconBase** OutIcon, float* OutLength);
	bool FindCurrentLocationWorldMapLabel(class FName* WorldMapLabel);
	void FastCloseWorldMap();
	void CloseWorldMapInternal();
	void CloseWorldMap();
	void CheckOpenTutorial();
};

}


