#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestNotification_Quest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ResetRootAlpha
struct UWidget_QuestNotification_Quest_C_ResetRootAlpha_Params
{
	float*                                             NewAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OverrideUnHideQuest
struct UWidget_QuestNotification_Quest_C_OverrideUnHideQuest_Params
{
	float*                                             TimeToUnHide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasObjectives
struct UWidget_QuestNotification_Quest_C_HasObjectives_Params
{
	bool                                               HasHiddenObjectives;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasVisibleObjectives;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ToggleQuestHidden
struct UWidget_QuestNotification_Quest_C_ToggleQuestHidden_Params
{
	bool*                                              DoHide;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Quest List Number
struct UWidget_QuestNotification_Quest_C_Quest_List_Number_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Refresh
struct UWidget_QuestNotification_Quest_C_Refresh_Params
{
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasPinnedObjective
struct UWidget_QuestNotification_Quest_C_HasPinnedObjective_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.FadeOut
struct UWidget_QuestNotification_Quest_C_FadeOut_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasObjective
struct UWidget_QuestNotification_Quest_C_HasObjective_Params
{
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.UpdateObjectives
struct UWidget_QuestNotification_Quest_C_UpdateObjectives_Params
{
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Construct
struct UWidget_QuestNotification_Quest_C_Construct_Params
{
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OnFadeOut
struct UWidget_QuestNotification_Quest_C_OnFadeOut_Params
{
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OnRemoveFromParent
struct UWidget_QuestNotification_Quest_C_OnRemoveFromParent_Params
{
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ResetAlpha
struct UWidget_QuestNotification_Quest_C_ResetAlpha_Params
{
};

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ExecuteUbergraph_Widget_QuestNotification_Quest
struct UWidget_QuestNotification_Quest_C_ExecuteUbergraph_Widget_QuestNotification_Quest_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
