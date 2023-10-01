#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_EnforcerShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_GetType
struct ABPChar_EnforcerShared_C_Enforcer_GetType_Params
{
	TEnumAsByte<Enum_EnforcerVariants>                 EnforcerType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.UserConstructionScript
struct ABPChar_EnforcerShared_C_UserConstructionScript_Params
{
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_Anointed_Death
struct ABPChar_EnforcerShared_C_Enforcer_Anointed_Death_Params
{
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_TransformToGun
struct ABPChar_EnforcerShared_C_Enforcer_TransformToGun_Params
{
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AnointedJoe_SpawnAI
struct ABPChar_EnforcerShared_C_Enforcer_AnointedJoe_SpawnAI_Params
{
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AnointedJoe_ShieldDown
struct ABPChar_EnforcerShared_C_Enforcer_AnointedJoe_ShieldDown_Params
{
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AllowButtStagger
struct ABPChar_EnforcerShared_C_Enforcer_AllowButtStagger_Params
{
	bool                                               AllowButtStagger;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_ForcedDirectionalStagger
struct ABPChar_EnforcerShared_C_Enforcer_ForcedDirectionalStagger_Params
{
	struct FDamageReactionEventSummary                 DamageSummary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_ShieldStagger
struct ABPChar_EnforcerShared_C_CE_ShieldStagger_Params
{
	struct FDamageReactionEventSummary                 Damage_Summary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_ExtremityStagger
struct ABPChar_EnforcerShared_C_CE_ExtremityStagger_Params
{
	struct FDamageReactionEventSummary                 Damage_Summary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_GrenadeStagger
struct ABPChar_EnforcerShared_C_CE_GrenadeStagger_Params
{
	struct FDamageReactionEventSummary                 Damage_Summary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_EnforcerBasic
struct ABPChar_EnforcerShared_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_EnforcerBasic_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_GoreHeadHideBeard
struct ABPChar_EnforcerShared_C_CE_GoreHeadHideBeard_Params
{
	struct FGoreRegionEventSummary                     GoreSummary;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.ExecuteUbergraph_BPChar_EnforcerShared
struct ABPChar_EnforcerShared_C_ExecuteUbergraph_BPChar_EnforcerShared_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
