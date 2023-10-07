#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x29 (0x29 - 0x0)
// Function LibMainMenu.LibMainMenu_C.GetMainMenuList
struct ULibMainMenu_C_GetMainMenuList_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMainMenuList_C*                       MainMenuList;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function LibMainMenu.LibMainMenu_C.IsRunningMainMenu
struct ULibMainMenu_C_IsRunningMainMenu_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function LibMainMenu.LibMainMenu_C.SetMapCharacterVisible
struct ULibMainMenu_C_SetMapCharacterVisible_Params
{
public:
	bool                                         IsFastTraveling;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function LibMainMenu.LibMainMenu_C.SetFieldMapHidden
struct ULibMainMenu_C_SetFieldMapHidden_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function LibMainMenu.LibMainMenu_C.GetEqpIconName
struct ULibMainMenu_C_GetEqpIconName_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  IconName;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function LibMainMenu.LibMainMenu_C.OpenMainMenuCommon
struct ULibMainMenu_C_OpenMainMenuCommon_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMainMenuBase*                         MainMenuBase;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3FD (0x3FD - 0x0)
// Function LibMainMenu.LibMainMenu_C.CheckLearningHealSkill
struct ULibMainMenu_C_CheckLearningHealSkill_Params
{
public:
	struct FSavePlayerCharacterData              SaveCharacterData;                                 // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FJobData                              JobData;                                           // 0xF0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x1B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LEARNING;                                          // 0x1C0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x518 (0x518 - 0x0)
// Function LibMainMenu.LibMainMenu_C.IsChacterLearningHealSkill
struct ULibMainMenu_C_IsChacterLearningHealSkill_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LEARNING;                                          // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function LibMainMenu.LibMainMenu_C.CloseMainMenu
struct ULibMainMenu_C_CloseMainMenu_Params
{
public:
	bool                                         FastClose;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsClose;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function LibMainMenu.LibMainMenu_C.OpenMainMenu
struct ULibMainMenu_C_OpenMainMenu_Params
{
public:
	bool                                         FastWorldMap;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function LibMainMenu.LibMainMenu_C.CombineAilmentData
struct ULibMainMenu_C_CombineAilmentData_Params
{
public:
	TArray<struct FMainMenuAilmentData>          CombineTarget;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMainMenuAilmentData                  CombineData;                                       // 0x18(0x20)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x2D0 (0x2D0 - 0x0)
// Function LibMainMenu.LibMainMenu_C.GetCharacterAilmentData
struct ULibMainMenu_C_GetCharacterAilmentData_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMainMenuAilmentData                  NewParam;                                          // 0xF8(0x20)(Parm, OutParm, HasGetValueTypeHash)
};

}
}


