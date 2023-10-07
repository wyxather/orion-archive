#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2D2 (0x2D2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.PreCloseActionFromPartyChat
struct UMainMenuWidget_C_PreCloseActionFromPartyChat_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.EndState
struct UMainMenuWidget_C_EndState_Params
{
public:
	enum class EMAINMENUSTATE                    State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.BeginState
struct UMainMenuWidget_C_BeginState_Params
{
public:
	enum class EMAINMENUSTATE                    State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.Debug_GetStateInfoAsString
struct UMainMenuWidget_C_Debug_GetStateInfoAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.GetCurrentWidget
struct UMainMenuWidget_C_GetCurrentWidget_Params
{
public:
	class UKSUserWidgetBase*                     CurrentWidget;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.ClosingStackCheck
struct UMainMenuWidget_C_ClosingStackCheck_Params
{
public:
	bool                                         IsClosing;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.GetMainMenuList
struct UMainMenuWidget_C_GetMainMenuList_Params
{
public:
	class UMainMenuListBase*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.SequenceRequestCallback
struct UMainMenuWidget_C_SequenceRequestCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x445 (0x445 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.CanMainMenuClose
struct UMainMenuWidget_C_CanMainMenuClose_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x36A (0x36A - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.PreCloseAction
struct UMainMenuWidget_C_PreCloseAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OpenMissionRecordReOpen
struct UMainMenuWidget_C_OpenMissionRecordReOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OpenFastWorldMap
struct UMainMenuWidget_C_OpenFastWorldMap_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.IsFastWorldMapMode
struct UMainMenuWidget_C_IsFastWorldMapMode_Params
{
public:
	bool                                         FastWorldMapMode;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.BackTitleCallback
struct UMainMenuWidget_C_BackTitleCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.QuitGameCallBack
struct UMainMenuWidget_C_QuitGameCallBack_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.BindFinishCallback
struct UMainMenuWidget_C_BindFinishCallback_Params
{
public:
	class UKSUserWidgetBase*                     WidgetBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.UnBindFinishCallback
struct UMainMenuWidget_C_UnBindFinishCallback_Params
{
public:
	class UKSUserWidgetBase*                     TargetWidgetBase;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.SetStartState
struct UMainMenuWidget_C_SetStartState_Params
{
public:
	enum class EMAINMENUSTATE                    StartState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.Init
struct UMainMenuWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.IsChangeStateCloseFinish
struct UMainMenuWidget_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.IsChangeStateOpenFinish
struct UMainMenuWidget_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.SetReference
struct UMainMenuWidget_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.CheckSaving
struct UMainMenuWidget_C_CheckSaving_Params
{
public:
	bool                                         Saving;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.LeftAxisY
struct UMainMenuWidget_C_LeftAxisY_Params
{
public:
	float                                        AxisYValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gamepad;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.LeftAxisX
struct UMainMenuWidget_C_LeftAxisX_Params
{
public:
	float                                        AxisXValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gamepad;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.CheckSubmenuPlayingAnim
struct UMainMenuWidget_C_CheckSubmenuPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.CheckEventPreview
struct UMainMenuWidget_C_CheckEventPreview_Params
{
public:
	bool                                         IsEventPreview;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.ChangeFormationCancel
struct UMainMenuWidget_C_ChangeFormationCancel_Params
{
public:
	bool                                         PlaySE;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSelectAnima;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5B (0x5B - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.RequestChangeFormation
struct UMainMenuWidget_C_RequestChangeFormation_Params
{
public:
	int32                                        ChangePartyIndex1;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChangePartyIndex2;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccess;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.IsRunning
struct UMainMenuWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4B (0x4B - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.CheckWidgetPlayingAnim
struct UMainMenuWidget_C_CheckWidgetPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.RightAxisY
struct UMainMenuWidget_C_RightAxisY_Params
{
public:
	float                                        AxisYValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.RightAxisX
struct UMainMenuWidget_C_RightAxisX_Params
{
public:
	float                                        AxisXValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.PlayAnim
struct UMainMenuWidget_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.PreChangeMainState
struct UMainMenuWidget_C_PreChangeMainState_Params
{
public:
	enum class EMAINMENUSTATE                    NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.ChangeMainState
struct UMainMenuWidget_C_ChangeMainState_Params
{
public:
	enum class EMAINMENUSTATE                    NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OnListPaging
struct UMainMenuWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.HelpScrollAxis
struct UMainMenuWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OnRightAxisX
struct UMainMenuWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OnRightAxisY
struct UMainMenuWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OnLeftAxisX
struct UMainMenuWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OnLeftAxisY
struct UMainMenuWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OnGamePadAxisX
struct UMainMenuWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.OnGamePadAxisY
struct UMainMenuWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.WorldMapSlowCursorX
struct UMainMenuWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.WorldMapSlowCursorY
struct UMainMenuWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget
struct UMainMenuWidget_C_ExecuteUbergraph_MainMenuWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


