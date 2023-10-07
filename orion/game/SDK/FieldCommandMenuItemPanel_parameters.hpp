#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.GetFcCategory
struct UFieldCommandMenuItemPanel_C_GetFcCategory_Params
{
public:
	enum class EFieldCommandCategory             Fc_Category;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetDeathMatchMode
struct UFieldCommandMenuItemPanel_C_SetDeathMatchMode_Params
{
public:
	bool                                         IsDeathMatch;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetIconTexture
struct UFieldCommandMenuItemPanel_C_SetIconTexture_Params
{
public:
	enum class EMJFieldCommandType               FCType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.IsUnused
struct UFieldCommandMenuItemPanel_C_IsUnused_Params
{
public:
	bool                                         IsUnused;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x138 (0x138 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetUse
struct UFieldCommandMenuItemPanel_C_SetUse_Params
{
public:
	bool                                         IsBadConnection;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsValid;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsGrayOut;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsComplete;                                        // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFieldCommandCategory             FcCategory;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.AddTextList
struct UFieldCommandMenuItemPanel_C_AddTextList_Params
{
public:
	class FText                                  AddText;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x21 (0x21 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetShowTextIndex
struct UFieldCommandMenuItemPanel_C_SetShowTextIndex_Params
{
public:
	int32                                        ShowIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetTextList
struct UFieldCommandMenuItemPanel_C_SetTextList_Params
{
public:
	TArray<class FText>                          TextList;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        ShowIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.GetCursorPosition
struct UFieldCommandMenuItemPanel_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OutFocus
struct UFieldCommandMenuItemPanel_C_OutFocus_Params
{
public:
	bool                                         Fast;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnRightAxisX
struct UFieldCommandMenuItemPanel_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnRightAxisY
struct UFieldCommandMenuItemPanel_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnLeftAxisX
struct UFieldCommandMenuItemPanel_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnLeftAxisY
struct UFieldCommandMenuItemPanel_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnGamePadAxisX
struct UFieldCommandMenuItemPanel_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnGamePadAxisY
struct UFieldCommandMenuItemPanel_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnListPaging
struct UFieldCommandMenuItemPanel_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.WorldMapSlowCursorX
struct UFieldCommandMenuItemPanel_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.WorldMapSlowCursorY
struct UFieldCommandMenuItemPanel_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.HelpScrollAxis
struct UFieldCommandMenuItemPanel_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.Tick
struct UFieldCommandMenuItemPanel_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C (0x6C - 0x0)
// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.ExecuteUbergraph_FieldCommandMenuItemPanel
struct UFieldCommandMenuItemPanel_C_ExecuteUbergraph_FieldCommandMenuItemPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


