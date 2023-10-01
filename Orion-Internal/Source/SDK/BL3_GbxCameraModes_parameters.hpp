#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxCameraModes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxCameraModes.CameraBehavior.Update
struct UCameraBehavior_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraState*                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraBehavior.Start
struct UCameraBehavior_Start_Params
{
	class UCameraState*                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraBehavior.End
struct UCameraBehavior_End_Params
{
	class UCameraState*                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromGbxFeedback
struct APlayerCameraModesManager_UpdateCameraShakeFromGbxFeedback_Params
{
	struct FActiveGbxFeedbackEffect                    TrackedFeedback;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromFeedback
struct APlayerCameraModesManager_UpdateCameraShakeFromFeedback_Params
{
	struct FActiveTrackedFeedback                      TrackedFeedback;                                          // (Parm, OutParm)
};

// Function GbxCameraModes.CameraModesFunctionLibrary.SetCameraMode
struct UCameraModesFunctionLibrary_SetCameraMode_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ModeName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceResetMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraModesFunctionLibrary.ResetCameraRotation
struct UCameraModesFunctionLibrary_ResetCameraRotation_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraModesFunctionLibrary.RemoveCameraModeSet
struct UCameraModesFunctionLibrary_RemoveCameraModeSet_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraModeSetData*                          ModeSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraModesFunctionLibrary.PushCameraMode
struct UCameraModesFunctionLibrary_PushCameraMode_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ModeName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraModesFunctionLibrary.PopCameraMode
struct UCameraModesFunctionLibrary_PopCameraMode_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ModeName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraModesFunctionLibrary.ApplyCameraRotation
struct UCameraModesFunctionLibrary_ApplyCameraRotation_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraModesFunctionLibrary.AddCameraModeSet
struct UCameraModesFunctionLibrary_AddCameraModeSet_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraModeSetData*                          ModeSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.SetViewModelFOV
struct UCameraState_SetViewModelFOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.SetBaseRotation
struct UCameraState_SetBaseRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.SetBaseLocation
struct UCameraState_SetBaseLocation_Params
{
	struct FVector                                     NewLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.SetBaseFOV
struct UCameraState_SetBaseFOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.GetBaseRotation
struct UCameraState_GetBaseRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.GetBaseLocation
struct UCameraState_GetBaseLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.GetBaseFOV
struct UCameraState_GetBaseFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.CameraTrace
struct UCameraState_CameraTrace_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IgnoreMask;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxCameraModes.CameraState.AddPostProcessBlend
struct UCameraState_AddPostProcessBlend_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              BlendWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
