#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x3A (0x3A - 0x0)
// Function UIEventSkip.UIEventSkip_C.Tick_Internal
struct UUIEventSkip_C_Tick_Internal_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D (0x4D - 0x0)
// Function UIEventSkip.UIEventSkip_C.SetSpeedColor
struct UUIEventSkip_C_SetSpeedColor_Params
{
public:
	bool                                         IsInput;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function UIEventSkip.UIEventSkip_C.SetSkipColor
struct UUIEventSkip_C_SetSkipColor_Params
{
public:
	bool                                         IsInput;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function UIEventSkip.UIEventSkip_C.UpdateNotInputSkipUI
struct UUIEventSkip_C_UpdateNotInputSkipUI_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function UIEventSkip.UIEventSkip_C.ChangeSpeedUpUI
struct UUIEventSkip_C_ChangeSpeedUpUI_Params
{
public:
	enum class EEVENT_MODE                       EventMode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UIEventSkip.UIEventSkip_C.Debug_GetForceSkip
struct UUIEventSkip_C_Debug_GetForceSkip_Params
{
public:
	bool                                         Debug_ForceSkip;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UIEventSkip.UIEventSkip_C.Debug_SetForceSkip
struct UUIEventSkip_C_Debug_SetForceSkip_Params
{
public:
	bool                                         bforceSkip;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UIEventSkip.UIEventSkip_C.EventSkipVisible
struct UUIEventSkip_C_EventSkipVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function UIEventSkip.UIEventSkip_C.OnEventSpeedChange
struct UUIEventSkip_C_OnEventSpeedChange_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           NoticeArgs;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x14 (0x14 - 0x0)
// Function UIEventSkip.UIEventSkip_C.UpdateProgress
struct UUIEventSkip_C_UpdateProgress_Params
{
public:
	float                                        CurrentTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTime;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x17 (0x17 - 0x0)
// Function UIEventSkip.UIEventSkip_C.IsInputKey
struct UUIEventSkip_C_IsInputKey_Params
{
public:
	bool                                         IsInput;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function UIEventSkip.UIEventSkip_C.Tick
struct UUIEventSkip_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UIEventSkip.UIEventSkip_C.ChangeInputMode
struct UUIEventSkip_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function UIEventSkip.UIEventSkip_C.ExecuteUbergraph_UIEventSkip
struct UUIEventSkip_C_ExecuteUbergraph_UIEventSkip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


