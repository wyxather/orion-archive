#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Harden_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetTierDescriptionLevel
struct UArmorSkill_Harden_C_GetTierDescriptionLevel_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetMoveSpeedMod
struct UArmorSkill_Harden_C_GetMoveSpeedMod_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetBrokenMovementSpeedMod
struct UArmorSkill_Harden_C_GetBrokenMovementSpeedMod_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.FilterIncomingDamage
struct UArmorSkill_Harden_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.ResetFresnel
struct UArmorSkill_Harden_C_ResetFresnel_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.SetFresnelTime
struct UArmorSkill_Harden_C_SetFresnelTime_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.SetMaterialValues
struct UArmorSkill_Harden_C_SetMaterialValues_Params
{
	float*                                             NewStackLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetNumStacks
struct UArmorSkill_Harden_C_GetNumStacks_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnTimerExpired
struct UArmorSkill_Harden_C_OnTimerExpired_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.ResetTimer
struct UArmorSkill_Harden_C_ResetTimer_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetTierDescription
struct UArmorSkill_Harden_C_GetTierDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetDescription
struct UArmorSkill_Harden_C_GetDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetDamageReductionMod
struct UArmorSkill_Harden_C_GetDamageReductionMod_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnActionStop
struct UArmorSkill_Harden_C_OnActionStop_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnActionStart
struct UArmorSkill_Harden_C_OnActionStart_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnTick
struct UArmorSkill_Harden_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnLevelChanged
struct UArmorSkill_Harden_C_OnLevelChanged_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.CustomOnLevelChanged
struct UArmorSkill_Harden_C_CustomOnLevelChanged_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnComputeStats
struct UArmorSkill_Harden_C_OnComputeStats_Params
{
};

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.ExecuteUbergraph_ArmorSkill_Harden
struct UArmorSkill_Harden_C_ExecuteUbergraph_ArmorSkill_Harden_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
