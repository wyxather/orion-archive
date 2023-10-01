#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPLightBeam_Vehicle_FlameThrower_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPLightBeam_Vehicle_FlameThrower.BPLightBeam_Vehicle_FlameThrower_C
// 0x0000 (0x01C8 - 0x01C8)
class UBPLightBeam_Vehicle_FlameThrower_C : public UOakLightBeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPLightBeam_Vehicle_FlameThrower.BPLightBeam_Vehicle_FlameThrower_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
