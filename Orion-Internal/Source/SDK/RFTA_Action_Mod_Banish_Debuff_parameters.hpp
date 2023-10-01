#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Banish_Debuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Banish_Debuff.Action_Mod_Banish_Debuff_C.FilterIncomingDamage
struct UAction_Mod_Banish_Debuff_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
