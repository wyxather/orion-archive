#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_PUK_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_PUK.Ability_Artifact_PUK_C
// 0x003E (0x0158 - 0x011A)
class UAbility_Artifact_PUK_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_PUK;// 0x0128(0x0028)
	class ABPChar_Player_C*                            Player;                                                   // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_PUK.Ability_Artifact_PUK_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Ability_Artifact_PUK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
