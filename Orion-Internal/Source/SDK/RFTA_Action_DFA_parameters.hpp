#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DFA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DFA.Action_DFA_C.Spawn
struct UAction_DFA_C_Spawn_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DFA.Action_DFA_C.GetRandomLocation
struct UAction_DFA_C_GetRandomLocation_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DFA.Action_DFA_C.OnActionStart
struct UAction_DFA_C_OnActionStart_Params
{
};

// Function Action_DFA.Action_DFA_C.SpawnInstanceRandom
struct UAction_DFA_C_SpawnInstanceRandom_Params
{
};

// Function Action_DFA.Action_DFA_C.SpawnInstanceTarget
struct UAction_DFA_C_SpawnInstanceTarget_Params
{
};

// Function Action_DFA.Action_DFA_C.OnActionStop
struct UAction_DFA_C_OnActionStop_Params
{
};

// Function Action_DFA.Action_DFA_C.OnDead_Event_1
struct UAction_DFA_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DFA.Action_DFA_C.OnTakeDamage
struct UAction_DFA_C_OnTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Action_DFA.Action_DFA_C.ExecuteUbergraph_Action_DFA
struct UAction_DFA_C_ExecuteUbergraph_Action_DFA_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
