#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Siren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Siren.BPChar_Siren_C
// 0x0085 (0x366D - 0x35E8)
class ABPChar_Siren_C : public ABPChar_Player_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x35E8(0x0008) (Transient, DuplicateTransient)
	class UFaceFXComponent*                            FaceFX;                                                   // 0x35F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPSirenCharacterComponent_C*                BPSirenCharacterComponent;                                // 0x35F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PhaseCast_Body;                                           // 0x3600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   PhaseCast_Head;                                           // 0x3608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PhaseCast_Arms;                                           // 0x3610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SK_Play_SirenBrawler_Base_Head;                           // 0x3618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Ghost_Arms_3rd;                                           // 0x3620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TattooFlare_Scalar_D2A50537458CFA8E3B7462A51046E30B;      // 0x3628(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TattooFlare__Direction_D2A50537458CFA8E3B7462A51046E30B;  // 0x362C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x362D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TattooFlare;                                              // 0x3630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeArms3rd_Scalar_B54767784E02CDC0D75380ABF7394F15;      // 0x3638(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeArms3rd__Direction_B54767784E02CDC0D75380ABF7394F15;  // 0x363C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x363D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeArms3rd;                                              // 0x3640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Ghost_Arms_1st;                                           // 0x3648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Arms;                                                     // 0x3650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBPEventHub_Siren_C*                         SirenEventHub;                                            // 0x3658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAttributeFloat                          Att_Siren_FindYourCenterActive;                           // 0x3660(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               bArmFadeInterrupted;                                      // 0x366C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Siren.BPChar_Siren_C");
		return ptr;
	}


	void GetSoulSapProjectile(class UClass** res);
	void GetStillnessOfMindControlledMove(class UClass** res);
	void SirenHasAscendantSkill(bool* res);
	void GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** _3rd_Person_Mesh, class UGbxSkeletalMeshComponent** _1st_Person_Mesh);
	void GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms);
	void GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_3rd, class UGbxSkeletalMeshComponent** Skel_Mesh_1st);
	void GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res);
	void GetHeadMesh(class USkeletalMesh** HeadMesh);
	class UOakActionAbility* GetPrimaryActionAbility();
	void UserConstructionScript();
	void FadeArms3rd__FinishedFunc();
	void FadeArms3rd__UpdateFunc();
	void TattooFlare__FinishedFunc();
	void TattooFlare__UpdateFunc();
	void SetArmsMaterial(class UMaterialInstance* Material);
	void Play3rdPersonArmFade(bool bInstant, bool bVisible);
	void PlayTattooFade(bool bVisible);
	void SetArmsElement(EPhaseTranceElementalType Type);
	void HandleInstant3rdPersonArmFade(bool bVisible);
	void Handle3rdPersonArmFadeTransition(bool bVisible);
	void BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ReceiveBeginPlay();
	void InterruptArmFade();
	void BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void PhasegraspEndedAndEnemyKilled(bool Killed);
	void ExecuteUbergraph_BPChar_Siren(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
