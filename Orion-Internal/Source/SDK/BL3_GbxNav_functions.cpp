// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxNav_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxNav.GbxNavComponent.TryMoving
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          fDuration                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavComponent::TryMoving(float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.TryMoving");

	UGbxNavComponent_TryMoving_Params params;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavComponent.SetPathFindingData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHavokPathFindingData*   NewPathFindingData             (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavComponent::SetPathFindingData(class UHavokPathFindingData* NewPathFindingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.SetPathFindingData");

	UGbxNavComponent_SetPathFindingData_Params params;
	params.NewPathFindingData = NewPathFindingData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavComponent.ResetPathFindingData
// (Final, Native, Public, BlueprintCallable)

void UGbxNavComponent::ResetPathFindingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.ResetPathFindingData");

	UGbxNavComponent_ResetPathFindingData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavComponent.GetPathFindingData
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHavokPathFindingData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHavokPathFindingData* UGbxNavComponent::GetPathFindingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.GetPathFindingData");

	UGbxNavComponent_GetPathFindingData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxNav.AIVehicleFlightComponent.OnRep_FlightState
// (Native, Public)

void UAIVehicleFlightComponent::OnRep_FlightState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.AIVehicleFlightComponent.OnRep_FlightState");

	UAIVehicleFlightComponent_OnRep_FlightState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxAnimStateManager_AINav.Owner_PostBeginPlay
// (Final, Native, Public)

void UGbxAnimStateManager_AINav::Owner_PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxAnimStateManager_AINav.Owner_PostBeginPlay");

	UGbxAnimStateManager_AINav_Owner_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavBlueprintLibrary.SetAINavPathType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// EGbxPathType                   PathType                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavBlueprintLibrary::STATIC_SetAINavPathType(class AActor* Actor, EGbxPathType PathType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.SetAINavPathType");

	UGbxNavBlueprintLibrary_SetAINavPathType_Params params;
	params.Actor = Actor;
	params.PathType = PathType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavBlueprintLibrary.ResourceUnlockAvoidance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavBlueprintLibrary::STATIC_ResourceUnlockAvoidance(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.ResourceUnlockAvoidance");

	UGbxNavBlueprintLibrary_ResourceUnlockAvoidance_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavBlueprintLibrary.ResourceLockAvoidance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavBlueprintLibrary::STATIC_ResourceLockAvoidance(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.ResourceLockAvoidance");

	UGbxNavBlueprintLibrary_ResourceLockAvoidance_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavBlueprintLibrary.ForceNavMeshLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxNavMeshLayer*        ForcedNavMeshLayer             (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavBlueprintLibrary::STATIC_ForceNavMeshLayer(class AActor* Actor, class UGbxNavMeshLayer* ForcedNavMeshLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.ForceNavMeshLayer");

	UGbxNavBlueprintLibrary_ForceNavMeshLayer_Params params;
	params.Actor = Actor;
	params.ForcedNavMeshLayer = ForcedNavMeshLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPointForActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxNavBlueprintLibrary::STATIC_FindNavMeshPointForActor(class AActor* Actor, const struct FVector& Point, float Radius, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPointForActor");

	UGbxNavBlueprintLibrary_FindNavMeshPointForActor_Params params;
	params.Actor = Actor;
	params.Point = Point;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)
// class UGbxNavMeshLayer*        Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxNavBlueprintLibrary::STATIC_FindNavMeshPoint(class UObject* WorldContextObject, const struct FVector& Point, float Radius, class UGbxNavMeshLayer* Layer, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPoint");

	UGbxNavBlueprintLibrary_FindNavMeshPoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.Radius = Radius;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function GbxNav.GbxNavBoxComponent.DoAutoResize
// (Final, Native, Private)

void UGbxNavBoxComponent::DoAutoResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBoxComponent.DoAutoResize");

	UGbxNavBoxComponent_DoAutoResize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavMeshPainter.SetPainterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void AGbxNavMeshPainter::SetPainterEnabled(bool bNewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainter.SetPainterEnabled");

	AGbxNavMeshPainter_SetPainterEnabled_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavMeshPainter.IsPainterEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxNavMeshPainter::IsPainterEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainter.IsPainterEnabled");

	AGbxNavMeshPainter_IsPainterEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxNav.GbxNavMeshPainterComponent.SetPainterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavMeshPainterComponent::SetPainterEnabled(bool bNewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.SetPainterEnabled");

	UGbxNavMeshPainterComponent_SetPainterEnabled_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavMeshPainterComponent.SetPainterAlwaysEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewAlwaysEnabled              (Parm, ZeroConstructor, IsPlainOldData)

void UGbxNavMeshPainterComponent::SetPainterAlwaysEnabled(bool bNewAlwaysEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.SetPainterAlwaysEnabled");

	UGbxNavMeshPainterComponent_SetPainterAlwaysEnabled_Params params;
	params.bNewAlwaysEnabled = bNewAlwaysEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavMeshPainterComponent.ResetToStatic
// (Final, Native, Public, BlueprintCallable)

void UGbxNavMeshPainterComponent::ResetToStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.ResetToStatic");

	UGbxNavMeshPainterComponent_ResetToStatic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.GbxNavMeshPainterComponent.IsPainterEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxNavMeshPainterComponent::IsPainterEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.IsPainterEnabled");

	UGbxNavMeshPainterComponent_IsPainterEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxNav.HavokNavObstacleComponent.UnlockObstacle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UHavokNavObstacleComponent::UnlockObstacle(const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokNavObstacleComponent.UnlockObstacle");

	UHavokNavObstacleComponent_UnlockObstacle_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.HavokNavObstacleComponent.LockObstacle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UHavokNavObstacleComponent::LockObstacle(const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokNavObstacleComponent.LockObstacle");

	UHavokNavObstacleComponent_LockObstacle_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.HavokUserEdgeActor.SetEdgeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void AHavokUserEdgeActor::SetEdgeEnabled(bool bNewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeActor.SetEdgeEnabled");

	AHavokUserEdgeActor_SetEdgeEnabled_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.HavokUserEdgeActor.IsEdgeEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHavokUserEdgeActor::IsEdgeEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeActor.IsEdgeEnabled");

	AHavokUserEdgeActor_IsEdgeEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxNav.HavokUserEdgeComponent.SetEdgeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void UHavokUserEdgeComponent::SetEdgeEnabled(bool bNewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeComponent.SetEdgeEnabled");

	UHavokUserEdgeComponent_SetEdgeEnabled_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.HavokUserEdgeComponent.IsEdgeEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHavokUserEdgeComponent::IsEdgeEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeComponent.IsEdgeEnabled");

	UHavokUserEdgeComponent_IsEdgeEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxNav.HavokUserEdgeComponent.AnchorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UHavokUserEdgeComponent::AnchorDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeComponent.AnchorDestroyed");

	UHavokUserEdgeComponent_AnchorDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxNav.HavokUserEdgePreviewComponent.OnBlueprintCompiled
// (Final, Native, Public)
// Parameters:
// class UBlueprint*              BP                             (Parm, ZeroConstructor, IsPlainOldData)

void UHavokUserEdgePreviewComponent::OnBlueprintCompiled(class UBlueprint* BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgePreviewComponent.OnBlueprintCompiled");

	UHavokUserEdgePreviewComponent_OnBlueprintCompiled_Params params;
	params.BP = BP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
