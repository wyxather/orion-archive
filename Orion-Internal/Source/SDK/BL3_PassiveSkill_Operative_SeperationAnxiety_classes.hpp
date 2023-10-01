#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SeperationAnxiety_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C
// 0x0008 (0x01B8 - 0x01B0)
class UPassiveSkill_Operative_SeperationAnxiety_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_PassiveSkill_Operative_SeperationAnxiety(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
