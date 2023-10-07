#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D9 (0x5B9 - 0x2E0)
// WidgetBlueprintGeneratedClass ChapterListWidget.ChapterListWidget_C
class UChapterListWidget_C : public UKSListWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Image_1;                                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_4;                                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_5;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_6;                                           // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_7;                                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_8;                                           // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_9;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_10;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_11;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_12;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_14;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_15;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_17;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_18;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_19;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_20;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_21;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_23;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_24;                                          // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_25;                                          // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_32;                                          // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               ItemList_DummyTop;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               ItemList_DumyBottom;                               // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ItemScrollBox;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ListSideWidgetRoot;                                // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainItemListBox;                                   // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TitleText;                                         // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UChapterCategoryWidget_C*>      CategoryWidgetList;                                // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CursorPosition;                                    // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1661[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           CursorList;                                        // 0x3E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CategorySelect;                                    // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1662[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryCursorPos;                                 // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMJListItemWidget*>             ItemWidgetList_ActiveItems;                        // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ActiveFlag;                                        // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1663[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ChapterListEvent;                                  // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEnableItemDetail;                                // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1664[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           RightSideWidget;                                   // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMJListWidgetItemData>         AllItemList;                                       // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                           CategoryItemNum;                                   // 0x488(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseCategory;                                       // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1665[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                EnableCategoryList;                                // 0x4E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMJListItemWidget*>             ItemWidgetFreeList;                                // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        RightFrameMinOffsetY;                              // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightFrameMaxOffsetY;                              // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisibleTitleImage;                               // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseListAnimation;                                  // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RefreshListCursor;                                 // 0x50A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ELISTWIDGET_STATE                 CurrentState;                                      // 0x50B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELISTWIDGET_STATE                 NextState;                                         // 0x50C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1666[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           RefRightFrameWidget;                               // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          SeArray;                                           // 0x518(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsCancelClose;                                     // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AllowCursorUpdate;                                 // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1667[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ListItemHeight;                                    // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WidgetListUsedIndex;                               // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryListUsedIndex;                             // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UChapterCategoryWidget_C*>      CategoryWidgetFreeList;                            // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         EnableCursor;                                      // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1668[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxItemNum;                                        // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ItemHeight;                                        // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorPos_ScrollBottom;                            // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorPos_ScrollTop;                               // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDetailText;                                     // 0x55C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1669[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                IndexInAllList_ActiveItems;                        // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                           RefExHeaderWidget;                                 // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultCursorPosition;                             // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             HelpOffsetPos;                                     // 0x57C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HelpWindowPosDependWidget;                         // 0x584(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnablePageScroll;                                  // 0x585(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuFooter_C*                         FooterUI;                                          // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowListBottomLine;                                // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DecideDisable;                                     // 0x591(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FListWidgetCategory>           CategoryDataList_name;                             // 0x598(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ListType;                                          // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Save_CursorPosition;                               // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Save_CursorPosScrollBottom;                        // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Save_CursorPosScrollTop;                           // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDialogOpening;                                   // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UChapterListWidget_C* GetDefaultObj();

	void IsUIPartsRunning(bool* IsRunning);
	void IsPlayingAnim(bool* IsPlaying);
	void SetIsDialogOpening(bool NewValue);
	void SetCursorVisibility(bool IsVisible);
	void RestoreStateForReOpen();
	void SaveStateForReOpen();
	void SetCursorToTop();
	void SetupListType();
	void SetListBodyHeight(bool NotUseScroll, float Height);
	void CursorDown();
	void CursorUp();
	void SetListVisible(bool Visible);
	void SetCategorySelectFromOutSide(bool CategorySelect);
	bool Init();
	void SetDecideDisable(bool IsDisable);
	void GetSelectedItemData(struct FMJListWidgetItemData* Output);
	void DecideCurrentItem();
	void GetEnableCategoryNum(int32* Num);
	void SyncHelpState();
	void RefreshActiveItemText();
	void RefreshScroll();
	void IsVisibleHelp(bool* IsVisible);
	void PageScroll(bool MoveToPlus, bool* Result);
	void SetHelpOffsetPos(const struct FVector2D& OffsetPos);
	void SetDefaultCursorPos(int32 DefaultCursorPos);
	void SetUseHelp(bool UseDetailText);
	void UpdateHelpPosition();
	void IsCategorySelect(bool* CategorySelect);
	void SetVisibleHeader(enum class ESlateVisibility InVisibility);
	void SetExHeaderWidget(class UUserWidget* ExWidget);
	void IsListEmpty(bool* IsEmpty);
	void GetItemWidgetForVirtualScroll(int32 CursorPos, class UMJListItemWidget** Item);
	void UpdateVirtualScroll();
	void HideCursor();
	void FitScrollAreaToContents(bool NotUseScroll);
	void UpdateScrollPos(bool ToTop, bool* IsUpdated);
	void ResetScrollPos();
	void SetupEnableCursor(bool EnableCursor);
	void SetupListTitle(float TitleTextPaddingTop);
	void ReserveItemWidget(int32 Num);
	void GetFreeCategoryTab(class UChapterCategoryWidget_C** Widget);
	void ReturnAllCategoryTab();
	void ReserveCategoryTab(int32 Num);
	void FocusCurrentItem(bool IsFast);
	void UpdateHelpText(int32 CursorPos);
	void Play_List_SE(enum class ELISTWIDGET_SE_TYPE SeType);
	void SetDefaultSE();
	void SetSE(class FName Open, class FName DecideClose, class FName CancelClose, class FName Select, class FName Decide, class FName Cancel, class FName Failed);
	void SetRightFrameWidget(class UUserWidget* RightFrameWidget);
	void ReleaseSelf();
	void SetCategoryData(TArray<struct FListWidgetCategory>& CategoryData);
	void SetupListItem(enum class ELIST_NUM_UNIT_TYPE NumUnitType);
	void ResetList();
	void SetupList(bool UseCategory, bool UseListAnimation);
	void UpdateListItemByAllIdx(int32 ItemAllIdx, struct FMJListWidgetItemData& ItemData);
	void ChangeFocusToCurrentCursorPos();
	void UpdateBody();
	void OnEndState();
	void OnBeginState();
	void OnUpdateState();
	void SetNextState(enum class ELISTWIDGET_STATE NextState);
	void SetListCaption(class FText CaptionText);
	void CallEvent(enum class ELIST_EVENT_TYPE EventType);
	void GetCurrentCategoryItemWidget(int32 ItemIndex, class UMJListItemWidget** Item);
	void RemoveListRightSideWidget(class UUserWidget* List_Right_Side_Widget);
	void AddListRightSideWidget(class UUserWidget* List_Right_Side_Widget);
	void UpdateTick();
	void RefreshCursorPos();
	void SetUseAnimaiton(bool UseAnimation);
	void RemoveRightWidget(class UUserWidget* RightWidget);
	void AddRightWidget(class UUserWidget* RightWidget);
	void Debug_PrintEnableCategoryList(class FString* TempString1);
	void GetCurrentCategoryId(int32* CategoryId);
	void CategoryCursorPosToCategoryId(int32 CategoryCursorPos, int32* CategoryId);
	void GetCategoryTabWidget(int32 CategoryCursorPos, class UChapterCategoryWidget_C** Item);
	void RefreshList();
	void RemoveBottomWidget(class UUserWidget* BottomWidget);
	void AddBottomWidget(class UUserWidget* BottomWidget);
	void CalcCurrentItemRelativePosY(float* RelativePosY);
	void SetRangeRightFrameWidgetOffsetY(float MinOffsetY, float MaxOffsetY);
	void SetRightFrameWidgetOffsetY(float In_Size_Y);
	void ReturnItemWidget();
	void GetFreeItemWidget(class UMJListItemWidget** ItemWidget);
	void UpdateListAllItem();
	void UpdateCategoryUI();
	void OutFocusCategory(int32 CategoryCursorPos);
	void FocusCategory(int32 CategoryCursorPos);
	void UpdateCategoryItemNum();
	void SetAllItems(TArray<struct FMJListWidgetItemData>& AllItemList);
	void GetSelectedItemWidget(class UMJListItemWidget** Item);
	void OutFocusCurrentItem();
	void SetVisibleHelp(bool Condition);
	void GetRightSideWidget(class UUserWidget** RightSideWidget);
	void GetActiveListItemNum(int32* ItemNum);
	void UpdateCurrentItemList(TArray<struct FMJListWidgetItemData>& NewParam);
	void SetItemDetailWidget(class UListItemDetailWidget_C* ItemDetailWidget);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void CloseList();
	void OpenList();
	void IsActive(bool* IsActive);
	void AddCategory(struct FListWidgetCategory& CategoryData);
	void UpdateStaticText();
	void IsEmpty(bool* IsEmpty);
	void FocusPanel();
	void OutFocusPanel();
	void MoveListCursor(bool MoveToPlus, bool UpdateCursorPosOnly, bool ToTop, bool* Result);
	void UpdateListCaption(int32 CategoryCursorPos);
	void ChangeCursorPosition(int32 NewCursorPosition, bool ForceUpdate, bool ToTop);
	void InitWidgetData();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuLB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuDecideRepeat();
	void OnMenuCancelRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
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
	void OnMenuButtonY();
	void OnMenuButtonX();
	void OnCursorDownRepeat();
	void OnCursorUpRepeat();
	void OnMenuRBRepeat();
	void OnMenuLBRepeat();
	void OnPlusButton();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRB();
	void OnMenuLStickButton();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void FocusMenu();
	void OutFocusMenu();
	void OpenWidget();
	void CloseWidget();
	void Destruct();
	void Construct();
	void ExecuteUbergraph_ChapterListWidget(int32 EntryPoint);
	void ChapterListEvent__DelegateSignature(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
};

}


