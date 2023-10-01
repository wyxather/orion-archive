#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Alisma_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C
// 0x0120 (0x0218 - 0x00F8)
class UOakAbility_Siren_ClassMod_Alisma_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_ClassMod_Hib;// 0x0100(0x0028)
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0128(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      TargetActor;                                              // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AttunedElement;                                           // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                GateTimer;                                                // 0x01F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       DamageScalar;                                             // 0x01F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter_Player*                        OakCharacterOwner;                                        // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C");
		return ptr;
	}


	void OnActivated();
	void Alisma_OnDealtAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void TimerReset();
	void OnResumed();
	void ExecuteUbergraph_OakAbility_Siren_ClassMod_Alisma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
