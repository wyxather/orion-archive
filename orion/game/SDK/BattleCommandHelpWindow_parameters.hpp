#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x110 (0x110 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.RefreshText
struct UBattleCommandHelpWindow_C_RefreshText_Params
{
public:
	enum class EKSUseInputType                   NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.SetPosition
struct UBattleCommandHelpWindow_C_SetPosition_Params
{
public:
	class UBattleCommandMenu_C*                  Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIgnoreUpdateFlip;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x74 (0x74 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.FlipHelpWindow
struct UBattleCommandHelpWindow_C_FlipHelpWindow_Params
{
public:
	bool                                         IsFlip;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ScrollAxis
struct UBattleCommandHelpWindow_C_ScrollAxis_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x420 (0x420 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.UpdateHelpText
struct UBattleCommandHelpWindow_C_UpdateHelpText_Params
{
public:
	struct FCommandMenuItem                      Command;                                           // 0x0(0xBF)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_12AD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoostLv;                                           // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGag;                                             // 0xC4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsNoEquipRestrictWeapon;                           // 0xC5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.OpenHelpWindow
struct UBattleCommandHelpWindow_C_OpenHelpWindow_Params
{
public:
	struct FCommandMenuItem                      Command;                                           // 0x0(0xBF)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_12AE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoostLv;                                           // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGag;                                             // 0xC4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsNoEquipRestrictWeapon;                           // 0xC5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.SetHelpWindowVisible
struct UBattleCommandHelpWindow_C_SetHelpWindowVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.Tick
struct UBattleCommandHelpWindow_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ChangeInputMode
struct UBattleCommandHelpWindow_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ExecuteUbergraph_BattleCommandHelpWindow
struct UBattleCommandHelpWindow_C_ExecuteUbergraph_BattleCommandHelpWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


