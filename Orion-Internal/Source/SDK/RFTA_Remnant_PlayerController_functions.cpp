// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Remnant_PlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Remnant_PlayerController.Remnant_PlayerController_C.RemoveStartingLevelEquipment
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ARemnant_PlayerController_C::RemoveStartingLevelEquipment(TSoftObjectPtr<class UClass>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.RemoveStartingLevelEquipment");

	ARemnant_PlayerController_C_RemoveStartingLevelEquipment_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.PlaySurvivalNotification
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DurationOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::PlaySurvivalNotification(struct FName* NameID, float* DurationOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.PlaySurvivalNotification");

	ARemnant_PlayerController_C_PlaySurvivalNotification_Params params;
	params.NameID = NameID;
	params.DurationOverride = DurationOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShouldShowQuestInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARemnant_PlayerController_C::ShouldShowQuestInventory(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShouldShowQuestInventory");

	ARemnant_PlayerController_C_ShouldShowQuestInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShow != nullptr)
		*ShouldShow = params.ShouldShow;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnSurvivalEndPlay
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 EndingActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EEndPlayReason>*   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::OnSurvivalEndPlay(class AActor** EndingActor, TEnumAsByte<EEndPlayReason>* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnSurvivalEndPlay");

	ARemnant_PlayerController_C_OnSurvivalEndPlay_Params params;
	params.EndingActor = EndingActor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ResetSurvivalCvars
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::ResetSurvivalCvars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ResetSurvivalCvars");

	ARemnant_PlayerController_C_ResetSurvivalCvars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.InitializeSurvivalCvars
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::InitializeSurvivalCvars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.InitializeSurvivalCvars");

	ARemnant_PlayerController_C_InitializeSurvivalCvars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ResetSurvivalPawn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::ResetSurvivalPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ResetSurvivalPawn");

	ARemnant_PlayerController_C_ResetSurvivalPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.NotifySurvivalQuestPendingEnd
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::NotifySurvivalQuestPendingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.NotifySurvivalQuestPendingEnd");

	ARemnant_PlayerController_C_NotifySurvivalQuestPendingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.CompleteSurvivalQuest
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::CompleteSurvivalQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.CompleteSurvivalQuest");

	ARemnant_PlayerController_C_CompleteSurvivalQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.InitializeSurvivalPawn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::InitializeSurvivalPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.InitializeSurvivalPawn");

	ARemnant_PlayerController_C_InitializeSurvivalPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.RevertSurvivalPawn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::RevertSurvivalPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.RevertSurvivalPawn");

	ARemnant_PlayerController_C_RevertSurvivalPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.CheckSurvivalTransition
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Travel_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::CheckSurvivalTransition(int* Travel_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.CheckSurvivalTransition");

	ARemnant_PlayerController_C_CheckSurvivalTransition_Params params;
	params.Travel_ID = Travel_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetPresence
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetPresence");

	ARemnant_PlayerController_C_SetPresence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.PollHighlights
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::PollHighlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.PollHighlights");

	ARemnant_PlayerController_C_PollHighlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.DisableHighlightsPolling
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::DisableHighlightsPolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.DisableHighlightsPolling");

	ARemnant_PlayerController_C_DisableHighlightsPolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.TogglePollHighlights
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARemnant_PlayerController_C::TogglePollHighlights(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.TogglePollHighlights");

	ARemnant_PlayerController_C_TogglePollHighlights_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.InitShadowPlay
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::InitShadowPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.InitShadowPlay");

	ARemnant_PlayerController_C_InitShadowPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.fade
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFadeDirection*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARemnant_PlayerController_C::fade(EFadeDirection* Direction, struct FName* Reason, bool* Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.fade");

	ARemnant_PlayerController_C_fade_Params params;
	params.Direction = Direction;
	params.Reason = Reason;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.CanRespawnPlayers
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ARemnant_PlayerController_C::CanRespawnPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.CanRespawnPlayers");

	ARemnant_PlayerController_C_CanRespawnPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.UpdateWorldReset
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::UpdateWorldReset(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.UpdateWorldReset");

	ARemnant_PlayerController_C_UpdateWorldReset_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Lock Player Position
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARemnant_PlayerController_C::Lock_Player_Position(bool* enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Lock Player Position");

	ARemnant_PlayerController_C_Lock_Player_Position_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowInGameMenu
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADialog_InGameMenu_C*    InGameMenu                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowInGameMenu(class AActor** Context, class ADialog_InGameMenu_C** InGameMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowInGameMenu");

	ARemnant_PlayerController_C_ShowInGameMenu_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGameMenu != nullptr)
		*InGameMenu = params.InGameMenu;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Update Minimap Scale
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale_Delta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Update_Minimap_Scale(float* Scale_Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Update Minimap Scale");

	ARemnant_PlayerController_C_Update_Minimap_Scale_Params params;
	params.Scale_Delta = Scale_Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.CloseDialogs
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::CloseDialogs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.CloseDialogs");

	ARemnant_PlayerController_C_CloseDialogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.HideLoadScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::HideLoadScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.HideLoadScreen");

	ARemnant_PlayerController_C_HideLoadScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowLoadScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::ShowLoadScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowLoadScreen");

	ARemnant_PlayerController_C_ShowLoadScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.WorldReset__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ARemnant_PlayerController_C::WorldReset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.WorldReset__FinishedFunc");

	ARemnant_PlayerController_C_WorldReset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.WorldReset__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ARemnant_PlayerController_C::WorldReset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.WorldReset__UpdateFunc");

	ARemnant_PlayerController_C_WorldReset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_ToggleHUD_K2Node_InputActionEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ARemnant_PlayerController_C::InpActEvt_ToggleHUD_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_ToggleHUD_K2Node_InputActionEvent_1");

	ARemnant_PlayerController_C_InpActEvt_ToggleHUD_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_F4_K2Node_InputKeyEvent_2
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ARemnant_PlayerController_C::InpActEvt_F4_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_F4_K2Node_InputKeyEvent_2");

	ARemnant_PlayerController_C_InpActEvt_F4_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_Alt_X_K2Node_InputKeyEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ARemnant_PlayerController_C::InpActEvt_Alt_X_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.InpActEvt_Alt_X_K2Node_InputKeyEvent_1");

	ARemnant_PlayerController_C_InpActEvt_Alt_X_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerCheckSurvivalTransition
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TravelID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerCheckSurvivalTransition(int* TravelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerCheckSurvivalTransition");

	ARemnant_PlayerController_C_ServerCheckSurvivalTransition_Params params;
	params.TravelID = TravelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.MultiRevertSurvivalPawn
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::MultiRevertSurvivalPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.MultiRevertSurvivalPawn");

	ARemnant_PlayerController_C_MultiRevertSurvivalPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.MultiCompleteSurvivalQuest
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::MultiCompleteSurvivalQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.MultiCompleteSurvivalQuest");

	ARemnant_PlayerController_C_MultiCompleteSurvivalQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.MultiResetSurvivalPawn
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::MultiResetSurvivalPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.MultiResetSurvivalPawn");

	ARemnant_PlayerController_C_MultiResetSurvivalPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientPlaySurvivalNotification
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DurationOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ClientPlaySurvivalNotification(struct FName* NameID, float* DurationOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ClientPlaySurvivalNotification");

	ARemnant_PlayerController_C_ClientPlaySurvivalNotification_Params params;
	params.NameID = NameID;
	params.DurationOverride = DurationOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnDeceased
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ARemnant_PlayerController_C::OnDeceased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnDeceased");

	ARemnant_PlayerController_C_OnDeceased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.HandleSkipIntro
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ARemnant_PlayerController_C::HandleSkipIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.HandleSkipIntro");

	ARemnant_PlayerController_C_HandleSkipIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseConsumable
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerUseConsumable(class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseConsumable");

	ARemnant_PlayerController_C_ServerUseConsumable_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ValidateItemRemoval
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ValidateItemRemoval(class AActor** Source, class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ValidateItemRemoval");

	ARemnant_PlayerController_C_ValidateItemRemoval_Params params;
	params.Source = Source;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerItemRemoval
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerItemRemoval(class AActor** Source, class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerItemRemoval");

	ARemnant_PlayerController_C_ServerItemRemoval_Params params;
	params.Source = Source;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientValidItemRemoval
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ClientValidItemRemoval(class AActor** Source, class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ClientValidItemRemoval");

	ARemnant_PlayerController_C_ClientValidItemRemoval_Params params;
	params.Source = Source;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnInitChroma
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::OnInitChroma()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnInitChroma");

	ARemnant_PlayerController_C_OnInitChroma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaDefault
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetChromaDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaDefault");

	ARemnant_PlayerController_C_SetChromaDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaTravel
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetChromaTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaTravel");

	ARemnant_PlayerController_C_SetChromaTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaLowHealth
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetChromaLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaLowHealth");

	ARemnant_PlayerController_C_SetChromaLowHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaRest
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetChromaRest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaRest");

	ARemnant_PlayerController_C_SetChromaRest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaDamage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetChromaDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaDamage");

	ARemnant_PlayerController_C_SetChromaDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaTravelFinished
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetChromaTravelFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetChromaTravelFinished");

	ARemnant_PlayerController_C_SetChromaTravelFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnChromaDamageEnd
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::OnChromaDamageEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnChromaDamageEnd");

	ARemnant_PlayerController_C_OnChromaDamageEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnBeginTravel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PendingZoneID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::OnBeginTravel(int* PendingZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnBeginTravel");

	ARemnant_PlayerController_C_OnBeginTravel_Params params;
	params.PendingZoneID = PendingZoneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishTravel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARemnant_PlayerController_C::OnFinishTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishTravel");

	ARemnant_PlayerController_C_OnFinishTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishTravelLoad
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARemnant_PlayerController_C::OnFinishTravelLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishTravelLoad");

	ARemnant_PlayerController_C_OnFinishTravelLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnServerFinalizeTravel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARemnant_PlayerController_C::OnServerFinalizeTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnServerFinalizeTravel");

	ARemnant_PlayerController_C_OnServerFinalizeTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.PostUseWaypoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::PostUseWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.PostUseWaypoint");

	ARemnant_PlayerController_C_PostUseWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Set Rich Presence
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::Set_Rich_Presence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Set Rich Presence");

	ARemnant_PlayerController_C_Set_Rich_Presence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetSoftwareOcclusionOverride
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::SetSoftwareOcclusionOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetSoftwareOcclusionOverride");

	ARemnant_PlayerController_C_SetSoftwareOcclusionOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.DoCreditsFade
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::DoCreditsFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.DoCreditsFade");

	ARemnant_PlayerController_C_DoCreditsFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnReadyToTravel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PendingZoneID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::OnReadyToTravel(int* PendingZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnReadyToTravel");

	ARemnant_PlayerController_C_OnReadyToTravel_Params params;
	params.PendingZoneID = PendingZoneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.DoPostCreditFadeIn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::DoPostCreditFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.DoPostCreditFadeIn");

	ARemnant_PlayerController_C_DoPostCreditFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Server Inspectable Next
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C**      Inspectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Server_Inspectable_Next(class ABP_Inspectable_C** Inspectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Server Inspectable Next");

	ARemnant_PlayerController_C_Server_Inspectable_Next_Params params;
	params.Inspectable = Inspectable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Server Inspectable Prev
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C**      Inspectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Server_Inspectable_Prev(class ABP_Inspectable_C** Inspectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Server Inspectable Prev");

	ARemnant_PlayerController_C_Server_Inspectable_Prev_Params params;
	params.Inspectable = Inspectable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseItem
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerUseItem(class AActor** Actor, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseItem");

	ARemnant_PlayerController_C_ServerUseItem_Params params;
	params.Actor = Actor;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientUseItemFail
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::ClientUseItemFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ClientUseItemFail");

	ARemnant_PlayerController_C_ClientUseItemFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerBeginInspect
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C**      Inspectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerBeginInspect(class ABP_Inspectable_C** Inspectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerBeginInspect");

	ARemnant_PlayerController_C_ServerBeginInspect_Params params;
	params.Inspectable = Inspectable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerEndInspect
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C**      Inspectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerEndInspect(class ABP_Inspectable_C** Inspectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerEndInspect");

	ARemnant_PlayerController_C_ServerEndInspect_Params params;
	params.Inspectable = Inspectable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientRequestEndInspect
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C**      Inspectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ClientRequestEndInspect(class ABP_Inspectable_C** Inspectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ClientRequestEndInspect");

	ARemnant_PlayerController_C_ClientRequestEndInspect_Params params;
	params.Inspectable = Inspectable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerNotifyCompleteInspect
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C**      Inspectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerNotifyCompleteInspect(class ABP_Inspectable_C** Inspectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerNotifyCompleteInspect");

	ARemnant_PlayerController_C_ServerNotifyCompleteInspect_Params params;
	params.Inspectable = Inspectable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.EquipMod
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char*                 Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           ModItemID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::EquipMod(int* ItemID, unsigned char* Slot, int* ModItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.EquipMod");

	ARemnant_PlayerController_C_EquipMod_Params params;
	params.ItemID = ItemID;
	params.Slot = Slot;
	params.ModItemID = ModItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.UnequipMod
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char*                 Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::UnequipMod(int* ItemID, unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.UnequipMod");

	ARemnant_PlayerController_C_UnequipMod_Params params;
	params.ItemID = ItemID;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerCreateQuest
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString*                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerCreateQuest(int* SlotID, class FString* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerCreateQuest");

	ARemnant_PlayerController_C_ServerCreateQuest_Params params;
	params.SlotID = SlotID;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerActivateQuest
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest**          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerActivateQuest(class ARemnantQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerActivateQuest");

	ARemnant_PlayerController_C_ServerActivateQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerDestroyQuest
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest**          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerDestroyQuest(class ARemnantQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerDestroyQuest");

	ARemnant_PlayerController_C_ServerDestroyQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowDialogue
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowDialogue(class AActor** Source, class AActor** Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowDialogue");

	ARemnant_PlayerController_C_ShowDialogue_Params params;
	params.Source = Source;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowLootContainer
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowLootContainer(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowLootContainer");

	ARemnant_PlayerController_C_ShowLootContainer_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowCraftingMenu
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowCraftingMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowCraftingMenu");

	ARemnant_PlayerController_C_ShowCraftingMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueSelectOptionByName
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ContextActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::DialogueSelectOptionByName(class AActor** ContextActor, struct FName* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueSelectOptionByName");

	ARemnant_PlayerController_C_DialogueSelectOptionByName_Params params;
	params.ContextActor = ContextActor;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueAdvance
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ContextActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::DialogueAdvance(class AActor** ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueAdvance");

	ARemnant_PlayerController_C_DialogueAdvance_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowUpgradingMenu
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowUpgradingMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowUpgradingMenu");

	ARemnant_PlayerController_C_ShowUpgradingMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.EndDialog
// 00007FF6F8B35350
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::EndDialog(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.EndDialog");

	ARemnant_PlayerController_C_EndDialog_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OpenLootContainer
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootContainer**         LootContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::OpenLootContainer(class ALootContainer** LootContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OpenLootContainer");

	ARemnant_PlayerController_C_OpenLootContainer_Params params;
	params.LootContainer = LootContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowInfusionMenu
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowInfusionMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowInfusionMenu");

	ARemnant_PlayerController_C_ShowInfusionMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Join In Progress Dialog Client
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Join_In_Progress_Dialog_Client(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Join In Progress Dialog Client");

	ARemnant_PlayerController_C_Join_In_Progress_Dialog_Client_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Server State Machine Interation
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStateMachineComponent** State_Machine                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Server_State_Machine_Interation(class UStateMachineComponent** State_Machine, struct FName* Name, class AActor** Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Server State Machine Interation");

	ARemnant_PlayerController_C_Server_State_Machine_Interation_Params params;
	params.State_Machine = State_Machine;
	params.Name = Name;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueSelectOption
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ContextActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char*                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::DialogueSelectOption(class AActor** ContextActor, unsigned char* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.DialogueSelectOption");

	ARemnant_PlayerController_C_DialogueSelectOption_Params params;
	params.ContextActor = ContextActor;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.EndPlayerDialog
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::EndPlayerDialog(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.EndPlayerDialog");

	ARemnant_PlayerController_C_EndPlayerDialog_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerDialogue
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowPlayerDialogue(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerDialogue");

	ARemnant_PlayerController_C_ShowPlayerDialogue_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerCraftingMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowPlayerCraftingMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerCraftingMenu");

	ARemnant_PlayerController_C_ShowPlayerCraftingMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerInfusionMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowPlayerInfusionMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerInfusionMenu");

	ARemnant_PlayerController_C_ShowPlayerInfusionMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerLootContainer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowPlayerLootContainer(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerLootContainer");

	ARemnant_PlayerController_C_ShowPlayerLootContainer_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerUpgradingMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowPlayerUpgradingMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowPlayerUpgradingMenu");

	ARemnant_PlayerController_C_ShowPlayerUpgradingMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Event Show Character Select
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::Event_Show_Character_Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Event Show Character Select");

	ARemnant_PlayerController_C_Event_Show_Character_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.EventClosedCharacterSelect
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::EventClosedCharacterSelect(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.EventClosedCharacterSelect");

	ARemnant_PlayerController_C_EventClosedCharacterSelect_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowTutorial
// 00007FF6F8B35350
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Tutorial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 ContextActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowTutorial(class UClass** Tutorial, class AActor** ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowTutorial");

	ARemnant_PlayerController_C_ShowTutorial_Params params;
	params.Tutorial = Tutorial;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ShowJoinSessionCharacterSelect
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Multispawn_Waypoint_C** BP_Multispawn_Waypoint         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ShowJoinSessionCharacterSelect(class ABP_Multispawn_Waypoint_C** BP_Multispawn_Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ShowJoinSessionCharacterSelect");

	ARemnant_PlayerController_C_ShowJoinSessionCharacterSelect_Params params;
	params.BP_Multispawn_Waypoint = BP_Multispawn_Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.FinishedJoinSessionCharacterSelect
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Multispawn_Waypoint_C** BP_Multispawn_Waypoint         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::FinishedJoinSessionCharacterSelect(class ABP_Multispawn_Waypoint_C** BP_Multispawn_Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.FinishedJoinSessionCharacterSelect");

	ARemnant_PlayerController_C_FinishedJoinSessionCharacterSelect_Params params;
	params.BP_Multispawn_Waypoint = BP_Multispawn_Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Server_SpectateCharacterSelected
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::Server_SpectateCharacterSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Server_SpectateCharacterSelected");

	ARemnant_PlayerController_C_Server_SpectateCharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Client_SpectateSwapCharacter
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::Client_SpectateSwapCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Client_SpectateSwapCharacter");

	ARemnant_PlayerController_C_Client_SpectateSwapCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Join In Progress Dialog Server
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Join_In_Progress_Dialog_Server(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Join In Progress Dialog Server");

	ARemnant_PlayerController_C_Join_In_Progress_Dialog_Server_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToWaypoint
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZoneLinkInfo*          WaypointInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ARemnant_PlayerController_C::ServerTravelToWaypoint(class AActor** Waypoint, struct FZoneLinkInfo* WaypointInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToWaypoint");

	ARemnant_PlayerController_C_ServerTravelToWaypoint_Params params;
	params.Waypoint = Waypoint;
	params.WaypointInfo = WaypointInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToDestination
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Link                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerTravelToDestination(class AActor** Link)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToDestination");

	ARemnant_PlayerController_C_ServerTravelToDestination_Params params;
	params.Link = Link;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTransitionToMenu
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerTransitionToMenu(class AInteractive_Checkpoint_C** Checkpoint, class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTransitionToMenu");

	ARemnant_PlayerController_C_ServerTransitionToMenu_Params params;
	params.Checkpoint = Checkpoint;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTransitionFromMenu
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerTransitionFromMenu(class AInteractive_Checkpoint_C** Checkpoint, class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTransitionFromMenu");

	ARemnant_PlayerController_C_ServerTransitionFromMenu_Params params;
	params.Checkpoint = Checkpoint;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUpgradeCheckpoint
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerUpgradeCheckpoint(class AInteractive_Checkpoint_C** Checkpoint, class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUpgradeCheckpoint");

	ARemnant_PlayerController_C_ServerUpgradeCheckpoint_Params params;
	params.Checkpoint = Checkpoint;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToWaypointName
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  WaypointName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerTravelToWaypointName(class AActor** Waypoint, struct FName* WaypointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerTravelToWaypointName");

	ARemnant_PlayerController_C_ServerTravelToWaypointName_Params params;
	params.Waypoint = Waypoint;
	params.WaypointName = WaypointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseCheckpoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::ServerUseCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerUseCheckpoint");

	ARemnant_PlayerController_C_ServerUseCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientBeginUseCheckpoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ClientBeginUseCheckpoint(class AInteractive_Checkpoint_C** Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ClientBeginUseCheckpoint");

	ARemnant_PlayerController_C_ClientBeginUseCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ClientEndUseCheckpoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ClientEndUseCheckpoint(class AInteractive_Checkpoint_C** Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ClientEndUseCheckpoint");

	ARemnant_PlayerController_C_ClientEndUseCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerLeaveDungeon
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerLeaveDungeon(class AActor** Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerLeaveDungeon");

	ARemnant_PlayerController_C_ServerLeaveDungeon_Params params;
	params.Waypoint = Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerActivateWaypoint
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACheckpoint**            Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ServerActivateWaypoint(class ACheckpoint** Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerActivateWaypoint");

	ARemnant_PlayerController_C_ServerActivateWaypoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnBeginWorldReset
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACheckpoint**            ActivatedCheckpoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bWasDead                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARemnant_PlayerController_C::OnBeginWorldReset(class ACheckpoint** ActivatedCheckpoint, bool* bWasDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnBeginWorldReset");

	ARemnant_PlayerController_C_OnBeginWorldReset_Params params;
	params.ActivatedCheckpoint = ActivatedCheckpoint;
	params.bWasDead = bWasDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishWorldReset
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACheckpoint**            ActivatedCheckpoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::OnFinishWorldReset(class ACheckpoint** ActivatedCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnFinishWorldReset");

	ARemnant_PlayerController_C_OnFinishWorldReset_Params params;
	params.ActivatedCheckpoint = ActivatedCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetWorldFadeOut
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWorldResetState>* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::SetWorldFadeOut(TEnumAsByte<EWorldResetState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetWorldFadeOut");

	ARemnant_PlayerController_C_SetWorldFadeOut_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.PlayWorldReset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::PlayWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.PlayWorldReset");

	ARemnant_PlayerController_C_PlayWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.StopWorldReset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::StopWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.StopWorldReset");

	ARemnant_PlayerController_C_StopWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.SetWorldResetTime
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::SetWorldResetTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.SetWorldResetTime");

	ARemnant_PlayerController_C_SetWorldResetTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ServerSetInCheckpointMenu
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InMenu                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARemnant_PlayerController_C::ServerSetInCheckpointMenu(bool* InMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ServerSetInCheckpointMenu");

	ARemnant_PlayerController_C_ServerSetInCheckpointMenu_Params params;
	params.InMenu = InMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ARemnant_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ReceiveBeginPlay");

	ARemnant_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnTimeout_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::OnTimeout_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnTimeout_Event_1");

	ARemnant_PlayerController_C_OnTimeout_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnDead
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::OnDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnDead");

	ARemnant_PlayerController_C_OnDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Check DLC
// 00007FF6F8B35350
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Check_DLC(class ACharacter_Master_Player_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Check DLC");

	ARemnant_PlayerController_C_Check_DLC_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.Server Remove DLC Item
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantPlayerInventoryComponent** Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UClass>*  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ARemnant_PlayerController_C::Server_Remove_DLC_Item(class URemnantPlayerInventoryComponent** Inventory, TSoftObjectPtr<class UClass>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.Server Remove DLC Item");

	ARemnant_PlayerController_C_Server_Remove_DLC_Item_Params params;
	params.Inventory = Inventory;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.ExecuteUbergraph_Remnant_PlayerController
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnant_PlayerController_C::ExecuteUbergraph_Remnant_PlayerController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.ExecuteUbergraph_Remnant_PlayerController");

	ARemnant_PlayerController_C_ExecuteUbergraph_Remnant_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnDialogueStarted__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::OnDialogueStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnDialogueStarted__DelegateSignature");

	ARemnant_PlayerController_C_OnDialogueStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.OnUseItemFail__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::OnUseItemFail__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.OnUseItemFail__DelegateSignature");

	ARemnant_PlayerController_C_OnUseItemFail__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_PlayerController.Remnant_PlayerController_C.FinishedTravel__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ARemnant_PlayerController_C::FinishedTravel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_PlayerController.Remnant_PlayerController_C.FinishedTravel__DelegateSignature");

	ARemnant_PlayerController_C_FinishedTravel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
