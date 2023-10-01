#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_DoubleDowner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_DoubleDowner.Ability_DoubleDowner_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_DoubleDowner_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_DoubleDowner;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_DoubleDowner.Ability_DoubleDowner_C");
		return ptr;
	}


	void OnActivated();
	void Downed();
	void Upped();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_DoubleDowner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
