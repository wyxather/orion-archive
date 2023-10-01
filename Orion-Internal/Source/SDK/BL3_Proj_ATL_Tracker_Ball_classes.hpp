#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Ball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C
// 0x0048 (0x0A20 - 0x09D8)
class AProj_ATL_Tracker_Ball_C : public AProj_ATL_TrackerMaster_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio_Grenade;                                       // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TriggerCollision;                                         // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             FX_MultiTarget_Explode;                                   // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactFuse;                                               // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	struct FWwisePlaybackInstance                      ProjAudio;                                                // 0x0A08(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C");
		return ptr;
	}


	void AOE_FindTarget();
	void UserConstructionScript();
	void OnExplode();
	void ReceiveBeginPlay();
	void OnHitEnemy(struct FHitResult* Hit);
	void OnHitWorld(struct FHitResult* Hit);
	void FuseTriggered();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void AttachedActorDeath();
	void ExecuteUbergraph_Proj_ATL_Tracker_Ball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
