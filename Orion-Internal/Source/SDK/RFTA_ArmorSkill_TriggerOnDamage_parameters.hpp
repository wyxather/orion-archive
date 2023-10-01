#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TriggerOnDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.Trigger
struct UArmorSkill_TriggerOnDamage_C_Trigger_Params
{
	struct FDamageInfo*                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.OnHitTarget
struct UArmorSkill_TriggerOnDamage_C_OnHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.ExecuteUbergraph_ArmorSkill_TriggerOnDamage
struct UArmorSkill_TriggerOnDamage_C_ExecuteUbergraph_ArmorSkill_TriggerOnDamage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
