#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EffectCollection_MAL_Charge_FX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EffectCollection_MAL_Charge_FX.EffectCollection_MAL_Charge_FX_C
// 0x0000 (0x0090 - 0x0090)
class UEffectCollection_MAL_Charge_FX_C : public UElementalEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EffectCollection_MAL_Charge_FX.EffectCollection_MAL_Charge_FX_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
