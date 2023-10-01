#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_Combat_Barrel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled
struct UBPI_IO_Combat_Barrel_C_BPI_SetNavPainterEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ResetHealth
struct UBPI_IO_Combat_Barrel_C_BPI_ResetHealth_Params
{
};

// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow
struct UBPI_IO_Combat_Barrel_C_BPI_ImpulseThrow_Params
{
	struct FVector                                     ThrowVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotatorForSpin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              FuseSpeedScale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditiveVector;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics
struct UBPI_IO_Combat_Barrel_C_BPI_SetSimulatePhysics_Params
{
	bool                                               PhysicsOn_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_Explode
struct UBPI_IO_Combat_Barrel_C_BPI_Explode_Params
{
};

// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_StartFuse
struct UBPI_IO_Combat_Barrel_C_BPI_StartFuse_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
