#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_GoonEvents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_GoonEvents.BPI_GoonEvents_C.GoonShared_TargetChanged
struct UBPI_GoonEvents_C_GoonShared_TargetChanged_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchLand
struct UBPI_GoonEvents_C_Goon_LaunchLand_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_Anointed_Death
struct UBPI_GoonEvents_C_Goon_Anointed_Death_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_GrindUpSkag
struct UBPI_GoonEvents_C_Goon_GrindUpSkag_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_OpenRiderRespawnTimerGate
struct UBPI_GoonEvents_C_Goon_OpenRiderRespawnTimerGate_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_CloseRiderRespawnTimerGate
struct UBPI_GoonEvents_C_Goon_CloseRiderRespawnTimerGate_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonAttachedTinkMaxHealth
struct UBPI_GoonEvents_C_Get_GoonAttachedTinkMaxHealth_Params
{
	float                                              AttachedTink_MaxHealth;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_SetTinkBallWeapon
struct UBPI_GoonEvents_C_Goon_SetTinkBallWeapon_Params
{
	class AWeapon*                                     TinkWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonIsDead
struct UBPI_GoonEvents_C_Set_GoonIsDead_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_GrabTinkFromPack
struct UBPI_GoonEvents_C_Goon_GrabTinkFromPack_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_SetAttachedTinkMaxHealth
struct UBPI_GoonEvents_C_Goon_SetAttachedTinkMaxHealth_Params
{
	float                                              MaxHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_DisableRight
struct UBPI_GoonEvents_C_Goon_StolenProj_DisableRight_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_EnableRight
struct UBPI_GoonEvents_C_Goon_StolenProj_EnableRight_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_Return
struct UBPI_GoonEvents_C_Goon_StolenProj_Return_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_Disarm
struct UBPI_GoonEvents_C_Goon_StolenProj_Disarm_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_Goon_IsTinkAttached_Pack
struct UBPI_GoonEvents_C_Set_Goon_IsTinkAttached_Pack_Params
{
	bool                                               IsTinkInPack;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchTink
struct UBPI_GoonEvents_C_Goon_LaunchTink_Params
{
	struct FName                                       LaunchFromSocket;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirBall
struct UBPI_GoonEvents_C_Goon_LaunchAirBall_Params
{
	struct FName                                       LaunchFromSocket;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirRing
struct UBPI_GoonEvents_C_Goon_LaunchAirRing_Params
{
	struct FName                                       LaunchFromSocket;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirDevil
struct UBPI_GoonEvents_C_Goon_LaunchAirDevil_Params
{
	struct FName                                       LaunchFromSocket;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonBalanceDamage
struct UBPI_GoonEvents_C_Get_GoonBalanceDamage_Params
{
	float                                              GoonBalancedDamage;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonLaunchSocketName
struct UBPI_GoonEvents_C_Get_GoonLaunchSocketName_Params
{
	struct FName                                       CurrentLaunchSocket;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonLaunchSocketName
struct UBPI_GoonEvents_C_Set_GoonLaunchSocketName_Params
{
	struct FName                                       SavedLaunchSocket;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_PerformBarrelLaunch
struct UBPI_GoonEvents_C_Goon_PerformBarrelLaunch_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_PerformJunkBallBarrage
struct UBPI_GoonEvents_C_Goon_PerformJunkBallBarrage_Params
{
	struct FName                                       LaunchFromSocket;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_CachedJunkBallTarget
struct UBPI_GoonEvents_C_Set_CachedJunkBallTarget_Params
{
	struct FVector                                     SavedJunkBallTargetLoc;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_CachedJunkBallTarget
struct UBPI_GoonEvents_C_Get_CachedJunkBallTarget_Params
{
	struct FVector                                     JunkBallTargetLoc;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StartTinkRespawnTimer
struct UBPI_GoonEvents_C_Goon_StartTinkRespawnTimer_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_DetachBarrel
struct UBPI_GoonEvents_C_Goon_DetachBarrel_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LJunkBall_Off
struct UBPI_GoonEvents_C_Goon_LJunkBall_Off_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LJunkBall_On
struct UBPI_GoonEvents_C_Goon_LJunkBall_On_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_TinkLoadedCount
struct UBPI_GoonEvents_C_Get_TinkLoadedCount_Params
{
	float                                              LoadedTinkCount;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_InitialLoadTinkCooldown
struct UBPI_GoonEvents_C_Get_InitialLoadTinkCooldown_Params
{
	float                                              InitialLoadTinkCooldown;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.PushTinkCannonL
struct UBPI_GoonEvents_C_PushTinkCannonL_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_IsBarrelAttached
struct UBPI_GoonEvents_C_Get_IsBarrelAttached_Params
{
	bool                                               BarrelAttachState;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsBarrelDetectorActive
struct UBPI_GoonEvents_C_Set_IsBarrelDetectorActive_Params
{
	bool                                               BarrelDetectorState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonAttachedBarrel
struct UBPI_GoonEvents_C_Set_GoonAttachedBarrel_Params
{
	class AActor*                                      NewAttachedBarrel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_CurrentSmartObject
struct UBPI_GoonEvents_C_Get_CurrentSmartObject_Params
{
	class AActor*                                      CurrentSmartObject;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AmmoTypeL
struct UBPI_GoonEvents_C_Get_AmmoTypeL_Params
{
	TEnumAsByte<Enum_GoonAmmoType>                     CurrentAmmoType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsBarrelAttached
struct UBPI_GoonEvents_C_Set_IsBarrelAttached_Params
{
	bool                                               IsTheBarrelAttached;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AmmoTypeL
struct UBPI_GoonEvents_C_Set_AmmoTypeL_Params
{
	TEnumAsByte<Enum_GoonAmmoType>                     NewAmmoType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonAttachedBarrel
struct UBPI_GoonEvents_C_Get_GoonAttachedBarrel_Params
{
	class AActor*                                      AttachedBarrel;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AirBallCount
struct UBPI_GoonEvents_C_Set_AirBallCount_Params
{
	int                                                NewAirBallCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AirBallCount
struct UBPI_GoonEvents_C_Get_AirBallCount_Params
{
	int                                                CurrentAirBallCount;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Increment_AirBallCount
struct UBPI_GoonEvents_C_Increment_AirBallCount_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AttachedTinkCurrentHealth
struct UBPI_GoonEvents_C_Get_AttachedTinkCurrentHealth_Params
{
	float                                              AttachedTinkHealth_Output;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.LoadTinkCannonL
struct UBPI_GoonEvents_C_LoadTinkCannonL_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsTinkInCannonL
struct UBPI_GoonEvents_C_Set_IsTinkInCannonL_Params
{
	bool                                               IsIt;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Increment_TinkLoadedCount
struct UBPI_GoonEvents_C_Increment_TinkLoadedCount_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Start_TinkRespawnTimer
struct UBPI_GoonEvents_C_Start_TinkRespawnTimer_Params
{
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AttachedTinkCurrentHealth
struct UBPI_GoonEvents_C_Set_AttachedTinkCurrentHealth_Params
{
	float                                              CurrentHealth;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonInPackActor
struct UBPI_GoonEvents_C_Get_GoonInPackActor_Params
{
	class AActor*                                      InPackActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GoonEvents.BPI_GoonEvents_C.GoonAttachedTink_Died
struct UBPI_GoonEvents_C_GoonAttachedTink_Died_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
