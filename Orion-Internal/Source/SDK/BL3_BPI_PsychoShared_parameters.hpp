#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PsychoShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoLoot_Flee_Beam
struct UBPI_PsychoShared_C_PsychoLoot_Flee_Beam_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_Anointed_Death
struct UBPI_PsychoShared_C_PsychoShared_Anointed_Death_Params
{
};

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_StolenProjFinished
struct UBPI_PsychoShared_C_PsychoShared_StolenProjFinished_Params
{
};

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_GetVariant
struct UBPI_PsychoShared_C_PsychoShared_GetVariant_Params
{
	TEnumAsByte<Enum_PsychoVariants>                   PsychoVariant;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_TargetChanged
struct UBPI_PsychoShared_C_PsychoShared_TargetChanged_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_FireBreath
struct UBPI_PsychoShared_C_PsychoShared_FireBreath_Params
{
	TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_FacePlant
struct UBPI_PsychoShared_C_PsychoShared_FacePlant_Params
{
	struct FDamageReactionEventSummary                 Damage_Summary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_MaskBreak
struct UBPI_PsychoShared_C_PsychoShared_MaskBreak_Params
{
	struct FDamageReactionEventSummary                 Damage_Summary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
