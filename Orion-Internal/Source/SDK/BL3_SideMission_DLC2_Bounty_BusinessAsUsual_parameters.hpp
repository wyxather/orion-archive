#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SideMission_DLC2_Bounty_BusinessAsUsual_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_11
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_11_Params
{
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_10
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_10_Params
{
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_9
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_9_Params
{
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_8
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_8_Params
{
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_7
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_7_Params
{
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_TurnValves
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_TurnValves_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MissionKickoff
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MissionKickoff_Params
{
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_FindProcurerHouse
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_FindProcurerHouse_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_TurnOffValves
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_TurnOffValves_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_ActivateSwitch
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_ActivateSwitch_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_ActivateSwitch
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_ActivateSwitch_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_SwitchActivated
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_SwitchActivated_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ProcurerHouseFound
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ProcurerHouseFound_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Set_KillProcurer
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Set_KillProcurer_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_PickUpWine
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_PickUpWine_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_WinePickedUp
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_WinePickedUp_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_PlaceWine
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_PlaceWine_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_KillProcurer
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_KillProcurer_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ProcurerKilled
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ProcurerKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_PlaceWine
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_PlaceWine_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_WinePlaced
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_WinePlaced_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Inv_Obj_Valve1
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Inv_Obj_Valve1_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Inv_Obj_Valve2
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Inv_Obj_Valve2_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ValveTurned1
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ValveTurned1_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ValveTurned2
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ValveTurned2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_PickUpWine
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_PickUpWine_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_FindProcurerHouse
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_FindProcurerHouse_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.ExecuteUbergraph_SideMission_DLC2_Bounty_BusinessAsUsual
struct USideMission_DLC2_Bounty_BusinessAsUsual_C_ExecuteUbergraph_SideMission_DLC2_Bounty_BusinessAsUsual_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
