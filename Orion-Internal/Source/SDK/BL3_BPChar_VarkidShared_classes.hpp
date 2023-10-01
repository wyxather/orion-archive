#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_VarkidShared.BPChar_VarkidShared_C
// 0x0240 (0x25C1 - 0x2381)
class ABPChar_VarkidShared_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UImpactFXManagerComponent*                   ImpactFXManager;                                          // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnPointComponent*                        SpawnPoint;                                               // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInPod;                                                   // 0x23B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsNaturalEvolution;                                // 0x23B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x23B2(0x0006) MISSED OFFSET
	struct FDataTableValueHandle                       EvolveElligibilityAttributeTableRow;                      // 0x23B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<Enum_VarkidEvolution>                  EvolvingTo;                                               // 0x23D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x23D1(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<Enum_VarkidEvolution>, class USpawnOptionData*> EvolvingToSpawnOptionMap;                                 // 0x23D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<Enum_VarkidEvolution>, class UGbxUIName*> EvolvingToPodUINameMap;                                   // 0x2428(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USpawnOptionData*                            CustomEvolve_SpawnOption;                                 // 0x2478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxUIName*                                  CustomEvolve_PodUIName;                                   // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpawnedActorFromVarkidPod;                              // 0x2488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FGbxParam                                   VarkidPodHoldDuration;                                    // 0x2498(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    MyBurrowFX;                                               // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<EOakElementalType, class UGbxUIName*>         ElementToUINameMap;                                       // 0x2520(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UGbxUIName*>         ElementToUINameMap_PT2;                                   // 0x2570(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseCustomName;                                           // 0x25C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_VarkidShared.BPChar_VarkidShared_C");
		return ptr;
	}


	void Varkid_GetElement(EOakElementalType* VarkidElement);
	void Varkid_HasNavForEvolve(bool* Result);
	void Varkid_GetIsInPod(bool* IsInPod_);
	void Varkid_SetUINameByElement();
	void GetEvolveSpawnOption(class USpawnOptionData** Result);
	void DetermineNaturalEvolutionElligibility();
	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_81E6B93A454EA2E4DE809599AAF2220A(class AActor* Actor);
	void OnAnimEnd_F079A9F742D4D1C54D3AA5A416E2371B();
	void OnEnd_F079A9F742D4D1C54D3AA5A416E2371B(EGbxActionEndState EndState, class AActor* Actor);
	void Varkid_SetBurrowed(bool IsBurrowed);
	void Varkid_TargetChanged(class AActor* TargetActor);
	void Varkid_EnableRibbon();
	void Varkid_DisableRibbon();
	void Varkid_DestroyRibbon();
	void Varkid_BreathAttackStart();
	void Varkid_BreathAttackStop();
	void Varkid_Evolve(TEnumAsByte<Enum_VarkidEvolution> EvolveTo, class USpawnOptionData* CustomSpawnOption, class UGbxUIName* CustomPodUIName);
	void CE_VarkidPodSpawnChild();
	void CE_VarkidPodAnimate();
	void CE_VarkidNaturalPodDeath();
	void VarkidPod_PodAppears();
	void VarkidPod_HideBody();
	void VarkidPod_Burst();
	void ReceiveBeginPlay();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidShared(class AActor* DamageReceiver, class AActor* DamageCauser);
	void Varkid_IsFlying(bool IsFlying);
	void Varkid_AddPoisonScreenFX(class UScreenParticleManagerComponent* PlayerScreenFXManager);
	void Varkid_NonTechDeath();
	void ExecuteUbergraph_BPChar_VarkidShared(int EntryPoint);
	void OnSpawnedActorFromVarkidPod__DelegateSignature(class AActor* SpawnedChildActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
