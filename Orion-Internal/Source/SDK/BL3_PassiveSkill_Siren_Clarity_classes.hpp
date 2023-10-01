#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Clarity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_Clarity.PassiveSkill_Siren_Clarity_C
// 0x0008 (0x01E8 - 0x01E0)
class UPassiveSkill_Siren_Clarity_C : public UPassiveSkill_Siren_ActionAbilityTriggered_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Clarity.PassiveSkill_Siren_Clarity_C");
		return ptr;
	}


	void SirenActionAbilityTrigger();
	void ExecuteUbergraph_PassiveSkill_Siren_Clarity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
