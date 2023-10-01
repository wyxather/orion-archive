#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged6_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C
// 0x0070 (0x0220 - 0x01B0)
class UPassive_Beastmaster_Ranged6_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       Tags_Badass;                                              // 0x01B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged6;// 0x01D8(0x0028)
	class UBPEventHub_Beastmaster_C*                   OwnerEventHub;                                            // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       PetEffectDuration;                                        // 0x0208(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C");
		return ptr;
	}


	void OnCausedDeath_Ranged3(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ClassModUnique03_KillSkillTrigger(class AActor* DamagedActor);
	void HandleTriggeredAbility(class AActor* DamagedActor);
	void OnActivated();
	void ExecuteUbergraph_Passive_Beastmaster_Ranged6(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
