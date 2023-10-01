#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIExplosiveSpawningComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Spawn
struct UAIExplosiveSpawningComponent_C_AIExplosive_Spawn_Params
{
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Prime
struct UAIExplosiveSpawningComponent_C_AIExplosive_Prime_Params
{
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Detonate
struct UAIExplosiveSpawningComponent_C_AIExplosive_Detonate_Params
{
	bool                                               KillSelfOnDetonate;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InstigatorOverride;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtTarget
struct UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtTarget_Params
{
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesn_tExist;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Drop
struct UAIExplosiveSpawningComponent_C_AIExplosive_Drop_Params
{
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InstigatorOverride;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtActor
struct UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtActor_Params
{
	class AActor*                                      ActorToThrowAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActorSocket;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtLocation
struct UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtLocation_Params
{
	struct FVector                                     LocationToThrowAt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_SetNewExplosiveClass
struct UAIExplosiveSpawningComponent_C_AIExplosive_SetNewExplosiveClass_Params
{
	class UClass*                                      NewExplosiveClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.ExecuteUbergraph_AIExplosiveSpawningComponent
struct UAIExplosiveSpawningComponent_C_ExecuteUbergraph_AIExplosiveSpawningComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
