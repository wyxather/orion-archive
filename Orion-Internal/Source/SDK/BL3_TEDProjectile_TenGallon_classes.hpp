#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_TenGallon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TEDProjectile_TenGallon.TEDProjectile_TenGallon_C
// 0x0018 (0x0850 - 0x0838)
class ATEDProjectile_TenGallon_C : public ATedioreProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0838(0x0008) (Transient, DuplicateTransient)
	class ABPWeap_SM_TED_C*                            BPWeap;                                                   // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadedAmmo;                                               // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactDelay;                                              // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_TenGallon.TEDProjectile_TenGallon_C");
		return ptr;
	}


	void RemoveAmmo();
	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6(class AActor* Actor, int InstanceIndex);
	void ReceiveBeginPlay();
	void OnExplode();
	void ExecuteUbergraph_TEDProjectile_TenGallon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
