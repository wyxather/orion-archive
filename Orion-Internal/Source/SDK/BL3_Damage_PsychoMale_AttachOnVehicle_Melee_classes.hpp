#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_PsychoMale_AttachOnVehicle_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_PsychoMale_AttachOnVehicle_Melee.Damage_PsychoMale_AttachOnVehicle_Melee_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_PsychoMale_AttachOnVehicle_Melee_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_PsychoMale_AttachOnVehicle_Melee.Damage_PsychoMale_AttachOnVehicle_Melee_C");
		return ptr;
	}


	void OnHitEnemy(class AActor** DamageInstigator, class AActor** DamageCauser, class AActor** DamageTarget, struct FDamageDataEventDetails* Details);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
