#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Beam_TOR_Hotfoot_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Beam_TOR_Hotfoot_Child.Beam_TOR_Hotfoot_Child_C
// 0x0000 (0x01C8 - 0x01C8)
class UBeam_TOR_Hotfoot_Child_C : public UOakLightBeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Beam_TOR_Hotfoot_Child.Beam_TOR_Hotfoot_Child_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
