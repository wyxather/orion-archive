#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xC (0xC - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.UpdateGlobe
struct UWBP_3DPlayerSelectWidget_C_UpdateGlobe_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.IsClosing
struct UWBP_3DPlayerSelectWidget_C_IsClosing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.IsOpening
struct UWBP_3DPlayerSelectWidget_C_IsOpening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.UpdateTimeZone
struct UWBP_3DPlayerSelectWidget_C_UpdateTimeZone_Params
{
public:
	enum class ETimeZoneType                     TimeZone;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OnClosedConfrimDialog
struct UWBP_3DPlayerSelectWidget_C_OnClosedConfrimDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.Tick
struct UWBP_3DPlayerSelectWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetIconByPlayerSwitchOrder
struct UWBP_3DPlayerSelectWidget_C_GetIconByPlayerSwitchOrder_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorldMapIconBase*                     Array_Element;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetAutoRotateSpeed
struct UWBP_3DPlayerSelectWidget_C_GetAutoRotateSpeed_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetCursorSnapDuration
struct UWBP_3DPlayerSelectWidget_C_GetCursorSnapDuration_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetCursorSnapDistance
struct UWBP_3DPlayerSelectWidget_C_GetCursorSnapDistance_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.Get Current Normalized TIme
struct UWBP_3DPlayerSelectWidget_C_Get_Current_Normalized_TIme_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.SetCurrentNormalizedTime
struct UWBP_3DPlayerSelectWidget_C_SetCurrentNormalizedTime_Params
{
public:
	float                                        CurrentNormalizedTIme;                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetFastRotateGlobeLine
struct UWBP_3DPlayerSelectWidget_C_GetFastRotateGlobeLine_Params
{
public:
	struct FVector2D                             Param;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x109 (0x109 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.SwitchSelectCharacter
struct UWBP_3DPlayerSelectWidget_C_SwitchSelectCharacter_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.CancelMenu
struct UWBP_3DPlayerSelectWidget_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetIsEndPlayerSelect
struct UWBP_3DPlayerSelectWidget_C_GetIsEndPlayerSelect_Params
{
public:
	bool                                         GetIsFinishedPlayerSelect;                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetSelectedPlayer
struct UWBP_3DPlayerSelectWidget_C_GetSelectedPlayer_Params
{
public:
	enum class EPlayableCharacterID              Player_Chara_Id;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.ExecuteUbergraph_WBP_3DPlayerSelectWidget
struct UWBP_3DPlayerSelectWidget_C_ExecuteUbergraph_WBP_3DPlayerSelectWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


