#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Beastmaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointOnActionSkillCoolingDown
struct UAbility_AnointParent_Beastmaster_C_AnointOnActionSkillCoolingDown_Params
{
	class UOakActionAbility**                          ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndHulkOut
struct UAbility_AnointParent_Beastmaster_C_AnointEndHulkOut_Params
{
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndGammaBurst
struct UAbility_AnointParent_Beastmaster_C_AnointEndGammaBurst_Params
{
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndFadeAway
struct UAbility_AnointParent_Beastmaster_C_AnointEndFadeAway_Params
{
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedBeastmasterSkill
struct UAbility_AnointParent_Beastmaster_C_AnointUsedBeastmasterSkill_Params
{
	TEnumAsByte<Enum_BeastmasterActionSkill>           ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedAttackCommand
struct UAbility_AnointParent_Beastmaster_C_AnointUsedAttackCommand_Params
{
	EOakActionAbilityPetEvolutionType                  PetEvolution;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakActionAbilityPetType                           PetType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.OnActivated
struct UAbility_AnointParent_Beastmaster_C_OnActivated_Params
{
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointBeastmasterFindLocation
struct UAbility_AnointParent_Beastmaster_C_AnointBeastmasterFindLocation_Params
{
	bool                                               res;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.BindBeastmasterEvents
struct UAbility_AnointParent_Beastmaster_C_BindBeastmasterEvents_Params
{
};

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.ExecuteUbergraph_Ability_AnointParent_Beastmaster
struct UAbility_AnointParent_Beastmaster_C_ExecuteUbergraph_Ability_AnointParent_Beastmaster_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
