#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Hib_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C
// 0x0058 (0x0150 - 0x00F8)
class UOakAbility_Siren_ClassMod_Hib_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FOakAbilityResourceController_SirenRushStack RsrcCntrlr_OakAbilityResourceController_SirenRushStack_OakAbility_Siren_ClassMod_Hib;// 0x0100(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_ClassMod_Hib;// 0x0128(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C");
		return ptr;
	}


	void OnActivated();
	void HibiscusClassMod_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_OakAbility_Siren_ClassMod_Hib(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
