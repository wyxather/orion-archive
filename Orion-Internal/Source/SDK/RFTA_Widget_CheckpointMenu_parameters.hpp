#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_CheckpointMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.GetTutorial
struct UWidget_CheckpointMenu_C_GetTutorial_Params
{
	class UClass*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.RefreshWaypointInfo
struct UWidget_CheckpointMenu_C_RefreshWaypointInfo_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.IsInTown
struct UWidget_CheckpointMenu_C_IsInTown_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.InDemoMode
struct UWidget_CheckpointMenu_C_InDemoMode_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.GetZoneLabel
struct UWidget_CheckpointMenu_C_GetZoneLabel_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.SetActionText
struct UWidget_CheckpointMenu_C_SetActionText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.SetSelectedAction
struct UWidget_CheckpointMenu_C_SetSelectedAction_Params
{
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_CheckpointOption_C**                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UpdateActionText
struct UWidget_CheckpointMenu_C_UpdateActionText_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ShowTutorial
struct UWidget_CheckpointMenu_C_ShowTutorial_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UnbindEvents
struct UWidget_CheckpointMenu_C_UnbindEvents_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnTravelStateChanged
struct UWidget_CheckpointMenu_C_OnTravelStateChanged_Params
{
	struct FZoneTravelState*                           NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UpdateTravelEnabled
struct UWidget_CheckpointMenu_C_UpdateTravelEnabled_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.CreateMenuEntry
struct UWidget_CheckpointMenu_C_CreateMenuEntry_Params
{
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             TopSpacing;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Init
struct UWidget_CheckpointMenu_C_Init_Params
{
	class AActor**                                     Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.FocusFirst
struct UWidget_CheckpointMenu_C_FocusFirst_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BuildMenuEntries
struct UWidget_CheckpointMenu_C_BuildMenuEntries_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnLoaded_8DD6F9514A9A47A1BEC8FDA30BFBA923
struct UWidget_CheckpointMenu_C_OnLoaded_8DD6F9514A9A47A1BEC8FDA30BFBA923_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Construct
struct UWidget_CheckpointMenu_C_Construct_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_CheckpointMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Destruct
struct UWidget_CheckpointMenu_C_Destruct_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Tick
struct UWidget_CheckpointMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.LoadWaypointImage
struct UWidget_CheckpointMenu_C_LoadWaypointImage_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_CheckpointMenu_C_BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ShowTutorialWithDelay
struct UWidget_CheckpointMenu_C_ShowTutorialWithDelay_Params
{
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnDialogResult_Event_1
struct UWidget_CheckpointMenu_C_OnDialogResult_Event_1_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ExecuteUbergraph_Widget_CheckpointMenu
struct UWidget_CheckpointMenu_C_ExecuteUbergraph_Widget_CheckpointMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
