#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakDestruction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OakDestruction.CryoDestructibleComponent
// 0x00C0 (0x0C90 - 0x0BD0)
class UCryoDestructibleComponent : public UGbxDestructibleComponent
{
public:
	class UMaterialInterface*                          BaseMaterial;                                             // 0x0BD0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FracturedLifeSpan;                                        // 0x0BD8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FracturedMaterial;                                        // 0x0BE0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FracturedInteriorMaterial;                                // 0x0BE8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFractureEffect                             FractureEffect;                                           // 0x0BF0(0x0010) (Edit, DisableEditOnInstance)
	class UClass*                                      FracturedActorClass;                                      // 0x0C00(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FreezeRateVariation;                                      // 0x0C08(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThawJitterSpeed;                                          // 0x0C0C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThawJitterScale;                                          // 0x0C10(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C14(0x0004) MISSED OFFSET
	struct FName                                       ThawMaterialParamName;                                    // 0x0C18(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DissolveTime;                                             // 0x0C20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DissolveDelayTime;                                        // 0x0C24(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DissolvePositionOffsetScale;                              // 0x0C28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4C];                                      // 0x0C2C(0x004C) MISSED OFFSET
	class UDestructibleComponent*                      LinkedDestructible;                                       // 0x0C78(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0C80(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakDestruction.CryoDestructibleComponent");
		return ptr;
	}

};


// Class OakDestruction.OakDestructibleFXManager
// 0x0068 (0x04C0 - 0x0458)
class AOakDestructibleFXManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0458(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakDestruction.OakDestructibleFXManager");
		return ptr;
	}


	void OnDestructibleDestroyed(class AActor* DestroyedActor);
	void DestroyAllDestructibles();
	void ClientApplyRadiusDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ClientApplyDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
