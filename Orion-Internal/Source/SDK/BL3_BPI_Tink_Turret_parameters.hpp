#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Tink_Turret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingLaserCheckOFF
struct UBPI_Tink_Turret_C_TinkTurret_TrackingLaserCheckOFF_Params
{
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingLaserCheckON
struct UBPI_Tink_Turret_C_TinkTurret_TrackingLaserCheckON_Params
{
	class AActor*                                      TrackingLaserTarget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingAudio
struct UBPI_Tink_Turret_C_TinkTurret_TrackingAudio_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TInkTurret_SetPileSpawnerComp
struct UBPI_Tink_Turret_C_TInkTurret_SetPileSpawnerComp_Params
{
	class USpawnerComponent*                           MyPileSpawnerComp;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_DeathHide
struct UBPI_Tink_Turret_C_TinkTurret_DeathHide_Params
{
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_DeathCleanUp
struct UBPI_Tink_Turret_C_TinkTurret_DeathCleanUp_Params
{
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_PerformLaunch
struct UBPI_Tink_Turret_C_TinkTurret_PerformLaunch_Params
{
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretTargetableOff
struct UBPI_Tink_Turret_C_TurretTargetableOff_Params
{
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretTargetableOn
struct UBPI_Tink_Turret_C_TurretTargetableOn_Params
{
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretGodModeOff
struct UBPI_Tink_Turret_C_TurretGodModeOff_Params
{
};

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretGodModeOn
struct UBPI_Tink_Turret_C_TurretGodModeOn_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
