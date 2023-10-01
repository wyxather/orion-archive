#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_LittleYeeti_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_LittleYeeti.Ability_LittleYeeti_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_LittleYeeti_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Malevolent;// 0x0100(0x0028)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_LittleYeeti.Ability_LittleYeeti_C");
		return ptr;
	}


	void OnActivated();
	void CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_LittleYeeti(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
