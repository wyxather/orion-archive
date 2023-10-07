#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x21 (0x21 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.GetNoReadThiefLabel
struct UPartyChatCharacter_C_GetNoReadThiefLabel_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LabelName;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.PartyChatCharacter_AutoGenFunc
struct UPartyChatCharacter_C_PartyChatCharacter_AutoGenFunc_Params
{
public:
	TArray<class UObject*>                       ObjList;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB4 (0xB4 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.CheckThiefSisterEvent
struct UPartyChatCharacter_C_CheckThiefSisterEvent_Params
{
public:
	int32                                        PartyChatId;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.SetCharacterThief
struct UPartyChatCharacter_C_SetCharacterThief_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   ActionDir;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_825[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PartyChatId;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.Focus
struct UPartyChatCharacter_C_Focus_Params
{
public:
	bool                                         IsFocus;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.GetCharacterID
struct UPartyChatCharacter_C_GetCharacterID_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.SetCharacter
struct UPartyChatCharacter_C_SetCharacter_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   ActionDir;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PartyChatId;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.PreConstruct
struct UPartyChatCharacter_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function PartyChatCharacter.PartyChatCharacter_C.ExecuteUbergraph_PartyChatCharacter
struct UPartyChatCharacter_C_ExecuteUbergraph_PartyChatCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


