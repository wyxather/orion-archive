#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xD0 (0xD0 - 0x0)
// Function BattleStyleChange.BattleStyleChange_C.Set Effect
struct UBattleStyleChange_C_Set_Effect_Params
{
public:
	enum class EBATTLE_STYLE_TYPE                BattleStyle;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPotentialityActionData               PotentialityActionData;                            // 0x8(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function BattleStyleChange.BattleStyleChange_C.UpdateText
struct UBattleStyleChange_C_UpdateText_Params
{
public:
	bool                                         IsFirstTurn;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsAvailable;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleStyleChange.BattleStyleChange_C.SetColor
struct UBattleStyleChange_C_SetColor_Params
{
public:
	enum class EGameColor                        ColorType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BattleStyleChange.BattleStyleChange_C.Set Release Text
struct UBattleStyleChange_C_Set_Release_Text_Params
{
public:
	bool                                         IsRelease;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_STYLE_TYPE                Style;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleStyleChange.BattleStyleChange_C.SetGameText
struct UBattleStyleChange_C_SetGameText_Params
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleStyleChange.BattleStyleChange_C.ChangeInputMode
struct UBattleStyleChange_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattleStyleChange.BattleStyleChange_C.ExecuteUbergraph_BattleStyleChange
struct UBattleStyleChange_C_ExecuteUbergraph_BattleStyleChange_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


