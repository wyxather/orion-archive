#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_Generic_KillStackReloadDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.OnActivated
struct UAbility_EG_Generic_KillStackReloadDamage_C_OnActivated_Params
{
};

// Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.CausedDeath
struct UAbility_EG_Generic_KillStackReloadDamage_C_CausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage
struct UAbility_EG_Generic_KillStackReloadDamage_C_ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
