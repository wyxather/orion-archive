#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Toboggan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C
// 0x006E (0x0188 - 0x011A)
class UAbility_Artifact_Toboggan_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ElDragonJr;// 0x0128(0x0028)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Artifact_Toboggan;// 0x0158(0x0028)
	struct FTimerHandle                                BubbleTimerHandle;                                        // 0x0180(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void WeaponFired(class AWeapon* EventWeapon);
	void StartedSliding();
	void BubbleExpired();
	void ExecuteUbergraph_Ability_Artifact_Toboggan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
