#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Takedown2_Intro_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.OnDialogSequenceFinished_3
struct UMission_Takedown2_Intro_C_OnDialogSequenceFinished_3_Params
{
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_Navigate_TakedownTwoPlanet
struct UMission_Takedown2_Intro_C_Set_Navigate_TakedownTwoPlanet_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_Navigate_TakedownTwoPlanet
struct UMission_Takedown2_Intro_C_Obj_Navigate_TakedownTwoPlanet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_Navigate_Takedown2Planet
struct UMission_Takedown2_Intro_C_UPDATE_Navigate_Takedown2Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ADVANCE_Navigate_Takedown2Planet
struct UMission_Takedown2_Intro_C_ADVANCE_Navigate_Takedown2Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_UseDropPod
struct UMission_Takedown2_Intro_C_Set_UseDropPod_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_PlanetTitleCard
struct UMission_Takedown2_Intro_C_Set_PlanetTitleCard_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_MissionEnd
struct UMission_Takedown2_Intro_C_Set_MissionEnd_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_ReNavigate_Takedown2Planet
struct UMission_Takedown2_Intro_C_Obj_ReNavigate_Takedown2Planet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_ReNavigate_Takedown2Planet
struct UMission_Takedown2_Intro_C_UPDATE_ReNavigate_Takedown2Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_UseDropPod
struct UMission_Takedown2_Intro_C_Obj_UseDropPod_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_TITLECARD_TAKEDOWNTWOPLANET
struct UMission_Takedown2_Intro_C_Obj_TITLECARD_TAKEDOWNTWOPLANET_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_MissionEnd
struct UMission_Takedown2_Intro_C_Obj_MissionEnd_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.MissionKickoff
struct UMission_Takedown2_Intro_C_MissionKickoff_Params
{
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.AdvanceTo_PlanetTitleCard
struct UMission_Takedown2_Intro_C_AdvanceTo_PlanetTitleCard_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ExecuteUbergraph_Mission_Takedown2_Intro
struct UMission_Takedown2_Intro_C_ExecuteUbergraph_Mission_Takedown2_Intro_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
