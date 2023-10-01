#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EEffectCol_Railgun_Tracer_Mod3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EEffectCol_Railgun_Tracer_Mod3.EEffectCol_Railgun_Tracer_Mod3_C
// 0x0000 (0x0090 - 0x0090)
class UEEffectCol_Railgun_Tracer_Mod3_C : public UElementalEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EEffectCol_Railgun_Tracer_Mod3.EEffectCol_Railgun_Tracer_Mod3_C");
		return ptr;
	}


	void GetParticleEffectAndWwiseEvent(class UObject** ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
