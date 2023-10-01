#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_DigLoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.Notify_Loot
struct UA_PetSpiderant_DigLoot_C_Notify_Loot_Params
{
};

// Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.OnBegin
struct UA_PetSpiderant_DigLoot_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.ExecuteUbergraph_A_PetSpiderant_DigLoot
struct UA_PetSpiderant_DigLoot_C_ExecuteUbergraph_A_PetSpiderant_DigLoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
