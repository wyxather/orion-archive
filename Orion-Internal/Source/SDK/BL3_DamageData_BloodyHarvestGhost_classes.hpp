#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_BloodyHarvestGhost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_BloodyHarvestGhost.DamageData_BloodyHarvestGhost_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_BloodyHarvestGhost_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_BloodyHarvestGhost.DamageData_BloodyHarvestGhost_C");
		return ptr;
	}


	void OnHitAnyAttitude(class AActor** DamageInstigator, class AActor** DamageCauser, class AActor** DamageTarget, struct FDamageDataEventDetails* Details);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
