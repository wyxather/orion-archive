#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_BaseWeaponSkinData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseWeaponSkinData.BP_BaseWeaponSkinData_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_BaseWeaponSkinData_C : public UWeaponSkinPartData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseWeaponSkinData.BP_BaseWeaponSkinData_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
