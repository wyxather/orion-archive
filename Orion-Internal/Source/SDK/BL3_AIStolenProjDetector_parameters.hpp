#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIStolenProjDetector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDetonate
struct UAIStolenProjDetector_C_AIStolenProj_AttemptDetonate_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDisarm
struct UAIStolenProjDetector_C_AIStolenProj_AttemptDisarm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDestroy
struct UAIStolenProjDetector_C_AIStolenProj_AttemptDestroy_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptAttach
struct UAIStolenProjDetector_C_AIStolenProj_AttemptAttach_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptReturnTo
struct UAIStolenProjDetector_C_AIStolenProj_AttemptReturnTo_Params
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

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptLerpToSocket
struct UAIStolenProjDetector_C_AIStolenProj_AttemptLerpToSocket_Params
{
	struct FName                                       SocketToLerpTo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_GetElementalTypeFromStolenProjectile
struct UAIStolenProjDetector_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params
{
	EOakElementalType                                  StolenProjectileElement;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.ReceiveBeginPlay
struct UAIStolenProjDetector_C_ReceiveBeginPlay_Params
{
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileUpdated_Event_1
struct UAIStolenProjDetector_C_OnStolenProjectileUpdated_Event_1_Params
{
	class AActor*                                      StolenProjectile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileDestroyed_Event_1
struct UAIStolenProjDetector_C_OnStolenProjectileDestroyed_Event_1_Params
{
	class AActor*                                      StolenProjectile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileReturned_Event_1
struct UAIStolenProjDetector_C_OnStolenProjectileReturned_Event_1_Params
{
	class AActor*                                      StolenProjectile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.ExecuteUbergraph_AIStolenProjDetector
struct UAIStolenProjDetector_C_ExecuteUbergraph_AIStolenProjDetector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileDestroyFX__DelegateSignature
struct UAIStolenProjDetector_C_AIStolenProjectileDestroyFX__DelegateSignature_Params
{
	class AActor*                                      MyStolenProjectile;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileReturnFX__DelegateSignature
struct UAIStolenProjDetector_C_AIStolenProjectileReturnFX__DelegateSignature_Params
{
	class AActor*                                      MyStolenProjectile;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileUpdated__DelegateSignature
struct UAIStolenProjDetector_C_AIStolenProjectileUpdated__DelegateSignature_Params
{
	class AActor*                                      MyStolenProjectile;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
