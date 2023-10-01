#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C
// 0x0038 (0x01E8 - 0x01B0)
class UPassive_Beastmaster_Bond5_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond5;// 0x01B8(0x0028)
	class UBPEventHub_Beastmaster_C*                   OwnerEventHub;                                            // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C");
		return ptr;
	}


	void OnActivated();
	void CausedDeath_Bond5(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ClassModUnique03_KillSkillTrigger(class AActor* DamagedActor);
	void ExecuteUbergraph_Passive_Beastmaster_Bond5(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
