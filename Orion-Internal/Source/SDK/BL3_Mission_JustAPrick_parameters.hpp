#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_JustAPrick_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_9
struct UMission_JustAPrick_C_OnDialogSequenceFinished_9_Params
{
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_8
struct UMission_JustAPrick_C_OnDialogSequenceFinished_8_Params
{
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_7
struct UMission_JustAPrick_C_OnDialogSequenceFinished_7_Params
{
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_6
struct UMission_JustAPrick_C_OnDialogSequenceFinished_6_Params
{
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.Set_CollectHypo
struct UMission_JustAPrick_C_Set_CollectHypo_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_CollectHypo
struct UMission_JustAPrick_C_Obj_CollectHypo_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.Set_TurnIn
struct UMission_JustAPrick_C_Set_TurnIn_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_TurnIn
struct UMission_JustAPrick_C_Obj_TurnIn_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_BringHyposBack
struct UMission_JustAPrick_C_MCE_BringHyposBack_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_PlayerCollectedHypo
struct UMission_JustAPrick_C_MCE_PlayerCollectedHypo_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.OBJ_Hidden_SteamJetActivated
struct UMission_JustAPrick_C_OBJ_Hidden_SteamJetActivated_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.Update_SteamJetActivated
struct UMission_JustAPrick_C_Update_SteamJetActivated_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.MissionKickoff
struct UMission_JustAPrick_C_MissionKickoff_Params
{
};

// Function Mission_JustAPrick.Mission_JustAPrick_C.ExecuteUbergraph_Mission_JustAPrick
struct UMission_JustAPrick_C_ExecuteUbergraph_Mission_JustAPrick_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
