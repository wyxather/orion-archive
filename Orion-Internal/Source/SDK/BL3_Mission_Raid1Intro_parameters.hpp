#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Raid1Intro_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_5
struct UMission_Raid1Intro_C_OnDialogSequenceFinished_5_Params
{
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_4
struct UMission_Raid1Intro_C_OnDialogSequenceFinished_4_Params
{
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_Navigate_Raid1Planet
struct UMission_Raid1Intro_C_Set_Navigate_Raid1Planet_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_Navigate_Raid1Planet
struct UMission_Raid1Intro_C_Obj_Navigate_Raid1Planet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_Navigate_Raid1Planet
struct UMission_Raid1Intro_C_UPDATE_Navigate_Raid1Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.ADVANCE_Navigate_Raid1Planet
struct UMission_Raid1Intro_C_ADVANCE_Navigate_Raid1Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_UseDropPod
struct UMission_Raid1Intro_C_Set_UseDropPod_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_PlanetTitleCard
struct UMission_Raid1Intro_C_Set_PlanetTitleCard_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_MissionEnd
struct UMission_Raid1Intro_C_Set_MissionEnd_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_ReNavigate_Raid1Planet
struct UMission_Raid1Intro_C_Obj_ReNavigate_Raid1Planet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_ReNavigate_Raid1Planet
struct UMission_Raid1Intro_C_UPDATE_ReNavigate_Raid1Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_UseDropPod
struct UMission_Raid1Intro_C_Obj_UseDropPod_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_TITLECARD_RAIDPLANET
struct UMission_Raid1Intro_C_Obj_TITLECARD_RAIDPLANET_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_MissionEnd
struct UMission_Raid1Intro_C_Obj_MissionEnd_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.MissionKickoff
struct UMission_Raid1Intro_C_MissionKickoff_Params
{
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.AdvanceTo_PlanetTitleCard
struct UMission_Raid1Intro_C_AdvanceTo_PlanetTitleCard_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.ExecuteUbergraph_Mission_Raid1Intro
struct UMission_Raid1Intro_C_ExecuteUbergraph_Mission_Raid1Intro_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
