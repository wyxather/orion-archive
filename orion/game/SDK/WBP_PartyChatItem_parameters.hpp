#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.SetCursorVisibility
struct UWBP_PartyChatItem_C_SetCursorVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.PlayOutFocus
struct UWBP_PartyChatItem_C_PlayOutFocus_Params
{
public:
	bool                                         IsImmediate;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.PlayFocus
struct UWBP_PartyChatItem_C_PlayFocus_Params
{
public:
	bool                                         IsImmediate;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.Setup
struct UWBP_PartyChatItem_C_Setup_Params
{
public:
	struct FPartyChat                            PartyChatData;                                     // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.BP_OnItemExpansionChanged
struct UWBP_PartyChatItem_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.OnListItemObjectSet
struct UWBP_PartyChatItem_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.BP_OnItemSelectionChanged
struct UWBP_PartyChatItem_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.Tick
struct UWBP_PartyChatItem_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function WBP_PartyChatItem.WBP_PartyChatItem_C.ExecuteUbergraph_WBP_PartyChatItem
struct UWBP_PartyChatItem_C_ExecuteUbergraph_WBP_PartyChatItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


