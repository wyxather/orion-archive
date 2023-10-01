#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Industrial_PortaPotty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C
// 0x0010 (0x0930 - 0x0920)
class ABPIO_Lootable_Industrial_PortaPotty_C : public ABPIO_LootableWithSurpriseEnemy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   Skeletal_Mesh;                                            // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEnabling();
	void ExecuteUbergraph_BPIO_Lootable_Industrial_PortaPotty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
