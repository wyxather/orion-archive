#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Regrowth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetValue
struct UArmorSkill_Regrowth_C_GetValue_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetDamageScalar
struct UArmorSkill_Regrowth_C_GetDamageScalar_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangedDamageScalar;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeleeDamageScalar;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModDamageScalar;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SummonedCreatureDamageScalar;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetDescription
struct UArmorSkill_Regrowth_C_GetDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetHealthRegenDisplay
struct UArmorSkill_Regrowth_C_GetHealthRegenDisplay_Params
{
	float*                                             InRegen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Regen;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetTierDescription
struct UArmorSkill_Regrowth_C_GetTierDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnComputeStats
struct UArmorSkill_Regrowth_C_OnComputeStats_Params
{
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnActionStart
struct UArmorSkill_Regrowth_C_OnActionStart_Params
{
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.AddStack
struct UArmorSkill_Regrowth_C_AddStack_Params
{
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnActionStop
struct UArmorSkill_Regrowth_C_OnActionStop_Params
{
};

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.ExecuteUbergraph_ArmorSkill_Regrowth
struct UArmorSkill_Regrowth_C_ExecuteUbergraph_ArmorSkill_Regrowth_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
