#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inspectable_NavButtons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.ToggleNextButtonVisibility
struct UWidget_Inspectable_NavButtons_C_ToggleNextButtonVisibility_Params
{
	bool*                                              MakeVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.TogglePrevButtonVisibility
struct UWidget_Inspectable_NavButtons_C_TogglePrevButtonVisibility_Params
{
	bool*                                              MakeVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.Construct
struct UWidget_Inspectable_NavButtons_C_Construct_Params
{
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.SetNavBindings
struct UWidget_Inspectable_NavButtons_C_SetNavBindings_Params
{
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavLeft
struct UWidget_Inspectable_NavButtons_C_OnNavLeft_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavRight
struct UWidget_Inspectable_NavButtons_C_OnNavRight_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.ExecuteUbergraph_Widget_Inspectable_NavButtons
struct UWidget_Inspectable_NavButtons_C_ExecuteUbergraph_Widget_Inspectable_NavButtons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavigatePrev__DelegateSignature
struct UWidget_Inspectable_NavButtons_C_OnNavigatePrev__DelegateSignature_Params
{
};

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavigateNext__DelegateSignature
struct UWidget_Inspectable_NavButtons_C_OnNavigateNext__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
