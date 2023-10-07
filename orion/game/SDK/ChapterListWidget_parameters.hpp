#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.IsUIPartsRunning
struct UChapterListWidget_C_IsUIPartsRunning_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.IsPlayingAnim
struct UChapterListWidget_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetIsDialogOpening
struct UChapterListWidget_C_SetIsDialogOpening_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetCursorVisibility
struct UChapterListWidget_C_SetCursorVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetListBodyHeight
struct UChapterListWidget_C_SetListBodyHeight_Params
{
public:
	bool                                         NotUseScroll;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Height;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetListVisible
struct UChapterListWidget_C_SetListVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetCategorySelectFromOutSide
struct UChapterListWidget_C_SetCategorySelectFromOutSide_Params
{
public:
	bool                                         CategorySelect;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.Init
struct UChapterListWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetDecideDisable
struct UChapterListWidget_C_SetDecideDisable_Params
{
public:
	bool                                         IsDisable;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetSelectedItemData
struct UChapterListWidget_C_GetSelectedItemData_Params
{
public:
	struct FMJListWidgetItemData                 Output;                                            // 0x0(0xB8)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetEnableCategoryNum
struct UChapterListWidget_C_GetEnableCategoryNum_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.IsVisibleHelp
struct UChapterListWidget_C_IsVisibleHelp_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x86 (0x86 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.PageScroll
struct UChapterListWidget_C_PageScroll_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetHelpOffsetPos
struct UChapterListWidget_C_SetHelpOffsetPos_Params
{
public:
	struct FVector2D                             OffsetPos;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetDefaultCursorPos
struct UChapterListWidget_C_SetDefaultCursorPos_Params
{
public:
	int32                                        DefaultCursorPos;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetUseHelp
struct UChapterListWidget_C_SetUseHelp_Params
{
public:
	bool                                         UseDetailText;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.IsCategorySelect
struct UChapterListWidget_C_IsCategorySelect_Params
{
public:
	bool                                         CategorySelect;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetVisibleHeader
struct UChapterListWidget_C_SetVisibleHeader_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetExHeaderWidget
struct UChapterListWidget_C_SetExHeaderWidget_Params
{
public:
	class UUserWidget*                           ExWidget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.IsListEmpty
struct UChapterListWidget_C_IsListEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetItemWidgetForVirtualScroll
struct UChapterListWidget_C_GetItemWidgetForVirtualScroll_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1639[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJListItemWidget*                     Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.FitScrollAreaToContents
struct UChapterListWidget_C_FitScrollAreaToContents_Params
{
public:
	bool                                         NotUseScroll;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.UpdateScrollPos
struct UChapterListWidget_C_UpdateScrollPos_Params
{
public:
	bool                                         ToTop;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsUpdated;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetupEnableCursor
struct UChapterListWidget_C_SetupEnableCursor_Params
{
public:
	bool                                         EnableCursor;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetupListTitle
struct UChapterListWidget_C_SetupListTitle_Params
{
public:
	float                                        TitleTextPaddingTop;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.ReserveItemWidget
struct UChapterListWidget_C_ReserveItemWidget_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetFreeCategoryTab
struct UChapterListWidget_C_GetFreeCategoryTab_Params
{
public:
	class UChapterCategoryWidget_C*              Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.ReserveCategoryTab
struct UChapterListWidget_C_ReserveCategoryTab_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.FocusCurrentItem
struct UChapterListWidget_C_FocusCurrentItem_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.UpdateHelpText
struct UChapterListWidget_C_UpdateHelpText_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.Play List SE
struct UChapterListWidget_C_Play_List_SE_Params
{
public:
	enum class ELISTWIDGET_SE_TYPE               SeType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetSE
struct UChapterListWidget_C_SetSE_Params
{
public:
	class FName                                  Open;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DecideClose;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CancelClose;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Select;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Decide;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Cancel;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Failed;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetRightFrameWidget
struct UChapterListWidget_C_SetRightFrameWidget_Params
{
public:
	class UUserWidget*                           RightFrameWidget;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetCategoryData
struct UChapterListWidget_C_SetCategoryData_Params
{
public:
	TArray<struct FListWidgetCategory>           CategoryData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetupListItem
struct UChapterListWidget_C_SetupListItem_Params
{
public:
	enum class ELIST_NUM_UNIT_TYPE               NumUnitType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetupList
struct UChapterListWidget_C_SetupList_Params
{
public:
	bool                                         UseCategory;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseListAnimation;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xDA (0xDA - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.UpdateListItemByAllIdx
struct UChapterListWidget_C_UpdateListItemByAllIdx_Params
{
public:
	int32                                        ItemAllIdx;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_163E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMJListWidgetItemData                 ItemData;                                          // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetNextState
struct UChapterListWidget_C_SetNextState_Params
{
public:
	enum class ELISTWIDGET_STATE                 NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetListCaption
struct UChapterListWidget_C_SetListCaption_Params
{
public:
	class FText                                  CaptionText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x14 (0x14 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.CallEvent
struct UChapterListWidget_C_CallEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetCurrentCategoryItemWidget
struct UChapterListWidget_C_GetCurrentCategoryItemWidget_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1649[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJListItemWidget*                     Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.RemoveListRightSideWidget
struct UChapterListWidget_C_RemoveListRightSideWidget_Params
{
public:
	class UUserWidget*                           List_Right_Side_Widget;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.AddListRightSideWidget
struct UChapterListWidget_C_AddListRightSideWidget_Params
{
public:
	class UUserWidget*                           List_Right_Side_Widget;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetUseAnimaiton
struct UChapterListWidget_C_SetUseAnimaiton_Params
{
public:
	bool                                         UseAnimation;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.RemoveRightWidget
struct UChapterListWidget_C_RemoveRightWidget_Params
{
public:
	class UUserWidget*                           RightWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.AddRightWidget
struct UChapterListWidget_C_AddRightWidget_Params
{
public:
	class UUserWidget*                           RightWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.Debug_PrintEnableCategoryList
struct UChapterListWidget_C_Debug_PrintEnableCategoryList_Params
{
public:
	class FString                                TempString1;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetCurrentCategoryId
struct UChapterListWidget_C_GetCurrentCategoryId_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.CategoryCursorPosToCategoryId
struct UChapterListWidget_C_CategoryCursorPosToCategoryId_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryId;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetCategoryTabWidget
struct UChapterListWidget_C_GetCategoryTabWidget_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_164A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChapterCategoryWidget_C*              Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.RemoveBottomWidget
struct UChapterListWidget_C_RemoveBottomWidget_Params
{
public:
	class UUserWidget*                           BottomWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.AddBottomWidget
struct UChapterListWidget_C_AddBottomWidget_Params
{
public:
	class UUserWidget*                           BottomWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.CalcCurrentItemRelativePosY
struct UChapterListWidget_C_CalcCurrentItemRelativePosY_Params
{
public:
	float                                        RelativePosY;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetRangeRightFrameWidgetOffsetY
struct UChapterListWidget_C_SetRangeRightFrameWidgetOffsetY_Params
{
public:
	float                                        MinOffsetY;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxOffsetY;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetRightFrameWidgetOffsetY
struct UChapterListWidget_C_SetRightFrameWidgetOffsetY_Params
{
public:
	float                                        In_Size_Y;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetFreeItemWidget
struct UChapterListWidget_C_GetFreeItemWidget_Params
{
public:
	class UMJListItemWidget*                     ItemWidget;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OutFocusCategory
struct UChapterListWidget_C_OutFocusCategory_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.FocusCategory
struct UChapterListWidget_C_FocusCategory_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetAllItems
struct UChapterListWidget_C_SetAllItems_Params
{
public:
	TArray<struct FMJListWidgetItemData>         AllItemList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetSelectedItemWidget
struct UChapterListWidget_C_GetSelectedItemWidget_Params
{
public:
	class UMJListItemWidget*                     Item;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetVisibleHelp
struct UChapterListWidget_C_SetVisibleHelp_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetRightSideWidget
struct UChapterListWidget_C_GetRightSideWidget_Params
{
public:
	class UUserWidget*                           RightSideWidget;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.GetActiveListItemNum
struct UChapterListWidget_C_GetActiveListItemNum_Params
{
public:
	int32                                        ItemNum;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.UpdateCurrentItemList
struct UChapterListWidget_C_UpdateCurrentItemList_Params
{
public:
	TArray<struct FMJListWidgetItemData>         NewParam;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.SetItemDetailWidget
struct UChapterListWidget_C_SetItemDetailWidget_Params
{
public:
	class UListItemDetailWidget_C*               ItemDetailWidget;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.DecideMenu
struct UChapterListWidget_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.CancelMenu
struct UChapterListWidget_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.IsActive
struct UChapterListWidget_C_IsActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.AddCategory
struct UChapterListWidget_C_AddCategory_Params
{
public:
	struct FListWidgetCategory                   CategoryData;                                      // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x9 (0x9 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.IsEmpty
struct UChapterListWidget_C_IsEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D (0x3D - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.MoveListCursor
struct UChapterListWidget_C_MoveListCursor_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdateCursorPosOnly;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ToTop;                                             // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.UpdateListCaption
struct UChapterListWidget_C_UpdateListCaption_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x47 (0x47 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.ChangeCursorPosition
struct UChapterListWidget_C_ChangeCursorPosition_Params
{
public:
	int32                                        NewCursorPosition;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceUpdate;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ToTop;                                             // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OnRightAxisX
struct UChapterListWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OnRightAxisY
struct UChapterListWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OnLeftAxisX
struct UChapterListWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OnLeftAxisY
struct UChapterListWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OnGamePadAxisX
struct UChapterListWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OnGamePadAxisY
struct UChapterListWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.WorldMapSlowCursorX
struct UChapterListWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.WorldMapSlowCursorY
struct UChapterListWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.HelpScrollAxis
struct UChapterListWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.OnListPaging
struct UChapterListWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.Tick
struct UChapterListWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB64 (0xB64 - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.ExecuteUbergraph_ChapterListWidget
struct UChapterListWidget_C_ExecuteUbergraph_ChapterListWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ChapterListWidget.ChapterListWidget_C.ChapterListEvent__DelegateSignature
struct UChapterListWidget_C_ChapterListEvent__DelegateSignature_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1660[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


