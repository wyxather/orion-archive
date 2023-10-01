#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_LaidBare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_LaidBare.PassiveSkill_Siren_LaidBare_C.OnActivated
struct UPassiveSkill_Siren_LaidBare_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_LaidBare.PassiveSkill_Siren_LaidBare_C.SirenSkillEvent_OnCausedAnyDamage
struct UPassiveSkill_Siren_LaidBare_C_SirenSkillEvent_OnCausedAnyDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Siren_LaidBare.PassiveSkill_Siren_LaidBare_C.ExecuteUbergraph_PassiveSkill_Siren_LaidBare
struct UPassiveSkill_Siren_LaidBare_C_ExecuteUbergraph_PassiveSkill_Siren_LaidBare_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
