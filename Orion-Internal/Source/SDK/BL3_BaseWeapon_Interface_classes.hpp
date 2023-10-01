#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BaseWeapon_Interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseWeapon_Interface.BaseWeapon_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBaseWeapon_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseWeapon_Interface.BaseWeapon_Interface_C");
		return ptr;
	}


	void BPAnim_Data(float* FiregripType, float* GripType, float* ScopeType, float* ModeType);
	void GetChargePercent(float* ChargePercent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
