#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Beam_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ModifyBeamStartEnd
struct ABP_Beam_Projectile_C_ModifyBeamStartEnd_Params
{
	struct FVector*                                    Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.GetBeamStartEnd
struct ABP_Beam_Projectile_C_GetBeamStartEnd_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.InitValues
struct ABP_Beam_Projectile_C_InitValues_Params
{
	struct FName*                                      BeamSourceSocket;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             SphereTraceRadius;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.StopBeam
struct ABP_Beam_Projectile_C_StopBeam_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.TickBeam
struct ABP_Beam_Projectile_C_TickBeam_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.UpdateFX
struct ABP_Beam_Projectile_C_UpdateFX_Params
{
	struct FVector*                                    StartTrace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    EndTrace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.UpdateBeam
struct ABP_Beam_Projectile_C_UpdateBeam_Params
{
	struct FVector*                                    StartTrace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    EndTrace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.Get Owning Character
struct ABP_Beam_Projectile_C_Get_Owning_Character_Params
{
	class ACharacterGunfire*                           AsCharacter_Gunfire;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ActivateAllFX
struct ABP_Beam_Projectile_C_ActivateAllFX_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.DeactivateAllFX
struct ABP_Beam_Projectile_C_DeactivateAllFX_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ActivateImpactFX
struct ABP_Beam_Projectile_C_ActivateImpactFX_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.DeactivateImpactFX
struct ABP_Beam_Projectile_C_DeactivateImpactFX_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ReceiveBeginPlay
struct ABP_Beam_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ReceiveTick
struct ABP_Beam_Projectile_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.OnDestroy
struct ABP_Beam_Projectile_C_OnDestroy_Params
{
};

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ExecuteUbergraph_BP_Beam_Projectile
struct ABP_Beam_Projectile_C_ExecuteUbergraph_BP_Beam_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
