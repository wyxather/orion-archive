#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_AR_JAK_TraitorsDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_AR_JAK_TraitorsDeath.LightProjectile_AR_JAK_TraitorsDeath_C
// 0x0000 (0x0490 - 0x0490)
class ULightProjectile_AR_JAK_TraitorsDeath_C : public ULightProjectile_JAK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_AR_JAK_TraitorsDeath.LightProjectile_AR_JAK_TraitorsDeath_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
