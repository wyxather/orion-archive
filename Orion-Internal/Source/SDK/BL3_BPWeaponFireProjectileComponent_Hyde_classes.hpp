#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Hyde_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Hyde.BPWeaponFireProjectileComponent_Hyde_C
// 0x0000 (0x09B0 - 0x09B0)
class UBPWeaponFireProjectileComponent_Hyde_C : public UBPWeaponFireProjectileComponent_Heckle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Hyde.BPWeaponFireProjectileComponent_Hyde_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
