#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xFD (0xFD - 0x0)
// Function ScreenCaptureWidget.ScreenCaptureWidget_C.TickNoiseInternal
struct UScreenCaptureWidget_C_TickNoiseInternal_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function ScreenCaptureWidget.ScreenCaptureWidget_C.NoiseFinish
struct UScreenCaptureWidget_C_NoiseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function ScreenCaptureWidget.ScreenCaptureWidget_C.Tick
struct UScreenCaptureWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ScreenCaptureWidget.ScreenCaptureWidget_C.OpenUI
struct UScreenCaptureWidget_C_OpenUI_Params
{
public:
	bool                                         PlayNoise;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ScreenCaptureWidget.ScreenCaptureWidget_C.OpenUIWithTexture
struct UScreenCaptureWidget_C_OpenUIWithTexture_Params
{
public:
	class FName                                  ResourceLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function ScreenCaptureWidget.ScreenCaptureWidget_C.ExecuteUbergraph_ScreenCaptureWidget
struct UScreenCaptureWidget_C_ExecuteUbergraph_ScreenCaptureWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


