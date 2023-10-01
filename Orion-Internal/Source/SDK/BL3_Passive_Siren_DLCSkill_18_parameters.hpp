#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_18_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.OnActivated
struct UPassive_Siren_DLCSkill_17_C_OnActivated_Params
{
};

// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.DLCSkill17_OnResourcePoolDepleted
struct UPassive_Siren_DLCSkill_17_C_DLCSkill17_OnResourcePoolDepleted_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.DLCSkill17_OnTakeAnyDamage
struct UPassive_Siren_DLCSkill_17_C_DLCSkill17_OnTakeAnyDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.ExecuteUbergraph_Passive_Siren_DLCSkill_18
struct UPassive_Siren_DLCSkill_17_C_ExecuteUbergraph_Passive_Siren_DLCSkill_18_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
