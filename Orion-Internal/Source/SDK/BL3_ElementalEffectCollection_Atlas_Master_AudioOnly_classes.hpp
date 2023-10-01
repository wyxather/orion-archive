#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ElementalEffectCollection_Atlas_Master_AudioOnly_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementalEffectCollection_Atlas_Master_AudioOnly.ElementalEffectCollection_Atlas_Master_AudioOnly_C
// 0x0000 (0x0050 - 0x0050)
class UElementalEffectCollection_Atlas_Master_AudioOnly_C : public UHomingEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_Atlas_Master_AudioOnly.ElementalEffectCollection_Atlas_Master_AudioOnly_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
