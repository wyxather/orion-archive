#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Window_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Window.Widget_Window_C.Get Use Visibility
struct UWidget_Window_C_Get_Use_Visibility_Params
{
};

// Function Widget_Window.Widget_Window_C.GetBrush_1
struct UWidget_Window_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Window.Widget_Window_C.Get_Overlay_Visibility_1
struct UWidget_Window_C_Get_Overlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Window.Widget_Window_C.SetCaption
struct UWidget_Window_C_SetCaption_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Window.Widget_Window_C.Get_Close_Visibility_1
struct UWidget_Window_C_Get_Close_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Window.Widget_Window_C.Construct
struct UWidget_Window_C_Construct_Params
{
};

// Function Widget_Window.Widget_Window_C.BndEvt__FocusButtonWidget_101_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
struct UWidget_Window_C_BndEvt__FocusButtonWidget_101_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Window.Widget_Window_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Window_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Window.Widget_Window_C.ExecuteUbergraph_Widget_Window
struct UWidget_Window_C_ExecuteUbergraph_Widget_Window_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Window.Widget_Window_C.Closed__DelegateSignature
struct UWidget_Window_C_Closed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
