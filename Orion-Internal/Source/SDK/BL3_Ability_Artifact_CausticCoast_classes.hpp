#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CausticCoast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C
// 0x0046 (0x0160 - 0x011A)
class UAbility_Artifact_CausticCoast_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Cauterizer;// 0x0128(0x0028)
	struct FTimerHandle                                ProjectileTimer;                                          // 0x0150(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABPChar_Player_C*                            BPChar_Player;                                            // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C");
		return ptr;
	}


	void OnActivated();
	void StartSlide();
	void FireCorrosiveProjectile();
	void StoppedSliding(const struct FSlideEndedDetails& Details);
	void ExecuteUbergraph_Ability_Artifact_CausticCoast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
