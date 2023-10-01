// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_TPSHud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TPSHud.TPSHud_C.ClearLocalPlayerAimTarget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ClearLocalPlayerAimTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ClearLocalPlayerAimTarget");

	ATPSHud_C_ClearLocalPlayerAimTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ClearAllCheckpointNotifications
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ClearAllCheckpointNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ClearAllCheckpointNotifications");

	ATPSHud_C_ClearAllCheckpointNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.RemoveCheckpointNotification
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::RemoveCheckpointNotification(struct FName* NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.RemoveCheckpointNotification");

	ATPSHud_C_RemoveCheckpointNotification_Params params;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.IsCheckpointNotificationActive
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::IsCheckpointNotificationActive(struct FName* NameID, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.IsCheckpointNotificationActive");

	ATPSHud_C_IsCheckpointNotificationActive_Params params;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function TPSHud.TPSHud_C.AddCheckpointNotification
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         TimeOverride                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::AddCheckpointNotification(struct FName* NameID, float* TimeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.AddCheckpointNotification");

	ATPSHud_C_AddCheckpointNotification_Params params;
	params.NameID = NameID;
	params.TimeOverride = TimeOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.AddNotifications
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::AddNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.AddNotifications");

	ATPSHud_C_AddNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.RemoveNotifications
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::RemoveNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.RemoveNotifications");

	ATPSHud_C_RemoveNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowCinematicMenu
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerGunfire*>  RelevantPlayers                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::ShowCinematicMenu(class ULevelSequence** LevelSequence, class AActor** Instigator, TArray<class APlayerGunfire*>* RelevantPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowCinematicMenu");

	ATPSHud_C_ShowCinematicMenu_Params params;
	params.LevelSequence = LevelSequence;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantPlayers != nullptr)
		*RelevantPlayers = params.RelevantPlayers;
}


// Function TPSHud.TPSHud_C.ShouldShowCinematicMenu
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSequencerPlayerSettings* SequencerSettings              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ShouldShow                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::ShouldShowCinematicMenu(struct FSequencerPlayerSettings* SequencerSettings, bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShouldShowCinematicMenu");

	ATPSHud_C_ShouldShowCinematicMenu_Params params;
	params.SequencerSettings = SequencerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShow != nullptr)
		*ShouldShow = params.ShouldShow;
}


// Function TPSHud.TPSHud_C.ToggleHUDVisibilityAndPinnedWidgets
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ToggleHUDVisibilityAndPinnedWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ToggleHUDVisibilityAndPinnedWidgets");

	ATPSHud_C_ToggleHUDVisibilityAndPinnedWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.DisplayCinematicUI
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSequencerPlayerSettings* SequenceSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
// class ULevelSequence**         LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::DisplayCinematicUI(struct FSequencerPlayerSettings* SequenceSettings, class ULevelSequence** LevelSequence, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.DisplayCinematicUI");

	ATPSHud_C_DisplayCinematicUI_Params params;
	params.SequenceSettings = SequenceSettings;
	params.LevelSequence = LevelSequence;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowJoinSpectate
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ShowJoinSpectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowJoinSpectate");

	ATPSHud_C_ShowJoinSpectate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ClearHealthBarOnModeChange
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingRangedWeapon            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::ClearHealthBarOnModeChange(bool* IsUsingRangedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ClearHealthBarOnModeChange");

	ATPSHud_C_ClearHealthBarOnModeChange_Params params;
	params.IsUsingRangedWeapon = IsUsingRangedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ValidateCurrentHealthBar
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      OwningCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         MaximumHealthBarDistance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         MinimumHealthBarDistance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::ValidateCurrentHealthBar(class ACharacterGunfire** OwningCharacter, float* MaximumHealthBarDistance, float* MinimumHealthBarDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ValidateCurrentHealthBar");

	ATPSHud_C_ValidateCurrentHealthBar_Params params;
	params.OwningCharacter = OwningCharacter;
	params.MaximumHealthBarDistance = MaximumHealthBarDistance;
	params.MinimumHealthBarDistance = MinimumHealthBarDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.TryUpdateHealthBar
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      OwningCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         MaximumHealthBarDistance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         MinimumHealthBarDistance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::TryUpdateHealthBar(class AActor** Target, class ACharacterGunfire** OwningCharacter, float* MaximumHealthBarDistance, float* MinimumHealthBarDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.TryUpdateHealthBar");

	ATPSHud_C_TryUpdateHealthBar_Params params;
	params.Target = Target;
	params.OwningCharacter = OwningCharacter;
	params.MaximumHealthBarDistance = MaximumHealthBarDistance;
	params.MinimumHealthBarDistance = MinimumHealthBarDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.FadeInHUD
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::FadeInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.FadeInHUD");

	ATPSHud_C_FadeInHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.FadeOutHUD
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::FadeOutHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.FadeOutHUD");

	ATPSHud_C_FadeOutHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ClearHealthBar
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ClearHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ClearHealthBar");

	ATPSHud_C_ClearHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.UpdateWidgetVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::UpdateWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.UpdateWidgetVisibility");

	ATPSHud_C_UpdateWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowUtilityRadial
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ShowUtilityRadial()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowUtilityRadial");

	ATPSHud_C_ShowUtilityRadial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowConsumableRadial
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ShowConsumableRadial()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowConsumableRadial");

	ATPSHud_C_ShowConsumableRadial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.FadeIn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::FadeIn(struct FName* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.FadeIn");

	ATPSHud_C_FadeIn_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.FadeOut
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::FadeOut(struct FName* Reason, bool* Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.FadeOut");

	ATPSHud_C_FadeOut_Params params;
	params.Reason = Reason;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.UpdateAimTarget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::UpdateAimTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.UpdateAimTarget");

	ATPSHud_C_UpdateAimTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowDeathScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ShowDeathScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowDeathScreen");

	ATPSHud_C_ShowDeathScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.EvaluateHudVisibility
// 00007FF6F8B35350
// (Private, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::EvaluateHudVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.EvaluateHudVisibility");

	ATPSHud_C_EvaluateHudVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.SetHUDVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::SetHUDVisibility(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.SetHUDVisibility");

	ATPSHud_C_SetHUDVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.RemoveHud
// 00007FF6F8B35350
// (Private, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::RemoveHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.RemoveHud");

	ATPSHud_C_RemoveHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.IsRelevant
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire**      Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::IsRelevant(class ACharacterGunfire** Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.IsRelevant");

	ATPSHud_C_IsRelevant_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function TPSHud.TPSHud_C.Show Loading
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::Show_Loading(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.Show Loading");

	ATPSHud_C_Show_Loading_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ForceHideHUD
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::ForceHideHUD(bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ForceHideHUD");

	ATPSHud_C_ForceHideHUD_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.HideSubtitle
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::HideSubtitle(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.HideSubtitle");

	ATPSHud_C_HideSubtitle_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowSubtitle
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ATPSHud_C::ShowSubtitle(class AActor** Context, struct FName* Speaker, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowSubtitle");

	ATPSHud_C_ShowSubtitle_Params params;
	params.Context = Context;
	params.Speaker = Speaker;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.UpdateRelevantBoss
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::UpdateRelevantBoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.UpdateRelevantBoss");

	ATPSHud_C_UpdateRelevantBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.UnregisterBoss
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Boss                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::UnregisterBoss(class ACharacterGunfire** Boss)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.UnregisterBoss");

	ATPSHud_C_UnregisterBoss_Params params;
	params.Boss = Boss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.RegisterBoss
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Boss                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::RegisterBoss(class ACharacterGunfire** Boss)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.RegisterBoss");

	ATPSHud_C_RegisterBoss_Params params;
	params.Boss = Boss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowInGameMenu
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADialog_InGameMenu_C*    Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::ShowInGameMenu(class ADialog_InGameMenu_C** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowInGameMenu");

	ATPSHud_C_ShowInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function TPSHud.TPSHud_C.InpActEvt_Menu_K2Node_InputActionEvent_10
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_Menu_K2Node_InputActionEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_Menu_K2Node_InputActionEvent_10");

	ATPSHud_C_InpActEvt_Menu_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9");

	ATPSHud_C_InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_Menu_Traits_K2Node_InputActionEvent_8
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_Menu_Traits_K2Node_InputActionEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_Menu_Traits_K2Node_InputActionEvent_8");

	ATPSHud_C_InpActEvt_Menu_Traits_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_Menu_Options_K2Node_InputActionEvent_7
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_Menu_Options_K2Node_InputActionEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_Menu_Options_K2Node_InputActionEvent_7");

	ATPSHud_C_InpActEvt_Menu_Options_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_MiniMap_K2Node_InputActionEvent_6
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_MiniMap_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_MiniMap_K2Node_InputActionEvent_6");

	ATPSHud_C_InpActEvt_MiniMap_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5");

	ATPSHud_C_InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4");

	ATPSHud_C_InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3");

	ATPSHud_C_InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2");

	ATPSHud_C_InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnLoaded_11518D56437970EB654D3DBB78C12EA1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::OnLoaded_11518D56437970EB654D3DBB78C12EA1(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnLoaded_11518D56437970EB654D3DBB78C12EA1");

	ATPSHud_C_OnLoaded_11518D56437970EB654D3DBB78C12EA1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_Menu_Character_K2Node_InputActionEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_Menu_Character_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_Menu_Character_K2Node_InputActionEvent_1");

	ATPSHud_C_InpActEvt_Menu_Character_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATPSHud_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.InpActEvt_Escape_K2Node_InputKeyEvent_1");

	ATPSHud_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnStartPendingTravel
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ATPSHud_C::OnStartPendingTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnStartPendingTravel");

	ATPSHud_C_OnStartPendingTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnStopPendingTravel
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ATPSHud_C::OnStopPendingTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnStopPendingTravel");

	ATPSHud_C_OnStopPendingTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowCharacterMenu
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ShowCharacterMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowCharacterMenu");

	ATPSHud_C_ShowCharacterMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ShowDethMenu
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ShowDethMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ShowDethMenu");

	ATPSHud_C_ShowDethMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.Held Mini Map
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ATPSHud_C::Held_Mini_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.Held Mini Map");

	ATPSHud_C_Held_Mini_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ReceiveTick");

	ATPSHud_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  InteractiveState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature(class AActor** Actor, struct FName* InteractiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature");

	ATPSHud_C_BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.InteractiveState = InteractiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.PawnChanged
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::PawnChanged(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.PawnChanged");

	ATPSHud_C_PawnChanged_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnHudEvent
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  EventID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::OnHudEvent(struct FName* EventID, class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnHudEvent");

	ATPSHud_C_OnHudEvent_Params params;
	params.EventID = EventID;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ATPSHud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ReceiveBeginPlay");

	ATPSHud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnDialogBegin
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AUIActor**               Dialog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::OnDialogBegin(class AUIActor** Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnDialogBegin");

	ATPSHud_C_OnDialogBegin_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnDialogEnd
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AUIActor**               Dialog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::OnDialogEnd(class AUIActor** Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnDialogEnd");

	ATPSHud_C_OnDialogEnd_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnSetVisbility
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATPSHud_C::OnSetVisbility(bool* bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnSetVisbility");

	ATPSHud_C_OnSetVisbility_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ReceiveEndPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ReceiveEndPlay");

	ATPSHud_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnPrimaryWeaponChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ATPSHud_C::OnPrimaryWeaponChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnPrimaryWeaponChanged");

	ATPSHud_C_OnPrimaryWeaponChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.CustomEvent_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSequencerPlayerSettings* Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class ULevelSequence**         CurrentSequence                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::CustomEvent_1(struct FSequencerPlayerSettings* Settings, class ULevelSequence** CurrentSequence, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.CustomEvent_1");

	ATPSHud_C_CustomEvent_1_Params params;
	params.Settings = Settings;
	params.CurrentSequence = CurrentSequence;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ManualUpdateAmmoCounts
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ManualUpdateAmmoCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ManualUpdateAmmoCounts");

	ATPSHud_C_ManualUpdateAmmoCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ClearNotifications
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ATPSHud_C::ClearNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ClearNotifications");

	ATPSHud_C_ClearNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.ExecuteUbergraph_TPSHud
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::ExecuteUbergraph_TPSHud(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.ExecuteUbergraph_TPSHud");

	ATPSHud_C_ExecuteUbergraph_TPSHud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnHudWidgetAssigned__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATPSHud_C::OnHudWidgetAssigned__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnHudWidgetAssigned__DelegateSignature");

	ATPSHud_C_OnHudWidgetAssigned__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnBossNotRelevant__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::OnBossNotRelevant__DelegateSignature(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnBossNotRelevant__DelegateSignature");

	ATPSHud_C_OnBossNotRelevant__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnBossRelevant__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::OnBossRelevant__DelegateSignature(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnBossRelevant__DelegateSignature");

	ATPSHud_C_OnBossRelevant__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnHideSubtitle__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATPSHud_C::OnHideSubtitle__DelegateSignature(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnHideSubtitle__DelegateSignature");

	ATPSHud_C_OnHideSubtitle__DelegateSignature_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPSHud.TPSHud_C.OnShowSubtitle__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ATPSHud_C::OnShowSubtitle__DelegateSignature(class AActor** Context, struct FName* Speaker, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSHud.TPSHud_C.OnShowSubtitle__DelegateSignature");

	ATPSHud_C_OnShowSubtitle__DelegateSignature_Params params;
	params.Context = Context;
	params.Speaker = Speaker;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
