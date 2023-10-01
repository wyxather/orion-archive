#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RadiateDamageActor_PetSkag_Barf_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RadiateDamageActor_PetSkag_Barf.RadiateDamageActor_PetSkag_Barf_C
// 0x0008 (0x0768 - 0x0760)
class ARadiateDamageActor_PetSkag_Barf_C : public AOakRadiateDamageActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RadiateDamageActor_PetSkag_Barf.RadiateDamageActor_PetSkag_Barf_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
