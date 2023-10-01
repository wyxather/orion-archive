#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_GunfireTechRequirementsSteam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam
// 0x0028 (0x02C0 - 0x0298)
class UGunfireTechRequirementsImplSteam : public UGunfireTechRequirementsImplWin64
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0298(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam");
		return ptr;
	}


	void TriggerOnExteralAuthFailed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
