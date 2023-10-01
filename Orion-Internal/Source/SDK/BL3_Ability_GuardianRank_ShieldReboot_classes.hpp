#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_ShieldReboot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C
// 0x0038 (0x01E8 - 0x01B0)
class UAbility_GuardianRank_ShieldReboot_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	class UGameResourcePoolManagerComponent*           ResourcePoolComponent;                                    // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_GuardianRank_ShieldReboot;// 0x01C0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C");
		return ptr;
	}


	void OnActivated();
	void CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_GuardianRank_ShieldReboot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
