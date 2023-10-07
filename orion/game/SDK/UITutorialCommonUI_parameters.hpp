#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x3 (0x3 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.IsPlayingAnim
struct UUITutorialCommonUI_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.Check EpilogueAnimation
struct UUITutorialCommonUI_C_Check_EpilogueAnimation_Params
{
public:
	bool                                         Play;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.SetEndCardMode
struct UUITutorialCommonUI_C_SetEndCardMode_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.SetTextActive
struct UUITutorialCommonUI_C_SetTextActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1702[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TempleteType;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetTitle;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.AddTemplate
struct UUITutorialCommonUI_C_AddTemplate_Params
{
public:
	class UUITutorialTemplateBase*               AddTemplate;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.SetTitle
struct UUITutorialCommonUI_C_SetTitle_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.Set UIFocus
struct UUITutorialCommonUI_C_Set_UIFocus_Params
{
public:
	bool                                         Focus;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Fast;                                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsEpilouge;                                        // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function UITutorialCommonUI.UITutorialCommonUI_C.ExecuteUbergraph_UITutorialCommonUI
struct UUITutorialCommonUI_C_ExecuteUbergraph_UITutorialCommonUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


