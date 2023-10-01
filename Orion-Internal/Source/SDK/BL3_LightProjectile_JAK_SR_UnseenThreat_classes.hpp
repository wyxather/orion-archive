#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_JAK_SR_UnseenThreat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_JAK_SR_UnseenThreat.LightProjectile_JAK_SR_UnseenThreat_C
// 0x00B8 (0x0548 - 0x0490)
class ULightProjectile_JAK_SR_UnseenThreat_C : public ULightProjectile_JAK_C
{
public:
	struct FEnvQueryParams                             Query;                                                    // 0x0490(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_JAK_SR_UnseenThreat.LightProjectile_JAK_SR_UnseenThreat_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
