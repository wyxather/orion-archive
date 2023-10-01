#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_DoHarm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C
// 0x0060 (0x0210 - 0x01B0)
class UPassiveSkill_Siren_DoHarm_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_DoHarm;// 0x01B8(0x0028)
	struct FOakAbilityResourceController_SirenRushStack RsrcCntrlr_OakAbilityResourceController_SirenRushStack_PassiveSkill_Siren_DoHarm;// 0x01E0(0x0028)
	class UBPEventHub_Siren_C*                         SirenEventHub;                                            // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void DoHarmOnKilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void TriggerRushEffect(int RushStacks);
	void ExecuteUbergraph_PassiveSkill_Siren_DoHarm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
