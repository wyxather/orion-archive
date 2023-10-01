#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetSkag_Evo2_Eridian_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PetSkag_Evo2_Eridian.BPChar_PetSkag_Evo2_Eridian_C
// 0x0008 (0x2610 - 0x2608)
class ABPChar_PetSkag_Evo2_Eridian_C : public ABPChar_PetSkag_C
{
public:
	class UParticleSystemComponent*                    PS_BeastMaster_PetSkag_EridianBody;                       // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetSkag_Evo2_Eridian.BPChar_PetSkag_Evo2_Eridian_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
