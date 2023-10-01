#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_Fastball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Delivery_Fastball.BP_GM_Delivery_Fastball_C
// 0x0000 (0x0030 - 0x0030)
class UBP_GM_Delivery_Fastball_C : public UGrenadeBehavior_DeliveryBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Delivery_Fastball.BP_GM_Delivery_Fastball_C");
		return ptr;
	}


	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
