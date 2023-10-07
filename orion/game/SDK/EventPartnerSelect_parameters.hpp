#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.Debug_DecideUI
struct UEventPartnerSelect_C_Debug_DecideUI_Params
{
public:
	int32                                        Param;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.GetPartnerName
struct UEventPartnerSelect_C_GetPartnerName_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TextLabel;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x271 (0x271 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.GetPartnerInvadeData
struct UEventPartnerSelect_C_GetPartnerInvadeData_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInvadeData                           InvadeData;                                        // 0x8(0x128)(Parm, OutParm)
};

// 0x1D (0x1D - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.PartnerSelectConfirmDialog
struct UEventPartnerSelect_C_PartnerSelectConfirmDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.SetReference
struct UEventPartnerSelect_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.PlayCurrentFocusAnim
struct UEventPartnerSelect_C_PlayCurrentFocusAnim_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.UpdateIndex
struct UEventPartnerSelect_C_UpdateIndex_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.IsRunning
struct UEventPartnerSelect_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnRightAxisX
struct UEventPartnerSelect_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnRightAxisY
struct UEventPartnerSelect_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnLeftAxisX
struct UEventPartnerSelect_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnLeftAxisY
struct UEventPartnerSelect_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnGamePadAxisX
struct UEventPartnerSelect_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnGamePadAxisY
struct UEventPartnerSelect_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnListPaging
struct UEventPartnerSelect_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.WorldMapSlowCursorX
struct UEventPartnerSelect_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.WorldMapSlowCursorY
struct UEventPartnerSelect_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.HelpScrollAxis
struct UEventPartnerSelect_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.OnLoadedPartner
struct UEventPartnerSelect_C_OnLoadedPartner_Params
{
public:
	TArray<class UObject*>                       ObjList;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC2 (0xC2 - 0x0)
// Function EventPartnerSelect.EventPartnerSelect_C.ExecuteUbergraph_EventPartnerSelect
struct UEventPartnerSelect_C_ExecuteUbergraph_EventPartnerSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


