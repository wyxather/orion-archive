#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x60 (0x60 - 0x0)
// Function NarrationWidget.NarrationWidget_C.CheckNextStepForGroup
struct UNarrationWidget_C_CheckNextStepForGroup_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllFade;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_153E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartIndex;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EndIndex;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNextStep;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function NarrationWidget.NarrationWidget_C.CheckNextStep
struct UNarrationWidget_C_CheckNextStep_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNextStep;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function NarrationWidget.NarrationWidget_C.SetState
struct UNarrationWidget_C_SetState_Params
{
public:
	enum class ENARRATION_STATE                  State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function NarrationWidget.NarrationWidget_C.GetAllFadeAnim
struct UNarrationWidget_C_GetAllFadeAnim_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllFade;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function NarrationWidget.NarrationWidget_C.Get Event Fade Color
struct UNarrationWidget_C_Get_Event_Fade_Color_Params
{
public:
	struct FLinearColor                          OutSlateColor;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NarrationWidget.NarrationWidget_C.ResetFlashbackParam
struct UNarrationWidget_C_ResetFlashbackParam_Params
{
public:
	bool                                         AllReset;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5B (0x5B - 0x0)
// Function NarrationWidget.NarrationWidget_C.Update Flashback
struct UNarrationWidget_C_Update_Flashback_Params
{
public:
	bool                                         End;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function NarrationWidget.NarrationWidget_C.SettingGroupParam
struct UNarrationWidget_C_SettingGroupParam_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function NarrationWidget.NarrationWidget_C.UpdateGroupDrawMessage
struct UNarrationWidget_C_UpdateGroupDrawMessage_Params
{
public:
	bool                                         IsEnd;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5D (0x5D - 0x0)
// Function NarrationWidget.NarrationWidget_C.GetCurrentNarration
struct UNarrationWidget_C_GetCurrentNarration_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1541[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNarrationMessageWidgetBase*           CurrentLine;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D (0x4D - 0x0)
// Function NarrationWidget.NarrationWidget_C.IsNarrationGroupEnd
struct UNarrationWidget_C_IsNarrationGroupEnd_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ret;                                               // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function NarrationWidget.NarrationWidget_C.GetTextGroupLabel
struct UNarrationWidget_C_GetTextGroupLabel_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1542[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TextArray;                                         // 0x8(0x10)(Parm, OutParm)
};

// 0x1B1 (0x1B1 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OneLineDraw
struct UNarrationWidget_C_OneLineDraw_Params
{
public:
	class UNarrationMessageWidgetBase*           TargetObject;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TalkLabel;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextJustification;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableAnimation;                                  // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsVoiceSkip;                                       // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x16(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function NarrationWidget.NarrationWidget_C.UpdateDrawMessage
struct UNarrationWidget_C_UpdateDrawMessage_Params
{
public:
	bool                                         IsEnd;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6C (0x6C - 0x0)
// Function NarrationWidget.NarrationWidget_C.SetPlayPageMessage
struct UNarrationWidget_C_SetPlayPageMessage_Params
{
public:
	struct FNarrationDataBase                    Page;                                              // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function NarrationWidget.NarrationWidget_C.NextPage
struct UNarrationWidget_C_NextPage_Params
{
public:
	bool                                         IsEnd;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function NarrationWidget.NarrationWidget_C.IsRunning
struct UNarrationWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OnRightAxisX
struct UNarrationWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OnRightAxisY
struct UNarrationWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OnLeftAxisX
struct UNarrationWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OnGamePadAxisX
struct UNarrationWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OnGamePadAxisY
struct UNarrationWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OnListPaging
struct UNarrationWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.WorldMapSlowCursorX
struct UNarrationWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.WorldMapSlowCursorY
struct UNarrationWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.HelpScrollAxis
struct UNarrationWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NarrationWidget.NarrationWidget_C.Debug_Localization
struct UNarrationWidget_C_Debug_Localization_Params
{
public:
	bool                                         IsDebug;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function NarrationWidget.NarrationWidget_C.OnLeftAxisY
struct UNarrationWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function NarrationWidget.NarrationWidget_C.Tick
struct UNarrationWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NarrationWidget.NarrationWidget_C.Close
struct UNarrationWidget_C_Close_Params
{
public:
	bool                                         IsForceClose;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function NarrationWidget.NarrationWidget_C.SetAnimationMode
struct UNarrationWidget_C_SetAnimationMode_Params
{
public:
	bool                                         PassBGOpen;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PassBGClose;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function NarrationWidget.NarrationWidget_C.PlayNarration
struct UNarrationWidget_C_PlayNarration_Params
{
public:
	class FName                                  NarrationSetLabel;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function NarrationWidget.NarrationWidget_C.PlayNote
struct UNarrationWidget_C_PlayNote_Params
{
public:
	class FName                                  NoteLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBackground;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function NarrationWidget.NarrationWidget_C.NoticeCreatedWidget
struct UNarrationWidget_C_NoticeCreatedWidget_Params
{
public:
	enum class EWIDGET_CREATE_PHASE              CreatePhase;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x354 (0x354 - 0x0)
// Function NarrationWidget.NarrationWidget_C.ExecuteUbergraph_NarrationWidget
struct UNarrationWidget_C_ExecuteUbergraph_NarrationWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


