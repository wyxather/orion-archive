#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LBeam_CyberCartel_CyberSpike_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LBeam_CyberCartel_CyberSpike.LBeam_CyberCartel_CyberSpike_C
// 0x0000 (0x01C8 - 0x01C8)
class ULBeam_CyberCartel_CyberSpike_C : public UOakLightBeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LBeam_CyberCartel_CyberSpike.LBeam_CyberCartel_CyberSpike_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
