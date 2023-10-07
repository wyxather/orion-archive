#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.On Decide Confirm Ability Dialog
struct UFieldCommandWidgetBattle_C_On_Decide_Confirm_Ability_Dialog_Params
{
public:
	int32                                        SelectCursorPosition;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDecide;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenConfirmAbilityDialog
struct UFieldCommandWidgetBattle_C_OpenConfirmAbilityDialog_Params
{
public:
	TArray<int32>                                SelectAbilityList;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.IsExecLearnAbility
struct UFieldCommandWidgetBattle_C_IsExecLearnAbility_Params
{
public:
	bool                                         ExecLearnAbility;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenForgetAbilityDialog
struct UFieldCommandWidgetBattle_C_OpenForgetAbilityDialog_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                SelectAbilityList;                                 // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenLearnAbilityDialog
struct UFieldCommandWidgetBattle_C_OpenLearnAbilityDialog_Params
{
public:
	class FName                                  NPCLabelName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAbilityFull;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C0 (0x1C0 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenFailedDialog
struct UFieldCommandWidgetBattle_C_OpenFailedDialog_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.GetDialogInput
struct UFieldCommandWidgetBattle_C_GetDialogInput_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D8 (0x1D8 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenNPCDialog
struct UFieldCommandWidgetBattle_C_OpenNPCDialog_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.LearnAbilityCallback
struct UFieldCommandWidgetBattle_C_LearnAbilityCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.BattleFailedCallback
struct UFieldCommandWidgetBattle_C_BattleFailedCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.BattleConfirmCallback
struct UFieldCommandWidgetBattle_C_BattleConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.SetReference
struct UFieldCommandWidgetBattle_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.EventSelectedForGetAbility
struct UFieldCommandWidgetBattle_C_EventSelectedForGetAbility_Params
{
public:
	int32                                        SelectCursorPosition;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDecide;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x160 (0x160 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenDialogCommon
struct UFieldCommandWidgetBattle_C_OpenDialogCommon_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DialogText;                                        // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          ButtonText;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPE ShowType;                                          // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.IsRunning
struct UFieldCommandWidgetBattle_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x652 (0x652 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.SetDialogStatus
struct UFieldCommandWidgetBattle_C_SetDialogStatus_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPE ShowType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnRightAxisX
struct UFieldCommandWidgetBattle_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnRightAxisY
struct UFieldCommandWidgetBattle_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnLeftAxisX
struct UFieldCommandWidgetBattle_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnLeftAxisY
struct UFieldCommandWidgetBattle_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnGamePadAxisX
struct UFieldCommandWidgetBattle_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnGamePadAxisY
struct UFieldCommandWidgetBattle_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnListPaging
struct UFieldCommandWidgetBattle_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.WorldMapSlowCursorX
struct UFieldCommandWidgetBattle_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.WorldMapSlowCursorY
struct UFieldCommandWidgetBattle_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.HelpScrollAxis
struct UFieldCommandWidgetBattle_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.ExecuteUbergraph_FieldCommandWidgetBattle
struct UFieldCommandWidgetBattle_C_ExecuteUbergraph_FieldCommandWidgetBattle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


