#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_COV_Melee_Razor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_COV_Melee_Razor.Proj_COV_Melee_Razor_C
// 0x0000 (0x0718 - 0x0718)
class AProj_COV_Melee_Razor_C : public AProj_AIMeleeWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_COV_Melee_Razor.Proj_COV_Melee_Razor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
