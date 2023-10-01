#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Heckle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C
// 0x0058 (0x09B0 - 0x0958)
class UBPWeaponFireProjectileComponent_Heckle_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TagContainer;                                             // 0x0960(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFiringPattern*                              DefaultPattern;                                           // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultProjectile;                                        // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultProjectilePerShot;                                 // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class UClass*                                      DefaultDamageType;                                        // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PoweredUp;                                                // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09A1(0x0007) MISSED OFFSET
	class UClass*                                      PowerElement;                                             // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void PowersCombined();
	void K2_OnDeactivated();
	void CheckPlayers();
	void K2_OnActivated();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
