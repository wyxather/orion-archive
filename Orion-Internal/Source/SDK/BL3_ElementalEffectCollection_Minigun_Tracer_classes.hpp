#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ElementalEffectCollection_Minigun_Tracer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementalEffectCollection_Minigun_Tracer.ElementalEffectCollection_Minigun_Tracer_C
// 0x0000 (0x0048 - 0x0048)
class UElementalEffectCollection_Minigun_Tracer_C : public UIronBearMinigunEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_Minigun_Tracer.ElementalEffectCollection_Minigun_Tracer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
