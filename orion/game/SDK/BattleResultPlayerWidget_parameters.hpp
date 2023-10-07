#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.SetParent
struct UBattleResultPlayerWidget_C_SetParent_Params
{
public:
	class UBattleResultPanelWidget_C*            Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.IsCountupUpdate
struct UBattleResultPlayerWidget_C_IsCountupUpdate_Params
{
public:
	bool                                         Playing;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.SetResultPlayer
struct UBattleResultPlayerWidget_C_SetResultPlayer_Params
{
public:
	class ABattlePlayerBP_C*                     TergetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GetExp;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GetJobPoint;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.OnRightAxisX
struct UBattleResultPlayerWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.OnRightAxisY
struct UBattleResultPlayerWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.OnLeftAxisX
struct UBattleResultPlayerWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.OnLeftAxisY
struct UBattleResultPlayerWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.OnGamePadAxisX
struct UBattleResultPlayerWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.OnGamePadAxisY
struct UBattleResultPlayerWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.OnListPaging
struct UBattleResultPlayerWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.WorldMapSlowCursorX
struct UBattleResultPlayerWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.WorldMapSlowCursorY
struct UBattleResultPlayerWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.HelpScrollAxis
struct UBattleResultPlayerWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function BattleResultPlayerWidget.BattleResultPlayerWidget_C.ExecuteUbergraph_BattleResultPlayerWidget
struct UBattleResultPlayerWidget_C_ExecuteUbergraph_BattleResultPlayerWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


