#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_PetLoader_ShockOrb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnRep_OrbState
struct AProj_PetLoader_ShockOrb_C_OnRep_OrbState_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.UserConstructionScript
struct AProj_PetLoader_ShockOrb_C_UserConstructionScript_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Spawning
struct AProj_PetLoader_ShockOrb_C_Orb_Spawning_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Idle
struct AProj_PetLoader_ShockOrb_C_Orb_Idle_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Explode
struct AProj_PetLoader_ShockOrb_C_Orb_Explode_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb
struct AProj_PetLoader_ShockOrb_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_LargeExplode
struct AProj_PetLoader_ShockOrb_C_Orb_LargeExplode_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnExplode
struct AProj_PetLoader_ShockOrb_C_OnExplode_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ReceiveBeginPlay
struct AProj_PetLoader_ShockOrb_C_ReceiveBeginPlay_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ShockOrb_OnTargetDied
struct AProj_PetLoader_ShockOrb_C_ShockOrb_OnTargetDied_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.SetAllowShotTrigger
struct AProj_PetLoader_ShockOrb_C_SetAllowShotTrigger_Params
{
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb
struct AProj_PetLoader_ShockOrb_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ExecuteUbergraph_Proj_PetLoader_ShockOrb
struct AProj_PetLoader_ShockOrb_C_ExecuteUbergraph_Proj_PetLoader_ShockOrb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
