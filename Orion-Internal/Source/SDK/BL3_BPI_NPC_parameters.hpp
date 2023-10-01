#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_NPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_NPC.BPI_NPC_C.SetNPCEngagePlayerRange
struct UBPI_NPC_C_SetNPCEngagePlayerRange_Params
{
	float                                              Units;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NPC.BPI_NPC_C.ForceNPCRevive
struct UBPI_NPC_C_ForceNPCRevive_Params
{
};

// Function BPI_NPC.BPI_NPC_C.NPCCanReviveOthers
struct UBPI_NPC_C_NPCCanReviveOthers_Params
{
	bool                                               CanReviveOthers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NPC.BPI_NPC_C.ForceDefaultCombatNPCDownstate
struct UBPI_NPC_C_ForceDefaultCombatNPCDownstate_Params
{
};

// Function BPI_NPC.BPI_NPC_C.TakeThingThenGiveBack
struct UBPI_NPC_C_TakeThingThenGiveBack_Params
{
};

// Function BPI_NPC.BPI_NPC_C.NPCResetUsable
struct UBPI_NPC_C_NPCResetUsable_Params
{
};

// Function BPI_NPC.BPI_NPC_C.NPCConstrainUsable
struct UBPI_NPC_C_NPCConstrainUsable_Params
{
};

// Function BPI_NPC.BPI_NPC_C.IgnoreEnemies
struct UBPI_NPC_C_IgnoreEnemies_Params
{
	bool                                               IgnoreEnemies;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NPC.BPI_NPC_C.NPCHideSword
struct UBPI_NPC_C_NPCHideSword_Params
{
};

// Function BPI_NPC.BPI_NPC_C.NPCUnhideSword
struct UBPI_NPC_C_NPCUnhideSword_Params
{
};

// Function BPI_NPC.BPI_NPC_C.NPCUnhideWeapon
struct UBPI_NPC_C_NPCUnhideWeapon_Params
{
};

// Function BPI_NPC.BPI_NPC_C.NPCHideWeapon
struct UBPI_NPC_C_NPCHideWeapon_Params
{
};

// Function BPI_NPC.BPI_NPC_C.HoldHandOutToTakeSomething
struct UBPI_NPC_C_HoldHandOutToTakeSomething_Params
{
};

// Function BPI_NPC.BPI_NPC_C.GiveSomethingToThePlayer
struct UBPI_NPC_C_GiveSomethingToThePlayer_Params
{
};

// Function BPI_NPC.BPI_NPC_C.ThingToHold
struct UBPI_NPC_C_ThingToHold_Params
{
	class UStaticMesh*                                 TheThingToHold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemPoolInfo                               ThePickupToHold;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTransform                                  OffsetTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PutAwayOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TakeOutOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseAltAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NPC.BPI_NPC_C.CanPatrol
struct UBPI_NPC_C_CanPatrol_Params
{
	bool                                               CanPatrol;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NPC.BPI_NPC_C.EngagePlayerWhenIdle
struct UBPI_NPC_C_EngagePlayerWhenIdle_Params
{
	bool                                               LookAtPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NPC.BPI_NPC_C.UseSmartObjects
struct UBPI_NPC_C_UseSmartObjects_Params
{
	bool                                               UseSmartObjects;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NPC.BPI_NPC_C.EngageInCombat
struct UBPI_NPC_C_EngageInCombat_Params
{
	bool                                               EngageInCombat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
