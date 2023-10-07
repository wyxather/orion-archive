#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.SelectButton
struct UUICommonDialogBP_C_SelectButton_Params
{
public:
	int32                                        buttonIdx;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.ClosePlayerMoney
struct UUICommonDialogBP_C_ClosePlayerMoney_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OpenPlayerMoney
struct UUICommonDialogBP_C_OpenPlayerMoney_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4D (0x4D - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.ButtonVisible
struct UUICommonDialogBP_C_ButtonVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.SettingSelectSE
struct UUICommonDialogBP_C_SettingSelectSE_Params
{
public:
	TArray<class FName>                          SelectSE;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.CloseDialog
struct UUICommonDialogBP_C_CloseDialog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.IsChangeStateOpenFinish
struct UUICommonDialogBP_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.IsChangeStateCloseFinish
struct UUICommonDialogBP_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.SetReference
struct UUICommonDialogBP_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xCC (0xCC - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OpenDialog
struct UUICommonDialogBP_C_OpenDialog_Params
{
public:
	struct FMJUICommonDialogParam                Param;                                             // 0x0(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.SetSelectSE
struct UUICommonDialogBP_C_SetSelectSE_Params
{
public:
	TArray<class FName>                          SelectSE;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x6 (0x6 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.DetachWidget
struct UUICommonDialogBP_C_DetachWidget_Params
{
public:
	bool                                         DetachCaption;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DetachDetail;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.IsRunning
struct UUICommonDialogBP_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.DetailAttachWidget
struct UUICommonDialogBP_C_DetailAttachWidget_Params
{
public:
	class UUserWidget*                           DetailAttachWidget;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachOnTop;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.CaptionAttachWidget
struct UUICommonDialogBP_C_CaptionAttachWidget_Params
{
public:
	class UUserWidget*                           CaptionAttachWidget;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachOnTop;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseSeparation;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.GetDialogParam
struct UUICommonDialogBP_C_GetDialogParam_Params
{
public:
	struct FKSUICommonDialogParam                NowParam;                                          // 0x0(0x60)(Parm, OutParm)
};

// 0x2 (0x2 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.IsDialogOpen
struct UUICommonDialogBP_C_IsDialogOpen_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.GetSelectData
struct UUICommonDialogBP_C_GetSelectData_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F03[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FocusIndex;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.DialogCancel
struct UUICommonDialogBP_C_DialogCancel_Params
{
public:
	bool                                         IsCancel;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.DialogDecide
struct UUICommonDialogBP_C_DialogDecide_Params
{
public:
	bool                                         IsDecide;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x86 (0x86 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.CursorUpdate
struct UUICommonDialogBP_C_CursorUpdate_Params
{
public:
	int32                                        New_Cursor;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fast;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MoveCursor;                                        // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.CursorDown
struct UUICommonDialogBP_C_CursorDown_Params
{
public:
	bool                                         MoveCursor;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.CursorUp
struct UUICommonDialogBP_C_CursorUp_Params
{
public:
	bool                                         MoveCursor;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OnRightAxisX
struct UUICommonDialogBP_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OnRightAxisY
struct UUICommonDialogBP_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OnLeftAxisX
struct UUICommonDialogBP_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OnLeftAxisY
struct UUICommonDialogBP_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OnGamePadAxisX
struct UUICommonDialogBP_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OnGamePadAxisY
struct UUICommonDialogBP_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.OnListPaging
struct UUICommonDialogBP_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.WorldMapSlowCursorX
struct UUICommonDialogBP_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.WorldMapSlowCursorY
struct UUICommonDialogBP_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.HelpScrollAxis
struct UUICommonDialogBP_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.ExecuteUbergraph_UICommonDialogBP
struct UUICommonDialogBP_C_ExecuteUbergraph_UICommonDialogBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UICommonDialogBP.UICommonDialogBP_C.CommonDialogClose__DelegateSignature
struct UUICommonDialogBP_C_CommonDialogClose__DelegateSignature_Params
{
public:
	int32                                        SelectCursor;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


