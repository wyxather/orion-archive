#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x9 (0x9 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetCursorPosition
struct UOptionMenuWBP_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.CursorRight
struct UOptionMenuWBP_C_CursorRight_Params
{
public:
	bool                                         MenuDecide;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.CursorLeft
struct UOptionMenuWBP_C_CursorLeft_Params
{
public:
	bool                                         MenuCancel;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.DecideMenu
struct UOptionMenuWBP_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.CancelMenu
struct UOptionMenuWBP_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetMenuRelativePos
struct UOptionMenuWBP_C_GetMenuRelativePos_Params
{
public:
	struct FVector2D                             RelativePos;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetItemIndexFromWindowMode
struct UOptionMenuWBP_C_GetItemIndexFromWindowMode_Params
{
public:
	enum class EWindowMode                       WindowMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_156B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ApplyFinishDialogCallback
struct UOptionMenuWBP_C_ApplyFinishDialogCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.IsModifired
struct UOptionMenuWBP_C_IsModifired_Params
{
public:
	bool                                         Modifired;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.IsIgnoreInputLeftRight
struct UOptionMenuWBP_C_IsIgnoreInputLeftRight_Params
{
public:
	int32                                        CursorIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ignore;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetKeyConfigParam_Inner
struct UOptionMenuWBP_C_TemporarySetKeyConfigParam_Inner_Params
{
public:
	enum class EKSKeyConfigElement               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_156C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetKeyNameFromTemporary
struct UOptionMenuWBP_C_GetKeyNameFromTemporary_Params
{
public:
	enum class EKSKeyConfigElement               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_156D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  KeyName;                                           // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SetModified
struct UOptionMenuWBP_C_SetModified_Params
{
public:
	bool                                         Modified;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ModifiedKeyConfig;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ApplyConfirmDialogCallback
struct UOptionMenuWBP_C_ApplyConfirmDialogCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.TemporaryGetKeyConfigParam
struct UOptionMenuWBP_C_TemporaryGetKeyConfigParam_Params
{
public:
	enum class EKSKeyConfigElement               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_156E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Param;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetKeyConfigParam
struct UOptionMenuWBP_C_TemporarySetKeyConfigParam_Params
{
public:
	enum class EKSKeyConfigElement               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_156F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Value;                                             // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsApply;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBB (0xBB - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.IsEnablePreset
struct UOptionMenuWBP_C_IsEnablePreset_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.TemporaryGetFlag
struct UOptionMenuWBP_C_TemporaryGetFlag_Params
{
public:
	enum class EKSSaveDataFlagType               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Flag;                                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.TemporaryGetParam
struct UOptionMenuWBP_C_TemporaryGetParam_Params
{
public:
	enum class EKSSaveDataParamType              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1571[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Param;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ApplySystemDataToTempraryData
struct UOptionMenuWBP_C_ApplySystemDataToTempraryData_Params
{
public:
	enum class EOPTION_ITEM_KIND                 OptionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetFlag
struct UOptionMenuWBP_C_TemporarySetFlag_Params
{
public:
	enum class EKSSaveDataFlagType               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Value;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetParam
struct UOptionMenuWBP_C_TemporarySetParam_Params
{
public:
	enum class EKSSaveDataParamType              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1572[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ApplyOptionTemporaryData_Inner
struct UOptionMenuWBP_C_ApplyOptionTemporaryData_Inner_Params
{
public:
	enum class EOPTION_ITEM_KIND                 OptionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetWindowModeFromItemIndex
struct UOptionMenuWBP_C_GetWindowModeFromItemIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       WindowMode;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnFinishSystemData
struct UOptionMenuWBP_C_OnFinishSystemData_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccesss;                                        // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetCategoryDescriptionText
struct UOptionMenuWBP_C_GetCategoryDescriptionText_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetCategoryName
struct UOptionMenuWBP_C_GetCategoryName_Params
{
public:
	int32                                        Category;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TextLabel;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ResetToDefaultKeyConfig
struct UOptionMenuWBP_C_ResetToDefaultKeyConfig_Params
{
public:
	enum class EKSKeyConfigType                  Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBA (0xBA - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.CanDisplayKey
struct UOptionMenuWBP_C_CanDisplayKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CanDisplay;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.Get Key Config Element From Option Iten Kind
struct UOptionMenuWBP_C_Get_Key_Config_Element_From_Option_Iten_Kind_Params
{
public:
	enum class EOPTION_ITEM_KIND                 Kind;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSKeyConfigElement               NewParam;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetOptionMenuList
struct UOptionMenuWBP_C_GetOptionMenuList_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1579[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MenuList;                                          // 0x8(0x10)(Parm, OutParm)
};

// 0x100 (0x100 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.UpdateOptionMenuItem
struct UOptionMenuWBP_C_UpdateOptionMenuItem_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.FocusCategory
struct UOptionMenuWBP_C_FocusCategory_Params
{
public:
	int32                                        NewCategoryPos;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OutFocusCategory
struct UOptionMenuWBP_C_OutFocusCategory_Params
{
public:
	int32                                        SelectID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.UpdateCategoryFocus
struct UOptionMenuWBP_C_UpdateCategoryFocus_Params
{
public:
	int32                                        NextPos;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ChangeCategory
struct UOptionMenuWBP_C_ChangeCategory_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.AddCategoryPart
struct UOptionMenuWBP_C_AddCategoryPart_Params
{
public:
	struct FListWidgetCategory                   CategoryData;                                      // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2 (0x2 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SetFromTitleScene
struct UOptionMenuWBP_C_SetFromTitleScene_Params
{
public:
	bool                                         FromTitleScene;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.IsSaving
struct UOptionMenuWBP_C_IsSaving_Params
{
public:
	bool                                         Saving;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SetReference
struct UOptionMenuWBP_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.Init
struct UOptionMenuWBP_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetOptionItemWidget
struct UOptionMenuWBP_C_GetOptionItemWidget_Params
{
public:
	enum class EOPTION_ITEM_KIND                 OptionKind;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1584[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJListItemWidget*                     Value;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.IsClosingState
struct UOptionMenuWBP_C_IsClosingState_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ApplyOptionToTemporaryData
struct UOptionMenuWBP_C_ApplyOptionToTemporaryData_Params
{
public:
	enum class EOPTION_ITEM_KIND                 OptionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Apply;                                             // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x119 (0x119 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ApplyOptionToExWidget
struct UOptionMenuWBP_C_ApplyOptionToExWidget_Params
{
public:
	enum class EOPTION_ITEM_KIND                 OptionId;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SendLRToExWidget
struct UOptionMenuWBP_C_SendLRToExWidget_Params
{
public:
	bool                                         IsLeft;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.MoveCursor
struct UOptionMenuWBP_C_MoveCursor_Params
{
public:
	bool                                         ToUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.PlayAnim
struct UOptionMenuWBP_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      Anim;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OutFocusItem
struct UOptionMenuWBP_C_OutFocusItem_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.FocusItem
struct UOptionMenuWBP_C_FocusItem_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SetCursorPos
struct UOptionMenuWBP_C_SetCursorPos_Params
{
public:
	int32                                        NewPos;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.IsPlayingAnim
struct UOptionMenuWBP_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetCurrentState_Local
struct UOptionMenuWBP_C_GetCurrentState_Local_Params
{
public:
	enum class EOPTION_MENU_STATE                CurrentState;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnEndState_Local
struct UOptionMenuWBP_C_OnEndState_Local_Params
{
public:
	enum class EOPTION_MENU_STATE                CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOPTION_MENU_STATE                NextState;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnBginState_Local
struct UOptionMenuWBP_C_OnBginState_Local_Params
{
public:
	enum class EOPTION_MENU_STATE                PrevState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOPTION_MENU_STATE                CurrentState;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14B (0x14B - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnUpdate_Local
struct UOptionMenuWBP_C_OnUpdate_Local_Params
{
public:
	enum class EOPTION_MENU_STATE                CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SetNextState_Local
struct UOptionMenuWBP_C_SetNextState_Local_Params
{
public:
	enum class EOPTION_MENU_STATE                NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.IsRunning
struct UOptionMenuWBP_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ChangeInputMode
struct UOptionMenuWBP_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnRightAxisX
struct UOptionMenuWBP_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnRightAxisY
struct UOptionMenuWBP_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnLeftAxisX
struct UOptionMenuWBP_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnLeftAxisY
struct UOptionMenuWBP_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnGamePadAxisX
struct UOptionMenuWBP_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnGamePadAxisY
struct UOptionMenuWBP_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnListPaging
struct UOptionMenuWBP_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.WorldMapSlowCursorX
struct UOptionMenuWBP_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.WorldMapSlowCursorY
struct UOptionMenuWBP_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.HelpScrollAxis
struct UOptionMenuWBP_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetRightAxisX
struct UOptionMenuWBP_C_GetRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetRightAxisY
struct UOptionMenuWBP_C_GetRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetLeftAxisX
struct UOptionMenuWBP_C_GetLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetLeftAxisY
struct UOptionMenuWBP_C_GetLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetGamePadAxisX
struct UOptionMenuWBP_C_GetGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.GetGamePadAxisY
struct UOptionMenuWBP_C_GetGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SubMenu_WorldMapSlowCursorX
struct UOptionMenuWBP_C_SubMenu_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.SubMenu_WorldMapSlowCursorY
struct UOptionMenuWBP_C_SubMenu_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnUpdateState
struct UOptionMenuWBP_C_OnUpdateState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnBeginState
struct UOptionMenuWBP_C_OnBeginState_Params
{
public:
	int32                                        PrevState;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentState;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.OnEndState
struct UOptionMenuWBP_C_OnEndState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextState;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function OptionMenuWBP.OptionMenuWBP_C.ExecuteUbergraph_OptionMenuWBP
struct UOptionMenuWBP_C_ExecuteUbergraph_OptionMenuWBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


