#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_Artifact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPClass_Artifact.BPClass_Artifact_C
// 0x0034 (0x04F4 - 0x04C0)
class ABPClass_Artifact_C : public AOakInventoryEquippableItem
{
public:
	class USkeletalMeshComponent*                      ArtifactMesh;                                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Artifact_MeleeBonusDamage;                                // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Artifact_MeleeBonusHealing;                               // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAttributeFloat                          Att_RadiationExplosionRadiusMultiplier;                   // 0x04D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_RadiationExplosionDamageMultiplier;                   // 0x04DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_RadiationAuraDamageScalar;                            // 0x04E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_Artifact.BPClass_Artifact_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
