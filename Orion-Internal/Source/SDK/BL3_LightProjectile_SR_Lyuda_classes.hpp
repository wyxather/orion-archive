#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_SR_Lyuda_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_SR_Lyuda.LightProjectile_SR_Lyuda_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_SR_Lyuda_C : public ULightProjectile_SniperRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_SR_Lyuda.LightProjectile_SR_Lyuda_C");
		return ptr;
	}


	void Babies(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
