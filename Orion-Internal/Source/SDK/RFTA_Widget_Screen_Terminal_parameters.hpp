#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Terminal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.SetOverrideLocalizationFontSize
struct UWidget_Screen_Terminal_C_SetOverrideLocalizationFontSize_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.ShowOverlayButton
struct UWidget_Screen_Terminal_C_ShowOverlayButton_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillHeader
struct UWidget_Screen_Terminal_C_FillHeader_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillOptions
struct UWidget_Screen_Terminal_C_FillOptions_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillDialog
struct UWidget_Screen_Terminal_C_FillDialog_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.HasOptions
struct UWidget_Screen_Terminal_C_HasOptions_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.HasDialogText
struct UWidget_Screen_Terminal_C_HasDialogText_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Set Content Justification
struct UWidget_Screen_Terminal_C_Set_Content_Justification_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Get Subtext Text
struct UWidget_Screen_Terminal_C_Get_Subtext_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Get Subtext Visibility
struct UWidget_Screen_Terminal_C_Get_Subtext_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Add Option
struct UWidget_Screen_Terminal_C_Add_Option_Params
{
	class UWidget_Screen_Option_C**                    Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Clear Options
struct UWidget_Screen_Terminal_C_Clear_Options_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.OnDialogUpdate
struct UWidget_Screen_Terminal_C_OnDialogUpdate_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.InitScreen
struct UWidget_Screen_Terminal_C_InitScreen_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__Header_K2Node_ComponentBoundEvent_165_OnTextFilled__DelegateSignature
struct UWidget_Screen_Terminal_C_BndEvt__Header_K2Node_ComponentBoundEvent_165_OnTextFilled__DelegateSignature_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.OptionsUpdated
struct UWidget_Screen_Terminal_C_OptionsUpdated_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_308_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Screen_Terminal_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_308_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.DelayFocus
struct UWidget_Screen_Terminal_C_DelayFocus_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__Body_K2Node_ComponentBoundEvent_18_OnTextFilled__DelegateSignature
struct UWidget_Screen_Terminal_C_BndEvt__Body_K2Node_ComponentBoundEvent_18_OnTextFilled__DelegateSignature_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.DelayFocusOverlayButton
struct UWidget_Screen_Terminal_C_DelayFocusOverlayButton_Params
{
};

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.ExecuteUbergraph_Widget_Screen_Terminal
struct UWidget_Screen_Terminal_C_ExecuteUbergraph_Widget_Screen_Terminal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
