#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_DragonHeart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Consumable_DragonHeart.Consumable_DragonHeart_C
// 0x0028 (0x0630 - 0x0608)
class AConsumable_DragonHeart_C : public ADragonHeart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Item_DragonHeart_A;                                       // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatorComponent*                           Rotator;                                                  // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              BenevolenceRange;                                         // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Benevolence_NPC_Heal_Scalar;                              // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_DragonHeart.Consumable_DragonHeart_C");
		return ptr;
	}


	bool IsDeathwish();
	bool IsReckless();
	bool DoVolatile();
	bool DoDiscord();
	void ShouldDoBenevolence(class ACharacterGunfire** Ref, bool* Out, float* Benevolence, float* Range);
	void GetCharactersForBenevolence(class ACharacterGunfire** Ref, TArray<class ACharacterGunfire*>* Characters);
	bool ValidateUse(class AActor** Actor);
	void DoBenevolence();
	void UseCharge();
	void Use();
	void ClientOnUseDragonHeart();
	void OnUseDragonHeart();
	void OnActivate();
	void ExecuteUbergraph_Consumable_DragonHeart(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
