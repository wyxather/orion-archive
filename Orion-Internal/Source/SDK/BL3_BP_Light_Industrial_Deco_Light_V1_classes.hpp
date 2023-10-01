#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Light_Industrial_Deco_Light_V1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Light_Industrial_Deco_Light_V1.BP_Light_Industrial_Deco_Light_V1_C
// 0x0000 (0x0568 - 0x0568)
class ABP_Light_Industrial_Deco_Light_V1_C : public ABP_LightMesh_Accent_Spotlight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Light_Industrial_Deco_Light_V1.BP_Light_Industrial_Deco_Light_V1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
