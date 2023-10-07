#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x104 (0x104 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.Debug_PlayAbilitty
struct IBattleManagerInterface_C_Debug_PlayAbilitty_Params
{
public:
	struct FAbilityDataBase                      PlayAbilityData;                                   // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLevel;                                        // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnforcePlayerSide;                                 // 0xF4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_SEQUENCE_PATTERN_TYPE     SequencePattern;                                   // 0xF5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnemyIndex;                                        // 0xF8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UseActionLabel;                                    // 0xFC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.CheckBattleReplayFinish
struct IBattleManagerInterface_C_CheckBattleReplayFinish_Params
{
public:
	bool                                         Finish;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.PlayBattleReplay
struct IBattleManagerInterface_C_PlayBattleReplay_Params
{
public:
	enum class EEndRollSegmentSet                ReplaySegment;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.IsAllReady
struct IBattleManagerInterface_C_IsAllReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.IsRequestUI
struct IBattleManagerInterface_C_IsRequestUI_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.CreateUI
struct IBattleManagerInterface_C_CreateUI_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.IsAliveEnemy
struct IBattleManagerInterface_C_IsAliveEnemy_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.IsReady
struct IBattleManagerInterface_C_IsReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function BattleManagerInterface.BattleManagerInterface_C.StartBattleSequence
struct IBattleManagerInterface_C_StartBattleSequence_Params
{
public:
	TArray<struct FPartyCharacterData>           Player;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  EnemyGroupID;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEventBGM;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInvadeBattle;                                    // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


