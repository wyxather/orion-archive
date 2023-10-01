#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFistOverMatterActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFistOverMatterActor.BPFistOverMatterActor_C
// 0x0094 (0x051C - 0x0488)
class ABPFistOverMatterActor_C : public AOwnedActionAbilityActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       Web_Sphere_Radius;                                        // 0x0498(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       Web_Duration;                                             // 0x04B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter*                               InitialTarget;                                            // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UParticleSystemComponent*                    SlamEmitter;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     GroundLocation;                                           // 0x04D8(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	struct FTimerHandle                                LeftTimer;                                                // 0x04E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                RightTimer;                                               // 0x04F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SlamWaitTime;                                             // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FPhaseTranceActivationComboData             ActivationCombo;                                          // 0x0500(0x0018) (Edit, BlueprintVisible, Net)
	int                                                NewVar_1;                                                 // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFistOverMatterActor.BPFistOverMatterActor_C");
		return ptr;
	}


	void OnRep_GroundLocation();
	void PerformFeedback();
	void DoSlamDamage(const struct FVector& SlamLocation_);
	void GetfindGroundVectorLocations(struct FVector* Start, struct FVector* End);
	float GetMaxTime();
	void UserConstructionScript();
	void GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result);
	void GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result);
	void SpawnSlamEmitter();
	void WebSlamParticleSystemEvent(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void StartRightHandTimer();
	void StartLeftHandTimer();
	void ReceiveBeginPlay();
	void FindGroundLocationAsync();
	void BeginWebSlam();
	void EndWebSlam();
	void DoWebSlamLeftDamage();
	void DoWebSlamRightDamage();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BPFistOverMatterActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
