#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.ChangeSpeed
struct UWBP_BattleDoubleSpeed_C_ChangeSpeed_Params
{
public:
	bool                                         BattleStartOpen;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.PlayOpenAnim
struct UWBP_BattleDoubleSpeed_C_PlayOpenAnim_Params
{
public:
	bool                                         BattleStartOpen;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.Tick
struct UWBP_BattleDoubleSpeed_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.ChangeInputMode
struct UWBP_BattleDoubleSpeed_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.ExecuteUbergraph_WBP_BattleDoubleSpeed
struct UWBP_BattleDoubleSpeed_C_ExecuteUbergraph_WBP_BattleDoubleSpeed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


