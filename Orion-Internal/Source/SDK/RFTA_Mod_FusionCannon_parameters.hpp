#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FusionCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_FusionCannon.Mod_FusionCannon_C.CheckStopActivation
struct AMod_FusionCannon_C_CheckStopActivation_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.GetDamageForMultipleCharges
struct AMod_FusionCannon_C_GetDamageForMultipleCharges_Params
{
	int*                                               Charges;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.DetermineStoppingPoint
struct AMod_FusionCannon_C_DetermineStoppingPoint_Params
{
	struct FVector*                                    Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutEndBeamLocation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.SweepDamage
struct AMod_FusionCannon_C_SweepDamage_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.DamageActor
struct AMod_FusionCannon_C_DamageActor_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.GetInterpolatedBeamLocation
struct AMod_FusionCannon_C_GetInterpolatedBeamLocation_Params
{
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.GetBeamStartStop
struct AMod_FusionCannon_C_GetBeamStartStop_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Stop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.InterpolateBeamLocation
struct AMod_FusionCannon_C_InterpolateBeamLocation_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.SetBeamLocation
struct AMod_FusionCannon_C_SetBeamLocation_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnEndBeamFX
struct AMod_FusionCannon_C_OnEndBeamFX_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnBeginBeamFX
struct AMod_FusionCannon_C_OnBeginBeamFX_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.UpdateBeamVisibility
struct AMod_FusionCannon_C_UpdateBeamVisibility_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnRep_BeamFiring
struct AMod_FusionCannon_C_OnRep_BeamFiring_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.ModifyInspectInfo
struct AMod_FusionCannon_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.ModifyDamage
struct AMod_FusionCannon_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.WindupForceFeedback__FinishedFunc
struct AMod_FusionCannon_C_WindupForceFeedback__FinishedFunc_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.WindupForceFeedback__UpdateFunc
struct AMod_FusionCannon_C_WindupForceFeedback__UpdateFunc_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.SetBeamFiring_Server
struct AMod_FusionCannon_C_SetBeamFiring_Server_Params
{
	bool*                                              Firing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.SFXStartBeamLoops
struct AMod_FusionCannon_C_SFXStartBeamLoops_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.SFXEndBeamLoops
struct AMod_FusionCannon_C_SFXEndBeamLoops_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.ReceiveTick
struct AMod_FusionCannon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.StopFiringLaser
struct AMod_FusionCannon_C_StopFiringLaser_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.DoDamage
struct AMod_FusionCannon_C_DoDamage_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnFire
struct AMod_FusionCannon_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.ServerApplyDamage
struct AMod_FusionCannon_C_ServerApplyDamage_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnPreFireEnd
struct AMod_FusionCannon_C_OnPreFireEnd_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnActivateMod
struct AMod_FusionCannon_C_OnActivateMod_Params
{
	EModActiveState*                                   ActiveState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnPreFireBegin
struct AMod_FusionCannon_C_OnPreFireBegin_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnDetached
struct AMod_FusionCannon_C_OnDetached_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.OnDeactivate
struct AMod_FusionCannon_C_OnDeactivate_Params
{
};

// Function Mod_FusionCannon.Mod_FusionCannon_C.ExecuteUbergraph_Mod_FusionCannon
struct AMod_FusionCannon_C_ExecuteUbergraph_Mod_FusionCannon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
