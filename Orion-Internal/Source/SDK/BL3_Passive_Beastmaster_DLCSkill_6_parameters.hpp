#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_6_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_6.Passive_Beastmaster_DLCSkill_5_C.OnActivated
struct UPassive_Beastmaster_DLCSkill_5_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_DLCSkill_6.Passive_Beastmaster_DLCSkill_5_C.DLCSkill5_OnCausedAnyDamage
struct UPassive_Beastmaster_DLCSkill_5_C_DLCSkill5_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_DLCSkill_6.Passive_Beastmaster_DLCSkill_5_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_6
struct UPassive_Beastmaster_DLCSkill_5_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_6_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
