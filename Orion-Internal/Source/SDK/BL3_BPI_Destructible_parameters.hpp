#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Destructible_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Destructible.BPI_Destructible_C.BPI_SetFracturable
struct UBPI_Destructible_C_BPI_SetFracturable_Params
{
	bool                                               Fracturable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Destructible.BPI_Destructible_C.BPI_SkipToDestroyedState
struct UBPI_Destructible_C_BPI_SkipToDestroyedState_Params
{
};

// Function BPI_Destructible.BPI_Destructible_C.BPI_ScriptedTotalDestruction
struct UBPI_Destructible_C_BPI_ScriptedTotalDestruction_Params
{
	float                                              DamageRadius;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
