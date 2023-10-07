#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x30 (0x30 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.IsAllItemOverMaxCount
struct UWBP_FieldCommandPreviewPanel_Rob_C_IsAllItemOverMaxCount_Params
{
public:
	TArray<class FName>                          ItemLabels;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Return;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.GetAdditionalFooterGuide
struct UWBP_FieldCommandPreviewPanel_Rob_C_GetAdditionalFooterGuide_Params
{
public:
	TArray<struct FGuideData>                    Flow;                                              // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.Open
struct UWBP_FieldCommandPreviewPanel_Rob_C_Open_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OnClosedFailedDialog
struct UWBP_FieldCommandPreviewPanel_Rob_C_OnClosedFailedDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OnClosedConfirmDialog
struct UWBP_FieldCommandPreviewPanel_Rob_C_OnClosedConfirmDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.MakeItemListText
struct UWBP_FieldCommandPreviewPanel_Rob_C_MakeItemListText_Params
{
public:
	class FName                                  NPC_Label;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
};

// 0x4B8 (0x4B8 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OnSelectItem
struct UWBP_FieldCommandPreviewPanel_Rob_C_OnSelectItem_Params
{
public:
	int32                                        SelectCursorPosition;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.Decide
struct UWBP_FieldCommandPreviewPanel_Rob_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26 (0x26 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OutFocus
struct UWBP_FieldCommandPreviewPanel_Rob_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.Focus
struct UWBP_FieldCommandPreviewPanel_Rob_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x490 (0x490 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.MakeListItemData
struct UWBP_FieldCommandPreviewPanel_Rob_C_MakeListItemData_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMJListWidgetItemData>         ItemListData;                                      // 0x8(0x10)(Parm, OutParm)
	TArray<class FName>                          UnAcquiredItemsForRob;                             // 0x18(0x10)(Parm, OutParm)
};

// 0x70 (0x70 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.SetupPanel
struct UWBP_FieldCommandPreviewPanel_Rob_C_SetupPanel_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.IsFocusablePanel
struct UWBP_FieldCommandPreviewPanel_Rob_C_IsFocusablePanel_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


