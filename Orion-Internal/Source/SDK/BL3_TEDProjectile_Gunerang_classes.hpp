#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Gunerang_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TEDProjectile_Gunerang.TEDProjectile_Gunerang_C
// 0x00D9 (0x09A5 - 0x08CC)
class ATEDProjectile_Gunerang_C : public ATEDProjectile_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (Transient, DuplicateTransient)
	class UDrunkenWaveMovementComponent*               DrunkenWaveMovement;                                      // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             EQS;                                                      // 0x08E8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ReturnDelay;                                              // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bangarang;                                                // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_Gunerang.TEDProjectile_Gunerang_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReturnToSender();
	void FindNewFriends();
	void OnBounce(struct FHitResult* Hit, struct FVector* ImpactVelocity);
	void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang();
	void OnBehaviorInitialized(class UClass** BehaviorClass);
	void OnExplode();
	void ExecuteUbergraph_TEDProjectile_Gunerang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
