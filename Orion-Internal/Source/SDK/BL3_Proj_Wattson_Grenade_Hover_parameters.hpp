#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Wattson_Grenade_Hover_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.UserConstructionScript
struct AProj_Wattson_Grenade_Hover_C_UserConstructionScript_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__FinishedFunc
struct AProj_Wattson_Grenade_Hover_C_TL_Hover__FinishedFunc_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__UpdateFunc
struct AProj_Wattson_Grenade_Hover_C_TL_Hover__UpdateFunc_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E
struct AProj_Wattson_Grenade_Hover_C_GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E
struct AProj_Wattson_Grenade_Hover_C_GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Prime
struct AProj_Wattson_Grenade_Hover_C_HNT_Prime_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Drop
struct AProj_Wattson_Grenade_Hover_C_HNT_Drop_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Throw
struct AProj_Wattson_Grenade_Hover_C_HNT_Throw_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.OnExplode
struct AProj_Wattson_Grenade_Hover_C_OnExplode_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveHit
struct AProj_Wattson_Grenade_Hover_C_ReceiveHit_Params
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

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveBeginPlay
struct AProj_Wattson_Grenade_Hover_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ExecuteUbergraph_Proj_Wattson_Grenade_Hover
struct AProj_Wattson_Grenade_Hover_C_ExecuteUbergraph_Proj_Wattson_Grenade_Hover_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
