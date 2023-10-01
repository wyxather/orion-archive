#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AmberManagement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_AmberManagement.Ability_AmberManagement_C.OnCauseDeath_CE
struct UAbility_AmberManagement_C_OnCauseDeath_CE_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_AmberManagement.Ability_AmberManagement_C.OnDeactivated
struct UAbility_AmberManagement_C_OnDeactivated_Params
{
};

// Function Ability_AmberManagement.Ability_AmberManagement_C.OnUnregistered
struct UAbility_AmberManagement_C_OnUnregistered_Params
{
};

// Function Ability_AmberManagement.Ability_AmberManagement_C.OnActivated
struct UAbility_AmberManagement_C_OnActivated_Params
{
};

// Function Ability_AmberManagement.Ability_AmberManagement_C.ExecuteUbergraph_Ability_AmberManagement
struct UAbility_AmberManagement_C_ExecuteUbergraph_Ability_AmberManagement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
