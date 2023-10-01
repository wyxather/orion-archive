#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_TutorialComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TutorialComponent.BP_TutorialComponent_C.IncrementCounter
struct UBP_TutorialComponent_C_IncrementCounter_Params
{
	struct FName*                                      Counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.GetSave
struct UBP_TutorialComponent_C_GetSave_Params
{
	class USavedCharacter*                             Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.CheckCounter
struct UBP_TutorialComponent_C_CheckCounter_Params
{
	struct FName*                                      Counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               MaxCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.HasDragonHeart
struct UBP_TutorialComponent_C_HasDragonHeart_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.HasTwoRangedWeapons
struct UBP_TutorialComponent_C_HasTwoRangedWeapons_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.CanUseWeaponMod
struct UBP_TutorialComponent_C_CanUseWeaponMod_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.HasMeleeWeapon
struct UBP_TutorialComponent_C_HasMeleeWeapon_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.HasRangedWeapon
struct UBP_TutorialComponent_C_HasRangedWeapon_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetCooldown
struct UBP_TutorialComponent_C_SetCooldown_Params
{
	struct FName*                                      Cooldown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.CheckCooldown
struct UBP_TutorialComponent_C_CheckCooldown_Params
{
	struct FName*                                      Cooldown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.NotifyWounded
struct UBP_TutorialComponent_C_NotifyWounded_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnWoundedState_Event_1
struct UBP_TutorialComponent_C_OnWoundedState_Event_1_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupWoundedTutorial
struct UBP_TutorialComponent_C_SetupWoundedTutorial_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnWoundedState_Event_2
struct UBP_TutorialComponent_C_OnWoundedState_Event_2_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupReloadTutorial
struct UBP_TutorialComponent_C_SetupReloadTutorial_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnReloadTutorialTimer
struct UBP_TutorialComponent_C_OnReloadTutorialTimer_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupToggleWeaponTutorial
struct UBP_TutorialComponent_C_SetupToggleWeaponTutorial_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnToggleWeaponEvent
struct UBP_TutorialComponent_C_OnToggleWeaponEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupAttackTutorial
struct UBP_TutorialComponent_C_SetupAttackTutorial_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.CheckForTarget
struct UBP_TutorialComponent_C_CheckForTarget_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupDodgeTutorial
struct UBP_TutorialComponent_C_SetupDodgeTutorial_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnDodgeTutorialNotifyTakeDamage
struct UBP_TutorialComponent_C_OnDodgeTutorialNotifyTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupTraitsTutorial
struct UBP_TutorialComponent_C_SetupTraitsTutorial_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnLevelUp_Event_1
struct UBP_TutorialComponent_C_OnLevelUp_Event_1_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupHealthTutorial
struct UBP_TutorialComponent_C_SetupHealthTutorial_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnHealthTutorialNotifyTakeDamage
struct UBP_TutorialComponent_C_OnHealthTutorialNotifyTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnUsedDragonHeart
struct UBP_TutorialComponent_C_OnUsedDragonHeart_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.ReceiveBeginPlay
struct UBP_TutorialComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.OnEvent_Event_1
struct UBP_TutorialComponent_C_OnEvent_Event_1_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TutorialComponent.BP_TutorialComponent_C.ExecuteUbergraph_BP_TutorialComponent
struct UBP_TutorialComponent_C_ExecuteUbergraph_BP_TutorialComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
