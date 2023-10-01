#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Cast_ElementalChance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C
// 0x0033 (0x0240 - 0x020D)
class UAbility_Siren_Cast_ElementalChance_C : public UAbility_AnointParent_Siren_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0218(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C");
		return ptr;
	}


	void OnActivated();
	void CastUsed(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> PhaseTranceAction, bool Success);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Siren_Cast_ElementalChance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
