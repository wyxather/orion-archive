#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_RakkAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_RakkAttack.ActionSkill_RakkAttack_C
// 0x0008 (0x0280 - 0x0278)
class UActionSkill_RakkAttack_C : public UOakActionAbility_RakkAttack
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_RakkAttack.ActionSkill_RakkAttack_C");
		return ptr;
	}


	void OnStartActionAbility();
	void ExecuteUbergraph_ActionSkill_RakkAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
