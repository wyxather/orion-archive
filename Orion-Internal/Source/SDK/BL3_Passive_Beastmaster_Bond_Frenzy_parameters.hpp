#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond_Frenzy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.GetManualHUDIconValues
struct UPassive_Beastmaster_Bond_Frenzy_C_GetManualHUDIconValues_Params
{
	int                                                outStackCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outTimeRemaining;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnActivated
struct UPassive_Beastmaster_Bond_Frenzy_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.PetCausedAnyDamage_BondFrenzy
struct UPassive_Beastmaster_Bond_Frenzy_C_PetCausedAnyDamage_BondFrenzy_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnAbilityTimerEnded
struct UPassive_Beastmaster_Bond_Frenzy_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy
struct UPassive_Beastmaster_Bond_Frenzy_C_ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
