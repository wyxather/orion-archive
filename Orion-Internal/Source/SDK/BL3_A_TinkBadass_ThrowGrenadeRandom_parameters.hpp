#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkBadass_ThrowGrenadeRandom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.Throw
struct UA_TinkBadass_ThrowGrenadeRandom_C_Throw_Params
{
};

// Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.OnBegin
struct UA_TinkBadass_ThrowGrenadeRandom_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.ExecuteUbergraph_A_TinkBadass_ThrowGrenadeRandom
struct UA_TinkBadass_ThrowGrenadeRandom_C_ExecuteUbergraph_A_TinkBadass_ThrowGrenadeRandom_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
