#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_RakkSlag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C
// 0x005E (0x0268 - 0x020A)
class UAbility_Beast_RakkSlag_C : public UAbility_AnointParent_Beastmaster_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0218(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Beast_RakkSlag;// 0x0240(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C");
		return ptr;
	}


	void OnActivated();
	void RakkDamageDealt(class AActor* DamagedEnemy);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Beast_RakkSlag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
