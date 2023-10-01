#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Operative_DroneActiveTerrorLifesteal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_Operative_DroneActiveTerrorLifesteal_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0100(0x0028)
	class ABPChar_Player_C*                            Player;                                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C");
		return ptr;
	}


	void OnActivated();
	void DroneStarted(TEnumAsByte<EOperativeGadgets> ActionSkill);
	void DroneEnded(TEnumAsByte<EOperativeGadgets> ActionSkill);
	void CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
