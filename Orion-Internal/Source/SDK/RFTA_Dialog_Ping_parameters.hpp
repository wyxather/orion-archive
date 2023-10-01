#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Ping_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_Ping.Dialog_Ping_C.PingOnRelease
struct ADialog_Ping_C_PingOnRelease_Params
{
	bool                                               OnRelease;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dialog_Ping.Dialog_Ping_C.MakePingSelection
struct ADialog_Ping_C_MakePingSelection_Params
{
};

// Function Dialog_Ping.Dialog_Ping_C.FireEmote
struct ADialog_Ping_C_FireEmote_Params
{
};

// Function Dialog_Ping.Dialog_Ping_C.ValidateAimInput
struct ADialog_Ping_C_ValidateAimInput_Params
{
};

// Function Dialog_Ping.Dialog_Ping_C.ShowEmotesScreen
struct ADialog_Ping_C_ShowEmotesScreen_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.AddPingContext
struct ADialog_Ping_C_AddPingContext_Params
{
	struct FActionPing*                                PingContext;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Ping_K2Node_InputActionEvent_14
struct ADialog_Ping_C_InpActEvt_Ping_K2Node_InputActionEvent_14_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Ping_K2Node_InputActionEvent_13
struct ADialog_Ping_C_InpActEvt_Ping_K2Node_InputActionEvent_13_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Melee_K2Node_InputActionEvent_12
struct ADialog_Ping_C_InpActEvt_Melee_K2Node_InputActionEvent_12_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Fire_K2Node_InputActionEvent_11
struct ADialog_Ping_C_InpActEvt_Fire_K2Node_InputActionEvent_11_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Fire_K2Node_InputActionEvent_10
struct ADialog_Ping_C_InpActEvt_Fire_K2Node_InputActionEvent_10_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Aim_K2Node_InputActionEvent_9
struct ADialog_Ping_C_InpActEvt_Aim_K2Node_InputActionEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_Back_K2Node_InputActionEvent_8
struct ADialog_Ping_C_InpActEvt_UI_Back_K2Node_InputActionEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7
struct ADialog_Ping_C_InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6
struct ADialog_Ping_C_InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5
struct ADialog_Ping_C_InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4
struct ADialog_Ping_C_InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3
struct ADialog_Ping_C_InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_DragonHeart_K2Node_InputActionEvent_2
struct ADialog_Ping_C_InpActEvt_DragonHeart_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_AltFire_K2Node_InputActionEvent_1
struct ADialog_Ping_C_InpActEvt_AltFire_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4
struct ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3
struct ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2
struct ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1
struct ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1
struct ADialog_Ping_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2
struct ADialog_Ping_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3
struct ADialog_Ping_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_3_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_4
struct ADialog_Ping_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_4_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.OnBeginDialog
struct ADialog_Ping_C_OnBeginDialog_Params
{
};

// Function Dialog_Ping.Dialog_Ping_C.OnEvent
struct ADialog_Ping_C_OnEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Ping.Dialog_Ping_C.OnEndDialog
struct ADialog_Ping_C_OnEndDialog_Params
{
};

// Function Dialog_Ping.Dialog_Ping_C.ExecuteUbergraph_Dialog_Ping
struct ADialog_Ping_C_ExecuteUbergraph_Dialog_Ping_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
