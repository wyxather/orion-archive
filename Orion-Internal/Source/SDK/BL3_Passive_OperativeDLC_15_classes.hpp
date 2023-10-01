#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_15_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_OperativeDLC_15.Passive_OperativeDLC_14_C
// 0x0048 (0x01F8 - 0x01B0)
class UPassive_OperativeDLC_14_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_OperativeDLC_15;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       PierceShotScalar;                                         // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_15.Passive_OperativeDLC_14_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill14_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Passive_OperativeDLC_15(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
