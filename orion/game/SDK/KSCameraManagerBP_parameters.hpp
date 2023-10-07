#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x30 (0x30 - 0x0)
// Function KSCameraManagerBP.KSCameraManagerBP_C.GetRenderTarget
struct AKSCameraManagerBP_C_GetRenderTarget_Params
{
public:
	enum class EKSCaptureType                    CaptureType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F47[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function KSCameraManagerBP.KSCameraManagerBP_C.SetRenderTarget
struct AKSCameraManagerBP_C_SetRenderTarget_Params
{
public:
	enum class EKSCaptureType                    CaptureType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function KSCameraManagerBP.KSCameraManagerBP_C.CaptureScene
struct AKSCameraManagerBP_C_CaptureScene_Params
{
public:
	class UCameraComponent*                      CameraCompoent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSCameraManagerBP.KSCameraManagerBP_C.ExecuteUbergraph_KSCameraManagerBP
struct AKSCameraManagerBP_C_ExecuteUbergraph_KSCameraManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


