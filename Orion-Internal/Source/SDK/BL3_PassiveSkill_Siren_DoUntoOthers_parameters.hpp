#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_DoUntoOthers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.IsActionSkillActionActive
struct UPassiveSkill_Siren_DoUntoOthers_C_IsActionSkillActionActive_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.CalculateAbilityState
struct UPassiveSkill_Siren_DoUntoOthers_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.OnActivated
struct UPassiveSkill_Siren_DoUntoOthers_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.Do Harm On Took Damage
struct UPassiveSkill_Siren_DoUntoOthers_C_Do_Harm_On_Took_Damage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C.ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers
struct UPassiveSkill_Siren_DoUntoOthers_C_ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
