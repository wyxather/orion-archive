#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CosmicCrater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C
// 0x0066 (0x0180 - 0x011A)
class UAbility_Artifact_CosmicCrater_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Burninator;// 0x0128(0x0028)
	bool                                               AbilityAvailable;                                         // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	class USplatData*                                  Splat_Corrosive;                                          // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplatData*                                  Splat_Cryo;                                               // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplatData*                                  Splat_Radiation;                                          // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplatData*                                  Splat_Fire;                                               // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplatData*                                  Splat_Shock;                                              // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C");
		return ptr;
	}


	void Ammo_Return(class AOakCharacter* Character);
	void OnActivated();
	void SlamEnd(const struct FGroundSlamEndedDetails& Details);
	void ExecuteUbergraph_Ability_Artifact_CosmicCrater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
