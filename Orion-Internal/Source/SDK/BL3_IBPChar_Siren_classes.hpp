#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Siren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IBPChar_Siren.IBPChar_Siren_C
// 0x0000 (0x0028 - 0x0028)
class UIBPChar_Siren_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Siren.IBPChar_Siren_C");
		return ptr;
	}


	void GetSoulSapProjectile(class UClass** res);
	void GetStillnessOfMindControlledMove(class UClass** res);
	void SirenHasAscendantSkill(bool* res);
	void GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** _3rd_Person_Mesh, class UGbxSkeletalMeshComponent** _1st_Person_Mesh);
	void SetArmsElement(EPhaseTranceElementalType Type);
	void PlayTattooFade(bool bVisible);
	void SetArmsMaterial(class UMaterialInstance* Material);
	void Play3rdPersonArmFade(bool bInstant, bool bVisible);
	void GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms);
	void GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_3rd, class UGbxSkeletalMeshComponent** Skel_Mesh_1st);
	void GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
