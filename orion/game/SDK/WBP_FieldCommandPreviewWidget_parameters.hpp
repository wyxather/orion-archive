#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x24 (0x24 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnHelpWindowScrollAxis
struct UWBP_FieldCommandPreviewWidget_C_OnHelpWindowScrollAxis_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.UpdateDescriptionText
struct UWBP_FieldCommandPreviewWidget_C_UpdateDescriptionText_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.GetSelectionFlow
struct UWBP_FieldCommandPreviewWidget_C_GetSelectionFlow_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Output;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnUpdatePlayerMoney
struct UWBP_FieldCommandPreviewWidget_C_OnUpdatePlayerMoney_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x84 (0x84 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.UpdateHeaderFooter
struct UWBP_FieldCommandPreviewWidget_C_UpdateHeaderFooter_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.GetLastCursorIndex
struct UWBP_FieldCommandPreviewWidget_C_GetLastCursorIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.SetWillExcecutionFlow
struct UWBP_FieldCommandPreviewWidget_C_SetWillExcecutionFlow_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnDecideEventFromPanel
struct UWBP_FieldCommandPreviewWidget_C_OnDecideEventFromPanel_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer Answer;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.RefreshPreviewWidget
struct UWBP_FieldCommandPreviewWidget_C_RefreshPreviewWidget_Params
{
public:
	class UWBP_FIeldCommandPreviewPanelBase_C*   ExcludePanel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.GetSelectingPanel
struct UWBP_FieldCommandPreviewWidget_C_GetSelectingPanel_Params
{
public:
	class UWBP_FIeldCommandPreviewPanelBase_C*   Panels;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.GetActivePanels
struct UWBP_FieldCommandPreviewWidget_C_GetActivePanels_Params
{
public:
	TArray<class UWBP_FIeldCommandPreviewPanelBase_C*> Panels;                                            // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.GetSelectingTabIcon
struct UWBP_FieldCommandPreviewWidget_C_GetSelectingTabIcon_Params
{
public:
	class UWBP_FiledCommandPreviewTabIcon_C*     TabIcon;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.GetWillExcecutionFlow
struct UWBP_FieldCommandPreviewWidget_C_GetWillExcecutionFlow_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.PreOpenSetup
struct UWBP_FieldCommandPreviewWidget_C_PreOpenSetup_Params
{
public:
	TArray<class ABP_FCv2_FieldCommandFlowBase_C*> Flows;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnEndState
struct UWBP_FieldCommandPreviewWidget_C_OnEndState_Params
{
public:
	enum class EFieldCommandPreviewMenuState     CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnUpdateState
struct UWBP_FieldCommandPreviewWidget_C_OnUpdateState_Params
{
public:
	enum class EFieldCommandPreviewMenuState     CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnBeginState
struct UWBP_FieldCommandPreviewWidget_C_OnBeginState_Params
{
public:
	enum class EFieldCommandPreviewMenuState     CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.IsChangeStateOpenFinish
struct UWBP_FieldCommandPreviewWidget_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.UpdateTabCursor
struct UWBP_FieldCommandPreviewWidget_C_UpdateTabCursor_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.MoveTabCursor
struct UWBP_FieldCommandPreviewWidget_C_MoveTabCursor_Params
{
public:
	enum class EScrollDirection                  Dir;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.IsRunning
struct UWBP_FieldCommandPreviewWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnRightAxisX
struct UWBP_FieldCommandPreviewWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnRightAxisY
struct UWBP_FieldCommandPreviewWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnLeftAxisX
struct UWBP_FieldCommandPreviewWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnLeftAxisY
struct UWBP_FieldCommandPreviewWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnGamePadAxisX
struct UWBP_FieldCommandPreviewWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnGamePadAxisY
struct UWBP_FieldCommandPreviewWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.OnListPaging
struct UWBP_FieldCommandPreviewWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.WorldMapSlowCursorX
struct UWBP_FieldCommandPreviewWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.WorldMapSlowCursorY
struct UWBP_FieldCommandPreviewWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.HelpScrollAxis
struct UWBP_FieldCommandPreviewWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_FieldCommandPreviewWidget.WBP_FieldCommandPreviewWidget_C.ExecuteUbergraph_WBP_FieldCommandPreviewWidget
struct UWBP_FieldCommandPreviewWidget_C_ExecuteUbergraph_WBP_FieldCommandPreviewWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


