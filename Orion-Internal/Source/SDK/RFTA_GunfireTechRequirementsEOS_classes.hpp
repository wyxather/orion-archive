#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_GunfireTechRequirementsEOS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS
// 0x0080 (0x0318 - 0x0298)
class UGunfireTechRequirementsImplEOS : public UGunfireTechRequirementsImplWin64
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0298(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS");
		return ptr;
	}


	void DLCEntitlementsUpdated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
