#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.AfterLicenseAcquire
struct UGuildMenuWidget_C_AfterLicenseAcquire_Params
{
public:
	bool                                         IsClose;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.GetJobID
struct UGuildMenuWidget_C_GetJobID_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.IsRequiredAbility
struct UGuildMenuWidget_C_IsRequiredAbility_Params
{
public:
	bool                                         IsMoney;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.GetNeedMoney
struct UGuildMenuWidget_C_GetNeedMoney_Params
{
public:
	int32                                        Need_Money;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.IsRequiredMoney
struct UGuildMenuWidget_C_IsRequiredMoney_Params
{
public:
	bool                                         IsMoney;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.SetFooterText
struct UGuildMenuWidget_C_SetFooterText_Params
{
public:
	TArray<struct FGuideData>                    GuideData;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.EventRequestSetReOpenLicenseMenu
struct UGuildMenuWidget_C_EventRequestSetReOpenLicenseMenu_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.EventRequestSetReOpenSubMenu
struct UGuildMenuWidget_C_EventRequestSetReOpenSubMenu_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.EventRequestSetGetLicense
struct UGuildMenuWidget_C_EventRequestSetGetLicense_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.GetRequiredItemText
struct UGuildMenuWidget_C_GetRequiredItemText_Params
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(Parm, OutParm)
};

// 0x48 (0x48 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.GetTalkLabel
struct UGuildMenuWidget_C_GetTalkLabel_Params
{
public:
	TArray<class FName>                          Label;                                             // 0x0(0x10)(Parm, OutParm)
};

// 0x31 (0x31 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.GetCompleteEvent
struct UGuildMenuWidget_C_GetCompleteEvent_Params
{
public:
	class FName                                  EventLabel;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.ConfirmCallback
struct UGuildMenuWidget_C_ConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.AcquiredCallback
struct UGuildMenuWidget_C_AcquiredCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.TaskClear
struct UGuildMenuWidget_C_TaskClear_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.IsChangeStateCloseFinish
struct UGuildMenuWidget_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.ReOpenGuildMenu
struct UGuildMenuWidget_C_ReOpenGuildMenu_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.GetReOpenFlag
struct UGuildMenuWidget_C_GetReOpenFlag_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.EventRequest
struct UGuildMenuWidget_C_EventRequest_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.IsRunning
struct UGuildMenuWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.IsChangeStateOpenFinish
struct UGuildMenuWidget_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.SetState
struct UGuildMenuWidget_C_SetState_Params
{
public:
	enum class EGUILD_MENU_STATE                 NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.SetReference
struct UGuildMenuWidget_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.Init
struct UGuildMenuWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.IsCancelAnimationPlaying
struct UGuildMenuWidget_C_IsCancelAnimationPlaying_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.SetCursorPosFromState
struct UGuildMenuWidget_C_SetCursorPosFromState_Params
{
public:
	enum class EMAINMENUSTATE                    MainMenuState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimFast;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.SetCursorPosition
struct UGuildMenuWidget_C_SetCursorPosition_Params
{
public:
	int32                                        CursorPosition;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.GetSelectData
struct UGuildMenuWidget_C_GetSelectData_Params
{
public:
	class UMainMenuItemPanel_C*                  Item;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnRightAxisX
struct UGuildMenuWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnRightAxisY
struct UGuildMenuWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnLeftAxisX
struct UGuildMenuWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnLeftAxisY
struct UGuildMenuWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnGamePadAxisX
struct UGuildMenuWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnGamePadAxisY
struct UGuildMenuWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnListPaging
struct UGuildMenuWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.WorldMapSlowCursorX
struct UGuildMenuWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.WorldMapSlowCursorY
struct UGuildMenuWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.HelpScrollAxis
struct UGuildMenuWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.OnAnimationFinished
struct UGuildMenuWidget_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function GuildMenuWidget.GuildMenuWidget_C.ExecuteUbergraph_GuildMenuWidget
struct UGuildMenuWidget_C_ExecuteUbergraph_GuildMenuWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


