#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TOR_SG_Flakker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.UserConstructionScript
struct AProj_TOR_SG_Flakker_C_UserConstructionScript_Params
{
};

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.ReceiveBeginPlay
struct AProj_TOR_SG_Flakker_C_ReceiveBeginPlay_Params
{
};

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.ReceiveHit
struct AProj_TOR_SG_Flakker_C_ReceiveHit_Params
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

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.OnExplode
struct AProj_TOR_SG_Flakker_C_OnExplode_Params
{
};

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.Stage_01
struct AProj_TOR_SG_Flakker_C_Stage_01_Params
{
};

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.Stage_02
struct AProj_TOR_SG_Flakker_C_Stage_02_Params
{
};

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.Stage_03
struct AProj_TOR_SG_Flakker_C_Stage_03_Params
{
};

// Function Proj_TOR_SG_Flakker.Proj_TOR_SG_Flakker_C.ExecuteUbergraph_Proj_TOR_SG_Flakker
struct AProj_TOR_SG_Flakker_C_ExecuteUbergraph_Proj_TOR_SG_Flakker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
