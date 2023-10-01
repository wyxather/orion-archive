#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Beastmaster_DLCSkill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn
struct UActionSkill_Beastmaster_DLCSkill_C_TrapFailedToSpawn_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly
struct UActionSkill_Beastmaster_DLCSkill_C_EndTrapEarly_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.GetCooldownRestartPercent
struct UActionSkill_Beastmaster_DLCSkill_C_GetCooldownRestartPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnActivated
struct UActionSkill_Beastmaster_DLCSkill_C_OnActivated_Params
{
};

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.BeastmasterDLCSkill_OnTakeAnyDamage
struct UActionSkill_Beastmaster_DLCSkill_C_BeastmasterDLCSkill_OnTakeAnyDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnStartActionAbility
struct UActionSkill_Beastmaster_DLCSkill_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill
struct UActionSkill_Beastmaster_DLCSkill_C_ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
