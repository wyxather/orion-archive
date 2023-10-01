#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_MAL_KybsWorth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.UserConstructionScript
struct AProj_Weapon_MAL_KybsWorth_C_UserConstructionScript_Params
{
};

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveBeginPlay
struct AProj_Weapon_MAL_KybsWorth_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.OnHitWorld
struct AProj_Weapon_MAL_KybsWorth_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveHit
struct AProj_Weapon_MAL_KybsWorth_C_ReceiveHit_Params
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

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.WeaponProjectileExplode
struct AProj_Weapon_MAL_KybsWorth_C_WeaponProjectileExplode_Params
{
};

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.OnExplode
struct AProj_Weapon_MAL_KybsWorth_C_OnExplode_Params
{
};

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveDestroyed
struct AProj_Weapon_MAL_KybsWorth_C_ReceiveDestroyed_Params
{
};

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ExecuteUbergraph_Proj_Weapon_MAL_KybsWorth
struct AProj_Weapon_MAL_KybsWorth_C_ExecuteUbergraph_Proj_Weapon_MAL_KybsWorth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
