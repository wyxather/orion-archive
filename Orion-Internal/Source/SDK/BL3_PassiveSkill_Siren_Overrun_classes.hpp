#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Overrun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C
// 0x01D0 (0x0380 - 0x01B0)
class UPassiveSkill_Siren_Overrun_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       BlitzCooldownTime;                                        // 0x01B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Blitz;// 0x01D0(0x0028)
	struct FEnvQueryParams                             EQSFindActor;                                             // 0x01F8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             EQSFindLocation;                                          // 0x02B0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameResourcePoolReference                  OverrunResourcePoolReference;                             // 0x0368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C");
		return ptr;
	}


	void GetFallbackBlitzLocation(struct FVector* res);
	void OnBlitzStarted();
	void ResetOverrunCooldown();
	EGbxAbilityState CalculateAbilityState();
	void BlitzCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnActivated();
	void BlitzOnPerformMelee(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget);
	void ExecuteUbergraph_PassiveSkill_Siren_Overrun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
