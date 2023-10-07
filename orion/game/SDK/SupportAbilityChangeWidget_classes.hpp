#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25C (0x5B4 - 0x358)
// WidgetBlueprintGeneratedClass SupportAbilityChangeWidget.SupportAbilityChangeWidget_C
class USupportAbilityChangeWidget_C : public UKSUserWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AbilityChangeOutFocus;                             // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AbilityChangeFocus;                                // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          CategoryBox;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_EquipJob;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Frame_R_1;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image;                                             // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_1;                                           // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_2;                                           // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_3;                                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_4;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_5;                                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_6;                                           // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_83;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_182;                                         // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_BaseJob;                                       // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_BattleJob;                                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListColumnWidget_Col1_C*              ListColumn;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemParamWidget_C*                ListItemParamWidget;                               // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               RightWidgetTop;                                    // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_8;                                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USupportAbilityWidget_C*               SupportAbilityWidget;                              // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TitleText;                                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Txt_BaseJob;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Txt_BaseJobName;                                   // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Txt_BattleJob;                                     // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Txt_BattleJobName;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectCategoryIndex;                               // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_164F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavePlayerCharacterData>      ShowCharacterData;                                 // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UListCategoryWidget_C*>         CategoryWidgetList;                                // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UListWidget_C*                         SupportAbilitySelectList;                          // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                SupportAbilityParamArray;                          // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                EquipmentParamArray;                               // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        ConfirmNextState;                                  // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1650[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CurrentSupportAbilityList;                         // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FListWidgetCategory                   SupportListCategory;                               // 0x498(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMJListWidgetItemData>         SupportListItem;                                   // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         LastSubJobWidgetMoveUp;                            // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCursorUpdate;                                    // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1651[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterParam                       BaseParam;                                         // 0x504(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCharacterParam                       JobRevisionParam;                                  // 0x538(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_1652[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuFooter_C*                         TmpFooterUI;                                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    CommonGuide;                                       // 0x578(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    ListGuide;                                         // 0x588(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Current;                                           // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1653[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    ListEquipSupportGuide;                             // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EMAINMENU_SEQ_JOB                 State;                                             // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMAINMENU_SEQ_JOB                 LastSelectJobScene;                                // 0x5B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGuest;                                           // 0x5B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOpening;                                         // 0x5B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USupportAbilityChangeWidget_C* GetDefaultObj();

	void HelpScrollAxisEvent(float AxisValue);
	bool Init();
	void PlusButtonEvent();
	void YButtonEvent();
	void ChangeStateChangeSupportAbility();
	void GetNextEmptySupportSlot(int32* NextSlot);
	void ChangePlayerSubjobChangeNone(int32 CharacterID);
	void ChangeCharacterCommon(bool Increment);
	void LShoulderEvent();
	void RShoulderEvent();
	void ChangeStateCommon();
	void SetAbilityComparisionParameter(struct FSavePlayerCharacterData& CharacterData, int32 AbilitySlot, int32 AbilityID);
	void GetSupportAbilityIDFromAbiliyList(int32 ItemIndex, bool* IsSuccess, int32* AbilityID);
	void CalcCollectionParam(const struct FCharacterParam& BaseParam, const struct FCharacterParam& JobRevision, TArray<int32>* CollectionParam);
	void CloseAbilityWidget();
	void ResetAfterParam();
	void ChangeSupportAbilityEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
	void CloseSupportAbilityList();
	void CreateSupportAbilityListItem(TArray<struct FMJListWidgetItemData>* ListItem, TArray<class FName>* ShowAbilityList, int32* EquipCount);
	void CreateSupportAbilityListCategory(struct FListWidgetCategory* ListWidgetCategoryData);
	void OpenSupportAbilityList(bool PlayAnimation);
	void CharacterDataUpdate(int32 CharacterID);
	void SetupCharacterParameter(const struct FSavePlayerCharacterData& CharacterData);
	void ChangeStateSupportAbility();
	void SetupDefaultFocus();
	void ChangeStateSelectCharacter();
	void NowSelectCategoryFocus(bool IsFast);
	void NowSelectCategoryDecide();
	void AddIntArray(TArray<int32>& Base, TArray<int32>& Add, TArray<int32>* Result);
	void SetupText();
	void CancelEvent();
	void DecideEvent();
	void CursorDownEvent();
	void CursorUpEvent();
	void TickEvent();
	bool IsRunning();
	void SetupPlayerData(const struct FSavePlayerCharacterData& CharacterData);
	void UpdateCategoryCursor(int32 NewCursor);
	void SetupCategoryWidget();
	void OpenAbilityStatus(TArray<struct FSavePlayerCharacterData>& CharacterData, class UListWidget_C*& SupportAbilitySelectList);
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
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
	void OnAnyKey();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonY();
	void OnPlusButton();
	void HelpScrollAxis(float AxisaValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UIOpen();
	void ExecuteUbergraph_SupportAbilityChangeWidget(int32 EntryPoint);
};

}


