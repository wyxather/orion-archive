#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxBlueprintFunctionLibraries_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SortActorListByDistance
struct UGbxBlueprintFunctionLibrariesBPLibrary_SortActorListByDistance_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise4D
struct UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise4D_Params
{
	struct FVector4                                    Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise3D
struct UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise3D_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise2D
struct UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise2D_Params
{
	struct FVector2D                                   Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise1D
struct UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise1D_Params
{
	float                                              Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SetForceMipLevelsToBeResidentForMaterialArray
struct UGbxBlueprintFunctionLibrariesBPLibrary_SetForceMipLevelsToBeResidentForMaterialArray_Params
{
	TArray<class UMaterialInterface*>                  MaterialArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OverrideForceMiplevelsToBeResident;                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMiplevelsToBeResidentValue;                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise2D
struct UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise2D_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, IsPlainOldData)
	int                                                Octaves;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Persistence;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise1D
struct UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise1D_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Octaves;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Persistence;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsWithinRangeAndAngle
struct UGbxBlueprintFunctionLibrariesBPLibrary_IsWithinRangeAndAngle_Params
{
	struct FTransform                                  Source;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsInEditorMode
struct UGbxBlueprintFunctionLibrariesBPLibrary_IsInEditorMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.GbxBlueprintFunctionLibrariesSampleFunction
struct UGbxBlueprintFunctionLibrariesBPLibrary_GbxBlueprintFunctionLibrariesSampleFunction_Params
{
	float                                              Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FloatDamp
struct UGbxBlueprintFunctionLibrariesBPLibrary_FloatDamp_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              SmoothDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestPlayerCharacter
struct UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestPlayerCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RefLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestActor
struct UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestActor_Params
{
	TArray<int>                                        ActorArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     RefLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ClosestActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.EditorLoadAsset
struct UGbxBlueprintFunctionLibrariesBPLibrary_EditorLoadAsset_Params
{
	TSoftObjectPtr<class UObject>                      Asset;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.BroadcastRemoteEvent
struct UGbxBlueprintFunctionLibrariesBPLibrary_BroadcastRemoteEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.IsBlockingHit
struct UHitResultFunctionLibrary_IsBlockingHit_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetPhysMaterial
struct UHitResultFunctionLibrary_GetPhysMaterial_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	class UPhysicalMaterial*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitNormal
struct UHitResultFunctionLibrary_GetHitNormal_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitLocation
struct UHitResultFunctionLibrary_GetHitLocation_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitDistance
struct UHitResultFunctionLibrary_GetHitDistance_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitComponent
struct UHitResultFunctionLibrary_GetHitComponent_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitActor
struct UHitResultFunctionLibrary_GetHitActor_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetBoneName
struct UHitResultFunctionLibrary_GetBoneName_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromComponent
struct UTagsFunctionLibrary_RemoveTagFromComponent_Params
{
	class UActorComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromActor
struct UTagsFunctionLibrary_RemoveTagFromActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ComponentContainsTag
struct UTagsFunctionLibrary_ComponentContainsTag_Params
{
	class UActorComponent*                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareComponentTags
struct UTagsFunctionLibrary_CompareComponentTags_Params
{
	class UActorComponent*                             FirstComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorComponent*                             SecondComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECompareTag                                        Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTagsWithComponent
struct UTagsFunctionLibrary_CompareActorTagsWithComponent_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECompareTag                                        Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTags
struct UTagsFunctionLibrary_CompareActorTags_Params
{
	class AActor*                                      FirstActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SecondActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECompareTag                                        Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToComponent
struct UTagsFunctionLibrary_AddTagToComponent_Params
{
	class UActorComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToActor
struct UTagsFunctionLibrary_AddTagToActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ActorContainsTag
struct UTagsFunctionLibrary_ActorContainsTag_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
