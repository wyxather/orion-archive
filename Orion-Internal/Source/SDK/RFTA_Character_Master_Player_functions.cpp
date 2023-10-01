// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Master_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Master_Player.Character_Master_Player_C.GetPhase
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::GetPhase(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.GetPhase");

	ACharacter_Master_Player_C_GetPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.CanDoCharacterRevive
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACharacter_Master_Player_C::CanDoCharacterRevive(class UWoundedComponent** WoundedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanDoCharacterRevive");

	ACharacter_Master_Player_C_CanDoCharacterRevive_Params params;
	params.WoundedComponent = WoundedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Character_Master_Player.Character_Master_Player_C.CanDoItemInteraction
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACharacter_Master_Player_C::CanDoItemInteraction(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanDoItemInteraction");

	ACharacter_Master_Player_C_CanDoItemInteraction_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Character_Master_Player.Character_Master_Player_C.CanDoStateInteraction
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStateMachineComponent** StateMachine                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACharacter_Master_Player_C::CanDoStateInteraction(class UStateMachineComponent** StateMachine, struct FName* StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanDoStateInteraction");

	ACharacter_Master_Player_C_CanDoStateInteraction_Params params;
	params.StateMachine = StateMachine;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Character_Master_Player.Character_Master_Player_C.UnlockFlashCastorTrait
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::UnlockFlashCastorTrait()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.UnlockFlashCastorTrait");

	ACharacter_Master_Player_C_UnlockFlashCastorTrait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.PlayVaporEffect
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::PlayVaporEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.PlayVaporEffect");

	ACharacter_Master_Player_C_PlayVaporEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.GetCurrentOrDeadController
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::GetCurrentOrDeadController(class AController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.GetCurrentOrDeadController");

	ACharacter_Master_Player_C_GetCurrentOrDeadController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function Character_Master_Player.Character_Master_Player_C.UnlinkSummon
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Summon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EEndPlayReason>*   EndReason                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::UnlinkSummon(class AActor** Summon, TEnumAsByte<EEndPlayReason>* EndReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.UnlinkSummon");

	ACharacter_Master_Player_C_UnlinkSummon_Params params;
	params.Summon = Summon;
	params.EndReason = EndReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.LinkSummon
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Summon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::LinkSummon(class AActor** Summon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.LinkSummon");

	ACharacter_Master_Player_C_LinkSummon_Params params;
	params.Summon = Summon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.UpdateAccountCurrency
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::UpdateAccountCurrency()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.UpdateAccountCurrency");

	ACharacter_Master_Player_C_UpdateAccountCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ListenForAccountCurrencyChanges
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OverrideQuantity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ListenForAccountCurrencyChanges(class UClass** ItemBP, int* OverrideQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ListenForAccountCurrencyChanges");

	ACharacter_Master_Player_C_ListenForAccountCurrencyChanges_Params params;
	params.ItemBP = ItemBP;
	params.OverrideQuantity = OverrideQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CanShowQuestInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanShow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::CanShowQuestInventory(bool* CanShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanShowQuestInventory");

	ACharacter_Master_Player_C_CanShowQuestInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanShow != nullptr)
		*CanShow = params.CanShow;
}


// Function Character_Master_Player.Character_Master_Player_C.Get Armor Skin Sets Acquired
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Armor_Skin_Sets_Acquired       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Get_Armor_Skin_Sets_Acquired(int* Armor_Skin_Sets_Acquired)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Get Armor Skin Sets Acquired");

	ACharacter_Master_Player_C_Get_Armor_Skin_Sets_Acquired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Armor_Skin_Sets_Acquired != nullptr)
		*Armor_Skin_Sets_Acquired = params.Armor_Skin_Sets_Acquired;
}


// Function Character_Master_Player.Character_Master_Player_C.ActivateHandGun
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ActivateHandGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ActivateHandGun");

	ACharacter_Master_Player_C_ActivateHandGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Gold
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Gold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Gold");

	ACharacter_Master_Player_C_DLC___Award_Gold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Xbox
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Xbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Xbox");

	ACharacter_Master_Player_C_DLC___Award_Xbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnPostPingMenuLockEnded
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnPostPingMenuLockEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnPostPingMenuLockEnded");

	ACharacter_Master_Player_C_OnPostPingMenuLockEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnPingMenuEnded
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnPingMenuEnded(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnPingMenuEnded");

	ACharacter_Master_Player_C_OnPingMenuEnded_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CanHighFive
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::CanHighFive(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanHighFive");

	ACharacter_Master_Player_C_CanHighFive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.ActivateLongGun
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ActivateLongGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ActivateLongGun");

	ACharacter_Master_Player_C_ActivateLongGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CanPing
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanPing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::CanPing(bool* CanPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanPing");

	ACharacter_Master_Player_C_CanPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPing != nullptr)
		*CanPing = params.CanPing;
}


// Function Character_Master_Player.Character_Master_Player_C.CanShowPingMenu
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_Show                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::CanShowPingMenu(bool* Can_Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanShowPingMenu");

	ACharacter_Master_Player_C_CanShowPingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Show != nullptr)
		*Can_Show = params.Can_Show;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Steam
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Steam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Steam");

	ACharacter_Master_Player_C_DLC___Award_Steam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Get Highest Boss Weapon Level
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Highest_Boss_Weapon_Level      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Get_Highest_Boss_Weapon_Level(int* Highest_Boss_Weapon_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Get Highest Boss Weapon Level");

	ACharacter_Master_Player_C_Get_Highest_Boss_Weapon_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Highest_Boss_Weapon_Level != nullptr)
		*Highest_Boss_Weapon_Level = params.Highest_Boss_Weapon_Level;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC Logging
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::DLC_Logging(class FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC Logging");

	ACharacter_Master_Player_C_DLC_Logging_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.GetTPSHud
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ATPSHud_C*               TPSHud                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::GetTPSHud(class ATPSHud_C** TPSHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.GetTPSHud");

	ACharacter_Master_Player_C_GetTPSHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPSHud != nullptr)
		*TPSHud = params.TPSHud;
}


// Function Character_Master_Player.Character_Master_Player_C.UpdateBendableFoilage
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::UpdateBendableFoilage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.UpdateBendableFoilage");

	ACharacter_Master_Player_C_UpdateBendableFoilage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.RemoveActionsOnReset
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::RemoveActionsOnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.RemoveActionsOnReset");

	ACharacter_Master_Player_C_RemoveActionsOnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.IsHoldingInteractButton
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::IsHoldingInteractButton(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.IsHoldingInteractButton");

	ACharacter_Master_Player_C_IsHoldingInteractButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.HasUnspentTraitPoints
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::HasUnspentTraitPoints(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.HasUnspentTraitPoints");

	ACharacter_Master_Player_C_HasUnspentTraitPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Survivor
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Survivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Survivor");

	ACharacter_Master_Player_C_DLC___Award_Survivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Nightstalker
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Nightstalker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Nightstalker");

	ACharacter_Master_Player_C_DLC___Award_Nightstalker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Gladiator
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Gladiator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Gladiator");

	ACharacter_Master_Player_C_DLC___Award_Gladiator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Doomsayer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Doomsayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Doomsayer");

	ACharacter_Master_Player_C_DLC___Award_Doomsayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Remove DLC Items Player Should Not Have
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Remove_DLC_Items_Player_Should_Not_Have()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Remove DLC Items Player Should Not Have");

	ACharacter_Master_Player_C_DLC___Remove_DLC_Items_Player_Should_Not_Have_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Twitch
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DLC___Award_Twitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DLC - Award Twitch");

	ACharacter_Master_Player_C_DLC___Award_Twitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Get Total Weapon Mods
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 AddedModBP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Total_Weapon_Mods              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Get_Total_Weapon_Mods(class UClass** AddedModBP, int* Total_Weapon_Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Get Total Weapon Mods");

	ACharacter_Master_Player_C_Get_Total_Weapon_Mods_Params params;
	params.AddedModBP = AddedModBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Total_Weapon_Mods != nullptr)
		*Total_Weapon_Mods = params.Total_Weapon_Mods;
}


// Function Character_Master_Player.Character_Master_Player_C.Get Armor Sets Acquired
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Armor_Sets_Acquired            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Get_Armor_Sets_Acquired(int* Armor_Sets_Acquired)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Get Armor Sets Acquired");

	ACharacter_Master_Player_C_Get_Armor_Sets_Acquired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Armor_Sets_Acquired != nullptr)
		*Armor_Sets_Acquired = params.Armor_Sets_Acquired;
}


// Function Character_Master_Player.Character_Master_Player_C.Get Highest Weapon Level
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Highest_Weapon_Level           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Get_Highest_Weapon_Level(int* Highest_Weapon_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Get Highest Weapon Level");

	ACharacter_Master_Player_C_Get_Highest_Weapon_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Highest_Weapon_Level != nullptr)
		*Highest_Weapon_Level = params.Highest_Weapon_Level;
}


// Function Character_Master_Player.Character_Master_Player_C.GetPlayerController
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::GetPlayerController(class APlayerController** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.GetPlayerController");

	ACharacter_Master_Player_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.Get Highest Trait Level
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Highest_Trait_Level            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Get_Highest_Trait_Level(int* Highest_Trait_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Get Highest Trait Level");

	ACharacter_Master_Player_C_Get_Highest_Trait_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Highest_Trait_Level != nullptr)
		*Highest_Trait_Level = params.Highest_Trait_Level;
}


// Function Character_Master_Player.Character_Master_Player_C.HasSpentTraitPoint
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::HasSpentTraitPoint(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.HasSpentTraitPoint");

	ACharacter_Master_Player_C_HasSpentTraitPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.IncrementWeaponKill
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::IncrementWeaponKill(class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.IncrementWeaponKill");

	ACharacter_Master_Player_C_IncrementWeaponKill_Params params;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CheckNumKills
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::CheckNumKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CheckNumKills");

	ACharacter_Master_Player_C_CheckNumKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CheckNumWeapons
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::CheckNumWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CheckNumWeapons");

	ACharacter_Master_Player_C_CheckNumWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.TryUnlockTraits
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::TryUnlockTraits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.TryUnlockTraits");

	ACharacter_Master_Player_C_TryUnlockTraits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.AllowWeaponSwap
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::AllowWeaponSwap(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.AllowWeaponSwap");

	ACharacter_Master_Player_C_AllowWeaponSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.ReplenishResourcesShard
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          DragonHearts                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::ReplenishResourcesShard(bool* Health, bool* Ammo, bool* DragonHearts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ReplenishResourcesShard");

	ACharacter_Master_Player_C_ReplenishResourcesShard_Params params;
	params.Health = Health;
	params.Ammo = Ammo;
	params.DragonHearts = DragonHearts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.IsDemo
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::IsDemo(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.IsDemo");

	ACharacter_Master_Player_C_IsDemo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.HasUnusedWeaponMods
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::HasUnusedWeaponMods(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.HasUnusedWeaponMods");

	ACharacter_Master_Player_C_HasUnusedWeaponMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.InTown
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::InTown(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InTown");

	ACharacter_Master_Player_C_InTown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.IncrementNumCheckpointsUsed
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::IncrementNumCheckpointsUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.IncrementNumCheckpointsUsed");

	ACharacter_Master_Player_C_IncrementNumCheckpointsUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CanCraftWeaponMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::CanCraftWeaponMod(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanCraftWeaponMod");

	ACharacter_Master_Player_C_CanCraftWeaponMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.CanUpgrade
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::CanUpgrade(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CanUpgrade");

	ACharacter_Master_Player_C_CanUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.ClearMiniMap
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ClearMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ClearMiniMap");

	ACharacter_Master_Player_C_ClearMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Set DragonHeart Quantity
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Set_DragonHeart_Quantity(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Set DragonHeart Quantity");

	ACharacter_Master_Player_C_Set_DragonHeart_Quantity_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.EndUseCheckpoint
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::EndUseCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.EndUseCheckpoint");

	ACharacter_Master_Player_C_EndUseCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.UpdateDisplayLevel
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::UpdateDisplayLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.UpdateDisplayLevel");

	ACharacter_Master_Player_C_UpdateDisplayLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.LockMiniMap
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::LockMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.LockMiniMap");

	ACharacter_Master_Player_C_LockMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.GiveMaterials
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::GiveMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.GiveMaterials");

	ACharacter_Master_Player_C_GiveMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Lock Position
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::Lock_Position(bool* enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Lock Position");

	ACharacter_Master_Player_C_Lock_Position_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.IsTraveling
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Traveling                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::IsTraveling(bool* Traveling)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.IsTraveling");

	ACharacter_Master_Player_C_IsTraveling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Traveling != nullptr)
		*Traveling = params.Traveling;
}


// Function Character_Master_Player.Character_Master_Player_C.Get Hud Widget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget_HUD_C*           HudWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Get_Hud_Widget(class UWidget_HUD_C** HudWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Get Hud Widget");

	ACharacter_Master_Player_C_Get_Hud_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HudWidget != nullptr)
		*HudWidget = params.HudWidget;
}


// Function Character_Master_Player.Character_Master_Player_C.Reset Minimap
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Reset_Minimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Reset Minimap");

	ACharacter_Master_Player_C_Reset_Minimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ReplenishResources
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          DragonHearts                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          ModPower                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::ReplenishResources(bool* Health, bool* Ammo, bool* DragonHearts, bool* ModPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ReplenishResources");

	ACharacter_Master_Player_C_ReplenishResources_Params params;
	params.Health = Health;
	params.Ammo = Ammo;
	params.DragonHearts = DragonHearts;
	params.ModPower = ModPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.FilterIncomingDamage");

	ACharacter_Master_Player_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Character_Master_Player.Character_Master_Player_C.AllowAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::AllowAction(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.AllowAction");

	ACharacter_Master_Player_C_AllowAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_B965762A445B982708DF2D8FEEDBC3E2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_B965762A445B982708DF2D8FEEDBC3E2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_B965762A445B982708DF2D8FEEDBC3E2");

	ACharacter_Master_Player_C_OnFailure_B965762A445B982708DF2D8FEEDBC3E2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_B965762A445B982708DF2D8FEEDBC3E2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_B965762A445B982708DF2D8FEEDBC3E2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_B965762A445B982708DF2D8FEEDBC3E2");

	ACharacter_Master_Player_C_OnSuccess_B965762A445B982708DF2D8FEEDBC3E2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B");

	ACharacter_Master_Player_C_OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B");

	ACharacter_Master_Player_C_OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_744C71424FAEFE20C17A84A02737DAD7
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_744C71424FAEFE20C17A84A02737DAD7(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_744C71424FAEFE20C17A84A02737DAD7");

	ACharacter_Master_Player_C_OnFailure_744C71424FAEFE20C17A84A02737DAD7_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_744C71424FAEFE20C17A84A02737DAD7
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_744C71424FAEFE20C17A84A02737DAD7(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_744C71424FAEFE20C17A84A02737DAD7");

	ACharacter_Master_Player_C_OnSuccess_744C71424FAEFE20C17A84A02737DAD7_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_5B892AD148B8A7E4AE0373B595B54D75
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_5B892AD148B8A7E4AE0373B595B54D75(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_5B892AD148B8A7E4AE0373B595B54D75");

	ACharacter_Master_Player_C_OnFailure_5B892AD148B8A7E4AE0373B595B54D75_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5B892AD148B8A7E4AE0373B595B54D75
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_5B892AD148B8A7E4AE0373B595B54D75(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5B892AD148B8A7E4AE0373B595B54D75");

	ACharacter_Master_Player_C_OnSuccess_5B892AD148B8A7E4AE0373B595B54D75_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9");

	ACharacter_Master_Player_C_OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9");

	ACharacter_Master_Player_C_OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_5E04062640ABD461EA31B792B4659C7F
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_5E04062640ABD461EA31B792B4659C7F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_5E04062640ABD461EA31B792B4659C7F");

	ACharacter_Master_Player_C_OnFailure_5E04062640ABD461EA31B792B4659C7F_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5E04062640ABD461EA31B792B4659C7F
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_5E04062640ABD461EA31B792B4659C7F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5E04062640ABD461EA31B792B4659C7F");

	ACharacter_Master_Player_C_OnSuccess_5E04062640ABD461EA31B792B4659C7F_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_14840F50467879E63F4FC8BBF4158F11
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_14840F50467879E63F4FC8BBF4158F11(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_14840F50467879E63F4FC8BBF4158F11");

	ACharacter_Master_Player_C_OnFailure_14840F50467879E63F4FC8BBF4158F11_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_14840F50467879E63F4FC8BBF4158F11
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_14840F50467879E63F4FC8BBF4158F11(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_14840F50467879E63F4FC8BBF4158F11");

	ACharacter_Master_Player_C_OnSuccess_14840F50467879E63F4FC8BBF4158F11_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_B3F0A23548B1471DE982029336B3238A
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_B3F0A23548B1471DE982029336B3238A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_B3F0A23548B1471DE982029336B3238A");

	ACharacter_Master_Player_C_OnFailure_B3F0A23548B1471DE982029336B3238A_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_B3F0A23548B1471DE982029336B3238A
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_B3F0A23548B1471DE982029336B3238A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_B3F0A23548B1471DE982029336B3238A");

	ACharacter_Master_Player_C_OnSuccess_B3F0A23548B1471DE982029336B3238A_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6");

	ACharacter_Master_Player_C_OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6");

	ACharacter_Master_Player_C_OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C");

	ACharacter_Master_Player_C_OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C");

	ACharacter_Master_Player_C_OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_64629C8140FC7F24E521E99EAAF74C4B
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_64629C8140FC7F24E521E99EAAF74C4B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_64629C8140FC7F24E521E99EAAF74C4B");

	ACharacter_Master_Player_C_OnFailure_64629C8140FC7F24E521E99EAAF74C4B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_64629C8140FC7F24E521E99EAAF74C4B
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_64629C8140FC7F24E521E99EAAF74C4B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_64629C8140FC7F24E521E99EAAF74C4B");

	ACharacter_Master_Player_C_OnSuccess_64629C8140FC7F24E521E99EAAF74C4B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_D212BFC048A1255C560CBBBD13D96EDA
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_D212BFC048A1255C560CBBBD13D96EDA(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_D212BFC048A1255C560CBBBD13D96EDA");

	ACharacter_Master_Player_C_OnFailure_D212BFC048A1255C560CBBBD13D96EDA_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_D212BFC048A1255C560CBBBD13D96EDA
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_D212BFC048A1255C560CBBBD13D96EDA(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_D212BFC048A1255C560CBBBD13D96EDA");

	ACharacter_Master_Player_C_OnSuccess_D212BFC048A1255C560CBBBD13D96EDA_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_06C191CA4361D74F447A59BC1DF8DE1A
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_06C191CA4361D74F447A59BC1DF8DE1A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_06C191CA4361D74F447A59BC1DF8DE1A");

	ACharacter_Master_Player_C_OnFailure_06C191CA4361D74F447A59BC1DF8DE1A_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A");

	ACharacter_Master_Player_C_OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_E43E11DF45EA2007993D4E92724C4FC2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_E43E11DF45EA2007993D4E92724C4FC2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_E43E11DF45EA2007993D4E92724C4FC2");

	ACharacter_Master_Player_C_OnFailure_E43E11DF45EA2007993D4E92724C4FC2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_E43E11DF45EA2007993D4E92724C4FC2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_E43E11DF45EA2007993D4E92724C4FC2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_E43E11DF45EA2007993D4E92724C4FC2");

	ACharacter_Master_Player_C_OnSuccess_E43E11DF45EA2007993D4E92724C4FC2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_39ADB5624FB857C60172D5B95C6ECEAC
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_39ADB5624FB857C60172D5B95C6ECEAC(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_39ADB5624FB857C60172D5B95C6ECEAC");

	ACharacter_Master_Player_C_OnFailure_39ADB5624FB857C60172D5B95C6ECEAC_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC");

	ACharacter_Master_Player_C_OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8");

	ACharacter_Master_Player_C_OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8");

	ACharacter_Master_Player_C_OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_D6DB88DF4493C5760967508B47A06AB3
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_D6DB88DF4493C5760967508B47A06AB3(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_D6DB88DF4493C5760967508B47A06AB3");

	ACharacter_Master_Player_C_OnFailure_D6DB88DF4493C5760967508B47A06AB3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_D6DB88DF4493C5760967508B47A06AB3
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_D6DB88DF4493C5760967508B47A06AB3(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_D6DB88DF4493C5760967508B47A06AB3");

	ACharacter_Master_Player_C_OnSuccess_D6DB88DF4493C5760967508B47A06AB3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_8F2349F443528EB971D9D28ABCA8F70F
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_8F2349F443528EB971D9D28ABCA8F70F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_8F2349F443528EB971D9D28ABCA8F70F");

	ACharacter_Master_Player_C_OnFailure_8F2349F443528EB971D9D28ABCA8F70F_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_8F2349F443528EB971D9D28ABCA8F70F
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_8F2349F443528EB971D9D28ABCA8F70F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_8F2349F443528EB971D9D28ABCA8F70F");

	ACharacter_Master_Player_C_OnSuccess_8F2349F443528EB971D9D28ABCA8F70F_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_C37F6928477ED7394B76848A247D809F
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_C37F6928477ED7394B76848A247D809F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_C37F6928477ED7394B76848A247D809F");

	ACharacter_Master_Player_C_OnFailure_C37F6928477ED7394B76848A247D809F_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_C37F6928477ED7394B76848A247D809F
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_C37F6928477ED7394B76848A247D809F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_C37F6928477ED7394B76848A247D809F");

	ACharacter_Master_Player_C_OnSuccess_C37F6928477ED7394B76848A247D809F_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_EF5700BD42FEE53DF81784AB624E114B
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_EF5700BD42FEE53DF81784AB624E114B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_EF5700BD42FEE53DF81784AB624E114B");

	ACharacter_Master_Player_C_OnFailure_EF5700BD42FEE53DF81784AB624E114B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_EF5700BD42FEE53DF81784AB624E114B
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_EF5700BD42FEE53DF81784AB624E114B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_EF5700BD42FEE53DF81784AB624E114B");

	ACharacter_Master_Player_C_OnSuccess_EF5700BD42FEE53DF81784AB624E114B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_A7C6D7124B54BD212A425F8222BB92EB
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_A7C6D7124B54BD212A425F8222BB92EB(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_A7C6D7124B54BD212A425F8222BB92EB");

	ACharacter_Master_Player_C_OnFailure_A7C6D7124B54BD212A425F8222BB92EB_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_A7C6D7124B54BD212A425F8222BB92EB
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_A7C6D7124B54BD212A425F8222BB92EB(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_A7C6D7124B54BD212A425F8222BB92EB");

	ACharacter_Master_Player_C_OnSuccess_A7C6D7124B54BD212A425F8222BB92EB_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFailure_A6F3616442127DE33894FBAEE666DDD8
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnFailure_A6F3616442127DE33894FBAEE666DDD8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFailure_A6F3616442127DE33894FBAEE666DDD8");

	ACharacter_Master_Player_C_OnFailure_A6F3616442127DE33894FBAEE666DDD8_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_A6F3616442127DE33894FBAEE666DDD8
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSuccess_A6F3616442127DE33894FBAEE666DDD8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSuccess_A6F3616442127DE33894FBAEE666DDD8");

	ACharacter_Master_Player_C_OnSuccess_A6F3616442127DE33894FBAEE666DDD8_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15");

	ACharacter_Master_Player_C_InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect1_K2Node_InputActionEvent_14
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_QuickSelect1_K2Node_InputActionEvent_14(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect1_K2Node_InputActionEvent_14");

	ACharacter_Master_Player_C_InpActEvt_QuickSelect1_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect2_K2Node_InputActionEvent_13
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_QuickSelect2_K2Node_InputActionEvent_13(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect2_K2Node_InputActionEvent_13");

	ACharacter_Master_Player_C_InpActEvt_QuickSelect2_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect3_K2Node_InputActionEvent_12
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_QuickSelect3_K2Node_InputActionEvent_12(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect3_K2Node_InputActionEvent_12");

	ACharacter_Master_Player_C_InpActEvt_QuickSelect3_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect4_K2Node_InputActionEvent_11
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_QuickSelect4_K2Node_InputActionEvent_11(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect4_K2Node_InputActionEvent_11");

	ACharacter_Master_Player_C_InpActEvt_QuickSelect4_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_Ping_K2Node_InputActionEvent_10
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_Ping_K2Node_InputActionEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_Ping_K2Node_InputActionEvent_10");

	ACharacter_Master_Player_C_InpActEvt_Ping_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_Ping_K2Node_InputActionEvent_9
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_Ping_K2Node_InputActionEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_Ping_K2Node_InputActionEvent_9");

	ACharacter_Master_Player_C_InpActEvt_Ping_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_GodMode_K2Node_InputActionEvent_8
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_GodMode_K2Node_InputActionEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_GodMode_K2Node_InputActionEvent_8");

	ACharacter_Master_Player_C_InpActEvt_GodMode_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7");

	ACharacter_Master_Player_C_InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6");

	ACharacter_Master_Player_C_InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5");

	ACharacter_Master_Player_C_InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ResourceHack_K2Node_InputActionEvent_4
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_ResourceHack_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ResourceHack_K2Node_InputActionEvent_4");

	ACharacter_Master_Player_C_InpActEvt_ResourceHack_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3");

	ACharacter_Master_Player_C_InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_SkipIntro_K2Node_InputActionEvent_2
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_SkipIntro_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_SkipIntro_K2Node_InputActionEvent_2");

	ACharacter_Master_Player_C_InpActEvt_SkipIntro_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnLoaded_E0E805FD4AD71513D4F4B691FA157880
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnLoaded_E0E805FD4AD71513D4F4B691FA157880(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnLoaded_E0E805FD4AD71513D4F4B691FA157880");

	ACharacter_Master_Player_C_OnLoaded_E0E805FD4AD71513D4F4B691FA157880_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1");

	ACharacter_Master_Player_C_InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.StartHighFive
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::StartHighFive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.StartHighFive");

	ACharacter_Master_Player_C_StartHighFive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.StopHighFive
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::StopHighFive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.StopHighFive");

	ACharacter_Master_Player_C_StopHighFive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnHighFiveSuccess
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnHighFiveSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnHighFiveSuccess");

	ACharacter_Master_Player_C_OnHighFiveSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ClientGiveWaveEmote
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ClientGiveWaveEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ClientGiveWaveEmote");

	ACharacter_Master_Player_C_ClientGiveWaveEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.EnterBarrier
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EventRegionBarrier_C** Barrier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::EnterBarrier(class ABP_EventRegionBarrier_C** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.EnterBarrier");

	ACharacter_Master_Player_C_EnterBarrier_Params params;
	params.Barrier = Barrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ExitBarrier
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EventRegionBarrier_C** Barrier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ExitBarrier(class ABP_EventRegionBarrier_C** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ExitBarrier");

	ACharacter_Master_Player_C_ExitBarrier_Params params;
	params.Barrier = Barrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.PlayBarrierFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EventRegionBarrier_C** Barrier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::PlayBarrierFX(class ABP_EventRegionBarrier_C** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.PlayBarrierFX");

	ACharacter_Master_Player_C_PlayBarrierFX_Params params;
	params.Barrier = Barrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.MulticastPlayBarrierFX
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EventRegionBarrier_C** Barrier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::MulticastPlayBarrierFX(class ABP_EventRegionBarrier_C** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.MulticastPlayBarrierFX");

	ACharacter_Master_Player_C_MulticastPlayBarrierFX_Params params;
	params.Barrier = Barrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ServerPlayBarrierFX
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EventRegionBarrier_C** Barrier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ServerPlayBarrierFX(class ABP_EventRegionBarrier_C** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ServerPlayBarrierFX");

	ACharacter_Master_Player_C_ServerPlayBarrierFX_Params params;
	params.Barrier = Barrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEnterBarrier
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DreamerEventRegionBarrier_C** Barrier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnEnterBarrier(class ABP_DreamerEventRegionBarrier_C** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEnterBarrier");

	ACharacter_Master_Player_C_OnEnterBarrier_Params params;
	params.Barrier = Barrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnExitBarrier
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DreamerEventRegionBarrier_C** Barrier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnExitBarrier(class ABP_DreamerEventRegionBarrier_C** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnExitBarrier");

	ACharacter_Master_Player_C_OnExitBarrier_Params params;
	params.Barrier = Barrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Validate DLC
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Validate_DLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Validate DLC");

	ACharacter_Master_Player_C_Validate_DLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.SurvivorBagUsed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::SurvivorBagUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.SurvivorBagUsed");

	ACharacter_Master_Player_C_SurvivorBagUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnLocallyControlled
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ACharacter_Master_Player_C::OnLocallyControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnLocallyControlled");

	ACharacter_Master_Player_C_OnLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Add DLC Item
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Add_DLC_Item(TSoftObjectPtr<class UClass>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Add DLC Item");

	ACharacter_Master_Player_C_Add_DLC_Item_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Server Remove DLC Item
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Server_Remove_DLC_Item(TSoftObjectPtr<class UClass>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Server Remove DLC Item");

	ACharacter_Master_Player_C_Server_Remove_DLC_Item_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Give DLC
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Give_DLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Give DLC");

	ACharacter_Master_Player_C_Give_DLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Server_InitializeAccountCurrency
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Server_InitializeAccountCurrency(class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Server_InitializeAccountCurrency");

	ACharacter_Master_Player_C_Server_InitializeAccountCurrency_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.SetPhase
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewPhase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::SetPhase(int* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.SetPhase");

	ACharacter_Master_Player_C_SetPhase_Params params;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CheckAccountCurrency
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::CheckAccountCurrency()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CheckAccountCurrency");

	ACharacter_Master_Player_C_CheckAccountCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.IPetADog
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::IPetADog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.IPetADog");

	ACharacter_Master_Player_C_IPetADog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Items
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item_BP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemNotifyReason*             Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Items(class UClass** Item_BP, int* Quantity, EItemNotifyReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Items");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Items_Params params;
	params.Item_BP = Item_BP;
	params.Quantity = Quantity;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Loot
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Loot(int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Loot");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Loot_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Weapon Mods
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewModBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Weapon_Mods(class UClass** NewModBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Weapon Mods");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Weapon_Mods_Params params;
	params.NewModBP = NewModBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Armor Sets
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Armor_Sets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Armor Sets");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Armor_Sets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Trait Added
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Trait_Added()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Trait Added");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Trait_Added_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Trait Level
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Trait_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Trait Level");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Trait_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Upgrade Item
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item_BP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Upgrade_Item(class UClass** Item_BP, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Upgrade Item");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Upgrade_Item_Params params;
	params.Item_BP = Item_BP;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Crafted Item
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item_BP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Crafted_Item(class UClass** Item_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Crafted Item");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Crafted_Item_Params params;
	params.Item_BP = Item_BP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Check Dragon Heart Count
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Check_Dragon_Heart_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Check Dragon Heart Count");

	ACharacter_Master_Player_C_Check_Dragon_Heart_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Armor Skin Sets
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Update_Achievement_Progress___Armor_Skin_Sets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Armor Skin Sets");

	ACharacter_Master_Player_C_Update_Achievement_Progress___Armor_Skin_Sets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnCheckHarsgaardRecorders
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>* NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnCheckHarsgaardRecorders(TSoftObjectPtr<class UObject>* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnCheckHarsgaardRecorders");

	ACharacter_Master_Player_C_OnCheckHarsgaardRecorders_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnChromaDamage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ACharacter_Master_Player_C::OnChromaDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnChromaDamage");

	ACharacter_Master_Player_C_OnChromaDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemNotifyReason*             Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature(class UClass** ItemBP, int* Quantity, int* Level, EItemNotifyReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;
	params.Level = Level;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.TryUnlockWeaponTraits
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::TryUnlockWeaponTraits(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.TryUnlockWeaponTraits");

	ACharacter_Master_Player_C_TryUnlockWeaponTraits_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            Damage                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Master_Player_C::BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature(struct FDamageInfo* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// bool*                          bSelfRevive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature(bool* bSelfRevive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature_Params params;
	params.bSelfRevive = bSelfRevive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ListenForClientHits
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ListenForClientHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ListenForClientHits");

	ACharacter_Master_Player_C_ListenForClientHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnClientHitTarget
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Master_Player_C::OnClientHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnClientHitTarget");

	ACharacter_Master_Player_C_OnClientHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemNotifyReason*             Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature(class UClass** ItemBP, int* Quantity, int* Level, EItemNotifyReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;
	params.Level = Level;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature(class UClass** Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           PreviousLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature(class UClass** Trait, int* PreviousLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature_Params params;
	params.Trait = Trait;
	params.PreviousLevel = PreviousLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSummonKilledTarget
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnSummonKilledTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSummonKilledTarget");

	ACharacter_Master_Player_C_OnSummonKilledTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ListenForClientDamageTaken
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ListenForClientDamageTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ListenForClientDamageTaken");

	ACharacter_Master_Player_C_ListenForClientDamageTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnTakeDamage
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Master_Player_C::OnTakeDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnTakeDamage");

	ACharacter_Master_Player_C_OnTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ListenForClientStateChange
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ListenForClientStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ListenForClientStateChange");

	ACharacter_Master_Player_C_ListenForClientStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnClientStateChange
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnClientStateChange(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnClientStateChange");

	ACharacter_Master_Player_C_OnClientStateChange_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.RegisterStatusEffectApplied
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::RegisterStatusEffectApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.RegisterStatusEffectApplied");

	ACharacter_Master_Player_C_RegisterStatusEffectApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.RegisterStatusEffectConsumableCleansed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::RegisterStatusEffectConsumableCleansed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.RegisterStatusEffectConsumableCleansed");

	ACharacter_Master_Player_C_RegisterStatusEffectConsumableCleansed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature(class UWoundedComponent** WoundedComponent, EWoundedState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnReviveFXStart
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnReviveFXStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnReviveFXStart");

	ACharacter_Master_Player_C_OnReviveFXStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnReviveFXStop
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnReviveFXStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnReviveFXStop");

	ACharacter_Master_Player_C_OnReviveFXStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnPingHeld
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnPingHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnPingHeld");

	ACharacter_Master_Player_C_OnPingHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ManualWeaponToggle
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ManualWeaponToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ManualWeaponToggle");

	ACharacter_Master_Player_C_ManualWeaponToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DelaySetVisible
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::DelaySetVisible(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DelaySetVisible");

	ACharacter_Master_Player_C_DelaySetVisible_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void ACharacter_Master_Player_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteNo
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteNo");

	ACharacter_Master_Player_C_OnEmoteNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteYes
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteYes");

	ACharacter_Master_Player_C_OnEmoteYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteWave
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteWave");

	ACharacter_Master_Player_C_OnEmoteWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteCheer
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteCheer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteCheer");

	ACharacter_Master_Player_C_OnEmoteCheer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteBeckon
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteBeckon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteBeckon");

	ACharacter_Master_Player_C_OnEmoteBeckon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteFail
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteFail");

	ACharacter_Master_Player_C_OnEmoteFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteExhausted
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteExhausted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteExhausted");

	ACharacter_Master_Player_C_OnEmoteExhausted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnEmoteLaugh
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnEmoteLaugh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnEmoteLaugh");

	ACharacter_Master_Player_C_OnEmoteLaugh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnActivate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnActivate");

	ACharacter_Master_Player_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnUsed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquipment**             Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnUsed(class AEquipment** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnUsed");

	ACharacter_Master_Player_C_OnUsed_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature(class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Give Liquid Escape
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::Give_Liquid_Escape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Give Liquid Escape");

	ACharacter_Master_Player_C_Give_Liquid_Escape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnClientAddAccountCurrency
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnClientAddAccountCurrency(class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnClientAddAccountCurrency");

	ACharacter_Master_Player_C_OnClientAddAccountCurrency_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.UseCheckpoint
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::UseCheckpoint(class AInteractive_Checkpoint_C** Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.UseCheckpoint");

	ACharacter_Master_Player_C_UseCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CheckpointBegin
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::CheckpointBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CheckpointBegin");

	ACharacter_Master_Player_C_CheckpointBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.CheckpointEnd
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::CheckpointEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.CheckpointEnd");

	ACharacter_Master_Player_C_CheckpointEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.EventOnDialogResult
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::EventOnDialogResult(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.EventOnDialogResult");

	ACharacter_Master_Player_C_EventOnDialogResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFortifyFailed
// 00007FF6F8B35350
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnFortifyFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFortifyFailed");

	ACharacter_Master_Player_C_OnFortifyFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnSpawnedAtCheckpoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnSpawnedAtCheckpoint(class AInteractive_Checkpoint_C** Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnSpawnedAtCheckpoint");

	ACharacter_Master_Player_C_OnSpawnedAtCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ClientSpawnedAtCheckpoint
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_Checkpoint_C** Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ClientSpawnedAtCheckpoint(class AInteractive_Checkpoint_C** Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ClientSpawnedAtCheckpoint");

	ACharacter_Master_Player_C_ClientSpawnedAtCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DeferredCheckpointBegin
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DeferredCheckpointBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DeferredCheckpointBegin");

	ACharacter_Master_Player_C_DeferredCheckpointBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.TryBeginCheckpoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::TryBeginCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.TryBeginCheckpoint");

	ACharacter_Master_Player_C_TryBeginCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ServerFinishLoad
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ServerFinishLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ServerFinishLoad");

	ACharacter_Master_Player_C_ServerFinishLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ShowCheckpointMenu
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ShowCheckpointMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ShowCheckpointMenu");

	ACharacter_Master_Player_C_ShowCheckpointMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.GodMode
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewGodMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::GodMode(bool* NewGodMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.GodMode");

	ACharacter_Master_Player_C_GodMode_Params params;
	params.NewGodMode = NewGodMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.SetUntargetable
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewUntargetable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::SetUntargetable(bool* NewUntargetable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.SetUntargetable");

	ACharacter_Master_Player_C_SetUntargetable_Params params;
	params.NewUntargetable = NewUntargetable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DebugDamageSelf
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           PowerOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::DebugDamageSelf(float* Amount, int* PowerOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DebugDamageSelf");

	ACharacter_Master_Player_C_DebugDamageSelf_Params params;
	params.Amount = Amount;
	params.PowerOverride = PowerOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DebugResourceHack
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DebugResourceHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DebugResourceHack");

	ACharacter_Master_Player_C_DebugResourceHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.DebugGiveMaterials
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::DebugGiveMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.DebugGiveMaterials");

	ACharacter_Master_Player_C_DebugGiveMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ServerUnequipMod
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ServerUnequipMod(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ServerUnequipMod");

	ACharacter_Master_Player_C_ServerUnequipMod_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ServerEquipMod
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           ModItemID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ServerEquipMod(int* ItemID, int* ModItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ServerEquipMod");

	ACharacter_Master_Player_C_ServerEquipMod_Params params;
	params.ItemID = ItemID;
	params.ModItemID = ModItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.AddCheckpointNotification
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         TimeOverride                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::AddCheckpointNotification(struct FName* NameID, float* TimeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.AddCheckpointNotification");

	ACharacter_Master_Player_C_AddCheckpointNotification_Params params;
	params.NameID = NameID;
	params.TimeOverride = TimeOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.RemoveCheckpointNotification
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::RemoveCheckpointNotification(struct FName* NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.RemoveCheckpointNotification");

	ACharacter_Master_Player_C_RemoveCheckpointNotification_Params params;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ClearAllCheckpointNotifications
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::ClearAllCheckpointNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ClearAllCheckpointNotifications");

	ACharacter_Master_Player_C_ClearAllCheckpointNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ServerZoneDoorFailedNotify
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ServerZoneDoorFailedNotify(class ARemnantCharacter** Player, struct FName* NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ServerZoneDoorFailedNotify");

	ACharacter_Master_Player_C_ServerZoneDoorFailedNotify_Params params;
	params.Player = Player;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.MulticastZoneDoorFailedNotify
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::MulticastZoneDoorFailedNotify(class ARemnantCharacter** Player, struct FName* NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.MulticastZoneDoorFailedNotify");

	ACharacter_Master_Player_C_MulticastZoneDoorFailedNotify_Params params;
	params.Player = Player;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.LocalZoneDoorFailedNotify
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::LocalZoneDoorFailedNotify(class ARemnantCharacter** Player, struct FName* NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.LocalZoneDoorFailedNotify");

	ACharacter_Master_Player_C_LocalZoneDoorFailedNotify_Params params;
	params.Player = Player;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ClientToServerApplyDamage
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CauseActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DamageScalar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           PowerOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ClientToServerApplyDamage(class AActor** CauseActor, float* Damage, float* DamageScalar, int* PowerOverride, class UClass** DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ClientToServerApplyDamage");

	ACharacter_Master_Player_C_ClientToServerApplyDamage_Params params;
	params.CauseActor = CauseActor;
	params.Damage = Damage;
	params.DamageScalar = DamageScalar;
	params.PowerOverride = PowerOverride;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ApplyDamage_ClientAuthoritative
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CauseActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DamageScalar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           PowerOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ApplyDamage_ClientAuthoritative(class AActor** CauseActor, float* Damage, float* DamageScalar, int* PowerOverride, class UClass** DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ApplyDamage_ClientAuthoritative");

	ACharacter_Master_Player_C_ApplyDamage_ClientAuthoritative_Params params;
	params.CauseActor = CauseActor;
	params.Damage = Damage;
	params.DamageScalar = DamageScalar;
	params.PowerOverride = PowerOverride;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.MarkHarsgaardRootGunObtained
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::MarkHarsgaardRootGunObtained()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.MarkHarsgaardRootGunObtained");

	ACharacter_Master_Player_C_MarkHarsgaardRootGunObtained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Master_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ReceiveBeginPlay");

	ACharacter_Master_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnDead_Event_1");

	ACharacter_Master_Player_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnCameraOrientLeft
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnCameraOrientLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnCameraOrientLeft");

	ACharacter_Master_Player_C_OnCameraOrientLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnCameraOrientRight
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnCameraOrientRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnCameraOrientRight");

	ACharacter_Master_Player_C_OnCameraOrientRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnWallEnter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnWallEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnWallEnter");

	ACharacter_Master_Player_C_OnWallEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnWallExit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnWallExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnWallExit");

	ACharacter_Master_Player_C_OnWallExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnRespawnAfterDeath
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ACharacter_Master_Player_C::OnRespawnAfterDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnRespawnAfterDeath");

	ACharacter_Master_Player_C_OnRespawnAfterDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnNotifyTakeDamage_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Master_Player_C::OnNotifyTakeDamage_Event_1(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnNotifyTakeDamage_Event_1");

	ACharacter_Master_Player_C_OnNotifyTakeDamage_Event_1_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void ACharacter_Master_Player_C::BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnTeleportOut
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnTeleportOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnTeleportOut");

	ACharacter_Master_Player_C_OnTeleportOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnTeleportIn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnTeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnTeleportIn");

	ACharacter_Master_Player_C_OnTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ReceiveEndPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ReceiveEndPlay");

	ACharacter_Master_Player_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           PreviousLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature(int* NewLevel, int* PreviousLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature_Params params;
	params.NewLevel = NewLevel;
	params.PreviousLevel = PreviousLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnCrouchFoleyEnter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnCrouchFoleyEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnCrouchFoleyEnter");

	ACharacter_Master_Player_C_OnCrouchFoleyEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnCrouchFoleyExit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnCrouchFoleyExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnCrouchFoleyExit");

	ACharacter_Master_Player_C_OnCrouchFoleyExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnAimFoleyEnter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnAimFoleyEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnAimFoleyEnter");

	ACharacter_Master_Player_C_OnAimFoleyEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnAimFoleyExit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnAimFoleyExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnAimFoleyExit");

	ACharacter_Master_Player_C_OnAimFoleyExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature(class UWoundedComponent** WoundedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature");

	ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature_Params params;
	params.WoundedComponent = WoundedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnReplenishResources
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          DragonHearts                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          ModPower                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::OnReplenishResources(bool* Health, bool* Ammo, bool* DragonHearts, bool* ModPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnReplenishResources");

	ACharacter_Master_Player_C_OnReplenishResources_Params params;
	params.Health = Health;
	params.Ammo = Ammo;
	params.DragonHearts = DragonHearts;
	params.ModPower = ModPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnReplenishResourcesShard
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          DragonHearts                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::OnReplenishResourcesShard(bool* Health, bool* Ammo, bool* DragonHearts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnReplenishResourcesShard");

	ACharacter_Master_Player_C_OnReplenishResourcesShard_Params params;
	params.Health = Health;
	params.Ammo = Ammo;
	params.DragonHearts = DragonHearts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnUpgradeItem_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::OnUpgradeItem_Event_1(class UClass** ItemBP, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnUpgradeItem_Event_1");

	ACharacter_Master_Player_C_OnUpgradeItem_Event_1_Params params;
	params.ItemBP = ItemBP;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ClientHudPopScale
// 00007FF6F8B35350
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          DragonHeart                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Master_Player_C::ClientHudPopScale(bool* Ammo, bool* DragonHeart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ClientHudPopScale");

	ACharacter_Master_Player_C_ClientHudPopScale_Params params;
	params.Ammo = Ammo;
	params.DragonHeart = DragonHeart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.PopAmmo
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::PopAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.PopAmmo");

	ACharacter_Master_Player_C_PopAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFogWallEnter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnFogWallEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFogWallEnter");

	ACharacter_Master_Player_C_OnFogWallEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnFogWallExit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnFogWallExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnFogWallExit");

	ACharacter_Master_Player_C_OnFogWallExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ApplyForceFeedback
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForceFeedbackEffect**   FF_Type                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ApplyForceFeedback(class UForceFeedbackEffect** FF_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ApplyForceFeedback");

	ACharacter_Master_Player_C_ApplyForceFeedback_Params params;
	params.FF_Type = FF_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ReceiveTick");

	ACharacter_Master_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnPlayVapor
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnPlayVapor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnPlayVapor");

	ACharacter_Master_Player_C_OnPlayVapor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.Dodged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::Dodged(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.Dodged");

	ACharacter_Master_Player_C_Dodged_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnPerfectDodge
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnPerfectDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnPerfectDodge");

	ACharacter_Master_Player_C_OnPerfectDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.PerfectDodgeTimer
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::PerfectDodgeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.PerfectDodgeTimer");

	ACharacter_Master_Player_C_PerfectDodgeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnPerfectDodgeEnd
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnPerfectDodgeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnPerfectDodgeEnd");

	ACharacter_Master_Player_C_OnPerfectDodgeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.ExecuteUbergraph_Character_Master_Player
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Master_Player_C::ExecuteUbergraph_Character_Master_Player(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.ExecuteUbergraph_Character_Master_Player");

	ACharacter_Master_Player_C_ExecuteUbergraph_Character_Master_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Master_Player.Character_Master_Player_C.OnMutedPing__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACharacter_Master_Player_C::OnMutedPing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Master_Player.Character_Master_Player_C.OnMutedPing__DelegateSignature");

	ACharacter_Master_Player_C_OnMutedPing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
