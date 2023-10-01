#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Cloak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_Cloak.ActionSkill_Cloak_C
// 0x0008 (0x0308 - 0x0300)
class UActionSkill_Cloak_C : public UOakActionAbility_Cloak
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Cloak.ActionSkill_Cloak_C");
		return ptr;
	}


	void TryMod4Effect();
	void TryMod1Effect();
	bool GetMaxDurationModifier(EGbxAttributeModifierType* ModifierType, float* Value);
	void OnStartActionAbility();
	void OnStopActionAbility();
	void ExecuteUbergraph_ActionSkill_Cloak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
