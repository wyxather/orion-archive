#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function MainMenuList.MainMenuList_C.IsUIPartsRunning
struct UMainMenuList_C_IsUIPartsRunning_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuList.MainMenuList_C.IsPlayingAnim
struct UMainMenuList_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function MainMenuList.MainMenuList_C.SetCursorVisibility
struct UMainMenuList_C_SetCursorVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function MainMenuList.MainMenuList_C.GetSelectedListPanelPosition
struct UMainMenuList_C_GetSelectedListPanelPosition_Params
{
public:
	struct FVector2D                             ViewportPosition;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function MainMenuList.MainMenuList_C.GetMenuItemByType
struct UMainMenuList_C_GetMenuItemByType_Params
{
public:
	enum class EMAINMENUSTATE                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMainMenuItemPanel_C*                  MenuItem;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function MainMenuList.MainMenuList_C.IsCancelAnimationPlaying
struct UMainMenuList_C_IsCancelAnimationPlaying_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function MainMenuList.MainMenuList_C.SetCursorPosFromState
struct UMainMenuList_C_SetCursorPosFromState_Params
{
public:
	enum class EMAINMENUSTATE                    MainMenuState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimFast;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function MainMenuList.MainMenuList_C.SetCursorPosition
struct UMainMenuList_C_SetCursorPosition_Params
{
public:
	int32                                        CursorPosition;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MainMenuList.MainMenuList_C.SetEnable
struct UMainMenuList_C_SetEnable_Params
{
public:
	enum class EMAINMENUSTATE                    MenuType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuList.MainMenuList_C.GetSelectData
struct UMainMenuList_C_GetSelectData_Params
{
public:
	class UMainMenuItemPanel_C*                  Item;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function MainMenuList.MainMenuList_C.NowSelectCancel
struct UMainMenuList_C_NowSelectCancel_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function MainMenuList.MainMenuList_C.NowSelectDecide
struct UMainMenuList_C_NowSelectDecide_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuList.MainMenuList_C.OnAnimationFinished
struct UMainMenuList_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function MainMenuList.MainMenuList_C.Tick
struct UMainMenuList_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function MainMenuList.MainMenuList_C.OnPartyRefresh
struct UMainMenuList_C_OnPartyRefresh_Params
{
public:
	enum class ENOTICE_TYPE                      ENoticeType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_315[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           NoticeArgs;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x81 (0x81 - 0x0)
// Function MainMenuList.MainMenuList_C.ExecuteUbergraph_MainMenuList
struct UMainMenuList_C_ExecuteUbergraph_MainMenuList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


