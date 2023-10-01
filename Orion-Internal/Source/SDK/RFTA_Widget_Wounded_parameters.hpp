#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Wounded_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Wounded.Widget_Wounded_C.Get_ReviveRoot_ContentColorAndOpacity_1
struct UWidget_Wounded_C_Get_ReviveRoot_ContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Wounded.Widget_Wounded_C.Get_KillYourselfBar_Percent_1
struct UWidget_Wounded_C_Get_KillYourselfBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Wounded.Widget_Wounded_C.Get_WoundedHealthBar_Percent_1
struct UWidget_Wounded_C_Get_WoundedHealthBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Wounded.Widget_Wounded_C.GetPercent_1
struct UWidget_Wounded_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Wounded.Widget_Wounded_C.OnWoundedState_Event_1
struct UWidget_Wounded_C_OnWoundedState_Event_1_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Wounded.Widget_Wounded_C.BndEvt__Suicide_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature
struct UWidget_Wounded_C_BndEvt__Suicide_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature_Params
{
};

// Function Widget_Wounded.Widget_Wounded_C.Construct
struct UWidget_Wounded_C_Construct_Params
{
};

// Function Widget_Wounded.Widget_Wounded_C.Destruct
struct UWidget_Wounded_C_Destruct_Params
{
};

// Function Widget_Wounded.Widget_Wounded_C.ExecuteUbergraph_Widget_Wounded
struct UWidget_Wounded_C_ExecuteUbergraph_Widget_Wounded_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
