#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x24 (0x24 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.CheckOnTakeDamageVoice
struct UBP_BattleVoiceComponent_C_CheckOnTakeDamageVoice_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                VoiceType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xF1 (0xF1 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.CheckBattleVoiceData
struct UBP_BattleVoiceComponent_C_CheckBattleVoiceData_Params
{
public:
	struct FBattleVoiceSetData                   BattleVoiceData;                                   // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleVoiceSetData                   ConditionData;                                     // 0x70(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Enable;                                            // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D04[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VoiceLabel;                                        // 0xE4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.InsertBattleVoiceData
struct UBP_BattleVoiceComponent_C_InsertBattleVoiceData_Params
{
public:
	TArray<struct FBattleVoiceSetData>           VoiceDataArray;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBattleVoiceSetData                   NewVoiceData;                                      // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC81 (0xC81 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.PlayBattleVoice
struct UBP_BattleVoiceComponent_C_PlayBattleVoice_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                EBattleVoiceType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D06[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleVoiceSetData                   CPlayCondition;                                    // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x241 (0x241 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.InitBattleVoice
struct UBP_BattleVoiceComponent_C_InitBattleVoice_Params
{
public:
	class FName                                  StrBattleVoiceID;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ReceiveTick
struct UBP_BattleVoiceComponent_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ReceiveEndPlay
struct UBP_BattleVoiceComponent_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ExecuteUbergraph_BP_BattleVoiceComponent
struct UBP_BattleVoiceComponent_C_ExecuteUbergraph_BP_BattleVoiceComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


