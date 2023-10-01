#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Grasp_ConstantNova_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C
// 0x001B (0x0228 - 0x020D)
class UAbility_Siren_Grasp_ConstantNova_C : public UAbility_AnointParent_Siren_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      ActionSkillElement;                                       // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                NovaTimer;                                                // 0x0220(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void TriggerNova();
	void AnointRemoveEffect();
	void StartTriggeringNovas();
	void AnointGraspEnded(bool* Killed);
	void ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
