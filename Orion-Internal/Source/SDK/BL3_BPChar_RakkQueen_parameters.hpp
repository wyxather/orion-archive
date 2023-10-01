#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkQueen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_RakkQueen.BPChar_RakkQueen_C.DropCash
struct ABPChar_RakkQueen_C_DropCash_Params
{
	bool                                               Lots;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_RakkQueen.BPChar_RakkQueen_C.UserConstructionScript
struct ABPChar_RakkQueen_C_UserConstructionScript_Params
{
};

// Function BPChar_RakkQueen.BPChar_RakkQueen_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkBloated
struct ABPChar_RakkQueen_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkBloated_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_RakkQueen.BPChar_RakkQueen_C.ResetCashDrop
struct ABPChar_RakkQueen_C_ResetCashDrop_Params
{
};

// Function BPChar_RakkQueen.BPChar_RakkQueen_C.ReceiveBeginPlay
struct ABPChar_RakkQueen_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_RakkQueen.BPChar_RakkQueen_C.ExecuteUbergraph_BPChar_RakkQueen
struct ABPChar_RakkQueen_C_ExecuteUbergraph_BPChar_RakkQueen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
