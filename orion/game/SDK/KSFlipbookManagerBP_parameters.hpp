#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xB1 (0xB1 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetMissionFlipbookData
struct AKSFlipbookManagerBP_C_GetMissionFlipbookData_Params
{
public:
	class FName                                  FlipbookName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSUIFlipbookData                     FlipbookData;                                      // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x132 (0x132 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetMissionSpriteData
struct AKSFlipbookManagerBP_C_GetMissionSpriteData_Params
{
public:
	class FName                                  SpriteName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSSpriteData                         SpriteData;                                        // 0x8(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x119 (0x119 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetCharacterData
struct AKSFlipbookManagerBP_C_GetCharacterData_Params
{
public:
	class FName                                  CharacterName;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSCharaFlipbook                      CharacterData;                                     // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetCharacterTexAssetPtrs
struct AKSFlipbookManagerBP_C_GetCharacterTexAssetPtrs_Params
{
public:
	class FName                                  CharacterName;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>     OutTexAssetPtrs;                                   // 0x8(0x10)(Parm, OutParm, UObjectWrapper)
};

// 0x79 (0x79 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetCharacterFlipbookNames
struct AKSFlipbookManagerBP_C_GetCharacterFlipbookNames_Params
{
public:
	class FName                                  CharacterName;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          FlipbookNames;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.ContainsFlipbookData
struct AKSFlipbookManagerBP_C_ContainsFlipbookData_Params
{
public:
	class FName                                  FlipbookName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetFlipbookData
struct AKSFlipbookManagerBP_C_GetFlipbookData_Params
{
public:
	class FName                                  FlipbookName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSFlipbookData                       FlipbookData;                                      // 0x8(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x132 (0x132 - 0x0)
// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetSpriteData
struct AKSFlipbookManagerBP_C_GetSpriteData_Params
{
public:
	class FName                                  SpriteName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSSpriteData                         SpriteData;                                        // 0x8(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


