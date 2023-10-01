#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Global_Sliding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnStart
struct UControlledMove_Global_Sliding_C_OnStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnStop
struct UControlledMove_Global_Sliding_C_OnStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitTargetable
struct UControlledMove_Global_Sliding_C_OnHitTargetable_Params
{
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitWorld
struct UControlledMove_Global_Sliding_C_OnHitWorld_Params
{
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.SlideDuration
struct UControlledMove_Global_Sliding_C_SlideDuration_Params
{
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.MovementChanged
struct UControlledMove_Global_Sliding_C_MovementChanged_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitDamageable
struct UControlledMove_Global_Sliding_C_OnHitDamageable_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnServerStart
struct UControlledMove_Global_Sliding_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnCapsuleBeginOverlap
struct UControlledMove_Global_Sliding_C_OnCapsuleBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnServerStop
struct UControlledMove_Global_Sliding_C_OnServerStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.ExecuteUbergraph_ControlledMove_Global_Sliding
struct UControlledMove_Global_Sliding_C_ExecuteUbergraph_ControlledMove_Global_Sliding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
