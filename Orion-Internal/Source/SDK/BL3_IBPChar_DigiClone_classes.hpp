#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_DigiClone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IBPChar_DigiClone.IBPChar_DigiClone_C
// 0x0000 (0x0028 - 0x0028)
class UIBPChar_DigiClone_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_DigiClone.IBPChar_DigiClone_C");
		return ptr;
	}


	void SetIsTeleporting(bool bIsTeleporting);
	void StartProvoke();
	void OnDigicloneTeleport();
	void UpdateMaxTeleportRange();
	void DigiCloneThrowGrenade();
	void AutomagicallyRemoveDamageOverride();
	void AutomagicallyRegisterDamageOverride(EOakElementalType ElementalType, int Grade);
	void ReleaseDigiclone();
	void KillDigiCloneNow();
	void BlowUpDigiClone();
	void StopScalingDigiClone();
	void BeginScalingDigiClone();
	void Get_Owners_Grenade_Projectile_Class(class UClass** Grenade_Projectile_Class);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
