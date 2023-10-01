#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_MIRV_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C
// 0x0018 (0x0850 - 0x0838)
class ATEDProjectile_MIRV_Base_C : public ATedioreProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0838(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      CurrentBehavior;                                          // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C");
		return ptr;
	}


	bool AIProjectile_CanBeStolen();
	void FuelOut();
	void UserConstructionScript();
	void OnBehaviorInitialized(class UClass** BehaviorClass);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TEDProjectile_MIRV_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
