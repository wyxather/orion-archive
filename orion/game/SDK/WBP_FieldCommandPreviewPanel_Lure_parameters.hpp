#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1A1 (0x1A1 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lure.WBP_FieldCommandPreviewPanel_Lure_C.OpenSwapDialog
struct UWBP_FieldCommandPreviewPanel_Lure_C_OpenSwapDialog_Params
{
public:
	class FName                                  DetailTextLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReleaseWaitingNpcNotice;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lure.WBP_FieldCommandPreviewPanel_Lure_C.Decide
struct UWBP_FieldCommandPreviewPanel_Lure_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x408 (0x408 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lure.WBP_FieldCommandPreviewPanel_Lure_C.SetupTemplate
struct UWBP_FieldCommandPreviewPanel_Lure_C_SetupTemplate_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lure.WBP_FieldCommandPreviewPanel_Lure_C.SetupPanel
struct UWBP_FieldCommandPreviewPanel_Lure_C_SetupPanel_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lure.WBP_FieldCommandPreviewPanel_Lure_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lure
struct UWBP_FieldCommandPreviewPanel_Lure_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lure_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


