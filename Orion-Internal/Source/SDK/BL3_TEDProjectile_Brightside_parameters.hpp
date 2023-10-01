#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Brightside_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.UserConstructionScript
struct ATEDProjectile_Brightside_C_UserConstructionScript_Params
{
};

// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ReceiveBeginPlay
struct ATEDProjectile_Brightside_C_ReceiveBeginPlay_Params
{
};

// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.OnBeginExplode
struct ATEDProjectile_Brightside_C_OnBeginExplode_Params
{
};

// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ReceiveHit
struct ATEDProjectile_Brightside_C_ReceiveHit_Params
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

// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ExecuteUbergraph_TEDProjectile_Brightside
struct ATEDProjectile_Brightside_C_ExecuteUbergraph_TEDProjectile_Brightside_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
