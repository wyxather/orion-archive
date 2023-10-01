#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C
// 0x0078 (0x0228 - 0x01B0)
class UPassive_Beastmaster_Bond4_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond4;// 0x01B8(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Beastmaster_Bond4;// 0x01E0(0x0028)
	struct FGameplayTagContainer                       MatchingTags;                                             // 0x0208(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C");
		return ptr;
	}


	void ApplyFirstHit(class AActor* Target);
	void OnActivated();
	void PetCausedDamage_Bond4(class AActor* DamagedActor, class UDamageSource* DamageSource);
	void RegisterNewModifier(class AOakCharacter* NewPet);
	void UnregisterModifier(class AOakCharacter* NewPet);
	void OnNewPetSpawned_Bond4(class AOakCharacter* Pet);
	void OnPetReleased_Bond4(class AOakCharacter* Pet);
	void ExecuteUbergraph_Passive_Beastmaster_Bond4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
