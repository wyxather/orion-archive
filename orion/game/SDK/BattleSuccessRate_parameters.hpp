#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x32 (0x32 - 0x0)
// Function BattleSuccessRate.BattleSuccessRate_C.SetBribeMoney
struct UBattleSuccessRate_C_SetBribeMoney_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  MoneyValue;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Negotiate;                                         // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnoughMoney;                                       // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleSuccessRate.BattleSuccessRate_C.SetSuccessRate
struct UBattleSuccessRate_C_SetSuccessRate_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  RateValue;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x30 (0x30 - 0x0)
// Function BattleSuccessRate.BattleSuccessRate_C.ExecuteUbergraph_BattleSuccessRate
struct UBattleSuccessRate_C_ExecuteUbergraph_BattleSuccessRate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


