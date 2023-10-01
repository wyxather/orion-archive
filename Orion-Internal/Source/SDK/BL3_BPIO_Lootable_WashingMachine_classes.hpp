#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_WashingMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_WashingMachine.BPIO_Lootable_WashingMachine_C
// 0x0008 (0x0928 - 0x0920)
class ABPIO_Lootable_WashingMachine_C : public ABPIO_LootableWithSurpriseEnemy_C
{
public:
	class UGbxSkeletalMeshComponent*                   Skeletal_Mesh;                                            // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_WashingMachine.BPIO_Lootable_WashingMachine_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
