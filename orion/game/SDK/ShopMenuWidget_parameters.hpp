#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x9 (0x9 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetCursorPosition
struct UShopMenuWidget_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CursorRight
struct UShopMenuWidget_C_CursorRight_Params
{
public:
	bool                                         MenuDecide;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CursorLeft
struct UShopMenuWidget_C_CursorLeft_Params
{
public:
	bool                                         MenuCancel;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.DecideMenu
struct UShopMenuWidget_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CancelMenu
struct UShopMenuWidget_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetMenuRelativePos
struct UShopMenuWidget_C_GetMenuRelativePos_Params
{
public:
	struct FVector2D                             RelativePos;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftSuccessDialog
struct UShopMenuWidget_C_OnClosedPreOrderGiftSuccessDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftOrverDialog
struct UShopMenuWidget_C_OnClosedPreOrderGiftOrverDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftCompletedDialog
struct UShopMenuWidget_C_OnClosedPreOrderGiftCompletedDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB3 (0xB3 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftConfirmDialog
struct UShopMenuWidget_C_OnClosedPreOrderGiftConfirmDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.MakeBarCommands
struct UShopMenuWidget_C_MakeBarCommands_Params
{
public:
	TArray<enum class ESHOPMENU_MODE>            ShopCommands_Bar;                                  // 0x0(0x10)(Parm, OutParm)
};

// 0xC1 (0xC1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedPurchaseItemData
struct UShopMenuWidget_C_GetSelectedPurchaseItemData_Params
{
public:
	struct FPurchaseItemInfoData                 Output;                                            // 0x0(0x60)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetINNSequenceState
struct UShopMenuWidget_C_SetINNSequenceState_Params
{
public:
	enum class EINN_SequenceState                NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OpenRemoveFixedEquipPartDialog
struct UShopMenuWidget_C_OpenRemoveFixedEquipPartDialog_Params
{
public:
	int32                                        CharaID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.Set Equipment Part from Item Category
struct UShopMenuWidget_C_Set_Equipment_Part_from_Item_Category_Params
{
public:
	enum class EEquipmentCategory                EquipCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetMenuItemEnable
struct UShopMenuWidget_C_GetMenuItemEnable_Params
{
public:
	enum class ESHOPMENU_MODE                    Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.Is Party Status Show
struct UShopMenuWidget_C_Is_Party_Status_Show_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.Check Marchant Action
struct UShopMenuWidget_C_Check_Marchant_Action_Params
{
public:
	bool                                         Exec;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.RemoveFixedConfirmDialogCallback
struct UShopMenuWidget_C_RemoveFixedConfirmDialogCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.IsAnimalShop
struct UShopMenuWidget_C_IsAnimalShop_Params
{
public:
	bool                                         IsAnimalShop;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CompleteTrade_FromAnimalBuy
struct UShopMenuWidget_C_CompleteTrade_FromAnimalBuy_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.IsPlayingMenuItemAnimaton
struct UShopMenuWidget_C_IsPlayingMenuItemAnimaton_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CallbackLinerShipNotification
struct UShopMenuWidget_C_CallbackLinerShipNotification_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1715[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.RequestLevelChangeByLinerShip
struct UShopMenuWidget_C_RequestLevelChangeByLinerShip_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x760 (0x760 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetupTopMenuItem_LinerShip
struct UShopMenuWidget_C_SetupTopMenuItem_LinerShip_Params
{
public:
	int32                                        ListItemIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESHOPMENU_MODE                    MenuMode;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A6 (0x1A6 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetupTopMenuItem
struct UShopMenuWidget_C_SetupTopMenuItem_Params
{
public:
	int32                                        ListItemIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESHOPMENU_MODE                    MenuMode;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetTopMenuActiveItem
struct UShopMenuWidget_C_GetTopMenuActiveItem_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1717[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMainMenuItemPanel_C*                  SelectedMenuItem;                                  // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.MenuIconInit_DEPRECATED
struct UShopMenuWidget_C_MenuIconInit_DEPRECATED_Params
{
public:
	enum class ESHOPMENU_MODE                    MenuMode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.EquipChangeConfirmCallback
struct UShopMenuWidget_C_EquipChangeConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.InnConfirmCallback
struct UShopMenuWidget_C_InnConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.BuySellConfirmCallback
struct UShopMenuWidget_C_BuySellConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.IsChangeStateOpenFinish
struct UShopMenuWidget_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetReference
struct UShopMenuWidget_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.IsChangeStateCloseFinish
struct UShopMenuWidget_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CalcTradeMaxForSell
struct UShopMenuWidget_C_CalcTradeMaxForSell_Params
{
public:
	int32                                        FixedTradeCount;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CalcTradeMaxForBuy
struct UShopMenuWidget_C_CalcTradeMaxForBuy_Params
{
public:
	int32                                        FixedTradeCount;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.IsMenuSelectable
struct UShopMenuWidget_C_IsMenuSelectable_Params
{
public:
	enum class ESHOPMENU_MODE                    ShopMode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectable;                                      // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.QcEqp_MoveCursor
struct UShopMenuWidget_C_QcEqp_MoveCursor_Params
{
public:
	int32                                        MoveValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CanAnyEquipItem
struct UShopMenuWidget_C_CanAnyEquipItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.PlayMenuAnimation
struct UShopMenuWidget_C_PlayMenuAnimation_Params
{
public:
	class UWidgetAnimation*                      NewAnimation;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetPrevState_Local
struct UShopMenuWidget_C_GetPrevState_Local_Params
{
public:
	enum class ESHOPMENU_STATE                   CurrentState;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.IsClosingState
struct UShopMenuWidget_C_IsClosingState_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_Sell
struct UShopMenuWidget_C_StartMenuMode_Sell_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetGuideUI
struct UShopMenuWidget_C_SetGuideUI_Params
{
public:
	bool                                         ForceTopGuide;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF9 (0xF9 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetCategoryDataByMode
struct UShopMenuWidget_C_SetCategoryDataByMode_Params
{
public:
	bool                                         IsBuy;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsAnimal;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.RefreshTopMenuFocus
struct UShopMenuWidget_C_RefreshTopMenuFocus_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.IsRunning
struct UShopMenuWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetCurrentState_Local
struct UShopMenuWidget_C_GetCurrentState_Local_Params
{
public:
	enum class ESHOPMENU_STATE                   CurrentState;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetNextState_Local
struct UShopMenuWidget_C_SetNextState_Local_Params
{
public:
	enum class ESHOPMENU_STATE                   NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnEndState_Local
struct UShopMenuWidget_C_OnEndState_Local_Params
{
public:
	enum class ESHOPMENU_STATE                   CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESHOPMENU_STATE                   NextState;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnBeginState_Local
struct UShopMenuWidget_C_OnBeginState_Local_Params
{
public:
	enum class ESHOPMENU_STATE                   PrevState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESHOPMENU_STATE                   CurrentState;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B (0x2B - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnUpdate_Local
struct UShopMenuWidget_C_OnUpdate_Local_Params
{
public:
	enum class ESHOPMENU_STATE                   CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CreateCategoryData
struct UShopMenuWidget_C_CreateCategoryData_Params
{
public:
	bool                                         IsBuy;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.LimitTradeItemNum
struct UShopMenuWidget_C_LimitTradeItemNum_Params
{
public:
	bool                                         IsCountup;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1737[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.UpdatePossessionItemNum
struct UShopMenuWidget_C_UpdatePossessionItemNum_Params
{
public:
	int32                                        ItemIdx;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1738[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         WidgetItems;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                          ItemLabels;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x110 (0x110 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetupShopInfo
struct UShopMenuWidget_C_SetupShopInfo_Params
{
public:
	class FName                                  ShopLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedItemLabel
struct UShopMenuWidget_C_GetSelectedItemLabel_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A0 (0x3A0 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CompleteTrade
struct UShopMenuWidget_C_CompleteTrade_Params
{
public:
	bool                                         IsCompleted;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x170 (0x170 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedProductData
struct UShopMenuWidget_C_GetSelectedProductData_Params
{
public:
	struct FMJListWidgetItemData                 Product;                                           // 0x0(0xB8)(Parm, OutParm)
};

// 0x249 (0x249 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedItemData
struct UShopMenuWidget_C_GetSelectedItemData_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x120)(Parm, OutParm)
};

// 0x1DA (0x1DA - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.ListEventCallback
struct UShopMenuWidget_C_ListEventCallback_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1739[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.ChangeState_SelectNum
struct UShopMenuWidget_C_ChangeState_SelectNum_Params
{
public:
	bool                                         CanTrade;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.CreateShopCategoryAll
struct UShopMenuWidget_C_CreateShopCategoryAll_Params
{
public:
	class FName                                  ShopLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAnimalShop;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.UpdateTopMenuFocus
struct UShopMenuWidget_C_UpdateTopMenuFocus_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUp;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.MenuSelectItem
struct UShopMenuWidget_C_MenuSelectItem_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.Is Playing All Animation 
struct UShopMenuWidget_C_Is_Playing_All_Animation__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetRightAxisX
struct UShopMenuWidget_C_GetRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetRightAxisY
struct UShopMenuWidget_C_GetRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetLeftAxisX
struct UShopMenuWidget_C_GetLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetLeftAxisY
struct UShopMenuWidget_C_GetLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetGamePadAxisX
struct UShopMenuWidget_C_GetGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.GetGamePadAxisY
struct UShopMenuWidget_C_GetGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SubMenu_WorldMapSlowCursorX
struct UShopMenuWidget_C_SubMenu_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SubMenu_WorldMapSlowCursorY
struct UShopMenuWidget_C_SubMenu_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnRightAxisX
struct UShopMenuWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnRightAxisY
struct UShopMenuWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnLeftAxisX
struct UShopMenuWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnLeftAxisY
struct UShopMenuWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnGamePadAxisX
struct UShopMenuWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnGamePadAxisY
struct UShopMenuWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnListPaging
struct UShopMenuWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.WorldMapSlowCursorX
struct UShopMenuWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.WorldMapSlowCursorY
struct UShopMenuWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.HelpScrollAxis
struct UShopMenuWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnUpdateState
struct UShopMenuWidget_C_OnUpdateState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnBeginState
struct UShopMenuWidget_C_OnBeginState_Params
{
public:
	int32                                        PrevState;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentState;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.OnEndState
struct UShopMenuWidget_C_OnEndState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextState;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.Tick
struct UShopMenuWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.SetParam
struct UShopMenuWidget_C_SetParam_Params
{
public:
	class FName                                  ShopLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceDefaultBar;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FromNPC;                                           // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function ShopMenuWidget.ShopMenuWidget_C.ExecuteUbergraph_ShopMenuWidget
struct UShopMenuWidget_C_ExecuteUbergraph_ShopMenuWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


