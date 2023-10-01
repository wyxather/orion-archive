#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_Taunt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Pet_Taunt.A_Pet_Taunt_C.Notify_Taunt
struct UA_Pet_Taunt_C_Notify_Taunt_Params
{
};

// Function A_Pet_Taunt.A_Pet_Taunt_C.ExecuteUbergraph_A_Pet_Taunt
struct UA_Pet_Taunt_C_ExecuteUbergraph_A_Pet_Taunt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
