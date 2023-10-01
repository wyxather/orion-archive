#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_Shroom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.OnActivated
struct UAbility_Weapon_Shroom_C_OnActivated_Params
{
};

// Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.KilledEvilTink
struct UAbility_Weapon_Shroom_C_KilledEvilTink_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.ExecuteUbergraph_Ability_Weapon_Shroom
struct UAbility_Weapon_Shroom_C_ExecuteUbergraph_Ability_Weapon_Shroom_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
