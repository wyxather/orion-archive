#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_PS_MAL_ThunderballFists_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_PS_MAL_ThunderballFists.LightProjectile_PS_MAL_ThunderballFists_C
// 0x0004 (0x0344 - 0x0340)
class ULightProjectile_PS_MAL_ThunderballFists_C : public UOakLightProjectileData
{
public:
	float                                              Radius;                                                   // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_PS_MAL_ThunderballFists.LightProjectile_PS_MAL_ThunderballFists_C");
		return ptr;
	}


	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
