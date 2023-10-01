#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_HOTSpring_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_HOTSpring.Proj_HOTSpring_C.UserConstructionScript
struct AProj_HOTSpring_C_UserConstructionScript_Params
{
};

// Function Proj_HOTSpring.Proj_HOTSpring_C.ReceiveDestroyed
struct AProj_HOTSpring_C_ReceiveDestroyed_Params
{
};

// Function Proj_HOTSpring.Proj_HOTSpring_C.ReceiveBeginPlay
struct AProj_HOTSpring_C_ReceiveBeginPlay_Params
{
};

// Function Proj_HOTSpring.Proj_HOTSpring_C.OnExplode
struct AProj_HOTSpring_C_OnExplode_Params
{
};

// Function Proj_HOTSpring.Proj_HOTSpring_C.CustomEvent
struct AProj_HOTSpring_C_CustomEvent_Params
{
};

// Function Proj_HOTSpring.Proj_HOTSpring_C.ReceiveHit
struct AProj_HOTSpring_C_ReceiveHit_Params
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

// Function Proj_HOTSpring.Proj_HOTSpring_C.OnHitWorld
struct AProj_HOTSpring_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_HOTSpring.Proj_HOTSpring_C.ExecuteUbergraph_Proj_HOTSpring
struct AProj_HOTSpring_C_ExecuteUbergraph_Proj_HOTSpring_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
