#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.IsReady
struct AKSTextManagerBP_C_IsReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.GetTalkVoiceTable
struct AKSTextManagerBP_C_GetTalkVoiceTable_Params
{
public:
	enum class EKSLanguage                       Language;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UDataTable>             Table;                                             // 0x8(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.GetTalkTextTable
struct AKSTextManagerBP_C_GetTalkTextTable_Params
{
public:
	enum class EKSLanguage                       Language;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EBA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UDataTable>             Table;                                             // 0x8(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.GetGameTextTable
struct AKSTextManagerBP_C_GetGameTextTable_Params
{
public:
	enum class EKSLanguage                       Language;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EBB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UDataTable>             DataTable;                                         // 0x8(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.CbLoadTextVoice
struct AKSTextManagerBP_C_CbLoadTextVoice_Params
{
public:
	TArray<class UObject*>                       TextVoiceObject;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.LoadTextVoice
struct AKSTextManagerBP_C_LoadTextVoice_Params
{
public:
	enum class EKSLanguage                       ELang;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.CbLoadText
struct AKSTextManagerBP_C_CbLoadText_Params
{
public:
	TArray<class UObject*>                       LoadData;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function KSTextManagerBP.KSTextManagerBP_C.LoadText
struct AKSTextManagerBP_C_LoadText_Params
{
public:
	enum class EKSLanguage                       ELang;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


