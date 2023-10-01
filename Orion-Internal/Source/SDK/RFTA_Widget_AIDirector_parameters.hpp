#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_AIDirector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_AIDirector.Widget_AIDirector_C.Get_IntensityState_Text_1
struct UWidget_AIDirector_C_Get_IntensityState_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_AIDirector.Widget_AIDirector_C.RefreshEncounterGroupList
struct UWidget_AIDirector_C_RefreshEncounterGroupList_Params
{
};

// Function Widget_AIDirector.Widget_AIDirector_C.GetCurrentAIDirector
struct UWidget_AIDirector_C_GetCurrentAIDirector_Params
{
	class UAIDirector*                                 Director;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AIDirector.Widget_AIDirector_C.GetVisibility_1
struct UWidget_AIDirector_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AIDirector.Widget_AIDirector_C.OnGroupAdded_Event_1
struct UWidget_AIDirector_C_OnGroupAdded_Event_1_Params
{
	class UEncounterGroupInstance**                    EncounterGroup;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AIDirector.Widget_AIDirector_C.OnGroupRemoved_Event_1
struct UWidget_AIDirector_C_OnGroupRemoved_Event_1_Params
{
	class UEncounterGroupInstance**                    EncounterGroup;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AIDirector.Widget_AIDirector_C.SetAIDirector
struct UWidget_AIDirector_C_SetAIDirector_Params
{
	class UAIDirector**                                Director;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AIDirector.Widget_AIDirector_C.Tick
struct UWidget_AIDirector_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AIDirector.Widget_AIDirector_C.ExecuteUbergraph_Widget_AIDirector
struct UWidget_AIDirector_C_ExecuteUbergraph_Widget_AIDirector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
