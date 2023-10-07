#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.AddNewDisease
struct UWBP_BattleSelectSubPlayerStatus_C_AddNewDisease_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetupDiseaseIcon
struct UWBP_BattleSelectSubPlayerStatus_C_SetupDiseaseIcon_Params
{
public:
	TArray<struct FExecDiseaseHandler>           DiseaseList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UBuffIcon_C*>                   IconList;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        StartIndex;                                        // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Instant;                                           // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19C (0x19C - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SortDiseaseByCount
struct UWBP_BattleSelectSubPlayerStatus_C_SortDiseaseByCount_Params
{
public:
	TArray<struct FExecDiseaseHandler>           DiseaseList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FExecDiseaseHandler>           Result;                                            // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x14 (0x14 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.GetBoostGaugeLoopTime
struct UWBP_BattleSelectSubPlayerStatus_C_GetBoostGaugeLoopTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetPotentialityVisibility
struct UWBP_BattleSelectSubPlayerStatus_C_SetPotentialityVisibility_Params
{
public:
	enum class ESlateVisibility                  Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetPositionOffset
struct UWBP_BattleSelectSubPlayerStatus_C_SetPositionOffset_Params
{
public:
	struct FVector2D                             InOffset;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.IsGuestCharacter
struct UWBP_BattleSelectSubPlayerStatus_C_IsGuestCharacter_Params
{
public:
	bool                                         IsGuest;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetPlayerStatusVisible
struct UWBP_BattleSelectSubPlayerStatus_C_SetPlayerStatusVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Update
struct UWBP_BattleSelectSubPlayerStatus_C_Update_Params
{
public:
	bool                                         Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Boost;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x91 (0x91 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.InitPlayerStatus
struct UWBP_BattleSelectSubPlayerStatus_C_InitPlayerStatus_Params
{
public:
	class ABattlePlayerBP_C*                     Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.ExecuteUbergraph_WBP_BattleSelectSubPlayerStatus
struct UWBP_BattleSelectSubPlayerStatus_C_ExecuteUbergraph_WBP_BattleSelectSubPlayerStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


