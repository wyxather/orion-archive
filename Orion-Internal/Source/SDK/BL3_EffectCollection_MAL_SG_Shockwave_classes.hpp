#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EffectCollection_MAL_SG_Shockwave_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EffectCollection_MAL_SG_Shockwave.EffectCollection_MAL_SG_Shockwave_C
// 0x0000 (0x0090 - 0x0090)
class UEffectCollection_MAL_SG_Shockwave_C : public UShockwaveEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EffectCollection_MAL_SG_Shockwave.EffectCollection_MAL_SG_Shockwave_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
