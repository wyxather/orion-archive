#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IWeaponType_Hardpoints_Bearfist_Jackhammer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IWeaponType_Hardpoints_Bearfist_Jackhammer.IWeaponType_Hardpoints_Bearfist_Jackhammer_C
// 0x0000 (0x0028 - 0x0028)
class UIWeaponType_Hardpoints_Bearfist_Jackhammer_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IWeaponType_Hardpoints_Bearfist_Jackhammer.IWeaponType_Hardpoints_Bearfist_Jackhammer_C");
		return ptr;
	}


	void SetHandVisible(bool bVisible);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
