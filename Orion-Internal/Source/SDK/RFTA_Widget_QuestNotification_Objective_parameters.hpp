#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestNotification_Objective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ResetRootAlpha
struct UWidget_QuestNotification_Objective_C_ResetRootAlpha_Params
{
	float*                                             NewAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OverrideUnHideObjective
struct UWidget_QuestNotification_Objective_C_OverrideUnHideObjective_Params
{
	float*                                             TimeToUnHide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ToggleObjectiveHidden
struct UWidget_QuestNotification_Objective_C_ToggleObjectiveHidden_Params
{
	bool*                                              DoHide;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshDefend
struct UWidget_QuestNotification_Objective_C_RefreshDefend_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshProgress
struct UWidget_QuestNotification_Objective_C_RefreshProgress_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshComplete
struct UWidget_QuestNotification_Objective_C_RefreshComplete_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.FadeIn
struct UWidget_QuestNotification_Objective_C_FadeIn_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Refresh
struct UWidget_QuestNotification_Objective_C_Refresh_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.GetObjectiveText
struct UWidget_QuestNotification_Objective_C_GetObjectiveText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ShouldShowCounter
struct UWidget_QuestNotification_Objective_C_ShouldShowCounter_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveProgress_Text_1
struct UWidget_QuestNotification_Objective_C_Get_ObjectiveProgress_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveProgress_Visibility_1
struct UWidget_QuestNotification_Objective_C_Get_ObjectiveProgress_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveLabel_Text_1
struct UWidget_QuestNotification_Objective_C_Get_ObjectiveLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Construct
struct UWidget_QuestNotification_Objective_C_Construct_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnObjectiveUpdated_Event_1
struct UWidget_QuestNotification_Objective_C_OnObjectiveUpdated_Event_1_Params
{
	class UQuestObjective**                            Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnFadeOut
struct UWidget_QuestNotification_Objective_C_OnFadeOut_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnRemoveFromParent
struct UWidget_QuestNotification_Objective_C_OnRemoveFromParent_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Tick
struct UWidget_QuestNotification_Objective_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ResetAlpha
struct UWidget_QuestNotification_Objective_C_ResetAlpha_Params
{
};

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ExecuteUbergraph_Widget_QuestNotification_Objective
struct UWidget_QuestNotification_Objective_C_ExecuteUbergraph_Widget_QuestNotification_Objective_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
