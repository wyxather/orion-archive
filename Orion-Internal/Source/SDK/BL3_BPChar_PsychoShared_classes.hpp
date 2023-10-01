#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PsychoShared.BPChar_PsychoShared_C
// 0x005F (0x23E0 - 0x2381)
class ABPChar_PsychoShared_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         MaskLight;                                                // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIExplosiveSpawningComponent_C*             AIExplosiveSpawningComponent;                             // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIMeleeSpawningComponent_C*                 AIMeleeSpawningComponent;                                 // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<Enum_PsychoVariants>                   PsychoVariantType;                                        // 0x23B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  PsychoElementType;                                        // 0x23B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x23BA(0x0006) MISSED OFFSET
	struct FWwisePlaybackInstance                      Audio_FireBreathInstance;                                 // 0x23C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APawn*                                       MyHitReactionCauser;                                      // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PsychoShared.BPChar_PsychoShared_C");
		return ptr;
	}


	void PsychoShared_GetVariant(TEnumAsByte<Enum_PsychoVariants>* PsychoVariant);
	void UserConstructionScript();
	void PsychoShared_MaskBreak(const struct FDamageReactionEventSummary& Damage_Summary);
	void PsychoShared_FireBreath(TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function);
	void PsychoShared_StolenProjFinished();
	void PsychoShared_Anointed_Death();
	void PsychoLoot_Flee_Beam(bool Start);
	void PsychoShared_FacePlant(const struct FDamageReactionEventSummary& Damage_Summary);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitReactionPlayedDelegate__DelegateSignature_BPChar_PsychoFirebrand(class AActor* DamageReceiver, class AActor* DamageCauser, class UHitReactionTag* Tag);
	void ReceiveBeginPlay();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_PsychoMaleShared(class AActor* DamageReceiver, class AActor* DamageCauser);
	void PsychoShared_TargetChanged(class AActor* TargetActor);
	void CE_VehicleEnter(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void CE_EnterTurret(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_HitReactionPlayedDelegate__DelegateSignature_BPChar_Goon_UNIX1553272339(class AActor* DamageReceiver, class AActor* DamageCauser, class UHitReactionTag* Tag);
	void ExecuteUbergraph_BPChar_PsychoShared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
