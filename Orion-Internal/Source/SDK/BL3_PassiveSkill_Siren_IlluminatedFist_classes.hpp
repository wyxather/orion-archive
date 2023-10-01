#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_IlluminatedFist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C
// 0x00E0 (0x02C8 - 0x01E8)
class UPassiveSkill_Siren_IlluminatedFist_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	class UOakActionAbility_PhaseTrance*               OwnerActionAbility;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEnvQueryParams                             EQS_Query;                                                // 0x01F8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      EQS_Result_Actor;                                         // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EPhaseTranceEffectType                             PhasetranceEffectType;                                    // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	class UPlayerMeleeStateComponent*                  MeleeComponent;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C");
		return ptr;
	}


	void OnPaused();
	void OnDeactivated();
	void ToothAndNail_SetDamageType();
	void ToothAndNail_RemoveDamageType();
	void OnAttunedElementChanged();
	void OnActivated();
	void ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
