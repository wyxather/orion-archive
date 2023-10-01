// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Checkpoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ShowPrompt
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::ShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.ShowPrompt");

	AInteractive_Checkpoint_C_ShowPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsActorInteracting
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsActorInteracting(class AActor** Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsActorInteracting");

	AInteractive_Checkpoint_C_IsActorInteracting_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsAPlayerAtADifferentCheckpoint
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsAPlayerAtADifferentCheckpoint(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsAPlayerAtADifferentCheckpoint");

	AInteractive_Checkpoint_C_IsAPlayerAtADifferentCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsLocalPlayerAtAnyCheckpoint
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsLocalPlayerAtAnyCheckpoint(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsLocalPlayerAtAnyCheckpoint");

	AInteractive_Checkpoint_C_IsLocalPlayerAtAnyCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsAnyoneInteracting
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SomeoneIsInteracting           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsAnyoneInteracting(bool* SomeoneIsInteracting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsAnyoneInteracting");

	AInteractive_Checkpoint_C_IsAnyoneInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SomeoneIsInteracting != nullptr)
		*SomeoneIsInteracting = params.SomeoneIsInteracting;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveGrabbingPlayer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::RemoveGrabbingPlayer(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveGrabbingPlayer");

	AInteractive_Checkpoint_C_RemoveGrabbingPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddGrabbingPlayer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::AddGrabbingPlayer(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddGrabbingPlayer");

	AInteractive_Checkpoint_C_AddGrabbingPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ClearAllCheckpointNotifications
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::ClearAllCheckpointNotifications(class ACharacter_Master_Player_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.ClearAllCheckpointNotifications");

	AInteractive_Checkpoint_C_ClearAllCheckpointNotifications_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerUsingCheckpoint
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsPlayerUsingCheckpoint(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerUsingCheckpoint");

	AInteractive_Checkpoint_C_IsPlayerUsingCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerNotInCheckpointMenu
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsPlayerNotInCheckpointMenu(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerNotInCheckpointMenu");

	AInteractive_Checkpoint_C_IsPlayerNotInCheckpointMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveCheckpointNotification
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::RemoveCheckpointNotification(class ACharacter_Master_Player_C** Player, struct FName* NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveCheckpointNotification");

	AInteractive_Checkpoint_C_RemoveCheckpointNotification_Params params;
	params.Player = Player;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddCheckpointNotification
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DurationOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::AddCheckpointNotification(class ACharacter_Master_Player_C** Player, struct FName* NameID, float* DurationOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddCheckpointNotification");

	AInteractive_Checkpoint_C_AddCheckpointNotification_Params params;
	params.Player = Player;
	params.NameID = NameID;
	params.DurationOverride = DurationOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsCheckpointNotificationActive
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter_Master_Player_C** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsCheckpointNotificationActive(class ACharacter_Master_Player_C** Player, struct FName* NameID, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsCheckpointNotificationActive");

	AInteractive_Checkpoint_C_IsCheckpointNotificationActive_Params params;
	params.Player = Player;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.Get Local Player
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter_Master_Player_C* AsCharacter_Master_Player      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::Get_Local_Player(class ACharacter_Master_Player_C** AsCharacter_Master_Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.Get Local Player");

	AInteractive_Checkpoint_C_Get_Local_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsCharacter_Master_Player != nullptr)
		*AsCharacter_Master_Player = params.AsCharacter_Master_Player;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerInCheckpointMenu
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsPlayerInCheckpointMenu(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerInCheckpointMenu");

	AInteractive_Checkpoint_C_IsPlayerInCheckpointMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CanCheckpointActivate
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AInteractive_Checkpoint_C::CanCheckpointActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.CanCheckpointActivate");

	AInteractive_Checkpoint_C_CanCheckpointActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddTutorialPrompts
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::AddTutorialPrompts(class ARemnantCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddTutorialPrompts");

	AInteractive_Checkpoint_C_AddTutorialPrompts_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveTutorialPrompts
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::RemoveTutorialPrompts(class ARemnantCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveTutorialPrompts");

	AInteractive_Checkpoint_C_RemoveTutorialPrompts_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ReplenishHealthOnly
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::ReplenishHealthOnly(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.ReplenishHealthOnly");

	AInteractive_Checkpoint_C_ReplenishHealthOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.SetAsCurrentWaypoint
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::SetAsCurrentWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.SetAsCurrentWaypoint");

	AInteractive_Checkpoint_C_SetAsCurrentWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.TryUpdateLevelScaling
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::TryUpdateLevelScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.TryUpdateLevelScaling");

	AInteractive_Checkpoint_C_TryUpdateLevelScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsActive
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::IsActive(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsActive");

	AInteractive_Checkpoint_C_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CanUpgrade
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanUpgrade                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   UpgradeDetails                 (Parm, OutParm)
// class UTexture*                Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::CanUpgrade(class ACharacter_Master_Player_C** Character, bool* CanUpgrade, struct FText* UpgradeDetails, class UTexture** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.CanUpgrade");

	AInteractive_Checkpoint_C_CanUpgrade_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUpgrade != nullptr)
		*CanUpgrade = params.CanUpgrade;
	if (UpgradeDetails != nullptr)
		*UpgradeDetails = params.UpgradeDetails;
	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnUpgrade
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::OnUpgrade(class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnUpgrade");

	AInteractive_Checkpoint_C_OnUpgrade_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.TransitionFromMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::TransitionFromMenu(class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.TransitionFromMenu");

	AInteractive_Checkpoint_C_TransitionFromMenu_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.TransitionToMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::TransitionToMenu(class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.TransitionToMenu");

	AInteractive_Checkpoint_C_TransitionToMenu_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.EndUseCheckpoint
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::EndUseCheckpoint(class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.EndUseCheckpoint");

	AInteractive_Checkpoint_C_EndUseCheckpoint_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BeginUseCheckpoint
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          WasSummoned                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Checkpoint_C::BeginUseCheckpoint(class ACharacter_Master_Player_C** Character, bool* WasSummoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.BeginUseCheckpoint");

	AInteractive_Checkpoint_C_BeginUseCheckpoint_Params params;
	params.Character = Character;
	params.WasSummoned = WasSummoned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AInteractive_Checkpoint_C::BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AInteractive_Checkpoint_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	AInteractive_Checkpoint_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AInteractive_Checkpoint_C::BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AInteractive_Checkpoint_C_BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	AInteractive_Checkpoint_C_BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnBeginActivation
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AInteractive_Checkpoint_C::OnBeginActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnBeginActivation");

	AInteractive_Checkpoint_C_OnBeginActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AInteractive_Checkpoint_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnActivate");

	AInteractive_Checkpoint_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnFinishActivation
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AInteractive_Checkpoint_C::OnFinishActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnFinishActivation");

	AInteractive_Checkpoint_C_OnFinishActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.DoActivation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::DoActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.DoActivation");

	AInteractive_Checkpoint_C_DoActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnNewPawn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  NewPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn**                  PreviousPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::OnNewPawn(class APawn** NewPawn, class APawn** PreviousPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnNewPawn");

	AInteractive_Checkpoint_C_OnNewPawn_Params params;
	params.NewPawn = NewPawn;
	params.PreviousPawn = PreviousPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.DoRedShardActivation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::DoRedShardActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.DoRedShardActivation");

	AInteractive_Checkpoint_C_DoRedShardActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.ReceiveTick");

	AInteractive_Checkpoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnBeginGrab
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::OnBeginGrab(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnBeginGrab");

	AInteractive_Checkpoint_C_OnBeginGrab_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnEndGrab
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::OnEndGrab(class ARemnantCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnEndGrab");

	AInteractive_Checkpoint_C_OnEndGrab_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature(struct FName* StateName, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature");

	AInteractive_Checkpoint_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnShowPrompt
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::OnShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnShowPrompt");

	AInteractive_Checkpoint_C_OnShowPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ExecuteUbergraph_Interactive_Checkpoint
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Checkpoint_C::ExecuteUbergraph_Interactive_Checkpoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.ExecuteUbergraph_Interactive_Checkpoint");

	AInteractive_Checkpoint_C_ExecuteUbergraph_Interactive_Checkpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CustomDepth__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::CustomDepth__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.CustomDepth__DelegateSignature");

	AInteractive_Checkpoint_C_CustomDepth__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CheckpointUpgraded__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AInteractive_Checkpoint_C::CheckpointUpgraded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Checkpoint.Interactive_Checkpoint_C.CheckpointUpgraded__DelegateSignature");

	AInteractive_Checkpoint_C_CheckpointUpgraded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
