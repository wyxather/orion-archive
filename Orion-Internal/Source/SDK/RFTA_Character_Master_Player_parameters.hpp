#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Master_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Master_Player.Character_Master_Player_C.GetPhase
struct ACharacter_Master_Player_C_GetPhase_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.CanDoCharacterRevive
struct ACharacter_Master_Player_C_CanDoCharacterRevive_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.CanDoItemInteraction
struct ACharacter_Master_Player_C_CanDoItemInteraction_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.CanDoStateInteraction
struct ACharacter_Master_Player_C_CanDoStateInteraction_Params
{
	class UStateMachineComponent**                     StateMachine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      StateName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.UnlockFlashCastorTrait
struct ACharacter_Master_Player_C_UnlockFlashCastorTrait_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.PlayVaporEffect
struct ACharacter_Master_Player_C_PlayVaporEffect_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.GetCurrentOrDeadController
struct ACharacter_Master_Player_C_GetCurrentOrDeadController_Params
{
	class AController*                                 Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.UnlinkSummon
struct ACharacter_Master_Player_C_UnlinkSummon_Params
{
	class AActor**                                     Summon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EEndPlayReason>*                       EndReason;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.LinkSummon
struct ACharacter_Master_Player_C_LinkSummon_Params
{
	class AActor**                                     Summon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.UpdateAccountCurrency
struct ACharacter_Master_Player_C_UpdateAccountCurrency_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ListenForAccountCurrencyChanges
struct ACharacter_Master_Player_C_ListenForAccountCurrencyChanges_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OverrideQuantity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.CanShowQuestInventory
struct ACharacter_Master_Player_C_CanShowQuestInventory_Params
{
	bool                                               CanShow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.Get Armor Skin Sets Acquired
struct ACharacter_Master_Player_C_Get_Armor_Skin_Sets_Acquired_Params
{
	int                                                Armor_Skin_Sets_Acquired;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ActivateHandGun
struct ACharacter_Master_Player_C_ActivateHandGun_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Gold
struct ACharacter_Master_Player_C_DLC___Award_Gold_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Xbox
struct ACharacter_Master_Player_C_DLC___Award_Xbox_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnPostPingMenuLockEnded
struct ACharacter_Master_Player_C_OnPostPingMenuLockEnded_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnPingMenuEnded
struct ACharacter_Master_Player_C_OnPingMenuEnded_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.CanHighFive
struct ACharacter_Master_Player_C_CanHighFive_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.ActivateLongGun
struct ACharacter_Master_Player_C_ActivateLongGun_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.CanPing
struct ACharacter_Master_Player_C_CanPing_Params
{
	bool                                               CanPing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.CanShowPingMenu
struct ACharacter_Master_Player_C_CanShowPingMenu_Params
{
	bool                                               Can_Show;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Steam
struct ACharacter_Master_Player_C_DLC___Award_Steam_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Get Highest Boss Weapon Level
struct ACharacter_Master_Player_C_Get_Highest_Boss_Weapon_Level_Params
{
	int                                                Highest_Boss_Weapon_Level;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.DLC Logging
struct ACharacter_Master_Player_C_DLC_Logging_Params
{
	class FString*                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.GetTPSHud
struct ACharacter_Master_Player_C_GetTPSHud_Params
{
	class ATPSHud_C*                                   TPSHud;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.UpdateBendableFoilage
struct ACharacter_Master_Player_C_UpdateBendableFoilage_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.RemoveActionsOnReset
struct ACharacter_Master_Player_C_RemoveActionsOnReset_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.IsHoldingInteractButton
struct ACharacter_Master_Player_C_IsHoldingInteractButton_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.HasUnspentTraitPoints
struct ACharacter_Master_Player_C_HasUnspentTraitPoints_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Survivor
struct ACharacter_Master_Player_C_DLC___Award_Survivor_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Nightstalker
struct ACharacter_Master_Player_C_DLC___Award_Nightstalker_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Gladiator
struct ACharacter_Master_Player_C_DLC___Award_Gladiator_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Doomsayer
struct ACharacter_Master_Player_C_DLC___Award_Doomsayer_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Remove DLC Items Player Should Not Have
struct ACharacter_Master_Player_C_DLC___Remove_DLC_Items_Player_Should_Not_Have_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DLC - Award Twitch
struct ACharacter_Master_Player_C_DLC___Award_Twitch_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Get Total Weapon Mods
struct ACharacter_Master_Player_C_Get_Total_Weapon_Mods_Params
{
	class UClass**                                     AddedModBP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Total_Weapon_Mods;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Get Armor Sets Acquired
struct ACharacter_Master_Player_C_Get_Armor_Sets_Acquired_Params
{
	int                                                Armor_Sets_Acquired;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Get Highest Weapon Level
struct ACharacter_Master_Player_C_Get_Highest_Weapon_Level_Params
{
	int                                                Highest_Weapon_Level;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.GetPlayerController
struct ACharacter_Master_Player_C_GetPlayerController_Params
{
	class APlayerController*                           Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Get Highest Trait Level
struct ACharacter_Master_Player_C_Get_Highest_Trait_Level_Params
{
	int                                                Highest_Trait_Level;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.HasSpentTraitPoint
struct ACharacter_Master_Player_C_HasSpentTraitPoint_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.IncrementWeaponKill
struct ACharacter_Master_Player_C_IncrementWeaponKill_Params
{
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.CheckNumKills
struct ACharacter_Master_Player_C_CheckNumKills_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.CheckNumWeapons
struct ACharacter_Master_Player_C_CheckNumWeapons_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.TryUnlockTraits
struct ACharacter_Master_Player_C_TryUnlockTraits_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.AllowWeaponSwap
struct ACharacter_Master_Player_C_AllowWeaponSwap_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.ReplenishResourcesShard
struct ACharacter_Master_Player_C_ReplenishResourcesShard_Params
{
	bool*                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              DragonHearts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.IsDemo
struct ACharacter_Master_Player_C_IsDemo_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.HasUnusedWeaponMods
struct ACharacter_Master_Player_C_HasUnusedWeaponMods_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.InTown
struct ACharacter_Master_Player_C_InTown_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.IncrementNumCheckpointsUsed
struct ACharacter_Master_Player_C_IncrementNumCheckpointsUsed_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.CanCraftWeaponMod
struct ACharacter_Master_Player_C_CanCraftWeaponMod_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.CanUpgrade
struct ACharacter_Master_Player_C_CanUpgrade_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.ClearMiniMap
struct ACharacter_Master_Player_C_ClearMiniMap_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Set DragonHeart Quantity
struct ACharacter_Master_Player_C_Set_DragonHeart_Quantity_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.EndUseCheckpoint
struct ACharacter_Master_Player_C_EndUseCheckpoint_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.UpdateDisplayLevel
struct ACharacter_Master_Player_C_UpdateDisplayLevel_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.LockMiniMap
struct ACharacter_Master_Player_C_LockMiniMap_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.GiveMaterials
struct ACharacter_Master_Player_C_GiveMaterials_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Lock Position
struct ACharacter_Master_Player_C_Lock_Position_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.IsTraveling
struct ACharacter_Master_Player_C_IsTraveling_Params
{
	bool                                               Traveling;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.Get Hud Widget
struct ACharacter_Master_Player_C_Get_Hud_Widget_Params
{
	class UWidget_HUD_C*                               HudWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Reset Minimap
struct ACharacter_Master_Player_C_Reset_Minimap_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ReplenishResources
struct ACharacter_Master_Player_C_ReplenishResources_Params
{
	bool*                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              DragonHearts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              ModPower;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.FilterIncomingDamage
struct ACharacter_Master_Player_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.AllowAction
struct ACharacter_Master_Player_C_AllowAction_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_B965762A445B982708DF2D8FEEDBC3E2
struct ACharacter_Master_Player_C_OnFailure_B965762A445B982708DF2D8FEEDBC3E2_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_B965762A445B982708DF2D8FEEDBC3E2
struct ACharacter_Master_Player_C_OnSuccess_B965762A445B982708DF2D8FEEDBC3E2_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B
struct ACharacter_Master_Player_C_OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B
struct ACharacter_Master_Player_C_OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_744C71424FAEFE20C17A84A02737DAD7
struct ACharacter_Master_Player_C_OnFailure_744C71424FAEFE20C17A84A02737DAD7_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_744C71424FAEFE20C17A84A02737DAD7
struct ACharacter_Master_Player_C_OnSuccess_744C71424FAEFE20C17A84A02737DAD7_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_5B892AD148B8A7E4AE0373B595B54D75
struct ACharacter_Master_Player_C_OnFailure_5B892AD148B8A7E4AE0373B595B54D75_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5B892AD148B8A7E4AE0373B595B54D75
struct ACharacter_Master_Player_C_OnSuccess_5B892AD148B8A7E4AE0373B595B54D75_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9
struct ACharacter_Master_Player_C_OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9
struct ACharacter_Master_Player_C_OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_5E04062640ABD461EA31B792B4659C7F
struct ACharacter_Master_Player_C_OnFailure_5E04062640ABD461EA31B792B4659C7F_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5E04062640ABD461EA31B792B4659C7F
struct ACharacter_Master_Player_C_OnSuccess_5E04062640ABD461EA31B792B4659C7F_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_14840F50467879E63F4FC8BBF4158F11
struct ACharacter_Master_Player_C_OnFailure_14840F50467879E63F4FC8BBF4158F11_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_14840F50467879E63F4FC8BBF4158F11
struct ACharacter_Master_Player_C_OnSuccess_14840F50467879E63F4FC8BBF4158F11_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_B3F0A23548B1471DE982029336B3238A
struct ACharacter_Master_Player_C_OnFailure_B3F0A23548B1471DE982029336B3238A_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_B3F0A23548B1471DE982029336B3238A
struct ACharacter_Master_Player_C_OnSuccess_B3F0A23548B1471DE982029336B3238A_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6
struct ACharacter_Master_Player_C_OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6
struct ACharacter_Master_Player_C_OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C
struct ACharacter_Master_Player_C_OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C
struct ACharacter_Master_Player_C_OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_64629C8140FC7F24E521E99EAAF74C4B
struct ACharacter_Master_Player_C_OnFailure_64629C8140FC7F24E521E99EAAF74C4B_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_64629C8140FC7F24E521E99EAAF74C4B
struct ACharacter_Master_Player_C_OnSuccess_64629C8140FC7F24E521E99EAAF74C4B_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_D212BFC048A1255C560CBBBD13D96EDA
struct ACharacter_Master_Player_C_OnFailure_D212BFC048A1255C560CBBBD13D96EDA_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_D212BFC048A1255C560CBBBD13D96EDA
struct ACharacter_Master_Player_C_OnSuccess_D212BFC048A1255C560CBBBD13D96EDA_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_06C191CA4361D74F447A59BC1DF8DE1A
struct ACharacter_Master_Player_C_OnFailure_06C191CA4361D74F447A59BC1DF8DE1A_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A
struct ACharacter_Master_Player_C_OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_E43E11DF45EA2007993D4E92724C4FC2
struct ACharacter_Master_Player_C_OnFailure_E43E11DF45EA2007993D4E92724C4FC2_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_E43E11DF45EA2007993D4E92724C4FC2
struct ACharacter_Master_Player_C_OnSuccess_E43E11DF45EA2007993D4E92724C4FC2_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_39ADB5624FB857C60172D5B95C6ECEAC
struct ACharacter_Master_Player_C_OnFailure_39ADB5624FB857C60172D5B95C6ECEAC_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC
struct ACharacter_Master_Player_C_OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8
struct ACharacter_Master_Player_C_OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8
struct ACharacter_Master_Player_C_OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_D6DB88DF4493C5760967508B47A06AB3
struct ACharacter_Master_Player_C_OnFailure_D6DB88DF4493C5760967508B47A06AB3_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_D6DB88DF4493C5760967508B47A06AB3
struct ACharacter_Master_Player_C_OnSuccess_D6DB88DF4493C5760967508B47A06AB3_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_8F2349F443528EB971D9D28ABCA8F70F
struct ACharacter_Master_Player_C_OnFailure_8F2349F443528EB971D9D28ABCA8F70F_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_8F2349F443528EB971D9D28ABCA8F70F
struct ACharacter_Master_Player_C_OnSuccess_8F2349F443528EB971D9D28ABCA8F70F_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_C37F6928477ED7394B76848A247D809F
struct ACharacter_Master_Player_C_OnFailure_C37F6928477ED7394B76848A247D809F_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_C37F6928477ED7394B76848A247D809F
struct ACharacter_Master_Player_C_OnSuccess_C37F6928477ED7394B76848A247D809F_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_EF5700BD42FEE53DF81784AB624E114B
struct ACharacter_Master_Player_C_OnFailure_EF5700BD42FEE53DF81784AB624E114B_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_EF5700BD42FEE53DF81784AB624E114B
struct ACharacter_Master_Player_C_OnSuccess_EF5700BD42FEE53DF81784AB624E114B_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_A7C6D7124B54BD212A425F8222BB92EB
struct ACharacter_Master_Player_C_OnFailure_A7C6D7124B54BD212A425F8222BB92EB_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_A7C6D7124B54BD212A425F8222BB92EB
struct ACharacter_Master_Player_C_OnSuccess_A7C6D7124B54BD212A425F8222BB92EB_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFailure_A6F3616442127DE33894FBAEE666DDD8
struct ACharacter_Master_Player_C_OnFailure_A6F3616442127DE33894FBAEE666DDD8_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSuccess_A6F3616442127DE33894FBAEE666DDD8
struct ACharacter_Master_Player_C_OnSuccess_A6F3616442127DE33894FBAEE666DDD8_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15
struct ACharacter_Master_Player_C_InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect1_K2Node_InputActionEvent_14
struct ACharacter_Master_Player_C_InpActEvt_QuickSelect1_K2Node_InputActionEvent_14_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect2_K2Node_InputActionEvent_13
struct ACharacter_Master_Player_C_InpActEvt_QuickSelect2_K2Node_InputActionEvent_13_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect3_K2Node_InputActionEvent_12
struct ACharacter_Master_Player_C_InpActEvt_QuickSelect3_K2Node_InputActionEvent_12_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_QuickSelect4_K2Node_InputActionEvent_11
struct ACharacter_Master_Player_C_InpActEvt_QuickSelect4_K2Node_InputActionEvent_11_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_Ping_K2Node_InputActionEvent_10
struct ACharacter_Master_Player_C_InpActEvt_Ping_K2Node_InputActionEvent_10_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_Ping_K2Node_InputActionEvent_9
struct ACharacter_Master_Player_C_InpActEvt_Ping_K2Node_InputActionEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_GodMode_K2Node_InputActionEvent_8
struct ACharacter_Master_Player_C_InpActEvt_GodMode_K2Node_InputActionEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7
struct ACharacter_Master_Player_C_InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6
struct ACharacter_Master_Player_C_InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5
struct ACharacter_Master_Player_C_InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_ResourceHack_K2Node_InputActionEvent_4
struct ACharacter_Master_Player_C_InpActEvt_ResourceHack_K2Node_InputActionEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3
struct ACharacter_Master_Player_C_InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_SkipIntro_K2Node_InputActionEvent_2
struct ACharacter_Master_Player_C_InpActEvt_SkipIntro_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnLoaded_E0E805FD4AD71513D4F4B691FA157880
struct ACharacter_Master_Player_C_OnLoaded_E0E805FD4AD71513D4F4B691FA157880_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1
struct ACharacter_Master_Player_C_InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.StartHighFive
struct ACharacter_Master_Player_C_StartHighFive_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.StopHighFive
struct ACharacter_Master_Player_C_StopHighFive_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnHighFiveSuccess
struct ACharacter_Master_Player_C_OnHighFiveSuccess_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ClientGiveWaveEmote
struct ACharacter_Master_Player_C_ClientGiveWaveEmote_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.EnterBarrier
struct ACharacter_Master_Player_C_EnterBarrier_Params
{
	class ABP_EventRegionBarrier_C**                   Barrier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ExitBarrier
struct ACharacter_Master_Player_C_ExitBarrier_Params
{
	class ABP_EventRegionBarrier_C**                   Barrier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.PlayBarrierFX
struct ACharacter_Master_Player_C_PlayBarrierFX_Params
{
	class ABP_EventRegionBarrier_C**                   Barrier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.MulticastPlayBarrierFX
struct ACharacter_Master_Player_C_MulticastPlayBarrierFX_Params
{
	class ABP_EventRegionBarrier_C**                   Barrier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ServerPlayBarrierFX
struct ACharacter_Master_Player_C_ServerPlayBarrierFX_Params
{
	class ABP_EventRegionBarrier_C**                   Barrier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnEnterBarrier
struct ACharacter_Master_Player_C_OnEnterBarrier_Params
{
	class ABP_DreamerEventRegionBarrier_C**            Barrier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnExitBarrier
struct ACharacter_Master_Player_C_OnExitBarrier_Params
{
	class ABP_DreamerEventRegionBarrier_C**            Barrier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Validate DLC
struct ACharacter_Master_Player_C_Validate_DLC_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.SurvivorBagUsed
struct ACharacter_Master_Player_C_SurvivorBagUsed_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnLocallyControlled
struct ACharacter_Master_Player_C_OnLocallyControlled_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Add DLC Item
struct ACharacter_Master_Player_C_Add_DLC_Item_Params
{
	TSoftObjectPtr<class UClass>*                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Server Remove DLC Item
struct ACharacter_Master_Player_C_Server_Remove_DLC_Item_Params
{
	TSoftObjectPtr<class UClass>*                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Give DLC
struct ACharacter_Master_Player_C_Give_DLC_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Server_InitializeAccountCurrency
struct ACharacter_Master_Player_C_Server_InitializeAccountCurrency_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.SetPhase
struct ACharacter_Master_Player_C_SetPhase_Params
{
	int*                                               NewPhase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.CheckAccountCurrency
struct ACharacter_Master_Player_C_CheckAccountCurrency_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.IPetADog
struct ACharacter_Master_Player_C_IPetADog_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Items
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Items_Params
{
	class UClass**                                     Item_BP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemNotifyReason*                                 Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Loot
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Loot_Params
{
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Weapon Mods
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Weapon_Mods_Params
{
	class UClass**                                     NewModBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Armor Sets
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Armor_Sets_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Trait Added
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Trait_Added_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Trait Level
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Trait_Level_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Upgrade Item
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Upgrade_Item_Params
{
	class UClass**                                     Item_BP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Crafted Item
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Crafted_Item_Params
{
	class UClass**                                     Item_BP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Check Dragon Heart Count
struct ACharacter_Master_Player_C_Check_Dragon_Heart_Count_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Update Achievement Progress - Armor Skin Sets
struct ACharacter_Master_Player_C_Update_Achievement_Progress___Armor_Skin_Sets_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnCheckHarsgaardRecorders
struct ACharacter_Master_Player_C_OnCheckHarsgaardRecorders_Params
{
	TSoftObjectPtr<class UObject>*                     NewItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnChromaDamage
struct ACharacter_Master_Player_C_OnChromaDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemNotifyReason*                                 Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.TryUnlockWeaponTraits
struct ACharacter_Master_Player_C_TryUnlockWeaponTraits_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature_Params
{
	struct FDamageInfo*                                Damage;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature_Params
{
	bool*                                              bSelfRevive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.ListenForClientHits
struct ACharacter_Master_Player_C_ListenForClientHits_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnClientHitTarget
struct ACharacter_Master_Player_C_OnClientHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemNotifyReason*                                 Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PreviousLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnSummonKilledTarget
struct ACharacter_Master_Player_C_OnSummonKilledTarget_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ListenForClientDamageTaken
struct ACharacter_Master_Player_C_ListenForClientDamageTaken_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnTakeDamage
struct ACharacter_Master_Player_C_OnTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_Master_Player.Character_Master_Player_C.ListenForClientStateChange
struct ACharacter_Master_Player_C_ListenForClientStateChange_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnClientStateChange
struct ACharacter_Master_Player_C_OnClientStateChange_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.RegisterStatusEffectApplied
struct ACharacter_Master_Player_C_RegisterStatusEffectApplied_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.RegisterStatusEffectConsumableCleansed
struct ACharacter_Master_Player_C_RegisterStatusEffectConsumableCleansed_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnReviveFXStart
struct ACharacter_Master_Player_C_OnReviveFXStart_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnReviveFXStop
struct ACharacter_Master_Player_C_OnReviveFXStop_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnPingHeld
struct ACharacter_Master_Player_C_OnPingHeld_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ManualWeaponToggle
struct ACharacter_Master_Player_C_ManualWeaponToggle_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DelaySetVisible
struct ACharacter_Master_Player_C_DelaySetVisible_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteNo
struct ACharacter_Master_Player_C_OnEmoteNo_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteYes
struct ACharacter_Master_Player_C_OnEmoteYes_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteWave
struct ACharacter_Master_Player_C_OnEmoteWave_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteCheer
struct ACharacter_Master_Player_C_OnEmoteCheer_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteBeckon
struct ACharacter_Master_Player_C_OnEmoteBeckon_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteFail
struct ACharacter_Master_Player_C_OnEmoteFail_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteExhausted
struct ACharacter_Master_Player_C_OnEmoteExhausted_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnEmoteLaugh
struct ACharacter_Master_Player_C_OnEmoteLaugh_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnActivate
struct ACharacter_Master_Player_C_OnActivate_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnUsed
struct ACharacter_Master_Player_C_OnUsed_Params
{
	class AEquipment**                                 Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.Give Liquid Escape
struct ACharacter_Master_Player_C_Give_Liquid_Escape_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnClientAddAccountCurrency
struct ACharacter_Master_Player_C_OnClientAddAccountCurrency_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.UseCheckpoint
struct ACharacter_Master_Player_C_UseCheckpoint_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.CheckpointBegin
struct ACharacter_Master_Player_C_CheckpointBegin_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.CheckpointEnd
struct ACharacter_Master_Player_C_CheckpointEnd_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.EventOnDialogResult
struct ACharacter_Master_Player_C_EventOnDialogResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnFortifyFailed
struct ACharacter_Master_Player_C_OnFortifyFailed_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnSpawnedAtCheckpoint
struct ACharacter_Master_Player_C_OnSpawnedAtCheckpoint_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ClientSpawnedAtCheckpoint
struct ACharacter_Master_Player_C_ClientSpawnedAtCheckpoint_Params
{
	class AInteractive_Checkpoint_C**                  Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.DeferredCheckpointBegin
struct ACharacter_Master_Player_C_DeferredCheckpointBegin_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.TryBeginCheckpoint
struct ACharacter_Master_Player_C_TryBeginCheckpoint_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ServerFinishLoad
struct ACharacter_Master_Player_C_ServerFinishLoad_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ShowCheckpointMenu
struct ACharacter_Master_Player_C_ShowCheckpointMenu_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.GodMode
struct ACharacter_Master_Player_C_GodMode_Params
{
	bool*                                              NewGodMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.SetUntargetable
struct ACharacter_Master_Player_C_SetUntargetable_Params
{
	bool*                                              NewUntargetable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.DebugDamageSelf
struct ACharacter_Master_Player_C_DebugDamageSelf_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PowerOverride;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.DebugResourceHack
struct ACharacter_Master_Player_C_DebugResourceHack_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.DebugGiveMaterials
struct ACharacter_Master_Player_C_DebugGiveMaterials_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ServerUnequipMod
struct ACharacter_Master_Player_C_ServerUnequipMod_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ServerEquipMod
struct ACharacter_Master_Player_C_ServerEquipMod_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ModItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.AddCheckpointNotification
struct ACharacter_Master_Player_C_AddCheckpointNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TimeOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.RemoveCheckpointNotification
struct ACharacter_Master_Player_C_RemoveCheckpointNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ClearAllCheckpointNotifications
struct ACharacter_Master_Player_C_ClearAllCheckpointNotifications_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ServerZoneDoorFailedNotify
struct ACharacter_Master_Player_C_ServerZoneDoorFailedNotify_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.MulticastZoneDoorFailedNotify
struct ACharacter_Master_Player_C_MulticastZoneDoorFailedNotify_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.LocalZoneDoorFailedNotify
struct ACharacter_Master_Player_C_LocalZoneDoorFailedNotify_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ClientToServerApplyDamage
struct ACharacter_Master_Player_C_ClientToServerApplyDamage_Params
{
	class AActor**                                     CauseActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DamageScalar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PowerOverride;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ApplyDamage_ClientAuthoritative
struct ACharacter_Master_Player_C_ApplyDamage_ClientAuthoritative_Params
{
	class AActor**                                     CauseActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DamageScalar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PowerOverride;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.MarkHarsgaardRootGunObtained
struct ACharacter_Master_Player_C_MarkHarsgaardRootGunObtained_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ReceiveBeginPlay
struct ACharacter_Master_Player_C_ReceiveBeginPlay_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnDead_Event_1
struct ACharacter_Master_Player_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnCameraOrientLeft
struct ACharacter_Master_Player_C_OnCameraOrientLeft_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnCameraOrientRight
struct ACharacter_Master_Player_C_OnCameraOrientRight_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnWallEnter
struct ACharacter_Master_Player_C_OnWallEnter_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnWallExit
struct ACharacter_Master_Player_C_OnWallExit_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnRespawnAfterDeath
struct ACharacter_Master_Player_C_OnRespawnAfterDeath_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnNotifyTakeDamage_Event_1
struct ACharacter_Master_Player_C_OnNotifyTakeDamage_Event_1_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnTeleportOut
struct ACharacter_Master_Player_C_OnTeleportOut_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnTeleportIn
struct ACharacter_Master_Player_C_OnTeleportIn_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ReceiveEndPlay
struct ACharacter_Master_Player_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PreviousLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnCrouchFoleyEnter
struct ACharacter_Master_Player_C_OnCrouchFoleyEnter_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnCrouchFoleyExit
struct ACharacter_Master_Player_C_OnCrouchFoleyExit_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnAimFoleyEnter
struct ACharacter_Master_Player_C_OnAimFoleyEnter_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnAimFoleyExit
struct ACharacter_Master_Player_C_OnAimFoleyExit_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature
struct ACharacter_Master_Player_C_BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnReplenishResources
struct ACharacter_Master_Player_C_OnReplenishResources_Params
{
	bool*                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              DragonHearts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              ModPower;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.OnReplenishResourcesShard
struct ACharacter_Master_Player_C_OnReplenishResourcesShard_Params
{
	bool*                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              DragonHearts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.OnUpgradeItem_Event_1
struct ACharacter_Master_Player_C_OnUpgradeItem_Event_1_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ClientHudPopScale
struct ACharacter_Master_Player_C_ClientHudPopScale_Params
{
	bool*                                              Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              DragonHeart;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Master_Player.Character_Master_Player_C.PopAmmo
struct ACharacter_Master_Player_C_PopAmmo_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnFogWallEnter
struct ACharacter_Master_Player_C_OnFogWallEnter_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnFogWallExit
struct ACharacter_Master_Player_C_OnFogWallExit_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ApplyForceFeedback
struct ACharacter_Master_Player_C_ApplyForceFeedback_Params
{
	class UForceFeedbackEffect**                       FF_Type;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.ReceiveTick
struct ACharacter_Master_Player_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnPlayVapor
struct ACharacter_Master_Player_C_OnPlayVapor_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.Dodged
struct ACharacter_Master_Player_C_Dodged_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnPerfectDodge
struct ACharacter_Master_Player_C_OnPerfectDodge_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.PerfectDodgeTimer
struct ACharacter_Master_Player_C_PerfectDodgeTimer_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.OnPerfectDodgeEnd
struct ACharacter_Master_Player_C_OnPerfectDodgeEnd_Params
{
};

// Function Character_Master_Player.Character_Master_Player_C.ExecuteUbergraph_Character_Master_Player
struct ACharacter_Master_Player_C_ExecuteUbergraph_Character_Master_Player_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Master_Player.Character_Master_Player_C.OnMutedPing__DelegateSignature
struct ACharacter_Master_Player_C_OnMutedPing__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
