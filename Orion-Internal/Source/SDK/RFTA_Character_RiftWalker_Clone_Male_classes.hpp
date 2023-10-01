#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_RiftWalker_Clone_Male_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_RiftWalker_Clone_Male.Character_RiftWalker_Clone_Male_C
// 0x0000 (0x0B90 - 0x0B90)
class ACharacter_RiftWalker_Clone_Male_C : public ACharacter_RiftWalker_Clone_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_RiftWalker_Clone_Male.Character_RiftWalker_Clone_Male_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
