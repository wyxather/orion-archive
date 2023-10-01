#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_HUD.Widget_HUD_C.GetSurvivalTimer
struct UWidget_HUD_C_GetSurvivalTimer_Params
{
	class UWidget_Hud_Survival_C*                      SurvivalWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.HideMutedPing
struct UWidget_HUD_C_HideMutedPing_Params
{
};

// Function Widget_HUD.Widget_HUD_C.ShowMutedPing
struct UWidget_HUD_C_ShowMutedPing_Params
{
};

// Function Widget_HUD.Widget_HUD_C.IsInIntroQuest
struct UWidget_HUD_C_IsInIntroQuest_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD.Widget_HUD_C.UpdateDifficultyIcon
struct UWidget_HUD_C_UpdateDifficultyIcon_Params
{
};

// Function Widget_HUD.Widget_HUD_C.Refresh Health Bar
struct UWidget_HUD_C_Refresh_Health_Bar_Params
{
};

// Function Widget_HUD.Widget_HUD_C.OnDamageTaken
struct UWidget_HUD_C_OnDamageTaken_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Widget_HUD.Widget_HUD_C.OnCinematicStopping
struct UWidget_HUD_C_OnCinematicStopping_Params
{
	struct FSequencerPlayerSettings*                   SequenceSettings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ULevelSequence**                             LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnCinematicPlaying
struct UWidget_HUD_C_OnCinematicPlaying_Params
{
	struct FSequencerPlayerSettings*                   SequenceSettings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ULevelSequence**                             LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.BindToCinematicEvents
struct UWidget_HUD_C_BindToCinematicEvents_Params
{
};

// Function Widget_HUD.Widget_HUD_C.IsPlayerRelevantToCinematic
struct UWidget_HUD_C_IsPlayerRelevantToCinematic_Params
{
	struct FSequencerPlayerSettings*                   SequencerSettings;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsRelevant;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD.Widget_HUD_C.ToggleWidgetPinning
struct UWidget_HUD_C_ToggleWidgetPinning_Params
{
	bool*                                              DoUnpin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD.Widget_HUD_C.DragonHeartVisibility
struct UWidget_HUD_C_DragonHeartVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_SUBS_Visibility
struct UWidget_HUD_C_Get_SUBS_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_MAIN_Visibility
struct UWidget_HUD_C_Get_MAIN_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_SecundaryModHolder_Visibility_1
struct UWidget_HUD_C_Get_SecundaryModHolder_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.DragonHeartQuantity
struct UWidget_HUD_C_DragonHeartQuantity_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.GetUserSetting
struct UWidget_HUD_C_GetUserSetting_Params
{
	struct FName*                                      UserSetting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserSetting*                                Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.UpdateHUDSettings
struct UWidget_HUD_C_UpdateHUDSettings_Params
{
	struct FName*                                      UserSetting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EHudSettings>*                         Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             SizeMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             SizeMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              FixedAspectRatio_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD.Widget_HUD_C.HUD_1_Control
struct UWidget_HUD_C_HUD_1_Control_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_STA_Size
struct UWidget_HUD_C_Get_STA_Size_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_HP_Size
struct UWidget_HUD_C_Get_HP_Size_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_AltWeaponAmmo_Text_2
struct UWidget_HUD_C_Get_AltWeaponAmmo_Text_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.Get_TextBlock_1_Visibility_1
struct UWidget_HUD_C_Get_TextBlock_1_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.GetVisibility_1
struct UWidget_HUD_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.PopScale Dragonheart
struct UWidget_HUD_C_PopScale_Dragonheart_Params
{
};

// Function Widget_HUD.Widget_HUD_C.PopScale Ammo
struct UWidget_HUD_C_PopScale_Ammo_Params
{
};

// Function Widget_HUD.Widget_HUD_C.Do Pop Scale
struct UWidget_HUD_C_Do_Pop_Scale_Params
{
	class UWidget**                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Shift_Color;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD.Widget_HUD_C.Get_ZoneLevel_Text_1
struct UWidget_HUD_C_Get_ZoneLevel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.Get_ChargeLabel_Text_1
struct UWidget_HUD_C_Get_ChargeLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.Get_AltWeaponAmmo_Text_1
struct UWidget_HUD_C_Get_AltWeaponAmmo_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.Get_AltWeaponIcon_Brush_1
struct UWidget_HUD_C_Get_AltWeaponIcon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.GetAltRangedWeapon
struct UWidget_HUD_C_GetAltRangedWeapon_Params
{
	class ARangedWeapon*                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.GetActiveRangedWeapon
struct UWidget_HUD_C_GetActiveRangedWeapon_Params
{
	class ARangedWeapon*                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_Ammo_Text_1
struct UWidget_HUD_C_Get_Ammo_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.Get_WeaponIcon_Brush_1
struct UWidget_HUD_C_Get_WeaponIcon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.Get_InGameHUD_Visibility_1
struct UWidget_HUD_C_Get_InGameHUD_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.GetHud
struct UWidget_HUD_C_GetHud_Params
{
	class ATPSHud_C*                                   HUD;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_ChargeProgress_Percent_1
struct UWidget_HUD_C_Get_ChargeProgress_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_ChargeProgress_Visibility_1
struct UWidget_HUD_C_Get_ChargeProgress_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Get_Ammo_In_Clip
struct UWidget_HUD_C_Get_Ammo_In_Clip_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_HUD.Widget_HUD_C.Get_StaminaBar_Percent_1
struct UWidget_HUD_C_Get_StaminaBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnHudEvent
struct UWidget_HUD_C_OnHudEvent_Params
{
	struct FName*                                      Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.Construct
struct UWidget_HUD_C_Construct_Params
{
};

// Function Widget_HUD.Widget_HUD_C.OnNotifyTakeDamage_Event_1
struct UWidget_HUD_C_OnNotifyTakeDamage_Event_1_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Widget_HUD.Widget_HUD_C.OnVitalityChanged_Event_1
struct UWidget_HUD_C_OnVitalityChanged_Event_1_Params
{
	class UVitalityComponent**                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.ShowSummonPopup
struct UWidget_HUD_C_ShowSummonPopup_Params
{
	struct FName*                                      SummonerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.HideSummonPopup
struct UWidget_HUD_C_HideSummonPopup_Params
{
};

// Function Widget_HUD.Widget_HUD_C.fade
struct UWidget_HUD_C_fade_Params
{
	EFadeDirection*                                    Fade_Direction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnHUDOpacityChanged
struct UWidget_HUD_C_OnHUDOpacityChanged_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Size_HUD1
struct UWidget_HUD_C_OnHUDChanged_Size_HUD1_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Size_HUD2
struct UWidget_HUD_C_OnHUDChanged_Size_HUD2_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_Opacity_Minimap
struct UWidget_HUD_C_OnHUDChanged_Opacity_Minimap_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.HurtAnimation
struct UWidget_HUD_C_HurtAnimation_Params
{
	float*                                             Percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD.Widget_HUD_C.EnteringZoneAnimation
struct UWidget_HUD_C_EnteringZoneAnimation_Params
{
	struct FText*                                      ZoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_HUD.Widget_HUD_C.OnPrimaryWeaponChanged
struct UWidget_HUD_C_OnPrimaryWeaponChanged_Params
{
};

// Function Widget_HUD.Widget_HUD_C.RetractAnimationEvent
struct UWidget_HUD_C_RetractAnimationEvent_Params
{
};

// Function Widget_HUD.Widget_HUD_C.ExpandAnimationEvent
struct UWidget_HUD_C_ExpandAnimationEvent_Params
{
};

// Function Widget_HUD.Widget_HUD_C.OnHUDChanged_ExpandOrNot
struct UWidget_HUD_C_OnHUDChanged_ExpandOrNot_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.SwapWeaponsAnimation
struct UWidget_HUD_C_SwapWeaponsAnimation_Params
{
};

// Function Widget_HUD.Widget_HUD_C.OnEquipmentActivated
struct UWidget_HUD_C_OnEquipmentActivated_Params
{
	class AEquipment**                                 Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnWoundedState_Event_1
struct UWidget_HUD_C_OnWoundedState_Event_1_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnHandGunAmmoChanged
struct UWidget_HUD_C_OnHandGunAmmoChanged_Params
{
	class UVitalityComponent**                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnLongGunAmmoChanged
struct UWidget_HUD_C_OnLongGunAmmoChanged_Params
{
	class UVitalityComponent**                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.OnAmmoUpdate
struct UWidget_HUD_C_OnAmmoUpdate_Params
{
};

// Function Widget_HUD.Widget_HUD_C.OnInventoryUpdated
struct UWidget_HUD_C_OnInventoryUpdated_Params
{
};

// Function Widget_HUD.Widget_HUD_C.OnHealthChanged
struct UWidget_HUD_C_OnHealthChanged_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD.Widget_HUD_C.ResetIconCache
struct UWidget_HUD_C_ResetIconCache_Params
{
};

// Function Widget_HUD.Widget_HUD_C.ManualUpdateAmmoCounts
struct UWidget_HUD_C_ManualUpdateAmmoCounts_Params
{
};

// Function Widget_HUD.Widget_HUD_C.ExecuteUbergraph_Widget_HUD
struct UWidget_HUD_C_ExecuteUbergraph_Widget_HUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
