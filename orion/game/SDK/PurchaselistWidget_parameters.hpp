#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xC (0xC - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetPercenTextByLanguage
struct UPurchaselistWidget_C_SetPercenTextByLanguage_Params
{
public:
	class UMJListItemWidget*                     NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetState
struct UPurchaselistWidget_C_SetState_Params
{
public:
	enum class EDIALOG_STATE                     Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetHelpVisiblity
struct UPurchaselistWidget_C_SetHelpVisiblity_Params
{
public:
	bool                                         HelpVisiblity;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Play_SE;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SelectFocus
struct UPurchaselistWidget_C_SelectFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetUnitType
struct UPurchaselistWidget_C_SetUnitType_Params
{
public:
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetVisibleDetailText
struct UPurchaselistWidget_C_SetVisibleDetailText_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.IsRunning
struct UPurchaselistWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.GetCursorPosition
struct UPurchaselistWidget_C_GetCursorPosition_Params
{
public:
	int32                                        CursorPosition;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.CursorUpdate
struct UPurchaselistWidget_C_CursorUpdate_Params
{
public:
	int32                                        NewCursor;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x66 (0x66 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetListItem
struct UPurchaselistWidget_C_SetListItem_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListItemData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CursorReset;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetListColumn
struct UPurchaselistWidget_C_SetListColumn_Params
{
public:
	class FName                                  Col1;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Col2;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Col3;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SetCaption
struct UPurchaselistWidget_C_SetCaption_Params
{
public:
	class FText                                  CaptionText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.OnRightAxisX
struct UPurchaselistWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.OnRightAxisY
struct UPurchaselistWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.OnLeftAxisX
struct UPurchaselistWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.OnLeftAxisY
struct UPurchaselistWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.OnGamePadAxisX
struct UPurchaselistWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.OnGamePadAxisY
struct UPurchaselistWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.OnListPaging
struct UPurchaselistWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.WorldMapSlowCursorX
struct UPurchaselistWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.WorldMapSlowCursorY
struct UPurchaselistWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.HelpScrollAxis
struct UPurchaselistWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.Tick
struct UPurchaselistWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC6 (0xC6 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.ExecuteUbergraph_PurchaselistWidget
struct UPurchaselistWidget_C_ExecuteUbergraph_PurchaselistWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PurchaselistWidget.PurchaselistWidget_C.SelectedEvent__DelegateSignature
struct UPurchaselistWidget_C_SelectedEvent__DelegateSignature_Params
{
public:
	int32                                        SelectCursorPosition;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


