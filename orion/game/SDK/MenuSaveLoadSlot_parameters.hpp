#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.SetCursorVisibility
struct UMenuSaveLoadSlot_C_SetCursorVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.IsDataEnabled_New
struct UMenuSaveLoadSlot_C_IsDataEnabled_New_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.PlayAnim
struct UMenuSaveLoadSlot_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.IsDataEnabled
struct UMenuSaveLoadSlot_C_IsDataEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.BP_OnItemExpansionChanged
struct UMenuSaveLoadSlot_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.Tick
struct UMenuSaveLoadSlot_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.OnListItemObjectSet
struct UMenuSaveLoadSlot_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.BP_OnItemSelectionChanged
struct UMenuSaveLoadSlot_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.ExecuteUbergraph_MenuSaveLoadSlot
struct UMenuSaveLoadSlot_C_ExecuteUbergraph_MenuSaveLoadSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


