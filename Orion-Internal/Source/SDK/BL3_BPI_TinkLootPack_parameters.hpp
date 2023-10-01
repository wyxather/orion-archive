#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkLootPack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentThawed
struct UBPI_TinkLootPack_C_TinkLootPack_MyParentThawed_Params
{
};

// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentFrozen
struct UBPI_TinkLootPack_C_TinkLootPack_MyParentFrozen_Params
{
};

// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPaack_SetExperienceLevel
struct UBPI_TinkLootPack_C_TinkLootPaack_SetExperienceLevel_Params
{
	int                                                ExperienceLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentDied
struct UBPI_TinkLootPack_C_TinkLootPack_MyParentDied_Params
{
};

// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_SetMyParent
struct UBPI_TinkLootPack_C_TinkLootPack_SetMyParent_Params
{
	class AActor*                                      Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
