#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_AIStolenProj_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDetonate
struct UBPI_AIStolenProj_C_AIStolenProj_AttemptDetonate_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_GetElementalTypeFromStolenProjectile
struct UBPI_AIStolenProj_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params
{
	EOakElementalType                                  StolenProjectileElement;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptLerpToSocket
struct UBPI_AIStolenProj_C_AIStolenProj_AttemptLerpToSocket_Params
{
	struct FName                                       SocketToLerpTo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptReturnTo
struct UBPI_AIStolenProj_C_AIStolenProj_AttemptReturnTo_Params
{
	TEnumAsByte<Enum_AIThrowAtStyle>                   ReturnTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      SpecifiedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptAttach
struct UBPI_AIStolenProj_C_AIStolenProj_AttemptAttach_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDestroy
struct UBPI_AIStolenProj_C_AIStolenProj_AttemptDestroy_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDisarm
struct UBPI_AIStolenProj_C_AIStolenProj_AttemptDisarm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
