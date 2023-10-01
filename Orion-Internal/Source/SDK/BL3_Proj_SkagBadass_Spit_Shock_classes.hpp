#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagBadass_Spit_Shock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_SkagBadass_Spit_Shock.Proj_SkagBadass_Spit_Shock_C
// 0x0000 (0x07D8 - 0x07D8)
class AProj_SkagBadass_Spit_Shock_C : public AProj_SkagSpit_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_SkagBadass_Spit_Shock.Proj_SkagBadass_Spit_Shock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
