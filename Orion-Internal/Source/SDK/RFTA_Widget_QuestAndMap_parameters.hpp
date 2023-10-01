#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestAndMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.Refresh
struct UWidget_QuestAndMap_C_Refresh_Params
{
};

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.InitMiniMap
struct UWidget_QuestAndMap_C_InitMiniMap_Params
{
};

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.Construct
struct UWidget_QuestAndMap_C_Construct_Params
{
};

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.OnQuestLoaded_Event_1
struct UWidget_QuestAndMap_C_OnQuestLoaded_Event_1_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.OnQuestObjectivesUpdated_Event_1
struct UWidget_QuestAndMap_C_OnQuestObjectivesUpdated_Event_1_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.Destruct
struct UWidget_QuestAndMap_C_Destruct_Params
{
};

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_QuestAndMap_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.ExecuteUbergraph_Widget_QuestAndMap
struct UWidget_QuestAndMap_C_ExecuteUbergraph_Widget_QuestAndMap_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
