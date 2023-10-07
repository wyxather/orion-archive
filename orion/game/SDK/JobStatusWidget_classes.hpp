#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2CD (0x625 - 0x358)
// WidgetBlueprintGeneratedClass JobStatusWidget.JobStatusWidget_C
class UJobStatusWidget_C : public UKSUserWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      JobStatusOutFocus;                                 // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      JobStatusFocus;                                    // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          CategoryBox;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Frame_R;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          HaveJPText;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image;                                             // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_1;                                           // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_2;                                           // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_3;                                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_4;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_68;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_107;                                         // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_186;                                         // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobDialogCh_C*                        JobDialogCh;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobDialogCh_C*                        JobDialogCh_01;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobDialogCh_C*                        JobDialogCh_02;                                    // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobDialogChJobStatus_C*               JobDialogChJobStatus;                              // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          JobPoint;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobSpecialMoveListPanel_C*            JobSpecialMoveListPanel;                           // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          JPUnit;                                            // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemParamWidget_C*                ListItemParamWidget;                               // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ListSideWidgetRoot;                                // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidgetJobAbilityWidget_C*         ListWidgetJobAbilityWidget;                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainJobInfo;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainJobWidget_C*                      MainJobWidget;                                     // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNecessaryJPListHeaderWidget_C*        NecessaryJPListHeaderWidget;                       // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               RightWidgetTop;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubJobWidget_C*                       SubJobWidget;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TitleText;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectCategoryIndex;                               // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_178B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavePlayerCharacterData>      ShowCharacterData;                                 // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UListCategoryWidget_C*>         CategoryWidgetList;                                // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UListWidget_C*                         AbilityAcquisitionList;                            // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeLanguage;                                    // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_178C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SupportAbilityParamArray;                          // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                EquipmentParamArray;                               // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FListWidgetCategory                   AcquisitionListCategory;                           // 0x4A0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMJListWidgetItemData>         AcquisitionListItem;                               // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FJobLearnAbility>              AcquisitionAbilityListInfoList;                    // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UJobAbilityConfirmParts_C*             ConfirmDialogParts;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AcquisitionAbilityJobID;                           // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AcquisitionAbilityName;                            // 0x524(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AcquisitionAbilityListJobID;                       // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastSubJobWidgetMoveUp;                            // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCursorUpdate;                                    // 0x531(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_178D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterParam                       BaseParam;                                         // 0x534(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCharacterParam                       JobRevisionParam;                                  // 0x568(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_178E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuFooter_C*                         TmpFooterUI;                                       // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    CommonGuide;                                       // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    SubJobGuide;                                       // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AcquisitionJPCost;                                 // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_178F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FJobLearnAbility>              AcquisitionSupportAbility;                         // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EMAINMENU_SUBJOB_COMFIRMRETURN    SubJobConfirmReturn;                               // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Current;                                           // 0x5E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1791[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    JobAbilityGuide;                                   // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EMAINMENU_SEQ_JOB                 State;                                             // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMAINMENU_SEQ_JOB                 LastSelectJobScene;                                // 0x5F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1792[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UJobDialogCh_C*>                JobDialogList;                                     // 0x600(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UJobDialogCh_C*>                UseJobDialogList;                                  // 0x610(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        JobChangeConfirmIndex;                             // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDialogOpening;                                   // 0x624(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UJobStatusWidget_C* GetDefaultObj();

	void SetIsDialogOpening(bool NewValue);
	bool GetIsDialogOpening();
	void ExcludeGuest(TArray<struct FSavePlayerCharacterData>& In, TArray<struct FSavePlayerCharacterData>* Out);
	void UpdateMainJob();
	void UpdateJobLicence();
	void OpenCharaRemoveDialog();
	void JobChangeRemoveSelectedCharaCallback(int32 SelectIndex);
	void MakeSubJobChangeText(class FText* Text);
	void JobChangeConfirmCallback(int32 SelectIndex);
	void JobSupportAbilityAcquisitionCallback(int32 SelectIndex);
	void JobAbilityConfirmCallback(int32 SelectIndex);
	void GetListFirstCursor(int32* ListCursorPos);
	void ChangePlayerSubjobChangeNone(int32 CharacterID);
	void ChangeStateSubJobChangeConfirm(enum class EMAINMENU_SUBJOB_COMFIRMRETURN FinishType, bool PlayOkSe);
	void PreCloseAction(bool* CanClose);
	void UpdateJobPoint(int32 JobPoint);
	void ChangeCharacterCommon(bool Increment);
	void LShoulderEvent();
	void RShoulderEvent();
	void UpdateJobAbilitySupport();
	void ChangeStateJobSupportAbility();
	void ChangeStateCommon();
	void SetAbilityComparisionParameter(struct FSavePlayerCharacterData& CharacterData, int32 AbilitySlot, int32 AbilityID);
	void CalcCollectionParam(const struct FCharacterParam& BaseParam, const struct FCharacterParam& JobRevision, TArray<int32>* CollectionParam);
	void GetListTitleIcon(enum class EJOB_TYPE JobType, class UTexture2D** JobTitleIcon);
	void CloseJobStatusWidget();
	void GetCanChangeJobNum(int32* CanChangeJobNum);
	void ChangeStateSubJobSelectMove();
	void ResetAfterParam();
	void CheckCanChangeJobByJobID(int32 JobID, bool* CanChangeJob);
	void ChangeStateSubJobAbility();
	void CharacterDataUpdate(int32 CharacterID);
	void UpdateJobAbilityConfirm();
	void SetDialogWidgetParts(class UJobAbilityConfirmParts_C* JobAbilityConfirmParts);
	void ChangeStateJobAbilityConfirm(int32 JobID, const struct FJobLearnAbility& AbilityState);
	void CreateAcquisitionListCategory(int32 JobID, struct FListWidgetCategory* ListWidgetCategoryData);
	void OpenCurrentMainJobAcquisitionAbilityList(bool PlayAnimation);
	void JobAbilityAcquisitionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
	void SetJobComparisonParameter(int32 JobID);
	void SetupCharacterParameter(const struct FSavePlayerCharacterData& CharacterData);
	void ChangeCurrentCharacterSubJob(int32 ChangeJobID);
	void OpenCurrentSubJobAcquisitionAbilityList(int32 JobID, bool PlayAnimation);
	void CloseAcquisitionAbilityList();
	void OpenAcquisitionAbilityList(int32 JobID, struct FSavePlayerCharacterData& CharacterData, bool PlayAnimation);
	void ChangeStateSubJob();
	void SetupDefaultFocus();
	void ChangeStateSelectCharacter();
	void NowSelectCategoryFocus();
	void NowSelectCategoryDecide();
	void AddIntArray(TArray<int32>& Base, TArray<int32>& Add, TArray<int32>* Result);
	void SetupText();
	void CancelEvent();
	void DecideEvent();
	void CursorRightEvent();
	void CursorLeftEvent();
	void CursorDownEvent();
	void CursorUpEvent();
	void TickEvent();
	bool IsRunning();
	void SetupPlayerData(const struct FSavePlayerCharacterData& CharacterData);
	void UpdateCategoryCursor(int32 NewCursor);
	void SetupCategoryWidget();
	void OpenJobStatus(TArray<struct FSavePlayerCharacterData>& CharacterData, class UListWidget_C*& AbilityAcquisitionList);
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnMenuDecideRepeat();
	void OnMenuCancelRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
	void OnPlusButton();
	void OnMinusButton();
	void OnRightAxisUp();
	void OnRightAxisDown();
	void OnMenuRBRelease();
	void OnGamePadAxisX(float AxisValue);
	void OnGamePadAxisY(float AxisValue);
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnAnyButton();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void ChangeTimeZone();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void HelpScrollAxis(float AxisaValue);
	void OnAnyKey();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuLB();
	void OnMenuRB();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UIOpen();
	void ExecuteUbergraph_JobStatusWidget(int32 EntryPoint);
};

}


