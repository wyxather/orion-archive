#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Sidewinder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Sidewinder.Proj_Sidewinder_C.UserConstructionScript
struct AProj_Sidewinder_C_UserConstructionScript_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.InitializeElement
struct AProj_Sidewinder_C_InitializeElement_Params
{
	EOakElementalType                                  ElementType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetFuseTimer
struct AProj_Sidewinder_C_TinkSuicideBomb_SetFuseTimer_Params
{
	float                                              NewFuseTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetCurrentHealth
struct AProj_Sidewinder_C_TinkSuicideBomb_SetCurrentHealth_Params
{
	float                                              NewCurrentHealth;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_StartSuicide
struct AProj_Sidewinder_C_TinkSuicideBomb_StartSuicide_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Prime
struct AProj_Sidewinder_C_HNT_Prime_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Drop
struct AProj_Sidewinder_C_HNT_Drop_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Throw
struct AProj_Sidewinder_C_HNT_Throw_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.OnExplode
struct AProj_Sidewinder_C_OnExplode_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveBeginPlay
struct AProj_Sidewinder_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.FuseTimerExpired
struct AProj_Sidewinder_C_FuseTimerExpired_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveActorBeginOverlap
struct AProj_Sidewinder_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.FindHomingTarget
struct AProj_Sidewinder_C_FindHomingTarget_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.DeploySticky
struct AProj_Sidewinder_C_DeploySticky_Params
{
};

// Function Proj_Sidewinder.Proj_Sidewinder_C.ExecuteUbergraph_Proj_Sidewinder
struct AProj_Sidewinder_C_ExecuteUbergraph_Proj_Sidewinder_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
