#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Sharpshooter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C.ModifyDamage
struct UArmorSkill_Sharpshooter_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C.GetRangedDamageScalar
struct UArmorSkill_Sharpshooter_C_GetRangedDamageScalar_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C.GetTierDescription
struct UArmorSkill_Sharpshooter_C_GetTierDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C.GetDescription
struct UArmorSkill_Sharpshooter_C_GetDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C.GetWeakspotDamageMod
struct UArmorSkill_Sharpshooter_C_GetWeakspotDamageMod_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C.OnComputeStats
struct UArmorSkill_Sharpshooter_C_OnComputeStats_Params
{
};

// Function ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C.ExecuteUbergraph_ArmorSkill_Sharpshooter
struct UArmorSkill_Sharpshooter_C_ExecuteUbergraph_ArmorSkill_Sharpshooter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
