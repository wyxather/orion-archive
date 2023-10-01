#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADirection_PetLoader_Flinch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ADirection_PetLoader_Flinch.ADirection_PetLoader_Flinch_C.OnBegin
struct UADirection_PetLoader_Flinch_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ADirection_PetLoader_Flinch.ADirection_PetLoader_Flinch_C.ExecuteUbergraph_ADirection_PetLoader_Flinch
struct UADirection_PetLoader_Flinch_C_ExecuteUbergraph_ADirection_PetLoader_Flinch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
