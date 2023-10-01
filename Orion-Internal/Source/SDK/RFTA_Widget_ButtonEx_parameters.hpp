#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ButtonEx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ButtonEx.Widget_ButtonEx_C.GetInvisibleVisibility_1
struct UWidget_ButtonEx_C_GetInvisibleVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.GetInvisible
struct UWidget_ButtonEx_C_GetInvisible_Params
{
	bool                                               invisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.SetInvisible
struct UWidget_ButtonEx_C_SetInvisible_Params
{
	bool*                                              invisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.Get_PulseImg_Brush_1
struct UWidget_ButtonEx_C_Get_PulseImg_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.Get_HoldButton_ColorAndOpacity_1
struct UWidget_ButtonEx_C_Get_HoldButton_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.IsolatedBtnVisibility
struct UWidget_ButtonEx_C_IsolatedBtnVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.SetPressAndHoldTime
struct UWidget_ButtonEx_C_SetPressAndHoldTime_Params
{
	float*                                             NewHoldTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.StopPulse
struct UWidget_ButtonEx_C_StopPulse_Params
{
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.StartPulse
struct UWidget_ButtonEx_C_StartPulse_Params
{
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.GetHoldPercentage
struct UWidget_ButtonEx_C_GetHoldPercentage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.Get_LabelWidget_ColorAndOpacity_1
struct UWidget_ButtonEx_C_Get_LabelWidget_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.Set Image Size
struct UWidget_ButtonEx_C_Set_Image_Size_Params
{
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.SetLabel
struct UWidget_ButtonEx_C_SetLabel_Params
{
	struct FText*                                      Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.Construct
struct UWidget_ButtonEx_C_Construct_Params
{
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.OnDeviceChangedDelegate_Event_1
struct UWidget_ButtonEx_C_OnDeviceChangedDelegate_Event_1_Params
{
	int*                                               ControllerId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputDevice*                                      CurrentInputDevice;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_370_OnAdvButtonPressedEvent__DelegateSignature
struct UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_370_OnAdvButtonPressedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_401_OnAdvButtonReleasedEvent__DelegateSignature
struct UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_401_OnAdvButtonReleasedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1302_OnPressAndHold__DelegateSignature
struct UWidget_ButtonEx_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_1302_OnPressAndHold__DelegateSignature_Params
{
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float*                                             CompletionPct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1357_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_ButtonEx_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_1357_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.Tick
struct UWidget_ButtonEx_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.ExecuteUbergraph_Widget_ButtonEx
struct UWidget_ButtonEx_C_ExecuteUbergraph_Widget_ButtonEx_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonEx.Widget_ButtonEx_C.OnAction__DelegateSignature
struct UWidget_ButtonEx_C_OnAction__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
