#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_Customization_BodyMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPClass_Customization_BodyMesh.BPClass_Customization_BodyMesh_C
// 0x0000 (0x04A8 - 0x04A8)
class ABPClass_Customization_BodyMesh_C : public AOakInventoryCustomizationPartItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_Customization_BodyMesh.BPClass_Customization_BodyMesh_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
