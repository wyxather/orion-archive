#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_TrashPile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C
// 0x0018 (0x08F8 - 0x08E0)
class ABPIO_Lootable_TrashPile_C : public ABPIO_Lootable_Pile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Loot_Plane_Attract;                                       // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PawnOverlapCollision;                                     // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Pile_Opened(class ALootableObject* LootableObject);
	void ExecuteUbergraph_BPIO_Lootable_TrashPile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
