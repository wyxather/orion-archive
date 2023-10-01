#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Technical_ExplodingBarrel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.UserConstructionScript
struct AProj_Technical_ExplodingBarrel_C_UserConstructionScript_Params
{
};

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ReceiveBeginPlay
struct AProj_Technical_ExplodingBarrel_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.OnExplode
struct AProj_Technical_ExplodingBarrel_C_OnExplode_Params
{
};

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ReceiveHit
struct AProj_Technical_ExplodingBarrel_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.OnForcedDetonate
struct AProj_Technical_ExplodingBarrel_C_OnForcedDetonate_Params
{
};

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Technical_ExplodingBarrel
struct AProj_Technical_ExplodingBarrel_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Technical_ExplodingBarrel_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ExecuteUbergraph_Proj_Technical_ExplodingBarrel
struct AProj_Technical_ExplodingBarrel_C_ExecuteUbergraph_Proj_Technical_ExplodingBarrel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
