#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x10 (0x10 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.SetScrollOffset
struct UWBP_AcqListViewWidget_C_SetScrollOffset_Params
{
public:
	float                                        ScrollOffset;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.UpdateSelectedItem
struct UWBP_AcqListViewWidget_C_UpdateSelectedItem_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             DisplayRange;                                      // 0x4(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.PagingCursor
struct UWBP_AcqListViewWidget_C_PagingCursor_Params
{
public:
	uint8                                        Dir;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnPaging_Internal
struct UWBP_AcqListViewWidget_C_OnPaging_Internal_Params
{
public:
	uint8                                        Dir;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetSelectedIndex
struct UWBP_AcqListViewWidget_C_GetSelectedIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetEntryItems
struct UWBP_AcqListViewWidget_C_GetEntryItems_Params
{
public:
	TArray<class UAcqListViewEntryItemBase*>     ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm)
};

// 0x1C (0x1C - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.Setup
struct UWBP_AcqListViewWidget_C_Setup_Params
{
public:
	TArray<class UAcqListViewEntryItemBase*>     EntryItems;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.SetSelectedIndex
struct UWBP_AcqListViewWidget_C_SetSelectedIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetListView
struct UWBP_AcqListViewWidget_C_GetListView_Params
{
public:
	class UAcqListView*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetEntryItemNum
struct UWBP_AcqListViewWidget_C_GetEntryItemNum_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.SetEntryItems
struct UWBP_AcqListViewWidget_C_SetEntryItems_Params
{
public:
	TArray<class UAcqListViewEntryItemBase*>     EntryItems;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xAD (0xAD - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.MoveCursor
struct UWBP_AcqListViewWidget_C_MoveCursor_Params
{
public:
	uint8                                        Dir;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnRightAxisX
struct UWBP_AcqListViewWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnRightAxisY
struct UWBP_AcqListViewWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnLeftAxisX
struct UWBP_AcqListViewWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnLeftAxisY
struct UWBP_AcqListViewWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnGamePadAxisX
struct UWBP_AcqListViewWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnGamePadAxisY
struct UWBP_AcqListViewWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.WorldMapSlowCursorX
struct UWBP_AcqListViewWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.WorldMapSlowCursorY
struct UWBP_AcqListViewWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.HelpScrollAxis
struct UWBP_AcqListViewWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.PreConstruct
struct UWBP_AcqListViewWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnListPaging
struct UWBP_AcqListViewWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.ExecuteUbergraph_WBP_AcqListViewWidget
struct UWBP_AcqListViewWidget_C_ExecuteUbergraph_WBP_AcqListViewWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


