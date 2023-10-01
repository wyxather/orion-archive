#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged_Capstone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassive_Beastmaster_Ranged_Capstone_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Beastmaster_Ranged_Capstone;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
