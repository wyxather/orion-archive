#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function BattleWipeAnimation.BattleWipeAnimation_C.IsBreakAnimation
struct UBattleWipeAnimation_C_IsBreakAnimation_Params
{
public:
	bool                                         IsAnimarion;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleWipeAnimation.BattleWipeAnimation_C.IsReadyAnimation
struct UBattleWipeAnimation_C_IsReadyAnimation_Params
{
public:
	bool                                         IsAnimarion;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BattleWipeAnimation.BattleWipeAnimation_C.PlayStartReady
struct UBattleWipeAnimation_C_PlayStartReady_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleWipeAnimation.BattleWipeAnimation_C.PlayStartBreak
struct UBattleWipeAnimation_C_PlayStartBreak_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function BattleWipeAnimation.BattleWipeAnimation_C.Tick
struct UBattleWipeAnimation_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function BattleWipeAnimation.BattleWipeAnimation_C.ExecuteUbergraph_BattleWipeAnimation
struct UBattleWipeAnimation_C_ExecuteUbergraph_BattleWipeAnimation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


