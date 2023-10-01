#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkChromatic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.InitializeDamageCounters
struct ABPChar_RakkChromatic_C_InitializeDamageCounters_Params
{
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticChangeToElement
struct ABPChar_RakkChromatic_C_ChromaticChangeToElement_Params
{
	EOakElementalType                                  ElementalType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.UpdateDamageCounters
struct ABPChar_RakkChromatic_C_UpdateDamageCounters_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageOfType;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EOakElementalType                                  ElementalType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.UserConstructionScript
struct ABPChar_RakkChromatic_C_UserConstructionScript_Params
{
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.TryChromaticSwitch
struct ABPChar_RakkChromatic_C_TryChromaticSwitch_Params
{
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkChromatic
struct ABPChar_RakkChromatic_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkChromatic_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticSwitchWarmup
struct ABPChar_RakkChromatic_C_ChromaticSwitchWarmup_Params
{
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticSwitchCooldown
struct ABPChar_RakkChromatic_C_ChromaticSwitchCooldown_Params
{
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ReceiveBeginPlay
struct ABPChar_RakkChromatic_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ImbueWithElement
struct ABPChar_RakkChromatic_C_ImbueWithElement_Params
{
	EOakElementalType*                                 ElementalType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkChromatic
struct ABPChar_RakkChromatic_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkChromatic_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ExecuteUbergraph_BPChar_RakkChromatic
struct ABPChar_RakkChromatic_C_ExecuteUbergraph_BPChar_RakkChromatic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
