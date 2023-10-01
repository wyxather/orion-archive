#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Drone_VDayHeart_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C
// 0x0091 (0x07C1 - 0x0730)
class AProj_Drone_VDayHeart_Parent_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDrunkenRandomMovementComponent*             DrunkenRandomMovement;                                    // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere1;                                                  // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      HeartOwnerKiller;                                         // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              HeartExplosion;                                           // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBeginCleanup;                                         // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	class UClass*                                      HeartDamageType;                                          // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxAttributeData*                           HeartDamage;                                              // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeInitializationData                HeartRadius;                                              // 0x0778(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<Enum_VDay_HeartTypes>                  HeartType;                                                // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 Audio_Loop;                                               // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      OwnerDeathType;                                           // 0x07C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C");
		return ptr;
	}


	void OnRep_OwnerDeathType();
	void OnHealthDepletedHeart(class AActor* DamageCauser);
	void SetHeartVelocity();
	void HandleStatIncrementDialog(class AActor* Actor);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void OnDeath_HeartOwner(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnHitWorld(struct FHitResult* Hit);
	void BeginCleanup();
	void Destroyed_HeartOwner(class AActor* DestroyedActor);
	void OwnerDiedByHostile();
	void OnHitDamagableObject(struct FHitResult* Hit);
	void ExecuteUbergraph_Proj_Drone_VDayHeart_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
