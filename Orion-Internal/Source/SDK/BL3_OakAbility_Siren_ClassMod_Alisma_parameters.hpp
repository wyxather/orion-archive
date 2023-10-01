#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Alisma_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.OnActivated
struct UOakAbility_Siren_ClassMod_Alisma_C_OnActivated_Params
{
};

// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.Alisma_OnDealtAnyDamage
struct UOakAbility_Siren_ClassMod_Alisma_C_Alisma_OnDealtAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.TimerReset
struct UOakAbility_Siren_ClassMod_Alisma_C_TimerReset_Params
{
};

// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.OnResumed
struct UOakAbility_Siren_ClassMod_Alisma_C_OnResumed_Params
{
};

// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Alisma
struct UOakAbility_Siren_ClassMod_Alisma_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Alisma_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
