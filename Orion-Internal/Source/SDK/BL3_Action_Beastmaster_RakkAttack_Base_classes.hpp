#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_RakkAttack_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C
// 0x01D0 (0x0438 - 0x0268)
class UAction_Beastmaster_RakkAttack_Base_C : public UOakAction_Anim_ActionAbility_Pet_Skag
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             RakkTargetEQS;                                            // 0x0270(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             EQS_RakkPortalSpawnLocation;                              // 0x0328(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              QueryTargets;                                             // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MaxNumRakks;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnAttemptsOutstanding;                                 // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTargetIndex;                                       // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingInitialHoming;                                       // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class AProjectile_RakkAttack_Rakk_C*               RakkMasterController;                                     // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ProxyPortalFX;                                            // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             New_Palm_Portal_FX;                                       // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ProxyPalmFX;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGuid                                       RakkTeamID;                                               // 0x0420(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             New_Screen_FX;                                            // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C");
		return ptr;
	}


	void DoPortalFX(bool Var2Anim);
	void EnsureGoodEnd();
	void GetNextHomingTarget(class AActor** res);
	void HandleRakkSpawn(class AProjectile_RakkAttack_Rakk_C* NewRakk);
	void GetRakkSpawnTransform(struct FTransform* res);
	void SetMaxNumRakks();
	void GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202(class AActor* Actor, int InstanceIndex);
	void Notify_SpawnRakks();
	void OnServerBegin(class AActor** Actor);
	void FindTargets();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_SpawnPortal();
	void Notify_SpawnPortal_Var2();
	void Notify_Rumble();
	void Notify_CameraShake();
	void Notify_CameraShake_Var2();
	void ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
