#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Tink_GunMelee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.OnBegin
struct UARandom_Tink_GunMelee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.MeleeAttack
struct UARandom_Tink_GunMelee_C_MeleeAttack_Params
{
};

// Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.ExecuteUbergraph_ARandom_Tink_GunMelee
struct UARandom_Tink_GunMelee_C_ExecuteUbergraph_ARandom_Tink_GunMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
