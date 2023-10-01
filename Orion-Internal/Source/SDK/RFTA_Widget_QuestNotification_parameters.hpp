#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_QuestNotification.Widget_QuestNotification_C.GetZoneQuest
struct UWidget_QuestNotification_C_GetZoneQuest_Params
{
	class ARemnantQuest*                               Quest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.UpdateQuestPinning
struct UWidget_QuestNotification_C_UpdateQuestPinning_Params
{
	bool*                                              DoUnpin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.IsValidQuest
struct UWidget_QuestNotification_C_IsValidQuest_Params
{
	class ARemnantQuest**                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.ObjectiveSuccess
struct UWidget_QuestNotification_C_ObjectiveSuccess_Params
{
	struct FRemnantQuestReward*                        QuestReward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.InitQuests
struct UWidget_QuestNotification_C_InitQuests_Params
{
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.QuestSuccess
struct UWidget_QuestNotification_C_QuestSuccess_Params
{
	struct FRemnantQuestReward*                        QuestReward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.QuestComplete
struct UWidget_QuestNotification_C_QuestComplete_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.FindWidgetForQuest
struct UWidget_QuestNotification_C_FindWidgetForQuest_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_QuestNotification_Quest_C*           Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.UpdateQuest
struct UWidget_QuestNotification_C_UpdateQuest_Params
{
	class ARemnantQuest**                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARemnantQuest**                              CallingQuest;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.Construct
struct UWidget_QuestNotification_C_Construct_Params
{
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.OnQuestObjectivesUpdate
struct UWidget_QuestNotification_C_OnQuestObjectivesUpdate_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.OnQuestCompleted
struct UWidget_QuestNotification_C_OnQuestCompleted_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.OnFinishTravel
struct UWidget_QuestNotification_C_OnFinishTravel_Params
{
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.OnBeginTravel
struct UWidget_QuestNotification_C_OnBeginTravel_Params
{
};

// Function Widget_QuestNotification.Widget_QuestNotification_C.ExecuteUbergraph_Widget_QuestNotification
struct UWidget_QuestNotification_C_ExecuteUbergraph_Widget_QuestNotification_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
