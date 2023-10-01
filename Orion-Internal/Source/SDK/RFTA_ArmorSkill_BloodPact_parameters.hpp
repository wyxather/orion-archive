#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_BloodPact_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.IncrementModPower
struct UArmorSkill_BloodPact_C_IncrementModPower_Params
{
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetTierDescription
struct UArmorSkill_BloodPact_C_GetTierDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetDescription
struct UArmorSkill_BloodPact_C_GetDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetModDurationMod
struct UArmorSkill_BloodPact_C_GetModDurationMod_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.Trigger
struct UArmorSkill_BloodPact_C_Trigger_Params
{
	struct FDamageInfo*                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnActionStart
struct UArmorSkill_BloodPact_C_OnActionStart_Params
{
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnActionStop
struct UArmorSkill_BloodPact_C_OnActionStop_Params
{
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnComputeStats
struct UArmorSkill_BloodPact_C_OnComputeStats_Params
{
};

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.ExecuteUbergraph_ArmorSkill_BloodPact
struct UArmorSkill_BloodPact_C_ExecuteUbergraph_ArmorSkill_BloodPact_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
