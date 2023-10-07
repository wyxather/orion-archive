#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x3 (0x3 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnEndState
struct UBPW_MusicPlayerWidget_C_OnEndState_Params
{
public:
	enum class EMUSIC_PLAYER_WIDGET_STATE        CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnBeginState
struct UBPW_MusicPlayerWidget_C_OnBeginState_Params
{
public:
	enum class EMUSIC_PLAYER_WIDGET_STATE        CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.Debug_GetStateInfoAsString
struct UBPW_MusicPlayerWidget_C_Debug_GetStateInfoAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x17A (0x17A - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.PlayMusic
struct UBPW_MusicPlayerWidget_C_PlayMusic_Params
{
public:
	struct FItemData                             RecordItemData;                                    // 0x0(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Success;                                           // 0x120(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2F9 (0x2F9 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.GetMusicRecordItemList
struct UBPW_MusicPlayerWidget_C_GetMusicRecordItemList_Params
{
public:
	TArray<struct FItemData>                     Records;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<class FName>                          BgmLabelList;                                      // 0x10(0x10)(Parm, OutParm)
};

// 0x34 (0x34 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnListEvent
struct UBPW_MusicPlayerWidget_C_OnListEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.IsRunning
struct UBPW_MusicPlayerWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x360 (0x360 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.CreateMusicListItems
struct UBPW_MusicPlayerWidget_C_CreateMusicListItems_Params
{
public:
	TArray<struct FItemData>                     Records;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        PlayingIndex;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_671[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMJListWidgetItemData>         ListItems;                                         // 0x18(0x10)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnRightAxisX
struct UBPW_MusicPlayerWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnRightAxisY
struct UBPW_MusicPlayerWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnLeftAxisX
struct UBPW_MusicPlayerWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnLeftAxisY
struct UBPW_MusicPlayerWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnGamePadAxisX
struct UBPW_MusicPlayerWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnGamePadAxisY
struct UBPW_MusicPlayerWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.WorldMapSlowCursorX
struct UBPW_MusicPlayerWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.WorldMapSlowCursorY
struct UBPW_MusicPlayerWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.HelpScrollAxis
struct UBPW_MusicPlayerWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnListPaging
struct UBPW_MusicPlayerWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.ExecuteUbergraph_BPW_MusicPlayerWidget
struct UBPW_MusicPlayerWidget_C_ExecuteUbergraph_BPW_MusicPlayerWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


