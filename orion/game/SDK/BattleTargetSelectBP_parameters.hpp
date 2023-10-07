#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2A0 (0x2A0 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.MakeCatapultAttributeList
struct ABattleTargetSelectBP_C_MakeCatapultAttributeList_Params
{
public:
	TArray<bool>                                 AttributeList;                                     // 0x0(0x10)(Parm, OutParm)
};

// 0xE1 (0xE1 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SearchPriorityTargetByDiseaseType
struct ABattleTargetSelectBP_C_SearchPriorityTargetByDiseaseType_Params
{
public:
	TArray<class ABattleCharacterBase*>          CharacterList;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PriorityTargetIndex;                               // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SearchPriorityTargetByDiseaseCategory
struct ABattleTargetSelectBP_C_SearchPriorityTargetByDiseaseCategory_Params
{
public:
	TArray<class ABattleCharacterBase*>          CharacterList;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EDISEASE_CATEGORY                 DiseaseCategory;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PriorityTargetIndex;                               // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x124 (0x124 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.CheckDiseaseRecovery
struct ABattleTargetSelectBP_C_CheckDiseaseRecovery_Params
{
public:
	TArray<struct FAilmentHandler>               AilmentList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EAILMENT_REMOVE_DISEASE_TYPE      TargetDisease;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EDISEASE_TYPE>             DiseaseTypeList;                                   // 0x18(0x10)(Parm, OutParm)
	bool                                         Result;                                            // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetScatterTargetSelectCount
struct ABattleTargetSelectBP_C_GetScatterTargetSelectCount_Params
{
public:
	class ABattleCharacterBase*                  WorkTarget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Return;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.IsEmptyScatterTarget
struct ABattleTargetSelectBP_C_IsEmptyScatterTarget_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.DecideScatterTarget
struct ABattleTargetSelectBP_C_DecideScatterTarget_Params
{
public:
	bool                                         ScatterCountMax;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.CheckPOTRecovery
struct ABattleTargetSelectBP_C_CheckPOTRecovery_Params
{
public:
	TArray<struct FAilmentHandler>               AilmentList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCA (0xCA - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.FixupTargetOrder
struct ABattleTargetSelectBP_C_FixupTargetOrder_Params
{
public:
	class ABattleCameraBP_C*                     BattleCamera;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SortBattleTargetByCamera
struct ABattleTargetSelectBP_C_SortBattleTargetByCamera_Params
{
public:
	TArray<class ABattleCharacterBase*>          TargetList;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABattleCameraBP_C*                     BattleCamera;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          SortedList;                                        // 0x18(0x10)(Parm, OutParm)
};

// 0x241 (0x241 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SortBattleTarget
struct ABattleTargetSelectBP_C_SortBattleTarget_Params
{
public:
	TArray<class ABattleCharacterBaseBP_C*>      TargetList;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABattleCharacterBaseBP_C*>      SortedList;                                        // 0x10(0x10)(Parm, OutParm)
};

// 0x108 (0x108 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetSpecialAttributeList
struct ABattleTargetSelectBP_C_GetSpecialAttributeList_Params
{
public:
	class FName                                  AbilityLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9FC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 AttributeList;                                     // 0x10(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SetSelectTarget
struct ABattleTargetSelectBP_C_SetSelectTarget_Params
{
public:
	TArray<class ABattleCharacterBaseBP_C*>      Target;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetSelectedIndex
struct ABattleTargetSelectBP_C_GetSelectedIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SelectNext
struct ABattleTargetSelectBP_C_SelectNext_Params
{
public:
	bool                                         MoveSuccess;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SelectPrev
struct ABattleTargetSelectBP_C_SelectPrev_Params
{
public:
	bool                                         MoveSuccess;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.EndSelection
struct ABattleTargetSelectBP_C_EndSelection_Params
{
public:
	bool                                         ResetCamera;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetSelectedTarget
struct ABattleTargetSelectBP_C_GetSelectedTarget_Params
{
public:
	TArray<class ABattleCharacterBase*>          SelectTarget;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x4D1 (0x4D1 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.Start Selection
struct ABattleTargetSelectBP_C_Start_Selection_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      Command;                                           // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Boost;                                             // 0xF8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityLabel;                                      // 0xFC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.ReceiveTick
struct ABattleTargetSelectBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function BattleTargetSelectBP.BattleTargetSelectBP_C.ExecuteUbergraph_BattleTargetSelectBP
struct ABattleTargetSelectBP_C_ExecuteUbergraph_BattleTargetSelectBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


