#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_VarkidSpit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_VarkidSpit.Proj_VarkidSpit_C
// 0x00C0 (0x07A0 - 0x06E0)
class AProj_VarkidSpit_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Projectile_FX;                                            // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInFlight;                                                // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	struct FHitResult                                  MyImpactHit;                                              // 0x0710(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_VarkidSpit.Proj_VarkidSpit_C");
		return ptr;
	}


	void UserConstructionScript();
	void HNT_Throw();
	void HNT_Prime();
	void HNT_Drop();
	void OnExplode();
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitDamagableObject(struct FHitResult* Hit);
	void ExecuteUbergraph_Proj_VarkidSpit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
