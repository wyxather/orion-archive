#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Options_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Options.Widget_Options_C.InitList
struct UWidget_Options_C_InitList_Params
{
};

// Function Widget_Options.Widget_Options_C.SetEnableResetButton
struct UWidget_Options_C_SetEnableResetButton_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Options.Widget_Options_C.Get_ResetBtn_Visibility_1
struct UWidget_Options_C_Get_ResetBtn_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.Get_LanguageTab_Visibility_1
struct UWidget_Options_C_Get_LanguageTab_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.MenuSelect
struct UWidget_Options_C_MenuSelect_Params
{
};

// Function Widget_Options.Widget_Options_C.GetVisibility_1
struct UWidget_Options_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.Get_ItemTypeLabel_Text_1
struct UWidget_Options_C_Get_ItemTypeLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Options.Widget_Options_C.Construct
struct UWidget_Options_C_Construct_Params
{
};

// Function Widget_Options.Widget_Options_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.BndEvt__SaveAndExitTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__SaveAndExitTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Widget_Options.Widget_Options_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__VideoTab_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Widget_Options.Widget_Options_C.BndEvt__AudioTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__AudioTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Widget_Options.Widget_Options_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__GameplayTab_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Widget_Options.Widget_Options_C.BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Widget_Options.Widget_Options_C.Destruct
struct UWidget_Options_C_Destruct_Params
{
};

// Function Widget_Options.Widget_Options_C.OnUpdateVideoSettings
struct UWidget_Options_C_OnUpdateVideoSettings_Params
{
};

// Function Widget_Options.Widget_Options_C.SaveNonResolutionSettings
struct UWidget_Options_C_SaveNonResolutionSettings_Params
{
};

// Function Widget_Options.Widget_Options_C.ShowResolutionConfirmation
struct UWidget_Options_C_ShowResolutionConfirmation_Params
{
};

// Function Widget_Options.Widget_Options_C.BndEvt__AudioTab_K2Node_ComponentBoundEvent_4_OnTabFocusDelegate__DelegateSignature
struct UWidget_Options_C_BndEvt__AudioTab_K2Node_ComponentBoundEvent_4_OnTabFocusDelegate__DelegateSignature_Params
{
	class UWidget**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_5_OnTabFocusDelegate__DelegateSignature
struct UWidget_Options_C_BndEvt__GameplayTab_K2Node_ComponentBoundEvent_5_OnTabFocusDelegate__DelegateSignature_Params
{
	class UWidget**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_6_OnTabFocusDelegate__DelegateSignature
struct UWidget_Options_C_BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_6_OnTabFocusDelegate__DelegateSignature_Params
{
	class UWidget**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_10_OnTabFocusDelegate__DelegateSignature
struct UWidget_Options_C_BndEvt__VideoTab_K2Node_ComponentBoundEvent_10_OnTabFocusDelegate__DelegateSignature_Params
{
	class UWidget**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.BndEvt__LanguageTab_K2Node_ComponentBoundEvent_7_OnTabFocusDelegate__DelegateSignature
struct UWidget_Options_C_BndEvt__LanguageTab_K2Node_ComponentBoundEvent_7_OnTabFocusDelegate__DelegateSignature_Params
{
	class UWidget**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.BndEvt__LanguageTab_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__LanguageTab_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Widget_Options.Widget_Options_C.RefocusOptions
struct UWidget_Options_C_RefocusOptions_Params
{
};

// Function Widget_Options.Widget_Options_C.BndEvt__ResetBtn_K2Node_ComponentBoundEvent_9_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Options_C_BndEvt__ResetBtn_K2Node_ComponentBoundEvent_9_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.OnReset
struct UWidget_Options_C_OnReset_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Options.Widget_Options_C.ExecuteUbergraph_Widget_Options
struct UWidget_Options_C_ExecuteUbergraph_Widget_Options_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
