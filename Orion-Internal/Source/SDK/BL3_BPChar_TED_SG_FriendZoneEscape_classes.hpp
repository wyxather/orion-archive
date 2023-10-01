#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TED_SG_FriendZoneEscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C
// 0x00D5 (0x241D - 0x2348)
class ABPChar_TED_SG_FriendZoneEscape_C : public ABPChar_AI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2348(0x0008) (Transient, DuplicateTransient)
	class UOakInventoryListComponent*                  OakInventoryList;                                         // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDialogComponent*                         OakDialog;                                                // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBodyWeaponHoldManagerComponent*             BodyWeaponHoldManager;                                    // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIBalanceStateComponent*                    AIBalanceState;                                           // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakAIWeaponUserComponent*                   AIWeaponUser1;                                            // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Proximity;                                                // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWeapon*                                     OwnerWeapon;                                              // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeapon*                                     AIWeapon;                                                 // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanShoot;                                                // 0x2398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTargetCombo;                                             // 0x2399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x239A(0x0006) MISSED OFFSET
	class AOakCharacter*                               OakCharacter;                                             // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LegBone;                                                  // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReadyAim;                                                // 0x23B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x23B1(0x0003) MISSED OFFSET
	float                                              LoadedAmmo;                                               // 0x23B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x23B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMIRV;                                                    // 0x23B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x23BA(0x0006) MISSED OFFSET
	class UWwiseEvent*                                 Audio_Explosion;                                          // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Audio_Idle;                                               // 0x23C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AI_Weapon_MinAmmo;                                        // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x23D4(0x0004) MISSED OFFSET
	class ATEDProjectile_Base_C*                       TEDProjectile_Base;                                       // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATedioreProjectile*                          TEDProjectile;                                            // 0x23E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeapDirectAction;                                         // 0x23E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LeapDirectActionClass;                                    // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Idle180Action;                                            // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Idle360Action;                                            // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Idle180ActionClass;                                       // 0x2408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Idle360ActionClass;                                       // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPS;                                                      // 0x2418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSMG;                                                     // 0x2419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSG;                                                      // 0x241A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnGround;                                                 // 0x241B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanUseDialogue;                                          // 0x241C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C");
		return ptr;
	}


	void DialogueCalloutIdle();
	void DialogueCalloutSearchingForTarget();
	void DialogueCalloutTargetAcquired();
	void DialogueCalloutTargetKilled();
	void DialogueCalloutReloading();
	void InitBlackboardKeys();
	void WeaponCreation();
	void InitWeaponData();
	void Detonated();
	void UserConstructionScript();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_TedioreTurret(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void InitializeWeapon();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_TED_SG_FriendZoneEscape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
