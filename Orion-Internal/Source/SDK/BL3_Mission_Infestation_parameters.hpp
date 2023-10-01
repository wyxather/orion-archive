#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Infestation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_23
struct UMission_Infestation_C_OnDialogSequenceFinished_23_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_22
struct UMission_Infestation_C_OnDialogSequenceFinished_22_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_21
struct UMission_Infestation_C_OnDialogSequenceFinished_21_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_20
struct UMission_Infestation_C_OnDialogSequenceFinished_20_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_19
struct UMission_Infestation_C_OnDialogSequenceFinished_19_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_18
struct UMission_Infestation_C_OnDialogSequenceFinished_18_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_17
struct UMission_Infestation_C_OnDialogSequenceFinished_17_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_16
struct UMission_Infestation_C_OnDialogSequenceFinished_16_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_15
struct UMission_Infestation_C_OnDialogSequenceFinished_15_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_14
struct UMission_Infestation_C_OnDialogSequenceFinished_14_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_13
struct UMission_Infestation_C_OnDialogSequenceFinished_13_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.Set_InvestigateComotion
struct UMission_Infestation_C_Set_InvestigateComotion_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Set_FreezeOtherKevins
struct UMission_Infestation_C_Set_FreezeOtherKevins_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Obj_CollectKevin
struct UMission_Infestation_C_Obj_CollectKevin_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Obj_InfestationDispose
struct UMission_Infestation_C_Obj_InfestationDispose_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Obj_InvestigateComotion
struct UMission_Infestation_C_Obj_InvestigateComotion_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Update_InvestigateCommotion
struct UMission_Infestation_C_Update_InvestigateCommotion_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.ME_Player has disposed of a Kevin
struct UMission_Infestation_C_ME_Player_has_disposed_of_a_Kevin_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.OBJ_TakeFreezeGun
struct UMission_Infestation_C_OBJ_TakeFreezeGun_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.SET_TakeFreezeGun
struct UMission_Infestation_C_SET_TakeFreezeGun_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Update_TakeFreezeGun
struct UMission_Infestation_C_Update_TakeFreezeGun_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Update_CollectKevin
struct UMission_Infestation_C_Update_CollectKevin_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.SET_FreezeExampleKevin
struct UMission_Infestation_C_SET_FreezeExampleKevin_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.OBJ_FreezeExampleKevin
struct UMission_Infestation_C_OBJ_FreezeExampleKevin_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.SET_DisposeOfKevins
struct UMission_Infestation_C_SET_DisposeOfKevins_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Update_FreezeExampleKevin
struct UMission_Infestation_C_Update_FreezeExampleKevin_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.[!]Set an Objective in the Details[!]
struct UMission_Infestation_C__!_Set_an_Objective_in_the_Details_!__Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.SET_CollectExampleKevin
struct UMission_Infestation_C_SET_CollectExampleKevin_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.[OBJ_FreezeExampleKevin_Objective] PROXY_1
struct UMission_Infestation_C__OBJ_FreezeExampleKevin_Objective__PROXY_1_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.OBJ_CollectExampleFrozenKevin
struct UMission_Infestation_C_OBJ_CollectExampleFrozenKevin_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Clear_FreezeExampleKevin
struct UMission_Infestation_C_Clear_FreezeExampleKevin_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.Update_CollectExampleFrozenKevin
struct UMission_Infestation_C_Update_CollectExampleFrozenKevin_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.MCE_KevinCaptured
struct UMission_Infestation_C_MCE_KevinCaptured_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.MCE_Dialog_UseCryo_Tannis
struct UMission_Infestation_C_MCE_Dialog_UseCryo_Tannis_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.MCE_Dialog_NowPickItUp_Tannis
struct UMission_Infestation_C_MCE_Dialog_NowPickItUp_Tannis_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.MCE_Dialog_UseCryo_Claptrap
struct UMission_Infestation_C_MCE_Dialog_UseCryo_Claptrap_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Infestation.Mission_Infestation_C.MissionKickoff
struct UMission_Infestation_C_MissionKickoff_Params
{
};

// Function Mission_Infestation.Mission_Infestation_C.ExecuteUbergraph_Mission_Infestation
struct UMission_Infestation_C_ExecuteUbergraph_Mission_Infestation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
