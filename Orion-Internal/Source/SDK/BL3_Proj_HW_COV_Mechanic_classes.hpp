#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_HW_COV_Mechanic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C
// 0x0040 (0x0720 - 0x06E0)
class AProj_HW_COV_Mechanic_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TireMesh;                                                 // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UExplosionData*                              MyExplosionData;                                          // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ElementalDamageType;                                      // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C");
		return ptr;
	}


	void ProjectileDisarm(bool* Success);
	void ProjectileArm(bool* Success);
	void ProjectileDetonate(bool* Success);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnExplode();
	void OnHitWorld(struct FHitResult* Hit);
	void ExecuteUbergraph_Proj_HW_COV_Mechanic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
