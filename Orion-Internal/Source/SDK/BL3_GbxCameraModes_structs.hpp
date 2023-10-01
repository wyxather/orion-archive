#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxCameraModes.ECameraBehaviorLookAxis
enum class ECameraBehaviorLookAxis : uint8_t
{
	Pitch                          = 0,
	Yaw                            = 1,
	Roll                           = 2,
	MAX                            = 3
};


// Enum GbxCameraModes.ECameraLookSpaces
enum class ECameraLookSpaces : uint8_t
{
	World                          = 0,
	ViewTarget                     = 1,
	ViewTargetBase                 = 2,
	ECameraLookSpaces_MAX          = 3
};


// Enum GbxCameraModes.ECameraModeTransitionBlendType
enum class ECameraModeTransitionBlendType : uint8_t
{
	None                           = 0,
	Full                           = 1,
	FOV                            = 2,
	ECameraModeTransitionBlendType_MAX = 3
};


// Enum GbxCameraModes.EViewTargetRotationUpdateMethod
enum class EViewTargetRotationUpdateMethod : uint8_t
{
	FromCamera                     = 0,
	Fixed                          = 1,
	FromInputDelta                 = 2,
	EViewTargetRotationUpdateMethod_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxCameraModes.InitialRotationAxisParams
// 0x0030
struct FInitialRotationAxisParams
{
	float                                              MinAngle;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngle;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToBase;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLinearInterpolation;                                     // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpeedScaleCurve;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
};

// ScriptStruct GbxCameraModes.CameraBehaviorLookAxis
// 0x0018
struct FCameraBehaviorLookAxis
{
	float                                              InputScale;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimit : 1;                                               // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              MinAngle;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngle;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FeatheringAngle;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FeatheringInputScale;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxCameraModes.ReplicatedCameraModeState
// 0x0010
struct FReplicatedCameraModeState
{
	struct FName                                       ModeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeOverride;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxCameraModes.CameraStatePostProcessBlend
// 0x0610
struct FCameraStatePostProcessBlend
{
	unsigned char                                      UnknownData00[0x610];                                     // 0x0000(0x0610) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
