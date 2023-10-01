#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Intro_NoDieAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.FilterIncomingDamage
struct UQuest_Intro_NoDieAction_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.OnComputeStats
struct UQuest_Intro_NoDieAction_C_OnComputeStats_Params
{
};

// Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.ExecuteUbergraph_Quest_Intro_NoDieAction
struct UQuest_Intro_NoDieAction_C_ExecuteUbergraph_Quest_Intro_NoDieAction_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
