#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_EnforcerBasic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.UserConstructionScript
struct ABPChar_EnforcerBasic_C_UserConstructionScript_Params
{
};

// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.Enforcer_TransformToGun
struct ABPChar_EnforcerBasic_C_Enforcer_TransformToGun_Params
{
};

// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.CE_AttemptTransformToGun
struct ABPChar_EnforcerBasic_C_CE_AttemptTransformToGun_Params
{
	struct FDamageReactionEventSummary                 DamageSummary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.ExecuteUbergraph_BPChar_EnforcerBasic
struct ABPChar_EnforcerBasic_C_ExecuteUbergraph_BPChar_EnforcerBasic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
