#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ImpactEffect_Projectile_Alternator_Primary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ImpactEffect_Projectile_Alternator_Primary.ImpactEffect_Projectile_Alternator_Primary_C
// 0x0000 (0x0490 - 0x0490)
class AImpactEffect_Projectile_Alternator_Primary_C : public AImpactEffect_Projectile_Bullet_Single_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactEffect_Projectile_Alternator_Primary.ImpactEffect_Projectile_Alternator_Primary_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
