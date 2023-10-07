#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x72 (0x72 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.SetCursorPosition
struct UCharactersGridPanel_C_SetCursorPosition_Params
{
public:
	struct FIntPoint                             NewPos;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.MoveCursor
struct UCharactersGridPanel_C_MoveCursor_Params
{
public:
	struct FIntPoint                             Delta;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12E (0x12E - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.SetMember
struct UCharactersGridPanel_C_SetMember_Params
{
public:
	TArray<struct FCharacterGridPanelParam>      NewMember;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.SetTitleText
struct UCharactersGridPanel_C_SetTitleText_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.OnRightAxisX
struct UCharactersGridPanel_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.OnRightAxisY
struct UCharactersGridPanel_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.OnLeftAxisX
struct UCharactersGridPanel_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.OnLeftAxisY
struct UCharactersGridPanel_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.OnGamePadAxisX
struct UCharactersGridPanel_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.OnGamePadAxisY
struct UCharactersGridPanel_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.OnListPaging
struct UCharactersGridPanel_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.WorldMapSlowCursorX
struct UCharactersGridPanel_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.WorldMapSlowCursorY
struct UCharactersGridPanel_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.HelpScrollAxis
struct UCharactersGridPanel_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function CharactersGridPanel.CharactersGridPanel_C.ExecuteUbergraph_CharactersGridPanel
struct UCharactersGridPanel_C_ExecuteUbergraph_CharactersGridPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


