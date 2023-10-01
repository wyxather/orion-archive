#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIShieldSpawningComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Spawn
struct UAIShieldSpawningComponent_C_AIShield_Spawn_Params
{
};

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtTarget
struct UAIShieldSpawningComponent_C_AIShield_ThrowAtTarget_Params
{
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtActor
struct UAIShieldSpawningComponent_C_AIShield_ThrowAtActor_Params
{
	class AActor*                                      ActorToThrowAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActorSocket;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtLocation
struct UAIShieldSpawningComponent_C_AIShield_ThrowAtLocation_Params
{
	struct FVector                                     LocationToThrowAt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Drop
struct UAIShieldSpawningComponent_C_AIShield_Drop_Params
{
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_SetNewShieldClass
struct UAIShieldSpawningComponent_C_AIShield_SetNewShieldClass_Params
{
	class UClass*                                      NewShieldClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.ExecuteUbergraph_AIShieldSpawningComponent
struct UAIShieldSpawningComponent_C_ExecuteUbergraph_AIShieldSpawningComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
