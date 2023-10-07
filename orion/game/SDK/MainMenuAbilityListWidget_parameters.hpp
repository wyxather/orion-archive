#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x141 (0x141 - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UpdateAbilityTarget
struct UMainMenuAbilityListWidget_C_UpdateAbilityTarget_Params
{
public:
	struct FAbilityDataBase                      ABILITY;                                           // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         OutFocusFast;                                      // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetPartyList
struct UMainMenuAbilityListWidget_C_SetPartyList_Params
{
public:
	class UPartyCharacterList_C*                 PartyListUI;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x204 (0x204 - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CheckSelectAbility
struct UMainMenuAbilityListWidget_C_CheckSelectAbility_Params
{
public:
	struct FAbilityDataBase                      AbilityData;                                       // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSavePlayerCharacterData              CharaData;                                         // 0xF0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         HasCompensationMagic;                              // 0x1E0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ELIST_ITEM_STATUS                 ReturnValue;                                       // 0x1E1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4AC (0x4AC - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CreateListItemCommon
struct UMainMenuAbilityListWidget_C_CreateListItemCommon_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FJobLearnAbility>              JobAbility;                                        // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                 AcquisitionFlag;                                   // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CategoryType;                                      // 0x110(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         ListWidgetItemData;                                // 0x118(0x10)(Parm, OutParm)
	TArray<struct FAbilityDataBase>              AbilityList;                                       // 0x128(0x10)(Parm, OutParm)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetupFooterUICharacterList
struct UMainMenuAbilityListWidget_C_SetupFooterUICharacterList_Params
{
public:
	bool                                         IsAllSelect;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetFooterUI
struct UMainMenuAbilityListWidget_C_SetFooterUI_Params
{
public:
	class UMenuFooter_C*                         FooterUI;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.AbilityListEvent
struct UMainMenuAbilityListWidget_C_AbilityListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1705[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2BC (0x2BC - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CreateListItem
struct UMainMenuAbilityListWidget_C_CreateListItem_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListWidgetItem;                                    // 0x0(0x10)(Parm, OutParm)
};

// 0x368 (0x368 - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CreateCategory
struct UMainMenuAbilityListWidget_C_CreateCategory_Params
{
public:
	TArray<struct FListWidgetCategory>           ListWidgetCategory;                                // 0x0(0x10)(Parm, OutParm)
};

// 0x3C (0x3C - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.Tick
struct UMainMenuAbilityListWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CallListEvent
struct UMainMenuAbilityListWidget_C_CallListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1706[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.ExecuteUbergraph_MainMenuAbilityListWidget
struct UMainMenuAbilityListWidget_C_ExecuteUbergraph_MainMenuAbilityListWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


