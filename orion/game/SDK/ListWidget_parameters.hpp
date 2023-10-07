#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function ListWidget.ListWidget_C.IsUIPartsRunning
struct UListWidget_C_IsUIPartsRunning_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function ListWidget.ListWidget_C.IsPlayingAnim
struct UListWidget_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetIsDialogOpening
struct UListWidget_C_SetIsDialogOpening_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.GetIsDialogOpening
struct UListWidget_C_GetIsDialogOpening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ListWidget.ListWidget_C.GetSubItemListCount
struct UListWidget_C_GetSubItemListCount_Params
{
public:
	int32                                        SubItemIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidget.ListWidget_C.AddSubItemSpacer
struct UListWidget_C_AddSubItemSpacer_Params
{
public:
	class USpacer*                               Spacer;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.TreatCharaIdAsCategoryId
struct UListWidget_C_TreatCharaIdAsCategoryId_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ListWidget.ListWidget_C.SetLLineVisible
struct UListWidget_C_SetLLineVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ListWidget.ListWidget_C.Set Help Flip
struct UListWidget_C_Set_Help_Flip_Params
{
public:
	int32                                        FlipCount;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function ListWidget.ListWidget_C.IsForceHelpFlip
struct UListWidget_C_IsForceHelpFlip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ListWidget.ListWidget_C.SetSaveCursorMinMax
struct UListWidget_C_SetSaveCursorMinMax_Params
{
public:
	int32                                        Min;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.ChangeCategoryFromOutSide
struct UListWidget_C_ChangeCategoryFromOutSide_Params
{
public:
	bool                                         IsPlus;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetSaveCursorToChangeCategory
struct UListWidget_C_SetSaveCursorToChangeCategory_Params
{
public:
	bool                                         IsSave;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x56 (0x56 - 0x0)
// Function ListWidget.ListWidget_C.GetNearestSelectableCursorPos
struct UListWidget_C_GetNearestSelectableCursorPos_Params
{
public:
	int32                                        CheckCursorPos;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RetCursorPos;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C8 (0x3C8 - 0x0)
// Function ListWidget.ListWidget_C.GetListItemDataOnCursorPosWithSubItems
struct UListWidget_C_GetListItemDataOnCursorPosWithSubItems_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1631[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMJListWidgetItemData                 Output;                                            // 0x8(0xB8)(Parm, OutParm)
	int32                                        Index;                                             // 0xC0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x43 (0x43 - 0x0)
// Function ListWidget.ListWidget_C.InputSendSubItemCursor
struct UListWidget_C_InputSendSubItemCursor_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1632[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           TargetWidget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         End;                                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function ListWidget.ListWidget_C.SetupSubItem
struct UListWidget_C_SetupSubItem_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1633[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           TargetWidget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function ListWidget.ListWidget_C.Is Selectable Item Data
struct UListWidget_C_Is_Selectable_Item_Data_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ListWidget.ListWidget_C.IsMainCursor
struct UListWidget_C_IsMainCursor_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMain;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4E (0x4E - 0x0)
// Function ListWidget.ListWidget_C.CheckCursorWidgetChange
struct UListWidget_C_CheckCursorWidgetChange_Params
{
public:
	int32                                        BeforeCursor;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextCursor;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChange;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ListWidget.ListWidget_C.UpdateCursorWithSubItems
struct UListWidget_C_UpdateCursorWithSubItems_Params
{
public:
	bool                                         IsPlus;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1634[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CursorPos;                                         // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1FD (0x1FD - 0x0)
// Function ListWidget.ListWidget_C.MoveListCursorSubItem
struct UListWidget_C_MoveListCursorSubItem_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdateCursorPosOnly;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function ListWidget.ListWidget_C.Get Sub Item with Cursor Pos
struct UListWidget_C_Get_Sub_Item_with_Cursor_Pos_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1636[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CurrentSubItemWidget;                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMain;                                            // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x45 (0x45 - 0x0)
// Function ListWidget.ListWidget_C.GetCurrentCategoryItemNumWithSubItems
struct UListWidget_C_GetCurrentCategoryItemNumWithSubItems_Params
{
public:
	int32                                        ItemNum;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ListWidget.ListWidget_C.GetBottomCursorIndex
struct UListWidget_C_GetBottomCursorIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.GetTopCursorIndex
struct UListWidget_C_GetTopCursorIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ListWidget.ListWidget_C.SetListBodyHeight
struct UListWidget_C_SetListBodyHeight_Params
{
public:
	bool                                         NotUseScroll;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_163C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Height;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function ListWidget.ListWidget_C.MoveListCursorSubItem_Old
struct UListWidget_C_MoveListCursorSubItem_Old_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdateCursorPosOnly;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function ListWidget.ListWidget_C.RemoveSubItemWidget
struct UListWidget_C_RemoveSubItemWidget_Params
{
public:
	class UUserWidget*                           SubItem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ListWidget.ListWidget_C.AddSubItemWidget
struct UListWidget_C_AddSubItemWidget_Params
{
public:
	class UUserWidget*                           SubItem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InsertIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ListWidget.ListWidget_C.SetListVisible
struct UListWidget_C_SetListVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetCategorySelectFromOutSide
struct UListWidget_C_SetCategorySelectFromOutSide_Params
{
public:
	bool                                         CategorySelect;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ListWidget.ListWidget_C.Init
struct UListWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetDecideDisable
struct UListWidget_C_SetDecideDisable_Params
{
public:
	bool                                         IsDisable;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ListWidget.ListWidget_C.GetSelectedItemData
struct UListWidget_C_GetSelectedItemData_Params
{
public:
	struct FMJListWidgetItemData                 Output;                                            // 0x0(0xB8)(Parm, OutParm)
};

// 0x24 (0x24 - 0x0)
// Function ListWidget.ListWidget_C.SetParamFromOutside
struct UListWidget_C_SetParamFromOutside_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorIndex;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ListWidget.ListWidget_C.GetEnableCategoryNum
struct UListWidget_C_GetEnableCategoryNum_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.IsVisibleHelp
struct UListWidget_C_IsVisibleHelp_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ListWidget.ListWidget_C.PageScroll
struct UListWidget_C_PageScroll_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function ListWidget.ListWidget_C.SetDefaultCursorPos
struct UListWidget_C_SetDefaultCursorPos_Params
{
public:
	int32                                        DefaultCursorPos;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetUseHelp
struct UListWidget_C_SetUseHelp_Params
{
public:
	bool                                         UseDetailText;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function ListWidget.ListWidget_C.SetCategory
struct UListWidget_C_SetCategory_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.IsCategorySelect
struct UListWidget_C_IsCategorySelect_Params
{
public:
	bool                                         CategorySelect;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetVisibleHeader
struct UListWidget_C_SetVisibleHeader_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListWidget.ListWidget_C.SetExHeaderWidget
struct UListWidget_C_SetExHeaderWidget_Params
{
public:
	class UUserWidget*                           ExWidget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ListWidget.ListWidget_C.IsListEmpty
struct UListWidget_C_IsListEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function ListWidget.ListWidget_C.GetItemWidgetForVirtualScroll
struct UListWidget_C_GetItemWidgetForVirtualScroll_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1645[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJListItemWidget*                     Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function ListWidget.ListWidget_C.FitScrollAreaToContents
struct UListWidget_C_FitScrollAreaToContents_Params
{
public:
	bool                                         NotUseScroll;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function ListWidget.ListWidget_C.UpdateScrollPos
struct UListWidget_C_UpdateScrollPos_Params
{
public:
	bool                                         IsUpdated;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetupEnableCursor
struct UListWidget_C_SetupEnableCursor_Params
{
public:
	bool                                         EnableCursor;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ListWidget.ListWidget_C.SetupListTitle
struct UListWidget_C_SetupListTitle_Params
{
public:
	float                                        TitleTextPaddingTop;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function ListWidget.ListWidget_C.ReserveItemWidget
struct UListWidget_C_ReserveItemWidget_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function ListWidget.ListWidget_C.GetFreeCategoryTab
struct UListWidget_C_GetFreeCategoryTab_Params
{
public:
	class UListCategoryWidget_C*                 Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function ListWidget.ListWidget_C.ReserveCategoryTab
struct UListWidget_C_ReserveCategoryTab_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x152 (0x152 - 0x0)
// Function ListWidget.ListWidget_C.UpdateHelpText
struct UListWidget_C_UpdateHelpText_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function ListWidget.ListWidget_C.Play List SE
struct UListWidget_C_Play_List_SE_Params
{
public:
	enum class ELISTWIDGET_SE_TYPE               SeType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function ListWidget.ListWidget_C.SetSE
struct UListWidget_C_SetSE_Params
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

// 0x1A (0x1A - 0x0)
// Function ListWidget.ListWidget_C.SetRightFrameWidget
struct UListWidget_C_SetRightFrameWidget_Params
{
public:
	class UUserWidget*                           RightFrameWidget;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidget.ListWidget_C.SetCategoryData
struct UListWidget_C_SetCategoryData_Params
{
public:
	TArray<struct FListWidgetCategory>           CategoryData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetupListItem
struct UListWidget_C_SetupListItem_Params
{
public:
	enum class ELIST_NUM_UNIT_TYPE               NumUnitType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function ListWidget.ListWidget_C.SetupList
struct UListWidget_C_SetupList_Params
{
public:
	bool                                         UseCategory;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseListAnimation;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.GetSavedCursorPosition
struct UListWidget_C_GetSavedCursorPosition_Params
{
public:
	int32                                        SavedCursorPos;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDA (0xDA - 0x0)
// Function ListWidget.ListWidget_C.UpdateListItemByAllIdx
struct UListWidget_C_UpdateListItemByAllIdx_Params
{
public:
	int32                                        ItemAllIdx;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1654[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMJListWidgetItemData                 ItemData;                                          // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function ListWidget.ListWidget_C.SetNextState
struct UListWidget_C_SetNextState_Params
{
public:
	enum class ELISTWIDGET_STATE                 NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListWidget.ListWidget_C.SetListCaption
struct UListWidget_C_SetListCaption_Params
{
public:
	class FText                                  CaptionText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1C (0x1C - 0x0)
// Function ListWidget.ListWidget_C.CallEvent
struct UListWidget_C_CallEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function ListWidget.ListWidget_C.GetCurrentCategoryItemWidget
struct UListWidget_C_GetCurrentCategoryItemWidget_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1655[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJListItemWidget*                     Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function ListWidget.ListWidget_C.RemoveListRightSideWidget
struct UListWidget_C_RemoveListRightSideWidget_Params
{
public:
	class UUserWidget*                           List_Right_Side_Widget;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidget.ListWidget_C.AddListRightSideWidget
struct UListWidget_C_AddListRightSideWidget_Params
{
public:
	class UUserWidget*                           List_Right_Side_Widget;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.SetUseAnimaiton
struct UListWidget_C_SetUseAnimaiton_Params
{
public:
	bool                                         UseAnimation;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function ListWidget.ListWidget_C.RemoveRightWidget
struct UListWidget_C_RemoveRightWidget_Params
{
public:
	class UUserWidget*                           RightWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidget.ListWidget_C.AddRightWidget
struct UListWidget_C_AddRightWidget_Params
{
public:
	class UUserWidget*                           RightWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function ListWidget.ListWidget_C.Debug_PrintEnableCategoryList
struct UListWidget_C_Debug_PrintEnableCategoryList_Params
{
public:
	class FString                                TempString1;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function ListWidget.ListWidget_C.GetCurrentCategoryId
struct UListWidget_C_GetCurrentCategoryId_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidget.ListWidget_C.CategoryCursorPosToCategoryId
struct UListWidget_C_CategoryCursorPosToCategoryId_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryId;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function ListWidget.ListWidget_C.GetCategoryTabWidget
struct UListWidget_C_GetCategoryTabWidget_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_165B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UListCategoryWidget_C*                 Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function ListWidget.ListWidget_C.RemoveBottomWidget
struct UListWidget_C_RemoveBottomWidget_Params
{
public:
	class UUserWidget*                           BottomWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListWidget.ListWidget_C.AddBottomWidget
struct UListWidget_C_AddBottomWidget_Params
{
public:
	class UUserWidget*                           BottomWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContainSubItem;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x74 (0x74 - 0x0)
// Function ListWidget.ListWidget_C.Calc Current Item Relative Pos Y
struct UListWidget_C_Calc_Current_Item_Relative_Pos_Y_Params
{
public:
	float                                        RelativePosY;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListWidget.ListWidget_C.SetRangeRightFrameWidgetOffsetY
struct UListWidget_C_SetRangeRightFrameWidgetOffsetY_Params
{
public:
	float                                        MinOffsetY;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxOffsetY;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListWidget.ListWidget_C.SetRightFrameWidgetOffsetY
struct UListWidget_C_SetRightFrameWidgetOffsetY_Params
{
public:
	float                                        In_Size_Y;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function ListWidget.ListWidget_C.GetFreeItemWidget
struct UListWidget_C_GetFreeItemWidget_Params
{
public:
	class UMJListItemWidget*                     ItemWidget;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14A (0x14A - 0x0)
// Function ListWidget.ListWidget_C.UpdateListAllItem
struct UListWidget_C_UpdateListAllItem_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ListWidget.ListWidget_C.OutFocusCategory
struct UListWidget_C_OutFocusCategory_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ListWidget.ListWidget_C.FocusCategory
struct UListWidget_C_FocusCategory_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidget.ListWidget_C.SetAllItems
struct UListWidget_C_SetAllItems_Params
{
public:
	TArray<struct FMJListWidgetItemData>         AllItemList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function ListWidget.ListWidget_C.GetSelectedItemWidget
struct UListWidget_C_GetSelectedItemWidget_Params
{
public:
	class UMJListItemWidget*                     Item;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function ListWidget.ListWidget_C.OutFocusCurrentItem
struct UListWidget_C_OutFocusCurrentItem_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ListWidget.ListWidget_C.SetVisibleHelp
struct UListWidget_C_SetVisibleHelp_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ListWidget.ListWidget_C.GetRightSideWidget
struct UListWidget_C_GetRightSideWidget_Params
{
public:
	class UUserWidget*                           RightSideWidget;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListWidget.ListWidget_C.GetCurrentCategoryItemNum
struct UListWidget_C_GetCurrentCategoryItemNum_Params
{
public:
	int32                                        ItemNum;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function ListWidget.ListWidget_C.UpdateCurrentItemList
struct UListWidget_C_UpdateCurrentItemList_Params
{
public:
	TArray<struct FMJListWidgetItemData>         NewParam;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ListWidget.ListWidget_C.Set Item Detail Widget
struct UListWidget_C_Set_Item_Detail_Widget_Params
{
public:
	class UListItemDetailWidget_C*               ItemDetailWidget;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function ListWidget.ListWidget_C.DecideMenu
struct UListWidget_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function ListWidget.ListWidget_C.CancelMenu
struct UListWidget_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.CloseList
struct UListWidget_C_CloseList_Params
{
public:
	bool                                         IsPlayNullCloseAnim;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.IsActive
struct UListWidget_C_IsActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function ListWidget.ListWidget_C.AddCategory
struct UListWidget_C_AddCategory_Params
{
public:
	struct FListWidgetCategory                   CategoryData;                                      // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x9 (0x9 - 0x0)
// Function ListWidget.ListWidget_C.IsEmpty
struct UListWidget_C_IsEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function ListWidget.ListWidget_C.UpdateCategoryFocus
struct UListWidget_C_UpdateCategoryFocus_Params
{
public:
	int32                                        NewCategory;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function ListWidget.ListWidget_C.MoveListCursor
struct UListWidget_C_MoveListCursor_Params
{
public:
	bool                                         MoveToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdateCursorPosOnly;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function ListWidget.ListWidget_C.UpdateListCaption
struct UListWidget_C_UpdateListCaption_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function ListWidget.ListWidget_C.ChangeCategory
struct UListWidget_C_ChangeCategory_Params
{
public:
	bool                                         ModeToPlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x35 (0x35 - 0x0)
// Function ListWidget.ListWidget_C.ChangeCursorPosition
struct UListWidget_C_ChangeCursorPosition_Params
{
public:
	int32                                        NewCursorPosition;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceUpdate;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.OnRightAxisX
struct UListWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.OnRightAxisY
struct UListWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.OnLeftAxisX
struct UListWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.OnLeftAxisY
struct UListWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.OnGamePadAxisX
struct UListWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.OnGamePadAxisY
struct UListWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.WorldMapSlowCursorX
struct UListWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.WorldMapSlowCursorY
struct UListWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidget.ListWidget_C.OnListPaging
struct UListWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function ListWidget.ListWidget_C.Tick
struct UListWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidget.ListWidget_C.HelpScrollAxis
struct UListWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x291 (0x291 - 0x0)
// Function ListWidget.ListWidget_C.ExecuteUbergraph_ListWidget
struct UListWidget_C_ExecuteUbergraph_ListWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ListWidget.ListWidget_C.ListEvent__DelegateSignature
struct UListWidget_C_ListEvent__DelegateSignature_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1672[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


