#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Intro_NoDieNoFallAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Quest_Intro_NoDieNoFallAction.Quest_Intro_NoDieNoFallAction_C.FilterIncomingDamage
struct UQuest_Intro_NoDieNoFallAction_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
