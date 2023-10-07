#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x169 (0x169 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetEndrollSegmentBattleReplay
struct AKSSaveDataManagerBP_C_SetEndrollSegmentBattleReplay_Params
{
public:
	enum class EEndRollSegmentSet                SegmentID;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x238 (0x238 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.UpdateSlotData
struct AKSSaveDataManagerBP_C_UpdateSlotData_Params
{
public:
	enum class EKSSaveSlotName                   SlotIdx;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetGameSaveData_BP
struct AKSSaveDataManagerBP_C_SetGameSaveData_BP_Params
{
public:
	class UMJSaveData*                           SaveData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.InitGameData
struct AKSSaveDataManagerBP_C_InitGameData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.GetCalcBaseBattleSpeed
struct AKSSaveDataManagerBP_C_GetCalcBaseBattleSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.InitSystemData
struct AKSSaveDataManagerBP_C_InitSystemData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.CheckPartyMainMember
struct AKSSaveDataManagerBP_C_CheckPartyMainMember_Params
{
public:
	enum class EPlayableCharacterID              CharaID;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHit;                                             // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1AA (0x1AA - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.RestoreParty
struct AKSSaveDataManagerBP_C_RestoreParty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetupLastDungeonParty
struct AKSSaveDataManagerBP_C_SetupLastDungeonParty_Params
{
public:
	TArray<int32>                                Party1;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Party2;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x91 (0x91 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetupReminiscenceParty
struct AKSSaveDataManagerBP_C_SetupReminiscenceParty_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.GetActiveSaveSlot
struct AKSSaveDataManagerBP_C_GetActiveSaveSlot_Params
{
public:
	enum class EKSSaveSlotName                   SaveSlotName;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetActiveSaveSlot
struct AKSSaveDataManagerBP_C_SetActiveSaveSlot_Params
{
public:
	enum class EKSSaveSlotName                   SaveSlotName;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.StartAutoSave
struct AKSSaveDataManagerBP_C_StartAutoSave_Params
{
public:
	FDelegateProperty_                           AutoSavedDelegate;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.ExecuteUbergraph_KSSaveDataManagerBP
struct AKSSaveDataManagerBP_C_ExecuteUbergraph_KSSaveDataManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


