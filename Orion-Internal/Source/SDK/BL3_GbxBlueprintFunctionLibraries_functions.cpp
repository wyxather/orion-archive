// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxBlueprintFunctionLibraries_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SortActorListByDistance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorList                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SortActorListByDistance(class AActor* TargetActor, TArray<class AActor*>* ActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SortActorListByDistance");

	UGbxBlueprintFunctionLibrariesBPLibrary_SortActorListByDistance_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise4D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise4D(const struct FVector4& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise4D");

	UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise4D_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise3D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise3D(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise3D");

	UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise3D_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise2D(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise2D");

	UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise2D_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise1D(float Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise1D");

	UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise1D_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SetForceMipLevelsToBeResidentForMaterialArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UMaterialInterface*> MaterialArray                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           OverrideForceMiplevelsToBeResident (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceMiplevelsToBeResidentValue (Parm, ZeroConstructor, IsPlainOldData)
// float                          ForceDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SetForceMipLevelsToBeResidentForMaterialArray(TArray<class UMaterialInterface*> MaterialArray, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SetForceMipLevelsToBeResidentForMaterialArray");

	UGbxBlueprintFunctionLibrariesBPLibrary_SetForceMipLevelsToBeResidentForMaterialArray_Params params;
	params.MaterialArray = MaterialArray;
	params.OverrideForceMiplevelsToBeResident = OverrideForceMiplevelsToBeResident;
	params.bForceMiplevelsToBeResidentValue = bForceMiplevelsToBeResidentValue;
	params.ForceDuration = ForceDuration;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               Location                       (Parm, IsPlainOldData)
// int                            Octaves                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Persistence                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_PerlinNoise2D(const struct FVector2D& Location, int Octaves, float Persistence, float Amplitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise2D");

	UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise2D_Params params;
	params.Location = Location;
	params.Octaves = Octaves;
	params.Persistence = Persistence;
	params.Amplitude = Amplitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Octaves                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Persistence                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_PerlinNoise1D(float X, int Octaves, float Persistence, float Amplitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise1D");

	UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise1D_Params params;
	params.X = X;
	params.Octaves = Octaves;
	params.Persistence = Persistence;
	params.Amplitude = Amplitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsWithinRangeAndAngle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Source                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_IsWithinRangeAndAngle(const struct FTransform& Source, class AActor* Target, float Range, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsWithinRangeAndAngle");

	UGbxBlueprintFunctionLibrariesBPLibrary_IsWithinRangeAndAngle_Params params;
	params.Source = Source;
	params.Target = Target;
	params.Range = Range;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsInEditorMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_IsInEditorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsInEditorMode");

	UGbxBlueprintFunctionLibrariesBPLibrary_IsInEditorMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.GbxBlueprintFunctionLibrariesSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Param                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_GbxBlueprintFunctionLibrariesSampleFunction(float Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.GbxBlueprintFunctionLibrariesSampleFunction");

	UGbxBlueprintFunctionLibrariesBPLibrary_GbxBlueprintFunctionLibrariesSampleFunction_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FloatDamp
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Current                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          SmoothDuration                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_FloatDamp(float Current, float Target, float SmoothDuration, float MaxSpeed, float DeltaTime, float* CurrentVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FloatDamp");

	UGbxBlueprintFunctionLibrariesBPLibrary_FloatDamp_Params params;
	params.Current = Current;
	params.Target = Target;
	params.SmoothDuration = SmoothDuration;
	params.MaxSpeed = MaxSpeed;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentVelocity != nullptr)
		*CurrentVelocity = params.CurrentVelocity;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestPlayerCharacter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RefLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_FindClosestPlayerCharacter(class UObject* WorldContextObject, const struct FVector& RefLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestPlayerCharacter");

	UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestPlayerCharacter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RefLocation = RefLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    ActorArray                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 RefLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ClosestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_FindClosestActor(TArray<int> ActorArray, const struct FVector& RefLocation, int* ClosestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestActor");

	UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestActor_Params params;
	params.ActorArray = ActorArray;
	params.RefLocation = RefLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestActor != nullptr)
		*ClosestActor = params.ClosestActor;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.EditorLoadAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>  Asset                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_EditorLoadAsset(TSoftObjectPtr<class UObject> Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.EditorLoadAsset");

	UGbxBlueprintFunctionLibrariesBPLibrary_EditorLoadAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.BroadcastRemoteEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_BroadcastRemoteEvent(class UObject* WorldContextObject, const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.BroadcastRemoteEvent");

	UGbxBlueprintFunctionLibrariesBPLibrary_BroadcastRemoteEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.IsBlockingHit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHitResultFunctionLibrary::STATIC_IsBlockingHit(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.IsBlockingHit");

	UHitResultFunctionLibrary_IsBlockingHit_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetPhysMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// class UPhysicalMaterial*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhysicalMaterial* UHitResultFunctionLibrary::STATIC_GetPhysMaterial(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetPhysMaterial");

	UHitResultFunctionLibrary_GetPhysMaterial_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitNormal
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UHitResultFunctionLibrary::STATIC_GetHitNormal(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitNormal");

	UHitResultFunctionLibrary_GetHitNormal_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UHitResultFunctionLibrary::STATIC_GetHitLocation(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitLocation");

	UHitResultFunctionLibrary_GetHitLocation_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitResultFunctionLibrary::STATIC_GetHitDistance(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitDistance");

	UHitResultFunctionLibrary_GetHitDistance_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UHitResultFunctionLibrary::STATIC_GetHitComponent(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitComponent");

	UHitResultFunctionLibrary_GetHitComponent_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UHitResultFunctionLibrary::STATIC_GetHitActor(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitActor");

	UHitResultFunctionLibrary_GetHitActor_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetBoneName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UHitResultFunctionLibrary::STATIC_GetBoneName(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetBoneName");

	UHitResultFunctionLibrary_GetBoneName_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UTagsFunctionLibrary::STATIC_RemoveTagFromComponent(class UActorComponent* Target, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromComponent");

	UTagsFunctionLibrary_RemoveTagFromComponent_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UTagsFunctionLibrary::STATIC_RemoveTagFromActor(class AActor* Target, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromActor");

	UTagsFunctionLibrary_RemoveTagFromActor_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ComponentContainsTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActorComponent*         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTagsFunctionLibrary::STATIC_ComponentContainsTag(class UActorComponent* Target, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ComponentContainsTag");

	UTagsFunctionLibrary_ComponentContainsTag_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareComponentTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UActorComponent*         FirstComponent                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UActorComponent*         SecondComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ECompareTag                    Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UTagsFunctionLibrary::STATIC_CompareComponentTags(class UActorComponent* FirstComponent, class UActorComponent* SecondComponent, ECompareTag* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareComponentTags");

	UTagsFunctionLibrary_CompareComponentTags_Params params;
	params.FirstComponent = FirstComponent;
	params.SecondComponent = SecondComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTagsWithComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ECompareTag                    Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UTagsFunctionLibrary::STATIC_CompareActorTagsWithComponent(class AActor* Actor, class UActorComponent* Component, ECompareTag* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTagsWithComponent");

	UTagsFunctionLibrary_CompareActorTagsWithComponent_Params params;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  FirstActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SecondActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ECompareTag                    Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UTagsFunctionLibrary::STATIC_CompareActorTags(class AActor* FirstActor, class AActor* SecondActor, ECompareTag* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTags");

	UTagsFunctionLibrary_CompareActorTags_Params params;
	params.FirstActor = FirstActor;
	params.SecondActor = SecondActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;

	return params.ReturnValue;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UTagsFunctionLibrary::STATIC_AddTagToComponent(class UActorComponent* Target, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToComponent");

	UTagsFunctionLibrary_AddTagToComponent_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UTagsFunctionLibrary::STATIC_AddTagToActor(class AActor* Target, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToActor");

	UTagsFunctionLibrary_AddTagToActor_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ActorContainsTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTagsFunctionLibrary::STATIC_ActorContainsTag(class AActor* Target, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ActorContainsTag");

	UTagsFunctionLibrary_ActorContainsTag_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
