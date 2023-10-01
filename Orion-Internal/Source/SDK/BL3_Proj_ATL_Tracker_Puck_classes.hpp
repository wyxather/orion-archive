#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Puck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C
// 0x00D8 (0x0AB0 - 0x09D8)
class AProj_ATL_Tracker_Puck_C : public AProj_ATL_TrackerMaster_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (Transient, DuplicateTransient)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             HomingQuery;                                              // 0x09E8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ChildCount;                                               // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetDelay;                                              // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChildClassType;                                           // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FindHomingTarget_Event();
	void Retry_Homing();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void SingleTargetTag();
	void TargetStuck();
	void OnLastBounce(struct FHitResult* ImpactResult);
	void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void AttachedActorDeath();
	void OnHitWorld(struct FHitResult* Hit);
	void OnExplode();
	void Fallback();
	void ExecuteUbergraph_Proj_ATL_Tracker_Puck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
