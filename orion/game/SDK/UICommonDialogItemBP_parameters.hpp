#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetCursorVisibility
struct UUICommonDialogItemBP_C_SetCursorVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetBlood
struct UUICommonDialogItemBP_C_SetBlood_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UICommonDialogItemBP.UICommonDialogItemBP_C.GetFocus
struct UUICommonDialogItemBP_C_GetFocus_Params
{
public:
	bool                                         IsFocus;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function UICommonDialogItemBP.UICommonDialogItemBP_C.GetFinisAnimation
struct UUICommonDialogItemBP_C_GetFinisAnimation_Params
{
public:
	bool                                         IsFinish;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetText
struct UUICommonDialogItemBP_C_SetText_Params
{
public:
	class FText                                  ShowText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetUIFocus
struct UUICommonDialogItemBP_C_SetUIFocus_Params
{
public:
	bool                                         Focus;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Fast;                                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


