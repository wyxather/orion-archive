#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xA (0xA - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.GetState
struct UListCharacterWidget_C_GetState_Params
{
public:
	enum class ELIST_CHARACTER_CHANGE_STATE      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.PreCloseAction
struct UListCharacterWidget_C_PreCloseAction_Params
{
public:
	bool                                         Can_Close;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5A (0x5A - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.RemoveGuideData
struct UListCharacterWidget_C_RemoveGuideData_Params
{
public:
	TArray<struct FGuideData>                    TargetData;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ECONTROL_GUIDE_BUTTON_TYPE        Type;                                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    OutData;                                           // 0x18(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SetIsOpenInBar
struct UListCharacterWidget_C_SetIsOpenInBar_Params
{
public:
	bool                                         IsBar;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.IsFrameAnimationFinish
struct UListCharacterWidget_C_IsFrameAnimationFinish_Params
{
public:
	bool                                         Finish;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.Debug_DecideUI
struct UListCharacterWidget_C_Debug_DecideUI_Params
{
public:
	int32                                        Param;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SetIsRefreshPartyCharacter
struct UListCharacterWidget_C_SetIsRefreshPartyCharacter_Params
{
public:
	bool                                         IsRefreshPartyCharacter;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.GetMenuFooterRoot
struct UListCharacterWidget_C_GetMenuFooterRoot_Params
{
public:
	class UOverlay*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.GetPartyPanelRool
struct UListCharacterWidget_C_GetPartyPanelRool_Params
{
public:
	class UOverlay*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SetIsIgnoreFadeOnCloseWidget
struct UListCharacterWidget_C_SetIsIgnoreFadeOnCloseWidget_Params
{
public:
	bool                                         IsIgnoreFade;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SetupJoinNewMember
struct UListCharacterWidget_C_SetupJoinNewMember_Params
{
public:
	bool                                         IsAddFriendMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlayableCharacterID              NewCharacterID;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.RemoveCharacterConfirmCallback
struct UListCharacterWidget_C_RemoveCharacterConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.Init
struct UListCharacterWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.CanGetOutOfMainMember_1stSelect
struct UListCharacterWidget_C_CanGetOutOfMainMember_1stSelect_Params
{
public:
	int32                                        MainMemberID;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectable;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x43 (0x43 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.IsNewCharacterInMainMember
struct UListCharacterWidget_C_IsNewCharacterInMainMember_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.Setup Join New Member_OLD
struct UListCharacterWidget_C_Setup_Join_New_Member_OLD_Params
{
public:
	bool                                         IsAddFriendMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlayableCharacterID              NewCharacterID;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.CheckSubMemberPlayingMainMission
struct UListCharacterWidget_C_CheckSubMemberPlayingMainMission_Params
{
public:
	TArray<int32>                                PlayingSubMembers;                                 // 0x0(0x10)(Parm, OutParm)
};

// 0xA (0xA - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.PlaySeByLabel
struct UListCharacterWidget_C_PlaySeByLabel_Params
{
public:
	class FName                                  SELabel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopSelectSe;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22C (0x22C - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SelectCharacter_Second
struct UListCharacterWidget_C_SelectCharacter_Second_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SelectCharacter_First
struct UListCharacterWidget_C_SelectCharacter_First_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.CanGetOutOfMainMember
struct UListCharacterWidget_C_CanGetOutOfMainMember_Params
{
public:
	int32                                        MainMemberID;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectable;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.PlaySE
struct UListCharacterWidget_C_PlaySE_Params
{
public:
	enum class EMENU_SE_TYPE                     SeType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopSelectSe;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SelectAnima
struct UListCharacterWidget_C_SelectAnima_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.IsCursorSelect
struct UListCharacterWidget_C_IsCursorSelect_Params
{
public:
	int32                                        StateType;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelect;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.IsRunning
struct UListCharacterWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.DecideMainSelectCursor
struct UListCharacterWidget_C_DecideMainSelectCursor_Params
{
public:
	int32                                        Add;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AddDirection;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.AllRefrash
struct UListCharacterWidget_C_AllRefrash_Params
{
public:
	TArray<int32>                                MainMember;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                SubMember;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x108 (0x108 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.UpdateButtonY
struct UListCharacterWidget_C_UpdateButtonY_Params
{
public:
	bool                                         Rersult;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x45 (0x45 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.UpdateMainSelectCursor
struct UListCharacterWidget_C_UpdateMainSelectCursor_Params
{
public:
	bool                                         ForceAnim;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.DecideSubSelectCursor
struct UListCharacterWidget_C_DecideSubSelectCursor_Params
{
public:
	int32                                        Add;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AddDirection;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.UpdateDecide
struct UListCharacterWidget_C_UpdateDecide_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE9 (0xE9 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.AddLeftRightSelectCursor
struct UListCharacterWidget_C_AddLeftRightSelectCursor_Params
{
public:
	int32                                        Add;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D (0x6D - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.AddUpDownSelectCursor
struct UListCharacterWidget_C_AddUpDownSelectCursor_Params
{
public:
	int32                                        Add;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x46 (0x46 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.UpdateSubSelectCursor
struct UListCharacterWidget_C_UpdateSubSelectCursor_Params
{
public:
	bool                                         ForceAnim;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.IsClosingState
struct UListCharacterWidget_C_IsClosingState_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.SetSubMemberPanel
struct UListCharacterWidget_C_SetSubMemberPanel_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F3A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.EndStateEvent
struct UListCharacterWidget_C_EndStateEvent_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x390 (0x390 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.BeginStateEvent
struct UListCharacterWidget_C_BeginStateEvent_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.UpdateEvent
struct UListCharacterWidget_C_UpdateEvent_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnRightAxisX
struct UListCharacterWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnRightAxisY
struct UListCharacterWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnLeftAxisX
struct UListCharacterWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnLeftAxisY
struct UListCharacterWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnGamePadAxisX
struct UListCharacterWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnGamePadAxisY
struct UListCharacterWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnListPaging
struct UListCharacterWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.WorldMapSlowCursorX
struct UListCharacterWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.WorldMapSlowCursorY
struct UListCharacterWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.HelpScrollAxis
struct UListCharacterWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnBeginState
struct UListCharacterWidget_C_OnBeginState_Params
{
public:
	int32                                        PrevState;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentState;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnUpdateState
struct UListCharacterWidget_C_OnUpdateState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.OnEndState
struct UListCharacterWidget_C_OnEndState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextState;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.Tick
struct UListCharacterWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function ListCharacterWidget.ListCharacterWidget_C.ExecuteUbergraph_ListCharacterWidget
struct UListCharacterWidget_C_ExecuteUbergraph_ListCharacterWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


