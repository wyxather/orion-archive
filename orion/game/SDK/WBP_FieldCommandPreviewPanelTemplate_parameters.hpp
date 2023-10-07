#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x38 (0x38 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetupTemplateWithoutButton
struct UWBP_FieldCommandPreviewPanelTemplate_C_SetupTemplateWithoutButton_Params
{
public:
	class FText                                  DetailText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetCaptionText
struct UWBP_FieldCommandPreviewPanelTemplate_C_SetCaptionText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.GetActiveButtonNum
struct UWBP_FieldCommandPreviewPanelTemplate_C_GetActiveButtonNum_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.RemoveCursor
struct UWBP_FieldCommandPreviewPanelTemplate_C_RemoveCursor_Params
{
public:
	bool                                         Fast;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetCursorToDefaultPos
struct UWBP_FieldCommandPreviewPanelTemplate_C_SetCursorToDefaultPos_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.MoveCursor
struct UWBP_FieldCommandPreviewPanelTemplate_C_MoveCursor_Params
{
public:
	enum class EScrollDirection                  Dir;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.UpdateCursor
struct UWBP_FieldCommandPreviewPanelTemplate_C_UpdateCursor_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8D (0x8D - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetupTemplate
struct UWBP_FieldCommandPreviewPanelTemplate_C_SetupTemplate_Params
{
public:
	class FText                                  DetailText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          ButtonText;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<enum class EFieldCommandPreviewPanelDecideAnswer> AnswerList;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.Decide
struct UWBP_FieldCommandPreviewPanelTemplate_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer Answer;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.PreConstruct
struct UWBP_FieldCommandPreviewPanelTemplate_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanelTemplate
struct UWBP_FieldCommandPreviewPanelTemplate_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanelTemplate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


