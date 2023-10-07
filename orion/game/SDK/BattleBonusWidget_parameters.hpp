#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x3 (0x3 - 0x0)
// Function BattleBonusWidget.BattleBonusWidget_C.SetExpBonusType
struct UBattleBonusWidget_C_SetExpBonusType_Params
{
public:
	bool                                         BreakBonus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OverKillBonus;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleBonusWidget.BattleBonusWidget_C.SetBattleBonusType
struct UBattleBonusWidget_C_SetBattleBonusType_Params
{
public:
	enum class EBATTLERESULT_BONUS_TYPE          BonusType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


