#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_CoolerHeads_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.OnActivated
struct UPassiveSkill_Operative_CoolerHeads_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.Experimental Bullets on Critial Hit
struct UPassiveSkill_Operative_CoolerHeads_C_Experimental_Bullets_on_Critial_Hit_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.ExecuteUbergraph_PassiveSkill_Operative_CoolerHeads
struct UPassiveSkill_Operative_CoolerHeads_C_ExecuteUbergraph_PassiveSkill_Operative_CoolerHeads_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
