#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2D (0x2D - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.IsAnyKey
struct AKSPlayerControllerBP_C_IsAnyKey_Params
{
public:
	struct FKey                                  InputKey;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Output;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CheckInputType
struct AKSPlayerControllerBP_C_CheckInputType_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseEventY
struct AKSPlayerControllerBP_C_MouseEventY_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseEventX
struct AKSPlayerControllerBP_C_MouseEventX_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseYEvent
struct AKSPlayerControllerBP_C_MouseYEvent_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.Mouse XEvent
struct AKSPlayerControllerBP_C_Mouse_XEvent_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x205 (0x205 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SettingOldConfig
struct AKSPlayerControllerBP_C_SettingOldConfig_Params
{
public:
	bool                                         IsRemove;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CanControlDebugMenu
struct AKSPlayerControllerBP_C_CanControlDebugMenu_Params
{
public:
	bool                                         Can_Control;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CanControlMainMenu
struct AKSPlayerControllerBP_C_CanControlMainMenu_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CanControlPlayer
struct AKSPlayerControllerBP_C_CanControlPlayer_Params
{
public:
	bool                                         IsControlPlayer;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SetControlCharacter
struct AKSPlayerControllerBP_C_SetControlCharacter_Params
{
public:
	class APawn*                                 ControlCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 ControledCharacter;                                // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SetDialogUI
struct AKSPlayerControllerBP_C_SetDialogUI_Params
{
public:
	class UWidget*                               Dialog;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SetUI
struct AKSPlayerControllerBP_C_SetUI_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.getWidgetHandler
struct AKSPlayerControllerBP_C_GetWidgetHandler_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_Dash_K2Node_InputActionEvent_76
struct AKSPlayerControllerBP_C_InpActEvt_Dash_K2Node_InputActionEvent_76_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_Dash_K2Node_InputActionEvent_75
struct AKSPlayerControllerBP_C_InpActEvt_Dash_K2Node_InputActionEvent_75_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_FieldCommand_K2Node_InputActionEvent_74
struct AKSPlayerControllerBP_C_InpActEvt_FieldCommand_K2Node_InputActionEvent_74_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_PlayerAction_K2Node_InputActionEvent_73
struct AKSPlayerControllerBP_C_InpActEvt_PlayerAction_K2Node_InputActionEvent_73_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MainMenuOpenClose_K2Node_InputActionEvent_72
struct AKSPlayerControllerBP_C_InpActEvt_MainMenuOpenClose_K2Node_InputActionEvent_72_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuPlusButton_K2Node_InputActionEvent_71
struct AKSPlayerControllerBP_C_InpActEvt_MenuPlusButton_K2Node_InputActionEvent_71_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuMinusButton_K2Node_InputActionEvent_70
struct AKSPlayerControllerBP_C_InpActEvt_MenuMinusButton_K2Node_InputActionEvent_70_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_BattleSpeedUpButton_K2Node_InputActionEvent_69
struct AKSPlayerControllerBP_C_InpActEvt_BattleSpeedUpButton_K2Node_InputActionEvent_69_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_EventSpeedUpButton_K2Node_InputActionEvent_68
struct AKSPlayerControllerBP_C_InpActEvt_EventSpeedUpButton_K2Node_InputActionEvent_68_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_EventSpeedDownButton_K2Node_InputActionEvent_67
struct AKSPlayerControllerBP_C_InpActEvt_EventSpeedDownButton_K2Node_InputActionEvent_67_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_RadarMap_K2Node_InputActionEvent_66
struct AKSPlayerControllerBP_C_InpActEvt_RadarMap_K2Node_InputActionEvent_66_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_65
struct AKSPlayerControllerBP_C_InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_65_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_64
struct AKSPlayerControllerBP_C_InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_64_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_63
struct AKSPlayerControllerBP_C_InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_63_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_62
struct AKSPlayerControllerBP_C_InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_62_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_61
struct AKSPlayerControllerBP_C_InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_61_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_60
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_60_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_59
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_59_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_58
struct AKSPlayerControllerBP_C_InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_58_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_57
struct AKSPlayerControllerBP_C_InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_57_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_56
struct AKSPlayerControllerBP_C_InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_56_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_55
struct AKSPlayerControllerBP_C_InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_55_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_54
struct AKSPlayerControllerBP_C_InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_54_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_53
struct AKSPlayerControllerBP_C_InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_53_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_52
struct AKSPlayerControllerBP_C_InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_52_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_51
struct AKSPlayerControllerBP_C_InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_51_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_50
struct AKSPlayerControllerBP_C_InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_50_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_49
struct AKSPlayerControllerBP_C_InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_49_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_48
struct AKSPlayerControllerBP_C_InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_48_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_47
struct AKSPlayerControllerBP_C_InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_47_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_46
struct AKSPlayerControllerBP_C_InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_46_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_45
struct AKSPlayerControllerBP_C_InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_45_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_44
struct AKSPlayerControllerBP_C_InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_44_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_43
struct AKSPlayerControllerBP_C_InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_43_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_42
struct AKSPlayerControllerBP_C_InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_42_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_41
struct AKSPlayerControllerBP_C_InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_41_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_40
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_40_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_39
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_39_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_38
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_38_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_37
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_37_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollup_K2Node_InputActionEvent_36
struct AKSPlayerControllerBP_C_InpActEvt_HelpScrollup_K2Node_InputActionEvent_36_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollup_K2Node_InputActionEvent_35
struct AKSPlayerControllerBP_C_InpActEvt_HelpScrollup_K2Node_InputActionEvent_35_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollDown_K2Node_InputActionEvent_34
struct AKSPlayerControllerBP_C_InpActEvt_HelpScrollDown_K2Node_InputActionEvent_34_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollDown_K2Node_InputActionEvent_33
struct AKSPlayerControllerBP_C_InpActEvt_HelpScrollDown_K2Node_InputActionEvent_33_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUp_K2Node_InputActionEvent_32
struct AKSPlayerControllerBP_C_InpActEvt_MenuUp_K2Node_InputActionEvent_32_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUp_K2Node_InputActionEvent_31
struct AKSPlayerControllerBP_C_InpActEvt_MenuUp_K2Node_InputActionEvent_31_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDown_K2Node_InputActionEvent_30
struct AKSPlayerControllerBP_C_InpActEvt_MenuDown_K2Node_InputActionEvent_30_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDown_K2Node_InputActionEvent_29
struct AKSPlayerControllerBP_C_InpActEvt_MenuDown_K2Node_InputActionEvent_29_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeft_K2Node_InputActionEvent_28
struct AKSPlayerControllerBP_C_InpActEvt_MenuLeft_K2Node_InputActionEvent_28_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeft_K2Node_InputActionEvent_27
struct AKSPlayerControllerBP_C_InpActEvt_MenuLeft_K2Node_InputActionEvent_27_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRight_K2Node_InputActionEvent_26
struct AKSPlayerControllerBP_C_InpActEvt_MenuRight_K2Node_InputActionEvent_26_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRight_K2Node_InputActionEvent_25
struct AKSPlayerControllerBP_C_InpActEvt_MenuRight_K2Node_InputActionEvent_25_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDecide_K2Node_InputActionEvent_24
struct AKSPlayerControllerBP_C_InpActEvt_MenuDecide_K2Node_InputActionEvent_24_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuCancel_K2Node_InputActionEvent_23
struct AKSPlayerControllerBP_C_InpActEvt_MenuCancel_K2Node_InputActionEvent_23_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonX_K2Node_InputActionEvent_22
struct AKSPlayerControllerBP_C_InpActEvt_MenuButtonX_K2Node_InputActionEvent_22_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonY_K2Node_InputActionEvent_21
struct AKSPlayerControllerBP_C_InpActEvt_MenuButtonY_K2Node_InputActionEvent_21_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLB_K2Node_InputActionEvent_20
struct AKSPlayerControllerBP_C_InpActEvt_MenuLB_K2Node_InputActionEvent_20_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRB_K2Node_InputActionEvent_19
struct AKSPlayerControllerBP_C_InpActEvt_MenuRB_K2Node_InputActionEvent_19_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRB_K2Node_InputActionEvent_18
struct AKSPlayerControllerBP_C_InpActEvt_MenuRB_K2Node_InputActionEvent_18_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_SelectButton_K2Node_InputActionEvent_17
struct AKSPlayerControllerBP_C_InpActEvt_SelectButton_K2Node_InputActionEvent_17_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRStickButton_K2Node_InputActionEvent_16
struct AKSPlayerControllerBP_C_InpActEvt_MenuRStickButton_K2Node_InputActionEvent_16_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLStickButton_K2Node_InputActionEvent_15
struct AKSPlayerControllerBP_C_InpActEvt_MenuLStickButton_K2Node_InputActionEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightAxisUp_K2Node_InputActionEvent_14
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightAxisUp_K2Node_InputActionEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightAxisDown_K2Node_InputActionEvent_13
struct AKSPlayerControllerBP_C_InpActEvt_MenuRightAxisDown_K2Node_InputActionEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuPlusButton_K2Node_InputActionEvent_12
struct AKSPlayerControllerBP_C_InpActEvt_MenuPlusButton_K2Node_InputActionEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuMinusButton_K2Node_InputActionEvent_11
struct AKSPlayerControllerBP_C_InpActEvt_MenuMinusButton_K2Node_InputActionEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_AnyButton_K2Node_InputActionEvent_10
struct AKSPlayerControllerBP_C_InpActEvt_AnyButton_K2Node_InputActionEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuListPagingLeft_K2Node_InputActionEvent_9
struct AKSPlayerControllerBP_C_InpActEvt_MenuListPagingLeft_K2Node_InputActionEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuListPagingRight_K2Node_InputActionEvent_8
struct AKSPlayerControllerBP_C_InpActEvt_MenuListPagingRight_K2Node_InputActionEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRTrigger_K2Node_InputActionEvent_7
struct AKSPlayerControllerBP_C_InpActEvt_MenuRTrigger_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLTrigger_K2Node_InputActionEvent_6
struct AKSPlayerControllerBP_C_InpActEvt_MenuLTrigger_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_5
struct AKSPlayerControllerBP_C_InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_StartButton_K2Node_InputActionEvent_4
struct AKSPlayerControllerBP_C_InpActEvt_StartButton_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_WorldMap_ZoomIn_K2Node_InputActionEvent_3
struct AKSPlayerControllerBP_C_InpActEvt_WorldMap_ZoomIn_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_WorldMap_ZoomOut_K2Node_InputActionEvent_2
struct AKSPlayerControllerBP_C_InpActEvt_WorldMap_ZoomOut_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeStatusLeft_K2Node_InputActionEvent_1
struct AKSPlayerControllerBP_C_InpActEvt_ChangeStatusLeft_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeStatusRight_K2Node_InputActionEvent_0
struct AKSPlayerControllerBP_C_InpActEvt_ChangeStatusRight_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_0
struct AKSPlayerControllerBP_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_Test_Gene7_K2Node_InputAxisEvent_0
struct AKSPlayerControllerBP_C_InpAxisEvt_Test_Gene7_K2Node_InputAxisEvent_0_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_Test_Gene8_K2Node_InputAxisEvent_1
struct AKSPlayerControllerBP_C_InpAxisEvt_Test_Gene8_K2Node_InputAxisEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1
struct AKSPlayerControllerBP_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0
struct AKSPlayerControllerBP_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_1
struct AKSPlayerControllerBP_C_InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveUpRepeat
struct AKSPlayerControllerBP_C_MouseMoveUpRepeat_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveDownRepeat
struct AKSPlayerControllerBP_C_MouseMoveDownRepeat_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveLeftRepeat
struct AKSPlayerControllerBP_C_MouseMoveLeftRepeat_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveRightRepeat
struct AKSPlayerControllerBP_C_MouseMoveRightRepeat_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_RStickX_K2Node_InputAxisEvent_60
struct AKSPlayerControllerBP_C_InpAxisEvt_RStickX_K2Node_InputAxisEvent_60_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_RStickY_K2Node_InputAxisEvent_70
struct AKSPlayerControllerBP_C_InpAxisEvt_RStickY_K2Node_InputAxisEvent_70_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LStickX_K2Node_InputAxisEvent_20
struct AKSPlayerControllerBP_C_InpAxisEvt_LStickX_K2Node_InputAxisEvent_20_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LStickY_K2Node_InputAxisEvent_26
struct AKSPlayerControllerBP_C_InpAxisEvt_LStickY_K2Node_InputAxisEvent_26_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LGamePadX_K2Node_InputAxisEvent_0
struct AKSPlayerControllerBP_C_InpAxisEvt_LGamePadX_K2Node_InputAxisEvent_0_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LGamePadY_K2Node_InputAxisEvent_1
struct AKSPlayerControllerBP_C_InpAxisEvt_LGamePadY_K2Node_InputAxisEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveRight
struct AKSPlayerControllerBP_C_MouseMoveRight_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveLeft
struct AKSPlayerControllerBP_C_MouseMoveLeft_Params
{
public:
	bool                                         Press;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveUp
struct AKSPlayerControllerBP_C_MouseMoveUp_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveDown
struct AKSPlayerControllerBP_C_MouseMoveDown_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_WorldMap_SlowCursor_X_K2Node_InputAxisEvent_2
struct AKSPlayerControllerBP_C_InpAxisEvt_WorldMap_SlowCursor_X_K2Node_InputAxisEvent_2_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_WorldMap_SlowCursor_Y_K2Node_InputAxisEvent_3
struct AKSPlayerControllerBP_C_InpAxisEvt_WorldMap_SlowCursor_Y_K2Node_InputAxisEvent_3_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_HelpScrollAxis_K2Node_InputAxisEvent_4
struct AKSPlayerControllerBP_C_InpAxisEvt_HelpScrollAxis_K2Node_InputAxisEvent_4_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_5
struct AKSPlayerControllerBP_C_InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_5_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79
struct AKSPlayerControllerBP_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_253
struct AKSPlayerControllerBP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_253_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.ReceiveTick
struct AKSPlayerControllerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x161E (0x161E - 0x0)
// Function KSPlayerControllerBP.KSPlayerControllerBP_C.ExecuteUbergraph_KSPlayerControllerBP
struct AKSPlayerControllerBP_C_ExecuteUbergraph_KSPlayerControllerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


