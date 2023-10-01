#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_JustDeserts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Delivery_JustDeserts.BP_GM_Delivery_JustDeserts_C
// 0x0000 (0x0030 - 0x0030)
class UBP_GM_Delivery_JustDeserts_C : public UGrenadeBehavior_DeliveryBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Delivery_JustDeserts.BP_GM_Delivery_JustDeserts_C");
		return ptr;
	}


	void K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
