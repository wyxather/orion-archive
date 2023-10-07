#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x14 (0x14 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ApplyAnimationParam
struct UBalloon_DeepThinkTextFixed_C_ApplyAnimationParam_Params
{
public:
	float                                        AlphaParam;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.GetCurrentCanvas
struct UBalloon_DeepThinkTextFixed_C_GetCurrentCanvas_Params
{
public:
	class UCanvasPanel*                          Canvas;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.SetPosition
struct UBalloon_DeepThinkTextFixed_C_SetPosition_Params
{
public:
	enum class EBALLOON_TEXT_POS                 Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.CloseBalloon
struct UBalloon_DeepThinkTextFixed_C_CloseBalloon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.Init
struct UBalloon_DeepThinkTextFixed_C_Init_Params
{
public:
	struct FAddBalloonParam                      InParam;                                           // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bAutoTalk;                                         // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xA1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1F (0x1F - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.CallNext
struct UBalloon_DeepThinkTextFixed_C_CallNext_Params
{
public:
	bool                                         AutoNext;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnRightAxisX
struct UBalloon_DeepThinkTextFixed_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnRightAxisY
struct UBalloon_DeepThinkTextFixed_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnLeftAxisX
struct UBalloon_DeepThinkTextFixed_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnLeftAxisY
struct UBalloon_DeepThinkTextFixed_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnGamePadAxisX
struct UBalloon_DeepThinkTextFixed_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnGamePadAxisY
struct UBalloon_DeepThinkTextFixed_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnListPaging
struct UBalloon_DeepThinkTextFixed_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WorldMapSlowCursorX
struct UBalloon_DeepThinkTextFixed_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WorldMapSlowCursorY
struct UBalloon_DeepThinkTextFixed_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.HelpScrollAxis
struct UBalloon_DeepThinkTextFixed_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.Tick
struct UBalloon_DeepThinkTextFixed_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.SetTextAnimationWait
struct UBalloon_DeepThinkTextFixed_C_SetTextAnimationWait_Params
{
public:
	enum class EKSLanguage                       NewLanguage;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ExecuteUbergraph_Balloon_DeepThinkTextFixed
struct UBalloon_DeepThinkTextFixed_C_ExecuteUbergraph_Balloon_DeepThinkTextFixed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


