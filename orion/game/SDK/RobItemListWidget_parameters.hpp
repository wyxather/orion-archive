#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x9 (0x9 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.IsSelectingListItem
struct URobItemListWidget_C_IsSelectingListItem_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SetCaptionText
struct URobItemListWidget_C_SetCaptionText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SetButtonTexts
struct URobItemListWidget_C_SetButtonTexts_Params
{
public:
	TArray<class FText>                          Texts;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC (0xC - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.GetSelectListItemIndex
struct URobItemListWidget_C_GetSelectListItemIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SetState
struct URobItemListWidget_C_SetState_Params
{
public:
	enum class EDIALOG_STATE                     NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SetHelpVisiblity
struct URobItemListWidget_C_SetHelpVisiblity_Params
{
public:
	bool                                         HelpVisiblity;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Play_SE;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SelectFocus
struct URobItemListWidget_C_SelectFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SetUnitType
struct URobItemListWidget_C_SetUnitType_Params
{
public:
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.IsRunning
struct URobItemListWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.GetCursorPosition
struct URobItemListWidget_C_GetCursorPosition_Params
{
public:
	int32                                        CursorPosition;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.CursorUpdate
struct URobItemListWidget_C_CursorUpdate_Params
{
public:
	int32                                        NewCursor;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SetListItem
struct URobItemListWidget_C_SetListItem_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListItemData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CursorReset;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SetListColumn
struct URobItemListWidget_C_SetListColumn_Params
{
public:
	class FName                                  Col1;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.OnRightAxisX
struct URobItemListWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.OnRightAxisY
struct URobItemListWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.OnLeftAxisX
struct URobItemListWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.OnLeftAxisY
struct URobItemListWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.OnGamePadAxisX
struct URobItemListWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.OnGamePadAxisY
struct URobItemListWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.OnListPaging
struct URobItemListWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.WorldMapSlowCursorX
struct URobItemListWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.WorldMapSlowCursorY
struct URobItemListWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.HelpScrollAxis
struct URobItemListWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.Tick
struct URobItemListWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC6 (0xC6 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.ExecuteUbergraph_RobItemListWidget
struct URobItemListWidget_C_ExecuteUbergraph_RobItemListWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RobItemListWidget.RobItemListWidget_C.SelectedEvent__DelegateSignature
struct URobItemListWidget_C_SelectedEvent__DelegateSignature_Params
{
public:
	int32                                        SelectCursorPosition;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


