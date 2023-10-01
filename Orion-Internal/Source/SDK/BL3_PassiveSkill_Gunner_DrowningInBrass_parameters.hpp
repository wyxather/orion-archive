#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_DrowningInBrass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.OnActivated
struct UPassiveSkill_Gunner_DrowningInBrass_C_OnActivated_Params
{
};

// Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.CausedDeath_DrowningInBrass
struct UPassiveSkill_Gunner_DrowningInBrass_C_CausedDeath_DrowningInBrass_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass
struct UPassiveSkill_Gunner_DrowningInBrass_C_ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
