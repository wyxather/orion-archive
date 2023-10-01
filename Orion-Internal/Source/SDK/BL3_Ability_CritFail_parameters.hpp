#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CritFail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CritFail.Ability_CritFail_C.OnActivated
struct UAbility_CritFail_C_OnActivated_Params
{
};

// Function Ability_CritFail.Ability_CritFail_C.ReloadStartedEvent
struct UAbility_CritFail_C_ReloadStartedEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_CritFail.Ability_CritFail_C.ExecuteUbergraph_Ability_CritFail
struct UAbility_CritFail_C_ExecuteUbergraph_Ability_CritFail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
