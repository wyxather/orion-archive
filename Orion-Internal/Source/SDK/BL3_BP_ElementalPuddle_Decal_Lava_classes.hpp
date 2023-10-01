#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ElementalPuddle_Decal_Lava_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C
// 0x0008 (0x0630 - 0x0628)
class ABP_ElementalPuddle_Decal_Lava_C : public AElementalPuddle_Decal
{
public:
	class UParticleSystemComponent*                    PS_Incendiary_IOPuddle_Decal;                             // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
