#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Gargoyle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C
// 0x00E8 (0x0A40 - 0x0958)
class UBPWeaponFireProjectile_Gargoyle_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             Query;                                                    // 0x0960(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                          ProjSpawnLocs;                                            // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              TargetList;                                               // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      HomingTarget;                                             // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted);
	void NotifyUsed_Event();
	void ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
