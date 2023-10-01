#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_GetVariant
struct ABPChar_SkagShared_C_Skag_GetVariant_Params
{
	TEnumAsByte<Enum_SkagVariants>                     SkagVariantType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_GetElement
struct ABPChar_SkagShared_C_Skag_GetElement_Params
{
	EOakElementalType                                  SkagElement;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetUIName
struct ABPChar_SkagShared_C_Skag_SetUIName_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.UserConstructionScript
struct ABPChar_SkagShared_C_UserConstructionScript_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_StolenProjFinished
struct ABPChar_SkagShared_C_Skag_StolenProjFinished_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Howl_Start
struct ABPChar_SkagShared_C_Skag_Howl_Start_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetBadassBombProjectile
struct ABPChar_SkagShared_C_Skag_SetBadassBombProjectile_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Howl_Stop
struct ABPChar_SkagShared_C_Skag_Howl_Stop_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_How_Interrupted
struct ABPChar_SkagShared_C_Skag_How_Interrupted_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetBellyActorSpawnOption
struct ABPChar_SkagShared_C_Skag_SetBellyActorSpawnOption_Params
{
	class USpawnOptionData*                            NewBellyActorSpawnOption;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.CE_SkagConfigElementalResist
struct ABPChar_SkagShared_C_CE_SkagConfigElementalResist_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Transform
struct ABPChar_SkagShared_C_Skag_Transform_Params
{
	EOakElementalType                                  Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForcedTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_VomitStart
struct ABPChar_SkagShared_C_Skag_VomitStart_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_VomitStop
struct ABPChar_SkagShared_C_Skag_VomitStop_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.ReceiveBeginPlay
struct ABPChar_SkagShared_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetDefaultProjectile
struct ABPChar_SkagShared_C_Skag_SetDefaultProjectile_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_ElementalDeath
struct ABPChar_SkagShared_C_Skag_ElementalDeath_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagShared
struct ABPChar_SkagShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagShared_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Wwise_Aura_Loop_START
struct ABPChar_SkagShared_C_Wwise_Aura_Loop_START_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.Wwise_Aura_Lp_STOP
struct ABPChar_SkagShared_C_Wwise_Aura_Lp_STOP_Params
{
};

// Function BPChar_SkagShared.BPChar_SkagShared_C.ExecuteUbergraph_BPChar_SkagShared
struct ABPChar_SkagShared_C_ExecuteUbergraph_BPChar_SkagShared_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
