#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Industrial_CarTrunk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_Industrial_CarTrunk.BPIO_Lootable_Industrial_CarTrunk_C
// 0x0008 (0x08C8 - 0x08C0)
class ABPIO_Lootable_Industrial_CarTrunk_C : public ABPIO_LootableDamageable_C
{
public:
	class UGbxSkeletalMeshComponent*                   Skeletal_Mesh;                                            // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_Industrial_CarTrunk.BPIO_Lootable_Industrial_CarTrunk_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
