#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Enforcer_BountyPrologue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.UserConstructionScript
struct ABPChar_Enforcer_BountyPrologue_C_UserConstructionScript_Params
{
};

// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.CE_HitRegionButt
struct ABPChar_Enforcer_BountyPrologue_C_CE_HitRegionButt_Params
{
	struct FDamageReactionEventSummary                 DamageSummary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.Enforcer_AllowButtStagger
struct ABPChar_Enforcer_BountyPrologue_C_Enforcer_AllowButtStagger_Params
{
	bool*                                              AllowButtStagger;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.ExecuteUbergraph_BPChar_Enforcer_BountyPrologue
struct ABPChar_Enforcer_BountyPrologue_C_ExecuteUbergraph_BPChar_Enforcer_BountyPrologue_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.Event_WasButtholed__DelegateSignature
struct ABPChar_Enforcer_BountyPrologue_C_Event_WasButtholed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
