#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Hib_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.OnActivated
struct UOakAbility_Siren_ClassMod_Hib_C_OnActivated_Params
{
};

// Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.HibiscusClassMod_OnTakeAnyDamage
struct UOakAbility_Siren_ClassMod_Hib_C_HibiscusClassMod_OnTakeAnyDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Hib
struct UOakAbility_Siren_ClassMod_Hib_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Hib_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
