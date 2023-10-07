#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x25 (0x25 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.Decide
struct UWBP_FieldCommandPreviewPanel_Lead_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x448 (0x448 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.SetupTemplate
struct UWBP_FieldCommandPreviewPanel_Lead_C_SetupTemplate_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.SetupPanel
struct UWBP_FieldCommandPreviewPanel_Lead_C_SetupPanel_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lead
struct UWBP_FieldCommandPreviewPanel_Lead_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lead_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


