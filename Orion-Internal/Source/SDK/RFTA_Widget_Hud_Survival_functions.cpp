// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Hud_Survival_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Hud_Survival.Widget_Hud_Survival_C.NotifyBonus
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BonusAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::NotifyBonus(float* BonusAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.NotifyBonus");

	UWidget_Hud_Survival_C_NotifyBonus_Params params;
	params.BonusAmount = BonusAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.InitializeDetails
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::InitializeDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.InitializeDetails");

	UWidget_Hud_Survival_C_InitializeDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.PlayPanicSFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::PlayPanicSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.PlayPanicSFX");

	UWidget_Hud_Survival_C_PlayPanicSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.DetermineCountdownDeltas
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::DetermineCountdownDeltas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.DetermineCountdownDeltas");

	UWidget_Hud_Survival_C_DetermineCountdownDeltas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetBossBorder
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::SetBossBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetBossBorder");

	UWidget_Hud_Survival_C_SetBossBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.NotifyBossesKilled
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TotalNumBosses                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::NotifyBossesKilled(int* TotalNumBosses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.NotifyBossesKilled");

	UWidget_Hud_Survival_C_NotifyBossesKilled_Params params;
	params.TotalNumBosses = TotalNumBosses;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.DecrementRemainingTime
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimeToDecrement                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           NewCurrentDifficulty           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Hud_Survival_C::DecrementRemainingTime(float* TimeToDecrement, float* TimeRemaining, float* TotalDuration, int* NewCurrentDifficulty, bool* IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.DecrementRemainingTime");

	UWidget_Hud_Survival_C_DecrementRemainingTime_Params params;
	params.TimeToDecrement = TimeToDecrement;
	params.TimeRemaining = TimeRemaining;
	params.TotalDuration = TotalDuration;
	params.NewCurrentDifficulty = NewCurrentDifficulty;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetExpBar
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Exp                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::SetExpBar(float* Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetExpBar");

	UWidget_Hud_Survival_C_SetExpBar_Params params;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetFlashingCountdown
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::SetFlashingCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetFlashingCountdown");

	UWidget_Hud_Survival_C_SetFlashingCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnDifficultyIncreased
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::OnDifficultyIncreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnDifficultyIncreased");

	UWidget_Hud_Survival_C_OnDifficultyIncreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.UpdatePlayerLevel
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::UpdatePlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.UpdatePlayerLevel");

	UWidget_Hud_Survival_C_UpdatePlayerLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPlayerCurrency
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Scrap                          (Parm, OutParm)

void UWidget_Hud_Survival_C::GetPlayerCurrency(struct FText* Scrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPlayerCurrency");

	UWidget_Hud_Survival_C_GetPlayerCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scrap != nullptr)
		*Scrap = params.Scrap;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetDifficulty
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::SetDifficulty(int* Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.SetDifficulty");

	UWidget_Hud_Survival_C_SetDifficulty_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPlayerLevel
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TraitPoints                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::GetPlayerLevel(int* TraitPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPlayerLevel");

	UWidget_Hud_Survival_C_GetPlayerLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraitPoints != nullptr)
		*TraitPoints = params.TraitPoints;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPercentageOfTime
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_Hud_Survival_C::GetPercentageOfTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetPercentageOfTime");

	UWidget_Hud_Survival_C_GetPercentageOfTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetRemainingTimeText
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TimeString                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::GetRemainingTimeText(class FString* TimeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetRemainingTimeText");

	UWidget_Hud_Survival_C_GetRemainingTimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeString != nullptr)
		*TimeString = params.TimeString;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.IsPaused
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Hud_Survival_C::IsPaused(bool* IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.IsPaused");

	UWidget_Hud_Survival_C_IsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPaused != nullptr)
		*IsPaused = params.IsPaused;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetIncrementDuration
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OutDurationToIncrement         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::GetIncrementDuration(float* OutDurationToIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetIncrementDuration");

	UWidget_Hud_Survival_C_GetIncrementDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDurationToIncrement != nullptr)
		*OutDurationToIncrement = params.OutDurationToIncrement;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetRemainingTime
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::GetRemainingTime(float* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.GetRemainingTime");

	UWidget_Hud_Survival_C_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.Reset
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.Reset");

	UWidget_Hud_Survival_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.IncrementDifficultyUI
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::IncrementDifficultyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.IncrementDifficultyUI");

	UWidget_Hud_Survival_C_IncrementDifficultyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.UnpauseTimer
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         RemainingTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         IncrementDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::UnpauseTimer(float* RemainingTime, float* IncrementDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.UnpauseTimer");

	UWidget_Hud_Survival_C_UnpauseTimer_Params params;
	params.RemainingTime = RemainingTime;
	params.IncrementDuration = IncrementDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.PauseTimer
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         IncrementDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::PauseTimer(float* TimeRemaining, float* IncrementDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.PauseTimer");

	UWidget_Hud_Survival_C_PauseTimer_Params params;
	params.TimeRemaining = TimeRemaining;
	params.IncrementDuration = IncrementDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Hud_Survival_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.Construct");

	UWidget_Hud_Survival_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.Tick");

	UWidget_Hud_Survival_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnLevelUp_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::OnLevelUp_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnLevelUp_Event_1");

	UWidget_Hud_Survival_C_OnLevelUp_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.On Picked up unique
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::On_Picked_up_unique(class UInventoryComponent** Inventory, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.On Picked up unique");

	UWidget_Hud_Survival_C_On_Picked_up_unique_Params params;
	params.Inventory = Inventory;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnEXPGain
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Experience                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::OnEXPGain(float* Experience)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnEXPGain");

	UWidget_Hud_Survival_C_OnEXPGain_Params params;
	params.Experience = Experience;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnWidgetAssigned
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Hud_Survival_C::OnWidgetAssigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.OnWidgetAssigned");

	UWidget_Hud_Survival_C_OnWidgetAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Hud_Survival.Widget_Hud_Survival_C.ExecuteUbergraph_Widget_Hud_Survival
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Hud_Survival_C::ExecuteUbergraph_Widget_Hud_Survival(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Hud_Survival.Widget_Hud_Survival_C.ExecuteUbergraph_Widget_Hud_Survival");

	UWidget_Hud_Survival_C_ExecuteUbergraph_Widget_Hud_Survival_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
