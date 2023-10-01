#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Shield_Manawell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Shield_Manawell.Ability_Shield_Manawell_C
// 0x0056 (0x0170 - 0x011A)
class UAbility_Shield_Manawell_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Burninator;// 0x0128(0x0028)
	struct FGameResourcePoolReference                  ResourcePool;                                             // 0x0150(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AShield*                                     Shield;                                                   // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Shield_Manawell.Ability_Shield_Manawell_C");
		return ptr;
	}


	void OnActivated();
	void SlamEnd(const struct FGroundSlamEndedDetails& Details);
	void StopEffect();
	void OnDeactivated();
	void DrainShield();
	void ExecuteUbergraph_Ability_Shield_Manawell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
