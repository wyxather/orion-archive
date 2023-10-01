#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HoldButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_HoldButton.Widget_HoldButton_C.SetImageNameID
struct UWidget_HoldButton_C_SetImageNameID_Params
{
	struct FName*                                      ImageNameID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HoldButton.Widget_HoldButton_C.GetPercent_1
struct UWidget_HoldButton_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HoldButton.Widget_HoldButton_C.GetPressTimerPct
struct UWidget_HoldButton_C_GetPressTimerPct_Params
{
	float                                              CompletionPct;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HoldButton.Widget_HoldButton_C.Tick
struct UWidget_HoldButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HoldButton.Widget_HoldButton_C.OnButtonPressed
struct UWidget_HoldButton_C_OnButtonPressed_Params
{
};

// Function Widget_HoldButton.Widget_HoldButton_C.OnButtonReleased
struct UWidget_HoldButton_C_OnButtonReleased_Params
{
};

// Function Widget_HoldButton.Widget_HoldButton_C.OnTimeExpired
struct UWidget_HoldButton_C_OnTimeExpired_Params
{
};

// Function Widget_HoldButton.Widget_HoldButton_C.PlayHoldSuccess
struct UWidget_HoldButton_C_PlayHoldSuccess_Params
{
};

// Function Widget_HoldButton.Widget_HoldButton_C.Construct
struct UWidget_HoldButton_C_Construct_Params
{
};

// Function Widget_HoldButton.Widget_HoldButton_C.OnButtonclick
struct UWidget_HoldButton_C_OnButtonclick_Params
{
};

// Function Widget_HoldButton.Widget_HoldButton_C.ExecuteUbergraph_Widget_HoldButton
struct UWidget_HoldButton_C_ExecuteUbergraph_Widget_HoldButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HoldButton.Widget_HoldButton_C.OnPressAndHold__DelegateSignature
struct UWidget_HoldButton_C_OnPressAndHold__DelegateSignature_Params
{
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float*                                             CompletionPct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
