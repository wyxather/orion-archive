#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x27 (0x27 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.Initialize
struct UTitlePlayerSelect_C_Initialize_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.SetupNewGame
struct UTitlePlayerSelect_C_SetupNewGame_Params
{
public:
	enum class EPlayableCharacterID              PlayerCharaId;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.IsChangingTime
struct UTitlePlayerSelect_C_IsChangingTime_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.SetCurrentTime
struct UTitlePlayerSelect_C_SetCurrentTime_Params
{
public:
	float                                        CurrentTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.ChangeTime
struct UTitlePlayerSelect_C_ChangeTime_Params
{
public:
	enum class ETimeZoneType                     Time;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInitialize;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsTimeChanged;                                     // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnFocusPlayer
struct UTitlePlayerSelect_C_OnFocusPlayer_Params
{
public:
	bool                                         IsSelect;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.StartMainStory
struct UTitlePlayerSelect_C_StartMainStory_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.IsEnd
struct UTitlePlayerSelect_C_IsEnd_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnRightAxisX
struct UTitlePlayerSelect_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnRightAxisY
struct UTitlePlayerSelect_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnGamePadAxisX
struct UTitlePlayerSelect_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnGamePadAxisY
struct UTitlePlayerSelect_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnListPaging
struct UTitlePlayerSelect_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.HelpScrollAxis
struct UTitlePlayerSelect_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnLeftAxisY
struct UTitlePlayerSelect_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.OnLeftAxisX
struct UTitlePlayerSelect_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.WorldMapSlowCursorX
struct UTitlePlayerSelect_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.WorldMapSlowCursorY
struct UTitlePlayerSelect_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function TitlePlayerSelect.TitlePlayerSelect_C.ExecuteUbergraph_TitlePlayerSelect
struct UTitlePlayerSelect_C_ExecuteUbergraph_TitlePlayerSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


