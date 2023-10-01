// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_NonPlayerCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngageRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          UnitIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::NPCEngageRange(float UnitIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngageRange");

	ABPChar_NonPlayerCharacter_C_NPCEngageRange_Params params;
	params.UnitIn = UnitIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OnRep_ItemPoolInfo
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::OnRep_ItemPoolInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OnRep_ItemPoolInfo");

	ABPChar_NonPlayerCharacter_C_OnRep_ItemPoolInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCIgnoreEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::NPCIgnoreEnemies(bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCIgnoreEnemies");

	ABPChar_NonPlayerCharacter_C_NPCIgnoreEnemies_Params params;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUseSmartObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseSmartObjects                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::NPCUseSmartObjects(bool UseSmartObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUseSmartObjects");

	ABPChar_NonPlayerCharacter_C_NPCUseSmartObjects_Params params;
	params.UseSmartObjects = UseSmartObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCCanPatrol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPatrol                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::NPCCanPatrol(bool CanPatrol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCCanPatrol");

	ABPChar_NonPlayerCharacter_C_NPCCanPatrol_Params params;
	params.CanPatrol = CanPatrol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngagePlayerWhenIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LookAtPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::NPCEngagePlayerWhenIdle(bool LookAtPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngagePlayerWhenIdle");

	ABPChar_NonPlayerCharacter_C_NPCEngagePlayerWhenIdle_Params params;
	params.LookAtPlayer = LookAtPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngageInCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EngageInCombat                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::NPCEngageInCombat(bool EngageInCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngageInCombat");

	ABPChar_NonPlayerCharacter_C_NPCEngageInCombat_Params params;
	params.EngageInCombat = EngageInCombat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ChangeBehaviorTree_LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*           NPC_AIController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::ChangeBehaviorTree_LookAt(class AAIController* NPC_AIController, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ChangeBehaviorTree_LookAt");

	ABPChar_NonPlayerCharacter_C_ChangeBehaviorTree_LookAt_Params params;
	params.NPC_AIController = NPC_AIController;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.PlayerUsedMe
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_NonPlayerCharacter_C::PlayerUsedMe(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.PlayerUsedMe");

	ABPChar_NonPlayerCharacter_C_PlayerUsedMe_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ClearText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::ClearText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ClearText");

	ABPChar_NonPlayerCharacter_C_ClearText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           FacePlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::SetText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetText");

	ABPChar_NonPlayerCharacter_C_SetText_Params params;
	params.Text = Text;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.FacePlayer = FacePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UserConstructionScript");

	ABPChar_NonPlayerCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.GbxAsyncRequest_PickupSpawned_57F45FEF4D675ABCF62E0A81821A5187
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADroppedInventoryItemPickup* Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::GbxAsyncRequest_PickupSpawned_57F45FEF4D675ABCF62E0A81821A5187(class ADroppedInventoryItemPickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.GbxAsyncRequest_PickupSpawned_57F45FEF4D675ABCF62E0A81821A5187");

	ABPChar_NonPlayerCharacter_C_GbxAsyncRequest_PickupSpawned_57F45FEF4D675ABCF62E0A81821A5187_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUnhideSword
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::NPCUnhideSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUnhideSword");

	ABPChar_NonPlayerCharacter_C_NPCUnhideSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCHideSword
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::NPCHideSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCHideSword");

	ABPChar_NonPlayerCharacter_C_NPCHideSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCConstrainUsable
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::NPCConstrainUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCConstrainUsable");

	ABPChar_NonPlayerCharacter_C_NPCConstrainUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCResetUsable
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::NPCResetUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCResetUsable");

	ABPChar_NonPlayerCharacter_C_NPCResetUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ForceDefaultCombatNPCDownstate
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::ForceDefaultCombatNPCDownstate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ForceDefaultCombatNPCDownstate");

	ABPChar_NonPlayerCharacter_C_ForceDefaultCombatNPCDownstate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ForceNPCRevive
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::ForceNPCRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ForceNPCRevive");

	ABPChar_NonPlayerCharacter_C_ForceNPCRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandOutToTakeSomething
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::HoldHandOutToTakeSomething()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandOutToTakeSomething");

	ABPChar_NonPlayerCharacter_C_HoldHandOutToTakeSomething_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.GiveSomethingToThePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::GiveSomethingToThePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.GiveSomethingToThePlayer");

	ABPChar_NonPlayerCharacter_C_GiveSomethingToThePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BeingUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_NonPlayerCharacter_C::BeingUsed(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BeingUsed");

	ABPChar_NonPlayerCharacter_C_BeingUsed_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.LootableTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::LootableTaken(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.LootableTaken");

	ABPChar_NonPlayerCharacter_C_LootableTaken_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandTakeAll
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::HoldHandTakeAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandTakeAll");

	ABPChar_NonPlayerCharacter_C_HoldHandTakeAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandGiveAll
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::HoldHandGiveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandGiveAll");

	ABPChar_NonPlayerCharacter_C_HoldHandGiveAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TakingThingAll
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::TakingThingAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TakingThingAll");

	ABPChar_NonPlayerCharacter_C_TakingThingAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.PlayerTakingAll
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::PlayerTakingAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.PlayerTakingAll");

	ABPChar_NonPlayerCharacter_C_PlayerTakingAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.LockNPCAI
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::LockNPCAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.LockNPCAI");

	ABPChar_NonPlayerCharacter_C_LockNPCAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UnlockNPCAI
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::UnlockNPCAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UnlockNPCAI");

	ABPChar_NonPlayerCharacter_C_UnlockNPCAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TakeThingThenGiveBack
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::TakeThingThenGiveBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TakeThingThenGiveBack");

	ABPChar_NonPlayerCharacter_C_TakeThingThenGiveBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ExamineAll
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::ExamineAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ExamineAll");

	ABPChar_NonPlayerCharacter_C_ExamineAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.EngageInCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EngageInCombat                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::EngageInCombat(bool EngageInCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.EngageInCombat");

	ABPChar_NonPlayerCharacter_C_EngageInCombat_Params params;
	params.EngageInCombat = EngageInCombat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.CanPatrol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPatrol                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::CanPatrol(bool CanPatrol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.CanPatrol");

	ABPChar_NonPlayerCharacter_C_CanPatrol_Params params;
	params.CanPatrol = CanPatrol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UseSmartObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseSmartObjects                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::UseSmartObjects(bool UseSmartObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UseSmartObjects");

	ABPChar_NonPlayerCharacter_C_UseSmartObjects_Params params;
	params.UseSmartObjects = UseSmartObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ThingToHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             TheThingToHold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemPoolInfo           ThePickupToHold                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform              OffsetTransform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PutAwayOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TakeOutOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseAltAnimation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::ThingToHold(class UStaticMesh* TheThingToHold, const struct FItemPoolInfo& ThePickupToHold, const struct FTransform& OffsetTransform, float PutAwayOffset, float TakeOutOffset, bool UseAltAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ThingToHold");

	ABPChar_NonPlayerCharacter_C_ThingToHold_Params params;
	params.TheThingToHold = TheThingToHold;
	params.ThePickupToHold = ThePickupToHold;
	params.OffsetTransform = OffsetTransform;
	params.PutAwayOffset = PutAwayOffset;
	params.TakeOutOffset = TakeOutOffset;
	params.UseAltAnimation = UseAltAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCHideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::NPCHideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCHideWeapon");

	ABPChar_NonPlayerCharacter_C_NPCHideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUnhideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::NPCUnhideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUnhideWeapon");

	ABPChar_NonPlayerCharacter_C_NPCUnhideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.IgnoreEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IgnoreEnemies                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::IgnoreEnemies(bool IgnoreEnemies)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.IgnoreEnemies");

	ABPChar_NonPlayerCharacter_C_IgnoreEnemies_Params params;
	params.IgnoreEnemies = IgnoreEnemies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCCanReviveOthers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanReviveOthers                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::NPCCanReviveOthers(bool CanReviveOthers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCCanReviveOthers");

	ABPChar_NonPlayerCharacter_C_NPCCanReviveOthers_Params params;
	params.CanReviveOthers = CanReviveOthers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_NonPlayerCharacter
// (BlueprintEvent)
// Parameters:
// struct FStanceChangedEventArgs Args                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_NonPlayerCharacter(const struct FStanceChangedEventArgs& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_NonPlayerCharacter");

	ABPChar_NonPlayerCharacter_C_BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_NonPlayerCharacter_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.EngagePlayerWhenIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LookAtPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::EngagePlayerWhenIdle(bool LookAtPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.EngagePlayerWhenIdle");

	ABPChar_NonPlayerCharacter_C_EngagePlayerWhenIdle_Params params;
	params.LookAtPlayer = LookAtPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetNPCEngagePlayerRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Units                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::SetNPCEngagePlayerRange(float Units)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetNPCEngagePlayerRange");

	ABPChar_NonPlayerCharacter_C_SetNPCEngagePlayerRange_Params params;
	params.Units = Units;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700");

	ABPChar_NonPlayerCharacter_C_BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.DisableMissionBrain
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::DisableMissionBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.DisableMissionBrain");

	ABPChar_NonPlayerCharacter_C_DisableMissionBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BPChar_NonPlayerCharacter
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPChar_NonPlayerCharacter_C::BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BPChar_NonPlayerCharacter(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BPChar_NonPlayerCharacter");

	ABPChar_NonPlayerCharacter_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BPChar_NonPlayerCharacter_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.InitializeGenericDialog
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::InitializeGenericDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.InitializeGenericDialog");

	ABPChar_NonPlayerCharacter_C_InitializeGenericDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OpenGate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OpenGate");

	ABPChar_NonPlayerCharacter_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TextClear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::TextClear(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TextClear");

	ABPChar_NonPlayerCharacter_C_TextClear_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.CloseGate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::CloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.CloseGate");

	ABPChar_NonPlayerCharacter_C_CloseGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TempMissionTextTck
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::TempMissionTextTck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TempMissionTextTck");

	ABPChar_NonPlayerCharacter_C_TempMissionTextTck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetMissionDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           FacePlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::SetMissionDebugText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetMissionDebugText");

	ABPChar_NonPlayerCharacter_C_SetMissionDebugText_Params params;
	params.Text = Text;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.FacePlayer = FacePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TextUpdating
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::TextUpdating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TextUpdating");

	ABPChar_NonPlayerCharacter_C_TextUpdating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SawThePlayer
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::SawThePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SawThePlayer");

	ABPChar_NonPlayerCharacter_C_SawThePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.DespawnActivate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::DespawnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.DespawnActivate");

	ABPChar_NonPlayerCharacter_C_DespawnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ReceiveBeginPlay");

	ABPChar_NonPlayerCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ExecuteUbergraph_BPChar_NonPlayerCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::ExecuteUbergraph_BPChar_NonPlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ExecuteUbergraph_BPChar_NonPlayerCharacter");

	ABPChar_NonPlayerCharacter_C_ExecuteUbergraph_BPChar_NonPlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SpawnedLootToGive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADroppedInventoryItemPickup* Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::SpawnedLootToGive__DelegateSignature(class ADroppedInventoryItemPickup* Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SpawnedLootToGive__DelegateSignature");

	ABPChar_NonPlayerCharacter_C_SpawnedLootToGive__DelegateSignature_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ItemTakenByPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_NonPlayerCharacter_C::ItemTakenByPlayer__DelegateSignature(class AOakCharacter_Player* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ItemTakenByPlayer__DelegateSignature");

	ABPChar_NonPlayerCharacter_C_ItemTakenByPlayer__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCSawThePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPChar_NonPlayerCharacter_C::NPCSawThePlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCSawThePlayer__DelegateSignature");

	ABPChar_NonPlayerCharacter_C_NPCSawThePlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OnUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_NonPlayerCharacter_C::OnUsed__DelegateSignature(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OnUsed__DelegateSignature");

	ABPChar_NonPlayerCharacter_C_OnUsed__DelegateSignature_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
