#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WaypointMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.Init
struct UWidget_WaypointMenu_C_Init_Params
{
	class AActor**                                     Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.FocusFirst
struct UWidget_WaypointMenu_C_FocusFirst_Params
{
};

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.Get_Load_Visibility_1
struct UWidget_WaypointMenu_C_Get_Load_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.BuildList
struct UWidget_WaypointMenu_C_BuildList_Params
{
};

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.OnFocusWaypoint
struct UWidget_WaypointMenu_C_OnFocusWaypoint_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.BndEvt__Load_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WaypointMenu_C_BndEvt__Load_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.OnClickedWaypoint
struct UWidget_WaypointMenu_C_OnClickedWaypoint_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.ExecuteUbergraph_Widget_WaypointMenu
struct UWidget_WaypointMenu_C_ExecuteUbergraph_Widget_WaypointMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
