#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_NextMagFireDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C
// 0x0008 (0x0290 - 0x0288)
class UAbility_Gunner_NextMagFireDamage_C : public UAbility_Gunner_NextMag_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C");
		return ptr;
	}


	void ReloadedWeapon(class AWeapon** EventWeapon, bool* bAutoReload);
	void ExecuteUbergraph_Ability_Gunner_NextMagFireDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
