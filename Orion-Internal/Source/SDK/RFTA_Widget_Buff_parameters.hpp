#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Buff.Widget_Buff_C.Get_Icon_Brush_1
struct UWidget_Buff_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Buff.Widget_Buff_C.GetBuffLabel
struct UWidget_Buff_C_GetBuffLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Buff.Widget_Buff_C.Single Digit Formatting
struct UWidget_Buff_C_Single_Digit_Formatting_Params
{
	int*                                               Time_Int;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                      Int_as_String;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_Buff.Widget_Buff_C.Format Time
struct UWidget_Buff_C_Format_Time_Params
{
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function Widget_Buff.Widget_Buff_C.Get_RadialCooldown_ColorAndOpacity_1
struct UWidget_Buff_C_Get_RadialCooldown_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buff.Widget_Buff_C.Get_Cooldown_FillColorAndOpacity_1
struct UWidget_Buff_C_Get_Cooldown_FillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buff.Widget_Buff_C.UpdateTimeRemaining
struct UWidget_Buff_C_UpdateTimeRemaining_Params
{
};

// Function Widget_Buff.Widget_Buff_C.GetCooldownVisibility
struct UWidget_Buff_C_GetCooldownVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buff.Widget_Buff_C.GetVisibility_1
struct UWidget_Buff_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buff.Widget_Buff_C.UpdateLevelText
struct UWidget_Buff_C_UpdateLevelText_Params
{
};

// Function Widget_Buff.Widget_Buff_C.GetIcon
struct UWidget_Buff_C_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Buff.Widget_Buff_C.Construct
struct UWidget_Buff_C_Construct_Params
{
};

// Function Widget_Buff.Widget_Buff_C.Tick
struct UWidget_Buff_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buff.Widget_Buff_C.ExecuteUbergraph_Widget_Buff
struct UWidget_Buff_C_ExecuteUbergraph_Widget_Buff_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
