#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_PhaseTrance_FunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UActionSkill_PhaseTrance_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_CanPerformPassiveGhostArmAction(class AOakCharacter_Player* Player, class UObject* __WorldContext, bool* bRes);
	void STATIC_TriggerPhaseTrancePassives(class AOakCharacter_Player* Player, class UObject* __WorldContext);
	void STATIC_IsImmuneToPhaseLock(class AActor* GraspTarget, class UObject* __WorldContext, bool* bRes);
	void STATIC_CalculatePhaseTranceDamage(class AOakCharacter_Player* ContextSource, const struct FPhaseTranceActivationComboData& ComboData, class UObject* __WorldContext, float* res);
	void STATIC_GetSirenStatusEffectInfo(class UObject* __WorldContext, struct FCauseDamageStatusEffectOverrides* StatusEffectOverride);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
