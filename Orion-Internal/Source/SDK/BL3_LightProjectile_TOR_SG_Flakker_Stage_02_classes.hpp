#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_SG_Flakker_Stage_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TOR_SG_Flakker_Stage_02.LightProjectile_TOR_SG_Flakker_Stage_02_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TOR_SG_Flakker_Stage_02_C : public ULightProjectile_TOR_SG_Flakker_Stage_01_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_SG_Flakker_Stage_02.LightProjectile_TOR_SG_Flakker_Stage_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
