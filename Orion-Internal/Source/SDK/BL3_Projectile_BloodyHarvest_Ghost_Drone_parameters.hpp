#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_Ghost_Drone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TryFindNextValidTarget
struct AProjectile_BloodyHarvest_Ghost_Drone_C_TryFindNextValidTarget_Params
{
	class AOakCharacter*                               Source_Player;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter*                               NewTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StartFiring
struct AProjectile_BloodyHarvest_Ghost_Drone_C_StartFiring_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StopFiring
struct AProjectile_BloodyHarvest_Ghost_Drone_C_StopFiring_Params
{
	bool                                               NoReload;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.FireWeapon
struct AProjectile_BloodyHarvest_Ghost_Drone_C_FireWeapon_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.IncrementStats
struct AProjectile_BloodyHarvest_Ghost_Drone_C_IncrementStats_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TrySecondWindBadass
struct AProjectile_BloodyHarvest_Ghost_Drone_C_TrySecondWindBadass_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SpawnLootBadass
struct AProjectile_BloodyHarvest_Ghost_Drone_C_SpawnLootBadass_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SetDroneMovementTypeWithTargets
struct AProjectile_BloodyHarvest_Ghost_Drone_C_SetDroneMovementTypeWithTargets_Params
{
	EOakDroneMovementMode                              NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoSpawnInPresentation
struct AProjectile_BloodyHarvest_Ghost_Drone_C_DoSpawnInPresentation_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoStartSpawnPresentation
struct AProjectile_BloodyHarvest_Ghost_Drone_C_DoStartSpawnPresentation_Params
{
	bool                                               ForceInstantSpawn_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.InitGhostBadass
struct AProjectile_BloodyHarvest_Ghost_Drone_C_InitGhostBadass_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.UserConstructionScript
struct AProjectile_BloodyHarvest_Ghost_Drone_C_UserConstructionScript_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoEndSpawnPresentation
struct AProjectile_BloodyHarvest_Ghost_Drone_C_DoEndSpawnPresentation_Params
{
	bool                                               ForceInstantSpawn_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ReceiveBeginPlay
struct AProjectile_BloodyHarvest_Ghost_Drone_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitDamagableObject
struct AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitWorld
struct AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost
struct AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnExplode
struct AProjectile_BloodyHarvest_Ghost_Drone_C_OnExplode_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Bind
struct AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Bind_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SkullTarget_OnDied
struct AProjectile_BloodyHarvest_Ghost_Drone_C_SkullTarget_OnDied_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Unbind
struct AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Unbind_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginBadassChargeAndDie
struct AProjectile_BloodyHarvest_Ghost_Drone_C_BeginBadassChargeAndDie_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginReloading
struct AProjectile_BloodyHarvest_Ghost_Drone_C_BeginReloading_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon
struct AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.CheckPerceivableByAI
struct AProjectile_BloodyHarvest_Ghost_Drone_C_CheckPerceivableByAI_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ResetShooting
struct AProjectile_BloodyHarvest_Ghost_Drone_C_ResetShooting_Params
{
};

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone
struct AProjectile_BloodyHarvest_Ghost_Drone_C_ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
