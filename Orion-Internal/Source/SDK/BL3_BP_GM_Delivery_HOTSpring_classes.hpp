#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_HOTSpring_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C
// 0x0000 (0x0030 - 0x0030)
class UBP_GM_Delivery_HOTSpring_C : public UGrenadeBehavior_DeliveryBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C");
		return ptr;
	}


	void K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
	void K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
