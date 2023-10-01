#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAmmoItem_SniperRifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPAmmoItem_SniperRifle.BPAmmoItem_SniperRifle_C
// 0x0000 (0x04A8 - 0x04A8)
class ABPAmmoItem_SniperRifle_C : public AOakInventoryAmmoItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPAmmoItem_SniperRifle.BPAmmoItem_SniperRifle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
