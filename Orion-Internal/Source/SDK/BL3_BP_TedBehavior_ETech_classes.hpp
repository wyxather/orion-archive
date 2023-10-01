#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TedBehavior_ETech_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TedBehavior_ETech.BP_TedBehavior_ETech_C
// 0x0000 (0x0030 - 0x0030)
class UBP_TedBehavior_ETech_C : public UTedioreBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TedBehavior_ETech.BP_TedBehavior_ETech_C");
		return ptr;
	}


	void K2_OnProjectileExplode(class ATedioreProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
