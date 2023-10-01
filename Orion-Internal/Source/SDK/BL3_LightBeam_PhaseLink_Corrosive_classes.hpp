#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightBeam_PhaseLink_Corrosive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightBeam_PhaseLink_Corrosive.LightBeam_PhaseLink_Corrosive_C
// 0x0000 (0x01C8 - 0x01C8)
class ULightBeam_PhaseLink_Corrosive_C : public UOakLightBeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_PhaseLink_Corrosive.LightBeam_PhaseLink_Corrosive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
