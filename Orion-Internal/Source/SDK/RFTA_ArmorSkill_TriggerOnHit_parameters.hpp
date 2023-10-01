#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TriggerOnHit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.Trigger
struct UArmorSkill_TriggerOnHit_C_Trigger_Params
{
	int*                                               Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.OnTakeDamage
struct UArmorSkill_TriggerOnHit_C_OnTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.ExecuteUbergraph_ArmorSkill_TriggerOnHit
struct UArmorSkill_TriggerOnHit_C_ExecuteUbergraph_ArmorSkill_TriggerOnHit_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
