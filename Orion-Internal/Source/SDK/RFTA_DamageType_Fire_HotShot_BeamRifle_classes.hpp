#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_DamageType_Fire_HotShot_BeamRifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageType_Fire_HotShot_BeamRifle.DamageType_Fire_HotShot_BeamRifle_C
// 0x0000 (0x0108 - 0x0108)
class UDamageType_Fire_HotShot_BeamRifle_C : public UDamageType_Ranged_Fire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_Fire_HotShot_BeamRifle.DamageType_Fire_HotShot_BeamRifle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
