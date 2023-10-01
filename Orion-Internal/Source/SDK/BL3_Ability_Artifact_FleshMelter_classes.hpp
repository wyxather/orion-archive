#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_FleshMelter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C
// 0x0036 (0x0150 - 0x011A)
class UAbility_Artifact_FleshMelter_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_FleshMelter;// 0x0128(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C");
		return ptr;
	}


	void CausedDeath_FleshMelter(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_Ability_Artifact_FleshMelter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
