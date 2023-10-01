#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_Character_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_Operative_Character.Interface_Operative_Character_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Operative_Character_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Operative_Character.Interface_Operative_Character_C");
		return ptr;
	}


	void CanActivateTrapCard(bool* res);
	void SetOperativeDeviceVisible(bool bVisible);
	void GetBarrierActionAbility(class UOakActionAbility_Barrier** res);
	void GetOperativeStatusEffectOverrides(struct FCauseDamageStatusEffectOverrides* Overrides);
	void GetDigiCloneShieldRemainingPercent(float* ShieldPercentRemaining);
	void GetOperativeShieldRemainingPercent(float* ShieldPercentRemaining);
	void GetGRMLNActionAbility(class UOakActionAbility_GRMLN** res);
	void GetDigicloneActionAbility(class UOakActionAbility_Digiclone** res);
	void SpawnAndThrowOperativeGrenade(class AActor* SpawnFromActor, const struct FName& SpawnFromSocket, bool* res, class AActor** Grenade);
	void DoOperativeCryoNovaAtLocation(const struct FVector& Location, float Damage);
	void BlockOperativeActionSkillActivation(bool* ShouldBlock);
	void GetDroneSpawnLocation(struct FTransform* Transform);
	void HideOperativeDroneSpawnAnimation();
	void PlayerOperativeDroneSpawnAnimation();
	void Get_Materials_TP_Gun(TArray<class UMaterialInterface*>* Materials);
	void Get_Materials_FP_Gun(TArray<class UMaterialInterface*>* Materials);
	void Get_Materials_Skeletal_Mesh(TArray<class UMaterialInterface*>* Materials);
	void Get_Materials_Legs(TArray<class UMaterialInterface*>* Materials);
	void Get_Materials_Arms(TArray<class UMaterialInterface*>* Materials);
	void Get_Materials_Head(TArray<class UMaterialInterface*>* Materials);
	void Get_Skeletal_Mesh(class USkeletalMeshComponent** Skeletal_Mesh);
	void Get_Skeletal_Mesh_Legs(class UGbxSkeletalMeshComponent** Legs);
	void Get_Skeletal_Mesh_Arms(class USkeletalMeshComponent** Arms_Mesh);
	void Get_Skeletal_Mesh_Head(class UGbxSkeletalMeshComponent** Head_Mesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
