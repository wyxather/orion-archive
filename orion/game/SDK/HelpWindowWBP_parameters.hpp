#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x110 (0x110 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.RefreshText
struct UHelpWindowWBP_C_RefreshText_Params
{
public:
	enum class EKSUseInputType                   InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.FlipHelpWindow
struct UHelpWindowWBP_C_FlipHelpWindow_Params
{
public:
	bool                                         IsFlip;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBC (0xBC - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.SetPositionByWidget
struct UHelpWindowWBP_C_SetPositionByWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceFlip;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.ScrollAxis
struct UHelpWindowWBP_C_ScrollAxis_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.SetTextLabel
struct UHelpWindowWBP_C_SetTextLabel_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.Init
struct UHelpWindowWBP_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.IsPlayingCloseAnim
struct UHelpWindowWBP_C_IsPlayingCloseAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.SetNextState
struct UHelpWindowWBP_C_SetNextState_Params
{
public:
	int32                                        NextState;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.PlayAnim
struct UHelpWindowWBP_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.SetGameText
struct UHelpWindowWBP_C_SetGameText_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.SetText
struct UHelpWindowWBP_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3C (0x3C - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.Tick
struct UHelpWindowWBP_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.ChangeInputMode
struct UHelpWindowWBP_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function HelpWindowWBP.HelpWindowWBP_C.ExecuteUbergraph_HelpWindowWBP
struct UHelpWindowWBP_C_ExecuteUbergraph_HelpWindowWBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


