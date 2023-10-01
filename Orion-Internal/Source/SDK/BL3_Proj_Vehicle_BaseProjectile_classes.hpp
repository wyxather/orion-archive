#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Vehicle_BaseProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C
// 0x00FF (0x0889 - 0x078A)
class AProj_Vehicle_BaseProjectile_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UProjectileAimViewPointHomingTargetComponent* ProjectileAimViewPointHomingTarget;                       // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProximityDectector;                                       // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     GameplayTasks;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Trail;                                                // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakVehicle*                                 _Vehicle;                                                 // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                _HomingTimerHandle;                                       // 0x07C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             HomingQuery;                                              // 0x07D0(0x00B8) (Edit, BlueprintVisible)
	bool                                               OverlapEnabled;                                           // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C");
		return ptr;
	}


	void IsEnemyAndAlive(class AActor* Actor, bool* EnemyAndAlive);
	void TraceFromVehicleAimPoint(float TraceLength, struct FHitResult* TraceResult, bool* TraceSuccess);
	void AddForwardVelocityBasedOnVehicle();
	void AddVelocityBasedOnVehicle();
	void UserConstructionScript();
	void Failure_75FB4B9E4205FDE1F5B3E6BC2A573144(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
	void Success_75FB4B9E4205FDE1F5B3E6BC2A573144(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnExplode();
	void StartHoming(class AActor* SpecificActor);
	void UpdateHoming();
	void OnHomingRequestSuccess(class AActor* ActorFound);
	void OnHomingRequestFail();
	void StopHoming();
	void BndEvt__ProximityDectector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_Vehicle_BaseProjectile(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void StartHomeTowardsViewPoint();
	void ExecuteUbergraph_Proj_Vehicle_BaseProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
