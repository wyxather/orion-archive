#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.IsHelpVisible
struct USupportAbilityWidget_C_IsHelpVisible_Params
{
public:
	bool                                         HelpVisible;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.SetupHelp
struct USupportAbilityWidget_C_SetupHelp_Params
{
public:
	bool                                         HelpVisible;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.GetSlotNum
struct USupportAbilityWidget_C_GetSlotNum_Params
{
public:
	int32                                        SlotNum;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.UpdateCursor
struct USupportAbilityWidget_C_UpdateCursor_Params
{
public:
	int32                                        NewCursor;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SelectDecide;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UnSelectReset;                                     // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsMove;                                            // 0x7(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.GetCursorPos
struct USupportAbilityWidget_C_GetCursorPos_Params
{
public:
	int32                                        CursorPos;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE3 (0xE3 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.Set Support Ability
struct USupportAbilityWidget_C_Set_Support_Ability_Params
{
public:
	int32                                        AbilityID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UListItemWidget_Col1_C*                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DetailText;                                        // 0x10(0x18)(Parm, OutParm)
};

// 0x12 (0x12 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.CursorDown
struct USupportAbilityWidget_C_CursorDown_Params
{
public:
	bool                                         IsSuccess;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.CursorUp
struct USupportAbilityWidget_C_CursorUp_Params
{
public:
	bool                                         IsSuccess;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.Focus
struct USupportAbilityWidget_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x154 (0x154 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.Setup Widget
struct USupportAbilityWidget_C_Setup_Widget_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsGuestCharacter;                                  // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function SupportAbilityWidget.SupportAbilityWidget_C.ExecuteUbergraph_SupportAbilityWidget
struct USupportAbilityWidget_C_ExecuteUbergraph_SupportAbilityWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


