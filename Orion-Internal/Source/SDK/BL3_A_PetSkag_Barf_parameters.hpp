#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_Barf_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetSkag_Barf.A_PetSkag_Barf_C.OnBegin
struct UA_PetSkag_Barf_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetSkag_Barf.A_PetSkag_Barf_C.VomitDamageNotify
struct UA_PetSkag_Barf_C_VomitDamageNotify_Params
{
};

// Function A_PetSkag_Barf.A_PetSkag_Barf_C.ExecuteUbergraph_A_PetSkag_Barf
struct UA_PetSkag_Barf_C_ExecuteUbergraph_A_PetSkag_Barf_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
