#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function UIMainTitle.UIMainTitle_C.SetupNewGameForAutoPlay
struct UUIMainTitle_C_SetupNewGameForAutoPlay_Params
{
public:
	int32                                        PlayerCharaId;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function UIMainTitle.UIMainTitle_C.SetTitleScene
struct UUIMainTitle_C_SetTitleScene_Params
{
public:
	class UTitleBase*                            Scene;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUITitleFlow                      Flow;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UIMainTitle.UIMainTitle_C.Debug_PrintFinishScene
struct UUIMainTitle_C_Debug_PrintFinishScene_Params
{
public:
	enum class EUITitleFlow                      Scene;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UIMainTitle.UIMainTitle_C.Debug_PrintStartScene
struct UUIMainTitle_C_Debug_PrintStartScene_Params
{
public:
	enum class EUITitleFlow                      Scene;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UIMainTitle.UIMainTitle_C.GetSceneFunction
struct UUIMainTitle_C_GetSceneFunction_Params
{
public:
	uint8                                        InByte;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1198[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTitleBase*                            Output;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function UIMainTitle.UIMainTitle_C.Debug_GetStateInfoAsString
struct UUIMainTitle_C_Debug_GetStateInfoAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function UIMainTitle.UIMainTitle_C.IsAvailableTimeChange
struct UUIMainTitle_C_IsAvailableTimeChange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UIMainTitle.UIMainTitle_C.IsRunning
struct UUIMainTitle_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function UIMainTitle.UIMainTitle_C.Set Title Scene OLD
struct UUIMainTitle_C_Set_Title_Scene_OLD_Params
{
public:
	class UTitleBase*                            Scene;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUITitleFlow                      Flow;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB2 (0xB2 - 0x0)
// Function UIMainTitle.UIMainTitle_C.CheckLoad
struct UUIMainTitle_C_CheckLoad_Params
{
public:
	bool                                         OK;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xFB (0xFB - 0x0)
// Function UIMainTitle.UIMainTitle_C.CheckReady_DEPRECATED
struct UUIMainTitle_C_CheckReady_DEPRECATED_Params
{
public:
	enum class EUITitleFlow                      Scene;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OK;                                                // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5B (0x5B - 0x0)
// Function UIMainTitle.UIMainTitle_C.CheckLoadComplete
struct UUIMainTitle_C_CheckLoadComplete_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnIsPlayerInput
struct UUIMainTitle_C_OnIsPlayerInput_Params
{
public:
	bool                                         IsPlayerInput;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UIMainTitle.UIMainTitle_C.IsCompliteInitializing
struct UUIMainTitle_C_IsCompliteInitializing_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UIMainTitle.UIMainTitle_C.SetupTitleBack
struct UUIMainTitle_C_SetupTitleBack_Params
{
public:
	bool                                         BackSceneEnable;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x62 (0x62 - 0x0)
// Function UIMainTitle.UIMainTitle_C.TitleLoadGame
struct UUIMainTitle_C_TitleLoadGame_Params
{
public:
	bool                                         IsEnd;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function UIMainTitle.UIMainTitle_C.TitleNewGame
struct UUIMainTitle_C_TitleNewGame_Params
{
public:
	bool                                         IsEnd;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x269 (0x269 - 0x0)
// Function UIMainTitle.UIMainTitle_C.CreateTitleUI
struct UUIMainTitle_C_CreateTitleUI_Params
{
public:
	enum class EUITitleFlow                      Flow;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnGamePadAxisX
struct UUIMainTitle_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnGamePadAxisY
struct UUIMainTitle_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnListPaging
struct UUIMainTitle_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.HelpScrollAxis
struct UUIMainTitle_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UIMainTitle.UIMainTitle_C.Tick
struct UUIMainTitle_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnRightAxisX
struct UUIMainTitle_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnRightAxisY
struct UUIMainTitle_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnLeftAxisX
struct UUIMainTitle_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.OnLeftAxisY
struct UUIMainTitle_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.WorldMapSlowCursorX
struct UUIMainTitle_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIMainTitle.UIMainTitle_C.WorldMapSlowCursorY
struct UUIMainTitle_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x389 (0x389 - 0x0)
// Function UIMainTitle.UIMainTitle_C.ExecuteUbergraph_UIMainTitle
struct UUIMainTitle_C_ExecuteUbergraph_UIMainTitle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


