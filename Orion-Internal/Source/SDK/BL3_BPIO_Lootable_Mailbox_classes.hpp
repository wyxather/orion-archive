#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Mailbox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C
// 0x0021 (0x08E1 - 0x08C0)
class ABPIO_Lootable_Mailbox_C : public ABPIO_LootableDamageable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               PlayerBlockingBox;                                        // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Skeletal_Mesh;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Was_Damaged;                                              // 0x08E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPIO_Lootable_Mailbox(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Mailbox(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ExecuteUbergraph_BPIO_Lootable_Mailbox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
