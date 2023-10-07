#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x10 (0x10 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.GetItemListWidget
struct UListWidgetJobAbilityWidget_C_GetItemListWidget_Params
{
public:
	TArray<class UMJListItemWidget*>             ListWidget;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.GetItemList
struct UListWidgetJobAbilityWidget_C_GetItemList_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ItemList;                                          // 0x0(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.GetItemLength
struct UListWidgetJobAbilityWidget_C_GetItemLength_Params
{
public:
	int32                                        Length;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.EnableSelect
struct UListWidgetJobAbilityWidget_C_EnableSelect_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.OnCursorUp
struct UListWidgetJobAbilityWidget_C_OnCursorUp_Params
{
public:
	bool                                         End;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.OnCursorDown
struct UListWidgetJobAbilityWidget_C_OnCursorDown_Params
{
public:
	bool                                         End;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.PlayOutFocus
struct UListWidgetJobAbilityWidget_C_PlayOutFocus_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.PlayFocus
struct UListWidgetJobAbilityWidget_C_PlayFocus_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.UpdateSelectCursor
struct UListWidgetJobAbilityWidget_C_UpdateSelectCursor_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D1 (0x1D1 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetCharacterData
struct UListWidgetJobAbilityWidget_C_SetCharacterData_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ShowSecondJob;                                     // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4D2 (0x4D2 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetSupportAbility
struct UListWidgetJobAbilityWidget_C_SetSupportAbility_Params
{
public:
	struct FJobData                              JobData;                                           // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                 AcquisitionData;                                   // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CharaID;                                           // 0xD8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetListCaption
struct UListWidgetJobAbilityWidget_C_SetListCaption_Params
{
public:
	class FName                                  CaptionText;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetSelectIndex
struct UListWidgetJobAbilityWidget_C_SetSelectIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.ExecuteUbergraph_ListWidgetJobAbilityWidget
struct UListWidgetJobAbilityWidget_C_ExecuteUbergraph_ListWidgetJobAbilityWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


