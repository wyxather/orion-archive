#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_JAK_AR_Bekah_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_JAK_AR_Bekah.LightProjectile_JAK_AR_Bekah_C
// 0x0000 (0x0490 - 0x0490)
class ULightProjectile_JAK_AR_Bekah_C : public ULightProjectile_JAK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_JAK_AR_Bekah.LightProjectile_JAK_AR_Bekah_C");
		return ptr;
	}


	void BehakBabies(class UOakLightProjectile* LightProjectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
