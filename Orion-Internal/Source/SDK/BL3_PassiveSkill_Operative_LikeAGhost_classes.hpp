#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_LikeAGhost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Operative_LikeAGhost_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_MatrixEffect;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_LikeAGhost.PassiveSkill_Operative_LikeAGhost_C");
		return ptr;
	}


	void OnActivated();
	void OOO_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void LikeAGhost_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Operative_LikeAGhost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
