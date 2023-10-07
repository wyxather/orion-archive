#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xC0 (0xC0 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckItemUseEnableForCreate
struct ABattleCommandMenuActorBP_C_CheckItemUseEnableForCreate_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAilmentHandler>               AilmentList;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Permit;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC3 (0xC3 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateHelpWindow_Inner
struct ABattleCommandMenuActorBP_C_UpdateHelpWindow_Inner_Params
{
public:
	struct FCommandMenuItem                      SelectCommand;                                     // 0x0(0xBF)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateHelpWindowPosition
struct ABattleCommandMenuActorBP_C_UpdateHelpWindowPosition_Params
{
public:
	bool                                         IsIgnoreUpdateFlip;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x434 (0x434 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdatePrepareHelpMenu
struct ABattleCommandMenuActorBP_C_UpdatePrepareHelpMenu_Params
{
public:
	struct FCommandMenuItem                      SelectCommand;                                     // 0x0(0xBF)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x53 (0x53 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckLegendWeapon
struct ABattleCommandMenuActorBP_C_CheckLegendWeapon_Params
{
public:
	class FName                                  SpecialItemLabel;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLegendWeapon;                                    // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x244 (0x244 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateDefaultMenuItemFromInvadeData
struct ABattleCommandMenuActorBP_C_CreateDefaultMenuItemFromInvadeData_Params
{
public:
	class FName                                  InvadeDataLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCommandMenuItem>              MenuItemList;                                      // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         UsedOnceMonster;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F1C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CommandID;                                         // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CancelPreparationMode
struct ABattleCommandMenuActorBP_C_CancelPreparationMode_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8A (0x8A - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.IsEquipRestrictWeapon
struct ABattleCommandMenuActorBP_C_IsEquipRestrictWeapon_Params
{
public:
	struct FAbilitySetDataBase                   AbilitySet;                                        // 0x0(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABattleCharacterBase*                  Enforcer;                                          // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquip;                                           // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14D (0x14D - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandSealingListForItem
struct ABattleCommandMenuActorBP_C_CheckCommandSealingListForItem_Params
{
public:
	class ABattleCharacterBase*                  CEnforceer;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CItemData;                                         // 0x8(0x120)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EACTION_COMMAND_USEABLE           ECommandUseable;                                   // 0x128(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x155 (0x155 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandSealingListForInvade
struct ABattleCommandMenuActorBP_C_CheckCommandSealingListForInvade_Params
{
public:
	class ABattleCharacterBase*                  CEnforceer;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInvadeData                           CInvadeData;                                       // 0x8(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EACTION_COMMAND_USEABLE           ECommandUseable;                                   // 0x130(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckJobMenuEnable
struct ABattleCommandMenuActorBP_C_CheckJobMenuEnable_Params
{
public:
	bool                                         Emable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9A (0x9A - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandSealingList
struct ABattleCommandMenuActorBP_C_CheckCommandSealingList_Params
{
public:
	class ABattleCharacterBase*                  CEnforceer;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilitySetDataBase                   CAbilitySet;                                       // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EACTION_COMMAND_USEABLE           ECommandUseable;                                   // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.IsGagMode
struct ABattleCommandMenuActorBP_C_IsGagMode_Params
{
public:
	struct FCommandMenuItem                      SelectedCommandMenuItem;                           // 0x0(0xBF)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_F23[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x65 (0x65 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.PlayBoostSE
struct ABattleCommandMenuActorBP_C_PlayBoostSE_Params
{
public:
	int32                                        PlayBoostLv;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C3 (0x1C3 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OffPotentialityAction
struct ABattleCommandMenuActorBP_C_OffPotentialityAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x93 (0x93 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnPotentialityAction
struct ABattleCommandMenuActorBP_C_OnPotentialityAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xFC (0xFC - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.StartPreparationMode
struct ABattleCommandMenuActorBP_C_StartPreparationMode_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.RemovePreparationMaterial
struct ABattleCommandMenuActorBP_C_RemovePreparationMaterial_Params
{
public:
	bool                                         PreparationModeFinish;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x214 (0x214 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Check Preparation Material Enable
struct ABattleCommandMenuActorBP_C_Check_Preparation_Material_Enable_Params
{
public:
	class FName                                  PreparationMaterialID;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaterialNum;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Permit;                                            // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F26[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemCount;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C4 (0x2C4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.AddPreparationMaterial
struct ABattleCommandMenuActorBP_C_AddPreparationMaterial_Params
{
public:
	class FName                                  Option;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContinueSelectMaterial;                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x86 (0x86 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Get Selected Monster Count
struct ABattleCommandMenuActorBP_C_Get_Selected_Monster_Count_Params
{
public:
	class FName                                  MonsterID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.StartMultiMonsterMode
struct ABattleCommandMenuActorBP_C_StartMultiMonsterMode_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.RemoveMultiMonster
struct ABattleCommandMenuActorBP_C_RemoveMultiMonster_Params
{
public:
	bool                                         MultiModeFinish;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.AddMultiMonster
struct ABattleCommandMenuActorBP_C_AddMultiMonster_Params
{
public:
	class FName                                  Option;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContinueSelectMonster;                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xFD (0xFD - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Check Invade Monster Enable
struct ABattleCommandMenuActorBP_C_Check_Invade_Monster_Enable_Params
{
public:
	class FName                                  InvadeMonsterID;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Permit;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetOptionDataList
struct ABattleCommandMenuActorBP_C_GetOptionDataList_Params
{
public:
	TArray<class FName>                          AstrOptionDataList;                                // 0x0(0x10)(Parm, OutParm)
	class FName                                  StrUseActionLabel;                                 // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x53C (0x53C - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateDefaultMenuItemFromActionSet
struct ABattleCommandMenuActorBP_C_CreateDefaultMenuItemFromActionSet_Params
{
public:
	class FName                                  AbilitySetName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCommandMenuItem>              MenuItemList;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CommandEnable;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NormalAttack;                                      // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CommandSeal;                                       // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LearningAbility;                                   // 0x1B(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SuperMagic;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HyperMagic;                                        // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PotentialityActionAbility;                         // 0x1E(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x166 (0x166 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.SetupSpecialActionMenuItem
struct ABattleCommandMenuActorBP_C_SetupSpecialActionMenuItem_Params
{
public:
	int32                                        PlayerID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.TameMonsterConfirmCallback
struct ABattleCommandMenuActorBP_C_TameMonsterConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22C (0x22C - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateDefaultMenuItemFromItem
struct ABattleCommandMenuActorBP_C_CreateDefaultMenuItemFromItem_Params
{
public:
	TArray<struct FCommandMenuItem>              AddItemList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FItemData                             ItemData;                                          // 0x10(0x120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ECOMMAND_MENU_TYPE                MenuType;                                          // 0x130(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_SUB_MENU_TYPE            SubMenuType;                                       // 0x131(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F2D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Option;                                            // 0x134(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F2E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AddInfo;                                           // 0x140(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Useable;                                           // 0x158(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F2F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x15C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CommandSeal;                                       // 0x160(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetHelpWindowOpen
struct ABattleCommandMenuActorBP_C_GetHelpWindowOpen_Params
{
public:
	bool                                         Open;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2AC (0x2AC - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandEnable
struct ABattleCommandMenuActorBP_C_CheckCommandEnable_Params
{
public:
	class ABattlePlayerBP_C*                     Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilitySetDataBase                   AbilitySet;                                        // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAbilityDataBase                      ABILITY;                                           // 0x70(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         NormalAttack;                                      // 0x160(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Useable;                                           // 0x161(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Disable;                                           // 0x162(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.RemoveBoostEffect
struct ABattleCommandMenuActorBP_C_RemoveBoostEffect_Params
{
public:
	bool                                         bWeatherEnd;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x131 (0x131 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandCost
struct ABattleCommandMenuActorBP_C_CheckCommandCost_Params
{
public:
	class ABattlePlayerBP_C*                     Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Enable;                                            // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E3 (0x2E3 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateWeaponThrowCommand
struct ABattleCommandMenuActorBP_C_CreateWeaponThrowCommand_Params
{
public:
	struct FAbilityDataBase                      DefaultAbility;                                    // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  AbilityLabel;                                      // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  WeaponName;                                        // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x100(0xF0)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetMenuIndex
struct ABattleCommandMenuActorBP_C_GetMenuIndex_Params
{
public:
	int32                                        MenuIndex;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x602 (0x602 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Check Command Target Change
struct ABattleCommandMenuActorBP_C_Check_Command_Target_Change_Params
{
public:
	struct FAbilityDataBase                      Command;                                           // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F35[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      ReturnCommand;                                     // 0xF8(0xF0)(Parm, OutParm)
};

// 0x1A8 (0x1A8 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckItemUseEnable
struct ABattleCommandMenuActorBP_C_CheckItemUseEnable_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAilmentHandler>               AilmentList;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Permit;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Initialize Battle Start
struct ABattleCommandMenuActorBP_C_Initialize_Battle_Start_Params
{
public:
	enum class EBATTLE_ENCOUNT_TYPE              BattleMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckItemMenuOpen
struct ABattleCommandMenuActorBP_C_CheckItemMenuOpen_Params
{
public:
	bool                                         Permit;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCallSupporterExec
struct ABattleCommandMenuActorBP_C_CheckCallSupporterExec_Params
{
public:
	bool                                         Permit;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetSubMenuList
struct ABattleCommandMenuActorBP_C_GetSubMenuList_Params
{
public:
	enum class ECOMMAND_SUB_MENU_TYPE            Index;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F39[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCommandMenuItem>              ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm)
};

// 0x469 (0x469 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateSpecialMenuItem
struct ABattleCommandMenuActorBP_C_CreateSpecialMenuItem_Params
{
public:
	class ABattlePlayerBP_C*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x151 (0x151 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateMenuPosition
struct ABattleCommandMenuActorBP_C_UpdateMenuPosition_Params
{
public:
	bool                                         IsIgnoreUpdateFlip;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8C5 (0x8C5 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckSelectTarget
struct ABattleCommandMenuActorBP_C_CheckSelectTarget_Params
{
public:
	struct FAbilityDataBase                      Command;                                           // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Continue;                                          // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Permit;                                            // 0xF1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetBoostLevel
struct ABattleCommandMenuActorBP_C_GetBoostLevel_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B3 (0x3B3 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandExec
struct ABattleCommandMenuActorBP_C_CheckCommandExec_Params
{
public:
	struct FAbilityDataBase                      Command;                                           // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Permit;                                            // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6D9 (0x6D9 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.DecideMenuItem
struct ABattleCommandMenuActorBP_C_DecideMenuItem_Params
{
public:
	enum class ECOMMAND_MENU_TYPE                Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F40[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      Command;                                           // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  Option;                                            // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24D (0x24D - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateAbilityMenuItem
struct ABattleCommandMenuActorBP_C_CreateAbilityMenuItem_Params
{
public:
	class ABattlePlayerBP_C*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateMainMenuItem
struct ABattleCommandMenuActorBP_C_CreateMainMenuItem_Params
{
public:
	class ABattlePlayerBP_C*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Get Select Command
struct ABattleCommandMenuActorBP_C_Get_Select_Command_Params
{
public:
	enum class ECOMMAND_MENU_TYPE                Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F42[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      Command;                                           // 0x8(0xF0)(Parm, OutParm)
	bool                                         UseGrowMagicBuff;                                  // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E9 (0x1E9 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnBoostChange
struct ABattleCommandMenuActorBP_C_OnBoostChange_Params
{
public:
	bool                                         Add;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.IsClose
struct ABattleCommandMenuActorBP_C_IsClose_Params
{
public:
	bool                                         Close;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x762 (0x762 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Open
struct ABattleCommandMenuActorBP_C_Open_Params
{
public:
	class ABattlePlayerBP_C*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.InitializeCommandMenu
struct ABattleCommandMenuActorBP_C_InitializeCommandMenu_Params
{
public:
	class ABattleTargetSelectBP_C*               TargetSelectBP;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnRightAxisX
struct ABattleCommandMenuActorBP_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnRightAxisY
struct ABattleCommandMenuActorBP_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnLeftAxisX
struct ABattleCommandMenuActorBP_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnLeftAxisY
struct ABattleCommandMenuActorBP_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnGamePadAxisX
struct ABattleCommandMenuActorBP_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnGamePadAxisY
struct ABattleCommandMenuActorBP_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.WorldMapSlowCursorX
struct ABattleCommandMenuActorBP_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.WorldMapSlowCursorY
struct ABattleCommandMenuActorBP_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ChangeBoostLevel
struct ABattleCommandMenuActorBP_C_ChangeBoostLevel_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddLevel;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ReceiveTick
struct ABattleCommandMenuActorBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnListPaging
struct ABattleCommandMenuActorBP_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.HelpScrollAxis
struct ABattleCommandMenuActorBP_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ExecuteUbergraph_BattleCommandMenuActorBP
struct ABattleCommandMenuActorBP_C_ExecuteUbergraph_BattleCommandMenuActorBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


