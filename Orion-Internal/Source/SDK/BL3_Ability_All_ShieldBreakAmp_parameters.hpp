#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_ShieldBreakAmp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldDepleted
struct UAbility_All_ShieldBreakAmp_C_ShieldDepleted_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldRefilled
struct UAbility_All_ShieldBreakAmp_C_ShieldRefilled_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShotFired
struct UAbility_All_ShieldBreakAmp_C_ShotFired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnDeactivated
struct UAbility_All_ShieldBreakAmp_C_OnDeactivated_Params
{
};

// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnActivated
struct UAbility_All_ShieldBreakAmp_C_OnActivated_Params
{
};

// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ExecuteUbergraph_Ability_All_ShieldBreakAmp
struct UAbility_All_ShieldBreakAmp_C_ExecuteUbergraph_Ability_All_ShieldBreakAmp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
