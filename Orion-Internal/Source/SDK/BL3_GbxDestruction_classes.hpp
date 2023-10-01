#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDestruction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxDestruction.ClothActor
// 0x0018 (0x0470 - 0x0458)
class AClothActor : public AActor
{
public:
	struct FWindDirectionalSensitivity                 WindSensitivity;                                          // 0x0458(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDestruction.ClothActor");
		return ptr;
	}

};


// Class GbxDestruction.ClothSkeletalMeshActor
// 0x0018 (0x0488 - 0x0470)
class AClothSkeletalMeshActor : public AClothActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0478(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDestruction.ClothSkeletalMeshActor");
		return ptr;
	}

};


// Class GbxDestruction.ClothStaticMeshActor
// 0x0008 (0x0478 - 0x0470)
class AClothStaticMeshActor : public AClothActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDestruction.ClothStaticMeshActor");
		return ptr;
	}

};


// Class GbxDestruction.ClothManager
// 0x0048 (0x04A0 - 0x0458)
class AClothManager : public AClothManagerInterface
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0458(0x0040) MISSED OFFSET
	float                                              MaxAllowedSimCost;                                        // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeOffScreenBeforeSimulationPause;                       // 0x049C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDestruction.ClothManager");
		return ptr;
	}

};


// Class GbxDestruction.GbxDestructibleActor
// 0x0080 (0x04F8 - 0x0478)
class AGbxDestructibleActor : public ADestructibleActor
{
public:
	struct FGbxDestructibleNetBuffer                   FractureBuffer;                                           // 0x0478(0x0020) (Net)
	struct FGbxDestructibleNetBuffer                   TransformBuffer;                                          // 0x0498(0x0020) (Net)
	unsigned char                                      UnknownData00[0x38];                                      // 0x04B8(0x0038) MISSED OFFSET
	uint32_t                                           SyncID;                                                   // 0x04F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDestruction.GbxDestructibleActor");
		return ptr;
	}


	void SetFracturable(bool bFracturable);
	void OnRep_TransformBuffer();
	void OnRep_SyncID();
	void OnRep_FractureBuffer();
};


// Class GbxDestruction.GbxDestructibleComponent
// 0x0090 (0x0BD0 - 0x0B40)
class UGbxDestructibleComponent : public UDestructibleComponent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0B40(0x002C) MISSED OFFSET
	float                                              SecondsToWaitAfterNotRenderedToCleanUp;                   // 0x0B6C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityOfTransientChunk;                              // 0x0B70(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FractureEventRefireDelay;                                 // 0x0B74(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B78(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGbxComponentFracture;                                   // 0x0B80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EDestructibleRelevance                             DestructibleRelevance;                                    // 0x0B90(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ChunkCollisionChannel;                                    // 0x0B91(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0B92(0x0006) MISSED OFFSET
	class UImpactData*                                 ChunkImpactData;                                          // 0x0B98(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayFractureEventOnDebris;                               // 0x0BA0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportChunksBlockPawnMovement;                          // 0x0BA1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAssetDamageThreshold;                            // 0x0BA2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0BA3(0x0001) MISSED OFFSET
	float                                              MetersDroppedToBreak;                                     // 0x0BA4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDestructibleDamageThresholdMagnitude              DamageThresholdMagnitude;                                 // 0x0BA8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	int                                                ImpactDamageDefaultDepth;                                 // 0x0BAC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoComputeMaterialStrength;                             // 0x0BB0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAccumulateImpactDamage;                                  // 0x0BB1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0BB2(0x0002) MISSED OFFSET
	float                                              ImpactVelocityThresholdOverride;                          // 0x0BB4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTotalMass;                                            // 0x0BB8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BB9(0x0003) MISSED OFFSET
	float                                              TotalMass;                                                // 0x0BBC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideDebrisLifetime;                                  // 0x0BC0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0BC1(0x0003) MISSED OFFSET
	float                                              DebrisLifetimeMin;                                        // 0x0BC4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisLifetimeMax;                                        // 0x0BC8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FractureEffectOverlapPercent;                             // 0x0BCC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDestruction.GbxDestructibleComponent");
		return ptr;
	}


	void SetFracturable(bool bFracturable);
	float GetTotalPercentFractured();
	float GetDamageRequiredToFracture(int Depth);
	void FractureRandomChunk();
};


// Class GbxDestruction.GbxUserDestructibleSyncManager
// 0x00A0 (0x04F8 - 0x0458)
class AGbxUserDestructibleSyncManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0458(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDestruction.GbxUserDestructibleSyncManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
