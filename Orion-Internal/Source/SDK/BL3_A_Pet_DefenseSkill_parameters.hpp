#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_DefenseSkill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.OnBegin
struct UA_Pet_DefenseSkill_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.Notify_SkillUse
struct UA_Pet_DefenseSkill_C_Notify_SkillUse_Params
{
};

// Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.ExecuteUbergraph_A_Pet_DefenseSkill
struct UA_Pet_DefenseSkill_C_ExecuteUbergraph_A_Pet_DefenseSkill_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
