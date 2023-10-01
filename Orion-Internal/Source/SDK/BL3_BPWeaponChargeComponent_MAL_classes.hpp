#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponChargeComponent_MAL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponChargeComponent_MAL.BPWeaponChargeComponent_MAL_C
// 0x0000 (0x0300 - 0x0300)
class UBPWeaponChargeComponent_MAL_C : public UWeaponChargeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponChargeComponent_MAL.BPWeaponChargeComponent_MAL_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
