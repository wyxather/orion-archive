#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Kickcharger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Kickcharger.Ability_Kickcharger_C.OnDeactivated
struct UAbility_Kickcharger_C_OnDeactivated_Params
{
};

// Function Ability_Kickcharger.Ability_Kickcharger_C.WeaponFired
struct UAbility_Kickcharger_C_WeaponFired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Kickcharger.Ability_Kickcharger_C.StopSliding
struct UAbility_Kickcharger_C_StopSliding_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Kickcharger.Ability_Kickcharger_C.InstantChargeExpired
struct UAbility_Kickcharger_C_InstantChargeExpired_Params
{
};

// Function Ability_Kickcharger.Ability_Kickcharger_C.FullyChargedAudio
struct UAbility_Kickcharger_C_FullyChargedAudio_Params
{
};

// Function Ability_Kickcharger.Ability_Kickcharger_C.OnActivated
struct UAbility_Kickcharger_C_OnActivated_Params
{
};

// Function Ability_Kickcharger.Ability_Kickcharger_C.ChargeTicker
struct UAbility_Kickcharger_C_ChargeTicker_Params
{
};

// Function Ability_Kickcharger.Ability_Kickcharger_C.ExecuteUbergraph_Ability_Kickcharger
struct UAbility_Kickcharger_C_ExecuteUbergraph_Ability_Kickcharger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
