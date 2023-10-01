#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_RangedAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.OnBegin
struct UA_PetSpiderant_RangedAttack_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.Notify_Throw
struct UA_PetSpiderant_RangedAttack_C_Notify_Throw_Params
{
};

// Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.ExecuteUbergraph_A_PetSpiderant_RangedAttack
struct UA_PetSpiderant_RangedAttack_C_ExecuteUbergraph_A_PetSpiderant_RangedAttack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
