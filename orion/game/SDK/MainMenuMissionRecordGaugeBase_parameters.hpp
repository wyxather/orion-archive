#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x9 (0x9 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetRenderPhase
struct UMainMenuMissionRecordGaugeBase_C_SetRenderPhase_Params
{
public:
	int32                                        RenderPhase;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalPhases;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetCursorVisibility
struct UMainMenuMissionRecordGaugeBase_C_SetCursorVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.GetExtraMode
struct UMainMenuMissionRecordGaugeBase_C_GetExtraMode_Params
{
public:
	bool                                         IsExtra;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x95 (0x95 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugeTextureByAreaId
struct UMainMenuMissionRecordGaugeBase_C_SetGaugeTextureByAreaId_Params
{
public:
	int32                                        AreaID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetEmblemTextureByAreaId
struct UMainMenuMissionRecordGaugeBase_C_SetEmblemTextureByAreaId_Params
{
public:
	int32                                        AreaID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetCouplingCharaNameText
struct UMainMenuMissionRecordGaugeBase_C_SetCouplingCharaNameText_Params
{
public:
	class FName                                  OnestChara;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TwobdChara;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugeTextureFromExtraStoryCategory
struct UMainMenuMissionRecordGaugeBase_C_SetGaugeTextureFromExtraStoryCategory_Params
{
public:
	enum class EEXTRA_STORY_CATEGORY             Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x161 (0x161 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugeTextureByPlayerId
struct UMainMenuMissionRecordGaugeBase_C_SetGaugeTextureByPlayerId_Params
{
public:
	enum class EPlayableCharacterID              PlayerID;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetFlipbookWithPair
struct UMainMenuMissionRecordGaugeBase_C_SetFlipbookWithPair_Params
{
public:
	class FName                                  FlipbookName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlipbookNamePair;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimationLoop;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEXTRA_STORY_CATEGORY             ExtraStory;                                        // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetFlipbook
struct UMainMenuMissionRecordGaugeBase_C_SetFlipbook_Params
{
public:
	class FName                                  FlipbookName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimationLoop;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlayableCharacterID              CharaID;                                           // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetGaugePercent
struct UMainMenuMissionRecordGaugeBase_C_SetGaugePercent_Params
{
public:
	float                                        GaugePercent;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetText
struct UMainMenuMissionRecordGaugeBase_C_SetText_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.TickUpdate
struct UMainMenuMissionRecordGaugeBase_C_TickUpdate_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetFlipbookEnable
struct UMainMenuMissionRecordGaugeBase_C_SetFlipbookEnable_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetSelectMode
struct UMainMenuMissionRecordGaugeBase_C_SetSelectMode_Params
{
public:
	bool                                         IsSelect;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.SetupGauge
struct UMainMenuMissionRecordGaugeBase_C_SetupGauge_Params
{
public:
	float                                        GaugePercent;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAnime;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.Tick
struct UMainMenuMissionRecordGaugeBase_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.OutFocus
struct UMainMenuMissionRecordGaugeBase_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.Focus
struct UMainMenuMissionRecordGaugeBase_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C.ExecuteUbergraph_MainMenuMissionRecordGaugeBase
struct UMainMenuMissionRecordGaugeBase_C_ExecuteUbergraph_MainMenuMissionRecordGaugeBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


