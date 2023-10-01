#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_SkagShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_ElementalDeath
struct UBPI_SkagShared_C_Skag_ElementalDeath_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetBellyActorSpawnOption
struct UBPI_SkagShared_C_Skag_SetBellyActorSpawnOption_Params
{
	class USpawnOptionData*                            NewBellyActorSpawnOption;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_GetVariant
struct UBPI_SkagShared_C_Skag_GetVariant_Params
{
	TEnumAsByte<Enum_SkagVariants>                     SkagVariantType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_How_Interrupted
struct UBPI_SkagShared_C_Skag_How_Interrupted_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_Howl_Stop
struct UBPI_SkagShared_C_Skag_Howl_Stop_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetDefaultProjectile
struct UBPI_SkagShared_C_Skag_SetDefaultProjectile_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetBadassBombProjectile
struct UBPI_SkagShared_C_Skag_SetBadassBombProjectile_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_Howl_Start
struct UBPI_SkagShared_C_Skag_Howl_Start_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_GetElement
struct UBPI_SkagShared_C_Skag_GetElement_Params
{
	EOakElementalType                                  SkagElement;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_Transform
struct UBPI_SkagShared_C_Skag_Transform_Params
{
	EOakElementalType                                  Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForcedTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_VomitStop
struct UBPI_SkagShared_C_Skag_VomitStop_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_VomitStart
struct UBPI_SkagShared_C_Skag_VomitStart_Params
{
};

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_StolenProjFinished
struct UBPI_SkagShared_C_Skag_StolenProjFinished_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
