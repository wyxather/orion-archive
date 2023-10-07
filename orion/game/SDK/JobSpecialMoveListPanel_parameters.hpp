#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x10 (0x10 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.GetItemListWidget
struct UJobSpecialMoveListPanel_C_GetItemListWidget_Params
{
public:
	TArray<class UMJListItemWidget*>             ListWidget;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.GetItemList
struct UJobSpecialMoveListPanel_C_GetItemList_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ItemList;                                          // 0x0(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.GetItemLength
struct UJobSpecialMoveListPanel_C_GetItemLength_Params
{
public:
	int32                                        Length;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.OnCursorDown
struct UJobSpecialMoveListPanel_C_OnCursorDown_Params
{
public:
	bool                                         End;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.OnCursorUp
struct UJobSpecialMoveListPanel_C_OnCursorUp_Params
{
public:
	bool                                         End;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.EnableSelect
struct UJobSpecialMoveListPanel_C_EnableSelect_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.OpenHelpText
struct UJobSpecialMoveListPanel_C_OpenHelpText_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7DD (0x7DD - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.SetParam
struct UJobSpecialMoveListPanel_C_SetParam_Params
{
public:
	int32                                        PlayerID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.PlayFocus
struct UJobSpecialMoveListPanel_C_PlayFocus_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.PlayOutFocus
struct UJobSpecialMoveListPanel_C_PlayOutFocus_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.SetSelectIndex
struct UJobSpecialMoveListPanel_C_SetSelectIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.ExecuteUbergraph_JobSpecialMoveListPanel
struct UJobSpecialMoveListPanel_C_ExecuteUbergraph_JobSpecialMoveListPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


