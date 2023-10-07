#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x80 (0x80 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.GetAdditionalFooterGuide
struct UWBP_FieldCommandPreviewPanel_Purchase_C_GetAdditionalFooterGuide_Params
{
public:
	TArray<struct FGuideData>                    Flow;                                              // 0x0(0x10)(Parm, OutParm)
};

// 0xF1 (0xF1 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.PurchaseItemExec
struct UWBP_FieldCommandPreviewPanel_Purchase_C_PurchaseItemExec_Params
{
public:
	struct FPurchaseItemInfoData                 PurchaseItemInfoData;                              // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.OnCloseConfirmDialog
struct UWBP_FieldCommandPreviewPanel_Purchase_C_OnCloseConfirmDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.Decide
struct UWBP_FieldCommandPreviewPanel_Purchase_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.OutFocus
struct UWBP_FieldCommandPreviewPanel_Purchase_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.Focus
struct UWBP_FieldCommandPreviewPanel_Purchase_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.IsFocusablePanel
struct UWBP_FieldCommandPreviewPanel_Purchase_C_IsFocusablePanel_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x438 (0x438 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.OnSelectItemEvent
struct UWBP_FieldCommandPreviewPanel_Purchase_C_OnSelectItemEvent_Params
{
public:
	int32                                        SelectCursorPosition;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.SetupPanel
struct UWBP_FieldCommandPreviewPanel_Purchase_C_SetupPanel_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


