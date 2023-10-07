#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x20 (0x20 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.UpdateCameraInterpolationByPlayerPos
struct UOperationPlayerCameraComponent_C_UpdateCameraInterpolationByPlayerPos_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.StartCameraInterpolationByPlayerPos
struct UOperationPlayerCameraComponent_C_StartCameraInterpolationByPlayerPos_Params
{
public:
	struct FVector                               StartPlayerPos;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetTransportTypeForFocusDistance
struct UOperationPlayerCameraComponent_C_SetTransportTypeForFocusDistance_Params
{
public:
	enum class ETRANSPORTATION_TYPE              CurrentTransportType;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC4 (0xC4 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.UpdateEncountCamera
struct UOperationPlayerCameraComponent_C_UpdateEncountCamera_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Aim;                                               // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetCameraParameter
struct UOperationPlayerCameraComponent_C_SetCameraParameter_Params
{
public:
	struct FTransportCameraParam                 CameraParam;                                       // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ChangeTransform;                                   // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetupCameraLockPosDirectly
struct UOperationPlayerCameraComponent_C_SetupCameraLockPosDirectly_Params
{
public:
	struct FVector                               CameraLockPos;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EEC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33F (0x33F - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.UpdateCameraLock
struct UOperationPlayerCameraComponent_C_UpdateCameraLock_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F4 (0x1F4 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetupCameraLock
struct UOperationPlayerCameraComponent_C_SetupCameraLock_Params
{
public:
	struct FVector                               LockPos;                                           // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Lock;                                              // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Unlock;                                            // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableX;                                           // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableY;                                           // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableZ;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AfterLevelChange;                                  // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetFilmbackPreset
struct UOperationPlayerCameraComponent_C_SetFilmbackPreset_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.ReceiveTick
struct UOperationPlayerCameraComponent_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.ExecuteUbergraph_OperationPlayerCameraComponent
struct UOperationPlayerCameraComponent_C_ExecuteUbergraph_OperationPlayerCameraComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


