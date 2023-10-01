#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleGameplayAndNetworkRelevant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C
// 0x0048 (0x0540 - 0x04F8)
class ABP_DestructibleGameplayAndNetworkRelevant_C : public AGbxDestructibleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UGbxNavBoxComponent*                         GbxNavBox;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ScriptedDestructionDamageOrigin;                          // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 Wwise_Fracture_Event;                                     // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnedLootAlready;                                       // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupportsMultipleFractureEvents;                           // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasForcedTotalDestruction_;                               // 0x0522(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0523(0x0001) MISSED OFFSET
	float                                              DelayBeforeTotalDestruction;                              // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelfDamageTimerDelay;                                     // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChunksToFracturePerFrame;                                 // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeverTurnOffNavPaint;                                     // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              ForceTotalDestructionDamageRadius;                        // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Wwise_TotalDestruction_Event;                             // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C");
		return ptr;
	}


	void ForceTotalDestruction();
	void TurnOffNavPaint();
	void AttemptLootableScripting();
	void UserConstructionScript();
	void BPI_SkipToDestroyedState();
	void BPI_SetFracturable(bool Fracturable);
	void CauseDamageToRandomChunk();
	void ContinueSelfDamageLoop();
	void BPI_ScriptedTotalDestruction(float DamageRadius, float ImpulseStrength);
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_GbxComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayAndNetworkRelevant(const struct FVector& FractureCentroid, const struct FVector& HitDirection, float FracturePercent, bool bSilentFracture);
	void ExecuteUbergraph_BP_DestructibleGameplayAndNetworkRelevant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
