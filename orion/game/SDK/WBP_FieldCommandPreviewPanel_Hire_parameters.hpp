#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x44 (0x44 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hire.WBP_FieldCommandPreviewPanel_Hire_C.OpenSwapDialog
struct UWBP_FieldCommandPreviewPanel_Hire_C_OpenSwapDialog_Params
{
public:
	class FName                                  DetailTextLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReleaseWaitingNpcNotice;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hire.WBP_FieldCommandPreviewPanel_Hire_C.Decide
struct UWBP_FieldCommandPreviewPanel_Hire_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4F0 (0x4F0 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hire.WBP_FieldCommandPreviewPanel_Hire_C.SetupTemplate
struct UWBP_FieldCommandPreviewPanel_Hire_C_SetupTemplate_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hire.WBP_FieldCommandPreviewPanel_Hire_C.SetupPanel
struct UWBP_FieldCommandPreviewPanel_Hire_C_SetupPanel_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hire.WBP_FieldCommandPreviewPanel_Hire_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hire
struct UWBP_FieldCommandPreviewPanel_Hire_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hire_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


