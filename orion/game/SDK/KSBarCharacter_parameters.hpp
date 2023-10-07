#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x3C (0x3C - 0x0)
// Function KSBarCharacter.KSBarCharacter_C.CallTalkEvent
struct AKSBarCharacter_C_CallTalkEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function KSBarCharacter.KSBarCharacter_C.CloseDialog
struct AKSBarCharacter_C_CloseDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function KSBarCharacter.KSBarCharacter_C.ChangeCharacter
struct AKSBarCharacter_C_ChangeCharacter_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemTalkEvent;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                NormalTalkEvent;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x19D (0x19D - 0x0)
// Function KSBarCharacter.KSBarCharacter_C.CalcItemData
struct AKSBarCharacter_C_CalcItemData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function KSBarCharacter.KSBarCharacter_C.SetupCharacter
struct AKSBarCharacter_C_SetupCharacter_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemEventLabel;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                NormalEventLabel;                                  // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                          ItemLabel;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                ItemCnt;                                           // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function KSBarCharacter.KSBarCharacter_C.ReceiveTick
struct AKSBarCharacter_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSBarCharacter.KSBarCharacter_C.ExecuteUbergraph_KSBarCharacter
struct AKSBarCharacter_C_ExecuteUbergraph_KSBarCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


