#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.SetCursorVisibility
struct UMainMenuItemPanel_C_SetCursorVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.SetTextVisible
struct UMainMenuItemPanel_C_SetTextVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.SetIMenuIconVisibility
struct UMainMenuItemPanel_C_SetIMenuIconVisibility_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.IsCancelAnimationPlaying
struct UMainMenuItemPanel_C_IsCancelAnimationPlaying_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.GetText
struct UMainMenuItemPanel_C_GetText_Params
{
public:
	class FText                                  ItemText;                                          // 0x0(0x18)(Parm, OutParm)
};

// 0x31 (0x31 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.SetMenuIcon
struct UMainMenuItemPanel_C_SetMenuIcon_Params
{
public:
	class FName                                  IconTexLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MaskTexLabel;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.StartOutFocusCancel
struct UMainMenuItemPanel_C_StartOutFocusCancel_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.StartOutFocusDecide
struct UMainMenuItemPanel_C_StartOutFocusDecide_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.GetMainMenuState
struct UMainMenuItemPanel_C_GetMainMenuState_Params
{
public:
	enum class EMAINMENUSTATE                    MainMenuState;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.NewIconEnable
struct UMainMenuItemPanel_C_NewIconEnable_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.ChangeEnable
struct UMainMenuItemPanel_C_ChangeEnable_Params
{
public:
	bool                                         UnEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NowSelect;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.SetupText_WithTextLabel
struct UMainMenuItemPanel_C_SetupText_WithTextLabel_Params
{
public:
	class FName                                  GameTextLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.SetupText_Direct
struct UMainMenuItemPanel_C_SetupText_Direct_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.Cancel
struct UMainMenuItemPanel_C_Cancel_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.PlayAnim
struct UMainMenuItemPanel_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fast;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.GetHeight
struct UMainMenuItemPanel_C_GetHeight_Params
{
public:
	float                                        Image_Size_Y;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.Decide
struct UMainMenuItemPanel_C_Decide_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.Focus
struct UMainMenuItemPanel_C_Focus_Params
{
public:
	bool                                         AnimFast;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FromUp;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.OutFocus
struct UMainMenuItemPanel_C_OutFocus_Params
{
public:
	bool                                         AnimFast;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MoveUp;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.GetCursorPosition
struct UMainMenuItemPanel_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function MainMenuItemPanel.MainMenuItemPanel_C.ExecuteUbergraph_MainMenuItemPanel
struct UMainMenuItemPanel_C_ExecuteUbergraph_MainMenuItemPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


