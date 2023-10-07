#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15B (0x4B3 - 0x358)
// WidgetBlueprintGeneratedClass MainMenuAbilityWidget.MainMenuAbilityWidget_C
class UMainMenuAbilityWidget_C : public UKSUserWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SubMenuOutFocus;                                   // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SubMenuFocus;                                      // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UListWidget_C*                         ChangeSupportSkillListWidget;                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CommandAbilityOverlay;                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobAbilityConfirmParts_C*             JobAbilityConfirmParts;                            // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobSpecialMoveListPanel_C*            JobSpecialMoveListPanel;                           // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget_C*                         MainJobAbilityAcquisitionListWidget;               // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipJobAbilityListHeaderWidget_C*    MainJobAbilityListHeaderWidget;                    // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidgetJobAbilityWidget_C*         MainJobListBottomParts;                            // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             MenuDeco;                                          // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               SubExSpacer;                                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget_C*                         SubJobAbilityAcquisitionListWidget;                // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipJobAbilityListHeaderWidget_C*    SubJobAbilityListHeaderWidget;                     // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidgetJobAbilityWidget_C*         SubJobListBottomParts;                             // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuSubItemPanel_C*               SubMenuCommandAbility;                             // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SubMenuRoot;                                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuSubItemPanel_C*               SubMenuSupportAbility;                             // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USupportAbilityChangeWidget_C*         SupportAbilityChangeWidget;                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SupportAbilityOverlay;                             // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EMAINMENU_ABILITYSETTING_STATE    State;                                             // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SubMenuSelectCommand;                              // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1701[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         MainListItem;                                      // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FJobLearnAbility>              MainLeamList;                                      // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMJListWidgetItemData>         SubListItem;                                       // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FJobLearnAbility>              SubLeamList;                                       // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SubMenuClose;                                      // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1703[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavePlayerCharacterData>      MainMemberData;                                    // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShowSubJobList;                                    // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1704[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AcquisitionAbilityName;                            // 0x45C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AcquisitionJPCost;                                 // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AcquisitionJobID;                                  // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AcquisitionCharacterID;                            // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FJobLearnAbility>              AcquisitionSupportAbility;                         // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    SubMenuGuide;                                      // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GetAbilityGuide;                                   // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UListWidget_C*                         RequestOpen;                                       // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequestWait;                                       // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PushedSupportAbilityChange;                        // 0x4B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SubMenuPostion;                                    // 0x4B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMainMenuAbilityWidget_C* GetDefaultObj();

	void CheckCursorSubToMain(int32* Cursor);
	void CheckCursorMainToSub(int32* Cursor);
	void CloseTutorial();
	void UpdateNewIcon();
	void GetHeader(class UMenuHeader_C** PartsMenuHeader);
	void SetSubMenuPosition(const struct FVector2D& Pos);
	bool Init();
	void GetAbilityCinfirmCallback(int32 SelectIndex);
	void PushPopSupportAbilityChange(bool IsPush);
	bool IsChangeStateCloseFinish();
	bool SetReference();
	void SubJobOpenList();
	void SetupAbilityListFocus(int32 CategoryIdx, bool ItemFocus, bool SelectCategory, bool CallMainList);
	void SetJobListFocus(struct FSavePlayerCharacterData& TargetCharacterData, bool CheckMainJob, int32* ListFocus, bool* Complete);
	void UpdateSubMenu();
	void TickGetSupportAbility();
	void TickAbilityGetConfirm();
	void StartGetAbility(struct FSavePlayerCharacterData& CharacterData, struct FJobLearnAbility& AbilityState, int32 JobID);
	void CheckSubAbilityList();
	void UpdateAttachWidget(int32 CategoryId);
	void SubJobAbilityListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
	void ChangeActiveCommandAbilityList(bool ToSubJobList, bool ItemFocus, bool SelectCategory);
	void MainJobAbilityListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
	void CreateListItemSubJob(TArray<struct FMJListWidgetItemData>* ListItem, TArray<struct FJobLearnAbility>* JobLearnAbilityList);
	void CreateListItemMainJob(TArray<struct FMJListWidgetItemData>* ListItem, TArray<struct FJobLearnAbility>* JobLearnAbilityList);
	void CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory);
	void OpenCommandAbilityGet();
	void ChangeSelectSubMenu(bool IsUp);
	void OpenSupportAbilityChange();
	void PreCloseAction(bool* CanClose);
	void MenuDecide();
	void ConstructEvent();
	bool IsRunning();
	void TickEvent(float DeltaTime);
	void MenuCancel();
	void MenuClose();
	void MenuOpen();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
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
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void UpdateClosing();
	void OnCloseFinish();
	void OnCursorUp();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMenuDecide();
	void OnMenuCancel();
	void UIOpen();
	void UIClose();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void ExecuteUbergraph_MainMenuAbilityWidget(int32 EntryPoint);
};

}


