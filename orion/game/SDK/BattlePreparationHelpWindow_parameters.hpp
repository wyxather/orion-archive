#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.IsActive
struct UBattlePreparationHelpWindow_C_IsActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x198 (0x198 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.UpdatePreparationData
struct UBattlePreparationHelpWindow_C_UpdatePreparationData_Params
{
public:
	struct FPreparationData                      PreparationData;                                   // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Reset;                                             // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x220 (0x220 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetBuildUp
struct UBattlePreparationHelpWindow_C_SetBuildUp_Params
{
public:
	bool                                         IsBuildUp;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.Set Spread
struct UBattlePreparationHelpWindow_C_Set_Spread_Params
{
public:
	bool                                         IsSpread;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.Set Preparation Title Data
struct UBattlePreparationHelpWindow_C_Set_Preparation_Title_Data_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_SUB_MENU_TYPE            Type;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetPreparationData_New
struct UBattlePreparationHelpWindow_C_SetPreparationData_New_Params
{
public:
	struct FPreparationData                      PreparationData;                                   // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.CloseHelpWindow
struct UBattlePreparationHelpWindow_C_CloseHelpWindow_Params
{
public:
	bool                                         PREPARATION;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.Open Help Window
struct UBattlePreparationHelpWindow_C_Open_Help_Window_Params
{
public:
	bool                                         PREPARATION;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetHelpWindowVisible
struct UBattlePreparationHelpWindow_C_SetHelpWindowVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C0 (0x1C0 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetPreparationData
struct UBattlePreparationHelpWindow_C_SetPreparationData_Params
{
public:
	struct FAbilityDataBase                      MenuItem;                                          // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        PreparationID;                                     // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.ExecuteUbergraph_BattlePreparationHelpWindow
struct UBattlePreparationHelpWindow_C_ExecuteUbergraph_BattlePreparationHelpWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


