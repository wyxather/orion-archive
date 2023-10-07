#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x20 (0x20 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MonsterReleaseCallback_OnTameCancel
struct UFieldCommandWidgetMonster_C_MonsterReleaseCallback_OnTameCancel_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ProcessMonsterCallback_OnTameCancel
struct UFieldCommandWidgetMonster_C_ProcessMonsterCallback_OnTameCancel_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MonsterProcessCallback_OnTameCancel
struct UFieldCommandWidgetMonster_C_MonsterProcessCallback_OnTameCancel_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C0 (0x4C0 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenTameCancelDialog
struct UFieldCommandWidgetMonster_C_OpenTameCancelDialog_Params
{
public:
	struct FInvadeData                           InvadeData;                                        // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x610 (0x610 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenProcessConfirmDialog
struct UFieldCommandWidgetMonster_C_OpenProcessConfirmDialog_Params
{
public:
	struct FInvadeData                           InvadeData;                                        // 0x0(0x128)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsNewMonsterInbattle;                              // 0x128(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.PlayProcessEnemyEvent
struct UFieldCommandWidgetMonster_C_PlayProcessEnemyEvent_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetStartableProcessEnemyEventLabel
struct UFieldCommandWidgetMonster_C_GetStartableProcessEnemyEventLabel_Params
{
public:
	class FName                                  EventLabel;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetSelectedMonsterProcessItemData
struct UFieldCommandWidgetMonster_C_GetSelectedMonsterProcessItemData_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x8(0x18)(Parm, OutParm)
	int32                                        ProcessNum;                                        // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetMonsterProcessItemData
struct UFieldCommandWidgetMonster_C_GetMonsterProcessItemData_Params
{
public:
	struct FInvadeData                           InvadeData;                                        // 0x0(0x128)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  ItemLabel;                                         // 0x128(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x130(0x18)(Parm, OutParm)
	int32                                        ProcessNum;                                        // 0x148(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B8 (0x3B8 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetProcessItemData
struct UFieldCommandWidgetMonster_C_GetProcessItemData_Params
{
public:
	struct FInvadeData                           Out_Row;                                           // 0x0(0x128)(Parm, OutParm)
};

// 0x139 (0x139 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetProcessItemID
struct UFieldCommandWidgetMonster_C_GetProcessItemID_Params
{
public:
	class FName                                  ProcessedItem;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetRemainCallCount
struct UFieldCommandWidgetMonster_C_GetRemainCallCount_Params
{
public:
	int32                                        CallCount;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.IsEnableProcessItem
struct UFieldCommandWidgetMonster_C_IsEnableProcessItem_Params
{
public:
	int32                                        ListItemIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x279 (0x279 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.IsEnableProcessItemByInvadeData
struct UFieldCommandWidgetMonster_C_IsEnableProcessItemByInvadeData_Params
{
public:
	struct FInvadeData                           InvadeData;                                        // 0x0(0x128)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Enable;                                            // 0x128(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ProcessMonsterCallback
struct UFieldCommandWidgetMonster_C_ProcessMonsterCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetReleaseMonsterList
struct UFieldCommandWidgetMonster_C_GetReleaseMonsterList_Params
{
public:
	TArray<int32>                                ReleaseMonsterList;                                // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.CloseMonsterReleaseDialog
struct UFieldCommandWidgetMonster_C_CloseMonsterReleaseDialog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenMonsterReleaseDialogInBattle
struct UFieldCommandWidgetMonster_C_OpenMonsterReleaseDialogInBattle_Params
{
public:
	TArray<struct FMonsterListData>              ShowMonsterList;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenMonsterReleaseDialog
struct UFieldCommandWidgetMonster_C_OpenMonsterReleaseDialog_Params
{
public:
	TArray<struct FMonsterListData>              ShowMonsterList;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetDialogInput
struct UFieldCommandWidgetMonster_C_GetDialogInput_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MonsterReleaseCallback
struct UFieldCommandWidgetMonster_C_MonsterReleaseCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.SetReference
struct UFieldCommandWidgetMonster_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ListBind
struct UFieldCommandWidgetMonster_C_ListBind_Params
{
public:
	int32                                        SelectedCursor;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.IsRunning
struct UFieldCommandWidgetMonster_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x131 (0x131 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ListSelectEvent
struct UFieldCommandWidgetMonster_C_ListSelectEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenReleaseDialog
struct UFieldCommandWidgetMonster_C_OpenReleaseDialog_Params
{
public:
	TArray<struct FMonsterListData>              ShowMonsterList;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x479 (0x479 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MakeMonsterListData
struct UFieldCommandWidgetMonster_C_MakeMonsterListData_Params
{
public:
	TArray<struct FMonsterListData>              ShowMonsterList;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnRightAxisX
struct UFieldCommandWidgetMonster_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnRightAxisY
struct UFieldCommandWidgetMonster_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnLeftAxisX
struct UFieldCommandWidgetMonster_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnLeftAxisY
struct UFieldCommandWidgetMonster_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnGamePadAxisX
struct UFieldCommandWidgetMonster_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnGamePadAxisY
struct UFieldCommandWidgetMonster_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnListPaging
struct UFieldCommandWidgetMonster_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.WorldMapSlowCursorX
struct UFieldCommandWidgetMonster_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.WorldMapSlowCursorY
struct UFieldCommandWidgetMonster_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.HelpScrollAxis
struct UFieldCommandWidgetMonster_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.Tick
struct UFieldCommandWidgetMonster_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ExecuteUbergraph_FieldCommandWidgetMonster
struct UFieldCommandWidgetMonster_C_ExecuteUbergraph_FieldCommandWidgetMonster_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


