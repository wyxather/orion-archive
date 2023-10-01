#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCS_Beastmaster_Enrage_FOV_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCS_Beastmaster_Enrage_FOV.BPCS_Beastmaster_Enrage_FoV_C
// 0x0000 (0x0180 - 0x0180)
class UBPCS_Beastmaster_Enrage_FoV_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_Beastmaster_Enrage_FOV.BPCS_Beastmaster_Enrage_FoV_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
