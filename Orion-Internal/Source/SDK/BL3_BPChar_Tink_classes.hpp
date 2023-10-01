#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Tink.BPChar_Tink_C
// 0x00A0 (0x2421 - 0x2381)
class ABPChar_Tink_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UAICloakComponent*                           AICloak;                                                  // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIMeleeSpawningComponent_C*                 AIMeleeSpawningComponent;                                 // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIExplosiveSpawningComponent_C*             AIExplosiveSpawningComponent;                             // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCoverUserComponent*                         CoverUser;                                                // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Tink_SetSmartObjectReference;                             // 0x23C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<Enum_TinkBuildSelection>               WhatToBuild;                                              // 0x23D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceNoPileUse;                                           // 0x23D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x23D2(0x0006) MISSED OFFSET
	class AWeapon*                                     MyWeapon;                                                 // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Tink_HackedInTinkPileUseCooldown;                         // 0x23E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AActor*                                      MeleeWeapon;                                              // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ThrownExplosive;                                          // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MyAttachedTo;                                             // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TinkIsAttached;                                           // 0x2408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGoonBuddy;                                              // 0x2409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TinkSpawnsFlying;                                         // 0x240A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TinkIsFlying;                                             // 0x240B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x240C(0x0004) MISSED OFFSET
	class AActor*                                      MyDamageCauser;                                           // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USocketComponent*                            ExitSocket;                                               // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EOakElementalType                                  TinkElement;                                              // 0x2420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Tink.BPChar_Tink_C");
		return ptr;
	}


	void Tink_GetElement(EOakElementalType* CurrentElement);
	void Tink_GetMyDamageCauser(class AActor** WhoDamagedTink);
	void Get_TinkIsFlying(bool* TinkIsFlying);
	void Get_TinkMyAttachedTo(class AActor** WhatIsTinkAttachedTo);
	void Get_TinkIsAttached(bool* TinkAttachedState);
	void Get_TinkWhatToBuild(TEnumAsByte<Enum_TinkBuildSelection>* WhatShouldTheTinkBuild);
	void Get_TinkMeleeWeapon(class AActor** TinkMeleeWeapon);
	void UserConstructionScript();
	void Event_TinkHasDied();
	void Tink_CheerGoon();
	void Tink_ForceMountToDetachRider();
	void Tink_HasBeenPhaseLocked();
	void Tink_MeleeWeapon();
	void Tink_Explosive();
	void Tink_Mourn(class AActor* WhoToMourn);
	void Tink_BallTinkSpawned();
	void Tink_SetGoonChildMati(class UMaterialInterface* GoonTinkMati);
	void TinkBaddass_StartMeleeConvert();
	void Tink_TinkPileXform();
	void Tink_StartGyroCannonAttack();
	void Tink_SetNewWeapon(class AWeapon* WeaponToPass);
	void Tink_SetTinkBallAnimInstance();
	void Tink_Anointed_Death();
	void Tink_SuicideBombDetonated();
	void Tink_TargetChanged(class AActor* TargetActor);
	void Tink_VomitStart();
	void Tink_VomitStop();
	void Tink_StartSuicideAttempt();
	void Set_TinkIsAttached(bool TinkAttachedState);
	void Set_TinkMyAttachedTo(class AActor* WhatIsTinkAttachedTo);
	void TinkDetachFromMount(bool bEjected, class AActor* DamageCauser, const struct FVector& HitDirection);
	void Tink_ShowWeapon();
	void Tink_HideWeapon();
	void StopTinkDetachMetro();
	void ReceiveBeginPlay();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Tink_Basic(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_6_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_Tink(int EntryPoint);
	void Tink_HackedInTinkPileUseCooldown__DelegateSignature();
	void Tink_SetSmartObjectReference__DelegateSignature(class AActor* CurrentSmartObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
