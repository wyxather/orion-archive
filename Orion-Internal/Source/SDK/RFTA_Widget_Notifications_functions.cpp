// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Notifications_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Notifications.Widget_Notifications_C.ClearNotificationQueue
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EndCurrentNotification         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::ClearNotificationQueue(bool* EndCurrentNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ClearNotificationQueue");

	UWidget_Notifications_C_ClearNotificationQueue_Params params;
	params.EndCurrentNotification = EndCurrentNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.CanQueueInterruptCurrentNotification
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Caninterrupt                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::CanQueueInterruptCurrentNotification(bool* Caninterrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.CanQueueInterruptCurrentNotification");

	UWidget_Notifications_C_CanQueueInterruptCurrentNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Caninterrupt != nullptr)
		*Caninterrupt = params.Caninterrupt;
}


// Function Widget_Notifications.Widget_Notifications_C.IsSurvivalMode
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSurvival                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::IsSurvivalMode(bool* IsSurvival)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.IsSurvivalMode");

	UWidget_Notifications_C_IsSurvivalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSurvival != nullptr)
		*IsSurvival = params.IsSurvival;
}


// Function Widget_Notifications.Widget_Notifications_C.ValidateNextInQueue
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::ValidateNextInQueue(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ValidateNextInQueue");

	UWidget_Notifications_C_ValidateNextInQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Notifications.Widget_Notifications_C.InitEmote
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::InitEmote(class UClass** Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.InitEmote");

	UWidget_Notifications_C_InitEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.QueueEmoteReward
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::QueueEmoteReward(class UClass** Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.QueueEmoteReward");

	UWidget_Notifications_C_QueueEmoteReward_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.GetItemLevelText
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           LevelOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Level                          (Parm, OutParm)

void UWidget_Notifications_C::GetItemLevelText(class UClass** ItemBP, int* LevelOverride, struct FText* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.GetItemLevelText");

	UWidget_Notifications_C_GetItemLevelText_Params params;
	params.ItemBP = ItemBP;
	params.LevelOverride = LevelOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function Widget_Notifications.Widget_Notifications_C.ClearCurrentIndex
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::ClearCurrentIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ClearCurrentIndex");

	UWidget_Notifications_C_ClearCurrentIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.Set New Item Icon & Text
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::Set_New_Item_Icon___Text(class UClass** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.Set New Item Icon & Text");

	UWidget_Notifications_C_Set_New_Item_Icon___Text_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.CleanBinding
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::CleanBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.CleanBinding");

	UWidget_Notifications_C_CleanBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.ChangeBackgroundColor
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StyleNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::ChangeBackgroundColor(int* StyleNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ChangeBackgroundColor");

	UWidget_Notifications_C_ChangeBackgroundColor_Params params;
	params.StyleNumber = StyleNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.UpdateInputIconSize
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::UpdateInputIconSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.UpdateInputIconSize");

	UWidget_Notifications_C_UpdateInputIconSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.IsActiveDialog
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AUIActor**               Dialog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::IsActiveDialog(class AUIActor** Dialog, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.IsActiveDialog");

	UWidget_Notifications_C_IsActiveDialog_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Widget_Notifications.Widget_Notifications_C.GetRelevantCharacter
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire*       Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::GetRelevantCharacter(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.GetRelevantCharacter");

	UWidget_Notifications_C_GetRelevantCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function Widget_Notifications.Widget_Notifications_C.Set ItemText
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item_BP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEntry*     Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWidget_Notifications_C::Set_ItemText(class UClass** Item_BP, struct FNotificationEntry* Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.Set ItemText");

	UWidget_Notifications_C_Set_ItemText_Params params;
	params.Item_BP = Item_BP;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.ShowTraitNotification
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::ShowTraitNotification(class UClass** Trait, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ShowTraitNotification");

	UWidget_Notifications_C_ShowTraitNotification_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Notifications.Widget_Notifications_C.QueueItemReward
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          IsAutoUpgrade                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          IsAccountItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::QueueItemReward(class UClass** ItemBP, int* Level, bool* IsAutoUpgrade, bool* IsAccountItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.QueueItemReward");

	UWidget_Notifications_C_QueueItemReward_Params params;
	params.ItemBP = ItemBP;
	params.Level = Level;
	params.IsAutoUpgrade = IsAutoUpgrade;
	params.IsAccountItem = IsAccountItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.QueueQuestRewardNotification
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestReward*    Reward                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Notifications_C::QueueQuestRewardNotification(struct FRemnantQuestReward* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.QueueQuestRewardNotification");

	UWidget_Notifications_C_QueueQuestRewardNotification_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.ShouldBlockNotifications
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AUIActor**               DialogBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::ShouldBlockNotifications(class AUIActor** DialogBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ShouldBlockNotifications");

	UWidget_Notifications_C_ShouldBlockNotifications_Params params;
	params.DialogBP = DialogBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Notifications.Widget_Notifications_C.InitItemUpgraded
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::InitItemUpgraded(class UClass** ItemBP, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.InitItemUpgraded");

	UWidget_Notifications_C_InitItemUpgraded_Params params;
	params.ItemBP = ItemBP;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.Reset
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.Reset");

	UWidget_Notifications_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.InitItemAdded
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEntry*     Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWidget_Notifications_C::InitItemAdded(class UClass** ItemBP, struct FNotificationEntry* Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.InitItemAdded");

	UWidget_Notifications_C_InitItemAdded_Params params;
	params.ItemBP = ItemBP;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.InitGeneric
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::InitGeneric()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.InitGeneric");

	UWidget_Notifications_C_InitGeneric_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.RemoveQueuedNotifications
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENotificationType>* Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::RemoveQueuedNotifications(TEnumAsByte<ENotificationType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.RemoveQueuedNotifications");

	UWidget_Notifications_C_RemoveQueuedNotifications_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.InitTraitUpgraded
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::InitTraitUpgraded(class UClass** Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.InitTraitUpgraded");

	UWidget_Notifications_C_InitTraitUpgraded_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.InitLevelUp
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::InitLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.InitLevelUp");

	UWidget_Notifications_C_InitLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.QueueNotification
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENotificationType>* Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Prompt                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          AccountAward                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass**                 Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::QueueNotification(TEnumAsByte<ENotificationType>* Type, class UClass** Trait, struct FText* Text, struct FText* Prompt, class UClass** ItemBP, int* Value, bool* AccountAward, class UClass** Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.QueueNotification");

	UWidget_Notifications_C_QueueNotification_Params params;
	params.Type = Type;
	params.Trait = Trait;
	params.Text = Text;
	params.Prompt = Prompt;
	params.ItemBP = ItemBP;
	params.Value = Value;
	params.AccountAward = AccountAward;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.InitTraitAdded
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::InitTraitAdded(class UClass** Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.InitTraitAdded");

	UWidget_Notifications_C_InitTraitAdded_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnLoaded_0F8A8021418434ADF713DEAEB3890386
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::OnLoaded_0F8A8021418434ADF713DEAEB3890386(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnLoaded_0F8A8021418434ADF713DEAEB3890386");

	UWidget_Notifications_C_OnLoaded_0F8A8021418434ADF713DEAEB3890386_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Notifications_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.Construct");

	UWidget_Notifications_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnTraitAdded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::OnTraitAdded(class UClass** Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnTraitAdded");

	UWidget_Notifications_C_OnTraitAdded_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnTraitLevelChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           PreviousLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::OnTraitLevelChanged(class UClass** Trait, int* PreviousLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnTraitLevelChanged");

	UWidget_Notifications_C_OnTraitLevelChanged_Params params;
	params.Trait = Trait;
	params.PreviousLevel = PreviousLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.CheckQueue
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldRefreshNotification      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Notifications_C::CheckQueue(bool* ShouldRefreshNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.CheckQueue");

	UWidget_Notifications_C_CheckQueue_Params params;
	params.ShouldRefreshNotification = ShouldRefreshNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.ShowNotification
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::ShowNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ShowNotification");

	UWidget_Notifications_C_ShowNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnLevelUp
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::OnLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnLevelUp");

	UWidget_Notifications_C_OnLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.Tick");

	UWidget_Notifications_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnAnimationFinished_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnAnimationFinished_Event_1");

	UWidget_Notifications_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnPickupItem
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemNotifyReason*             Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::OnPickupItem(class UClass** ItemBP, int* Quantity, int* Level, EItemNotifyReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnPickupItem");

	UWidget_Notifications_C_OnPickupItem_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;
	params.Level = Level;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnNotifyQuestReward
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestReward*    Reward                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Notifications_C::OnNotifyQuestReward(struct FRemnantQuestReward* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnNotifyQuestReward");

	UWidget_Notifications_C_OnNotifyQuestReward_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.UpdatePawn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::UpdatePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.UpdatePawn");

	UWidget_Notifications_C_UpdatePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnReceiveAccountAward
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantPlayerController** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 Award                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::OnReceiveAccountAward(class ARemnantPlayerController** Player, class UClass** Award)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnReceiveAccountAward");

	UWidget_Notifications_C_OnReceiveAccountAward_Params params;
	params.Player = Player;
	params.Award = Award;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.OnTraitPointAdded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentTraitPoints             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::OnTraitPointAdded(int* CurrentTraitPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.OnTraitPointAdded");

	UWidget_Notifications_C_OnTraitPointAdded_Params params;
	params.CurrentTraitPoints = CurrentTraitPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.UnbindAnimationDelegate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::UnbindAnimationDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.UnbindAnimationDelegate");

	UWidget_Notifications_C_UnbindAnimationDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.ExecuteUbergraph_Widget_Notifications
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Notifications_C::ExecuteUbergraph_Widget_Notifications(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.ExecuteUbergraph_Widget_Notifications");

	UWidget_Notifications_C_ExecuteUbergraph_Widget_Notifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Notifications.Widget_Notifications_C.Queue Empty__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Notifications_C::Queue_Empty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Notifications.Widget_Notifications_C.Queue Empty__DelegateSignature");

	UWidget_Notifications_C_Queue_Empty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
