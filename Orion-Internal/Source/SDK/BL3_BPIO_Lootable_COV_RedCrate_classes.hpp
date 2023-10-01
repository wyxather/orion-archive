#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_COV_RedCrate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_COV_RedCrate.BPIO_Lootable_COV_RedCrate_C
// 0x0008 (0x08D0 - 0x08C8)
class ABPIO_Lootable_COV_RedCrate_C : public ABPIO_Lootable_RedChest_C
{
public:
	class UGbxSkeletalMeshComponent*                   Skeletal_Mesh;                                            // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_COV_RedCrate.BPIO_Lootable_COV_RedCrate_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
