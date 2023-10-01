#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPLightBeam_Salamander_Mod1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPLightBeam_Salamander_Mod1.BPLightBeam_Salamander_Mod1_C
// 0x0000 (0x01C8 - 0x01C8)
class UBPLightBeam_Salamander_Mod1_C : public UBPLightBeam_Salamander_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPLightBeam_Salamander_Mod1.BPLightBeam_Salamander_Mod1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
