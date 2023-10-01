#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_MultiTarget_FireProjectiles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetEndProjectileLocation
struct UAction_Mod_MultiTarget_FireProjectiles_C_GetEndProjectileLocation_Params
{
	int*                                               ProjectileIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FireAllProjectiles
struct UAction_Mod_MultiTarget_FireProjectiles_C_FireAllProjectiles_Params
{
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FireAndAddProjectile
struct UAction_Mod_MultiTarget_FireProjectiles_C_FireAndAddProjectile_Params
{
	struct FMultiTargetProjectileEntry*                ProjectileEntry;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.InitProjectile
struct UAction_Mod_MultiTarget_FireProjectiles_C_InitProjectile_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Projectile_Homing_MultiTarget_Base_C**   Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FinishFiringProjectiles
struct UAction_Mod_MultiTarget_FireProjectiles_C_FinishFiringProjectiles_Params
{
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetFireDirection
struct UAction_Mod_MultiTarget_FireProjectiles_C_GetFireDirection_Params
{
	struct FVector                                     Dir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.OrderTargets
struct UAction_Mod_MultiTarget_FireProjectiles_C_OrderTargets_Params
{
	TArray<class AActor*>                              Targets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              OrderedTargets;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetCurrentTarget
struct UAction_Mod_MultiTarget_FireProjectiles_C_GetCurrentTarget_Params
{
	TArray<class AActor*>                              Targets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.Get Socket Location from owner
struct UAction_Mod_MultiTarget_FireProjectiles_C_Get_Socket_Location_from_owner_Params
{
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.OnActionStart
struct UAction_Mod_MultiTarget_FireProjectiles_C_OnActionStart_Params
{
};

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles
struct UAction_Mod_MultiTarget_FireProjectiles_C_ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
