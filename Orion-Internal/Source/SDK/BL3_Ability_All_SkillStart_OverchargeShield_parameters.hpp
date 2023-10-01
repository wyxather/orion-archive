#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillStart_OverchargeShield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.AnointOnActionSkillActivated
struct UAbility_All_SkillStart_OverchargeShield_C_AnointOnActionSkillActivated_Params
{
	class UOakActionAbility**                          ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.SkillStarted
struct UAbility_All_SkillStart_OverchargeShield_C_SkillStarted_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.DrainShield
struct UAbility_All_SkillStart_OverchargeShield_C_DrainShield_Params
{
};

// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ResetShield
struct UAbility_All_SkillStart_OverchargeShield_C_ResetShield_Params
{
};

// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield
struct UAbility_All_SkillStart_OverchargeShield_C_ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
