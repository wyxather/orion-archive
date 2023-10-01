#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_NonPlayerCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.UserConstructionScript
struct ABPCont_NonPlayerCharacter_C_UserConstructionScript_Params
{
};

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.ReceiveTick
struct ABPCont_NonPlayerCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetHealthCheck
struct ABPCont_NonPlayerCharacter_C_TargetHealthCheck_Params
{
};

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetTakesDamage
struct ABPCont_NonPlayerCharacter_C_TargetTakesDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetDies
struct ABPCont_NonPlayerCharacter_C_TargetDies_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_6_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_NonPlayerCharacter
struct ABPCont_NonPlayerCharacter_C_BndEvt__Targeting_K2Node_ComponentBoundEvent_6_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_NonPlayerCharacter_Params
{
	class UTargetingComponent*                         TargetingComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.ExecuteUbergraph_BPCont_NonPlayerCharacter
struct ABPCont_NonPlayerCharacter_C_ExecuteUbergraph_BPCont_NonPlayerCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
