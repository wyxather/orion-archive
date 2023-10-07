#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xB8 (0xB8 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.SetLanguage
struct UBattleDamageNumber_C_SetLanguage_Params
{
public:
	bool                                         SetBreak;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SetGraphic;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1AF (0x1AF - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.SetVisibilityType
struct UBattleDamageNumber_C_SetVisibilityType_Params
{
public:
	bool                                         Miss;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AbilityCritical;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_284[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Number;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDAMAGE_UI_COLOR_TYPE             ColorType;                                         // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.PlayRecoveryBP
struct UBattleDamageNumber_C_PlayRecoveryBP_Params
{
public:
	int32                                        RecoveryValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_286[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Owner;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.PlayBreak
struct UBattleDamageNumber_C_PlayBreak_Params
{
public:
	class ABattleCharacterBaseBP_C*              Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.PlayRecoveryMP
struct UBattleDamageNumber_C_PlayRecoveryMP_Params
{
public:
	int32                                        RecoveryValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_287[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Owner;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.PlayMiss
struct UBattleDamageNumber_C_PlayMiss_Params
{
public:
	class ABattleCharacterBaseBP_C*              Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.PlayRecoveryHP
struct UBattleDamageNumber_C_PlayRecoveryHP_Params
{
public:
	int32                                        RecoveryValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_289[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Owner;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.PlayDamage
struct UBattleDamageNumber_C_PlayDamage_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Owner;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.DisplayTimer
struct UBattleDamageNumber_C_DisplayTimer_Params
{
public:
	float                                        DisplayTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.Tick
struct UBattleDamageNumber_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.OnBattleSpeedChange
struct UBattleDamageNumber_C_OnBattleSpeedChange_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_298[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           NoticeArgs;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC4 (0xC4 - 0x0)
// Function BattleDamageNumber.BattleDamageNumber_C.ExecuteUbergraph_BattleDamageNumber
struct UBattleDamageNumber_C_ExecuteUbergraph_BattleDamageNumber_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


