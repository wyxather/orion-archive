// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_HUD.Widget_HUD_C.GetSurvivalTimer
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Hud_Survival_C*  SurvivalWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::GetSurvivalTimer(class UWidget_Hud_Survival_C** SurvivalWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.GetSurvivalTimer");

	UWidget_HUD_C_GetSurvivalTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SurvivalWidget != nullptr)
		*SurvivalWidget = params.SurvivalWidget;
}


// Function Widget_HUD.Widget_HUD_C.HideMutedPing
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::HideMutedPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.HideMutedPing");

	UWidget_HUD_C_HideMutedPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.ShowMutedPing
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::ShowMutedPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.ShowMutedPing");

	UWidget_HUD_C_ShowMutedPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.IsInIntroQuest
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_C::IsInIntroQuest(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.IsInIntroQuest");

	UWidget_HUD_C_IsInIntroQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_HUD.Widget_HUD_C.UpdateDifficultyIcon
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::UpdateDifficultyIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.UpdateDifficultyIcon");

	UWidget_HUD_C_UpdateDifficultyIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.Refresh Health Bar
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::Refresh_Health_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Refresh Health Bar");

	UWidget_HUD_C_Refresh_Health_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnDamageTaken
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UWidget_HUD_C::OnDamageTaken(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnDamageTaken");

	UWidget_HUD_C_OnDamageTaken_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnCinematicStopping
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSequencerPlayerSettings* SequenceSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
// class ULevelSequence**         LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnCinematicStopping(struct FSequencerPlayerSettings* SequenceSettings, class ULevelSequence** LevelSequence, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnCinematicStopping");

	UWidget_HUD_C_OnCinematicStopping_Params params;
	params.SequenceSettings = SequenceSettings;
	params.LevelSequence = LevelSequence;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnCinematicPlaying
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSequencerPlayerSettings* SequenceSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
// class ULevelSequence**         LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnCinematicPlaying(struct FSequencerPlayerSettings* SequenceSettings, class ULevelSequence** LevelSequence, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnCinematicPlaying");

	UWidget_HUD_C_OnCinematicPlaying_Params params;
	params.SequenceSettings = SequenceSettings;
	params.LevelSequence = LevelSequence;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.BindToCinematicEvents
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::BindToCinematicEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.BindToCinematicEvents");

	UWidget_HUD_C_BindToCinematicEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.IsPlayerRelevantToCinematic
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSequencerPlayerSettings* SequencerSettings              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsRelevant                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_C::IsPlayerRelevantToCinematic(struct FSequencerPlayerSettings* SequencerSettings, bool* IsRelevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.IsPlayerRelevantToCinematic");

	UWidget_HUD_C_IsPlayerRelevantToCinematic_Params params;
	params.SequencerSettings = SequencerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRelevant != nullptr)
		*IsRelevant = params.IsRelevant;
}


// Function Widget_HUD.Widget_HUD_C.ToggleWidgetPinning
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DoUnpin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_C::ToggleWidgetPinning(bool* DoUnpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.ToggleWidgetPinning");

	UWidget_HUD_C_ToggleWidgetPinning_Params params;
	params.DoUnpin = DoUnpin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.DragonHeartVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::DragonHeartVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.DragonHeartVisibility");

	UWidget_HUD_C_DragonHeartVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_SUBS_Visibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_SUBS_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_SUBS_Visibility");

	UWidget_HUD_C_Get_SUBS_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_MAIN_Visibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_MAIN_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_MAIN_Visibility");

	UWidget_HUD_C_Get_MAIN_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_SecundaryModHolder_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_SecundaryModHolder_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_SecundaryModHolder_Visibility_1");

	UWidget_HUD_C_Get_SecundaryModHolder_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.DragonHeartQuantity
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_HUD_C::DragonHeartQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.DragonHeartQuantity");

	UWidget_HUD_C_DragonHeartQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.GetUserSetting
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  UserSetting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserSetting*            Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::GetUserSetting(struct FName* UserSetting, class UUserSetting** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.GetUserSetting");

	UWidget_HUD_C_GetUserSetting_Params params;
	params.UserSetting = UserSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_HUD.Widget_HUD_C.UpdateHUDSettings
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  UserSetting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EHudSettings>*     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         SizeMin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         SizeMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          FixedAspectRatio_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_C::UpdateHUDSettings(struct FName* UserSetting, class UWidget** Widget, TEnumAsByte<EHudSettings>* Type, float* SizeMin, float* SizeMax, bool* FixedAspectRatio_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.UpdateHUDSettings");

	UWidget_HUD_C_UpdateHUDSettings_Params params;
	params.UserSetting = UserSetting;
	params.Widget = Widget;
	params.Type = Type;
	params.SizeMin = SizeMin;
	params.SizeMax = SizeMax;
	params.FixedAspectRatio_ = FixedAspectRatio_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.HUD_1_Control
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::HUD_1_Control()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.HUD_1_Control");

	UWidget_HUD_C_HUD_1_Control_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_STA_Size
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_STA_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_STA_Size");

	UWidget_HUD_C_Get_STA_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_HP_Size
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_HP_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_HP_Size");

	UWidget_HUD_C_Get_HP_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_AltWeaponAmmo_Text_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_HUD_C::Get_AltWeaponAmmo_Text_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_AltWeaponAmmo_Text_2");

	UWidget_HUD_C_Get_AltWeaponAmmo_Text_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_TextBlock_1_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_TextBlock_1_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_TextBlock_1_Visibility_1");

	UWidget_HUD_C_Get_TextBlock_1_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.GetVisibility_1");

	UWidget_HUD_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.PopScale Dragonheart
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::PopScale_Dragonheart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.PopScale Dragonheart");

	UWidget_HUD_C_PopScale_Dragonheart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.PopScale Ammo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::PopScale_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.PopScale Ammo");

	UWidget_HUD_C_PopScale_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.Do Pop Scale
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Shift_Color                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_C::Do_Pop_Scale(class UWidget** Target, float* Duration, bool* Shift_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Do Pop Scale");

	UWidget_HUD_C_Do_Pop_Scale_Params params;
	params.Target = Target;
	params.Duration = Duration;
	params.Shift_Color = Shift_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.Get_ZoneLevel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_HUD_C::Get_ZoneLevel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_ZoneLevel_Text_1");

	UWidget_HUD_C_Get_ZoneLevel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_ChargeLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_HUD_C::Get_ChargeLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_ChargeLabel_Text_1");

	UWidget_HUD_C_Get_ChargeLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_AltWeaponAmmo_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_HUD_C::Get_AltWeaponAmmo_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_AltWeaponAmmo_Text_1");

	UWidget_HUD_C_Get_AltWeaponAmmo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_AltWeaponIcon_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_HUD_C::Get_AltWeaponIcon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_AltWeaponIcon_Brush_1");

	UWidget_HUD_C_Get_AltWeaponIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.GetAltRangedWeapon
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARangedWeapon*           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::GetAltRangedWeapon(class ARangedWeapon** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.GetAltRangedWeapon");

	UWidget_HUD_C_GetAltRangedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_HUD.Widget_HUD_C.GetActiveRangedWeapon
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARangedWeapon*           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::GetActiveRangedWeapon(class ARangedWeapon** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.GetActiveRangedWeapon");

	UWidget_HUD_C_GetActiveRangedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_HUD.Widget_HUD_C.Get_Ammo_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_HUD_C::Get_Ammo_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_Ammo_Text_1");

	UWidget_HUD_C_Get_Ammo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_WeaponIcon_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_HUD_C::Get_WeaponIcon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_WeaponIcon_Brush_1");

	UWidget_HUD_C_Get_WeaponIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_InGameHUD_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_InGameHUD_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_InGameHUD_Visibility_1");

	UWidget_HUD_C_Get_InGameHUD_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.GetHud
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATPSHud_C*               HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::GetHud(class ATPSHud_C** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.GetHud");

	UWidget_HUD_C_GetHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function Widget_HUD.Widget_HUD_C.Get_ChargeProgress_Percent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_HUD_C::Get_ChargeProgress_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_ChargeProgress_Percent_1");

	UWidget_HUD_C_Get_ChargeProgress_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_ChargeProgress_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_C::Get_ChargeProgress_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_ChargeProgress_Visibility_1");

	UWidget_HUD_C_Get_ChargeProgress_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_Ammo_In_Clip
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_HUD_C::Get_Ammo_In_Clip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_Ammo_In_Clip");

	UWidget_HUD_C_Get_Ammo_In_Clip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.Get_StaminaBar_Percent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_HUD_C::Get_StaminaBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Get_StaminaBar_Percent_1");

	UWidget_HUD_C_Get_StaminaBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD.Widget_HUD_C.OnHudEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHudEvent(struct FName* Event, class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHudEvent");

	UWidget_HUD_C_OnHudEvent_Params params;
	params.Event = Event;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.Construct");

	UWidget_HUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnNotifyTakeDamage_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWidget_HUD_C::OnNotifyTakeDamage_Event_1(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnNotifyTakeDamage_Event_1");

	UWidget_HUD_C_OnNotifyTakeDamage_Event_1_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnVitalityChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVitalityComponent**     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnVitalityChanged_Event_1(class UVitalityComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnVitalityChanged_Event_1");

	UWidget_HUD_C_OnVitalityChanged_Event_1_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.ShowSummonPopup
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  SummonerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::ShowSummonPopup(struct FName* SummonerName, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.ShowSummonPopup");

	UWidget_HUD_C_ShowSummonPopup_Params params;
	params.SummonerName = SummonerName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.HideSummonPopup
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::HideSummonPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.HideSummonPopup");

	UWidget_HUD_C_HideSummonPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.fade
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFadeDirection*                Fade_Direction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::fade(EFadeDirection* Fade_Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.fade");

	UWidget_HUD_C_fade_Params params;
	params.Fade_Direction = Fade_Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnHUDOpacityChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHUDOpacityChanged(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHUDOpacityChanged");

	UWidget_HUD_C_OnHUDOpacityChanged_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Size_HUD1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHUDChanged_Size_HUD1(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Size_HUD1");

	UWidget_HUD_C_OnHUDChanged_Size_HUD1_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Size_HUD2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHUDChanged_Size_HUD2(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Size_HUD2");

	UWidget_HUD_C_OnHUDChanged_Size_HUD2_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Opacity_Minimap
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHUDChanged_Opacity_Minimap(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Opacity_Minimap");

	UWidget_HUD_C_OnHUDChanged_Opacity_Minimap_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.HurtAnimation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_C::HurtAnimation(float* Percentage, bool* DamageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.HurtAnimation");

	UWidget_HUD_C_HurtAnimation_Params params;
	params.Percentage = Percentage;
	params.DamageTaken = DamageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.EnteringZoneAnimation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ZoneName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_HUD_C::EnteringZoneAnimation(struct FText* ZoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.EnteringZoneAnimation");

	UWidget_HUD_C_EnteringZoneAnimation_Params params;
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnPrimaryWeaponChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::OnPrimaryWeaponChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnPrimaryWeaponChanged");

	UWidget_HUD_C_OnPrimaryWeaponChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.RetractAnimationEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::RetractAnimationEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.RetractAnimationEvent");

	UWidget_HUD_C_RetractAnimationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.ExpandAnimationEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::ExpandAnimationEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.ExpandAnimationEvent");

	UWidget_HUD_C_ExpandAnimationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_ExpandOrNot
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHUDChanged_ExpandOrNot(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHUDChanged_ExpandOrNot");

	UWidget_HUD_C_OnHUDChanged_ExpandOrNot_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.SwapWeaponsAnimation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::SwapWeaponsAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.SwapWeaponsAnimation");

	UWidget_HUD_C_SwapWeaponsAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnEquipmentActivated
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquipment**             Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnEquipmentActivated(class AEquipment** Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnEquipmentActivated");

	UWidget_HUD_C_OnEquipmentActivated_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnWoundedState_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnWoundedState_Event_1(class UWoundedComponent** WoundedComponent, EWoundedState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnWoundedState_Event_1");

	UWidget_HUD_C_OnWoundedState_Event_1_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnHandGunAmmoChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVitalityComponent**     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHandGunAmmoChanged(class UVitalityComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHandGunAmmoChanged");

	UWidget_HUD_C_OnHandGunAmmoChanged_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnLongGunAmmoChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVitalityComponent**     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnLongGunAmmoChanged(class UVitalityComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnLongGunAmmoChanged");

	UWidget_HUD_C_OnLongGunAmmoChanged_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnAmmoUpdate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::OnAmmoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnAmmoUpdate");

	UWidget_HUD_C_OnAmmoUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnInventoryUpdated
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::OnInventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnInventoryUpdated");

	UWidget_HUD_C_OnInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.OnHealthChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::OnHealthChanged(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.OnHealthChanged");

	UWidget_HUD_C_OnHealthChanged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.ResetIconCache
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::ResetIconCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.ResetIconCache");

	UWidget_HUD_C_ResetIconCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.ManualUpdateAmmoCounts
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_C::ManualUpdateAmmoCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.ManualUpdateAmmoCounts");

	UWidget_HUD_C_ManualUpdateAmmoCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD.Widget_HUD_C.ExecuteUbergraph_Widget_HUD
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_C::ExecuteUbergraph_Widget_HUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD.Widget_HUD_C.ExecuteUbergraph_Widget_HUD");

	UWidget_HUD_C_ExecuteUbergraph_Widget_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
