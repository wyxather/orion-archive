#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagChubby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_SkagChubby.BPChar_SkagChubby_C.UserConstructionScript
struct ABPChar_SkagChubby_C_UserConstructionScript_Params
{
};

// Function BPChar_SkagChubby.BPChar_SkagChubby_C.DE_LowHealth
struct ABPChar_SkagChubby_C_DE_LowHealth_Params
{
	struct FDamageReactionEventSummary                 DamageSummary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_SkagChubby.BPChar_SkagChubby_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagChubby
struct ABPChar_SkagChubby_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagChubby_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_SkagChubby.BPChar_SkagChubby_C.ExecuteUbergraph_BPChar_SkagChubby
struct ABPChar_SkagChubby_C_ExecuteUbergraph_BPChar_SkagChubby_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
