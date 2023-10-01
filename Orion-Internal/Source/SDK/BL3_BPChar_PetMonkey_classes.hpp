#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetMonkey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PetMonkey.BPChar_PetMonkey_C
// 0x003A (0x2622 - 0x25E8)
class ABPChar_PetMonkey_C : public ABPChar_Pet_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x25E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_BeastMaster_PetJabber_ArmGlow_Base;                    // 0x25F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio_1;                                             // 0x25F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x2600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIHeldActorComponent*                       AIHeldActor_Barrel;                                       // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRandomStream                               RandFloatStream;                                          // 0x2610(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      Ape_Barrel_Held;                                          // 0x2618(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  Ape_Barrel_Type;                                          // 0x2620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApeIngenuityAvailable;                                   // 0x2621(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetMonkey.BPChar_PetMonkey_C");
		return ptr;
	}


	void GetPetJabberIngenuityBarrel(class AActor** Barrel);
	void ClearBarrelStanceAndBB();
	void OnRep_Ape_Barrel_Held();
	void ReturnJabbermonGunWeapon(class AWeapon** NewWeapon);
	void UserConstructionScript();
	void AlignBarrelClient();
	void AttachBarrelClient();
	void ClientBarrelThrow();
	void PetJabbermon_BarrelAlign(class AActor** NewBarrel);
	void PetJabbermon_BarrelSet(class AActor** NewBarrel);
	void PetJabbermon_BarrelThrow();
	void PetJabbermon_BarrelDrop();
	void CleanupBarrel();
	void OnTakeDamage_PetJabbermonBarrel(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void Pet_DownStateStart();
	void PetJabb_CancelBarrelPickup();
	void PetJabbermon_HeldBarrelExplode();
	void OnPetReleased(bool* bForced, EPetReleaseReason* Reason);
	void BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey(class AActor* ChildActor);
	void PetJabbermon_ChangeGunVis(bool* NewVisibility);
	void OnEnrageBegin();
	void OnEnrageEnd();
	void ExecuteUbergraph_BPChar_PetMonkey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
