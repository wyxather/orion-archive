#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.PrologueConfirmFinalDialogCallback
struct UBarMenuStorySelect_C_PrologueConfirmFinalDialogCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.PrologueConfirmDialogCallback
struct UBarMenuStorySelect_C_PrologueConfirmDialogCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.Create Non Story Select
struct UBarMenuStorySelect_C_Create_Non_Story_Select_Params
{
public:
	bool                                         IsPrologue;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x668 (0x668 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OpenConfirmCouplingDialog
struct UBarMenuStorySelect_C_OpenConfirmCouplingDialog_Params
{
public:
	class FName                                  MessageLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.Set Event First Flag On Decide Exit
struct UBarMenuStorySelect_C_Set_Event_First_Flag_On_Decide_Exit_Params
{
public:
	TArray<struct FBarMenuStoryItem>             StoryList;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x450 (0x450 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OpenConfirmDialog
struct UBarMenuStorySelect_C_OpenConfirmDialog_Params
{
public:
	class FName                                  MessageLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x900 (0x900 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OpenFailedDialog
struct UBarMenuStorySelect_C_OpenFailedDialog_Params
{
public:
	class FName                                  MessageLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.SetUIParts
struct UBarMenuStorySelect_C_SetUIParts_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.GrayOutText
struct UBarMenuStorySelect_C_GrayOutText_Params
{
public:
	bool                                         IsGrayOut;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.Update Display Normal
struct UBarMenuStorySelect_C_Update_Display_Normal_Params
{
public:
	class UBarMenuPlayerSelect_C*                InputPin;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnClosedFailedDialog
struct UBarMenuStorySelect_C_OnClosedFailedDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnClosedConfirmDialog
struct UBarMenuStorySelect_C_OnClosedConfirmDialog_Params
{
public:
	int32                                        DialogSelectIndex;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.Setup
struct UBarMenuStorySelect_C_Setup_Params
{
public:
	class FName                                  WorldMapLabel;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsBarMode;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA9 (0xA9 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdateDisplay
struct UBarMenuStorySelect_C_UpdateDisplay_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.SetSelectIndex
struct UBarMenuStorySelect_C_SetSelectIndex_Params
{
public:
	int32                                        NewSelectIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fast;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.MoveCurosr
struct UBarMenuStorySelect_C_MoveCurosr_Params
{
public:
	bool                                         IsRight;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdateFocus
struct UBarMenuStorySelect_C_UpdateFocus_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdteCharacterpanel
struct UBarMenuStorySelect_C_UpdteCharacterpanel_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fast;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.SetupStoryData
struct UBarMenuStorySelect_C_SetupStoryData_Params
{
public:
	class FName                                  WorldMapLabel;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.IsRunning
struct UBarMenuStorySelect_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnRightAxisX
struct UBarMenuStorySelect_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnRightAxisY
struct UBarMenuStorySelect_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnLeftAxisX
struct UBarMenuStorySelect_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnLeftAxisY
struct UBarMenuStorySelect_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnGamePadAxisX
struct UBarMenuStorySelect_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnGamePadAxisY
struct UBarMenuStorySelect_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.OnListPaging
struct UBarMenuStorySelect_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.WorldMapSlowCursorX
struct UBarMenuStorySelect_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.WorldMapSlowCursorY
struct UBarMenuStorySelect_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.HelpScrollAxis
struct UBarMenuStorySelect_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.Tick
struct UBarMenuStorySelect_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BarMenuStorySelect.BarMenuStorySelect_C.ExecuteUbergraph_BarMenuStorySelect
struct UBarMenuStorySelect_C_ExecuteUbergraph_BarMenuStorySelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


