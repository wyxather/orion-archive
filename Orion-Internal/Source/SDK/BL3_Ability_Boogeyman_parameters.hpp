#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Boogeyman_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Boogeyman.Ability_Boogeyman_C.OnActivated
struct UAbility_Boogeyman_C_OnActivated_Params
{
};

// Function Ability_Boogeyman.Ability_Boogeyman_C.WeaponFired
struct UAbility_Boogeyman_C_WeaponFired_Params
{
};

// Function Ability_Boogeyman.Ability_Boogeyman_C.OnCausedDeath_Event
struct UAbility_Boogeyman_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Boogeyman.Ability_Boogeyman_C.ExecuteUbergraph_Ability_Boogeyman
struct UAbility_Boogeyman_C_ExecuteUbergraph_Ability_Boogeyman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
