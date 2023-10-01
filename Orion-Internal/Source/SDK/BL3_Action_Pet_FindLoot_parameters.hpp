#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Pet_FindLoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.Notify_FoundLoot
struct UAction_Pet_FindLoot_C_Notify_FoundLoot_Params
{
};

// Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.ExecuteUbergraph_Action_Pet_FindLoot
struct UAction_Pet_FindLoot_C_ExecuteUbergraph_Action_Pet_FindLoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
