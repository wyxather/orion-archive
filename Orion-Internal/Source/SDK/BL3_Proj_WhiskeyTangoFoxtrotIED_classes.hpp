#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_WhiskeyTangoFoxtrotIED_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C
// 0x007C (0x075C - 0x06E0)
class AProj_WhiskeyTangoFoxtrotIED_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UOakTriggerComponent*                        ProximityTrigger;                                         // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Proximity;                                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TriggerRadius;                                            // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IED_Damage;                                               // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     IED_Location;                                             // 0x071C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsArmed;                                                 // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	struct FWwisePlaybackInstance                      Audio_Armed;                                              // 0x0730(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              IED_Radius;                                               // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0750(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FuseTime;                                                 // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode();
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitEnemy(struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
