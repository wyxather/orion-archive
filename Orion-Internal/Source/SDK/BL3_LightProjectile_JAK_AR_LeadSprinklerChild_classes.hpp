#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_JAK_AR_LeadSprinklerChild_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_JAK_AR_LeadSprinklerChild.LightProjectile_JAK_AR_LeadSprinklerChild_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_JAK_AR_LeadSprinklerChild_C : public ULightProjectile_AssaultRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_JAK_AR_LeadSprinklerChild.LightProjectile_JAK_AR_LeadSprinklerChild_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
