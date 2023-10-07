#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x6 (0x6 - 0x0)
// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.IsPlayingParamAnimation
struct UWBP_CharacterPanelEquipParamItem_C_IsPlayingParamAnimation_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.PlayParamFadeIn
struct UWBP_CharacterPanelEquipParamItem_C_PlayParamFadeIn_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.PlayParamFadeOut
struct UWBP_CharacterPanelEquipParamItem_C_PlayParamFadeOut_Params
{
public:
	bool                                         First;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DBA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.SetParamVisible
struct UWBP_CharacterPanelEquipParamItem_C_SetParamVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x200 (0x200 - 0x0)
// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.SetupText
struct UWBP_CharacterPanelEquipParamItem_C_SetupText_Params
{
public:
	class FText                                  ParameterText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        ParamBefore;                                       // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParamAfter;                                        // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


