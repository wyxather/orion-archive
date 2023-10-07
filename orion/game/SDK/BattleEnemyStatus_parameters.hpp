#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x30 (0x30 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetIsUnableAttack
struct UBattleEnemyStatus_C_SetIsUnableAttack_Params
{
public:
	bool                                         IsUnableAttack;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetPosition
struct UBattleEnemyStatus_C_SetPosition_Params
{
public:
	struct FVector2D                             InPosition;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x270 (0x270 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.OpenWeakPoison
struct UBattleEnemyStatus_C_OpenWeakPoison_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetBribeMoney
struct UBattleEnemyStatus_C_SetBribeMoney_Params
{
public:
	int32                                        Money;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Negotiate;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Enough_Money;                                      // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.UpdateIconLoop
struct UBattleEnemyStatus_C_UpdateIconLoop_Params
{
public:
	float                                        IconLoopAlpha;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetSuccessRateVisible
struct UBattleEnemyStatus_C_SetSuccessRateVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE0 (0xE0 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetTameMonsterRate
struct UBattleEnemyStatus_C_SetTameMonsterRate_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Enable;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13E1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RateValue;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetStealMoneyRate
struct UBattleEnemyStatus_C_SetStealMoneyRate_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Settled;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Enable;                                            // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13E5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RateValue;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetStealItemRate
struct UBattleEnemyStatus_C_SetStealItemRate_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Settled;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Enable;                                            // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1400[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RateValue;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.AddNewDisease
struct UBattleEnemyStatus_C_AddNewDisease_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetEnemyNameVisible
struct UBattleEnemyStatus_C_SetEnemyNameVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.PlayShieldChange
struct UBattleEnemyStatus_C_PlayShieldChange_Params
{
public:
	int32                                        ChangeValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetupDiseaseIcon
struct UBattleEnemyStatus_C_SetupDiseaseIcon_Params
{
public:
	TArray<struct FExecDiseaseHandler>           DiseaseList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UBuffIcon_C*>                   Icon;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        StartPageIndex;                                    // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Instant;                                           // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x199 (0x199 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SortDisease by Count
struct UBattleEnemyStatus_C_SortDisease_by_Count_Params
{
public:
	TArray<struct FExecDiseaseHandler>           DeiseaseList;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FExecDiseaseHandler>           Result;                                            // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x55 (0x55 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.CheckWeaknessOpen
struct UBattleEnemyStatus_C_CheckWeaknessOpen_Params
{
public:
	int32                                        WeakBitmask;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AttributeIndex;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5E (0x5E - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetupWeakLock
struct UBattleEnemyStatus_C_SetupWeakLock_Params
{
public:
	TArray<bool>                                 WeaponLock;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                 AttributeLock;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x41 (0x41 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.GetWeakOpenStatus
struct UBattleEnemyStatus_C_GetWeakOpenStatus_Params
{
public:
	TArray<bool>                                 WeaknessOpen;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x3D (0x3D - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.OpenWeakIcon
struct UBattleEnemyStatus_C_OpenWeakIcon_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Preparation2nd;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_145B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AttributeIndex;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.GetNameColor
struct UBattleEnemyStatus_C_GetNameColor_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
};

// 0x2B (0x2B - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.UpdateAttackAttribute
struct UBattleEnemyStatus_C_UpdateAttackAttribute_Params
{
public:
	TArray<bool>                                 AttributeList;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetEnemySelect
struct UBattleEnemyStatus_C_SetEnemySelect_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5C (0x5C - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.SetupCharacter
struct UBattleEnemyStatus_C_SetupCharacter_Params
{
public:
	class ABattleEnemyBP_C*                      Enemy;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.GetCharacterName
struct UBattleEnemyStatus_C_GetCharacterName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x60 (0x60 - 0x0)
// Function BattleEnemyStatus.BattleEnemyStatus_C.ExecuteUbergraph_BattleEnemyStatus
struct UBattleEnemyStatus_C_ExecuteUbergraph_BattleEnemyStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


