// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxCameraModes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxCameraModes.CameraBehavior.Update
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraState*            State                          (Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior::Update(float DeltaTime, class UCameraState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraBehavior.Update");

	UCameraBehavior_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraBehavior.Start
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState*            State                          (Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior::Start(class UCameraState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraBehavior.Start");

	UCameraBehavior_Start_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraBehavior.End
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState*            State                          (Parm, ZeroConstructor, IsPlainOldData)

void UCameraBehavior::End(class UCameraState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraBehavior.End");

	UCameraBehavior_End_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromGbxFeedback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FActiveGbxFeedbackEffect TrackedFeedback                (ConstParm, Parm, OutParm, ReferenceParm)

void APlayerCameraModesManager::UpdateCameraShakeFromGbxFeedback(const struct FActiveGbxFeedbackEffect& TrackedFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromGbxFeedback");

	APlayerCameraModesManager_UpdateCameraShakeFromGbxFeedback_Params params;
	params.TrackedFeedback = TrackedFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromFeedback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FActiveTrackedFeedback  TrackedFeedback                (Parm, OutParm)

void APlayerCameraModesManager::UpdateCameraShakeFromFeedback(struct FActiveTrackedFeedback* TrackedFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromFeedback");

	APlayerCameraModesManager_UpdateCameraShakeFromFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrackedFeedback != nullptr)
		*TrackedFeedback = params.TrackedFeedback;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.SetCameraMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ModeName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTimeOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceResetMode                (Parm, ZeroConstructor, IsPlainOldData)

void UCameraModesFunctionLibrary::STATIC_SetCameraMode(class APlayerController* Controller, const struct FName& ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.SetCameraMode");

	UCameraModesFunctionLibrary_SetCameraMode_Params params;
	params.Controller = Controller;
	params.ModeName = ModeName;
	params.BlendTimeOverride = BlendTimeOverride;
	params.bTeleport = bTeleport;
	params.bForceResetMode = bForceResetMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.ResetCameraRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCameraModesFunctionLibrary::STATIC_ResetCameraRotation(class APlayerController* Controller, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.ResetCameraRotation");

	UCameraModesFunctionLibrary_ResetCameraRotation_Params params;
	params.Controller = Controller;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.RemoveCameraModeSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraModeSetData*      ModeSet                        (Parm, ZeroConstructor, IsPlainOldData)

void UCameraModesFunctionLibrary::STATIC_RemoveCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.RemoveCameraModeSet");

	UCameraModesFunctionLibrary_RemoveCameraModeSet_Params params;
	params.Controller = Controller;
	params.ModeSet = ModeSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.PushCameraMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ModeName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTimeOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void UCameraModesFunctionLibrary::STATIC_PushCameraMode(class APlayerController* Controller, const struct FName& ModeName, float BlendTimeOverride, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.PushCameraMode");

	UCameraModesFunctionLibrary_PushCameraMode_Params params;
	params.Controller = Controller;
	params.ModeName = ModeName;
	params.BlendTimeOverride = BlendTimeOverride;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.PopCameraMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ModeName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTimeOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void UCameraModesFunctionLibrary::STATIC_PopCameraMode(class APlayerController* Controller, const struct FName& ModeName, float BlendTimeOverride, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.PopCameraMode");

	UCameraModesFunctionLibrary_PopCameraMode_Params params;
	params.Controller = Controller;
	params.ModeName = ModeName;
	params.BlendTimeOverride = BlendTimeOverride;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.ApplyCameraRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DeltaRotation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCameraModesFunctionLibrary::STATIC_ApplyCameraRotation(class APlayerController* Controller, const struct FRotator& DeltaRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.ApplyCameraRotation");

	UCameraModesFunctionLibrary_ApplyCameraRotation_Params params;
	params.Controller = Controller;
	params.DeltaRotation = DeltaRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.AddCameraModeSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraModeSetData*      ModeSet                        (Parm, ZeroConstructor, IsPlainOldData)

void UCameraModesFunctionLibrary::STATIC_AddCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.AddCameraModeSet");

	UCameraModesFunctionLibrary_AddCameraModeSet_Params params;
	params.Controller = Controller;
	params.ModeSet = ModeSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraState.SetViewModelFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFOV                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDefault                       (Parm, ZeroConstructor, IsPlainOldData)

void UCameraState::SetViewModelFOV(float NewFOV, bool bDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetViewModelFOV");

	UCameraState_SetViewModelFOV_Params params;
	params.NewFOV = NewFOV;
	params.bDefault = bDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraState.SetBaseRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRotation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCameraState::SetBaseRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetBaseRotation");

	UCameraState_SetBaseRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraState.SetBaseLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCameraState::SetBaseLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetBaseLocation");

	UCameraState_SetBaseLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraState.SetBaseFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFOV                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDefault                       (Parm, ZeroConstructor, IsPlainOldData)

void UCameraState::SetBaseFOV(float NewFOV, bool bDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetBaseFOV");

	UCameraState_SetBaseFOV_Params params;
	params.NewFOV = NewFOV;
	params.bDefault = bDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxCameraModes.CameraState.GetBaseRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FRotator UCameraState::GetBaseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.GetBaseRotation");

	UCameraState_GetBaseRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxCameraModes.CameraState.GetBaseLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UCameraState::GetBaseLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.GetBaseLocation");

	UCameraState_GetBaseLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxCameraModes.CameraState.GetBaseFOV
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCameraState::GetBaseFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.GetBaseFOV");

	UCameraState_GetBaseFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxCameraModes.CameraState.CameraTrace
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  IgnoreMask                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCameraState::CameraTrace(const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, unsigned char IgnoreMask, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.CameraTrace");

	UCameraState_CameraTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.IgnoreMask = IgnoreMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function GbxCameraModes.CameraState.AddPostProcessBlend
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPostProcessSettings    Settings                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          BlendWeight                    (Parm, ZeroConstructor, IsPlainOldData)

void UCameraState::AddPostProcessBlend(const struct FPostProcessSettings& Settings, float BlendWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.AddPostProcessBlend");

	UCameraState_AddPostProcessBlend_Params params;
	params.Settings = Settings;
	params.BlendWeight = BlendWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
