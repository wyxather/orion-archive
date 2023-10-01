#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetSpiderant_Evo1_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PetSpiderant_Evo1_Fire.BPChar_PetSpiderant_Evo1_Fire_C
// 0x0018 (0x2648 - 0x2630)
class ABPChar_PetSpiderant_Evo1_Fire_C : public ABPChar_PetSpiderant_C
{
public:
	class UWwiseAudioComponent*                        Fire_Audio;                                               // 0x2630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain_1;                                              // 0x2638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Ambient_Fire;                                          // 0x2640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetSpiderant_Evo1_Fire.BPChar_PetSpiderant_Evo1_Fire_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
