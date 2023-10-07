#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x80 (0x80 - 0x0)
// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.SetBoostUnable
struct UBattleCommandBoostHelp_C_SetBoostUnable_Params
{
public:
	bool                                         IsUnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.OnChangeBoostLevel
struct UBattleCommandBoostHelp_C_OnChangeBoostLevel_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRText;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowLText;                                         // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.SetBoostHelpVisible
struct UBattleCommandBoostHelp_C_SetBoostHelpVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.ChangeInputMode
struct UBattleCommandBoostHelp_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.ExecuteUbergraph_BattleCommandBoostHelp
struct UBattleCommandBoostHelp_C_ExecuteUbergraph_BattleCommandBoostHelp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


