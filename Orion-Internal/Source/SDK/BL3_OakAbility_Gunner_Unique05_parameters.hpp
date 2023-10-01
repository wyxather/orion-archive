#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_Unique05_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnActivated
struct UOakAbility_Gunner_Unique05_C_OnActivated_Params
{
};

// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnWeaponStartReloaded_UniqueClassMod05
struct UOakAbility_Gunner_Unique05_C_OnWeaponStartReloaded_UniqueClassMod05_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.DontNeedNoAbilityTimers
struct UOakAbility_Gunner_Unique05_C_DontNeedNoAbilityTimers_Params
{
};

// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.ExecuteUbergraph_OakAbility_Gunner_Unique05
struct UOakAbility_Gunner_Unique05_C_ExecuteUbergraph_OakAbility_Gunner_Unique05_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
