#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestCompleteNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.ObjectiveSuccess
struct UWidget_QuestCompleteNotification_C_ObjectiveSuccess_Params
{
	struct FRemnantQuestReward*                        QuestReward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.InitQuests
struct UWidget_QuestCompleteNotification_C_InitQuests_Params
{
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.QuestSuccess
struct UWidget_QuestCompleteNotification_C_QuestSuccess_Params
{
	struct FRemnantQuestReward*                        QuestReward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.QuestComplete
struct UWidget_QuestCompleteNotification_C_QuestComplete_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.FindWidgetForQuest
struct UWidget_QuestCompleteNotification_C_FindWidgetForQuest_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_QuestNotification_Quest_C*           Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.UpdateQuest
struct UWidget_QuestCompleteNotification_C_UpdateQuest_Params
{
	class ARemnantQuest**                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.Construct
struct UWidget_QuestCompleteNotification_C_Construct_Params
{
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.OnNotifyQuestReward_Event_1
struct UWidget_QuestCompleteNotification_C_OnNotifyQuestReward_Event_1_Params
{
	struct FRemnantQuestReward*                        Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.ExecuteUbergraph_Widget_QuestCompleteNotification
struct UWidget_QuestCompleteNotification_C_ExecuteUbergraph_Widget_QuestCompleteNotification_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
