#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_CM_Alisma_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C
// 0x0058 (0x0150 - 0x00F8)
class UOakAbility_Operative_CM_Alisma_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_OakAbility_Operative_CM_Hib;// 0x0100(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Operative_CM_Alisma;// 0x0128(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C");
		return ptr;
	}


	void OnActivated();
	void CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnDeactivated();
	void ExecuteUbergraph_OakAbility_Operative_CM_Alisma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
