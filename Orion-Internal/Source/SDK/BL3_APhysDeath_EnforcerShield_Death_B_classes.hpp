#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhysDeath_EnforcerShield_Death_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhysDeath_EnforcerShield_Death_B.APhysDeath_EnforcerShield_Death_B_C
// 0x0000 (0x0200 - 0x0200)
class UAPhysDeath_EnforcerShield_Death_B_C : public UOakAction_PhysicalDeath
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhysDeath_EnforcerShield_Death_B.APhysDeath_EnforcerShield_Death_B_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
