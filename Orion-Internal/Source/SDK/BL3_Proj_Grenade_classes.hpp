#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Grenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Grenade.Proj_Grenade_C
// 0x0009 (0x0961 - 0x0958)
class AProj_Grenade_C : public AGrenade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	bool                                               AIDisarmTorgue;                                           // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Grenade.Proj_Grenade_C");
		return ptr;
	}


	bool AIProjectile_CanBeStolen();
	void AIProjectileDetonate();
	void AIProjectileArm();
	void AIProjectileDisarm();
	void TriggerGrenadeDodge();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBounce(struct FHitResult* Hit, struct FVector* ImpactVelocity);
	void AIProjectile_Arm();
	void AIProjectile_Detonate();
	void AIProjectile_Disarm();
	void ExecuteUbergraph_Proj_Grenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
