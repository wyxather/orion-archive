#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Splitter_Champion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SplitAtThreshold
struct ACharacter_Root_Splitter_Champion_C_SplitAtThreshold_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ShouldDoubleUp
struct ACharacter_Root_Splitter_Champion_C_ShouldDoubleUp_Params
{
	int*                                               MinSplitters;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Chance;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SetNormalChampCooldown
struct ACharacter_Root_Splitter_Champion_C_SetNormalChampCooldown_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SplitterCanAttack
struct ACharacter_Root_Splitter_Champion_C_SplitterCanAttack_Params
{
	class ABP_Monster_C**                              Splitter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStateMachineComponent*                      StateMachine;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.UpdateSplittersList
struct ACharacter_Root_Splitter_Champion_C_UpdateSplittersList_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ReceiveBeginPlay
struct ACharacter_Root_Splitter_Champion_C_ReceiveBeginPlay_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ReceiveTick
struct ACharacter_Root_Splitter_Champion_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampSplit
struct ACharacter_Root_Splitter_Champion_C_DoChampSplit_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.Mus_Earth_MiniBoss_Combat_Intro_SC
struct ACharacter_Root_Splitter_Champion_C_Mus_Earth_MiniBoss_Combat_Intro_SC_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampShockwave
struct ACharacter_Root_Splitter_Champion_C_DoChampShockwave_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampHeal
struct ACharacter_Root_Splitter_Champion_C_DoChampHeal_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampAxeThrow
struct ACharacter_Root_Splitter_Champion_C_DoChampAxeThrow_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampDash
struct ACharacter_Root_Splitter_Champion_C_DoChampDash_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.CombatEnter
struct ACharacter_Root_Splitter_Champion_C_CombatEnter_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampHealPulse
struct ACharacter_Root_Splitter_Champion_C_DoChampHealPulse_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.Die
struct ACharacter_Root_Splitter_Champion_C_Die_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.OnDead_Event_2
struct ACharacter_Root_Splitter_Champion_C_OnDead_Event_2_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.KillAllSplitterClones
struct ACharacter_Root_Splitter_Champion_C_KillAllSplitterClones_Params
{
};

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ExecuteUbergraph_Character_Root_Splitter_Champion
struct ACharacter_Root_Splitter_Champion_C_ExecuteUbergraph_Character_Root_Splitter_Champion_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
