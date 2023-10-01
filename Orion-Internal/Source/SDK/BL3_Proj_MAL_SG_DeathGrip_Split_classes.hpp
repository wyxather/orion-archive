#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_MAL_SG_DeathGrip_Split_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_MAL_SG_DeathGrip_Split.Proj_MAL_SG_DeathGrip_Split_C
// 0x002F (0x07B9 - 0x078A)
class AProj_MAL_SG_DeathGrip_Split_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UDrunkenWaveMovementComponent*               DrunkenWaveMovement1;                                     // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDrunkenWaveMovementComponent*               DrunkenWaveMovement;                                      // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AProj_MAL_SG_DeathGrip_Split_C*              LinkedProjectile;                                         // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bHasImpacted;                                             // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_MAL_SG_DeathGrip_Split.Proj_MAL_SG_DeathGrip_Split_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_MAL_SG_DeathGrip_Split(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
