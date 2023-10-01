#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_FullCan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_FullCan.Passive_Gunner_FullCan_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassive_Gunner_FullCan_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_FullCan;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_FullCan.Passive_Gunner_FullCan_C");
		return ptr;
	}


	void OnActivated();
	void EnteredIronBear_FullCan(class AOakCharacter_IronBear* IronBear);
	void ExitedIronBear_FullCan(class AOakCharacter_IronBear* IronBear);
	void ExecuteUbergraph_Passive_Gunner_FullCan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
