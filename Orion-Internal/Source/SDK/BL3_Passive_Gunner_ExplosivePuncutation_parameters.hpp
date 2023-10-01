#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_ExplosivePuncutation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.OnActivated
struct UPassive_Gunner_ExplosivePuncutation_C_OnActivated_Params
{
};

// Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.CausedDamage_ExplosivePunctuation
struct UPassive_Gunner_ExplosivePuncutation_C_CausedDamage_ExplosivePunctuation_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.ExecuteUbergraph_Passive_Gunner_ExplosivePuncutation
struct UPassive_Gunner_ExplosivePuncutation_C_ExecuteUbergraph_Passive_Gunner_ExplosivePuncutation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
