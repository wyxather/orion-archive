#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Canonization_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Canonization.Mission_Canonization_C.IsAllWeaponPartsLooted?
struct UMission_Canonization_C_IsAllWeaponPartsLooted__Params
{
	bool                                               Return_bool;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_17
struct UMission_Canonization_C_OnDialogSequenceFinished_17_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_16
struct UMission_Canonization_C_OnDialogSequenceFinished_16_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_15
struct UMission_Canonization_C_OnDialogSequenceFinished_15_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_14
struct UMission_Canonization_C_OnDialogSequenceFinished_14_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_13
struct UMission_Canonization_C_OnDialogSequenceFinished_13_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_12
struct UMission_Canonization_C_OnDialogSequenceFinished_12_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_11
struct UMission_Canonization_C_OnDialogSequenceFinished_11_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.OnDialogSequenceFinished_10
struct UMission_Canonization_C_OnDialogSequenceFinished_10_Params
{
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_ReturnedToResearchCenter
struct UMission_Canonization_C_MCE_ReturnedToResearchCenter_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_GetTrap_Full
struct UMission_Canonization_C_Obj_GetTrap_Full_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_GetTrap_Full
struct UMission_Canonization_C_Set_GetTrap_Full_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_LootCyclone
struct UMission_Canonization_C_Obj_LootCyclone_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedEnergySink
struct UMission_Canonization_C_MCE_PlacedEnergySink_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceEnergySinkInWeapon
struct UMission_Canonization_C_Obj_PlaceEnergySinkInWeapon_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceWeaponParts
struct UMission_Canonization_C_Obj_PlaceWeaponParts_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_WentToTemple
struct UMission_Canonization_C_MCE_WentToTemple_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_ReturnToResearchCenter
struct UMission_Canonization_C_Obj_ReturnToResearchCenter_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_PlaceTrap
struct UMission_Canonization_C_Obj_PlaceTrap_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_GetTrap_Empty
struct UMission_Canonization_C_Obj_GetTrap_Empty_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.INV_CannonWarmupComplete
struct UMission_Canonization_C_INV_CannonWarmupComplete_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_INV_WeaponWarmupComplete
struct UMission_Canonization_C_MCE_INV_WeaponWarmupComplete_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_DestroyOutrunner
struct UMission_Canonization_C_Obj_DestroyOutrunner_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_LootOutrunner
struct UMission_Canonization_C_Obj_LootOutrunner_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_GetWeaponParts_CompleteLoad
struct UMission_Canonization_C_MCE_GetWeaponParts_CompleteLoad_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_GetWeaponParts_OnCompleted
struct UMission_Canonization_C_MCE_GetWeaponParts_OnCompleted_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_DestroyedCyclone
struct UMission_Canonization_C_MCE_DestroyedCyclone_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_DestroyedOutrunner
struct UMission_Canonization_C_MCE_DestroyedOutrunner_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_GetWeapon
struct UMission_Canonization_C_Set_GetWeapon_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_GetWeapon
struct UMission_Canonization_C_Obj_GetWeapon_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_ClosedTrap
struct UMission_Canonization_C_MCE_ClosedTrap_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_GoToTemple
struct UMission_Canonization_C_Obj_GoToTemple_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedWeaponPart
struct UMission_Canonization_C_MCE_PlacedWeaponPart_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_PlacedEnergySinkInWeapon
struct UMission_Canonization_C_MCE_PlacedEnergySinkInWeapon_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_PlaceEnergySinkInWeapon
struct UMission_Canonization_C_Set_PlaceEnergySinkInWeapon_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_PlaceWeaponParts
struct UMission_Canonization_C_Set_PlaceWeaponParts_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_ReturnToResearchCenter
struct UMission_Canonization_C_Set_ReturnToResearchCenter_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_BackUp
struct UMission_Canonization_C_Obj_BackUp_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_GetWeaponParts
struct UMission_Canonization_C_Set_GetWeaponParts_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_BackUp
struct UMission_Canonization_C_Set_BackUp_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_FillTrap
struct UMission_Canonization_C_Set_FillTrap_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_DestroyCyclone
struct UMission_Canonization_C_Obj_DestroyCyclone_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Obj_FillTrap
struct UMission_Canonization_C_Obj_FillTrap_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_GrouseBackedUp
struct UMission_Canonization_C_MCE_GrouseBackedUp_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_PlaceTrap
struct UMission_Canonization_C_Set_PlaceTrap_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_GoToTemple
struct UMission_Canonization_C_Set_GoToTemple_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.Set_GetTrap_Empty
struct UMission_Canonization_C_Set_GetTrap_Empty_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.MCE_FiledEnergySink
struct UMission_Canonization_C_MCE_FiledEnergySink_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Canonization.Mission_Canonization_C.ExecuteUbergraph_Mission_Canonization
struct UMission_Canonization_C_ExecuteUbergraph_Mission_Canonization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
