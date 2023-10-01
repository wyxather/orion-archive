#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GrenadeLauncherCollection_BaseClass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C
// 0x0000 (0x0028 - 0x0028)
class UGrenadeLauncherCollection_BaseClass_C : public UEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C");
		return ptr;
	}


	class UParticleSystem* GetParticleEffect(class UObject** ContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
