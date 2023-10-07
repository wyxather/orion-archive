#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1C (0x1C - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CheckCursorSubToMain
struct UMainMenuAbilityWidget_C_CheckCursorSubToMain_Params
{
public:
	int32                                        Cursor;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CheckCursorMainToSub
struct UMainMenuAbilityWidget_C_CheckCursorMainToSub_Params
{
public:
	int32                                        Cursor;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.GetHeader
struct UMainMenuAbilityWidget_C_GetHeader_Params
{
public:
	class UMenuHeader_C*                         PartsMenuHeader;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetSubMenuPosition
struct UMainMenuAbilityWidget_C_SetSubMenuPosition_Params
{
public:
	struct FVector2D                             Pos;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.Init
struct UMainMenuAbilityWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.GetAbilityCinfirmCallback
struct UMainMenuAbilityWidget_C_GetAbilityCinfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.PushPopSupportAbilityChange
struct UMainMenuAbilityWidget_C_PushPopSupportAbilityChange_Params
{
public:
	bool                                         IsPush;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.IsChangeStateCloseFinish
struct UMainMenuAbilityWidget_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetReference
struct UMainMenuAbilityWidget_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x33 (0x33 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetupAbilityListFocus
struct UMainMenuAbilityWidget_C_SetupAbilityListFocus_Params
{
public:
	int32                                        CategoryIdx;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemFocus;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SelectCategory;                                    // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallMainList;                                      // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20E (0x20E - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetJobListFocus
struct UMainMenuAbilityWidget_C_SetJobListFocus_Params
{
public:
	struct FSavePlayerCharacterData              TargetCharacterData;                               // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CheckMainJob;                                      // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ListFocus;                                         // 0xF4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Complete;                                          // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x410 (0x410 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.StartGetAbility
struct UMainMenuAbilityWidget_C_StartGetAbility_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FJobLearnAbility                      AbilityState;                                      // 0xF0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        JobID;                                             // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFB (0xFB - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UpdateAttachWidget
struct UMainMenuAbilityWidget_C_UpdateAttachWidget_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SubJobAbilityListEvent
struct UMainMenuAbilityWidget_C_SubJobAbilityListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ChangeActiveCommandAbilityList
struct UMainMenuAbilityWidget_C_ChangeActiveCommandAbilityList_Params
{
public:
	bool                                         ToSubJobList;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ItemFocus;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SelectCategory;                                    // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF4 (0xF4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.MainJobAbilityListEvent
struct UMainMenuAbilityWidget_C_MainJobAbilityListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x95 (0x95 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CreateListItemSubJob
struct UMainMenuAbilityWidget_C_CreateListItemSubJob_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListItem;                                          // 0x0(0x10)(Parm, OutParm)
	TArray<struct FJobLearnAbility>              JobLearnAbilityList;                               // 0x10(0x10)(Parm, OutParm)
};

// 0x178 (0x178 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CreateListItemMainJob
struct UMainMenuAbilityWidget_C_CreateListItemMainJob_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListItem;                                          // 0x0(0x10)(Parm, OutParm)
	TArray<struct FJobLearnAbility>              JobLearnAbilityList;                               // 0x10(0x10)(Parm, OutParm)
};

// 0x360 (0x360 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CreateCategory
struct UMainMenuAbilityWidget_C_CreateCategory_Params
{
public:
	TArray<struct FListWidgetCategory>           ListWidgetCategory;                                // 0x0(0x10)(Parm, OutParm)
};

// 0x3 (0x3 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ChangeSelectSubMenu
struct UMainMenuAbilityWidget_C_ChangeSelectSubMenu_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.PreCloseAction
struct UMainMenuAbilityWidget_C_PreCloseAction_Params
{
public:
	bool                                         CanClose;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.IsRunning
struct UMainMenuAbilityWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.TickEvent
struct UMainMenuAbilityWidget_C_TickEvent_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnRightAxisX
struct UMainMenuAbilityWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnRightAxisY
struct UMainMenuAbilityWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnLeftAxisX
struct UMainMenuAbilityWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnLeftAxisY
struct UMainMenuAbilityWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnGamePadAxisX
struct UMainMenuAbilityWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnGamePadAxisY
struct UMainMenuAbilityWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnListPaging
struct UMainMenuAbilityWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.WorldMapSlowCursorX
struct UMainMenuAbilityWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.WorldMapSlowCursorY
struct UMainMenuAbilityWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.HelpScrollAxis
struct UMainMenuAbilityWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.Tick
struct UMainMenuAbilityWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ExecuteUbergraph_MainMenuAbilityWidget
struct UMainMenuAbilityWidget_C_ExecuteUbergraph_MainMenuAbilityWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


