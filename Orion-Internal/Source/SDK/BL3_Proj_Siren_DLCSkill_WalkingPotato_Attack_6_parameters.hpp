#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Siren_DLCSkill_WalkingPotato_Attack_6_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.UserConstructionScript
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_UserConstructionScript_Params
{
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ReceiveBeginPlay
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedAnyDamage
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.OnOrbStateSending
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_OnOrbStateSending_Params
{
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows_Params
{
	class UDamageComponent**                           DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType**                             DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource**                              DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent**                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails*                     Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedDeath
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
