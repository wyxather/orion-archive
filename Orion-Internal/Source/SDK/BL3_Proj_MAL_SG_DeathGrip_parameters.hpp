#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_MAL_SG_DeathGrip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.UserConstructionScript
struct AProj_MAL_SG_DeathGrip_C_UserConstructionScript_Params
{
};

// Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.ReceiveBeginPlay
struct AProj_MAL_SG_DeathGrip_C_ReceiveBeginPlay_Params
{
};

// Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.ReceiveHit
struct AProj_MAL_SG_DeathGrip_C_ReceiveHit_Params
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

// Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.OnExplode
struct AProj_MAL_SG_DeathGrip_C_OnExplode_Params
{
};

// Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.OnHitWorld
struct AProj_MAL_SG_DeathGrip_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.ExecuteUbergraph_Proj_MAL_SG_DeathGrip
struct AProj_MAL_SG_DeathGrip_C_ExecuteUbergraph_Proj_MAL_SG_DeathGrip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
