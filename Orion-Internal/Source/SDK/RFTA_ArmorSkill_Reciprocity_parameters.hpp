#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Reciprocity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.AllowAction
struct UArmorSkill_Reciprocity_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnTimerExpired
struct UArmorSkill_Reciprocity_C_OnTimerExpired_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ResetTimer
struct UArmorSkill_Reciprocity_C_ResetTimer_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDamageReductionMod
struct UArmorSkill_Reciprocity_C_GetDamageReductionMod_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.RemoveLevel
struct UArmorSkill_Reciprocity_C_RemoveLevel_Params
{
	class UClass**                                     Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetTierDescription
struct UArmorSkill_Reciprocity_C_GetTierDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDescription
struct UArmorSkill_Reciprocity_C_GetDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDamageScalar
struct UArmorSkill_Reciprocity_C_GetDamageScalar_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangedDamageScalar;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeleeDamageScalar;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModDamageScalar;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SummonedCreatureDamageScalar;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.Trigger
struct UArmorSkill_Reciprocity_C_Trigger_Params
{
	int*                                               Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnLevelChanged
struct UArmorSkill_Reciprocity_C_OnLevelChanged_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnActionStop
struct UArmorSkill_Reciprocity_C_OnActionStop_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnActionStart
struct UArmorSkill_Reciprocity_C_OnActionStart_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnComputeStats
struct UArmorSkill_Reciprocity_C_OnComputeStats_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnTierChanged
struct UArmorSkill_Reciprocity_C_OnTierChanged_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ReleaseLevel
struct UArmorSkill_Reciprocity_C_ReleaseLevel_Params
{
};

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ExecuteUbergraph_ArmorSkill_Reciprocity
struct UArmorSkill_Reciprocity_C_ExecuteUbergraph_ArmorSkill_Reciprocity_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
