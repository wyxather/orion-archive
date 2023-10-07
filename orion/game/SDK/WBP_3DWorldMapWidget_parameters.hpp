#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x15 (0x15 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.UpdateGlobe
struct UWBP_3DWorldMapWidget_C_UpdateGlobe_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.IsClosing
struct UWBP_3DWorldMapWidget_C_IsClosing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.IsOpening
struct UWBP_3DWorldMapWidget_C_IsOpening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.AppendArray
struct UWBP_3DWorldMapWidget_C_AppendArray_Params
{
public:
	TArray<struct FGuideData>                    ArrayA;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FGuideData>                    ArrayB;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FGuideData>                    Array;                                             // 0x20(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.IsFastTraveling
struct UWBP_3DWorldMapWidget_C_IsFastTraveling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.DecideMenu
struct UWBP_3DWorldMapWidget_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.CancelMenu
struct UWBP_3DWorldMapWidget_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.GetAutoRotateSpeed
struct UWBP_3DWorldMapWidget_C_GetAutoRotateSpeed_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.MakeFooterGuideData
struct UWBP_3DWorldMapWidget_C_MakeFooterGuideData_Params
{
public:
	enum class EWorldMapZoomType                 ZoomType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldMapTable                        SelectedIconData;                                  // 0x8(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FGuideData>                    NewParam;                                          // 0x98(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SetFooter
struct UWBP_3DWorldMapWidget_C_SetFooter_Params
{
public:
	class UMenuFooter_C*                         Footer;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SetSetectedIcon
struct UWBP_3DWorldMapWidget_C_SetSetectedIcon_Params
{
public:
	class UWorldMapIconBase*                     SelectedIcon;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.UpdateCursorSnap
struct UWBP_3DWorldMapWidget_C_UpdateCursorSnap_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OnClosedFastTravelFailedDialog
struct UWBP_3DWorldMapWidget_C_OnClosedFastTravelFailedDialog_Params
{
public:
	int32                                        Selection;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.OnClosedFastTravelConfirmDialog
struct UWBP_3DWorldMapWidget_C_OnClosedFastTravelConfirmDialog_Params
{
public:
	int32                                        Selection;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.Tick
struct UWBP_3DWorldMapWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.GetLeftAxisX
struct UWBP_3DWorldMapWidget_C_GetLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.GetLeftAxisY
struct UWBP_3DWorldMapWidget_C_GetLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SubMenu_WorldMapSlowCursorX
struct UWBP_3DWorldMapWidget_C_SubMenu_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.SubMenu_WorldMapSlowCursorY
struct UWBP_3DWorldMapWidget_C_SubMenu_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35C (0x35C - 0x0)
// Function WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C.ExecuteUbergraph_WBP_3DWorldMapWidget
struct UWBP_3DWorldMapWidget_C_ExecuteUbergraph_WBP_3DWorldMapWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


