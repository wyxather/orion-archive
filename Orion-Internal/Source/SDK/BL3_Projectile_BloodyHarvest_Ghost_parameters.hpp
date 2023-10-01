#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_Ghost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TryFindNextValidTarget
struct AProjectile_BloodyHarvest_Ghost_C_TryFindNextValidTarget_Params
{
	class AOakCharacter*                               SourcePlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter*                               NewTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CauseDamageGhost
struct AProjectile_BloodyHarvest_Ghost_C_CauseDamageGhost_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TrySecondWind
struct AProjectile_BloodyHarvest_Ghost_C_TrySecondWind_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SpawnLoot
struct AProjectile_BloodyHarvest_Ghost_C_SpawnLoot_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoStartSpawnPresentation
struct AProjectile_BloodyHarvest_Ghost_C_DoStartSpawnPresentation_Params
{
	bool                                               ForceInstantSpawn_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.InitGhost
struct AProjectile_BloodyHarvest_Ghost_C_InitGhost_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoSpawnInPresentation
struct AProjectile_BloodyHarvest_Ghost_C_DoSpawnInPresentation_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.UserConstructionScript
struct AProjectile_BloodyHarvest_Ghost_C_UserConstructionScript_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ReceiveBeginPlay
struct AProjectile_BloodyHarvest_Ghost_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SetPlayerTargets
struct AProjectile_BloodyHarvest_Ghost_C_SetPlayerTargets_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnExplode
struct AProjectile_BloodyHarvest_Ghost_C_OnExplode_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitDamagableObject
struct AProjectile_BloodyHarvest_Ghost_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitWorld
struct AProjectile_BloodyHarvest_Ghost_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost
struct AProjectile_BloodyHarvest_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoEndSpawnPresentation
struct AProjectile_BloodyHarvest_Ghost_C_DoEndSpawnPresentation_Params
{
	bool                                               ForceInstantSpawn_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon
struct AProjectile_BloodyHarvest_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CheckPerceivableByAI
struct AProjectile_BloodyHarvest_Ghost_C_CheckPerceivableByAI_Params
{
};

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost
struct AProjectile_BloodyHarvest_Ghost_C_ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
