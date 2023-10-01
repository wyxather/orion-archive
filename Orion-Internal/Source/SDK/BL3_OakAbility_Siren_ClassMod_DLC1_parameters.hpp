#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_DLC1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_DLC1.OakAbility_Siren_ClassMod_DLC1_C.IsNotStatusEffectDamage
struct UOakAbility_Siren_ClassMod_DLC1_C_IsNotStatusEffectDamage_Params
{
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_DLC1.OakAbility_Siren_ClassMod_DLC1_C.OnActivated
struct UOakAbility_Siren_ClassMod_DLC1_C_OnActivated_Params
{
};

// Function OakAbility_Siren_ClassMod_DLC1.OakAbility_Siren_ClassMod_DLC1_C.SirenDLC1ClassMod_OnTakeAnyDamage
struct UOakAbility_Siren_ClassMod_DLC1_C_SirenDLC1ClassMod_OnTakeAnyDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Siren_ClassMod_DLC1.OakAbility_Siren_ClassMod_DLC1_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_DLC1
struct UOakAbility_Siren_ClassMod_DLC1_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_DLC1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
