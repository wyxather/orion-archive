#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xD8 (0xD8 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.GetCharacterDiseaseList
struct UWBP_DiseaseListWidget_C_GetCharacterDiseaseList_Params
{
public:
	TArray<struct FExecDiseaseHandler>           OutDiseaseList;                                    // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0xB8 (0xB8 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.GetBattlePlayerAndEnemyList
struct UWBP_DiseaseListWidget_C_GetBattlePlayerAndEnemyList_Params
{
public:
	TArray<class ABattleCharacterBaseBP_C*>      BattleCharacterList;                               // 0x0(0x10)(Parm, OutParm)
};

// 0x14 (0x14 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.ScrollList
struct UWBP_DiseaseListWidget_C_ScrollList_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.IsChangeStateCloseFinish
struct UWBP_DiseaseListWidget_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.IsChangeStateOpenFinish
struct UWBP_DiseaseListWidget_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.IsRunning
struct UWBP_DiseaseListWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.OnRightAxisX
struct UWBP_DiseaseListWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.OnRightAxisY
struct UWBP_DiseaseListWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.OnLeftAxisX
struct UWBP_DiseaseListWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.OnLeftAxisY
struct UWBP_DiseaseListWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.OnGamePadAxisX
struct UWBP_DiseaseListWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.OnGamePadAxisY
struct UWBP_DiseaseListWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.OnListPaging
struct UWBP_DiseaseListWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.WorldMapSlowCursorX
struct UWBP_DiseaseListWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.WorldMapSlowCursorY
struct UWBP_DiseaseListWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.HelpScrollAxis
struct UWBP_DiseaseListWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_DiseaseListWidget.WBP_DiseaseListWidget_C.ExecuteUbergraph_WBP_DiseaseListWidget
struct UWBP_DiseaseListWidget_C_ExecuteUbergraph_WBP_DiseaseListWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


