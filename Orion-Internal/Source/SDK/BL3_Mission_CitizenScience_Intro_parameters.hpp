#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_CitizenScience_Intro_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.OnDialogSequenceFinished_3
struct UMission_CitizenScience_Intro_C_OnDialogSequenceFinished_3_Params
{
};

// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Set_InteractWithMachine
struct UMission_CitizenScience_Intro_C_Set_InteractWithMachine_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Obj_InteractWithMachine
struct UMission_CitizenScience_Intro_C_Obj_InteractWithMachine_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MissionKickoff
struct UMission_CitizenScience_Intro_C_MissionKickoff_Params
{
};

// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MCE_InteractedWithMachine
struct UMission_CitizenScience_Intro_C_MCE_InteractedWithMachine_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.ExecuteUbergraph_Mission_CitizenScience_Intro
struct UMission_CitizenScience_Intro_C_ExecuteUbergraph_Mission_CitizenScience_Intro_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
