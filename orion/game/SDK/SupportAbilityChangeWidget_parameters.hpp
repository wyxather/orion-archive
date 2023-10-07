#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.HelpScrollAxisEvent
struct USupportAbilityChangeWidget_C_HelpScrollAxisEvent_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.Init
struct USupportAbilityChangeWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12D (0x12D - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.GetNextEmptySupportSlot
struct USupportAbilityChangeWidget_C_GetNextEmptySupportSlot_Params
{
public:
	int32                                        NextSlot;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangePlayerSubjobChangeNone
struct USupportAbilityChangeWidget_C_ChangePlayerSubjobChangeNone_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x115 (0x115 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeCharacterCommon
struct USupportAbilityChangeWidget_C_ChangeCharacterCommon_Params
{
public:
	bool                                         Increment;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x648 (0x648 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetAbilityComparisionParameter
struct USupportAbilityChangeWidget_C_SetAbilityComparisionParameter_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        AbilitySlot;                                       // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityID;                                         // 0xF4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.GetSupportAbilityIDFromAbiliyList
struct USupportAbilityChangeWidget_C_GetSupportAbilityIDFromAbiliyList_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccess;                                         // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityID;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CalcCollectionParam
struct USupportAbilityChangeWidget_C_CalcCollectionParam_Params
{
public:
	struct FCharacterParam                       BaseParam;                                         // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FCharacterParam                       JobRevision;                                       // 0x34(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int32>                                CollectionParam;                                   // 0x68(0x10)(Parm, OutParm)
};

// 0x915 (0x915 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeSupportAbilityEvent
struct USupportAbilityChangeWidget_C_ChangeSupportAbilityEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1630[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x488 (0x488 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CreateSupportAbilityListItem
struct USupportAbilityChangeWidget_C_CreateSupportAbilityListItem_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListItem;                                          // 0x0(0x10)(Parm, OutParm)
	TArray<class FName>                          ShowAbilityList;                                   // 0x10(0x10)(Parm, OutParm)
	int32                                        EquipCount;                                        // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CreateSupportAbilityListCategory
struct USupportAbilityChangeWidget_C_CreateSupportAbilityListCategory_Params
{
public:
	struct FListWidgetCategory                   ListWidgetCategoryData;                            // 0x0(0x58)(Parm, OutParm)
};

// 0x98 (0x98 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OpenSupportAbilityList
struct USupportAbilityChangeWidget_C_OpenSupportAbilityList_Params
{
public:
	bool                                         PlayAnimation;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1FE (0x1FE - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CharacterDataUpdate
struct USupportAbilityChangeWidget_C_CharacterDataUpdate_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x510 (0x510 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetupCharacterParameter
struct USupportAbilityChangeWidget_C_SetupCharacterParameter_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.NowSelectCategoryFocus
struct USupportAbilityChangeWidget_C_NowSelectCategoryFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6C (0x6C - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.AddIntArray
struct USupportAbilityChangeWidget_C_AddIntArray_Params
{
public:
	TArray<int32>                                Base;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Add;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Result;                                            // 0x20(0x10)(Parm, OutParm)
};

// 0x2 (0x2 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.IsRunning
struct USupportAbilityChangeWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x348 (0x348 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetupPlayerData
struct USupportAbilityChangeWidget_C_SetupPlayerData_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x21 (0x21 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.UpdateCategoryCursor
struct USupportAbilityChangeWidget_C_UpdateCategoryCursor_Params
{
public:
	int32                                        NewCursor;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OpenAbilityStatus
struct USupportAbilityChangeWidget_C_OpenAbilityStatus_Params
{
public:
	TArray<struct FSavePlayerCharacterData>      CharacterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UListWidget_C*                         SupportAbilitySelectList;                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnRightAxisX
struct USupportAbilityChangeWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnRightAxisY
struct USupportAbilityChangeWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnLeftAxisX
struct USupportAbilityChangeWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnLeftAxisY
struct USupportAbilityChangeWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnGamePadAxisX
struct USupportAbilityChangeWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnGamePadAxisY
struct USupportAbilityChangeWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnListPaging
struct USupportAbilityChangeWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.WorldMapSlowCursorX
struct USupportAbilityChangeWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.WorldMapSlowCursorY
struct USupportAbilityChangeWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.HelpScrollAxis
struct USupportAbilityChangeWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.Tick
struct USupportAbilityChangeWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ExecuteUbergraph_SupportAbilityChangeWidget
struct USupportAbilityChangeWidget_C_ExecuteUbergraph_SupportAbilityChangeWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


