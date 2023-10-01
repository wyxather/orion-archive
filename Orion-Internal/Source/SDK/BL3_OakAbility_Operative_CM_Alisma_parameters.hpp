#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_CM_Alisma_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.OnActivated
struct UOakAbility_Operative_CM_Alisma_C_OnActivated_Params
{
};

// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.CausedDamage
struct UOakAbility_Operative_CM_Alisma_C_CausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.OnDeactivated
struct UOakAbility_Operative_CM_Alisma_C_OnDeactivated_Params
{
};

// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.ExecuteUbergraph_OakAbility_Operative_CM_Alisma
struct UOakAbility_Operative_CM_Alisma_C_ExecuteUbergraph_OakAbility_Operative_CM_Alisma_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
