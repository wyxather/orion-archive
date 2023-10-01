#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_LikeAGhost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.OnActivated
struct UPassiveSkill_Operative_LikeAGhost_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.OOO_OnActionSkillActivated
struct UPassiveSkill_Operative_LikeAGhost_C_OOO_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.LikeAGhost_OnTakeAnyDamage
struct UPassiveSkill_Operative_LikeAGhost_C_LikeAGhost_OnTakeAnyDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C.ExecuteUbergraph_PassiveSkill_Operative_LikeAGhost
struct UPassiveSkill_Operative_LikeAGhost_C_ExecuteUbergraph_PassiveSkill_Operative_LikeAGhost_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
