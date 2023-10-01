#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_LootGhost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.IncrementStats
struct AProjectile_BloodyHarvest_LootGhost_C_IncrementStats_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.UserConstructionScript
struct AProjectile_BloodyHarvest_LootGhost_C_UserConstructionScript_Params
{
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ReceiveBeginPlay
struct AProjectile_BloodyHarvest_LootGhost_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.DoEndSpawnPresentation
struct AProjectile_BloodyHarvest_LootGhost_C_DoEndSpawnPresentation_Params
{
	bool*                                              ForceInstantSpawn_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.SpawnLootBadass
struct AProjectile_BloodyHarvest_LootGhost_C_SpawnLootBadass_Params
{
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BeginFleeing
struct AProjectile_BloodyHarvest_LootGhost_C_BeginFleeing_Params
{
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost
struct AProjectile_BloodyHarvest_LootGhost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.OnExplode
struct AProjectile_BloodyHarvest_LootGhost_C_OnExplode_Params
{
};

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost
struct AProjectile_BloodyHarvest_LootGhost_C_ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
