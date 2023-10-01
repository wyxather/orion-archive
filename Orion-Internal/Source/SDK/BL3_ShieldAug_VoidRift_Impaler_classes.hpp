#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_VoidRift_Impaler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_VoidRift_Impaler.ShieldAug_VoidRift_Impaler_C
// 0x0000 (0x0248 - 0x0248)
class UShieldAug_VoidRift_Impaler_C : public UShieldAugment_Spike
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_VoidRift_Impaler.ShieldAug_VoidRift_Impaler_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
