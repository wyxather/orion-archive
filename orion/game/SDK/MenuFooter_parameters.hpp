#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function MenuFooter.MenuFooter_C.IsUIPartsRunning
struct UMenuFooter_C_IsUIPartsRunning_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MenuFooter.MenuFooter_C.IsPlayingAnim
struct UMenuFooter_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function MenuFooter.MenuFooter_C.TextBranchByPlatform
struct UMenuFooter_C_TextBranchByPlatform_Params
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OutLabel;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MenuFooter.MenuFooter_C.GetCurrentGuideData
struct UMenuFooter_C_GetCurrentGuideData_Params
{
public:
	TArray<struct FGuideData>                    OutGuideData;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function MenuFooter.MenuFooter_C.SetHelpGameTextLabel
struct UMenuFooter_C_SetHelpGameTextLabel_Params
{
public:
	class FName                                  InText;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function MenuFooter.MenuFooter_C.PushGuideData
struct UMenuFooter_C_PushGuideData_Params
{
public:
	TArray<struct FGuideData>                    PushGudeData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x53 (0x53 - 0x0)
// Function MenuFooter.MenuFooter_C.SetHideButtonType
struct UMenuFooter_C_SetHideButtonType_Params
{
public:
	TArray<enum class ECONTROL_GUIDE_BUTTON_TYPE> ButtonType;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1C0 (0x1C0 - 0x0)
// Function MenuFooter.MenuFooter_C.RefreshGuideData
struct UMenuFooter_C_RefreshGuideData_Params
{
public:
	TArray<struct FGuideData>                    Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function MenuFooter.MenuFooter_C.ChangeText
struct UMenuFooter_C_ChangeText_Params
{
public:
	int32                                        GuideID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewTextLabe;                                       // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function MenuFooter.MenuFooter_C.RefreshHideButtonType
struct UMenuFooter_C_RefreshHideButtonType_Params
{
public:
	bool                                         RefreshTypeOnly;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function MenuFooter.MenuFooter_C.SetVisibleTextAndGuide
struct UMenuFooter_C_SetVisibleTextAndGuide_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MenuFooter.MenuFooter_C.SetTextOffset
struct UMenuFooter_C_SetTextOffset_Params
{
public:
	float                                        Offset;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x43 (0x43 - 0x0)
// Function MenuFooter.MenuFooter_C.UpdateMoveText
struct UMenuFooter_C_UpdateMoveText_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function MenuFooter.MenuFooter_C.SetHelpText
struct UMenuFooter_C_SetHelpText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3C (0x3C - 0x0)
// Function MenuFooter.MenuFooter_C.Tick
struct UMenuFooter_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MenuFooter.MenuFooter_C.ChangeInputMode
struct UMenuFooter_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function MenuFooter.MenuFooter_C.ExecuteUbergraph_MenuFooter
struct UMenuFooter_C_ExecuteUbergraph_MenuFooter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


