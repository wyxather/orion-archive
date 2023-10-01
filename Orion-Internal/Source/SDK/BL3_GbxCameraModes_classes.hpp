#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxCameraModes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxCameraModes.CameraBehavior
// 0x0008 (0x0030 - 0x0028)
class UCameraBehavior : public UObject
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0028(0x0001) (Edit)
	unsigned char                                      bUpdatePreViewTarget : 1;                                 // 0x0028(0x0001) (Edit)
	unsigned char                                      bUpdateForRemoteClient : 1;                               // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior");
		return ptr;
	}


	void Update(float DeltaTime, class UCameraState* State);
	void Start(class UCameraState* State);
	void End(class UCameraState* State);
};


// Class GbxCameraModes.CameraBehavior_InitialRotation
// 0x0078 (0x00A8 - 0x0030)
class UCameraBehavior_InitialRotation : public UCameraBehavior
{
public:
	unsigned char                                      bControlPitch : 1;                                        // 0x0030(0x0001) (Edit)
	unsigned char                                      bControlYaw : 1;                                          // 0x0030(0x0001) (Edit)
	unsigned char                                      bInterruptedByInput : 1;                                  // 0x0030(0x0001) (Edit)
	unsigned char                                      bDisableInput : 1;                                        // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FInitialRotationAxisParams                  Pitch;                                                    // 0x0038(0x0030) (Edit)
	struct FInitialRotationAxisParams                  Yaw;                                                      // 0x0068(0x0030) (Edit)
	class UGbxCondition*                               InitialCondition;                                         // 0x0098(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_InitialRotation");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_BlendToFOV
// 0x0048 (0x0078 - 0x0030)
class UCameraBehavior_BlendToFOV : public UCameraBehavior
{
public:
	class UCurveFloat*                                 FOVCurve;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddModifierToBaseFOV;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              FOVModifier;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFOV;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendInDelay;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               BlendInCondition;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bBlendOutWhenBlendInFails;                                // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UGbxCondition*                               BlendOutCondition;                                        // 0x0060(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentDelay;                                             // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxFOVModifier;                                           // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BlendPct;                                                 // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransitioningToTargetFoV;                                // 0x0074(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_BlendToFOV");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_Look
// 0x0070 (0x00A0 - 0x0030)
class UCameraBehavior_Look : public UCameraBehavior
{
public:
	ECameraLookSpaces                                  UpAxis;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              YawSpeedScale;                                            // 0x0034(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PitchSpeedScale;                                          // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              RollSpeedScale;                                           // 0x003C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bSnapOnStart : 1;                                         // 0x0040(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FCameraBehaviorLookAxis                     AXIS[0x3];                                                // 0x0044(0x0018) (Edit)
	struct FGbxEasingFunc                              FeatheringFunction;                                       // 0x008C(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_Look");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_FOV
// 0x0008 (0x0038 - 0x0030)
class UCameraBehavior_FOV : public UCameraBehavior
{
public:
	float                                              FOV;                                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_FOV");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_OffsetViewModel
// 0x0040 (0x0070 - 0x0030)
class UCameraBehavior_OffsetViewModel : public UCameraBehavior
{
public:
	struct FVector                                     LocationOffset;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SplitScreenLocationOffset;                                // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VerticalSplitScreenLocationOffset;                        // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     QuadSplitScreenLocationOffset;                            // 0x0060(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetViewModel");
		return ptr;
	}

};


// Class GbxCameraModes.PlayerCameraModesManager
// 0x0040 (0x2CC0 - 0x2C80)
class APlayerCameraModesManager : public AGbxPlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x2C80(0x0018) MISSED OFFSET
	float                                              ViewTargetClippingRadius;                                 // 0x2C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2C9C(0x0004) MISSED OFFSET
	class UCameraModesManager*                         CameraModesManager;                                       // 0x2CA0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LastViewTarget;                                           // 0x2CA8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ViewTargetFlags;                                          // 0x2CB0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x2CB4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.PlayerCameraModesManager");
		return ptr;
	}


	void UpdateCameraShakeFromGbxFeedback(const struct FActiveGbxFeedbackEffect& TrackedFeedback);
	void UpdateCameraShakeFromFeedback(struct FActiveTrackedFeedback* TrackedFeedback);
};


// Class GbxCameraModes.CameraInputs
// 0x0090 (0x00B8 - 0x0028)
class UCameraInputs : public UObject
{
public:
	float                                              CurrentTime;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    RotationInput;                                            // 0x002C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     AdditionalInput;                                          // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              AdditionalRoll;                                           // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DefaultFOV;                                               // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DefaultForegroundFOV;                                     // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     EyeLocation;                                              // 0x0050(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x005C(0x000C) MISSED OFFSET
	struct FRotator                                    EyeRotation;                                              // 0x0068(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FRotator                                    FacingRotation;                                           // 0x0080(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CollisionSafeLocation;                                    // 0x008C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APlayerController*                           Controller;                                               // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                          // 0x00A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraInputs");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_AnchorToEyeLocation
// 0x0008 (0x0038 - 0x0030)
class UCameraBehavior_AnchorToEyeLocation : public UCameraBehavior
{
public:
	unsigned char                                      bSetRotation : 1;                                         // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_AnchorToEyeLocation");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_AnchorToSocket
// 0x0010 (0x0040 - 0x0030)
class UCameraBehavior_AnchorToSocket : public UCameraBehavior
{
public:
	unsigned char                                      bSetLocation : 1;                                         // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSetRotation : 1;                                         // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_AnchorToSocket");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_AutoFollowRotation
// 0x0020 (0x0050 - 0x0030)
class UCameraBehavior_AutoFollowRotation : public UCameraBehavior
{
public:
	unsigned char                                      bKeepRelativeRotation : 1;                                // 0x0030(0x0001) (Edit)
	unsigned char                                      bRelativeToBase : 1;                                      // 0x0030(0x0001) (Edit)
	unsigned char                                      bFollowPitch : 1;                                         // 0x0030(0x0001) (Edit)
	unsigned char                                      bFollowYaw : 1;                                           // 0x0030(0x0001) (Edit)
	unsigned char                                      bFollowRoll : 1;                                          // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              RotationRate;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_AutoFollowRotation");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_CollisionOffsetTrace
// 0x0010 (0x0040 - 0x0030)
class UCameraBehavior_CollisionOffsetTrace : public UCameraBehavior
{
public:
	float                                              CollisionRadius;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceOffsetZ;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAnchorAsStartLocation;                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreChildToViewTarget;                                 // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreViewTargetAttachParent;                            // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_CollisionOffsetTrace");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_DefaultFOV
// 0x0018 (0x0048 - 0x0030)
class UCameraBehavior_DefaultFOV : public UCameraBehavior
{
public:
	float                                              Scale;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleSplitScreenHorizontal;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleSplitScreenVertical;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleSplitScreenQuad;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFOV;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_DefaultFOV");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_FromAnimation
// 0x0010 (0x0040 - 0x0030)
class UCameraBehavior_FromAnimation : public UCameraBehavior
{
public:
	unsigned char                                      bSetLocation : 1;                                         // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSetRotation : 1;                                         // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_FromAnimation");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_LimitLook
// 0x0020 (0x0050 - 0x0030)
class UCameraBehavior_LimitLook : public UCameraBehavior
{
public:
	struct FRotator                                    Min;                                                      // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Max;                                                      // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bYawRelativeToBase : 1;                                   // 0x0048(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPitchRelativeToBase : 1;                                 // 0x0048(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRollRelativeToBase : 1;                                  // 0x0048(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSnapOnStart : 1;                                         // 0x0048(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_LimitLook");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_LimitPitch
// 0x0010 (0x0040 - 0x0030)
class UCameraBehavior_LimitPitch : public UCameraBehavior
{
public:
	float                                              MinPitch;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInitialPitch;                                         // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              InitialPitch;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_LimitPitch");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_OffsetAbsolute
// 0x0010 (0x0040 - 0x0030)
class UCameraBehavior_OffsetAbsolute : public UCameraBehavior
{
public:
	struct FVector                                     LocationOffset;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetAbsolute");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_OffsetCameraRelative
// 0x0018 (0x0048 - 0x0030)
class UCameraBehavior_OffsetCameraRelative : public UCameraBehavior
{
public:
	struct FVector                                     LocationOffset;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetCameraRelative");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_OffsetCameraRelativeFromInputs
// 0x0070 (0x00A0 - 0x0030)
class UCameraBehavior_OffsetCameraRelativeFromInputs : public UCameraBehavior
{
public:
	bool                                               bHackForDayOnePatch;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              LimitPitch;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeed;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        MoveLimit;                                                // 0x0040(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x005C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetCameraRelativeFromInputs");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_RestoreControllerRotation
// 0x0000 (0x0030 - 0x0030)
class UCameraBehavior_RestoreControllerRotation : public UCameraBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_RestoreControllerRotation");
		return ptr;
	}

};


// Class GbxCameraModes.CameraBehavior_RestoreStartRotation
// 0x0010 (0x0040 - 0x0030)
class UCameraBehavior_RestoreStartRotation : public UCameraBehavior
{
public:
	struct FRotator                                    Rotation;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_RestoreStartRotation");
		return ptr;
	}

};


// Class GbxCameraModes.CameraMode
// 0x0060 (0x0088 - 0x0028)
class UCameraMode : public UObject
{
public:
	class UCameraModeData*                             Data;                                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UCameraBehavior*>                     Behaviors;                                                // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraMode");
		return ptr;
	}

};


// Class GbxCameraModes.CameraModeData
// 0x0030 (0x0060 - 0x0030)
class UCameraModeData : public UGbxDataAsset
{
public:
	struct FName                                       ModeName;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBlendOut : 1;                                            // 0x003C(0x0001) (Edit)
	unsigned char                                      bIsFirstPerson : 1;                                       // 0x003C(0x0001) (Edit)
	unsigned char                                      bShowViewModel : 1;                                       // 0x003C(0x0001) (Edit)
	unsigned char                                      bAllowPitchInversion : 1;                                 // 0x003C(0x0001) (Edit)
	unsigned char                                      bAutoPerspectiveOverride : 1;                             // 0x003C(0x0001) (Edit)
	unsigned char                                      bResetCameraRollOnStart : 1;                              // 0x003C(0x0001) (Edit)
	unsigned char                                      bAllowIntentionalClipping : 1;                            // 0x003C(0x0001) (Edit)
	unsigned char                                      bInterruptTransitionWhenClipping : 1;                     // 0x003C(0x0001) (Edit)
	unsigned char                                      bIncludeInDebugRotation : 1;                              // 0x003D(0x0001) (Edit, DuplicateTransient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	EViewTargetRotationUpdateMethod                    ViewTargetRotationUpdateMethod;                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003E(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ECameraModeTransitionBlendType                     FirstPersonBlendType;                                     // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECameraModeTransitionBlendType                     ThirdPersonBlendType;                                     // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	TArray<class UCameraBehavior*>                     Behaviors;                                                // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      bDisableSeparateTranslucency : 1;                         // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraModeData");
		return ptr;
	}

};


// Class GbxCameraModes.CameraModeSet
// 0x0018 (0x0040 - 0x0028)
class UCameraModeSet : public UObject
{
public:
	class UCameraModeSetData*                          Data;                                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UCameraMode*>                         Modes;                                                    // 0x0030(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraModeSet");
		return ptr;
	}

};


// Class GbxCameraModes.CameraModeSetData
// 0x0010 (0x0040 - 0x0030)
class UCameraModeSetData : public UGbxDataAsset
{
public:
	TArray<class UCameraModeData*>                     Modes;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraModeSetData");
		return ptr;
	}

};


// Class GbxCameraModes.CameraModesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCameraModesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraModesFunctionLibrary");
		return ptr;
	}


	void STATIC_SetCameraMode(class APlayerController* Controller, const struct FName& ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode);
	void STATIC_ResetCameraRotation(class APlayerController* Controller, const struct FRotator& NewRotation);
	void STATIC_RemoveCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet);
	void STATIC_PushCameraMode(class APlayerController* Controller, const struct FName& ModeName, float BlendTimeOverride, bool bTeleport);
	void STATIC_PopCameraMode(class APlayerController* Controller, const struct FName& ModeName, float BlendTimeOverride, bool bTeleport);
	void STATIC_ApplyCameraRotation(class APlayerController* Controller, const struct FRotator& DeltaRotation);
	void STATIC_AddCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet);
};


// Class GbxCameraModes.CameraModesManager
// 0x0130 (0x0158 - 0x0028)
class UCameraModesManager : public UObject
{
public:
	bool                                               bIsClient;                                                // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsRemote;                                                // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x36];                                      // 0x002A(0x0036) MISSED OFFSET
	struct FReplicatedCameraModeState                  ReplicatedModeState;                                      // 0x0060(0x0010) (Transient)
	bool                                               bRemoteIsFirstPerson;                                     // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FName>                               ModeNameStack;                                            // 0x0078(0x0010) (ZeroConstructor, Transient)
	class UCameraMode*                                 CurrentMode;                                              // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UCameraModeSet*>                      ModeSets;                                                 // 0x0090(0x0010) (ZeroConstructor, Transient)
	class UCameraInputs*                               Inputs;                                                   // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCameraState*                                State;                                                    // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x78];                                      // 0x00B0(0x0078) MISSED OFFSET
	struct FSoftClassPath                              CameraStateClassName;                                     // 0x0128(0x0018) (Config, GlobalConfig)
	struct FSoftClassPath                              CameraInputsClassName;                                    // 0x0140(0x0018) (Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraModesManager");
		return ptr;
	}

};


// Class GbxCameraModes.CameraState
// 0x06D8 (0x0700 - 0x0028)
class UCameraState : public UObject
{
public:
	class UCameraInputs*                               Inputs;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FPOV                                        POV;                                                      // 0x0030(0x001C) (BlueprintVisible, Transient)
	float                                              DefaultFOV;                                               // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AbsoluteLocationOffset;                                   // 0x0050(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	struct FVector                                     BaseLocationOffset;                                       // 0x005C(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	struct FRotator                                    BaseRotationOffset;                                       // 0x0068(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	float                                              BaseFOVOffset;                                            // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CameraLocationOffset;                                     // 0x0078(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	struct FRotator                                    CameraRotationOffset;                                     // 0x0084(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	struct FVector                                     ViewModelLocationOffset;                                  // 0x0090(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	struct FRotator                                    ViewModelRotationOffset;                                  // 0x009C(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	float                                              ViewModelFOV;                                             // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DefaultViewModelFOV;                                      // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x00B4(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      bIsTransitioning : 1;                                     // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsColliding : 1;                                         // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bShowViewModel : 1;                                       // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bDisableSeparateTranslucency : 1;                         // 0x00B4(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      UnknownData00 : 1;                                        // 0x00B4(0x0001)
	unsigned char                                      bUpdatingInitialPitchRotation : 1;                        // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bUpdatingInitialYawRotation : 1;                          // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FRotator                                    ClampedLookRotationRemainder;                             // 0x00B8(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<struct FCameraStatePostProcessBlend>        PostProcessBlends;                                        // 0x00C8(0x0010) (ZeroConstructor, Transient)
	float                                              FocusDistance;                                            // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x624];                                     // 0x00DC(0x0624) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraState");
		return ptr;
	}


	void SetViewModelFOV(float NewFOV, bool bDefault);
	void SetBaseRotation(const struct FRotator& NewRotation);
	void SetBaseLocation(const struct FVector& NewLocation);
	void SetBaseFOV(float NewFOV, bool bDefault);
	struct FRotator GetBaseRotation();
	struct FVector GetBaseLocation();
	float GetBaseFOV();
	bool CameraTrace(const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, unsigned char IgnoreMask, struct FHitResult* OutHit);
	void AddPostProcessBlend(const struct FPostProcessSettings& Settings, float BlendWeight);
};


// Class GbxCameraModes.CameraViewTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UCameraViewTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxCameraModes.CameraViewTargetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
