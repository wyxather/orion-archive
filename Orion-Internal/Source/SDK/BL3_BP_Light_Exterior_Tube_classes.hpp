#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Light_Exterior_Tube_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Light_Exterior_Tube.BP_Light_Exterior_Tube_C
// 0x0000 (0x0568 - 0x0568)
class ABP_Light_Exterior_Tube_C : public ABP_LightMesh_Accent_Point_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Light_Exterior_Tube.BP_Light_Exterior_Tube_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
