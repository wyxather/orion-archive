#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function BPI_ListSubItem.BPI_ListSubItem_C.SetSelectIndex
struct IBPI_ListSubItem_C_SetSelectIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_ListSubItem.BPI_ListSubItem_C.GetItemListWidget
struct IBPI_ListSubItem_C_GetItemListWidget_Params
{
public:
	TArray<class UMJListItemWidget*>             ListWidget;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BPI_ListSubItem.BPI_ListSubItem_C.GetItemList
struct IBPI_ListSubItem_C_GetItemList_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ItemList;                                          // 0x0(0x10)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function BPI_ListSubItem.BPI_ListSubItem_C.GetItemLength
struct IBPI_ListSubItem_C_GetItemLength_Params
{
public:
	int32                                        Length;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_ListSubItem.BPI_ListSubItem_C.OnCursorDown
struct IBPI_ListSubItem_C_OnCursorDown_Params
{
public:
	bool                                         End;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_ListSubItem.BPI_ListSubItem_C.OnCursorUp
struct IBPI_ListSubItem_C_OnCursorUp_Params
{
public:
	bool                                         End;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_ListSubItem.BPI_ListSubItem_C.EnableSelect
struct IBPI_ListSubItem_C_EnableSelect_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


