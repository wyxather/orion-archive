#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_SkagShared.BPChar_SkagShared_C
// 0x027F (0x2600 - 0x2381)
class ABPChar_SkagShared_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        AmbientBodyLight;                                         // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIExplosiveSpawningComponent_C*             AIExplosiveSpawningComponent;                             // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	EOakElementalType                                  SkagElement;                                              // 0x23B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTransform;                                             // 0x23B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x23B2(0x0006) MISSED OFFSET
	TMap<EOakElementalType, class UGbxUIName*>         ElementToUINameMap;                                       // 0x23B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UClass*>             ElementToAIExplosiveComponentMap;                         // 0x2408(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Vomit_PredictionForwardVelocity;                          // 0x2458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Vomit_TickRate;                                           // 0x245C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Vomit_Failsafe;                                           // 0x2460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2461(0x0007) MISSED OFFSET
	TMap<EOakElementalType, class USplatData*>         ElementToVomitSplatMap;                                   // 0x2468(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UParticleSystem*>    ElementToVomitFXMap;                                      // 0x24B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Enum_SkagVariants>                     SkagVariantType;                                          // 0x2508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2509(0x0007) MISSED OFFSET
	TMap<EOakElementalType, class UWwiseEvent*>        Element_To_Wwise_Aura_Start;                              // 0x2510(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UWwiseEvent*>        Element_To_Wwise_Aura_Stop;                               // 0x2560(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UGbxUIName*>         ElementToUINameMapPT2;                                    // 0x25B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_SkagShared.BPChar_SkagShared_C");
		return ptr;
	}


	void Skag_GetVariant(TEnumAsByte<Enum_SkagVariants>* SkagVariantType);
	void Skag_GetElement(EOakElementalType* SkagElement);
	void Skag_SetUIName();
	void UserConstructionScript();
	void Skag_StolenProjFinished();
	void Skag_Howl_Start();
	void Skag_SetBadassBombProjectile();
	void Skag_Howl_Stop();
	void Skag_How_Interrupted();
	void Skag_SetBellyActorSpawnOption(class USpawnOptionData* NewBellyActorSpawnOption);
	void CE_SkagConfigElementalResist();
	void Skag_Transform(EOakElementalType Element, bool IsForcedTransform);
	void Skag_VomitStart();
	void Skag_VomitStop();
	void ReceiveBeginPlay();
	void Skag_SetDefaultProjectile();
	void Skag_ElementalDeath();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagShared(class AActor* DamageReceiver, class AActor* DamageCauser);
	void Wwise_Aura_Loop_START();
	void Wwise_Aura_Lp_STOP();
	void ExecuteUbergraph_BPChar_SkagShared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
