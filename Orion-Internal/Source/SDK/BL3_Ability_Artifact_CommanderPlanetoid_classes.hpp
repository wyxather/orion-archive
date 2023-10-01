#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CommanderPlanetoid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C
// 0x005E (0x0178 - 0x011A)
class UAbility_Artifact_CommanderPlanetoid_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                ElementalSwitchTimer;                                     // 0x0128(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ElementIndex;                                             // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UOakDamageCauserComponent*                   DamageComponent;                                          // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Artifact_CommanderPlanet_1;// 0x0140(0x0028)
	TArray<class UConditionalDamageModifier*>          Elements;                                                 // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void SwitchElement();
	void ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
