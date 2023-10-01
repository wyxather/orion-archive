#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_KeybindUserSetting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.MenuSelect
struct UWidget_KeybindUserSetting_C_MenuSelect_Params
{
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.SetKeybind
struct UWidget_KeybindUserSetting_C_SetKeybind_Params
{
	struct FKey*                                       InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetText_1
struct UWidget_KeybindUserSetting_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetVisibility_2
struct UWidget_KeybindUserSetting_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetVisibility_1
struct UWidget_KeybindUserSetting_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.Get_Label_Text_1
struct UWidget_KeybindUserSetting_C_Get_Label_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KeybindUserSetting_C_BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.Construct
struct UWidget_KeybindUserSetting_C_Construct_Params
{
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnKeyInput
struct UWidget_KeybindUserSetting_C_OnKeyInput_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool*                                              InvalidInput;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Shift;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Ctrl;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Alt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Cmd;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnInvalidInput
struct UWidget_KeybindUserSetting_C_OnInvalidInput_Params
{
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnDuplicateInput
struct UWidget_KeybindUserSetting_C_OnDuplicateInput_Params
{
	class URebindableInputSetting**                    Conflict;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.ReturnFocus
struct UWidget_KeybindUserSetting_C_ReturnFocus_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.ExecuteUbergraph_Widget_KeybindUserSetting
struct UWidget_KeybindUserSetting_C_ExecuteUbergraph_Widget_KeybindUserSetting_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
