#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Tutorial_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.UpdateOrientation
struct UWidget_Tutorial_Base_C_UpdateOrientation_Params
{
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupPips
struct UWidget_Tutorial_Base_C_SetupPips_Params
{
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupNextPage
struct UWidget_Tutorial_Base_C_SetupNextPage_Params
{
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Init
struct UWidget_Tutorial_Base_C_Init_Params
{
	class UClass**                                     Tutorial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.GetTutorial
struct UWidget_Tutorial_Base_C_GetTutorial_Params
{
	class UTutorial_C*                                 Tutorial;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupPage
struct UWidget_Tutorial_Base_C_SetupPage_Params
{
	struct FTutorialPage*                              Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature
struct UWidget_Tutorial_Base_C_BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature_Params
{
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Construct
struct UWidget_Tutorial_Base_C_Construct_Params
{
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Tutorial_Base_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.ExecuteUbergraph_Widget_Tutorial_Base
struct UWidget_Tutorial_Base_C_ExecuteUbergraph_Widget_Tutorial_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Tutorial Window Closed__DelegateSignature
struct UWidget_Tutorial_Base_C_Tutorial_Window_Closed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
