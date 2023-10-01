#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Salamander_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C
// 0x0001 (0x0959 - 0x0958)
class UBPWeaponFireProjectile_Salamander_C : public UWeaponFireProjectileComponent
{
public:
	bool                                               bReadyForSplat;                                           // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C");
		return ptr;
	}


	void SetReadyForSplat(bool bReadyForSplat);
	class UClass* GetShotLightProjectileData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
