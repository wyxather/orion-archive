#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Raid1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_OnActionSkillActivated
struct UOakAbility_Gunner_CM_Raid1_C_CMRaid1_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_IronBear_OnCausedDeath
struct UOakAbility_Gunner_CM_Raid1_C_CMRaid1_IronBear_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.CMRaid1_IronBear_OnTakeAnyDamage
struct UOakAbility_Gunner_CM_Raid1_C_CMRaid1_IronBear_OnTakeAnyDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.OnActivated
struct UOakAbility_Gunner_CM_Raid1_C_OnActivated_Params
{
};

// Function OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C.ExecuteUbergraph_OakAbility_Gunner_CM_Raid1
struct UOakAbility_Gunner_CM_Raid1_C_ExecuteUbergraph_OakAbility_Gunner_CM_Raid1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
