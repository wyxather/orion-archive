#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_VeilOfTheBlackTear_Shield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.Get Scale
struct ABP_VeilOfTheBlackTear_Shield_C_Get_Scale_Params
{
	float*                                             A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.UserConstructionScript
struct ABP_VeilOfTheBlackTear_Shield_C_UserConstructionScript_Params
{
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyAllWorldReset
struct ABP_VeilOfTheBlackTear_Shield_C_OnNotifyAllWorldReset_Params
{
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.FX_Impact
struct ABP_VeilOfTheBlackTear_Shield_C_FX_Impact_Params
{
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.DestroyFX
struct ABP_VeilOfTheBlackTear_Shield_C_DestroyFX_Params
{
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ReceiveDestroyed
struct ABP_VeilOfTheBlackTear_Shield_C_ReceiveDestroyed_Params
{
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ReceiveBeginPlay
struct ABP_VeilOfTheBlackTear_Shield_C_ReceiveBeginPlay_Params
{
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyTakeDamage
struct ABP_VeilOfTheBlackTear_Shield_C_OnNotifyTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyDead
struct ABP_VeilOfTheBlackTear_Shield_C_OnNotifyDead_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnWorldReset
struct ABP_VeilOfTheBlackTear_Shield_C_OnWorldReset_Params
{
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_VeilOfTheBlackTear_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ExecuteUbergraph_BP_VeilOfTheBlackTear_Shield
struct ABP_VeilOfTheBlackTear_Shield_C_ExecuteUbergraph_BP_VeilOfTheBlackTear_Shield_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
