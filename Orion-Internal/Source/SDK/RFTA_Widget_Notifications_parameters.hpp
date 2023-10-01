#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Notifications_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Notifications.Widget_Notifications_C.ClearNotificationQueue
struct UWidget_Notifications_C_ClearNotificationQueue_Params
{
	bool*                                              EndCurrentNotification;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.CanQueueInterruptCurrentNotification
struct UWidget_Notifications_C_CanQueueInterruptCurrentNotification_Params
{
	bool                                               Caninterrupt;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.IsSurvivalMode
struct UWidget_Notifications_C_IsSurvivalMode_Params
{
	bool                                               IsSurvival;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.ValidateNextInQueue
struct UWidget_Notifications_C_ValidateNextInQueue_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.InitEmote
struct UWidget_Notifications_C_InitEmote_Params
{
	class UClass**                                     Emote;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.QueueEmoteReward
struct UWidget_Notifications_C_QueueEmoteReward_Params
{
	class UClass**                                     Emote;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.GetItemLevelText
struct UWidget_Notifications_C_GetItemLevelText_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               LevelOverride;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Level;                                                    // (Parm, OutParm)
};

// Function Widget_Notifications.Widget_Notifications_C.ClearCurrentIndex
struct UWidget_Notifications_C_ClearCurrentIndex_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.Set New Item Icon & Text
struct UWidget_Notifications_C_Set_New_Item_Icon___Text_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.CleanBinding
struct UWidget_Notifications_C_CleanBinding_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.ChangeBackgroundColor
struct UWidget_Notifications_C_ChangeBackgroundColor_Params
{
	int*                                               StyleNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.UpdateInputIconSize
struct UWidget_Notifications_C_UpdateInputIconSize_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.IsActiveDialog
struct UWidget_Notifications_C_IsActiveDialog_Params
{
	class AUIActor**                                   Dialog;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.GetRelevantCharacter
struct UWidget_Notifications_C_GetRelevantCharacter_Params
{
	class ACharacterGunfire*                           Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.Set ItemText
struct UWidget_Notifications_C_Set_ItemText_Params
{
	class UClass**                                     Item_BP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEntry*                         Notification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.ShowTraitNotification
struct UWidget_Notifications_C_ShowTraitNotification_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.QueueItemReward
struct UWidget_Notifications_C_QueueItemReward_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              IsAutoUpgrade;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              IsAccountItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.QueueQuestRewardNotification
struct UWidget_Notifications_C_QueueQuestRewardNotification_Params
{
	struct FRemnantQuestReward*                        Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Notifications.Widget_Notifications_C.ShouldBlockNotifications
struct UWidget_Notifications_C_ShouldBlockNotifications_Params
{
	class AUIActor**                                   DialogBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.InitItemUpgraded
struct UWidget_Notifications_C_InitItemUpgraded_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.Reset
struct UWidget_Notifications_C_Reset_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.InitItemAdded
struct UWidget_Notifications_C_InitItemAdded_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEntry*                         Notification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.InitGeneric
struct UWidget_Notifications_C_InitGeneric_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.RemoveQueuedNotifications
struct UWidget_Notifications_C_RemoveQueuedNotifications_Params
{
	TEnumAsByte<ENotificationType>*                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.InitTraitUpgraded
struct UWidget_Notifications_C_InitTraitUpgraded_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.InitLevelUp
struct UWidget_Notifications_C_InitLevelUp_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.QueueNotification
struct UWidget_Notifications_C_QueueNotification_Params
{
	TEnumAsByte<ENotificationType>*                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Prompt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              AccountAward;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass**                                     Emote;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.InitTraitAdded
struct UWidget_Notifications_C_InitTraitAdded_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.OnLoaded_0F8A8021418434ADF713DEAEB3890386
struct UWidget_Notifications_C_OnLoaded_0F8A8021418434ADF713DEAEB3890386_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.Construct
struct UWidget_Notifications_C_Construct_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.OnTraitAdded
struct UWidget_Notifications_C_OnTraitAdded_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.OnTraitLevelChanged
struct UWidget_Notifications_C_OnTraitLevelChanged_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PreviousLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.CheckQueue
struct UWidget_Notifications_C_CheckQueue_Params
{
	bool*                                              ShouldRefreshNotification;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Notifications.Widget_Notifications_C.ShowNotification
struct UWidget_Notifications_C_ShowNotification_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.OnLevelUp
struct UWidget_Notifications_C_OnLevelUp_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.Tick
struct UWidget_Notifications_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.OnAnimationFinished_Event_1
struct UWidget_Notifications_C_OnAnimationFinished_Event_1_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.OnPickupItem
struct UWidget_Notifications_C_OnPickupItem_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemNotifyReason*                                 Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.OnNotifyQuestReward
struct UWidget_Notifications_C_OnNotifyQuestReward_Params
{
	struct FRemnantQuestReward*                        Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Notifications.Widget_Notifications_C.UpdatePawn
struct UWidget_Notifications_C_UpdatePawn_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.OnReceiveAccountAward
struct UWidget_Notifications_C_OnReceiveAccountAward_Params
{
	class ARemnantPlayerController**                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     Award;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.OnTraitPointAdded
struct UWidget_Notifications_C_OnTraitPointAdded_Params
{
	int*                                               CurrentTraitPoints;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.UnbindAnimationDelegate
struct UWidget_Notifications_C_UnbindAnimationDelegate_Params
{
};

// Function Widget_Notifications.Widget_Notifications_C.ExecuteUbergraph_Widget_Notifications
struct UWidget_Notifications_C_ExecuteUbergraph_Widget_Notifications_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Notifications.Widget_Notifications_C.Queue Empty__DelegateSignature
struct UWidget_Notifications_C_Queue_Empty__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
