#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x20 (0x20 - 0x0)
// Function EventTarget.EventTarget_C.SetAttachCharacter
struct AEventTarget_C_SetAttachCharacter_Params
{
public:
	int32                                        TargetIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function EventTarget.EventTarget_C.SetCameraDistanceRate
struct AEventTarget_C_SetCameraDistanceRate_Params
{
public:
	float                                        DistanceRate;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function EventTarget.EventTarget_C.SwitchCamera
struct AEventTarget_C_SwitchCamera_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         InHouse;                                           // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function EventTarget.EventTarget_C.FollowingCamera
struct AEventTarget_C_FollowingCamera_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function EventTarget.EventTarget_C.ReceiveTick
struct AEventTarget_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4E8 (0x4E8 - 0x0)
// Function EventTarget.EventTarget_C.ExecuteUbergraph_EventTarget
struct AEventTarget_C_ExecuteUbergraph_EventTarget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


