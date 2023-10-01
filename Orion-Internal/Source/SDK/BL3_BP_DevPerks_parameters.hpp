#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DevPerks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DevPerks.BP_DevPerks_C.UnlimitedAmmo
struct UBP_DevPerks_C_UnlimitedAmmo_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.UnlockAllCustomizations
struct UBP_DevPerks_C_UnlockAllCustomizations_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.KillEnemies
struct UBP_DevPerks_C_KillEnemies_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.SpawnAwesomeItems
struct UBP_DevPerks_C_SpawnAwesomeItems_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.GiveGoldenKeys
struct UBP_DevPerks_C_GiveGoldenKeys_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.GiveEridium
struct UBP_DevPerks_C_GiveEridium_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.GiveCash
struct UBP_DevPerks_C_GiveCash_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.GiveLevels
struct UBP_DevPerks_C_GiveLevels_Params
{
};

// Function BP_DevPerks.BP_DevPerks_C.OnDeveloperPerkActivated
struct UBP_DevPerks_C_OnDeveloperPerkActivated_Params
{
	unsigned char*                                     Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DevPerks.BP_DevPerks_C.ExecuteUbergraph_BP_DevPerks
struct UBP_DevPerks_C_ExecuteUbergraph_BP_DevPerks_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
