#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.NewIconEnable
struct UMainMenuSubItemPanel_C_NewIconEnable_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.GetEnable
struct UMainMenuSubItemPanel_C_GetEnable_Params
{
public:
	bool                                         IsUnEnable;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.ChangeEnable
struct UMainMenuSubItemPanel_C_ChangeEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.PlayAnim
struct UMainMenuSubItemPanel_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fast;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.GetHeight
struct UMainMenuSubItemPanel_C_GetHeight_Params
{
public:
	float                                        Image_Size_Y;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.Focus
struct UMainMenuSubItemPanel_C_Focus_Params
{
public:
	bool                                         AnimFast;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FromUp;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.OutFocus
struct UMainMenuSubItemPanel_C_OutFocus_Params
{
public:
	bool                                         AnimFast;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MoveUp;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.GetCursorPosition
struct UMainMenuSubItemPanel_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.ExecuteUbergraph_MainMenuSubItemPanel
struct UMainMenuSubItemPanel_C_ExecuteUbergraph_MainMenuSubItemPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


