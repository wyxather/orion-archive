#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Dakota_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Dakota.BPWeaponFireProjectileComponent_Dakota_C
// 0x0000 (0x0980 - 0x0980)
class UBPWeaponFireProjectileComponent_Dakota_C : public UWeaponJAKFireProjectileComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Dakota.BPWeaponFireProjectileComponent_Dakota_C");
		return ptr;
	}


	class UClass* GetShotLightProjectileData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
