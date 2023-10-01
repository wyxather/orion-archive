#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Hud_Survival_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.NotifyBonus
struct UWidget_Hud_Survival_C_NotifyBonus_Params
{
	float*                                             BonusAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.InitializeDetails
struct UWidget_Hud_Survival_C_InitializeDetails_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.PlayPanicSFX
struct UWidget_Hud_Survival_C_PlayPanicSFX_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.DetermineCountdownDeltas
struct UWidget_Hud_Survival_C_DetermineCountdownDeltas_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetBossBorder
struct UWidget_Hud_Survival_C_SetBossBorder_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.NotifyBossesKilled
struct UWidget_Hud_Survival_C_NotifyBossesKilled_Params
{
	int*                                               TotalNumBosses;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.DecrementRemainingTime
struct UWidget_Hud_Survival_C_DecrementRemainingTime_Params
{
	float*                                             TimeToDecrement;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TimeRemaining;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TotalDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               NewCurrentDifficulty;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              IsPaused;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetExpBar
struct UWidget_Hud_Survival_C_SetExpBar_Params
{
	float*                                             Exp;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetFlashingCountdown
struct UWidget_Hud_Survival_C_SetFlashingCountdown_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnDifficultyIncreased
struct UWidget_Hud_Survival_C_OnDifficultyIncreased_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.UpdatePlayerLevel
struct UWidget_Hud_Survival_C_UpdatePlayerLevel_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPlayerCurrency
struct UWidget_Hud_Survival_C_GetPlayerCurrency_Params
{
	struct FText                                       Scrap;                                                    // (Parm, OutParm)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetDifficulty
struct UWidget_Hud_Survival_C_SetDifficulty_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPlayerLevel
struct UWidget_Hud_Survival_C_GetPlayerLevel_Params
{
	int                                                TraitPoints;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPercentageOfTime
struct UWidget_Hud_Survival_C_GetPercentageOfTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetRemainingTimeText
struct UWidget_Hud_Survival_C_GetRemainingTimeText_Params
{
	class FString                                      TimeString;                                               // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.IsPaused
struct UWidget_Hud_Survival_C_IsPaused_Params
{
	bool                                               IsPaused;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetIncrementDuration
struct UWidget_Hud_Survival_C_GetIncrementDuration_Params
{
	float                                              OutDurationToIncrement;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetRemainingTime
struct UWidget_Hud_Survival_C_GetRemainingTime_Params
{
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.Reset
struct UWidget_Hud_Survival_C_Reset_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.IncrementDifficultyUI
struct UWidget_Hud_Survival_C_IncrementDifficultyUI_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.UnpauseTimer
struct UWidget_Hud_Survival_C_UnpauseTimer_Params
{
	float*                                             RemainingTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             IncrementDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.PauseTimer
struct UWidget_Hud_Survival_C_PauseTimer_Params
{
	float*                                             TimeRemaining;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             IncrementDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.Construct
struct UWidget_Hud_Survival_C_Construct_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.Tick
struct UWidget_Hud_Survival_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnLevelUp_Event_1
struct UWidget_Hud_Survival_C_OnLevelUp_Event_1_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.On Picked up unique
struct UWidget_Hud_Survival_C_On_Picked_up_unique_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnEXPGain
struct UWidget_Hud_Survival_C_OnEXPGain_Params
{
	float*                                             Experience;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnWidgetAssigned
struct UWidget_Hud_Survival_C_OnWidgetAssigned_Params
{
};

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.ExecuteUbergraph_Widget_Hud_Survival
struct UWidget_Hud_Survival_C_ExecuteUbergraph_Widget_Hud_Survival_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
