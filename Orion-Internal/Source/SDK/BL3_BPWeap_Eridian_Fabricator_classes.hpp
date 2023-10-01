#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Eridian_Fabricator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_Eridian_Fabricator.BPWeap_Eridian_Fabricator_C
// 0x0000 (0x09CC - 0x09CC)
class ABPWeap_Eridian_Fabricator_C : public ABPWeap_BaseWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Eridian_Fabricator.BPWeap_Eridian_Fabricator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
