#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkSuicide_ExplosiveBomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_StartSuicide
struct UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_StartSuicide_Params
{
};

// Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetCurrentHealth
struct UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetCurrentHealth_Params
{
	float                                              NewCurrentHealth;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetFuseTimer
struct UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetFuseTimer_Params
{
	float                                              NewFuseTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
