#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Light_Rustic_Hang_PipeSingle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Light_Rustic_Hang_PipeSingle.BP_Light_Rustic_Hang_PipeSingle_C
// 0x0000 (0x0568 - 0x0568)
class ABP_Light_Rustic_Hang_PipeSingle_C : public ABP_LightMesh_Accent_Point_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Light_Rustic_Hang_PipeSingle.BP_Light_Rustic_Hang_PipeSingle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
