#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.IsEnableScrollBar
struct UBattleCommandMenu_C_IsEnableScrollBar_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OpenPotentialityActionMenu
struct UBattleCommandMenu_C_OpenPotentialityActionMenu_Params
{
public:
	class ABattlePlayerBP_C*                     PlayerParam;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.UpdatePartyChangeUI
struct UBattleCommandMenu_C_UpdatePartyChangeUI_Params
{
public:
	bool                                         PartyChangeEnable;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.Initialize Party Change
struct UBattleCommandMenu_C_Initialize_Party_Change_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetPreparationCommandText
struct UBattleCommandMenu_C_GetPreparationCommandText_Params
{
public:
	enum class ECOMMAND_SUB_MENU_TYPE            SubMenuType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CommandText;                                       // 0x8(0x18)(Parm, OutParm)
};

// 0x48 (0x48 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetPreparationAttributeIcon
struct UBattleCommandMenu_C_GetPreparationAttributeIcon_Params
{
public:
	bool                                         IsBattlePreparationMode;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON> Array;                                             // 0x8(0x10)(Parm, OutParm)
};

// 0x3 (0x3 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetRestrictPotentialityAction
struct UBattleCommandMenu_C_SetRestrictPotentialityAction_Params
{
public:
	bool                                         IsRestrict;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetRestrictBoost
struct UBattleCommandMenu_C_SetRestrictBoost_Params
{
public:
	bool                                         IsRestrict;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E9 (0x1E9 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.IsEquipedWeaponByAilment
struct UBattleCommandMenu_C_IsEquipedWeaponByAilment_Params
{
public:
	enum class EAILMENT_TYPE                     AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWEAPON_CATEGORY                  EquipmentCategory;                                 // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.CheckSelectSwitchAttribute
struct UBattleCommandMenu_C_CheckSelectSwitchAttribute_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.Get Select Menu Item Buttom Positon
struct UBattleCommandMenu_C_Get_Select_Menu_Item_Buttom_Positon_Params
{
public:
	struct FVector2D                             ViewportPosition;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             WidgetSize;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x285 (0x285 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.UpdatePreparationMenuItem
struct UBattleCommandMenu_C_UpdatePreparationMenuItem_Params
{
public:
	class ABattleCommandMenuActorBP_C*           CommandMenuActor;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetSelectPreparationMaterial
struct UBattleCommandMenu_C_SetSelectPreparationMaterial_Params
{
public:
	enum class ECOMMAND_SUB_MENU_TYPE            SelectPreparationMaterial;                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpdateMenuItem;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCB (0xCB - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.CheckSelectPreparation
struct UBattleCommandMenu_C_CheckSelectPreparation_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.UpdateAddInfo
struct UBattleCommandMenu_C_UpdateAddInfo_Params
{
public:
	TArray<struct FCommandMenuItem>              MenuItem;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.AddMonsterCountWidget
struct UBattleCommandMenu_C_AddMonsterCountWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetEnableBoostHelp
struct UBattleCommandMenu_C_SetEnableBoostHelp_Params
{
public:
	bool                                         EnableBoostHelp;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.Initialize Potentiality Action Text
struct UBattleCommandMenu_C_Initialize_Potentiality_Action_Text_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x115 (0x115 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.UpdatePotentialityActionUI
struct UBattleCommandMenu_C_UpdatePotentialityActionUI_Params
{
public:
	class ABattlePlayerBP_C*                     PlayerParam;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetInvadeMode
struct UBattleCommandMenu_C_SetInvadeMode_Params
{
public:
	bool                                         InvadeMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetCommandWidget
struct UBattleCommandMenu_C_GetCommandWidget_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleCommandMenuItem_C*              TextWidget;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetAbilityCostText
struct UBattleCommandMenu_C_GetAbilityCostText_Params
{
public:
	class ABattlePlayerBP_C*                     Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      ABILITY;                                           // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  AddText;                                           // 0xF8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Text;                                              // 0x110(0x18)(Parm, OutParm)
};

// 0x2C (0x2C - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.MoveMenuCursor
struct UBattleCommandMenu_C_MoveMenuCursor_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetMenuIndex
struct UBattleCommandMenu_C_GetMenuIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.CheckActiveItem
struct UBattleCommandMenu_C_CheckActiveItem_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetFloorIndex
struct UBattleCommandMenu_C_SetFloorIndex_Params
{
public:
	int32                                        Floor;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetSubMenuName
struct UBattleCommandMenu_C_GetSubMenuName_Params
{
public:
	class FName                                  MenuName;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetSubMenuName
struct UBattleCommandMenu_C_SetSubMenuName_Params
{
public:
	class FName                                  MenuName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetSelectIndex
struct UBattleCommandMenu_C_GetSelectIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x251 (0x251 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.GetSelectCommandMenuItem
struct UBattleCommandMenu_C_GetSelectCommandMenuItem_Params
{
public:
	struct FCommandMenuItem                      Command;                                           // 0x0(0xBF)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_13FC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         FindMenuItem;                                      // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.CheckSelectNormalAttack
struct UBattleCommandMenu_C_CheckSelectNormalAttack_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.ChangeAttributeIcon
struct UBattleCommandMenu_C_ChangeAttributeIcon_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Instant;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DirNext;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetPlayerHandler
struct UBattleCommandMenu_C_SetPlayerHandler_Params
{
public:
	class ABattlePlayerBP_C*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26E (0x26E - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.Change Boost Level
struct UBattleCommandMenu_C_Change_Boost_Level_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9F8 (0x9F8 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.Decide
struct UBattleCommandMenu_C_Decide_Params
{
public:
	bool                                         OpenSubMenu;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F5 (0x1F5 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.CheckActiveMenuItem
struct UBattleCommandMenu_C_CheckActiveMenuItem_Params
{
public:
	struct FCommandMenuItem                      Item;                                              // 0x0(0xBF)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_1422[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoostLv;                                           // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0xC4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1189 (0x1189 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.UpdateMenuItem
struct UBattleCommandMenu_C_UpdateMenuItem_Params
{
public:
	bool                                         UpdateActiveItem;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.IsClose
struct UBattleCommandMenu_C_IsClose_Params
{
public:
	bool                                         Close;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.Get Select Command
struct UBattleCommandMenu_C_Get_Select_Command_Params
{
public:
	enum class ECOMMAND_MENU_TYPE                Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_SUB_MENU_TYPE            SubType;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1430[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      Command;                                           // 0x8(0xF0)(Parm, OutParm)
	class FName                                  Option;                                            // 0xF8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD4 (0xD4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OpenCommandMenu
struct UBattleCommandMenu_C_OpenCommandMenu_Params
{
public:
	TArray<struct FCommandMenuItem>              CommandItem;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  InitTargetCommand;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_SUB_MENU_TYPE            MenuType;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OpenSuccess;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.SetCommandMenuVisible
struct UBattleCommandMenu_C_SetCommandMenuVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OnRightAxisX
struct UBattleCommandMenu_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OnRightAxisY
struct UBattleCommandMenu_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OnLeftAxisX
struct UBattleCommandMenu_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OnLeftAxisY
struct UBattleCommandMenu_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OnGamePadAxisX
struct UBattleCommandMenu_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OnGamePadAxisY
struct UBattleCommandMenu_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.OnListPaging
struct UBattleCommandMenu_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.WorldMapSlowCursorX
struct UBattleCommandMenu_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.WorldMapSlowCursorY
struct UBattleCommandMenu_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.HelpScrollAxis
struct UBattleCommandMenu_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BattleCommandMenu.BattleCommandMenu_C.ExecuteUbergraph_BattleCommandMenu
struct UBattleCommandMenu_C_ExecuteUbergraph_BattleCommandMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


