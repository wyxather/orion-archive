#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_AIShield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_AIShield.Proj_AIShield_C.AIMelee_GetElementalTypeFromMeleeWeapon
struct AProj_AIShield_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params
{
	EOakElementalType                                  MeleeWeaponElement;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.CauseDamageOnImpact
struct AProj_AIShield_C_CauseDamageOnImpact_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.UserConstructionScript
struct AProj_AIShield_C_UserConstructionScript_Params
{
};

// Function Proj_AIShield.Proj_AIShield_C.AIMelee_Spawn
struct AProj_AIShield_C_AIMelee_Spawn_Params
{
};

// Function Proj_AIShield.Proj_AIShield_C.AIMelee_Drop
struct AProj_AIShield_C_AIMelee_Drop_Params
{
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.AIMelee_ThrowAtTarget
struct AProj_AIShield_C_AIMelee_ThrowAtTarget_Params
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

// Function Proj_AIShield.Proj_AIShield_C.AIMelee_ThrowAtActor
struct AProj_AIShield_C_AIMelee_ThrowAtActor_Params
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

// Function Proj_AIShield.Proj_AIShield_C.AIMelee_ThrowAtLocation
struct AProj_AIShield_C_AIMelee_ThrowAtLocation_Params
{
	struct FVector                                     LocationToThrowAt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.AIMelee_SetNewMeleeWeaponClass
struct AProj_AIShield_C_AIMelee_SetNewMeleeWeaponClass_Params
{
	class UClass*                                      NewMeleeWeaponClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.HNT_Prime
struct AProj_AIShield_C_HNT_Prime_Params
{
};

// Function Proj_AIShield.Proj_AIShield_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
struct AProj_AIShield_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.HNT_Throw
struct AProj_AIShield_C_HNT_Throw_Params
{
};

// Function Proj_AIShield.Proj_AIShield_C.OnHitWorld
struct AProj_AIShield_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.BndEvt__MeleeMesh_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature_Proj_Melee
struct AProj_AIShield_C_BndEvt__MeleeMesh_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature_Proj_Melee_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.HNT_Drop
struct AProj_AIShield_C_HNT_Drop_Params
{
};

// Function Proj_AIShield.Proj_AIShield_C.OnHitEnemy
struct AProj_AIShield_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.OnHitFriendly
struct AProj_AIShield_C_OnHitFriendly_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.OnHitNeutral
struct AProj_AIShield_C_OnHitNeutral_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_AIShield.Proj_AIShield_C.ExecuteUbergraph_Proj_AIShield
struct AProj_AIShield_C_ExecuteUbergraph_Proj_AIShield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
