#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TedBehavior_Sludge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C
// 0x0000 (0x0030 - 0x0030)
class UBP_TedBehavior_Sludge_C : public UTedioreBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C");
		return ptr;
	}


	void K2_OnProjectileImpact(class ATedioreProjectile** Projectile, struct FHitResult* HitResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
