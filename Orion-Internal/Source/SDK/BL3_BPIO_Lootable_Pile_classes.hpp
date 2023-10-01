#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Pile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_Pile.BPIO_Lootable_Pile_C
// 0x0020 (0x08E0 - 0x08C0)
class ABPIO_Lootable_Pile_C : public ABPIO_LootableDamageable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   Skeletal_Mesh;                                            // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    On_Damaged;                                               // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_Pile.BPIO_Lootable_Pile_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_BonePile(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void OnLootableTakeDamage(struct FLootableObjectDamageEventDetails* Details);
	void OnEnabling();
	void ExecuteUbergraph_BPIO_Lootable_Pile(int EntryPoint);
	void On_Damaged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
