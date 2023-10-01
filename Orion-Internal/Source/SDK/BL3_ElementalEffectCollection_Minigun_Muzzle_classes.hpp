#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ElementalEffectCollection_Minigun_Muzzle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementalEffectCollection_Minigun_Muzzle.ElementalEffectCollection_Minigun_Muzzle_C
// 0x0000 (0x0048 - 0x0048)
class UElementalEffectCollection_Minigun_Muzzle_C : public UIronBearMinigunEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_Minigun_Muzzle.ElementalEffectCollection_Minigun_Muzzle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
