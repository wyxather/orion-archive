#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function BattleActionInfo.BattleActionInfo_C.SetAutoCloseTimer
struct UBattleActionInfo_C_SetAutoCloseTimer_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BattleActionInfo.BattleActionInfo_C.ActionInfoClose
struct UBattleActionInfo_C_ActionInfoClose_Params
{
public:
	bool                                         ForceClose;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BattleActionInfo.BattleActionInfo_C.SetCommandName
struct UBattleActionInfo_C_SetCommandName_Params
{
public:
	class FText                                  CommandName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3C (0x3C - 0x0)
// Function BattleActionInfo.BattleActionInfo_C.Tick
struct UBattleActionInfo_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function BattleActionInfo.BattleActionInfo_C.ExecuteUbergraph_BattleActionInfo
struct UBattleActionInfo_C_ExecuteUbergraph_BattleActionInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


