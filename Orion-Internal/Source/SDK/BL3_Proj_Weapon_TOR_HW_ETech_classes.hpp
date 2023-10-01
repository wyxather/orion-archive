#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_ETech_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C
// 0x0036 (0x07C0 - 0x078A)
class AProj_Weapon_TOR_HW_ETech_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            TriggerCollision;                                         // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TracerTrailFX;                                            // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              AttachedTargets;                                          // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void RainDeath();
	void OnExplode();
	void ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
