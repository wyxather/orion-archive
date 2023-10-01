#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_PS_Echo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_PS_Echo.LightProjectile_TOR_PS_Echo_C.OnExplode
struct ULightProjectile_TOR_PS_Echo_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_TOR_PS_Echo.LightProjectile_TOR_PS_Echo_C.LetsExplode
struct ULightProjectile_TOR_PS_Echo_C_LetsExplode_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
