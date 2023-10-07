#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.SetupFooterUI
struct UMainMenuTutorialListWidget_C_SetupFooterUI_Params
{
public:
	class UMenuFooter_C*                         FooterUI;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.CreateCategory
struct UMainMenuTutorialListWidget_C_CreateCategory_Params
{
public:
	TArray<struct FListWidgetCategory>           ListWidgetCategory;                                // 0x0(0x10)(Parm, OutParm)
};

// 0x32E (0x32E - 0x0)
// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.CreateListItem
struct UMainMenuTutorialListWidget_C_CreateListItem_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListWidgetItem;                                    // 0x0(0x10)(Parm, OutParm)
};

// 0x59 (0x59 - 0x0)
// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.TutorialListEvent
struct UMainMenuTutorialListWidget_C_TutorialListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.CallListEvent
struct UMainMenuTutorialListWidget_C_CallListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.Tick
struct UMainMenuTutorialListWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.ExecuteUbergraph_MainMenuTutorialListWidget
struct UMainMenuTutorialListWidget_C_ExecuteUbergraph_MainMenuTutorialListWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


