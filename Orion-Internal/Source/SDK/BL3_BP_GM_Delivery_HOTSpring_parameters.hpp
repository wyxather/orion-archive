#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_HOTSpring_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C.K2_GrenadeBeginPlay
struct UBP_GM_Delivery_HOTSpring_C_K2_GrenadeBeginPlay_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C.K2_GrenadeExplode
struct UBP_GM_Delivery_HOTSpring_C_K2_GrenadeExplode_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
