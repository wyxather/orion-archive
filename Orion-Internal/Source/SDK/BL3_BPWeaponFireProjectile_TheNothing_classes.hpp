#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_TheNothing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C
// 0x0038 (0x0990 - 0x0958)
class UBPWeaponFireProjectile_TheNothing_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	TArray<class UClass*>                              Projectiles;                                              // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     Direction;                                                // 0x0970(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x097C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                BurstNumOfExplosions;                                     // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadScalar;                                             // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyUsed_Event();
	void FireProjectiles(class UClass* Data_Blueprint, int SampleCount);
	void ExecuteUbergraph_BPWeaponFireProjectile_TheNothing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
