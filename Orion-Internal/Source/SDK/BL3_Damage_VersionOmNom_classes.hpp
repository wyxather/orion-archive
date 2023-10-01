#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_VersionOmNom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_VersionOmNom.Damage_VersionOmNom_C
// 0x0004 (0x0314 - 0x0310)
class UDamage_VersionOmNom_C : public UDamage_WeaponProjectile_C
{
public:
	float                                              DamageBuffDuration;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_VersionOmNom.Damage_VersionOmNom_C");
		return ptr;
	}


	void OnHitFriendly(class AActor** DamageInstigator, class AActor** DamageCauser, class AActor** DamageTarget, struct FDamageDataEventDetails* Details);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
