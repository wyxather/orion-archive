#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xC (0xC - 0x0)
// Function UITutorial.UITutorial_C.SetBGFocus
struct UUITutorial_C_SetBGFocus_Params
{
public:
	class UUITutorialCommonUI_C*                 Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function UITutorial.UITutorial_C.OpenTutorial
struct UUITutorial_C_OpenTutorial_Params
{
public:
	TArray<struct FDataTableTutorialPageData>    TopPageData;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETUTORIAL_TYPE                    TutorialType;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEndCard;                                         // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsEpilouge;                                        // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x13(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UITutorial.UITutorial_C.ForceTutorialClose
struct UUITutorial_C_ForceTutorialClose_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.IsChangeStateCloseFinish
struct UUITutorial_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.IsChangeStateOpenFinish
struct UUITutorial_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xF2 (0xF2 - 0x0)
// Function UITutorial.UITutorial_C.SetupTutorialPage
struct UUITutorial_C_SetupTutorialPage_Params
{
public:
	bool                                         NowPage;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_473[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableTutorialPageData            TutorialPageData;                                  // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x71 (0x71 - 0x0)
// Function UITutorial.UITutorial_C.SetupTemplate
struct UUITutorial_C_SetupTemplate_Params
{
public:
	struct FDataTableTutorialPageData            TutorialPageData;                                  // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UUITutorialTemplateBase*               Template;                                          // 0x38(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function UITutorial.UITutorial_C.AddTemplateList
struct UUITutorial_C_AddTemplateList_Params
{
public:
	class UUITutorialTemplateBase*               AddTemplate;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function UITutorial.UITutorial_C.GetTemplateFromList
struct UUITutorial_C_GetTemplateFromList_Params
{
public:
	int32                                        TemplateType;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUITutorialTemplateBase*               Template;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccess;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UITutorial.UITutorial_C.IsRunning
struct UUITutorial_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.OnRightAxisX
struct UUITutorial_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.OnRightAxisY
struct UUITutorial_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.OnLeftAxisX
struct UUITutorial_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.OnLeftAxisY
struct UUITutorial_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.OnGamePadAxisX
struct UUITutorial_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.OnGamePadAxisY
struct UUITutorial_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UITutorial.UITutorial_C.OnListPaging
struct UUITutorial_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.WorldMapSlowCursorX
struct UUITutorial_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.WorldMapSlowCursorY
struct UUITutorial_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UITutorial.UITutorial_C.HelpScrollAxis
struct UUITutorial_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UITutorial.UITutorial_C.ChangeInputMode
struct UUITutorial_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function UITutorial.UITutorial_C.ExecuteUbergraph_UITutorial
struct UUITutorial_C_ExecuteUbergraph_UITutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


