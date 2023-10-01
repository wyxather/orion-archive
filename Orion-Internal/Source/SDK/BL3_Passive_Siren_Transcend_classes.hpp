#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Transcend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_Transcend.Passive_Siren_Transcend_C
// 0x0008 (0x01E8 - 0x01E0)
class UPassive_Siren_Transcend_C : public UPassiveSkill_Siren_ActionAbilityTriggered_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_Transcend.Passive_Siren_Transcend_C");
		return ptr;
	}


	void SirenActionAbilityTrigger();
	void ExecuteUbergraph_Passive_Siren_Transcend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
