#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_DialogueOption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DialogueOption.Widget_DialogueOption_C.SetIcon
struct UWidget_DialogueOption_C_SetIcon_Params
{
	class FString*                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_DialogueOption.Widget_DialogueOption_C.Get_Icon_Visibility_1
struct UWidget_DialogueOption_C_Get_Icon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_DialogueOption.Widget_DialogueOption_C.GetColorAndOpacity_1
struct UWidget_DialogueOption_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_DialogueOption.Widget_DialogueOption_C.Get_Button_bIsEnabled_1
struct UWidget_DialogueOption_C_Get_Button_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_DialogueOption.Widget_DialogueOption_C.GetText_1
struct UWidget_DialogueOption_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_DialogueOption.Widget_DialogueOption_C.Construct
struct UWidget_DialogueOption_C_Construct_Params
{
};

// Function Widget_DialogueOption.Widget_DialogueOption_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_DialogueOption_C_BndEvt__Button_K2Node_ComponentBoundEvent_182_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_DialogueOption.Widget_DialogueOption_C.ExecuteUbergraph_Widget_DialogueOption
struct UWidget_DialogueOption_C_ExecuteUbergraph_Widget_DialogueOption_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
