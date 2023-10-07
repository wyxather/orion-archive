#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x26 (0x26 - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.PlayAnimation_Internal
struct UBattleBoostGaugePoint_C_PlayAnimation_Internal_Params
{
public:
	class UWidgetAnimation*                      Anim;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartAtTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopAllAnimBeforePlay;                           // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumLoopsToPlay;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetBoostEnable
struct UBattleBoostGaugePoint_C_SetBoostEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetAddBoostIcon
struct UBattleBoostGaugePoint_C_SetAddBoostIcon_Params
{
public:
	bool                                         AddIcon;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.GetLoopAnimationTime
struct UBattleBoostGaugePoint_C_GetLoopAnimationTime_Params
{
public:
	float                                        CurrentTime;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetStatusPanel
struct UBattleBoostGaugePoint_C_SetStatusPanel_Params
{
public:
	class USelectPlayerStatusBase*               Panel;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetBoost
struct UBattleBoostGaugePoint_C_SetBoost_Params
{
public:
	bool                                         Boost;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Max;                                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.PlayWaitLoop
struct UBattleBoostGaugePoint_C_PlayWaitLoop_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.ExecuteUbergraph_BattleBoostGaugePoint
struct UBattleBoostGaugePoint_C_ExecuteUbergraph_BattleBoostGaugePoint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


