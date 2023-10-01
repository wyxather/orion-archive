#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_Pound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.Notify_Melee
struct UA_PetSpiderant_Pound_C_Notify_Melee_Params
{
};

// Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.OnBegin
struct UA_PetSpiderant_Pound_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.ExecuteUbergraph_A_PetSpiderant_Pound
struct UA_PetSpiderant_Pound_C_ExecuteUbergraph_A_PetSpiderant_Pound_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
