#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_DigiClone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C
// 0x0188 (0x0588 - 0x0400)
class UActionSkill_Operative_DigiClone_C : public UOakActionAbility_Digiclone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	bool                                               PanicButtonTriggered;                                     // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowJustAcceptItProjectile;                              // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnedDigiclone;                                        // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x040B(0x0001) MISSED OFFSET
	float                                              JustAcceptItStoredDamage;                                 // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEnvQueryParams                             CloneExitLocationDeafultParams;                           // 0x0410(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             CloneExitLocationPass1Params;                             // 0x04C8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              NovaRadius;                                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NovaCryoMultiplier;                                       // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C");
		return ptr;
	}


	void GetDigiCloneReference(class AActor** Digiclone);
	void Is_DigiClone_Active(bool* Return);
	void GetQueryParamsForCloneSwapLocationAttempt(int* Attempt, struct FEnvQueryParams* Params, class AActor** QueryContext);
	bool ShouldStopAbilityOnPawnSlotComponentAttach();
	void PlayDigiCloneSpawnFX(class ABPChar_DigiClone_Base_C* NewClone);
	void PayDigiCloneSpawnCost(int GrenadeSpawnCost);
	void GetDigiCloneGrenadeSpawnCost(int* res);
	void GetDigicloneClass(int GrenadeSpawnCost, class UClass** res);
	void DoBurst();
	bool TryJustAcceptRefund(float* Damage, struct FVector* HitLocation, struct FVector* HitDirection);
	class AOakCharacter* SpawnNewDigiclone(struct FVector* Location);
	void StartDistractionPrinciple();
	bool ShouldAbortActivation(unsigned char* OutAbortCode);
	float GetCooldownRestartPercent();
	void Add_Swap_Places_Modifier();
	void Corsican(float Damage, class APawn* DamageSource);
	void OnStartActionAbility();
	void SwapPlaces(ECloneSwapReason* Reason);
	void ReleaseDigiclone(class AOakCharacter** Digiclone);
	void OnCorsicanDamage(float* Damage, class APawn** DamageSource);
	void BeginDetonateClone();
	void CancelDetonateClone();
	void NotifyPanicButtonTriggered();
	void Just_Accept_It_Timer_Done();
	void OnCloneSwapStarted();
	void OnPlayerSwapStarted();
	void OnPlayerSwapSucceeded();
	void StartSeperationAnxietyNova(const struct FVector& Loc);
	void OnCloneSwapSucceeded();
	void OnPlayerSwapFailed();
	void OnCloneSwapFailed();
	void ExecuteUbergraph_ActionSkill_Operative_DigiClone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
