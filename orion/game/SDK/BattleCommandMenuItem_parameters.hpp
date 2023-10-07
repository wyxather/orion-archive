#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x28 (0x28 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandTextColor
struct UBattleCommandMenuItem_C_SetCommandTextColor_Params
{
public:
	struct FSlateColor                           TextColor;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetEnchantAttribute
struct UBattleCommandMenuItem_C_SetEnchantAttribute_Params
{
public:
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetAddInfoWidth
struct UBattleCommandMenuItem_C_SetAddInfoWidth_Params
{
public:
	enum class EABILITY_COST_TYPE                CostType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.CheckSwitchAttributeEnable
struct UBattleCommandMenuItem_C_CheckSwitchAttributeEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.ClearCommandAttribute
struct UBattleCommandMenuItem_C_ClearCommandAttribute_Params
{
public:
	enum class EABILITY_COST_TYPE                CostType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandSize
struct UBattleCommandMenuItem_C_SetCommandSize_Params
{
public:
	float                                        AllSize;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TextSize;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CollapsedAddInfo;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.ChangeCommandAttribute
struct UBattleCommandMenuItem_C_ChangeCommandAttribute_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Instant;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DirNext;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SwitchAnim;                                        // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandAttribute
struct UBattleCommandMenuItem_C_SetCommandAttribute_Params
{
public:
	TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON> Attribute;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         AutoScroll;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SwitchAttribute;                                   // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CommandDisable;                                    // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandEnable
struct UBattleCommandMenuItem_C_SetCommandEnable_Params
{
public:
	bool                                         Usable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Disable;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.CommandOutFocus
struct UBattleCommandMenuItem_C_CommandOutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.SetCommandText
struct UBattleCommandMenuItem_C_SetCommandText_Params
{
public:
	class FText                                  CommandText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  AddInfo;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BoostLv;                                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EABILITY_COST_TYPE                CostType;                                          // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuItem.BattleCommandMenuItem_C.ExecuteUbergraph_BattleCommandMenuItem
struct UBattleCommandMenuItem_C_ExecuteUbergraph_BattleCommandMenuItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


