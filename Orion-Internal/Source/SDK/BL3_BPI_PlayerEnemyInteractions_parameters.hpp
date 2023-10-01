#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PlayerEnemyInteractions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_SpawnTransfusionProjectile
struct UBPI_PlayerEnemyInteractions_C_Player_SpawnTransfusionProjectile_Params
{
	class UClass*                                      DataBlueprint__Override_;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType__Override_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer__Override_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStop
struct UBPI_PlayerEnemyInteractions_C_Enemy_OnThoughtLockStop_Params
{
};

// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStart
struct UBPI_PlayerEnemyInteractions_C_Enemy_OnThoughtLockStart_Params
{
};

// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStop
struct UBPI_PlayerEnemyInteractions_C_Enemy_OnPhaseLockStop_Params
{
};

// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStart
struct UBPI_PlayerEnemyInteractions_C_Enemy_OnPhaseLockStart_Params
{
};

// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_HealthDepleted
struct UBPI_PlayerEnemyInteractions_C_Player_HealthDepleted_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
