#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatusEffect.Widget_StatusEffect_C.DetermineStacksText
struct UWidget_StatusEffect_C_DetermineStacksText_Params
{
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.Init
struct UWidget_StatusEffect_C_Init_Params
{
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.GetVisibility_2
struct UWidget_StatusEffect_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.GetVisibility_1
struct UWidget_StatusEffect_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.GetColorAndOpacity_1
struct UWidget_StatusEffect_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.Get_Name_Text_1
struct UWidget_StatusEffect_C_Get_Name_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.Get_Bar_FillColorAndOpacity_1
struct UWidget_StatusEffect_C_Get_Bar_FillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.Get_Bar_Percent_1
struct UWidget_StatusEffect_C_Get_Bar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.Construct
struct UWidget_StatusEffect_C_Construct_Params
{
};

// Function Widget_StatusEffect.Widget_StatusEffect_C.ExecuteUbergraph_Widget_StatusEffect
struct UWidget_StatusEffect_C_ExecuteUbergraph_Widget_StatusEffect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
