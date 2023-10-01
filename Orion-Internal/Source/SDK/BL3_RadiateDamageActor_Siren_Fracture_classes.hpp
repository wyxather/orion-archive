#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RadiateDamageActor_Siren_Fracture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C
// 0x0048 (0x07E8 - 0x07A0)
class ARadiateDamageActor_Siren_Fracture_C : public AOakRadiateDamageActor_ActionAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               EffectCollision;                                          // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPhaseTranceActivationComboData             PhasetranceCombo;                                         // 0x07C8(0x0018) (Edit, BlueprintVisible, Net)
	class UOakActionAbility_PhaseTrance*               PhasetranceActionAbility;                                 // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C");
		return ptr;
	}


	void DoDamageToEnemy(class AActor* Enemy);
	void GetFractureDamage(float* res);
	void OnRep_PhasetranceCombo();
	void SetupModData();
	void DoAreaDamage();
	class UOakActionAbility* K2_GetOwnedActionAbility();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnHitEnemy(class AActor** EnemyActor);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnPerformRadiateDamageTasks();
	void ExecuteUbergraph_RadiateDamageActor_Siren_Fracture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
