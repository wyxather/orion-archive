#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ElementalPuddle_Mesh_Water_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElementalPuddle_Mesh_Water.BP_ElementalPuddle_Mesh_Water_C
// 0x0000 (0x0628 - 0x0628)
class ABP_ElementalPuddle_Mesh_Water_C : public AElementalPuddle_Mesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalPuddle_Mesh_Water.BP_ElementalPuddle_Mesh_Water_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
