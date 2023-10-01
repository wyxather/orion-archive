#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_SR_TwoTime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_SR_TwoTime.LightProjectile_SR_TwoTime_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_SR_TwoTime_C : public ULightProjectile_SniperRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_SR_TwoTime.LightProjectile_SR_TwoTime_C");
		return ptr;
	}


	void Split(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
