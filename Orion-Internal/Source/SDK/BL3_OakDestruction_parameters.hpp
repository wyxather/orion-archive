#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakDestruction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakDestruction.OakDestructibleFXManager.OnDestructibleDestroyed
struct AOakDestructibleFXManager_OnDestructibleDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakDestruction.OakDestructibleFXManager.DestroyAllDestructibles
struct AOakDestructibleFXManager_DestroyAllDestructibles_Params
{
};

// Function OakDestruction.OakDestructibleFXManager.ClientApplyRadiusDamage
struct AOakDestructibleFXManager_ClientApplyRadiusDamage_Params
{
	uint32_t                                           SyncID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HurtOrigin;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFullDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakDestruction.OakDestructibleFXManager.ClientApplyDamage
struct AOakDestructibleFXManager_ClientApplyDamage_Params
{
	uint32_t                                           SyncID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
