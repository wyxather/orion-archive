#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_CalledShot_DurationReturn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C
// 0x0030 (0x0370 - 0x0340)
class ULightProjectile_CalledShot_DurationReturn_C : public UOakLightProjectileData
{
public:
	struct FDataTableValueHandle                       DroneDuration;                                            // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       NumberOfRockets;                                          // 0x0358(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
	void EnableProjectileHoming(class UOakLightProjectile* LightProjectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
