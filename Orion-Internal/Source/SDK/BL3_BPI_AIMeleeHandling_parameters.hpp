#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_AIMeleeHandling_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_GetElementalTypeFromMeleeWeapon
struct UBPI_AIMeleeHandling_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params
{
	EOakElementalType                                  MeleeWeaponElement;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_SetNewMeleeWeaponClass
struct UBPI_AIMeleeHandling_C_AIMelee_SetNewMeleeWeaponClass_Params
{
	class UClass*                                      NewMeleeWeaponClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtLocation
struct UBPI_AIMeleeHandling_C_AIMelee_ThrowAtLocation_Params
{
	struct FVector                                     LocationToThrowAt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtActor
struct UBPI_AIMeleeHandling_C_AIMelee_ThrowAtActor_Params
{
	class AActor*                                      ActorToThrowAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActorSocket;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtTarget
struct UBPI_AIMeleeHandling_C_AIMelee_ThrowAtTarget_Params
{
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_Drop
struct UBPI_AIMeleeHandling_C_AIMelee_Drop_Params
{
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_Spawn
struct UBPI_AIMeleeHandling_C_AIMelee_Spawn_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
