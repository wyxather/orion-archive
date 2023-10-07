#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5C (0x5C - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetConfusionAttackAbilityByWeapon
struct ULibActionCommand_C_GetConfusionAttackAbilityByWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetChaseAttackAbilityByWeapon
struct ULibActionCommand_C_GetChaseAttackAbilityByWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetEnchantAbilityByAttribute
struct ULibActionCommand_C_GetEnchantAbilityByAttribute_Params
{
public:
	enum class EATTRIBUTE_TYPE                   AttributeType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnemy;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A0 (0x3A0 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetActionCommandForInventor
struct ULibActionCommand_C_GetActionCommandForInventor_Params
{
public:
	struct FCommandMenuItem                      CommandMenuItem;                                   // 0x0(0xBF)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_12A7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0xC8(0xF0)(Parm, OutParm)
};

// 0x3A0 (0x3A0 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetActionCommandForInvade
struct ULibActionCommand_C_GetActionCommandForInvade_Params
{
public:
	struct FCommandMenuItem                      CommandMenuItem;                                   // 0x0(0xBF)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_12A8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0xC8(0xF0)(Parm, OutParm)
};

// 0x2B0 (0x2B0 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetActionCommandForSupporter
struct ULibActionCommand_C_GetActionCommandForSupporter_Params
{
public:
	class FName                                  Display_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommandMenuItem                      CommandMenuItem;                                   // 0x8(0xBF)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_12A9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0xD0(0xF0)(Parm, OutParm)
};

// 0x648 (0x648 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetActionCommandForItem
struct ULibActionCommand_C_GetActionCommandForItem_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x10(0xF0)(Parm, OutParm)
};

// 0x648 (0x648 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetActionCommandForPreparation
struct ULibActionCommand_C_GetActionCommandForPreparation_Params
{
public:
	struct FAbilitySetDataBase                   CommandSet;                                        // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLv;                                           // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreparationAttack;                                 // 0x6C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x78(0xF0)(Parm, OutParm)
	class FName                                  Label;                                             // 0x168(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C8 (0x2C8 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetNormalAttackCommand
struct ULibActionCommand_C_GetNormalAttackCommand_Params
{
public:
	class ABattleCharacterBase*                  Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostLv;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x18(0xF0)(Parm, OutParm)
	class FName                                  Label;                                             // 0x108(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x368 (0x368 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetActionCommandFromSet
struct ULibActionCommand_C_GetActionCommandFromSet_Params
{
public:
	struct FAbilitySetDataBase                   CommandSet;                                        // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLv;                                           // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x78(0xF0)(Parm, OutParm)
	class FName                                  Label;                                             // 0x168(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E1 (0x2E1 - 0x0)
// Function LibActionCommand.LibActionCommand_C.GetActionCommand
struct ULibActionCommand_C_GetActionCommand_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x10(0xF0)(Parm, OutParm)
};

}
}


