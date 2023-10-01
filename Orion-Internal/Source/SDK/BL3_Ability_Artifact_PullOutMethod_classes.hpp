#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_PullOutMethod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C
// 0x0037 (0x0151 - 0x011A)
class UAbility_Artifact_PullOutMethod_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Burninator;// 0x0128(0x0028)
	bool                                               AbilityAvailable;                                         // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C");
		return ptr;
	}


	void Ammo_Return(class AOakCharacter* Character);
	void OnActivated();
	void SlamEnd(const struct FGroundSlamEndedDetails& Details);
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Ability_Artifact_PullOutMethod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
