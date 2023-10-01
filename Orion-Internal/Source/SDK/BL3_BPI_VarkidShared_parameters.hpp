#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_VarkidShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_NonTechDeath
struct UBPI_VarkidShared_C_Varkid_NonTechDeath_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_BreathAttackStop
struct UBPI_VarkidShared_C_Varkid_BreathAttackStop_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_BreathAttackStart
struct UBPI_VarkidShared_C_Varkid_BreathAttackStart_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_GetElement
struct UBPI_VarkidShared_C_Varkid_GetElement_Params
{
	EOakElementalType                                  VarkidElement;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_DestroyRibbon
struct UBPI_VarkidShared_C_Varkid_DestroyRibbon_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_DisableRibbon
struct UBPI_VarkidShared_C_Varkid_DisableRibbon_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_EnableRibbon
struct UBPI_VarkidShared_C_Varkid_EnableRibbon_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_HasNavForEvolve
struct UBPI_VarkidShared_C_Varkid_HasNavForEvolve_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_Burst
struct UBPI_VarkidShared_C_VarkidPod_Burst_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_HideBody
struct UBPI_VarkidShared_C_VarkidPod_HideBody_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_AddPoisonScreenFX
struct UBPI_VarkidShared_C_Varkid_AddPoisonScreenFX_Params
{
	class UScreenParticleManagerComponent*             PlayerScreenFXManager;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_IsFlying
struct UBPI_VarkidShared_C_Varkid_IsFlying_Params
{
	bool                                               IsFlying;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_TargetChanged
struct UBPI_VarkidShared_C_Varkid_TargetChanged_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_SetBurrowed
struct UBPI_VarkidShared_C_Varkid_SetBurrowed_Params
{
	bool                                               IsBurrowed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_GetIsInPod
struct UBPI_VarkidShared_C_Varkid_GetIsInPod_Params
{
	bool                                               IsInPod_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_PodAppears
struct UBPI_VarkidShared_C_VarkidPod_PodAppears_Params
{
};

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_Evolve
struct UBPI_VarkidShared_C_Varkid_Evolve_Params
{
	TEnumAsByte<Enum_VarkidEvolution>                  EvolveTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USpawnOptionData*                            CustomSpawnOption;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxUIName*                                  CustomPodUIName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
