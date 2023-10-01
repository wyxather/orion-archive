#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TravelMenuScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInSurvivalHub
struct UWidget_TravelMenuScreen_C_IsInSurvivalHub_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsSurvivalMode
struct UWidget_TravelMenuScreen_C_IsSurvivalMode_Params
{
	bool                                               IsSurvival;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInTown
struct UWidget_TravelMenuScreen_C_IsInTown_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildLastCheckpointEntry
struct UWidget_TravelMenuScreen_C_BuildLastCheckpointEntry_Params
{
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetZoneLabel
struct UWidget_TravelMenuScreen_C_GetZoneLabel_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.SetActionText
struct UWidget_TravelMenuScreen_C_SetActionText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.HideEmptyTabs
struct UWidget_TravelMenuScreen_C_HideEmptyTabs_Params
{
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetList
struct UWidget_TravelMenuScreen_C_GetList_Params
{
	struct FName*                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                                List;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ControlletVisibility
struct UWidget_TravelMenuScreen_C_ControlletVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.UpdateTravelEnabled
struct UWidget_TravelMenuScreen_C_UpdateTravelEnabled_Params
{
	bool*                                              AutoExit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInDungeon
struct UWidget_TravelMenuScreen_C_IsInDungeon_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntry
struct UWidget_TravelMenuScreen_C_CreateMenuEntry_Params
{
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      WaypointName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>*                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float*                                             TopSpacing;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntryIfTagExists
struct UWidget_TravelMenuScreen_C_CreateMenuEntryIfTagExists_Params
{
	struct FName*                                      Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>*                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildFastTravelEntries
struct UWidget_TravelMenuScreen_C_BuildFastTravelEntries_Params
{
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Init
struct UWidget_TravelMenuScreen_C_Init_Params
{
	class AActor**                                     Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.FocusFirst
struct UWidget_TravelMenuScreen_C_FocusFirst_Params
{
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildMenuEntries
struct UWidget_TravelMenuScreen_C_BuildMenuEntries_Params
{
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Construct
struct UWidget_TravelMenuScreen_C_Construct_Params
{
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_TravelMenuScreen_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Tick
struct UWidget_TravelMenuScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.LeaveTravelMenu
struct UWidget_TravelMenuScreen_C_LeaveTravelMenu_Params
{
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_TravelMenuScreen_C_BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ExecuteUbergraph_Widget_TravelMenuScreen
struct UWidget_TravelMenuScreen_C_ExecuteUbergraph_Widget_TravelMenuScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
