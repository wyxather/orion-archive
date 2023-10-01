#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Resource_Rare_HardenedIron_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Resource_Rare_HardenedIron.Resource_Rare_HardenedIron_C
// 0x0008 (0x04E8 - 0x04E0)
class AResource_Rare_HardenedIron_C : public AResource_Material_Iron_Base_C
{
public:
	class UStaticMeshComponent*                        StaticMesh_1;                                             // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Rare_HardenedIron.Resource_Rare_HardenedIron_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
