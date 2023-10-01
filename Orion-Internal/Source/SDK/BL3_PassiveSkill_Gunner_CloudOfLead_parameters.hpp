#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_CloudOfLead_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnActivated
struct UPassiveSkill_Gunner_CloudOfLead_C_OnActivated_Params
{
};

// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnDeactivated
struct UPassiveSkill_Gunner_CloudOfLead_C_OnDeactivated_Params
{
};

// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnPaused
struct UPassiveSkill_Gunner_CloudOfLead_C_OnPaused_Params
{
};

// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.CustomEvent_1
struct UPassiveSkill_Gunner_CloudOfLead_C_CustomEvent_1_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead
struct UPassiveSkill_Gunner_CloudOfLead_C_ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
