#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_Unique02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Gunner_Unique02.OakAbility_Gunner_Unique02_C
// 0x0030 (0x0128 - 0x00F8)
class UOakAbility_Gunner_Unique02_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_OakAbility_Gunner_Unique02;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Gunner_Unique02.OakAbility_Gunner_Unique02_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_OakAbility_Gunner_Unique02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
