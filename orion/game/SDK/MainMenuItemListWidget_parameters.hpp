#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x25B (0x25B - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CheckHPMPAilment
struct UMainMenuItemListWidget_C_CheckHPMPAilment_Params
{
public:
	struct FMJListWidgetItemData                 TargetListData;                                    // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FItemData                             TargetItemData;                                    // 0xB8(0x120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Index;                                             // 0x1D8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.PlayHolyTorchEvent
struct UMainMenuItemListWidget_C_PlayHolyTorchEvent_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xE (0xE - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetEquipmentPart
struct UMainMenuItemListWidget_C_SetEquipmentPart_Params
{
public:
	enum class EEquipmentCategory                EquipCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.Fixed Remove Confilm Finish Callback
struct UMainMenuItemListWidget_C_Fixed_Remove_Confilm_Finish_Callback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OpenFixedRemoveConfirmDialog
struct UMainMenuItemListWidget_C_OpenFixedRemoveConfirmDialog_Params
{
public:
	int32                                        CharaID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x288 (0x288 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.GetParamText
struct UMainMenuItemListWidget_C_GetParamText_Params
{
public:
	struct FCharacterParam                       CharaParam;                                        // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FAilmentCharacterParam                AilmentParam;                                      // 0x34(0xD)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharaID;                                           // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ParamText;                                         // 0x48(0x18)(Parm, OutParm)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.Is Selected Equipment Item
struct UMainMenuItemListWidget_C_Is_Selected_Equipment_Item_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x15C (0x15C - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SettingEquipParam
struct UMainMenuItemListWidget_C_SettingEquipParam_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x279 (0x279 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.FocusEvent
struct UMainMenuItemListWidget_C_FocusEvent_Params
{
public:
	int32                                        CategoryIdx;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x202 (0x202 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.DecideItemEvent
struct UMainMenuItemListWidget_C_DecideItemEvent_Params
{
public:
	int32                                        CategoryIdx;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OnClosedSpecialItemFailedDialog
struct UMainMenuItemListWidget_C_OnClosedSpecialItemFailedDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5D (0x5D - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.GetAdcancedAbilityFinishCallback
struct UMainMenuItemListWidget_C_GetAdcancedAbilityFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OnSpecialItemUsed_PlayEvent
struct UMainMenuItemListWidget_C_OnSpecialItemUsed_PlayEvent_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.EndUseItem
struct UMainMenuItemListWidget_C_EndUseItem_Params
{
public:
	int32                                        NewParam;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x177 (0x177 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateItemTarget
struct UMainMenuItemListWidget_C_UpdateItemTarget_Params
{
public:
	struct FItemData                             InputPin;                                          // 0x0(0x120)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2BD (0x2BD - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OpenAilmentDialog
struct UMainMenuItemListWidget_C_OpenAilmentDialog_Params
{
public:
	int32                                        CharaID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDialog;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.AilmentDialogSetting
struct UMainMenuItemListWidget_C_AilmentDialogSetting_Params
{
public:
	struct FAilment                              Ailment;                                           // 0x0(0x49)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_170B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Type;                                              // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecGrow;                                          // 0x54(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x151 (0x151 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CheckSelectItemUsable
struct UMainMenuItemListWidget_C_CheckSelectItemUsable_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0x120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  ItemLabel;                                         // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELIST_ITEM_STATUS                 ReturnValue;                                       // 0x128(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3EC (0x3EC - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CreateListItem
struct UMainMenuItemListWidget_C_CreateListItem_Params
{
public:
	TArray<struct FMJListWidgetItemData>         ListWidgetItem;                                    // 0x0(0x10)(Parm, OutParm)
};

// 0x1E0 (0x1E0 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CreateCategory
struct UMainMenuItemListWidget_C_CreateCategory_Params
{
public:
	TArray<struct FListWidgetCategory>           ListWidgetCategory;                                // 0x0(0x10)(Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetupFooterUICharacterList
struct UMainMenuItemListWidget_C_SetupFooterUICharacterList_Params
{
public:
	bool                                         IsAllSelect;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetFooterUI
struct UMainMenuItemListWidget_C_SetFooterUI_Params
{
public:
	class UMenuFooter_C*                         FooterUI;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetPartyList
struct UMainMenuItemListWidget_C_SetPartyList_Params
{
public:
	class UPartyCharacterList_C*                 PartyList;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.ItemListEvent
struct UMainMenuItemListWidget_C_ItemListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1711[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.Tick
struct UMainMenuItemListWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CallListEvent
struct UMainMenuItemListWidget_C_CallListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1716[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function MainMenuItemListWidget.MainMenuItemListWidget_C.ExecuteUbergraph_MainMenuItemListWidget
struct UMainMenuItemListWidget_C_ExecuteUbergraph_MainMenuItemListWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


