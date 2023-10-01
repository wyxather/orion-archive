#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Trinket_SoulEmber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.ModifyDamage
struct UAction_AOE_Trinket_SoulEmber_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.GetDamage
struct UAction_AOE_Trinket_SoulEmber_C_GetDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
