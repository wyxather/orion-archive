#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SelfModulatingShields_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Remove Status Effect Modifier
struct UPassiveSkill_Operative_SelfModulatingShields_C_Remove_Status_Effect_Modifier_Params
{
};

// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Add Status Effect Modifier
struct UPassiveSkill_Operative_SelfModulatingShields_C_Add_Status_Effect_Modifier_Params
{
};

// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.OnActivated
struct UPassiveSkill_Operative_SelfModulatingShields_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Self-Modulating Shields OnTakeAnyDamage
struct UPassiveSkill_Operative_SelfModulatingShields_C_Self_Modulating_Shields_OnTakeAnyDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields
struct UPassiveSkill_Operative_SelfModulatingShields_C_ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
