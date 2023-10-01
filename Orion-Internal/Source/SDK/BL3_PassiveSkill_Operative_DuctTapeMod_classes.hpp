#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_DuctTapeMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C
// 0x0078 (0x0228 - 0x01B0)
class UPassiveSkill_Operative_DuctTapeMod_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_DuctTapeMod;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       Chance;                                                   // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AGrenade*                                    SpawnedGrenade;                                           // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Operative_DuctTapeMod;// 0x0200(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C");
		return ptr;
	}


	void GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result);
	void GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result);
	void OnActivated();
	void DuctTape_OnWeaponReloadEnded(class AWeapon* EventWeapon, bool bCompleted);
	void DuctTape_OnWeaponUsed(class AWeapon* EventWeapon);
	void ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
