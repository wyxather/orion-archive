#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Contagion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Contagion.Ability_Contagion_C.OnActivated
struct UAbility_Contagion_C_OnActivated_Params
{
};

// Function Ability_Contagion.Ability_Contagion_C.Event_RelaodStarted
struct UAbility_Contagion_C_Event_RelaodStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Contagion.Ability_Contagion_C.DotEnd
struct UAbility_Contagion_C_DotEnd_Params
{
};

// Function Ability_Contagion.Ability_Contagion_C.OnDeactivated
struct UAbility_Contagion_C_OnDeactivated_Params
{
};

// Function Ability_Contagion.Ability_Contagion_C.ExecuteUbergraph_Ability_Contagion
struct UAbility_Contagion_C_ExecuteUbergraph_Ability_Contagion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
