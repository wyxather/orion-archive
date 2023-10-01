#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Contagion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Contagion.Ability_Contagion_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Contagion_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Contagion;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Contagion.Ability_Contagion_C");
		return ptr;
	}


	void OnActivated();
	void Event_RelaodStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void DotEnd();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Contagion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
