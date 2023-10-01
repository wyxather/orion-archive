#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Checkpoint_Summon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.OnSummonStatusChanged
struct UWidget_Checkpoint_Summon_C_OnSummonStatusChanged_Params
{
	bool*                                              IsSummoning;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.HideNotification
struct UWidget_Checkpoint_Summon_C_HideNotification_Params
{
};

// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.ShowNotification
struct UWidget_Checkpoint_Summon_C_ShowNotification_Params
{
	struct FName*                                      SummonerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.Construct
struct UWidget_Checkpoint_Summon_C_Construct_Params
{
};

// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.Tick
struct UWidget_Checkpoint_Summon_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.ExecuteUbergraph_Widget_Checkpoint_Summon
struct UWidget_Checkpoint_Summon_C_ExecuteUbergraph_Widget_Checkpoint_Summon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
