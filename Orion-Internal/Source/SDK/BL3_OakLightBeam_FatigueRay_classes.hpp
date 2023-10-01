#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakLightBeam_FatigueRay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakLightBeam_FatigueRay.OakLightBeam_FatigueRay_C
// 0x0000 (0x01C8 - 0x01C8)
class UOakLightBeam_FatigueRay_C : public UOakLightBeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakLightBeam_FatigueRay.OakLightBeam_FatigueRay_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
