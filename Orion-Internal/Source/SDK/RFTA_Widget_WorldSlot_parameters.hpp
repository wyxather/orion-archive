#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WorldSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_WorldSlot.Widget_WorldSlot_C.Get_ActivePanel_Visibility_1
struct UWidget_WorldSlot_C_Get_ActivePanel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.GetPrompt
struct UWidget_WorldSlot_C_GetPrompt_Params
{
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.Get_Create_Visibility_1
struct UWidget_WorldSlot_C_Get_Create_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.SetGameMode
struct UWidget_WorldSlot_C_SetGameMode_Params
{
	struct FText*                                      Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshDifficulty
struct UWidget_WorldSlot_C_RefreshDifficulty_Params
{
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshGameMode
struct UWidget_WorldSlot_C_RefreshGameMode_Params
{
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshPlayTime
struct UWidget_WorldSlot_C_RefreshPlayTime_Params
{
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.Refresh
struct UWidget_WorldSlot_C_Refresh_Params
{
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.GetQuest
struct UWidget_WorldSlot_C_GetQuest_Params
{
	class ARemnantQuest*                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.Construct
struct UWidget_WorldSlot_C_Construct_Params
{
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__Create_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldSlot_C_BndEvt__Create_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldSlot_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldSlot_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__Select_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldSlot_C_BndEvt__Select_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButtonWidget_160_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldSlot_C_BndEvt__FocusButtonWidget_160_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.ExecuteUbergraph_Widget_WorldSlot
struct UWidget_WorldSlot_C_ExecuteUbergraph_Widget_WorldSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.OnSelect__DelegateSignature
struct UWidget_WorldSlot_C_OnSelect__DelegateSignature_Params
{
};

// Function Widget_WorldSlot.Widget_WorldSlot_C.OnCreate__DelegateSignature
struct UWidget_WorldSlot_C_OnCreate__DelegateSignature_Params
{
	class UWidget_WorldSlot_C**                        Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
