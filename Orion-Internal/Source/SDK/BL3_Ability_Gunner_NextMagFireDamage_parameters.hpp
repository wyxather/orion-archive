#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_NextMagFireDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C.ReloadedWeapon
struct UAbility_Gunner_NextMagFireDamage_C_ReloadedWeapon_Params
{
	class AWeapon**                                    EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C.ExecuteUbergraph_Ability_Gunner_NextMagFireDamage
struct UAbility_Gunner_NextMagFireDamage_C_ExecuteUbergraph_Ability_Gunner_NextMagFireDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
