#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x44 (0x44 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.IsNotEqualCommands
struct UFieldCommandPopupWidget_C_IsNotEqualCommands_Params
{
public:
	TArray<enum class EMJFieldCommandType>       A;                                                 // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<enum class EMJFieldCommandType>       B;                                                 // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.HideTemporaryInternal
struct UFieldCommandPopupWidget_C_HideTemporaryInternal_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWIDGET_TEMPORARY_HIDE_USER       HideUser;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.Tick
struct UFieldCommandPopupWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.Open
struct UFieldCommandPopupWidget_C_Open_Params
{
public:
	class AKSCharacterBase*                      TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EMJFieldCommandType>       Commands;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2A9 (0x2A9 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.SetupUICommand
struct UFieldCommandPopupWidget_C_SetupUICommand_Params
{
public:
	TArray<enum class EMJFieldCommandType>       CurrentFC;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x71 (0x71 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.SetupCommand
struct UFieldCommandPopupWidget_C_SetupCommand_Params
{
public:
	TArray<enum class EMJFieldCommandType>       Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnRightAxisX
struct UFieldCommandPopupWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnRightAxisY
struct UFieldCommandPopupWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnLeftAxisX
struct UFieldCommandPopupWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnLeftAxisY
struct UFieldCommandPopupWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnGamePadAxisX
struct UFieldCommandPopupWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnGamePadAxisY
struct UFieldCommandPopupWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnListPaging
struct UFieldCommandPopupWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.WorldMapSlowCursorX
struct UFieldCommandPopupWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.WorldMapSlowCursorY
struct UFieldCommandPopupWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.HelpScrollAxis
struct UFieldCommandPopupWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnChangeTimeZone
struct UFieldCommandPopupWidget_C_OnChangeTimeZone_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FB3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.OnEndEvent
struct UFieldCommandPopupWidget_C_OnEndEvent_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.ChangeInputMode
struct UFieldCommandPopupWidget_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x123 (0x123 - 0x0)
// Function FieldCommandPopupWidget.FieldCommandPopupWidget_C.ExecuteUbergraph_FieldCommandPopupWidget
struct UFieldCommandPopupWidget_C_ExecuteUbergraph_FieldCommandPopupWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


