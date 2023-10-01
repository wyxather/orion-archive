#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_Swarm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C
// 0x0106 (0x0890 - 0x078A)
class AProj_Weapon_TOR_HW_Swarm_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Swarm_Missiles;                                        // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TracerTrailFX;                                            // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             HomingQuery;                                              // 0x07B0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      HomingTarget;                                             // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LightProjectile;                                          // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      FireID;                                                   // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0879(0x0003) MISSED OFFSET
	struct FVector                                     EndLocation;                                              // 0x087C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ProjectilesSpawned;                                       // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SwarmCount;                                               // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C");
		return ptr;
	}


	struct FVector GenerateEndLocation();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FindHomingTarget(float Delay);
	void TargetFound();
	void InitSwarm();
	void ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
