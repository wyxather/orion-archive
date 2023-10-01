#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Anarchy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Anarchy.Ability_Anarchy_C.OnRegistered
struct UAbility_Anarchy_C_OnRegistered_Params
{
};

// Function Ability_Anarchy.Ability_Anarchy_C.OnUnregistered
struct UAbility_Anarchy_C_OnUnregistered_Params
{
};

// Function Ability_Anarchy.Ability_Anarchy_C.OnCauseDeath_CE
struct UAbility_Anarchy_C_OnCauseDeath_CE_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Anarchy.Ability_Anarchy_C.Reload Started
struct UAbility_Anarchy_C_Reload_Started_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Anarchy.Ability_Anarchy_C.ExecuteUbergraph_Ability_Anarchy
struct UAbility_Anarchy_C_ExecuteUbergraph_Ability_Anarchy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
