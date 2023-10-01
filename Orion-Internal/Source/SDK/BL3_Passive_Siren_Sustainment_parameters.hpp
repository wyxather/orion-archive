#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Sustainment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.OnActivated
struct UPassive_Siren_Sustainment_C_OnActivated_Params
{
};

// Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.ExecuteUbergraph_Passive_Siren_Sustainment
struct UPassive_Siren_Sustainment_C_ExecuteUbergraph_Passive_Siren_Sustainment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
