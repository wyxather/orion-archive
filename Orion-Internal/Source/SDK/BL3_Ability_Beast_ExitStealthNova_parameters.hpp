#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_ExitStealthNova_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.AnointTriggerEffect
struct UAbility_Beast_ExitStealthNova_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExitStealth
struct UAbility_Beast_ExitStealthNova_C_ExitStealth_Params
{
};

// Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExecuteUbergraph_Ability_Beast_ExitStealthNova
struct UAbility_Beast_ExitStealthNova_C_ExecuteUbergraph_Ability_Beast_ExitStealthNova_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
