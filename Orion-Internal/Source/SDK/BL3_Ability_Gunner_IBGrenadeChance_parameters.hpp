#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_IBGrenadeChance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.GrenadeCooldown
struct UAbility_Gunner_IBGrenadeChance_C_GrenadeCooldown_Params
{
};

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronIronBearStarted
struct UAbility_Gunner_IBGrenadeChance_C_AnointIronIronBearStarted_Params
{
	class AOakCharacter_IronBear**                     IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronBearEnded
struct UAbility_Gunner_IBGrenadeChance_C_AnointIronBearEnded_Params
{
};

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointRemoveEffect
struct UAbility_Gunner_IBGrenadeChance_C_AnointRemoveEffect_Params
{
};

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnTookDamage
struct UAbility_Gunner_IBGrenadeChance_C_OnTookDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnActivated
struct UAbility_Gunner_IBGrenadeChance_C_OnActivated_Params
{
};

// Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.ExecuteUbergraph_Ability_Gunner_IBGrenadeChance
struct UAbility_Gunner_IBGrenadeChance_C_ExecuteUbergraph_Ability_Gunner_IBGrenadeChance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
