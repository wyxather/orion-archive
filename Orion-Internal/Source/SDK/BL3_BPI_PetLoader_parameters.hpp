#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PetLoader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_GetType
struct UBPI_PetLoader_C_PetLoader_GetType_Params
{
	TEnumAsByte<Enum_PetLoader_Variations>             LoaderType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetImmuneToPhaselock
struct UBPI_PetLoader_C_PetLoader_SetImmuneToPhaselock_Params
{
	bool                                               bIsImmune;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaserCharge
struct UBPI_PetLoader_C_PetLoader_StartLaserCharge_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldHit
struct UBPI_PetLoader_C_PetLoaderRIOT_ShieldHit_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_IsUnboxSpawning
struct UBPI_PetLoader_C_PetLoader_IsUnboxSpawning_Params
{
	bool                                               IsUnboxing;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_AnticipateLaserBall
struct UBPI_PetLoader_C_PetLoaderBadass_AnticipateLaserBall_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_ThrowLaserBall
struct UBPI_PetLoader_C_PetLoaderBadass_ThrowLaserBall_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_ToggleHandGrip
struct UBPI_PetLoader_C_PetLoader_ToggleHandGrip_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_isSpawningSurveyor
struct UBPI_PetLoader_C_PetLoader_isSpawningSurveyor_Params
{
	bool                                               IsSpawningSurveyor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StopSpawningSurveyor
struct UBPI_PetLoader_C_PetLoader_StopSpawningSurveyor_Params
{
	bool                                               FinishedWithSuccess;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartSpawningSurveyor
struct UBPI_PetLoader_C_PetLoader_StartSpawningSurveyor_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_LaserGround
struct UBPI_PetLoader_C_PetLoaderBadass_LaserGround_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeEnd
struct UBPI_PetLoader_C_PetLoaderRIOT_ChargeEnd_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeStart
struct UBPI_PetLoader_C_PetLoaderRIOT_ChargeStart_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_ShootMissile
struct UBPI_PetLoader_C_PetLoaderRPG_ShootMissile_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_isMissileBarrageDone
struct UBPI_PetLoader_C_PetLoaderRPG_isMissileBarrageDone_Params
{
	bool                                               isDone_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldDestroyed
struct UBPI_PetLoader_C_PetLoaderRIOT_ShieldDestroyed_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ThrowShield
struct UBPI_PetLoader_C_PetLoaderRIOT_ThrowShield_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetProjectedIcon
struct UBPI_PetLoader_C_PetLoader_SetProjectedIcon_Params
{
	TEnumAsByte<Enum_PetLoader_ProjectedIcons>         Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_SelfDestruct
struct UBPI_PetLoader_C_PetLoaderEXP_SelfDestruct_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_Explode
struct UBPI_PetLoader_C_PetLoaderEXP_Explode_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaser
struct UBPI_PetLoader_C_PetLoader_StartLaser_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_EnterCrawlingState
struct UBPI_PetLoader_C_PetLoader_EnterCrawlingState_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpEnd
struct UBPI_PetLoader_C_PetLoader_JumpEnd_Params
{
};

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpStart
struct UBPI_PetLoader_C_PetLoader_JumpStart_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
