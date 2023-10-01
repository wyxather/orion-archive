#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_ColdBore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.GetManualHUDIconValues
struct UPassiveSkill_Operative_ColdBore_C_GetManualHUDIconValues_Params
{
	int                                                outStackCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outTimeRemaining;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnActivated
struct UPassiveSkill_Operative_ColdBore_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnWeaponUsed
struct UPassiveSkill_Operative_ColdBore_C_OnWeaponUsed_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ColdBore_OnWeaponChanged
struct UPassiveSkill_Operative_ColdBore_C_ColdBore_OnWeaponChanged_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     LastWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ExecuteUbergraph_PassiveSkill_Operative_ColdBore
struct UPassiveSkill_Operative_ColdBore_C_ExecuteUbergraph_PassiveSkill_Operative_ColdBore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
