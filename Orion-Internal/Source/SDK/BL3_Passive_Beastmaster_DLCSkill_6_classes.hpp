#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_6_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_6.Passive_Beastmaster_DLCSkill_5_C
// 0x0050 (0x0200 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_5_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Beastmaster_C*                       Beastmaster;                                              // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_6;// 0x01C0(0x0028)
	struct FDataTableValueHandle                       Scalar;                                                   // 0x01E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_6.Passive_Beastmaster_DLCSkill_5_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill5_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_6(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
