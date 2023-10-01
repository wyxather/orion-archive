#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_GbxInventory_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_PhysXVehicles_classes.hpp"
#include "BL3_WwiseAudio_classes.hpp"
#include "BL3_AnimGraphRuntime_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxVehicle.EInAirBehavior
enum class EInAirBehavior : uint8_t
{
	Continue                       = 0,
	Pause                          = 1,
	Stop                           = 2,
	EInAirBehavior_MAX             = 3
};


// Enum GbxVehicle.EVehicleCameraRelativeDrivingMode
enum class EVehicleCameraRelativeDrivingMode : uint8_t
{
	Standard                       = 0,
	ForwardOnly                    = 1,
	ReverseOnly                    = 2,
	Mixed                          = 3,
	ForceReverse                   = 4,
	ClassicBL2                     = 5,
	EVehicleCameraRelativeDrivingMode_MAX = 6
};


// Enum GbxVehicle.EVehicleDriveType
enum class EVehicleDriveType : uint8_t
{
	Wheel4                         = 0,
	WheelN                         = 1,
	WheelNNoDrive                  = 2,
	Tank                           = 3,
	EVehicleDriveType_MAX          = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxVehicle.BoostPhysicsParams
// 0x0150
struct FBoostPhysicsParams
{
	float                                              RefVelForPowerCurveKmH;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RefAccelForPowerCurve;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          BoostPower;                                               // 0x0008(0x0078) (Edit)
	float                                              PowerOverTimeCurveBaseRatio;                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RefTimeForPowerOverTimeCurve;                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          BoostPowerOverTime;                                       // 0x0088(0x0078) (Edit)
	struct FRelativeDirectionData                      BoostDirection;                                           // 0x0100(0x0050) (Edit)
};

// ScriptStruct GbxVehicle.ReplicatedHoverComponentState
// 0x0018
struct FReplicatedHoverComponentState
{
	bool                                               bIsEnabled;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StrafeInput;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ForwardInput;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct GbxVehicle.AntiRollBarData
// 0x000C
struct FAntiRollBarData
{
	int                                                WheelIndex1;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex2;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxVehicle.ComplexWheelMovement
// 0x0078
struct FComplexWheelMovement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FBoneReference                              WheelReference;                                           // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              WheelSteeringPivotReference;                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              ControlArmReference;                                      // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              PhysicalWheelReference;                                   // 0x0050(0x0018) (Edit, BlueprintVisible)
	float                                              SuspensionDropMaxSpeed;                                   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
};

// ScriptStruct GbxVehicle.AnimNode_ComplexWheelHandler
// 0x0018 (0x0158 - 0x0140)
struct FAnimNode_ComplexWheelHandler : public FAnimNode_SkeletalControlBase
{
	TArray<struct FComplexWheelMovement>               WheelMovementSystems;                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET
};

// ScriptStruct GbxVehicle.BoostRegenerateEvent
// 0x0018
struct FBoostRegenerateEvent
{
	float                                              BoostTarget;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FScriptDelegate                             VehicleBoostValueReachedEvent;                            // 0x0008(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
};

// ScriptStruct GbxVehicle.PushbackCharactersTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPushbackCharactersTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct GbxVehicle.VehiclePartList
// 0x0010
struct FVehiclePartList
{
	TArray<class UVehiclePartData*>                    Parts;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
