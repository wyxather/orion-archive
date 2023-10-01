#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Mod_SporeShot_ProjectileVisualization_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mod_SporeShot_ProjectileVisualization.BP_Mod_SporeShot_ProjectileVisualization_C
// 0x0000 (0x03B9 - 0x03B9)
class ABP_Mod_SporeShot_ProjectileVisualization_C : public ABP_ProjectileVisualization_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mod_SporeShot_ProjectileVisualization.BP_Mod_SporeShot_ProjectileVisualization_C");
		return ptr;
	}


	void GetRadius(float* Radius);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
