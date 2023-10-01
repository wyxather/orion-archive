#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_Anointed_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.MeleeAttack
struct UA_Tink_Anointed_Melee_C_MeleeAttack_Params
{
};

// Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.OnBegin
struct UA_Tink_Anointed_Melee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.ExecuteUbergraph_A_Tink_Anointed_Melee
struct UA_Tink_Anointed_Melee_C_ExecuteUbergraph_A_Tink_Anointed_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
