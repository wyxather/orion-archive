#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FL_JoshsFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ValidateSpawnPoint
struct UFL_JoshsFunctionLibrary_C_ValidateSpawnPoint_Params
{
	class USpawnPointComponent*                        PointToValidate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxDropDistance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.AIScriptedLookAtPlayers
struct UFL_JoshsFunctionLibrary_C_AIScriptedLookAtPlayers_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardInt
struct UFL_JoshsFunctionLibrary_C_SetBlackboardInt_Params
{
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardInt
struct UFL_JoshsFunctionLibrary_C_GetBlackboardInt_Params
{
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TestHitReaction
struct UFL_JoshsFunctionLibrary_C_TestHitReaction_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_TestHitReactionType>              Hit_Reaction_Type;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_TestHitReactionDirection>         Hit_Reaction_Direction;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Display_Text;                                             // (Parm, OutParm)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ThrowLightProjectile
struct UFL_JoshsFunctionLibrary_C_ThrowLightProjectile_Params
{
	class AActor*                                      WhoIsThrowing_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LightProjectileData;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetOverride;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     LocalTargetOffset;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                DataFlags;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TransformSplat
struct UFL_JoshsFunctionLibrary_C_TransformSplat_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SplatTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GrantSecondWind
struct UFL_JoshsFunctionLibrary_C_GrantSecondWind_Params
{
	class AActor*                                      ActorToGrantSecondWindTo;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SimpleScreenParticle
struct UFL_JoshsFunctionLibrary_C_SimpleScreenParticle_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenParticle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowMultipleInstances;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyDrawIfShieldsAreDepleted;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetElementalTypeFromWeapon
struct UFL_JoshsFunctionLibrary_C_GetElementalTypeFromWeapon_Params
{
	class AActor*                                      ActorWithWeapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakElementalType                                  WeaponElement;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardObject
struct UFL_JoshsFunctionLibrary_C_GetBlackboardObject_Params
{
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardObject
struct UFL_JoshsFunctionLibrary_C_SetBlackboardObject_Params
{
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.Setup for Throw Actor At
struct UFL_JoshsFunctionLibrary_C_Setup_for_Throw_Actor_At_Params
{
	class APawn*                                       Who_is_Throwing_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetOverride;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetCurrentTarget
struct UFL_JoshsFunctionLibrary_C_GetCurrentTarget_Params
{
	class APawn*                                       Who_s_Target_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardFloat
struct UFL_JoshsFunctionLibrary_C_GetBlackboardFloat_Params
{
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardBool
struct UFL_JoshsFunctionLibrary_C_GetBlackboardBool_Params
{
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardFloat
struct UFL_JoshsFunctionLibrary_C_SetBlackboardFloat_Params
{
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardBool
struct UFL_JoshsFunctionLibrary_C_SetBlackboardBool_Params
{
	class AActor*                                      ControlledActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardKey;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetStance
struct UFL_JoshsFunctionLibrary_C_SetStance_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOakStanceData*                              New_Stance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ForciblyResetSpawner
struct UFL_JoshsFunctionLibrary_C_ForciblyResetSpawner_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Kill_Existing_Actors;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ResourceLock
struct UFL_JoshsFunctionLibrary_C_ResourceLock_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_ResourceLockType>                 Lock_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LockState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GBXActionVariableSetup
struct UFL_JoshsFunctionLibrary_C_GBXActionVariableSetup_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MySelf;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MyTarget;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      MyDamageCausingComponent;                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ACharacter*                                  MyCharacter;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTeam*                                       MyTeam;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
