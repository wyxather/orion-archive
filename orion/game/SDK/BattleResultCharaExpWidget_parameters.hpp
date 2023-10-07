#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.IsCountMax
struct UBattleResultCharaExpWidget_C_IsCountMax_Params
{
public:
	bool                                         CountMax;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetParent
struct UBattleResultCharaExpWidget_C_SetParent_Params
{
public:
	class UBattleResultPlayerWidget_C*           Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetupJobPoint
struct UBattleResultCharaExpWidget_C_SetupJobPoint_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentJobPoint;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AddJobPoint;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetNextExp
struct UBattleResultCharaExpWidget_C_SetNextExp_Params
{
public:
	int32                                        NextExp;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.IsPlaying
struct UBattleResultCharaExpWidget_C_IsPlaying_Params
{
public:
	bool                                         IsUpdate;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetupExp
struct UBattleResultCharaExpWidget_C_SetupExp_Params
{
public:
	int32                                        CurrentExp;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NeedExp;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LevelMax;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GetExp;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6E (0x6E - 0x0)
// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.ExecuteUbergraph_BattleResultCharaExpWidget
struct UBattleResultCharaExpWidget_C_ExecuteUbergraph_BattleResultCharaExpWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


