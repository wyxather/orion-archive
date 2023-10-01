#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Mod_Blizzard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.GetFilterActor
struct UAction_AOE_Mod_Blizzard_C_GetFilterActor_Params
{
	class AActor*                                      FilterActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.AddFrostbiteStack
struct UAction_AOE_Mod_Blizzard_C_AddFrostbiteStack_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.TestDriftstone
struct UAction_AOE_Mod_Blizzard_C_TestDriftstone_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.OnActionStart
struct UAction_AOE_Mod_Blizzard_C_OnActionStart_Params
{
};

// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.PostDamage
struct UAction_AOE_Mod_Blizzard_C_PostDamage_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Falloff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.ExecuteUbergraph_Action_AOE_Mod_Blizzard
struct UAction_AOE_Mod_Blizzard_C_ExecuteUbergraph_Action_AOE_Mod_Blizzard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
