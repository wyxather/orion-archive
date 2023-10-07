#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xD8 (0xD8 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.GetHearScreenShotResource
struct UWBP_FieldCommandPreviewPanel_Hear_C_GetHearScreenShotResource_Params
{
public:
	bool                                         FristTime;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.GetCanPlayCloseSe
struct UWBP_FieldCommandPreviewPanel_Hear_C_GetCanPlayCloseSe_Params
{
public:
	bool                                         CanPlay;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.SetupNpcStatus
struct UWBP_FieldCommandPreviewPanel_Hear_C_SetupNpcStatus_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Open
struct UWBP_FieldCommandPreviewPanel_Hear_C_Open_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Close
struct UWBP_FieldCommandPreviewPanel_Hear_C_Close_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.CanCloseState
struct UWBP_FieldCommandPreviewPanel_Hear_C_CanCloseState_Params
{
public:
	enum class EFieldCommandPreviewMenuState     NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.AddDeltaTime
struct UWBP_FieldCommandPreviewPanel_Hear_C_AddDeltaTime_Params
{
public:
	float                                        TickDelta;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD6 (0xD6 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.UpdateSpecialState
struct UWBP_FieldCommandPreviewPanel_Hear_C_UpdateSpecialState_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Decide
struct UWBP_FieldCommandPreviewPanel_Hear_C_Decide_Params
{
public:
	enum class EFieldCommandPreviewPanelDecideAnswer NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.SetupPanel
struct UWBP_FieldCommandPreviewPanel_Hear_C_SetupPanel_Params
{
public:
	class ABP_FCv2_FieldCommandFlowBase_C*       Flow;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Tick
struct UWBP_FieldCommandPreviewPanel_Hear_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hear
struct UWBP_FieldCommandPreviewPanel_Hear_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hear_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


