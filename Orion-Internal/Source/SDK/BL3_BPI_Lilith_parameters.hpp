#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Lilith_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Lilith.BPI_Lilith_C.LilithWingsOff
struct UBPI_Lilith_C_LilithWingsOff_Params
{
};

// Function BPI_Lilith.BPI_Lilith_C.LilithWingsOn
struct UBPI_Lilith_C_LilithWingsOn_Params
{
};

// Function BPI_Lilith.BPI_Lilith_C.LilithPhaseTeleportTo
struct UBPI_Lilith_C_LilithPhaseTeleportTo_Params
{
	class AActor*                                      TeleportToActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Lilith.BPI_Lilith_C.LilithSpecialDownstate
struct UBPI_Lilith_C_LilithSpecialDownstate_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
