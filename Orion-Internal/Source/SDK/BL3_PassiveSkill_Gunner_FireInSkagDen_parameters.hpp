#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_FireInSkagDen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnActivated
struct UPassiveSkill_Gunner_FireInSkagDen_C_OnActivated_Params
{
};

// Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnEnteredIronBear_FireSkagDen
struct UPassiveSkill_Gunner_FireInSkagDen_C_OnEnteredIronBear_FireSkagDen_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen
struct UPassiveSkill_Gunner_FireInSkagDen_C_ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
