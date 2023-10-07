#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x343 (0x623 - 0x2E0)
// WidgetBlueprintGeneratedClass ListWidget.ListWidget_C
class UListWidget_C : public UKSListWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close_Null;                                        // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ListClose;                                         // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ListOpen;                                          // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Close;                                             // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             BottomLine;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          BottomWidgetBox;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CategoryBox;                                       // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ContentsArea;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ExHeaderBox;                                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Back;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Frame_R;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_SideR;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Header;                                            // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HeaderSet;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxTop;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        IconBox;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_1;                                           // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_2;                                           // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_3;                                           // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_4;                                           // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_68;                                          // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_186;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               ItemList_DummyTop;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               ItemList_DumyBottom;                               // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ItemScrollBox;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ListBodySizeBox;                                   // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ListSideWidgetRoot;                                // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainItemListBox;                                   // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RightFrame_VBox;                                   // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               RightFrameTop;                                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_LineL;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SubItemListBox;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             TitleImage;                                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TitleText;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxTop;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UListCategoryWidget_C*>         CategoryWidgetList;                                // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CursorPosition;                                    // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1673[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           CursorList;                                        // 0x420(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CategorySelect;                                    // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1674[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryCursorPos;                                 // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMJListItemWidget*>             ItemWidgetList_ActiveItems;                        // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ActiveFlag;                                        // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1675[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ListEvent;                                         // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEnableItemDetail;                                // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1676[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           RightSideWidget;                                   // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMJListWidgetItemData>         AllItemList;                                       // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                           CategoryItemNum;                                   // 0x4C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseCategory;                                       // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1677[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                EnableCategoryList;                                // 0x518(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMJListItemWidget*>             ItemWidgetFreeList;                                // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        RightFrameMinOffsetY;                              // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightFrameMaxOffsetY;                              // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisibleTitleImage;                               // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseListAnimation;                                  // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RefreshListCursor;                                 // 0x542(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ELISTWIDGET_STATE                 CurrentState;                                      // 0x543(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELISTWIDGET_STATE                 NextState;                                         // 0x544(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1678[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           RefRightFrameWidget;                               // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          SeArray;                                           // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsCancelClose;                                     // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AllowCursorUpdate;                                 // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ListItemHeight;                                    // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WidgetListUsedIndex;                               // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryListUsedIndex;                             // 0x56C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UListCategoryWidget_C*>         CategoryWidgetFreeList;                            // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         EnableCursor;                                      // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxItemNum;                                        // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ItemHeight;                                        // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorPos_ScrollBottom;                            // 0x58C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorPos_ScrollTop;                               // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDetailText;                                     // 0x594(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                IndexInAllList_ActiveItems;                        // 0x598(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                           RefExHeaderWidget;                                 // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultCursorPosition;                             // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HelpWindowPosDependWidget;                         // 0x5B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnablePageScroll;                                  // 0x5B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuFooter_C*                         FooterUI;                                          // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowListBottomLine;                                // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DecideDisable;                                     // 0x5C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FListWidgetCategory>           CategoryDataList_name;                             // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseSubItem;                                        // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   SubItemWidgetList;                                 // 0x5E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FirstSubItem;                                      // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1680[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ListType;                                          // 0x5F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayNullCloseAnim;                               // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1681[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubItemIndex;                                      // 0x5FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMJListWidgetItemData>         SubItemList;                                       // 0x600(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SaveChangeCategorySelectedCursor;                  // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1682[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SaveCursorMin;                                     // 0x614(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SaveCursorMax;                                     // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HelpFlipCount;                                     // 0x61C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableHelpFlip;                                    // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUseCharaId;                                      // 0x621(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDialogOpening;                                   // 0x622(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UListWidget_C* GetDefaultObj();

	void IsUIPartsRunning(bool* IsRunning);
	void IsPlayingAnim(bool* IsPlaying);
	void SetIsDialogOpening(bool NewValue);
	bool GetIsDialogOpening();
	void GetSubItemListCount(int32 SubItemIndex, int32* Count);
	void AddSubItemSpacer(class USpacer* Spacer);
	void ClampCursorIndex();
	void TreatCharaIdAsCategoryId(bool Enable);
	void SetLLineVisible(bool Visible);
	void Set_Help_Flip(int32 FlipCount, bool Enable);
	bool IsForceHelpFlip();
	void SetSaveCursorMinMax(int32 Min, int32 Max);
	void ChangeCategoryFromOutSide(bool IsPlus);
	void SetSaveCursorToChangeCategory(bool IsSave);
	void GetNearestSelectableCursorPos(int32 CheckCursorPos, int32* RetCursorPos);
	void UpdateSubItemList();
	void CreateNewItemList();
	void ReOpenSubItemHelp();
	void GetListItemDataOnCursorPosWithSubItems(int32 CursorPos, struct FMJListWidgetItemData* Output, int32* Index);
	void InputSendSubItemCursor(bool MoveToPlus, class UUserWidget* TargetWidget, bool* End);
	void SetupSubItem(bool MoveToPlus, class UUserWidget* TargetWidget);
	bool Is_Selectable_Item_Data(int32 CursorPos);
	void IsMainCursor(int32 CursorPos, bool* IsMain);
	void CheckCursorWidgetChange(int32 BeforeCursor, int32 NextCursor, bool* IsChange);
	void UpdateCursorWithSubItems(bool IsPlus, int32* CursorPos);
	void MoveListCursorSubItem(bool MoveToPlus, bool UpdateCursorPosOnly, bool* Result);
	void Get_Sub_Item_with_Cursor_Pos(int32 CursorPos, class UUserWidget** CurrentSubItemWidget, int32* Index, bool* IsMain);
	void GetCurrentCategoryItemNumWithSubItems(int32* ItemNum);
	void GetBottomCursorIndex(int32* Index);
	void GetTopCursorIndex(int32* Index);
	void PlayListClose();
	void PlayListOpen();
	void SetupListType();
	void SetListBodyHeight(bool NotUseScroll, float Height);
	void CursorDown();
	void MoveListCursorSubItem_Old(bool MoveToPlus, bool UpdateCursorPosOnly, bool* Result);
	void CursorUp();
	void RemoveSubItemWidget(class UUserWidget* SubItem);
	void AddSubItemWidget(class UUserWidget* SubItem, int32 InsertIndex);
	void SetListVisible(bool Visible);
	void SetCategorySelectFromOutSide(bool CategorySelect);
	bool Init();
	void SetDecideDisable(bool IsDisable);
	void GetSelectedItemData(struct FMJListWidgetItemData* Output);
	void SetParamFromOutside(int32 CategoryId, int32 CursorIndex, bool IsFast);
	void DecideCurrentItem();
	void GetEnableCategoryNum(int32* Num);
	void SyncHelpState();
	void RefreshActiveItemText();
	void RefreshScroll();
	void IsVisibleHelp(bool* IsVisible);
	void PageScroll(bool MoveToPlus, bool* Result);
	void SetDefaultCursorPos(int32 DefaultCursorPos);
	void SetUseHelp(bool UseDetailText);
	void UpdateHelpPosition();
	void SetCategory(int32 CategoryId);
	void IsCategorySelect(bool* CategorySelect);
	void SetVisibleHeader(enum class ESlateVisibility InVisibility);
	void SetExHeaderWidget(class UUserWidget* ExWidget);
	void IsListEmpty(bool* IsEmpty);
	void GetItemWidgetForVirtualScroll(int32 CursorPos, class UMJListItemWidget** Item);
	void UpdateVirtualScroll();
	void HideCursor();
	void FitScrollAreaToContents(bool NotUseScroll);
	void UpdateScrollPos(bool* IsUpdated);
	void ResetScrollPos();
	void SetupEnableCursor(bool EnableCursor);
	void SetupListTitle(float TitleTextPaddingTop);
	void ReserveItemWidget(int32 Num);
	void GetFreeCategoryTab(class UListCategoryWidget_C** Widget);
	void ReturnAllCategoryTab();
	void ReserveCategoryTab(int32 Num);
	void FocusCurrentItem();
	void UpdateHelpText(int32 CursorPos);
	void RefreshCategoryCursorPos();
	void Play_List_SE(enum class ELISTWIDGET_SE_TYPE SeType);
	void SetDefaultSE();
	void SetSE(class FName Open, class FName DecideClose, class FName CancelClose, class FName Select, class FName Decide, class FName Cancel, class FName Failed);
	void SetRightFrameWidget(class UUserWidget* RightFrameWidget);
	void ReleaseSelf();
	void SetCategoryData(TArray<struct FListWidgetCategory>& CategoryData);
	void SetupListItem(enum class ELIST_NUM_UNIT_TYPE NumUnitType);
	void ResetList();
	void SetupList(bool UseCategory, bool UseListAnimation);
	void GetSavedCursorPosition(int32* SavedCursorPos);
	void RestoreCursorPosition();
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
	void GetCategoryTabWidget(int32 CategoryCursorPos, class UListCategoryWidget_C** Item);
	void RefreshList();
	void RemoveBottomWidget(class UUserWidget* BottomWidget);
	void AddBottomWidget(class UUserWidget* BottomWidget, bool ContainSubItem);
	void Calc_Current_Item_Relative_Pos_Y(float* RelativePosY);
	void SetRangeRightFrameWidgetOffsetY(float MinOffsetY, float MaxOffsetY);
	void SetRightFrameWidgetOffsetY(float In_Size_Y);
	void ReturnItemWidget();
	void GetFreeItemWidget(class UMJListItemWidget** ItemWidget);
	void UpdateListAllItem(int32 CategoryCursorPos);
	void UpdateCategoryUI();
	void OutFocusCategory(int32 CategoryCursorPos);
	void FocusCategory(int32 CategoryCursorPos);
	void UpdateCategoryItemNum();
	void SetAllItems(TArray<struct FMJListWidgetItemData>& AllItemList);
	void GetSelectedItemWidget(class UMJListItemWidget** Item);
	void OutFocusCurrentItem(bool IsFast);
	void SetVisibleHelp(bool Condition);
	void GetRightSideWidget(class UUserWidget** RightSideWidget);
	void GetCurrentCategoryItemNum(int32* ItemNum);
	void UpdateCurrentItemList(TArray<struct FMJListWidgetItemData>& NewParam);
	void Set_Item_Detail_Widget(class UListItemDetailWidget_C* ItemDetailWidget);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void CloseList(bool IsPlayNullCloseAnim);
	void OpenList();
	void IsActive(bool* IsActive);
	void AddCategory(struct FListWidgetCategory& CategoryData);
	void UpdateStaticText();
	void IsEmpty(bool* IsEmpty);
	void SaveCursorPosition();
	void FocusPanel();
	void OutFocusPanel();
	void UpdateCategoryFocus(int32 NewCategory);
	void MoveListCursor(bool MoveToPlus, bool UpdateCursorPosOnly, bool* Result);
	void UpdateListCaption(int32 CategoryCursorPos);
	void ChangeCategory(bool ModeToPlus);
	void ChangeCursorPosition(int32 NewCursorPosition, bool ForceUpdate, bool IsFast);
	void InitWidgetData();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
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
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
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
	void OnAnyKey();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuButtonY();
	void OnCursorDownRepeat();
	void OnCursorUpRepeat();
	void OnMenuRBRepeat();
	void OnMenuLBRepeat();
	void OnPlusButton();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRB();
	void OnMinusButton();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void FocusMenu();
	void OutFocusMenu();
	void OpenWidget();
	void CloseWidget();
	void Destruct();
	void Construct();
	void ResetAppearance();
	void HelpScrollAxis(float AxisaValue);
	void ExecuteUbergraph_ListWidget(int32 EntryPoint);
	void ListEvent__DelegateSignature(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
};

}


