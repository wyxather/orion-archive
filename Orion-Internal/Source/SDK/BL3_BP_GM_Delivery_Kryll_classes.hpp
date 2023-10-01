#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_Kryll_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Delivery_Kryll.BP_GM_Delivery_Kryll_C
// 0x0000 (0x01D8 - 0x01D8)
class UBP_GM_Delivery_Kryll_C : public UGrenadeBehavior_DeliveryHoming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Delivery_Kryll.BP_GM_Delivery_Kryll_C");
		return ptr;
	}


	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
