#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetCanPlayCloseSe
struct UWBP_FIeldCommandPreviewPanelBase_C_GetCanPlayCloseSe_Params
{
public:
	bool                                         CanPlay;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetAdditionalFooterGuide
struct UWBP_FIeldCommandPreviewPanelBase_C_GetAdditionalFooterGuide_Params
{
public:
	TArray<struct FGuideData>                    Flow;                                              // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.CanCloseState
struct UWBP_FIeldCommandPreviewPanelBase_C_CanCloseState_Params
{
public:
	enum class EFieldCommandPreviewMenuState     NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.HelpWindowScrollAxis
struct UWBP_FIeldCommandPreviewPanelBase_C_HelpWindowScrollAxis_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.SetSwapNpcWidget
struct UWBP_FIeldCommandPreviewPanelBase_C_SetSwapNpcWidget_Params
{
public:
	class UNPCStatusPartsWidget_C*               LeftNpcStatusWidget;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               RightNpcStatusWidget;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCFollowChangePartsWidget_C*         CaptionChangeWidget;                               // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x208 (0x208 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OpenSwapDialog
struct UWBP_FIeldCommandPreviewPanelBase_C_OpenSwapDialog_Params
{
public:
	class FName                                  DetailTextLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReleaseWaitingNpcNotice;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OnClosedSwapDialog
struct UWBP_FIeldCommandPreviewPanelBase_C_OnClosedSwapDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetFlow
struct UWBP_FIeldCommandPreviewPanelBase_C_GetFlow_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.IsFocusablePanel
struct UWBP_FIeldCommandPreviewPanelBase_C_IsFocusablePanel_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OutFocus
struct UWBP_FIeldCommandPreviewPanelBase_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Focus
struct UWBP_FIeldCommandPreviewPanelBase_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Decide
struct UWBP_FIeldCommandPreviewPanelBase_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Close
struct UWBP_FIeldCommandPreviewPanelBase_C_Close_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Open
struct UWBP_FIeldCommandPreviewPanelBase_C_Open_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.SetupPanel
struct UWBP_FIeldCommandPreviewPanelBase_C_SetupPanel_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetFcType
struct UWBP_FIeldCommandPreviewPanelBase_C_GetFcType_Params
{
public:
	enum class EMJFieldCommandType               Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.ExecuteUbergraph_WBP_FIeldCommandPreviewPanelBase
struct UWBP_FIeldCommandPreviewPanelBase_C_ExecuteUbergraph_WBP_FIeldCommandPreviewPanelBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.RefreshPreviewWidget__DelegateSignature
struct UWBP_FIeldCommandPreviewPanelBase_C_RefreshPreviewWidget__DelegateSignature_Params
{
public:
	class UWBP_FIeldCommandPreviewPanelBase_C*   ExcludePanel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OnDecideInPanel__DelegateSignature
struct UWBP_FIeldCommandPreviewPanelBase_C_OnDecideInPanel__DelegateSignature_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer Answer;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


