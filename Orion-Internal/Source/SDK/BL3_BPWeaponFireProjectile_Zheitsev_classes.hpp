#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Zheitsev_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C
// 0x00E8 (0x0A40 - 0x0958)
class UBPWeaponFireProjectile_Zheitsev_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             Query;                                                    // 0x0960(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                          ProjSpawnLocs;                                            // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              TargetList;                                               // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      HomingTarget;                                             // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted);
	void ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
