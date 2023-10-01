#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Technical_BarrelSecondary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C
// 0x0023 (0x08AC - 0x0889)
class AProj_Technical_BarrelSecondary_C : public AProj_Vehicle_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0890(0x0008) (Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Barrel_DamageType;                                        // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SecondaryProejctileCount;                                 // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C");
		return ptr;
	}


	void RefreshDamageInfo();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnExplode();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_Proj_Technical_BarrelSecondary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
