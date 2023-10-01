#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkPileEvents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_EnablePile
struct UBPI_TinkPileEvents_C_TinkPile_EnablePile_Params
{
};

// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPIle_DisablePile
struct UBPI_TinkPileEvents_C_TinkPIle_DisablePile_Params
{
};

// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserExitedPile
struct UBPI_TinkPileEvents_C_TinkPile_MyUserExitedPile_Params
{
};

// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserBuiltObject
struct UBPI_TinkPileEvents_C_TinkPile_MyUserBuiltObject_Params
{
};

// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserEnteredPile
struct UBPI_TinkPileEvents_C_TinkPile_MyUserEnteredPile_Params
{
	TEnumAsByte<Enum_TinkBuildSelection>               WhatToBuild;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
